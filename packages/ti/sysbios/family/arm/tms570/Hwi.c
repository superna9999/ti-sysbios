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
#include <ti/sysbios/family/arm/HwiCommon.h>

#include "package/internal/Hwi.xdc.h"

extern Char *ti_sysbios_family_xxx_Hwi_switchToIsrStack();
extern Void ti_sysbios_family_xxx_Hwi_switchToTaskStack(Char *oldTaskSP);

#define Hwi_switchToIsrStack ti_sysbios_family_xxx_Hwi_switchToIsrStack
#define Hwi_switchToTaskStack ti_sysbios_family_xxx_Hwi_switchToTaskStack

static Int hwiPostInit(Hwi_Object *hwi, Error_Block *eb);
static Void initIntController();

#ifdef ti_sysbios_family_arm_tms570_Hwi_dispatcherTaskSupport__D
/* disable unused local variable warning during optimized compile */
#pragma diag_suppress=179
#define TASK_DISABLE Task_disable
#define TASK_RESTORE Task_restoreHwi
#else
#define TASK_DISABLE Hwi_taskDisable
#define TASK_RESTORE Hwi_taskRestoreHwi
#endif

#ifdef ti_sysbios_family_arm_tms570_Hwi_dispatcherSwiSupport__D
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
 *  must initialize IRQ, FIQ, (and SWI?) SPs (R13s)
 */
Int Hwi_Module_startup (Int startupPhase)
{
    int i;
    Hwi_Object *hwi;

    /* must wait for these modules to initialize first */
    if (!Startup_rtsDone()) {
        return (Startup_NOTDONE);
    }

    /* okay to proceed with initialization */

#ifndef ti_sysbios_hal_Hwi_DISABLE_ALL_HOOKS
    for (i = 0; i < Hwi_hooks.length; i++) {
        if (Hwi_hooks.elem[i].registerFxn != NULL) {
            Hwi_hooks.elem[i].registerFxn(i);
        }
    }
#endif

    /* set up FIQ stack pointer & switch to SYSTEM mode */
    Hwi_init();                 

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
            hwiPostInit(hwi, NULL);
        }
    }

    return Startup_DONE;        /* Max startup phase needed is 0 */
}

/*
 *  ======== Hwi_Instance_init  ========
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

    hwi->intNum = intNum;

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

    status = hwiPostInit(hwi, eb);

    if (Error_check(eb)) {
        return (2 + status);
    }

    return (0);
}

/*
 *  ======== Hwi_plug ========
 */
Void Hwi_plug(UInt intNum, Hwi_PlugFuncPtr fxn)
{
    Hwi_module->vimRam[intNum+1] = (UInt)fxn;
}

/*
 *  ======== hwiPostInit ========
 *  Function to be called during module startup to complete the
 *  initialization of any statically created or constructed Hwi.
 *  returns (0) and clean 'eb' on success
 *  returns 'eb' *and* 'n' for number of successful createFxn() calls iff
 *      one of the createFxn() calls fails
 */
static Int hwiPostInit (Hwi_Object *hwi, Error_Block *eb)
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

    Hwi_setPriority(hwi->intNum, hwi->priority);

    Hwi_setType(hwi->intNum, hwi->type);

    if (hwi->type == Hwi_Type_IRQ) {
        Hwi_plug(hwi->intNum, Hwi_dispatchIRQ);
    }
    else {
        Hwi_plug(hwi->intNum, (Hwi_PlugFuncPtr)(hwi->fxn));
    }

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

    for (intNum = 0; intNum < Hwi_NUM_INTERRUPTS; intNum++) {
        if (Hwi_module->dispatchTable[intNum] == hwi) {
            break;
        }
    }

    Hwi_disableInterrupt(intNum);
    Hwi_module->dispatchTable[intNum] = NULL;

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

static Void initIntController()
{
    UInt i;

    /*
     * The interrupt controller has no RESET feature and
     * none would be required after a hard reset or power up.
     * But the CCS reset/reload process doesn't do a hard reset.
     * The code below tries to "virtually" reset the intc.
     */

    /*
     * Force all interrupts to be IRQ
     */

    Hwi_vim.FIRQPR[0] = 0;
    Hwi_vim.FIRQPR[1] = 0;

    /*
     * Configure the interrupt priority (and therefore type)
     */

    for (i = 0; i < Hwi_NUM_INTERRUPTS; i++) {
        if (Hwi_module->dispatchTable[i] == NULL) {
            Hwi_setPriority(i, i);
        }
        else {
            Hwi_setPriority(i, Hwi_module->dispatchTable[i]->priority);
        }
    }

    /* clear all enables */
    Hwi_vim.REQENACLR[0] = 0xffffffff;
    Hwi_vim.REQENACLR[1] = 0xffffffff;

    Hwi_vim.WAKEENACLR[0] = 0xffffffff;
    Hwi_vim.WAKEENACLR[1] = 0xffffffff;

    /* init per REQENASET settings */
    Hwi_vim.REQENASET[0] = Hwi_module->req0Mask;
    Hwi_vim.REQENASET[1] = Hwi_module->req1Mask;
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
#pragma CODE_SECTION(ti_sysbios_family_arm_tms570_Hwi_disable__E, ".text:ti_sysbios_family_arm_tms570_Hwi_disable__E")
#pragma CODE_SECTION(ti_sysbios_family_arm_tms570_Hwi_enable__E, ".text:ti_sysbios_family_arm_tms570_Hwi_enable__E")
#pragma CODE_SECTION(ti_sysbios_family_arm_tms570_Hwi_restore__E, ".text:ti_sysbios_family_arm_tms570_Hwi_restore__E")
#pragma FUNC_EXT_CALLED(ti_sysbios_family_arm_tms570_Hwi_disable__E);
#pragma FUNC_EXT_CALLED(ti_sysbios_family_arm_tms570_Hwi_enable__E);
#pragma FUNC_EXT_CALLED(ti_sysbios_family_arm_tms570_Hwi_restore__E);
#endif

/*
 *  ======== Hwi_disable ========
 *  disables only IRQ interrupts
 */

UInt ti_sysbios_family_arm_tms570_Hwi_disable__E()
{
    return HwiCommon_disable();
}

/*
 *  ======== Hwi_enable ========
 *  enables only IRQ interrupts
 */
UInt ti_sysbios_family_arm_tms570_Hwi_enable__E()
{
    return HwiCommon_enable();
}

/*
 *  ======== Hwi_restore ========
 *  restores only IRQ interrupts
 */
Void ti_sysbios_family_arm_tms570_Hwi_restore__E(UInt key)
{
    HwiCommon_restore(key);
}

/*
 *  ======== Hwi_disableFIQ ========
 *  disables only FIQ interrupts
 */

UInt Hwi_disableFIQ()
{
    return HwiCommon_disableFIQ();
}

/*
 *  ======== Hwi_enableFIQ ========
 *  enables only FIQ interrupts
 */
UInt Hwi_enableFIQ()
{
    return HwiCommon_enableFIQ();
}

/*
 *  ======== Hwi_restoreFIQ ========
 *  restores only IRQ interrupts
 */
Void Hwi_restoreFIQ( UInt key )
{
    HwiCommon_restoreFIQ(key);
}

/*
 *  ======== Hwi_disableFIQ ========
 *  disables only FIQ interrupts
 */

UInt Hwi_disableIRQ()
{
    return HwiCommon_disableIRQ();
}

/*
 *  ======== Hwi_enableIRQ ========
 *  enables only IRQ interrupts
 */
UInt Hwi_enableIRQ()
{
    return HwiCommon_enableIRQ();
}

/*
 *  ======== Hwi_restoreIRQ ========
 *  restores only IRQ interrupts
 */
Void Hwi_restoreIRQ( UInt key )
{
    HwiCommon_restoreIRQ(key);
}

/*
 *  ======== Hwi_getHandle ========
 */
Hwi_Object *Hwi_getHandle(UInt intNum)
{
    return (Hwi_module->dispatchTable[intNum]);
}

/*
 *  ======== Hwi_post ========
 */
Void Hwi_post(UInt intNum)
{
}

/*
 *  ======== Hwi_getTaskSP ========
 */
Char *Hwi_getTaskSP()
{
    return (HwiCommon_getTaskSP());
}

/*
 *  ======== Hwi_disableInterrupt ========
 */
UInt Hwi_disableInterrupt(UInt intNum)
{
    UInt32 key, mask;

    mask = 1 << (intNum % 32);

    if ( intNum < 32 ) {
        key = mask & Hwi_vim.REQENASET[0];
        Hwi_vim.REQENACLR[0] = mask;
        return (key) ;
    }
    else {
        key = mask & Hwi_vim.REQENASET[1];
        Hwi_vim.REQENACLR[1] = mask;
        return (key) ;
    }
}

/*
 *  ======== Hwi_enableInterrupt ========
 */
UInt Hwi_enableInterrupt(UInt intNum)
{
    UInt32 key, mask;

    mask = 1 << (intNum % 32);

    if ( intNum < 32 ) {
        key = mask & Hwi_vim.REQENASET[0];
        Hwi_vim.REQENASET[0] = mask;
        return (key) ;
    }
    else {
        key = mask & Hwi_vim.REQENASET[1];
        Hwi_vim.REQENASET[1] = mask;
        return (key) ;
    }
}

/*
 *  ======== Hwi_RestoreInterrupt ========
 */
Void Hwi_restoreInterrupt(UInt intNum, UInt key)
{
    if (key & (1 << (intNum%32))) {
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
}

/*
 *  ======== switchFromBootStack ========
 *  Indicate that we are leaving the boot stack and
 *  are about to switch to a task stack.
 */
Void Hwi_switchFromBootStack()
{
    HwiCommon_switchFromBootStack();
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
    stkInfo->hwiStackSize = (SizeT)Hwi_module->isrStackSize;
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

/*!
 *  ======== Hwi_setType ========
 *  Set an interrupt's type (FIQ/IRQ).
 *
 *  @param(intNum)      ID of interrupt
 *  @param(type)        type = FIQ/IRQ
 */
Void Hwi_setType(UInt intNum, Hwi_Type type)
{
    UInt32 mask;

    mask = 1 << (intNum % 32);

    if (type == Hwi_Type_FIQ) {
        if (intNum < 32) {
            Hwi_vim.FIRQPR[0] |= mask;
        }
        else {
            Hwi_vim.FIRQPR[1] |= mask;
        }
    }
    else {
        if (intNum < 32) {
            Hwi_vim.FIRQPR[0] &= ~mask;
        }
        else {
            Hwi_vim.FIRQPR[1] &= ~mask;
        }
    }
}

/*
 *  ======== Hwi_setPriority ========
 *  Set an interrupt's relative priority.
 *
 *  @param(intNum)      ID of interrupt
 *  @param(priority)    priority
 */
Void Hwi_setPriority(UInt intNum, UInt priority)
{
#ifdef __big_endian__
    Hwi_vim.CHANMAP[intNum] = priority;
#else
    Hwi_vim.CHANMAP[(intNum ^ 0x3)] = priority;
#endif
    Hwi_getHandle(intNum)->priority = priority;
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

    /* 
     * The -1 sentinel priority is the default passed by hal Hwi_create().
     * Priority is the same as the intNum by default.
     */

    if (params->priority == -1) {
        hwi->priority = intNum;
    }
    else {
        hwi->priority = params->priority;
    }

    hwi->type = params->type;

    switch (params->maskSetting) {
        case Hwi_MaskingOption_NONE:
            hwi->disableMask0 = 0;
            hwi->disableMask1 = 0;
            hwi->restoreMask0 = 0;
            hwi->restoreMask1 = 0;
            break;
        case Hwi_MaskingOption_ALL:
            hwi->disableMask0 = 0xffffffff;
            hwi->disableMask1 = 0xffffffff;
            hwi->restoreMask0 = 0xffffffff;
            hwi->restoreMask1 = 0xffffffff;
            break;
        default:
        case Hwi_MaskingOption_SELF:
            if (intNum < 32) {
                hwi->disableMask0 = 1 << intNum;
                hwi->disableMask1 = 0;
                hwi->restoreMask0 = 1 << intNum;
                hwi->restoreMask1 = 0;
            }
            else {
                hwi->disableMask0 = 0;
                hwi->disableMask1 = 1 << intNum%32;
                hwi->restoreMask0 = 0;
                hwi->restoreMask1 = 1 << intNum%32;
            }
            break;
        case Hwi_MaskingOption_BITMASK:
            hwi->disableMask0 = params->disableMask0;
            hwi->disableMask1 = params->disableMask1;
            hwi->restoreMask0 = params->restoreMask0;
            hwi->restoreMask1 = params->restoreMask1;
            break;
    }

    if (params->enableInt) {
        Hwi_enableInterrupt(intNum);
    }
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
 *  ======== setFunc ========
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
 *  ======== Hwi_getHookContext ========
 *  Get hook instance's context for a hwi.
 *
 *  @param(id)            hook instance's ID
 *  @a(hookContextPtr)    hook instance's context for task
 */
Ptr Hwi_getHookContext(Hwi_Object *hwi, Int id)
{
    return (hwi->hookEnv[id]);
}

/*
 *  ======== Hwi_setHookContext ========
 *  Set hook instance's context for a hwi.
 *
 *  @param(id)            hook instance's ID
 *  @param(hookContext)   value to write to context
 */
Void Hwi_setHookContext(Hwi_Object *hwi, Int id, Ptr hookContext)
{
    hwi->hookEnv[id] = hookContext;
}

/*
 *  ======== Hwi_dispatchFIQC ========
 *  FIQ interrupt dispatcher
 */
Void interrupt Hwi_dispatchFIQC()
{
    Hwi_Object *entry;
    UInt intNum;

    intNum = Hwi_vim.FIQINDEX - 1;

    /* ack this interrupt */
    Hwi_clearInterrupt(intNum);

    entry = Hwi_module->dispatchTable[intNum];

    (entry->fxn)(entry->arg);
}

/*
 *  ======== Hwi_dispatchIRQC ========
 *  Configurable IRQ interrupt dispatcher.
 */
Void Hwi_dispatchIRQC(Hwi_Irp irp)
{
    /*
     * Enough room is reserved above the isr stack to handle
     * as many as 16 32-bit stack resident local variables.
     * If the dispatcher requires more than this, you must
     * handle this in Hwi_Module_startup().
     */

    Hwi_Object *hwi;
    BIOS_ThreadType prevThreadType;
    UInt intNum;
    Char *oldTaskSP;
    UInt32 oldREQENASET0, oldREQENASET1;
    Int tskKey;
    Int swiKey;
    Int i;

    /* save irp somewhere that survives the stack switch */
    Hwi_module->irp = irp;

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

    intNum = Hwi_vim.IRQINDEX - 1;

    /* ack this interrupt */
    Hwi_clearInterrupt(intNum);

    hwi = Hwi_module->dispatchTable[intNum];

    hwi->irp = Hwi_module->irp;

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
        oldREQENASET0 = Hwi_vim.REQENASET[0];
        Hwi_vim.REQENACLR[0] = hwi->disableMask0;
        oldREQENASET1 = Hwi_vim.REQENASET[1];
        Hwi_vim.REQENACLR[1] = hwi->disableMask1;
        Hwi_enable();

        (hwi->fxn)(hwi->arg);

        Hwi_disable();
        Hwi_vim.REQENASET[0] = (hwi->restoreMask0 & oldREQENASET0);
        Hwi_vim.REQENASET[1] = (hwi->restoreMask1 & oldREQENASET1);
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
 */
/*
 *  @(#) ti.sysbios.family.arm.tms570; 2, 0, 0, 0,295; 5-18-2012 06:04:34; /db/vtree/library/trees/avala/avala-q37x/src/ xlibrary

 */

