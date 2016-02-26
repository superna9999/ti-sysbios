/* 
 * Copyright (c) 2012, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * */
/*
 *  ======== Hwi.c ========
 */

#include <xdc/runtime/Error.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Assert.h>

#define ti_sysbios_knl_Task__internalaccess
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/interfaces/IHwi.h>
#include <ti/sysbios/BIOS.h>

#include "package/internal/Hwi.xdc.h"

extern Char *ti_sysbios_family_xxx_Hwi_switchToIsrStack();
extern Void ti_sysbios_family_xxx_Hwi_switchToTaskStack(Char *oldTaskSP);

#define Hwi_switchToIsrStack ti_sysbios_family_xxx_Hwi_switchToIsrStack
#define Hwi_switchToTaskStack ti_sysbios_family_xxx_Hwi_switchToTaskStack

static Int postInit(Hwi_Object *hwi, Error_Block *eb);
static Void initIntController();

#ifdef ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__D
/* disable unused local variable warning during optimized compile */
#pragma diag_suppress=179
#define TASK_DISABLE Task_disable
#define TASK_RESTORE Task_restoreHwi
#else
#define TASK_DISABLE Hwi_taskDisable
#define TASK_RESTORE Hwi_taskRestoreHwi
#endif

#ifdef ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__D
/* disable unused local variable warning during optimized compile */
#pragma diag_suppress=179
#define SWI_DISABLE Swi_disable
#define SWI_RESTORE Swi_restoreHwi
#else
#define SWI_DISABLE Hwi_swiDisable
#define SWI_RESTORE Hwi_swiRestoreHwi
#endif

/*
 *  ======== Hwi_Module_startup ========
 */
Int Hwi_Module_startup(Int phase)
{
    int i;
    Hwi_Object *hwi;

    /* 
     *  perform the BIOS specific interrupt disable operation so
     *  main is entered with interrupts disabled.
     */
    Hwi_disable();

#ifndef ti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS
    for (i = 0; i < Hwi_hooks.length; i++) {
        if (Hwi_hooks.elem[i].registerFxn != NULL) {
            Hwi_hooks.elem[i].registerFxn(i);
        }
    }
#endif

    initIntController();

    /* 
     * Initialize the pointer to the isrStack.
     *
     * The dispatcher's SP is decremented to accomodate its local variables 
     * BEFORE switching to the ISR stack. Consequently, the intial value of
     * the ISR stack SP must leave room for these variables.
     *
     * Leave room for up to 32 32 bit local variables.
     */
    Hwi_module->isrStack = (Char *) (((UInt32) (Hwi_module->isrStackBase) & 0xfffffff8) + 
                                     (UInt32) Hwi_module->isrStackSize - 32 * sizeof(Int));

    Hwi_module->taskSP = (Char *)-1;    /* signal that we're executing */
                                        /* on the ISR stack */

    for (i = 0; i < Hwi_NUM_INTERRUPTS; i++) {
        hwi = Hwi_module->dispatchTable[i];
        if (hwi !=  NULL) {
            postInit(hwi, NULL);
        }
    }

    return Startup_DONE;
}

/*
 *  ======== Hwi_Instance_init ========
 */
Int Hwi_Instance_init(Hwi_Object *hwi, Int intNum, 
                      Hwi_FuncPtr fxn, const Hwi_Params *params,
                      Error_Block *eb)
{
    Int status;
    UInt priority;

    if (Hwi_module->dispatchTable[intNum] != NULL) {
        Error_raise(eb, Hwi_E_alreadyDefined, intNum, 0);
        return (1);
    }

    Hwi_module->dispatchTable[intNum] = hwi;

    hwi->intNum = intNum;

    /* 
     * the -1 sentinel priority is the default passed by hal Hwi_create().
     * Translate it to 255, which is our default priority.
     */
    if (params->priority == -1) {
        priority = 255;
    }
    else {
        priority = params->priority;
    }

    /* Bypass dispatcher for zero-latency interrupts */
    if (priority < Hwi_disablePriority) {
        Hwi_plug(intNum, (Hwi_VectorFuncPtr)fxn);
    }
    else {
        Hwi_plug(intNum, Hwi_dispatch);
    }

    Hwi_reconfig(hwi, fxn, params);

#ifndef ti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS
    if (Hwi_hooks.length > 0) {
        /* Allocate environment space for each hook instance. */
        hwi->hookEnv = Memory_calloc(Hwi_Object_heap(),
                Hwi_hooks.length * sizeof(Ptr), 0, eb);

        if (hwi->hookEnv == NULL) {
            return (1);
        }
    }
#endif

    hwi->irp = 0;

    status = postInit(hwi, eb);

    if (Error_check(eb)) {
        return (2 + status);
    }

    return (0);
}

/*
 *  ======== postInit ========
 *  Function to be called during module startup to complete the
 *  initialization of any statically created or constructed Hwi.
 *  returns (0) and clean 'eb' on success
 *  returns 'eb' *and* 'n' for number of successful createFxn() calls iff
 *      one of the createFxn() calls fails
 */
static Int postInit (Hwi_Object *hwi, Error_Block *eb)
{
    Int i;

#ifndef ti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS
    for (i = 0; i < Hwi_hooks.length; i++) {
        hwi->hookEnv[i] = (Ptr)0;
        if (Hwi_hooks.elem[i].createFxn != NULL) {
            Hwi_hooks.elem[i].createFxn((IHwi_Handle)hwi, eb);

            if (Error_check(eb)) {
                return (i);
            }
        }
    }
#endif

    return (0);
}

/*
 *  ======== Hwi_Instance_finalize ========
 */
Void Hwi_Instance_finalize(Hwi_Object *hwi, Int status)
{
    Int i, cnt;
    UInt intNum;

    intNum = hwi->intNum;

    Hwi_disableInterrupt(intNum);
    Hwi_module->dispatchTable[intNum] = NULL;
    Hwi_plug(intNum, Hwi_excHandlerAsm);

    if (status == 1) {  /* failed Hwi_create */
        return;
    }

#ifndef ti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS
    if (Hwi_hooks.length > 0) {
        if (status == 0) {
            cnt = Hwi_hooks.length;
        }
        else {
            cnt = status - 2;
        }

        for (i = 0; i < cnt; i++) {
            if (Hwi_hooks.elem[i].deleteFxn != NULL) {
                Hwi_hooks.elem[i].deleteFxn((IHwi_Handle)hwi);
            }
        }

        Memory_free(Hwi_Object_heap(), hwi->hookEnv,
                Hwi_hooks.length * sizeof(Ptr));
    }
#endif
}

/*
 *  ======== Hwi_initVTOR ========
 *  run as a Startup.firstFxn
 */
extern UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[];
#define Hwi_resetVectors ti_sysbios_family_arm_m3_Hwi_resetVectors

Void Hwi_initVTOR()
{
    UInt intNum;
    UInt32 *ramVectors;

    /* configure Vector Table Offset Register */    
    Hwi_nvic.VTOR = (UInt32)Hwi_module->vectorTableBase;

    /* copy ROM vector table contents to RAM vector table */
    if (Hwi_nvic.VTOR != 0) {
        ramVectors = Hwi_module->vectorTableBase;

        for (intNum = 0; intNum < Hwi_NUM_INTERRUPTS; intNum++) {
            ramVectors[intNum] = Hwi_resetVectors[intNum];
        }
    }
}

/*
 *  ======== initIntController ========
 */
static Void initIntController()
{
    Int i;

    /* Disable all interrupts to start with */
    Hwi_nvic.ICER[0] = 0xffffffff;
    Hwi_nvic.ICER[1] = 0xffffffff;
    Hwi_nvic.ICER[2] = 0xffffffff;
    Hwi_nvic.ICER[3] = 0xffffffff;
    Hwi_nvic.ICER[4] = 0xffffffff;
    Hwi_nvic.ICER[5] = 0xffffffff;
    Hwi_nvic.ICER[6] = 0xffffffff;
    Hwi_nvic.ICER[7] = 0xffffffff;

    /* Set the configured PRIGROUP value */
    Hwi_nvic.AIRCR = (Hwi_nvic.AIRCR & 0xffff00ff) + (Hwi_priGroup << 8) + 0x05fa0000;

    /* Set interrupt priorities */
    for (i = 0; i < Hwi_NUM_INTERRUPTS; i++) {
        Hwi_setPriority(i, Hwi_module->priorities[i]);
    }

    /* Clear any currently pending, enabled interrupts */
    Hwi_nvic.ICPR[0] = Hwi_module->iser[0];
    Hwi_nvic.ICPR[1] = Hwi_module->iser[1];
    Hwi_nvic.ICPR[2] = Hwi_module->iser[2];
    Hwi_nvic.ICPR[3] = Hwi_module->iser[3];
    Hwi_nvic.ICPR[4] = Hwi_module->iser[4];
    Hwi_nvic.ICPR[5] = Hwi_module->iser[5];
    Hwi_nvic.ICPR[6] = Hwi_module->iser[6];
    Hwi_nvic.ICPR[7] = Hwi_module->iser[7];

    /* Enable any statically config'd interrupts that are enabled */
    /* don't do this if WA1.1 is enabled */
    if ((Hwi_module->enables & 0x0001) == 0) {
        Hwi_nvic.ISER[0] = Hwi_module->iser[0];
        Hwi_nvic.ISER[1] = Hwi_module->iser[1];
        Hwi_nvic.ISER[2] = Hwi_module->iser[2];
        Hwi_nvic.ISER[3] = Hwi_module->iser[3];
        Hwi_nvic.ISER[4] = Hwi_module->iser[4];
        Hwi_nvic.ISER[5] = Hwi_module->iser[5];
        Hwi_nvic.ISER[6] = Hwi_module->iser[6];
        Hwi_nvic.ISER[7] = Hwi_module->iser[7];

        /* don't forget the SysTick interrupt */
        if (Hwi_module->enables & 0x8000) {
            Hwi_nvic.STCSR |= 2;
        }
    }

    /* set pendSV interrupt priority to Hwi_disablePriority */
    Hwi_nvic.SHPR[10] = Hwi_disablePriority;

    /* set CCR per user's preference */
    Hwi_nvic.CCR = Hwi_ccr;
}

/*
 *  ======== Hwi_startup ========
 */
Void Hwi_startup()
{
    Hwi_enable();
}

/*
 * Below APIs provided for backward compatability.
 */

#ifdef __ti__
#pragma CODE_SECTION(ti_sysbios_family_arm_m3_Hwi_disable__E, ".text:ti_sysbios_family_arm_m3_Hwi_disable__E")
#pragma CODE_SECTION(ti_sysbios_family_arm_m3_Hwi_enable__E, ".text:ti_sysbios_family_arm_m3_Hwi_enable__E")
#pragma CODE_SECTION(ti_sysbios_family_arm_m3_Hwi_restore__E, ".text:ti_sysbios_family_arm_m3_Hwi_restore__E")
#pragma FUNC_EXT_CALLED(ti_sysbios_family_arm_m3_Hwi_disable__E);
#pragma FUNC_EXT_CALLED(ti_sysbios_family_arm_m3_Hwi_enable__E);
#pragma FUNC_EXT_CALLED(ti_sysbios_family_arm_m3_Hwi_restore__E);
#endif

#ifdef __ti__
/*
 *  ======== Hwi_disable ========
 */
UInt ti_sysbios_family_arm_m3_Hwi_disable__E() 
{
    return (_set_interrupt_priority(Hwi_disablePriority));
}
 
/*
 *  ======== Hwi_enable ========
 */
UInt ti_sysbios_family_arm_m3_Hwi_enable__E()
{
    return _set_interrupt_priority(0);
}

/*
 *  ======== Hwi_restore ========
 */
Void ti_sysbios_family_arm_m3_Hwi_restore__E(UInt key)
{
    _set_interrupt_priority(key);
}
#endif

static Void disableAllInts_wa1_1()
{
    /* disable all individual user interrupts again */
    Hwi_nvic.ICER[0] = 0xffffffff;
    Hwi_nvic.ICER[1] = 0xffffffff;

    /* disable the SysTick Int */
    Hwi_nvic.STCSR = 0x00000005;
}

/*
 *  ======== Hwi_allowInterrupts_wa1_1 ========
 */
Void Hwi_allowInterrupts_wa1_1()
{
    /*
     * use volatile to force these to be stack variables
     * so that r3 can be used in assembly code below
     */
    volatile UInt swiKey, tskKey;

    /* skip if WA1.1 not enabled */
    if ((Hwi_module->enables & 0x0001) == 0) {
        return;
    }

    swiKey = Swi_disable();
    tskKey = Task_disable();

    /* disable interrupts globally while enabling individual ints */    
    Hwi_disable();

    /* Enable individual interrupts */

    /* Move RAM ISER images into NVIC */
    Hwi_nvic.ISER[0] = Hwi_module->iser[0];
    Hwi_nvic.ISER[1] = Hwi_module->iser[1];

    /* enable the SysTick Int */
    if (Hwi_module->enables & 0x8000) {
        Hwi_nvic.STCSR = 0x00000007;
    }

    /* insert memory barrier here to clean out the pipeline */
    asm("        dmb                   ");

    /* enable interrupts globally */    
    /* Hwi_enable() - Switch to assembly to avoid data loads */
    asm("        mov     r3, #0        ");
    asm("        msr     basepri, r3   ");

    /* interrupts enabled here for very brief time */
    asm("        nop                   ");
    asm("        nop                   ");
    asm("        nop                   ");

    /* disable interrupts globally again */
    /* Hwi_disable() - Switch to assembly to avoid data loads */
    asm("        mov     r3, #0x10     ");
    asm("        msr     basepri, r3   ");

    /* disable all individual user interrupts again */
    disableAllInts_wa1_1();

    /* enable interrupts globally per normal BIOS API expectations */    
    /* Hwi_enable() - Switch to assembly to avoid data loads */
    asm("        mov     r3, #0        ");
    asm("        msr     basepri, r3   ");

    /* all individual interrupts are disabled on return from this function */

    Swi_restore(swiKey);
    Task_restore(tskKey);
}

/*
 *  ======== Hwi_beginHook_wa1_1 ========
 */
Void Hwi_beginHook_wa1_1(IHwi_Handle hwi)
{
    disableAllInts_wa1_1();
}

/*
 *  ======== Hwi_clearInterrupt ========
 */
Void Hwi_clearInterrupt(UInt intNum)
{
    UInt index, mask;

    if (intNum >= 16) {

        index = (intNum-16) >> 5;

        mask = 1 << ((intNum-16) & 0x1f);

        Hwi_nvic.ICPR[index] = mask;
    }
    else {
    
    }
}

/*
 *  ======== Hwi_getHandle ========
 */
Hwi_Handle Hwi_getHandle(UInt intNum)
{
    return (Hwi_module->dispatchTable[intNum]);
}

/*
 *  ======== Hwi_plug ========
 */
Void Hwi_plug(UInt intNum, Hwi_VectorFuncPtr fxn)
{
    UInt32 *func;

    func = (UInt32 *)Hwi_module->vectorTableBase + intNum;

    *func = (UInt32)fxn;
}

/*
 *  ======== switchFromBootStack ========
 *  Indicate that we are leaving the boot stack and
 *  are about to switch to a task stack.
 *
 *  Must be (and is) called with interrupts disabled from
 *  Task_startup().
 */
Void Hwi_switchFromBootStack()
{
    /* split thread and handler stacks */
    Hwi_init();                 

    Hwi_module->taskSP = 0;
}

/*
 *  ======== Hwi_getStackInfo ========
 *  Used to get Hwi stack usage info.
 */
Bool Hwi_getStackInfo(Hwi_StackInfo *stkInfo, Bool computeStackDepth)
{
    Char *isrSP;
    Bool stackOverflow;

    /* Copy the stack base address and size */
    stkInfo->hwiStackSize = Hwi_module->isrStackSize;
    stkInfo->hwiStackBase = Hwi_module->isrStackBase;

    isrSP = stkInfo->hwiStackBase;

    /* Check for stack overflow */
    stackOverflow = (*isrSP != (Char)0xbe ? TRUE : FALSE);

    if (computeStackDepth && !stackOverflow) {
        /* Compute stack depth */
        do {
        } while(*isrSP++ == (Char)0xbe);
        stkInfo->hwiStackPeak = stkInfo->hwiStackSize - (SizeT)(--isrSP - (Char *)stkInfo->hwiStackBase);
    }
    else {
        stkInfo->hwiStackPeak = 0;
    }

    return stackOverflow; 
}

/*
 *  ======== Hwi_setPriority ========
 *  Set an interrupt's priority.
 *
 *  @param(intNum)      ID of interrupt
 *  @param(priority)    priority
 */
Void Hwi_setPriority(UInt intNum, UInt priority)
{
    /* User interrupt (id >= 16) priorities are set in the IPR registers */
    if (intNum >= 16) {
        Hwi_nvic.IPR[intNum-16] = priority;
    }
    /* System interrupt (id >= 4) priorities are set in the SHPR registers */
    else if (intNum >= 4) {
        Hwi_nvic.SHPR[intNum-4] = priority;
    }
    /* System interrupts (id < 4) priorities  are fixed in hardware */
}

/*
 *  ======== Hwi_reconfig ========
 *  Reconfigure a dispatched interrupt.
 */
Void Hwi_reconfig(Hwi_Object *hwi, Hwi_FuncPtr fxn, const Hwi_Params *params)
{
    UInt intNum;
    UInt priority;

    for (intNum = 0; intNum < Hwi_NUM_INTERRUPTS; intNum++) {
        if (Hwi_module->dispatchTable[intNum] == hwi) {
            break;
        }
    }

    Hwi_disableInterrupt(intNum);

    hwi->fxn = fxn;
    hwi->arg = params->arg;

    Hwi_module->priorities[intNum] = params->priority;

    /* 
     * the -1 sentinel priority is the default passed by hal Hwi_create().
     * Translate it to 255, which is our default priority.
     */
    if (params->priority == -1) {
        priority = 255;
    }
    else {
        priority = params->priority;
    }

    Hwi_setPriority(intNum, priority);

    if (params->enableInt) {
        Hwi_enableInterrupt(intNum);
    }
}

/*
 *  ======== Hwi_getfunc ========
 */
Hwi_FuncPtr Hwi_getFunc(Hwi_Object *hwi, UArg *arg)
{
    *arg = hwi->arg;

    return (hwi->fxn);
}

/*
 *  ======== Hwi_setfunc ========
 */
Void Hwi_setFunc(Hwi_Object *hwi, Hwi_FuncPtr fxn, UArg arg)
{
    hwi->fxn = fxn;
    hwi->arg = arg;
}

/*
 *  ======== Hwi_getIrp ========
 */
Hwi_Irp Hwi_getIrp(Hwi_Object *hwi)
{
    return (hwi->irp);
}

/*
 *  ======== Hwi_getHookContext ========
 */
Ptr Hwi_getHookContext(Hwi_Object *hwi, Int id)
{
    return (hwi->hookEnv[id]);
}

/*
 *  ======== Hwi_setHookContext ========
 */
Void Hwi_setHookContext(Hwi_Object *hwi, Int id, Ptr hookContext)
{
    hwi->hookEnv[id] = hookContext;
}

/*
 *  ======== Hwi_post ========
 */
Void Hwi_post(UInt intNum)
{
    if (intNum >= 16) {
        Hwi_nvic.STI = intNum - 16;
    }
}

/*
 *  ======== Hwi_excSetBuffers ========
 */
Void Hwi_excSetBuffers(Ptr excContextBuffer, Ptr excStackBuffer)
{
    Hwi_module->excContext = excContextBuffer;
    Hwi_module->excStack = excStackBuffer;
}

/*
 *  ======== Hwi_excHandler ========
 */
Void Hwi_excHandler(UInt *excStack, UInt lr)
{
    Hwi_excHandlerFunc(excStack, lr);
}

/*
 *  ======== Hwi_excHandlerMin ========
 */
Void Hwi_excHandlerMin(UInt *excStack, UInt lr)
{
    Hwi_ExcContext excContext;
    UInt excNum;

    Hwi_module->excActive = TRUE;

    if (Hwi_module->excContext == NULL) {
        Hwi_module->excContext = &excContext;
    }

    /* copy registers from stack to excContext */
    Hwi_module->excContext->r0 = (Ptr)excStack[8];      /* r0 */
    Hwi_module->excContext->r1 = (Ptr)excStack[9];      /* r1 */   
    Hwi_module->excContext->r2 = (Ptr)excStack[10];     /* r2 */   
    Hwi_module->excContext->r3 = (Ptr)excStack[11];     /* r3 */   
    Hwi_module->excContext->r4 = (Ptr)excStack[0];      /* r4 */   
    Hwi_module->excContext->r5 = (Ptr)excStack[1];      /* r5 */   
    Hwi_module->excContext->r6 = (Ptr)excStack[2];      /* r6 */   
    Hwi_module->excContext->r7 = (Ptr)excStack[3];      /* r7 */   
    Hwi_module->excContext->r8 = (Ptr)excStack[4];      /* r8 */   
    Hwi_module->excContext->r9 = (Ptr)excStack[5];      /* r9 */     
    Hwi_module->excContext->r10 = (Ptr)excStack[6];     /* r10 */     
    Hwi_module->excContext->r11 = (Ptr)excStack[7];     /* r11 */     
    Hwi_module->excContext->r12 = (Ptr)excStack[12];    /* r12 */    
    Hwi_module->excContext->sp  = (Ptr)(Uint32)(excStack+16); /* sp */     
    Hwi_module->excContext->lr  = (Ptr)excStack[13];    /* lr */    
    Hwi_module->excContext->pc  = (Ptr)excStack[14];    /* pc */
    Hwi_module->excContext->psr = (Ptr)excStack[15];    /* psr */

    Hwi_excFillContext();

    /* Force MAIN threadtype So we can safely call System_printf */

    BIOS_setThreadType(BIOS_ThreadType_Main);

    /* Call user's exception hook */
    if (Hwi_excHookFunc != NULL) {
        Hwi_excHookFunc(Hwi_module->excContext);
    }

    excNum = Hwi_nvic.ICSR & 0xff;

    /* distinguish between an interrupt and an exception */
    if ( excNum < 15 ) {
        Error_raise(0, Hwi_E_exception, excNum, excStack[14]);
    }
    else {
        Error_raise(0, Hwi_E_noIsr, excNum, excStack[14]);
    }
}

/*
 *  ======== Hwi_excHandlerMax ========
 */
Void Hwi_excHandlerMax(UInt *excStack, UInt lr)
{
    Hwi_ExcContext excContext;
    UInt excNum;

    Hwi_module->excActive = TRUE;

    if (Hwi_module->excContext == NULL) {
        Hwi_module->excContext = &excContext;
    }

    /* copy registers from stack to excContext */
    Hwi_module->excContext->r0 = (Ptr)excStack[8];      /* r0 */
    Hwi_module->excContext->r1 = (Ptr)excStack[9];      /* r1 */   
    Hwi_module->excContext->r2 = (Ptr)excStack[10];     /* r2 */   
    Hwi_module->excContext->r3 = (Ptr)excStack[11];     /* r3 */   
    Hwi_module->excContext->r4 = (Ptr)excStack[0];      /* r4 */   
    Hwi_module->excContext->r5 = (Ptr)excStack[1];      /* r5 */   
    Hwi_module->excContext->r6 = (Ptr)excStack[2];      /* r6 */   
    Hwi_module->excContext->r7 = (Ptr)excStack[3];      /* r7 */   
    Hwi_module->excContext->r8 = (Ptr)excStack[4];      /* r8 */   
    Hwi_module->excContext->r9 = (Ptr)excStack[5];      /* r9 */     
    Hwi_module->excContext->r10 = (Ptr)excStack[6];     /* r10 */     
    Hwi_module->excContext->r11 = (Ptr)excStack[7];     /* r11 */     
    Hwi_module->excContext->r12 = (Ptr)excStack[12];    /* r12 */    
    Hwi_module->excContext->sp  = (Ptr)(Uint32)(excStack+16); /* sp */     
    Hwi_module->excContext->lr  = (Ptr)excStack[13];    /* lr */    
    Hwi_module->excContext->pc  = (Ptr)excStack[14];    /* pc */
    Hwi_module->excContext->psr = (Ptr)excStack[15];    /* psr */

    Hwi_excFillContext();

    /* Force MAIN threadtype So we can safely call System_printf */

    BIOS_setThreadType(BIOS_ThreadType_Main);

    excNum = Hwi_nvic.ICSR & 0xff;

    switch (excNum) {
        case 2:
            Hwi_excNmi(excStack);               /* NMI */
            break;      
        case 3:
            Hwi_excHardFault(excStack); /* Hard Fault */
            break;      
        case 4:
            Hwi_excMemFault(excStack);  /* Mem Fault */ 
            break;      
        case 5:
            Hwi_excBusFault(excStack);  /* Bus Fault */
            break;      
        case 6:
            Hwi_excUsageFault(excStack);        /* Usage Fault */
            break;      
        case 11:
            Hwi_excSvCall(excStack);            /* SVCall */
            break;      
        case 12:
            Hwi_excDebugMon(excStack);  /* Debug Mon */
            break;      
        case 7:
        case 8:
        case 9:
        case 10:
        case 13:
            Hwi_excReserved(excStack, excNum); /* reserved */ 
            break;
        default:
            Hwi_excNoIsr(excStack, excNum);     /* no ISR */ 
            break;
    }

    /* Call user's exception hook */
    if (Hwi_excHookFunc != NULL) {
        Hwi_excHookFunc(Hwi_module->excContext);
    }

    Hwi_excDumpRegs(lr);
}

/*
 *  ======== Hwi_excNmi ========
 */
Void Hwi_excNmi(UInt *excStack)
{
    Error_Block eb;
    Error_init(&eb);

    Error_raise(&eb, Hwi_E_NMI, NULL, 0);
}

/*
 *  ======== Hwi_excHardFault ========
 */
Void Hwi_excHardFault(UInt *excStack)
{
    Char *fault;
    Error_Block eb;
    Error_init(&eb);

    if (Hwi_nvic.HFSR & 0x40000000) {
        Error_raise(&eb, Hwi_E_hardFault, "FORCED", 0);
        Hwi_excUsageFault(excStack);
        Hwi_excBusFault(excStack);
        Hwi_excMemFault(excStack);
        return;
    }
    else if (Hwi_nvic.HFSR & 0x80000000) {
        Error_raise(&eb, Hwi_E_hardFault, "DEBUGEVT", 0);
        Hwi_excDebugMon(excStack);
        return;
    }
    else if (Hwi_nvic.HFSR & 0x00000002) {
        fault = "VECTBL";
    }
    else {
        fault = "Unknown";
    }
    Error_raise(&eb, Hwi_E_hardFault, fault, 0);
}

/*
 *  ======== Hwi_excMemFault ========
 */
Void Hwi_excMemFault(UInt *excStack)
{
    Char *fault;
    Error_Block eb;
    Error_init(&eb);

    if (Hwi_nvic.MMFSR) {
        if (Hwi_nvic.MMFSR & 0x10) {
            fault = "MSTKERR";
        }
        else if (Hwi_nvic.MMFSR & 0x08) {
            fault = "MUNSTKERR";
        }
        else if (Hwi_nvic.MMFSR & 0x02) {
            fault = "DACCVIOL";
        }
        else if (Hwi_nvic.MMFSR & 0x01) {
            fault = "IACCVIOL";
        }
        else {
            fault = "Unknown";
        }
        Error_raise(&eb, Hwi_E_memFault, fault, 0);
    }
}

/*
 *  ======== Hwi_excBusFault ========
 */
Void Hwi_excBusFault(UInt *excStack)
{
    Char *fault;
    Error_Block eb;
    Error_init(&eb);

    if (Hwi_nvic.BFSR) {
        if (Hwi_nvic.BFSR & 0x10) {
            fault = "STKERR";
        }
        else if (Hwi_nvic.BFSR & 0x08) {
            fault = "UNSTKERR";
        }
        else if (Hwi_nvic.BFSR & 0x04) {
            fault = "IMPRECISERR";
        }
        else if (Hwi_nvic.BFSR & 0x02) {
            fault = "PRECISERR";
        }
        else if (Hwi_nvic.BFSR & 0x01) {
            fault = "IBUSERR";
        }
        else {
            fault = "Unknown";
        }
        Error_raise(&eb, Hwi_E_busFault, fault, 0);
    }
}

/*
 *  ======== Hwi_excUsageFault ========
 */
Void Hwi_excUsageFault(UInt *excStack)
{
    Char *fault;
    Error_Block eb;
    Error_init(&eb);

    if (Hwi_nvic.UFSR) {
        if (Hwi_nvic.UFSR & 0x0001) {
            fault = "UNDEFINSTR";
        }
        else if (Hwi_nvic.UFSR & 0x0002) {
            fault = "INVSTATE";
        }
        else if (Hwi_nvic.UFSR & 0x0004) {
            fault = "INVPC";
        }
        else if (Hwi_nvic.UFSR & 0x0008) {
            fault = "NOCP";
        }
        else if (Hwi_nvic.UFSR & 0x0100) {
            fault = "UNALIGNED";
        }
        else if (Hwi_nvic.UFSR & 0x0200) {
            fault = "DIVBYZERO";
        }
        else {
            fault = "Unknown";
        }
        Error_raise(&eb, Hwi_E_usageFault, fault, 0);
    }
}

/*
 *  ======== Hwi_excSvCall ========
 */
Void Hwi_excSvCall(UInt *excStack)
{
    UInt8 *pc;
    Error_Block eb;

    Error_init(&eb);

    pc = (UInt8 *)excStack[14];

    Error_raise(&eb, Hwi_E_svCall, pc[-2], 0);
}

/*
 *  ======== Hwi_excDebugMon ========
 */
Void Hwi_excDebugMon(UInt *excStack)
{
    Char *fault;
    Error_Block eb;
    Error_init(&eb);

    if (Hwi_nvic.DFSR) {
        if (Hwi_nvic.DFSR & 0x00000010) {
            fault = "EXTERNAL";
        }
        else if (Hwi_nvic.DFSR & 0x00000008) {
            fault = "VCATCH";
        }
        else if (Hwi_nvic.DFSR & 0x00000004) {
            fault = "DWTTRAP";
        }
        else if (Hwi_nvic.DFSR & 0x00000002) {
            fault = "BKPT";
        }
        else if (Hwi_nvic.DFSR & 0x00000001) {
            fault = "HALTED";
        }
        else {
            fault = "Unknown";
        }
        Error_raise(&eb, Hwi_E_debugMon, fault, 0);
    }
}

/*
 *  ======== Hwi_excReserved ========
 */
Void Hwi_excReserved(UInt *excStack, UInt excNum)
{
    Error_Block eb;
    Error_init(&eb);

    Error_raise(&eb, Hwi_E_reserved, "Exception #:", excNum);
}

/*
 *  ======== Hwi_excNoIsr ========
 */
Void Hwi_excNoIsr(UInt *excStack, UInt excNum)
{
    Error_Block eb;
    Error_init(&eb);

    Error_raise(&eb, Hwi_E_noIsr, excNum, excStack[14]);
}

#ifndef __ti__
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
#endif

/*
 *  ======== Hwi_excFillContext ========
 */
Void Hwi_excFillContext()
{
    Hwi_ExcContext *excContext;
    Char *stack = NULL;
    SizeT stackSize = 0;

    excContext = Hwi_module->excContext;

    excContext->threadType = BIOS_getThreadType();

    switch (excContext->threadType) {
        case BIOS_ThreadType_Task: {
            if (BIOS_taskEnabled == TRUE) {
                excContext->threadHandle = (Ptr)Task_self();
                stack = (Task_self())->stack;
                stackSize = (Task_self())->stackSize;
            }
            break;
        }
        case BIOS_ThreadType_Swi: {
            if (BIOS_swiEnabled == TRUE) {
                excContext->threadHandle = (Ptr)Swi_self();
                stack = Hwi_module->isrStackBase;
                stackSize = Hwi_module->isrStackSize;
            }
            break;
        }
        case BIOS_ThreadType_Hwi: {
            excContext->threadHandle = 
                (Ptr)(Hwi_module->dispatchTable[(UInt)(excContext->psr) & 0xff]);
            stack = Hwi_module->isrStackBase;
            stackSize = Hwi_module->isrStackSize;
            break;
        }
        case BIOS_ThreadType_Main: {
            excContext->threadHandle = NULL;
            stack = Hwi_module->isrStackBase;
            stackSize = Hwi_module->isrStackSize;
            break;
        }
    }

    excContext->threadStackSize = stackSize;
    excContext->threadStack = (Ptr)stack;

    /* copy thread's stack contents if user has provided a buffer */
    if (Hwi_module->excStack != NULL) {
        Char *from, *to;
        from = stack;
        to = (Char *)Hwi_module->excStack;
        while (stackSize--) {
            *to++ = *from++;
        }
    }

    excContext->ICSR = (Ptr)Hwi_nvic.ICSR;
    excContext->MMFSR = (Ptr)Hwi_nvic.MMFSR;
    excContext->BFSR = (Ptr)Hwi_nvic.BFSR;
    excContext->UFSR = (Ptr)Hwi_nvic.UFSR;
    excContext->HFSR = (Ptr)Hwi_nvic.HFSR;
    excContext->DFSR = (Ptr)Hwi_nvic.DFSR;
    excContext->MMAR = (Ptr)Hwi_nvic.MMAR;
    excContext->BFAR = (Ptr)Hwi_nvic.BFAR;
    excContext->AFSR = (Ptr)Hwi_nvic.AFSR;
}

#ifndef __ti__
#pragma GCC diagnostic warning "-Wint-to-pointer-cast"
#endif

/*
 *  ======== Hwi_excDumpRegs ========
 */
Void Hwi_excDumpRegs(UInt lr)
{
    Hwi_ExcContext *excp;
    Char *ttype;

    switch (lr) {
        case 0xfffffff1:
            System_printf("Exception occurred in ISR thread.\n");
            break;
        case 0xfffffff9:
        case 0xfffffffd:
            System_printf("Exception occurred in background thread.\n");
            break;      
        default:
            System_printf("Bogus Exception return value: %08x.\n", lr);
            break;      
    }

    excp = Hwi_module->excContext;

    switch (excp->threadType) {
        case BIOS_ThreadType_Task: {
            ttype = "Task";
            break;
        }
        case BIOS_ThreadType_Swi: {
            ttype = "Swi";
            break;
        }
        case BIOS_ThreadType_Hwi: {
            ttype = "Hwi";
            break;
        }
        case BIOS_ThreadType_Main: {
            ttype = "Main";
            break;
        }
    }

    System_printf("Exception occurred in ThreadType_%s.\n", ttype);
    System_printf("%s handle: 0x%x.\n", ttype, excp->threadHandle);
    System_printf("%s stack base: 0x%x.\n", ttype, excp->threadStack);
    System_printf("%s stack size: 0x%x.\n", ttype, excp->threadStackSize);

    System_printf ("R0 = 0x%08x  R8  = 0x%08x\n", excp->r0, excp->r8);
    System_printf ("R1 = 0x%08x  R9  = 0x%08x\n", excp->r1, excp->r9);
    System_printf ("R2 = 0x%08x  R10 = 0x%08x\n", excp->r2, excp->r10);
    System_printf ("R3 = 0x%08x  R11 = 0x%08x\n", excp->r3, excp->r11);
    System_printf ("R4 = 0x%08x  R12 = 0x%08x\n", excp->r4, excp->r12);
    System_printf ("R5 = 0x%08x  SP(R13) = 0x%08x\n", excp->r5, excp->sp);
    System_printf ("R6 = 0x%08x  LR(R14) = 0x%08x\n", excp->r6, excp->lr);
    System_printf ("R7 = 0x%08x  PC(R15) = 0x%08x\n", excp->r7, excp->pc);
    System_printf ("PSR = 0x%08x\n", excp->psr);
    System_printf ("ICSR = 0x%08x\n", Hwi_nvic.ICSR);
    System_printf ("MMFSR = 0x%02x\n", Hwi_nvic.MMFSR);
    System_printf ("BFSR = 0x%02x\n", Hwi_nvic.BFSR);
    System_printf ("UFSR = 0x%04x\n", Hwi_nvic.UFSR);
    System_printf ("HFSR = 0x%08x\n", Hwi_nvic.HFSR);
    System_printf ("DFSR = 0x%08x\n", Hwi_nvic.DFSR);
    System_printf ("MMAR = 0x%08x\n", Hwi_nvic.MMAR);
    System_printf ("BFAR = 0x%08x\n", Hwi_nvic.BFAR);
    System_printf ("AFSR = 0x%08x\n", Hwi_nvic.AFSR);

    System_abort("Terminating execution...\n");
} 

/*
 *  ======== Hwi_dispatchC ========
 *  "Top Half" of Configurable IRQ interrupt dispatcher.
 */
UInt Hwi_dispatchC(Hwi_Irp irp)
{
    /*
     * Enough room is reserved above the isr stack to handle
     * as many as 16 32-bit stack resident local variables.
     * If the dispatcher requires more than this, you must
     * handle this in Hwi_Module_startup().
     */

    Hwi_Object *hwi;
    BIOS_ThreadType prevThreadType;
    Int intNum;
    UInt tskKey = 1;
    UInt swiKey = 1;
    Int i;

#if defined(__ti__)
   _set_interrupt_priority(Hwi_disablePriority);
#else
    Hwi_disable();
#endif

    if (Hwi_dispatcherTaskSupport) {
        tskKey = TASK_DISABLE();
    }

    if (Hwi_dispatcherSwiSupport) {
        swiKey = SWI_DISABLE();
    }

    /* set thread type to Hwi */
    prevThreadType = BIOS_setThreadType(BIOS_ThreadType_Hwi);

    /* read interrupt index */
    intNum = (Hwi_nvic.ICSR & 0x000000ff);

    hwi = Hwi_module->dispatchTable[intNum];

    /* IRP tracking is always enabled for M3 */
    hwi->irp = irp;

#ifndef ti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS
    /* call the begin hooks */
    for (i = 0; i < Hwi_hooks.length; i++) {
        if (Hwi_hooks.elem[i].beginFxn != NULL) {
            Hwi_hooks.elem[i].beginFxn((IHwi_Handle)hwi);
        }
    }
#endif

    Log_write5(Hwi_LM_begin, (IArg)hwi, (IArg)hwi->fxn, 
               (IArg)prevThreadType, (IArg)intNum, hwi->irp);

    /* call the user's isr */
    if (Hwi_dispatcherAutoNestingSupport) {
#ifdef __ti__
        _set_interrupt_priority(0);
#else
        Hwi_enable();
#endif
        (hwi->fxn)(hwi->arg);
#ifdef __ti__
        _set_interrupt_priority(Hwi_disablePriority);
#else
        Hwi_disable();
#endif
    }
    else {
        (hwi->fxn)(hwi->arg);
    }

    Log_write1(Hwi_LD_end, (IArg)hwi);

#ifndef ti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS
    /* call the end hooks */
    for (i = 0; i < Hwi_hooks.length; i++) {
        if (Hwi_hooks.elem[i].endFxn != NULL) {
            Hwi_hooks.elem[i].endFxn((IHwi_Handle)hwi);
        }
    }
#endif

    /* restore thread type */
    BIOS_setThreadType(prevThreadType);

    /* encode both tskKey and swiKey in return */
    return ((tskKey << 8) + swiKey);
}

/*
 *  ======== Hwi_doSwiRestore ========
 *  Run swi scheduler. (Executes on Hwi stack)
 */
Void Hwi_doSwiRestore(UInt swiTskKey)
{
    /* Run Swi scheduler */
    if (Hwi_dispatcherSwiSupport) {
        SWI_RESTORE(swiTskKey & 0xff);    /* Run Swi scheduler */
    }
}

/*
 *  ======== Hwi_doTaskRestore ========
 *  Run task scheduler. (Executes on Task stack)
 */
Void Hwi_doTaskRestore(UInt swiTskKey)
{
    /* Run Task scheduler */
    if (Hwi_dispatcherTaskSupport) {
        TASK_RESTORE(swiTskKey >> 8);   /* returns with ints disabled */
    }
}

/*
 */
/*
 *  @(#) ti.sysbios.family.arm.m3; 2, 0, 0, 0,296; 5-18-2012 06:04:27; /db/vtree/library/trees/avala/avala-q37x/src/ xlibrary

 */

