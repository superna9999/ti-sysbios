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


#include <xdc/std.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/Log.h>

#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/interfaces/IHwi.h>
#include <ti/sysbios/BIOS.h>

#include "package/internal/Hwi.xdc.h"
#pragma FUNC_EXT_CALLED(Hwi_dispatchC);

extern Void ti_sysbios_family_c64_Hwi_dispatchAlways(Void);
extern Char *ti_sysbios_family_xxx_Hwi_switchToIsrStack();
extern Void ti_sysbios_family_xxx_Hwi_switchToTaskStack(Char *oldTaskSP);

#define Hwi_switchToIsrStack ti_sysbios_family_xxx_Hwi_switchToIsrStack
#define Hwi_switchToTaskStack ti_sysbios_family_xxx_Hwi_switchToTaskStack
#define Hwi_dispatchAlways ti_sysbios_family_c64_Hwi_dispatchAlways
#define Hwi_vectorsBase ti_sysbios_family_c64_Hwi_vectorsBase

extern char Hwi_vectorsBase[];
extern char *__bss__;

#define INTRMUXHIGH 0x019C0000  /* hi multiplexer register on 62, 67, 64 */
#define INTRMUXLOW  0x019C0004  /* lo multiplexer register on 62, 67, 64 */

static Int postInit(Hwi_Object *hwi, Error_Block *eb);

extern cregister volatile unsigned int IRP;
extern cregister volatile unsigned int IER;
extern cregister volatile unsigned int ISR;
extern cregister volatile unsigned int ICR;
extern cregister volatile unsigned int ISTP;
#ifdef ti_sysbios_family_c64_Hwi_dispatcherTaskSupport__D
/* disable unused local variable warning during optimized compile */
#pragma diag_suppress=179
#define TASK_DISABLE Task_disable
#define TASK_RESTORE Task_restoreHwi
#else
#define TASK_DISABLE Hwi_taskDisable
#define TASK_RESTORE Hwi_taskRestoreHwi
#endif

#ifdef ti_sysbios_family_c64_Hwi_dispatcherSwiSupport__D
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

    /* Task and Swi APIs used not called until BIOS_start() */
    /* okay to proceed with initialization */

#ifndef ti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS
    for (i = 0; i < Hwi_hooks.length; i++) {
        if (Hwi_hooks.elem[i].registerFxn != NULL) {
            Hwi_hooks.elem[i].registerFxn(i);
        }
    }
#endif

    /* Initialize the vector table pointer, ISTP */
    ISTP = (UInt) Hwi_module->vectorTableBase;

    /* 
     * Initialize the pointer to the isrStack. These symbols are part of the
     * Hwi_module (instead of floating) in order to support ROM.
     * Leave room for up to 16 32 bit Hwi_dispatchC local variables.
     */
    Hwi_module->isrStack = Hwi_getIsrStackAddress();

    Hwi_module->taskSP = (Char *)-1;/* signal that we're executing on the */
                                        /* ISR stack */
    /* initialize INTMUX */
    for (i = 4; i < Hwi_NUM_INTERRUPTS; i++) {
        if (Hwi_module->intEvents[i-4] != -1) {
            Hwi_eventMap(i, Hwi_module->intEvents[i-4]);
        }
    }

    /* start with a clean slate after initializing INTMUX */
    ICR = 0xffff;

    Hwi_enableIER(Hwi_module->ierMask); /* IER per static Hwi settings */

    for (i = 0; i < Hwi_NUM_INTERRUPTS; i++) {
        hwi = Hwi_module->dispatchTable[i];
        if (hwi !=  NULL) {
            postInit(hwi, NULL);
        }
    }

    return (Startup_DONE);
}

/*
 *  ======== Hwi_Instance_init ========
 */
Int Hwi_Instance_init(Hwi_Object *hwi, Int intNum, 
                      Hwi_FuncPtr fxn, const Hwi_Params *params, 
                      Error_Block *eb)
{
    Int status;

    if (Hwi_module->dispatchTable[intNum] != NULL) {
        Error_raise(eb, Hwi_E_alreadyDefined, intNum, 0);
        return (1); 
    }

    Hwi_module->dispatchTable[intNum] = hwi;
    Hwi_plug(intNum, Hwi_dispatchAlways);
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
 *  Here on Hwi_delete() or failed Hwi_create().
 */
Void Hwi_Instance_finalize(Hwi_Object *hwi, Int status)
{
    Int i, cnt;
    UInt intNum;

    for (intNum = 0; intNum < 16; intNum++) {
        if (Hwi_module->dispatchTable[intNum] == hwi) {
            break;
        }
    }

    Hwi_disableInterrupt(intNum);
    Hwi_module->dispatchTable[intNum] = NULL;
    Hwi_plug(intNum, Hwi_unPluggedInterrupt);

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
 *  ======== Hwi_unPluggedInterrupt ========
 *  Here on interrupt unPlugged by Hwi_delete().
 */
Void Hwi_unPluggedInterrupt() {
    while(TRUE);
}

/*
 *  ======== Hwi_eventMap ========
 *  Function maps an event to a Hwi vector so that the event will be the
 *  source of the interrupt of the vector.
 */
Void Hwi_eventMap(Int vectId, Int eventId)
{
    Int muxnum;         /* Interrupt mux register number */
    Int bitpos;         /* The bit position of the interrupt select */
    UInt mask;          /* Interrupt mask value */
    volatile Bits32 *muxReg = (volatile Bits32 *)INTRMUXHIGH;
    static char const bitposTab[12] = {   /* bit position table for interrupt */
        0,                          /* multiplexer register for 62, 67, 64 */
        5,                          /* indexed by the vector id */
        10,
        16,
        21,
        26,
        0,
        5,
        10,
        16,
        21,
        26
    };

    bitpos = bitposTab[vectId-4];

    if (vectId > 9 ) {
        muxnum = 0;
    }
    else {
        muxnum = 1;
    }

    mask = _disable_interrupts();
    muxReg[muxnum] = (muxReg[muxnum] & ~(0x1f << bitpos)) | (eventId << bitpos);

    /* clear any residual interrupt */
    Hwi_clearInterrupt(vectId);

    _restore_interrupts(mask);
}



/*
 *  ======== Hwi_disableIER ========
 */
Bits16 Hwi_disableIER(Bits16 mask)
{
    UInt key;
    Bits16 oldIER;

    key = _disable_interrupts();
    oldIER = IER;
    IER &= ~mask;
    _restore_interrupts(key);

    return oldIER;
}

/*
 *  ======== Hwi_enableIER ========
 */
Bits16 Hwi_enableIER(Bits16 mask)
{
    UInt key;
    Bits16 oldIER;

    key = _disable_interrupts();
    oldIER = IER;
    IER |= mask;
    _restore_interrupts(key);

    return oldIER;
}

/*
 *  ======== Hwi_restoreIER ========
 */
Bits16 Hwi_restoreIER(Bits16 mask)
{
    UInt key;
    Bits16 oldIER;

    key = _disable_interrupts();
    oldIER = IER;
    IER = mask;
    _restore_interrupts(key);

    return oldIER;
}

/*
 *  ======== Hwi_disableInterrupt ========
 */
UInt Hwi_disableInterrupt(UInt intNum)
{
    return (Hwi_disableIER(1 << intNum)) ;
}

/*
 *  ======== Hwi_enableInterrupt ========
 */
UInt Hwi_enableInterrupt(UInt intNum)
{
    return (Hwi_enableIER(1 << intNum));
}

/*
 *  ======== Hwi_restoreInterrupt ========
 */
Void Hwi_restoreInterrupt(UInt intNum, UInt key)
{
    if (key & (1 << (intNum))) {
        Hwi_enableInterrupt(intNum);
    }
    else {
        Hwi_disableInterrupt(intNum);
    }
}

/*
 *  ======== Hwi_clearInterrupt ========
 */
Void Hwi_clearInterrupt(UInt intNum)
{
    ICR = 1 << intNum;
}

/*
 *  ======== Hwi_getHandle ========
 */
Hwi_Handle Hwi_getHandle(UInt intNum)
{
    return (Hwi_module->dispatchTable[intNum]);
}

/*
 *  ======== Hwi_getFunc ========
 */
Hwi_FuncPtr Hwi_getFunc(Hwi_Object *hwi, UArg *arg)
{
    *arg = hwi->arg;

    return (hwi->fxn);
}

/*
 *  ======== Hwi_setFunc ========
 */
Void Hwi_setFunc(Hwi_Object *hwi, Void (*fxn)(), UArg arg)
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
 *  ======== Hwi_post ========
 */
Void Hwi_post(UInt intNum)
{
    ISR = (1 << intNum);
    asm("    nop 4    ");
}

/*
 *  ======== Hwi_getTaskSP ========
 */
Char *Hwi_getTaskSP()
{
    return (Hwi_module->taskSP);
}

/*
 *  ======== Hwi_reconfig ========
 *  Reconfigure a dispatched interrupt.
 */
Void Hwi_reconfig(Hwi_Object *hwi, Hwi_FuncPtr fxn, const Hwi_Params *params)
{
    UInt intNum;

    for (intNum = 0; intNum < Hwi_NUM_INTERRUPTS; intNum++) {
        if (Hwi_module->dispatchTable[intNum] == hwi) {
            break;
        }
    }

    Hwi_disableInterrupt(intNum);

    hwi->fxn = fxn;
    hwi->arg = params->arg;

    switch (params->maskSetting) {
        case Hwi_MaskingOption_NONE:
            hwi->disableMask = 0;
            hwi->restoreMask = 0;
            break;
        case Hwi_MaskingOption_ALL:
            hwi->disableMask = 0xffff;
            hwi->restoreMask = 0xffff;
            break;
        default:
        case Hwi_MaskingOption_SELF:
            hwi->disableMask = 1 << intNum;
            hwi->restoreMask = 1 << intNum;
            break;
        case Hwi_MaskingOption_BITMASK:
            hwi->disableMask = params->disableMask;
            hwi->restoreMask = params->restoreMask;
            break;
    }

    if (params->eventId != -1) {
        Hwi_eventMap(intNum, params->eventId);
    }

    if (params->enableInt) {
        Hwi_enableInterrupt(intNum);
    }
}

/*
 *  ======== switchFromBootStack ========
 *  Indicate that we are leaving the boot stack and
 *  are about to switch to a task stack.
 */
Void Hwi_switchFromBootStack()
{
    Hwi_module->taskSP = 0;
}

/*
 *  ======== Hwi_getIsrStackAddress ========
 */
Char *Hwi_getIsrStackAddress()
{
    __extern __FAR__ char _stack[8];
    __extern __FAR__ UInt8 __TI_STACK_SIZE;
    UInt32 isrStack;

    isrStack = (UInt32)_stack;
    isrStack += (UInt32)&__TI_STACK_SIZE;
    isrStack -= 0x40;                 

    isrStack &= ~0x7;   /* align to long word */

    return ((Char *)isrStack);
}

/*
 *  ======== Hwi_getStackInfo ========
 *  Used to get Hwi stack usage info.
 */
Bool Hwi_getStackInfo(Hwi_StackInfo *stkInfo, Bool computeStackDepth)
{
    __extern __FAR__ char _stack[8];
    __extern __FAR__ UInt8 __TI_STACK_SIZE;

    Char *isrSP;
    Bool stackOverflow;

    /* Copy the stack base address and size */
    stkInfo->hwiStackSize = (SizeT)&__TI_STACK_SIZE;
    stkInfo->hwiStackBase = (Ptr)_stack;

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
 *  ======== Hwi_dispatchC ========
 *  Configurable dispatcher.
 */
Void Hwi_dispatchC(register Int intNum)
{
    /*
     * Enough room is reserved above the isr stack to handle
     * as many as 16 32-bit stack resident local variables.
     * If the dispatcher requires more than this, you must
     * handle this in Hwi_Module_startup().
     */

    Hwi_Object *hwi;
    BIOS_ThreadType prevThreadType;
    Char *oldTaskSP;
    UInt16 oldIER, disableMask, restoreMask;
    Int tskKey;
    Int swiKey;
    Int i;
    Hwi_FuncPtr fxn;
    UArg arg;

    if (Hwi_dispatcherTaskSupport) {
        tskKey = TASK_DISABLE();

        /* 
         * If this is a non-nested interrupt,
         * tskkey is saved on the task stack.
         * It must not be referenced again until
         * switching back to the task stack!!!!
         * All other local variables will be
         * on the isr stack.
         */
    }

    /* 
     * Switch to Hwi stack if not already on it.
     * This step, and the corresponding switch back to the task
     * stack are performed outside the "if (Hwi_dispatcherTaskSupport)"
     * conditionals because sometimes the generated code placed a copy
     * of Hwi_dispatcherTaskSupport on the task stack for use below.
     */
    oldTaskSP = Hwi_switchToIsrStack();

    /* 
     * all references to local variables beyond this point
     * will be on the isr stack
     */

    /* 
     * pre-read local copies of the variables used 
     * within to eliminate memory fetch nops
     */
    hwi = Hwi_module->dispatchTable[intNum];
    fxn = hwi->fxn;
    arg = hwi->arg;

    if (Hwi_dispatcherIrpTrackingSupport) {
        hwi->irp = IRP;
    }

    if (Hwi_dispatcherAutoNestingSupport) {
        disableMask = hwi->disableMask;
        restoreMask = hwi->restoreMask;
    }

    if (Hwi_dispatcherSwiSupport) {
        swiKey = SWI_DISABLE();
    }

    /* set thread type to Hwi */
    prevThreadType = BIOS_setThreadType(BIOS_ThreadType_Hwi);

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
        oldIER = IER;
        IER &= ~disableMask;
        _enable_interrupts();

        (fxn)(arg);

        _disable_interrupts();
        IER |= (restoreMask & oldIER);
    }
    else {
        (fxn)(arg);
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

    /* Run Swi scheduler */
    if (Hwi_dispatcherSwiSupport) {
        SWI_RESTORE(swiKey);
    }

    /* restore thread type */
    BIOS_setThreadType(prevThreadType);

    /* 
     * Switch back to Task stack if at bottom of Hwi stack
     * While it seems that this step should be placed in the
     * "if (Hwi_dispatcherTaskSupport)" conditional below,
     * some code generators placed a copy of the Hwi_dispatcherTaskSupport
     * constant on the task stack (see above comment), which would
     * make the test below bogus as it would be being performed on
     * on the ISR stack...
     */
    Hwi_switchToTaskStack(oldTaskSP);

    /* Run Task scheduler */
    if (Hwi_dispatcherTaskSupport) {
        /* tskKey fetched from task stack if this is a non-nested interrupt */
        TASK_RESTORE(tskKey);   /* returns with ints disabled */
    }
}

/*
 *  ======== Hwi_startup ========
 */
Void Hwi_startup()
{
    _enable_interrupts();
}

/*
 */
/*
 *  @(#) ti.sysbios.family.c64; 2, 0, 0, 0,556; 5-18-2012 06:04:46; /db/vtree/library/trees/avala/avala-q37x/src/ xlibrary

 */

