/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/msp430/ClockFreqs.h>
#include <ti/sysbios/family/msp430/Hwi.h>
#include <ti/sysbios/family/msp430/IntrinsicsSupport.h>
#include <ti/sysbios/family/msp430/TaskSupport.h>
#include <ti/sysbios/family/msp430/Timer.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/hal/Timer.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>


/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__* __fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_msp430_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_msp430_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_msp430_Hwi_Module__ ti_sysbios_family_msp430_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_msp430_Hwi_Object__ {
    const ti_sysbios_family_msp430_Hwi_Fxns__* __fxns;
    xdc_Int intNum;
    ti_sysbios_family_msp430_Hwi_Irp irp;
    __TA_ti_sysbios_family_msp430_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_msp430_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_msp430_Hwi_Object__ obj;
} ti_sysbios_family_msp430_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_msp430_Hwi___VERS
    #define ti_sysbios_family_msp430_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_msp430_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_msp430_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_msp430_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_msp430_Timer_Module__ ti_sysbios_family_msp430_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_msp430_Timer_Object__ {
    const ti_sysbios_family_msp430_Timer_Fxns__* __fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt controlRegInit;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_msp430_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_msp430_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_Bool synchronous;
} ti_sysbios_family_msp430_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_msp430_Timer_Object__ obj;
} ti_sysbios_family_msp430_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_msp430_Timer___VERS
    #define ti_sysbios_family_msp430_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_msp430_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__* __fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__* __fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_msp430_Hwi_Object */

/* Object */
typedef ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Timer_Object__ {
    const ti_sysbios_hal_Timer_Fxns__* __fxns;
    ti_sysbios_hal_Timer_TimerProxy_Handle pi;
} ti_sysbios_hal_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_Object__ obj;
} ti_sysbios_hal_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer___VERS
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Timer_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Timer_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Timer_TimerProxy_Module__ ti_sysbios_hal_Timer_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_msp430_Timer_Object */

/* Object */
typedef ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_hal_Timer_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Timer_TimerProxy_Object__ obj;
} ti_sysbios_hal_Timer_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Timer_TimerProxy___VERS
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Timer_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__* __fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem* pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_family_msp430_IntrinsicsSupport_Fxns__ ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* base__ */
    &ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_msp430_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8014, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8025, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* base__ */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8026, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* base__ */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8028, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* base__ */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    ti_sysbios_BIOS_StartFuncPtr startFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_family_msp430_Hwi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_Hwi_Module_State__ {
    xdc_Char* taskSP;
    xdc_Char* isrStack;
} ti_sysbios_family_msp430_Hwi_Module_State__;

/* Module__state__V */
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V;


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.msp430.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_family_msp430_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_msp430_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_msp430_Timer_Module_State__device device;
    __TA_ti_sysbios_family_msp430_Timer_Module_State__handles handles;
} ti_sysbios_family_msp430_Timer_Module_State__;

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__device ti_sysbios_family_msp430_Timer_Module_State_0_device__A[3];

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__handles ti_sysbios_family_msp430_Timer_Module_State_0_handles__A[3];

/* Module__state__V */
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V;


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1];


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 4);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(4)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_hal_Timer_Handle timer;
    xdc_Void (*doTickFunc)(xdc_UArg);
    ti_sysbios_knl_Swi_Handle swi;
    xdc_UInt32 periodCounts;
    volatile xdc_UInt numTickSkip;
    xdc_UInt skipsWorkFunc;
    xdc_Bool inWorkFunc;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 2);
#endif
#ifdef __GNUC__
#if __GNUC__ >= 4
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((aligned(2)));
#endif
#endif

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    ti_sysbios_knl_Task_Handle idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_knl_Task_checkStacks */
extern xdc_Void ti_sysbios_knl_Task_checkStacks(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc* listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int* stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_msp430_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_msp430_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
    xdc_Int exitStatus;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_Char**,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[4361];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[41];


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /db/vtree/library/trees/avala/avala-q37x/src/ti/sysbios/package/cfg/nonInstrumented_p430");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = 430");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.exp430F5438");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.msp430.MSP430");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.cof.Coff");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_family_msp430_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_family_msp430_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}

/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[9];
    xdc_runtime_Startup_startModsFxn__C(state, 9);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern Void ti_catalog_msp430_init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_catalog_msp430_init_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, Char **pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    Char    *fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->ptr, pva, parse->aFlag);
            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int HOSTwrite(int, const char *, unsigned);
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[5];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.catalog.msp430.init.Boot TEMPLATE ========
 */

    extern ti_catalog_msp430_init_Boot_disableWatchdog(UInt address);
    extern ti_catalog_msp430_init_Boot_configureDCO();

#if defined(__ti__)
#pragma CODE_SECTION(ti_catalog_msp430_init_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_catalog_msp430_init_Boot_init ========
 */
Void ti_catalog_msp430_init_Boot_init()
{
    ti_catalog_msp430_init_Boot_disableWatchdog(348);
    ti_catalog_msp430_init_Boot_configureDCO();
}



/*
 * ======== ti.sysbios.family.msp430.Hwi TEMPLATE ========
 */


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_exitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
	(xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_exitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_hal_Timer_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_exitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
	_register_lock(_nop);
	_register_unlock(_nop);
    }
#endif
}




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif

#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>
#include <stdlib.h>
#include <string.h>

/* malloc header */
typedef struct Header {
    Ptr   actualBuf;
    UArg  size;
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
	return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
	(SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
	return (NULL);
    }

    packet->actualBuf = (Ptr)packet;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
	return (NULL);
    }

    /*
     * If alignment is not a power of two or is less than the minimum
     * alignment of malloc(), then simply return what malloc() returns.
     * (same as behaviour as RTS library's memalign())
     * Note: HeapMem's header is the same as this header after it is raised
     * to a power of 2.
     */
    if (alignment <= sizeof(Header) || (alignment & (alignment-1))) {
	return malloc(size);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size,
	(SizeT)alignment, &eb);

    if (tmp == NULL) {
	return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->actualBuf = tmp;
    packet->size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    retval = malloc(nbytes);
    if (retval != NULL) {
	(Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
	packet = ((Header *)ptr) - 1;

	xdc_runtime_Memory_free(NULL, (Ptr)packet->actualBuf,
	    (packet->size + ((char*)packet - (char*)packet->actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
	retval = malloc(size);
    }
    else if (size == 0) {
	free(ptr);
	retval = NULL;
    }
    else {
	packet = (Header *)ptr - 1;
	retval = malloc(size);
	if (retval != NULL) {
	    oldSize = packet->size - sizeof(Header);
	    (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
	    free(ptr);
	}
    }

    return (retval);
}


/*
 * ======== ti.sysbios.hal.Hwi TEMPLATE ========
 */

#ifdef __ti__
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_disable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_enable__E);
    #pragma FUNC_EXT_CALLED(ti_sysbios_hal_Hwi_HwiProxy_restore__E);
#endif

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg) 
{
    static Bool first = TRUE;
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    if ((&ti_sysbios_knl_Clock_Module__state__V)->numTickSkip) {
        (&ti_sysbios_knl_Clock_Module__state__V)->ticks += (&ti_sysbios_knl_Clock_Module__state__V)->numTickSkip - 1;
    }
    (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

    ti_sysbios_knl_Clock_logTick__E();

    if ((!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) || (first == TRUE)) {
        first = FALSE;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);

    }
}

/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x7d0000,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x7d0000,  /* lo */
};

/* taskEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* installedErrorHook__C */
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.msp430.ClockFreqs INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__gateObj ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__id ti_sysbios_family_msp430_ClockFreqs_Module__id__C = (xdc_Bits16)0x8017;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8 ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__count ti_sysbios_family_msp430_ClockFreqs_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__heap ti_sysbios_family_msp430_ClockFreqs_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__sizeof ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_Object__table ti_sysbios_family_msp430_ClockFreqs_Object__table__C = 0;

/* ACLK__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_ACLK ti_sysbios_family_msp430_ClockFreqs_ACLK__C = (xdc_UInt32)0x8000;

/* SMCLK__C */
__FAR__ const CT__ti_sysbios_family_msp430_ClockFreqs_SMCLK ti_sysbios_family_msp430_ClockFreqs_SMCLK__C = (xdc_UInt32)0x7d0000;


/*
 * ======== ti.sysbios.family.msp430.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_msp430_Hwi_Params ti_sysbios_family_msp430_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_msp430_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_msp430_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_ALL,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_msp430_Hwi_Module__ ti_sysbios_family_msp430_Hwi_Module__root__V = {
    {&ti_sysbios_family_msp430_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_msp430_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_msp430_Hwi_Object__ ti_sysbios_family_msp430_Hwi_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (xdc_Int)0x36,  /* intNum */
        ((xdc_UArg)0),  /* irp */
        ((void*)0),  /* hookEnv */
    },
};

/* Module__state__V */
ti_sysbios_family_msp430_Hwi_Module_State__ ti_sysbios_family_msp430_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((xdc_Char*)0),  /* isrStack */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsEnabled ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsIncluded ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__diagsMask ti_sysbios_family_msp430_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__gateObj ti_sysbios_family_msp430_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__gatePrms ti_sysbios_family_msp430_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__id ti_sysbios_family_msp430_Hwi_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerDefined ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerObj ti_sysbios_family_msp430_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn0 ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn1 ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn2 ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn4 ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn8 ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__count ti_sysbios_family_msp430_Hwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__heap ti_sysbios_family_msp430_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__sizeof ti_sysbios_family_msp430_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_msp430_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_Object__table ti_sysbios_family_msp430_Hwi_Object__table__C = ti_sysbios_family_msp430_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0x40;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_LM_begin ti_sysbios_family_msp430_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)3387) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_LD_end ti_sysbios_family_msp430_Hwi_LD_end__C = (((xdc_runtime_Log_Event)3457) << 16 | 512);

/* A_unsupportedMaskingOption__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)355) << 16 | 16);

/* E_alreadyDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_E_alreadyDefined ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)2590) << 16 | 0);

/* E_notImplemented__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_E_notImplemented ti_sysbios_family_msp430_Hwi_E_notImplemented__C = (((xdc_runtime_Error_Id)2638) << 16 | 0);

/* hooks__C */
__FAR__ const CT__ti_sysbios_family_msp430_Hwi_hooks ti_sysbios_family_msp430_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__id ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8014;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__count ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_IntrinsicsSupport_Object__table ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.msp430.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsMask ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__gateObj ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__gatePrms ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__id ti_sysbios_family_msp430_TaskSupport_Module__id__C = (xdc_Bits16)0x8015;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerObj ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8 ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__count ti_sysbios_family_msp430_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__heap ti_sysbios_family_msp430_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__sizeof ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_Object__table ti_sysbios_family_msp430_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_defaultStackSize ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x200;

/* stackAlignment__C */
__FAR__ const CT__ti_sysbios_family_msp430_TaskSupport_stackAlignment ti_sysbios_family_msp430_TaskSupport_stackAlignment__C = (xdc_UInt)0x2;


/*
 * ======== ti.sysbios.family.msp430.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_family_msp430_Timer_Params ti_sysbios_family_msp430_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_msp430_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_msp430_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_msp430_Hwi_Params*)0),  /* hwiParams */
    ti_sysbios_family_msp430_Timer_Source_ACLK,  /* clockSource */
    0,  /* synchronous */
    0,  /* nesting */
    (xdc_UInt)0x0,  /* prevThreshold */
    {
        (xdc_UInt)0x0,  /* source */
    },  /* controlRegInit */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_msp430_Timer_Module__ ti_sysbios_family_msp430_Timer_Module__root__V = {
    {&ti_sysbios_family_msp430_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_msp430_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_msp430_Timer_Object__ ti_sysbios_family_msp430_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt)0x100,  /* controlRegInit */
        ti_sysbios_interfaces_ITimer_RunMode_DYNAMIC,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x20,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x36,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x8000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_msp430_Hwi_Handle)&ti_sysbios_family_msp430_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        0,  /* synchronous */
    },
};

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__device ti_sysbios_family_msp430_Timer_Module_State_0_device__A[3] = {
    {
        (xdc_UInt)0x36,  /* intNum */
        ((xdc_Ptr)(0x340)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x31,  /* intNum */
        ((xdc_Ptr)(0x380)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x3c,  /* intNum */
        ((xdc_Ptr)(0x3c0)),  /* baseAddr */
    },  /* [2] */
};

/* --> ti_sysbios_family_msp430_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_msp430_Timer_Module_State__handles ti_sysbios_family_msp430_Timer_Module_State_0_handles__A[3] = {
    (ti_sysbios_family_msp430_Timer_Handle)&ti_sysbios_family_msp430_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
};

/* Module__state__V */
ti_sysbios_family_msp430_Timer_Module_State__ ti_sysbios_family_msp430_Timer_Module__state__V = {
    (xdc_UInt)0x6,  /* availMask */
    ((void*)ti_sysbios_family_msp430_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_msp430_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsEnabled ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsIncluded ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__diagsMask ti_sysbios_family_msp430_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_msp430_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__gateObj ti_sysbios_family_msp430_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_msp430_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__gatePrms ti_sysbios_family_msp430_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_msp430_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__id ti_sysbios_family_msp430_Timer_Module__id__C = (xdc_Bits16)0x8016;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerDefined ti_sysbios_family_msp430_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerObj ti_sysbios_family_msp430_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn0 ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn1 ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn2 ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn4 ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn8 ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_msp430_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Module__startupDoneFxn ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_msp430_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__count ti_sysbios_family_msp430_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__heap ti_sysbios_family_msp430_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__sizeof ti_sysbios_family_msp430_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_msp430_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_Object__table ti_sysbios_family_msp430_Timer_Object__table__C = ti_sysbios_family_msp430_Timer_Object__table__V;

/* E_invalidTimer__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_invalidTimer ti_sysbios_family_msp430_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)2685) << 16 | 0);

/* E_notAvailable__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_notAvailable ti_sysbios_family_msp430_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)2721) << 16 | 0);

/* E_cannotSupport__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_cannotSupport ti_sysbios_family_msp430_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)2760) << 16 | 0);

/* E_runtimeCreate__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_E_runtimeCreate ti_sysbios_family_msp430_Timer_E_runtimeCreate__C = (((xdc_runtime_Error_Id)2818) << 16 | 0);

/* anyMask__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_anyMask ti_sysbios_family_msp430_Timer_anyMask__C = (xdc_UInt)0x7;

/* keepAwake__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_keepAwake ti_sysbios_family_msp430_Timer_keepAwake__C = 0;

/* startupNeeded__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_startupNeeded ti_sysbios_family_msp430_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
__FAR__ const CT__ti_sysbios_family_msp430_Timer_numTimerDevices ti_sysbios_family_msp430_Timer_numTimerDevices__C = (xdc_Int)0x3;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8026;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)1721) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_ALL,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)2954) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.hal.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_hal_Timer_Params ti_sysbios_hal_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Timer_Module__ ti_sysbios_hal_Timer_Module__root__V = {
    {&ti_sysbios_hal_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_hal_Timer_Object__ ti_sysbios_hal_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        (ti_sysbios_hal_Timer_TimerProxy_Handle)&ti_sysbios_family_msp430_Timer_Object__table__V[0],  /* pi */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsEnabled ti_sysbios_hal_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsIncluded ti_sysbios_hal_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__diagsMask ti_sysbios_hal_Timer_Module__diagsMask__C = ((CT__ti_sysbios_hal_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gateObj ti_sysbios_hal_Timer_Module__gateObj__C = ((CT__ti_sysbios_hal_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__gatePrms ti_sysbios_hal_Timer_Module__gatePrms__C = ((CT__ti_sysbios_hal_Timer_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__id ti_sysbios_hal_Timer_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerDefined ti_sysbios_hal_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerObj ti_sysbios_hal_Timer_Module__loggerObj__C = ((CT__ti_sysbios_hal_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn0 ti_sysbios_hal_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn1 ti_sysbios_hal_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn2 ti_sysbios_hal_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn4 ti_sysbios_hal_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__loggerFxn8 ti_sysbios_hal_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Module__startupDoneFxn ti_sysbios_hal_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__count ti_sysbios_hal_Timer_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__heap ti_sysbios_hal_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__sizeof ti_sysbios_hal_Timer_Object__sizeof__C = sizeof(ti_sysbios_hal_Timer_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_hal_Timer_Object__table ti_sysbios_hal_Timer_Object__table__C = ti_sysbios_hal_Timer_Object__table__V;


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x4)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
    },
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2154) << 16 | 16);

/* A_heapSize__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2190) << 16 | 16);

/* A_align__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2235) << 16 | 16);

/* E_memory__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)3175) << 16 | 0);

/* A_invalidFree__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2126) << 16 | 16);

/* reqAlign__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_Int)0x4;

/* reqAlignMask__C */
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlignMask ti_sysbios_heaps_HeapMem_reqAlignMask__C = (xdc_Int)0x3;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_hal_Timer_Handle)&ti_sysbios_hal_Timer_Object__table__V[0],  /* timer */
    ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* doTickFunc */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt32)0x0,  /* periodCounts */
    (xdc_UInt)0x0,  /* numTickSkip */
    (xdc_UInt)0x0,  /* skipsWorkFunc */
    0,  /* inWorkFunc */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)3475) << 16 | 1024);

/* LM_tick__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)3497) << 16 | 768);

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)3515) << 16 | 768);

/* A_clockDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)408) << 16 | 16);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)489) << 16 | 16);

/* tickSource__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_DYNAMIC;

/* timerId__C */
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {1, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)3547) << 16 | 768);

/* LM_pend__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)3577) << 16 | 768);

/* A_noEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)809) << 16 | 16);

/* A_invTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)864) << 16 | 16);

/* A_badContext__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)688) << 16 | 16);

/* supportsEvents__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* eventPost__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFuncDynamic__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8022;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)3620) << 16 | 768);

/* LD_end__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)3667) << 16 | 512);

/* LM_post__C */
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)3685) << 16 | 768);

/* A_swiDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)929) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)986) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_READY,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int))0),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,xdc_runtime_Error_Block*))0),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle,ti_sysbios_knl_Task_Handle))((xdc_Fxn)ti_sysbios_knl_Task_checkStacks)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle))0),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)3725) << 16 | 768);

/* LM_sleep__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)3793) << 16 | 768);

/* LD_ready__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)3838) << 16 | 512);

/* LD_block__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)3879) << 16 | 512);

/* LM_yield__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)3911) << 16 | 768);

/* LM_setPri__C */
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)3959) << 16 | 768);

/* LD_exit__C */
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)4015) << 16 | 512);

/* E_stackOverflow__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)2991) << 16 | 0);

/* E_spOutOfBounds__C */
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)3034) << 16 | 0);

/* A_badThreadType__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1035) << 16 | 16);

/* A_badTaskState__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1104) << 16 | 16);

/* A_noPendElem__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1158) << 16 | 16);

/* A_taskDisabled__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1212) << 16 | 16);

/* A_badPriority__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1275) << 16 | 16);

/* A_badTimeout__C */
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1325) << 16 | 16);

/* numPriorities__C */
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x200;

/* defaultStackHeap__C */
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)((xdc_Fxn)ti_sysbios_knl_Task_allBlockedFunction__I));

/* initStackFlag__C */
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* deleteTerminatedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks*)ti_sysbios_knl_Task_hooks__A)};

/* numConstructedTasks__C */
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)2350) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 0;

/* dictBase__C */
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)0);


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* E_generic__C */
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)2372) << 16 | 0);

/* E_memory__C */
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)2376) << 16 | 0);

/* E_msgCode__C */
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)2410) << 16 | 0);

/* policy__C */
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)3211) << 16 | 4);

/* L_create__C */
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)3235) << 16 | 4);

/* L_destruct__C */
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)3256) << 16 | 4);

/* L_delete__C */
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)3275) << 16 | 4);

/* L_error__C */
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)3292) << 16 | 192);

/* L_warning__C */
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)3306) << 16 | 224);

/* L_info__C */
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)3322) << 16 | 16384);

/* L_start__C */
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)3329) << 16 | 32768);

/* L_stop__C */
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)3340) << 16 | 32768);

/* L_startInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)3350) << 16 | 32768);

/* L_stopInstance__C */
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)3369) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x2,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[2] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)xdc_runtime_System_lastFxn__I)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[9] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_Hwi_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_msp430_Timer_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Timer_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [8] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[9] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    0,  /* [8] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {2, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
    (xdc_Int)0xcafe,  /* exitStatus */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)307) << 16 | 16);

/* maxAtexitHandlers__C */
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* extendFxn__C */
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[4361] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x20,  /* [147] */
    (xdc_Char)0x69,  /* [148] */
    (xdc_Char)0x6e,  /* [149] */
    (xdc_Char)0x73,  /* [150] */
    (xdc_Char)0x74,  /* [151] */
    (xdc_Char)0x61,  /* [152] */
    (xdc_Char)0x6e,  /* [153] */
    (xdc_Char)0x63,  /* [154] */
    (xdc_Char)0x65,  /* [155] */
    (xdc_Char)0x20,  /* [156] */
    (xdc_Char)0x74,  /* [157] */
    (xdc_Char)0x6f,  /* [158] */
    (xdc_Char)0x74,  /* [159] */
    (xdc_Char)0x61,  /* [160] */
    (xdc_Char)0x6c,  /* [161] */
    (xdc_Char)0x46,  /* [162] */
    (xdc_Char)0x72,  /* [163] */
    (xdc_Char)0x65,  /* [164] */
    (xdc_Char)0x65,  /* [165] */
    (xdc_Char)0x53,  /* [166] */
    (xdc_Char)0x69,  /* [167] */
    (xdc_Char)0x7a,  /* [168] */
    (xdc_Char)0x65,  /* [169] */
    (xdc_Char)0x20,  /* [170] */
    (xdc_Char)0x69,  /* [171] */
    (xdc_Char)0x73,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x67,  /* [174] */
    (xdc_Char)0x72,  /* [175] */
    (xdc_Char)0x65,  /* [176] */
    (xdc_Char)0x61,  /* [177] */
    (xdc_Char)0x74,  /* [178] */
    (xdc_Char)0x65,  /* [179] */
    (xdc_Char)0x72,  /* [180] */
    (xdc_Char)0x20,  /* [181] */
    (xdc_Char)0x74,  /* [182] */
    (xdc_Char)0x68,  /* [183] */
    (xdc_Char)0x61,  /* [184] */
    (xdc_Char)0x6e,  /* [185] */
    (xdc_Char)0x20,  /* [186] */
    (xdc_Char)0x73,  /* [187] */
    (xdc_Char)0x74,  /* [188] */
    (xdc_Char)0x61,  /* [189] */
    (xdc_Char)0x72,  /* [190] */
    (xdc_Char)0x74,  /* [191] */
    (xdc_Char)0x69,  /* [192] */
    (xdc_Char)0x6e,  /* [193] */
    (xdc_Char)0x67,  /* [194] */
    (xdc_Char)0x20,  /* [195] */
    (xdc_Char)0x73,  /* [196] */
    (xdc_Char)0x69,  /* [197] */
    (xdc_Char)0x7a,  /* [198] */
    (xdc_Char)0x65,  /* [199] */
    (xdc_Char)0x0,  /* [200] */
    (xdc_Char)0x48,  /* [201] */
    (xdc_Char)0x65,  /* [202] */
    (xdc_Char)0x61,  /* [203] */
    (xdc_Char)0x70,  /* [204] */
    (xdc_Char)0x53,  /* [205] */
    (xdc_Char)0x74,  /* [206] */
    (xdc_Char)0x64,  /* [207] */
    (xdc_Char)0x5f,  /* [208] */
    (xdc_Char)0x61,  /* [209] */
    (xdc_Char)0x6c,  /* [210] */
    (xdc_Char)0x6c,  /* [211] */
    (xdc_Char)0x6f,  /* [212] */
    (xdc_Char)0x63,  /* [213] */
    (xdc_Char)0x20,  /* [214] */
    (xdc_Char)0x2d,  /* [215] */
    (xdc_Char)0x20,  /* [216] */
    (xdc_Char)0x72,  /* [217] */
    (xdc_Char)0x65,  /* [218] */
    (xdc_Char)0x71,  /* [219] */
    (xdc_Char)0x75,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x73,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x64,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x61,  /* [227] */
    (xdc_Char)0x6c,  /* [228] */
    (xdc_Char)0x69,  /* [229] */
    (xdc_Char)0x67,  /* [230] */
    (xdc_Char)0x6e,  /* [231] */
    (xdc_Char)0x6d,  /* [232] */
    (xdc_Char)0x65,  /* [233] */
    (xdc_Char)0x6e,  /* [234] */
    (xdc_Char)0x74,  /* [235] */
    (xdc_Char)0x20,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x73,  /* [238] */
    (xdc_Char)0x20,  /* [239] */
    (xdc_Char)0x67,  /* [240] */
    (xdc_Char)0x72,  /* [241] */
    (xdc_Char)0x65,  /* [242] */
    (xdc_Char)0x61,  /* [243] */
    (xdc_Char)0x74,  /* [244] */
    (xdc_Char)0x65,  /* [245] */
    (xdc_Char)0x72,  /* [246] */
    (xdc_Char)0x20,  /* [247] */
    (xdc_Char)0x74,  /* [248] */
    (xdc_Char)0x68,  /* [249] */
    (xdc_Char)0x61,  /* [250] */
    (xdc_Char)0x6e,  /* [251] */
    (xdc_Char)0x20,  /* [252] */
    (xdc_Char)0x61,  /* [253] */
    (xdc_Char)0x6c,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6f,  /* [256] */
    (xdc_Char)0x77,  /* [257] */
    (xdc_Char)0x65,  /* [258] */
    (xdc_Char)0x64,  /* [259] */
    (xdc_Char)0x0,  /* [260] */
    (xdc_Char)0x41,  /* [261] */
    (xdc_Char)0x5f,  /* [262] */
    (xdc_Char)0x69,  /* [263] */
    (xdc_Char)0x6e,  /* [264] */
    (xdc_Char)0x76,  /* [265] */
    (xdc_Char)0x61,  /* [266] */
    (xdc_Char)0x6c,  /* [267] */
    (xdc_Char)0x69,  /* [268] */
    (xdc_Char)0x64,  /* [269] */
    (xdc_Char)0x4c,  /* [270] */
    (xdc_Char)0x6f,  /* [271] */
    (xdc_Char)0x67,  /* [272] */
    (xdc_Char)0x67,  /* [273] */
    (xdc_Char)0x65,  /* [274] */
    (xdc_Char)0x72,  /* [275] */
    (xdc_Char)0x3a,  /* [276] */
    (xdc_Char)0x20,  /* [277] */
    (xdc_Char)0x54,  /* [278] */
    (xdc_Char)0x68,  /* [279] */
    (xdc_Char)0x65,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x6c,  /* [282] */
    (xdc_Char)0x6f,  /* [283] */
    (xdc_Char)0x67,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x65,  /* [286] */
    (xdc_Char)0x72,  /* [287] */
    (xdc_Char)0x20,  /* [288] */
    (xdc_Char)0x69,  /* [289] */
    (xdc_Char)0x64,  /* [290] */
    (xdc_Char)0x20,  /* [291] */
    (xdc_Char)0x25,  /* [292] */
    (xdc_Char)0x64,  /* [293] */
    (xdc_Char)0x20,  /* [294] */
    (xdc_Char)0x69,  /* [295] */
    (xdc_Char)0x73,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x69,  /* [298] */
    (xdc_Char)0x6e,  /* [299] */
    (xdc_Char)0x76,  /* [300] */
    (xdc_Char)0x61,  /* [301] */
    (xdc_Char)0x6c,  /* [302] */
    (xdc_Char)0x69,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x2e,  /* [305] */
    (xdc_Char)0x0,  /* [306] */
    (xdc_Char)0x41,  /* [307] */
    (xdc_Char)0x5f,  /* [308] */
    (xdc_Char)0x63,  /* [309] */
    (xdc_Char)0x61,  /* [310] */
    (xdc_Char)0x6e,  /* [311] */
    (xdc_Char)0x6e,  /* [312] */
    (xdc_Char)0x6f,  /* [313] */
    (xdc_Char)0x74,  /* [314] */
    (xdc_Char)0x46,  /* [315] */
    (xdc_Char)0x69,  /* [316] */
    (xdc_Char)0x74,  /* [317] */
    (xdc_Char)0x49,  /* [318] */
    (xdc_Char)0x6e,  /* [319] */
    (xdc_Char)0x74,  /* [320] */
    (xdc_Char)0x6f,  /* [321] */
    (xdc_Char)0x41,  /* [322] */
    (xdc_Char)0x72,  /* [323] */
    (xdc_Char)0x67,  /* [324] */
    (xdc_Char)0x3a,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x73,  /* [327] */
    (xdc_Char)0x69,  /* [328] */
    (xdc_Char)0x7a,  /* [329] */
    (xdc_Char)0x65,  /* [330] */
    (xdc_Char)0x6f,  /* [331] */
    (xdc_Char)0x66,  /* [332] */
    (xdc_Char)0x28,  /* [333] */
    (xdc_Char)0x46,  /* [334] */
    (xdc_Char)0x6c,  /* [335] */
    (xdc_Char)0x6f,  /* [336] */
    (xdc_Char)0x61,  /* [337] */
    (xdc_Char)0x74,  /* [338] */
    (xdc_Char)0x29,  /* [339] */
    (xdc_Char)0x20,  /* [340] */
    (xdc_Char)0x3e,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x73,  /* [343] */
    (xdc_Char)0x69,  /* [344] */
    (xdc_Char)0x7a,  /* [345] */
    (xdc_Char)0x65,  /* [346] */
    (xdc_Char)0x6f,  /* [347] */
    (xdc_Char)0x66,  /* [348] */
    (xdc_Char)0x28,  /* [349] */
    (xdc_Char)0x41,  /* [350] */
    (xdc_Char)0x72,  /* [351] */
    (xdc_Char)0x67,  /* [352] */
    (xdc_Char)0x29,  /* [353] */
    (xdc_Char)0x0,  /* [354] */
    (xdc_Char)0x41,  /* [355] */
    (xdc_Char)0x5f,  /* [356] */
    (xdc_Char)0x75,  /* [357] */
    (xdc_Char)0x6e,  /* [358] */
    (xdc_Char)0x73,  /* [359] */
    (xdc_Char)0x75,  /* [360] */
    (xdc_Char)0x70,  /* [361] */
    (xdc_Char)0x70,  /* [362] */
    (xdc_Char)0x6f,  /* [363] */
    (xdc_Char)0x72,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x65,  /* [366] */
    (xdc_Char)0x64,  /* [367] */
    (xdc_Char)0x4d,  /* [368] */
    (xdc_Char)0x61,  /* [369] */
    (xdc_Char)0x73,  /* [370] */
    (xdc_Char)0x6b,  /* [371] */
    (xdc_Char)0x69,  /* [372] */
    (xdc_Char)0x6e,  /* [373] */
    (xdc_Char)0x67,  /* [374] */
    (xdc_Char)0x4f,  /* [375] */
    (xdc_Char)0x70,  /* [376] */
    (xdc_Char)0x74,  /* [377] */
    (xdc_Char)0x69,  /* [378] */
    (xdc_Char)0x6f,  /* [379] */
    (xdc_Char)0x6e,  /* [380] */
    (xdc_Char)0x3a,  /* [381] */
    (xdc_Char)0x20,  /* [382] */
    (xdc_Char)0x75,  /* [383] */
    (xdc_Char)0x6e,  /* [384] */
    (xdc_Char)0x73,  /* [385] */
    (xdc_Char)0x75,  /* [386] */
    (xdc_Char)0x70,  /* [387] */
    (xdc_Char)0x70,  /* [388] */
    (xdc_Char)0x6f,  /* [389] */
    (xdc_Char)0x72,  /* [390] */
    (xdc_Char)0x74,  /* [391] */
    (xdc_Char)0x65,  /* [392] */
    (xdc_Char)0x64,  /* [393] */
    (xdc_Char)0x20,  /* [394] */
    (xdc_Char)0x6d,  /* [395] */
    (xdc_Char)0x61,  /* [396] */
    (xdc_Char)0x73,  /* [397] */
    (xdc_Char)0x6b,  /* [398] */
    (xdc_Char)0x53,  /* [399] */
    (xdc_Char)0x65,  /* [400] */
    (xdc_Char)0x74,  /* [401] */
    (xdc_Char)0x74,  /* [402] */
    (xdc_Char)0x69,  /* [403] */
    (xdc_Char)0x6e,  /* [404] */
    (xdc_Char)0x67,  /* [405] */
    (xdc_Char)0x2e,  /* [406] */
    (xdc_Char)0x0,  /* [407] */
    (xdc_Char)0x41,  /* [408] */
    (xdc_Char)0x5f,  /* [409] */
    (xdc_Char)0x63,  /* [410] */
    (xdc_Char)0x6c,  /* [411] */
    (xdc_Char)0x6f,  /* [412] */
    (xdc_Char)0x63,  /* [413] */
    (xdc_Char)0x6b,  /* [414] */
    (xdc_Char)0x44,  /* [415] */
    (xdc_Char)0x69,  /* [416] */
    (xdc_Char)0x73,  /* [417] */
    (xdc_Char)0x61,  /* [418] */
    (xdc_Char)0x62,  /* [419] */
    (xdc_Char)0x6c,  /* [420] */
    (xdc_Char)0x65,  /* [421] */
    (xdc_Char)0x64,  /* [422] */
    (xdc_Char)0x3a,  /* [423] */
    (xdc_Char)0x20,  /* [424] */
    (xdc_Char)0x43,  /* [425] */
    (xdc_Char)0x61,  /* [426] */
    (xdc_Char)0x6e,  /* [427] */
    (xdc_Char)0x6e,  /* [428] */
    (xdc_Char)0x6f,  /* [429] */
    (xdc_Char)0x74,  /* [430] */
    (xdc_Char)0x20,  /* [431] */
    (xdc_Char)0x63,  /* [432] */
    (xdc_Char)0x72,  /* [433] */
    (xdc_Char)0x65,  /* [434] */
    (xdc_Char)0x61,  /* [435] */
    (xdc_Char)0x74,  /* [436] */
    (xdc_Char)0x65,  /* [437] */
    (xdc_Char)0x20,  /* [438] */
    (xdc_Char)0x61,  /* [439] */
    (xdc_Char)0x20,  /* [440] */
    (xdc_Char)0x63,  /* [441] */
    (xdc_Char)0x6c,  /* [442] */
    (xdc_Char)0x6f,  /* [443] */
    (xdc_Char)0x63,  /* [444] */
    (xdc_Char)0x6b,  /* [445] */
    (xdc_Char)0x20,  /* [446] */
    (xdc_Char)0x69,  /* [447] */
    (xdc_Char)0x6e,  /* [448] */
    (xdc_Char)0x73,  /* [449] */
    (xdc_Char)0x74,  /* [450] */
    (xdc_Char)0x61,  /* [451] */
    (xdc_Char)0x6e,  /* [452] */
    (xdc_Char)0x63,  /* [453] */
    (xdc_Char)0x65,  /* [454] */
    (xdc_Char)0x20,  /* [455] */
    (xdc_Char)0x77,  /* [456] */
    (xdc_Char)0x68,  /* [457] */
    (xdc_Char)0x65,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x20,  /* [460] */
    (xdc_Char)0x42,  /* [461] */
    (xdc_Char)0x49,  /* [462] */
    (xdc_Char)0x4f,  /* [463] */
    (xdc_Char)0x53,  /* [464] */
    (xdc_Char)0x2e,  /* [465] */
    (xdc_Char)0x63,  /* [466] */
    (xdc_Char)0x6c,  /* [467] */
    (xdc_Char)0x6f,  /* [468] */
    (xdc_Char)0x63,  /* [469] */
    (xdc_Char)0x6b,  /* [470] */
    (xdc_Char)0x45,  /* [471] */
    (xdc_Char)0x6e,  /* [472] */
    (xdc_Char)0x61,  /* [473] */
    (xdc_Char)0x62,  /* [474] */
    (xdc_Char)0x6c,  /* [475] */
    (xdc_Char)0x65,  /* [476] */
    (xdc_Char)0x64,  /* [477] */
    (xdc_Char)0x20,  /* [478] */
    (xdc_Char)0x69,  /* [479] */
    (xdc_Char)0x73,  /* [480] */
    (xdc_Char)0x20,  /* [481] */
    (xdc_Char)0x66,  /* [482] */
    (xdc_Char)0x61,  /* [483] */
    (xdc_Char)0x6c,  /* [484] */
    (xdc_Char)0x73,  /* [485] */
    (xdc_Char)0x65,  /* [486] */
    (xdc_Char)0x2e,  /* [487] */
    (xdc_Char)0x0,  /* [488] */
    (xdc_Char)0x41,  /* [489] */
    (xdc_Char)0x5f,  /* [490] */
    (xdc_Char)0x62,  /* [491] */
    (xdc_Char)0x61,  /* [492] */
    (xdc_Char)0x64,  /* [493] */
    (xdc_Char)0x54,  /* [494] */
    (xdc_Char)0x68,  /* [495] */
    (xdc_Char)0x72,  /* [496] */
    (xdc_Char)0x65,  /* [497] */
    (xdc_Char)0x61,  /* [498] */
    (xdc_Char)0x64,  /* [499] */
    (xdc_Char)0x54,  /* [500] */
    (xdc_Char)0x79,  /* [501] */
    (xdc_Char)0x70,  /* [502] */
    (xdc_Char)0x65,  /* [503] */
    (xdc_Char)0x3a,  /* [504] */
    (xdc_Char)0x20,  /* [505] */
    (xdc_Char)0x43,  /* [506] */
    (xdc_Char)0x61,  /* [507] */
    (xdc_Char)0x6e,  /* [508] */
    (xdc_Char)0x6e,  /* [509] */
    (xdc_Char)0x6f,  /* [510] */
    (xdc_Char)0x74,  /* [511] */
    (xdc_Char)0x20,  /* [512] */
    (xdc_Char)0x63,  /* [513] */
    (xdc_Char)0x72,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x61,  /* [516] */
    (xdc_Char)0x74,  /* [517] */
    (xdc_Char)0x65,  /* [518] */
    (xdc_Char)0x2f,  /* [519] */
    (xdc_Char)0x64,  /* [520] */
    (xdc_Char)0x65,  /* [521] */
    (xdc_Char)0x6c,  /* [522] */
    (xdc_Char)0x65,  /* [523] */
    (xdc_Char)0x74,  /* [524] */
    (xdc_Char)0x65,  /* [525] */
    (xdc_Char)0x20,  /* [526] */
    (xdc_Char)0x61,  /* [527] */
    (xdc_Char)0x20,  /* [528] */
    (xdc_Char)0x43,  /* [529] */
    (xdc_Char)0x6c,  /* [530] */
    (xdc_Char)0x6f,  /* [531] */
    (xdc_Char)0x63,  /* [532] */
    (xdc_Char)0x6b,  /* [533] */
    (xdc_Char)0x20,  /* [534] */
    (xdc_Char)0x66,  /* [535] */
    (xdc_Char)0x72,  /* [536] */
    (xdc_Char)0x6f,  /* [537] */
    (xdc_Char)0x6d,  /* [538] */
    (xdc_Char)0x20,  /* [539] */
    (xdc_Char)0x48,  /* [540] */
    (xdc_Char)0x77,  /* [541] */
    (xdc_Char)0x69,  /* [542] */
    (xdc_Char)0x20,  /* [543] */
    (xdc_Char)0x6f,  /* [544] */
    (xdc_Char)0x72,  /* [545] */
    (xdc_Char)0x20,  /* [546] */
    (xdc_Char)0x53,  /* [547] */
    (xdc_Char)0x77,  /* [548] */
    (xdc_Char)0x69,  /* [549] */
    (xdc_Char)0x20,  /* [550] */
    (xdc_Char)0x74,  /* [551] */
    (xdc_Char)0x68,  /* [552] */
    (xdc_Char)0x72,  /* [553] */
    (xdc_Char)0x65,  /* [554] */
    (xdc_Char)0x61,  /* [555] */
    (xdc_Char)0x64,  /* [556] */
    (xdc_Char)0x2e,  /* [557] */
    (xdc_Char)0x0,  /* [558] */
    (xdc_Char)0x41,  /* [559] */
    (xdc_Char)0x5f,  /* [560] */
    (xdc_Char)0x6e,  /* [561] */
    (xdc_Char)0x75,  /* [562] */
    (xdc_Char)0x6c,  /* [563] */
    (xdc_Char)0x6c,  /* [564] */
    (xdc_Char)0x45,  /* [565] */
    (xdc_Char)0x76,  /* [566] */
    (xdc_Char)0x65,  /* [567] */
    (xdc_Char)0x6e,  /* [568] */
    (xdc_Char)0x74,  /* [569] */
    (xdc_Char)0x4d,  /* [570] */
    (xdc_Char)0x61,  /* [571] */
    (xdc_Char)0x73,  /* [572] */
    (xdc_Char)0x6b,  /* [573] */
    (xdc_Char)0x73,  /* [574] */
    (xdc_Char)0x3a,  /* [575] */
    (xdc_Char)0x20,  /* [576] */
    (xdc_Char)0x6f,  /* [577] */
    (xdc_Char)0x72,  /* [578] */
    (xdc_Char)0x4d,  /* [579] */
    (xdc_Char)0x61,  /* [580] */
    (xdc_Char)0x73,  /* [581] */
    (xdc_Char)0x6b,  /* [582] */
    (xdc_Char)0x20,  /* [583] */
    (xdc_Char)0x61,  /* [584] */
    (xdc_Char)0x6e,  /* [585] */
    (xdc_Char)0x64,  /* [586] */
    (xdc_Char)0x20,  /* [587] */
    (xdc_Char)0x61,  /* [588] */
    (xdc_Char)0x6e,  /* [589] */
    (xdc_Char)0x64,  /* [590] */
    (xdc_Char)0x4d,  /* [591] */
    (xdc_Char)0x61,  /* [592] */
    (xdc_Char)0x73,  /* [593] */
    (xdc_Char)0x6b,  /* [594] */
    (xdc_Char)0x20,  /* [595] */
    (xdc_Char)0x61,  /* [596] */
    (xdc_Char)0x72,  /* [597] */
    (xdc_Char)0x65,  /* [598] */
    (xdc_Char)0x20,  /* [599] */
    (xdc_Char)0x6e,  /* [600] */
    (xdc_Char)0x75,  /* [601] */
    (xdc_Char)0x6c,  /* [602] */
    (xdc_Char)0x6c,  /* [603] */
    (xdc_Char)0x2e,  /* [604] */
    (xdc_Char)0x0,  /* [605] */
    (xdc_Char)0x41,  /* [606] */
    (xdc_Char)0x5f,  /* [607] */
    (xdc_Char)0x6e,  /* [608] */
    (xdc_Char)0x75,  /* [609] */
    (xdc_Char)0x6c,  /* [610] */
    (xdc_Char)0x6c,  /* [611] */
    (xdc_Char)0x45,  /* [612] */
    (xdc_Char)0x76,  /* [613] */
    (xdc_Char)0x65,  /* [614] */
    (xdc_Char)0x6e,  /* [615] */
    (xdc_Char)0x74,  /* [616] */
    (xdc_Char)0x49,  /* [617] */
    (xdc_Char)0x64,  /* [618] */
    (xdc_Char)0x3a,  /* [619] */
    (xdc_Char)0x20,  /* [620] */
    (xdc_Char)0x70,  /* [621] */
    (xdc_Char)0x6f,  /* [622] */
    (xdc_Char)0x73,  /* [623] */
    (xdc_Char)0x74,  /* [624] */
    (xdc_Char)0x65,  /* [625] */
    (xdc_Char)0x64,  /* [626] */
    (xdc_Char)0x20,  /* [627] */
    (xdc_Char)0x65,  /* [628] */
    (xdc_Char)0x76,  /* [629] */
    (xdc_Char)0x65,  /* [630] */
    (xdc_Char)0x6e,  /* [631] */
    (xdc_Char)0x74,  /* [632] */
    (xdc_Char)0x49,  /* [633] */
    (xdc_Char)0x64,  /* [634] */
    (xdc_Char)0x20,  /* [635] */
    (xdc_Char)0x69,  /* [636] */
    (xdc_Char)0x73,  /* [637] */
    (xdc_Char)0x20,  /* [638] */
    (xdc_Char)0x6e,  /* [639] */
    (xdc_Char)0x75,  /* [640] */
    (xdc_Char)0x6c,  /* [641] */
    (xdc_Char)0x6c,  /* [642] */
    (xdc_Char)0x2e,  /* [643] */
    (xdc_Char)0x0,  /* [644] */
    (xdc_Char)0x41,  /* [645] */
    (xdc_Char)0x5f,  /* [646] */
    (xdc_Char)0x65,  /* [647] */
    (xdc_Char)0x76,  /* [648] */
    (xdc_Char)0x65,  /* [649] */
    (xdc_Char)0x6e,  /* [650] */
    (xdc_Char)0x74,  /* [651] */
    (xdc_Char)0x49,  /* [652] */
    (xdc_Char)0x6e,  /* [653] */
    (xdc_Char)0x55,  /* [654] */
    (xdc_Char)0x73,  /* [655] */
    (xdc_Char)0x65,  /* [656] */
    (xdc_Char)0x3a,  /* [657] */
    (xdc_Char)0x20,  /* [658] */
    (xdc_Char)0x45,  /* [659] */
    (xdc_Char)0x76,  /* [660] */
    (xdc_Char)0x65,  /* [661] */
    (xdc_Char)0x6e,  /* [662] */
    (xdc_Char)0x74,  /* [663] */
    (xdc_Char)0x20,  /* [664] */
    (xdc_Char)0x6f,  /* [665] */
    (xdc_Char)0x62,  /* [666] */
    (xdc_Char)0x6a,  /* [667] */
    (xdc_Char)0x65,  /* [668] */
    (xdc_Char)0x63,  /* [669] */
    (xdc_Char)0x74,  /* [670] */
    (xdc_Char)0x20,  /* [671] */
    (xdc_Char)0x61,  /* [672] */
    (xdc_Char)0x6c,  /* [673] */
    (xdc_Char)0x72,  /* [674] */
    (xdc_Char)0x65,  /* [675] */
    (xdc_Char)0x61,  /* [676] */
    (xdc_Char)0x64,  /* [677] */
    (xdc_Char)0x79,  /* [678] */
    (xdc_Char)0x20,  /* [679] */
    (xdc_Char)0x69,  /* [680] */
    (xdc_Char)0x6e,  /* [681] */
    (xdc_Char)0x20,  /* [682] */
    (xdc_Char)0x75,  /* [683] */
    (xdc_Char)0x73,  /* [684] */
    (xdc_Char)0x65,  /* [685] */
    (xdc_Char)0x2e,  /* [686] */
    (xdc_Char)0x0,  /* [687] */
    (xdc_Char)0x41,  /* [688] */
    (xdc_Char)0x5f,  /* [689] */
    (xdc_Char)0x62,  /* [690] */
    (xdc_Char)0x61,  /* [691] */
    (xdc_Char)0x64,  /* [692] */
    (xdc_Char)0x43,  /* [693] */
    (xdc_Char)0x6f,  /* [694] */
    (xdc_Char)0x6e,  /* [695] */
    (xdc_Char)0x74,  /* [696] */
    (xdc_Char)0x65,  /* [697] */
    (xdc_Char)0x78,  /* [698] */
    (xdc_Char)0x74,  /* [699] */
    (xdc_Char)0x3a,  /* [700] */
    (xdc_Char)0x20,  /* [701] */
    (xdc_Char)0x62,  /* [702] */
    (xdc_Char)0x61,  /* [703] */
    (xdc_Char)0x64,  /* [704] */
    (xdc_Char)0x20,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x61,  /* [707] */
    (xdc_Char)0x6c,  /* [708] */
    (xdc_Char)0x6c,  /* [709] */
    (xdc_Char)0x69,  /* [710] */
    (xdc_Char)0x6e,  /* [711] */
    (xdc_Char)0x67,  /* [712] */
    (xdc_Char)0x20,  /* [713] */
    (xdc_Char)0x63,  /* [714] */
    (xdc_Char)0x6f,  /* [715] */
    (xdc_Char)0x6e,  /* [716] */
    (xdc_Char)0x74,  /* [717] */
    (xdc_Char)0x65,  /* [718] */
    (xdc_Char)0x78,  /* [719] */
    (xdc_Char)0x74,  /* [720] */
    (xdc_Char)0x2e,  /* [721] */
    (xdc_Char)0x20,  /* [722] */
    (xdc_Char)0x4d,  /* [723] */
    (xdc_Char)0x75,  /* [724] */
    (xdc_Char)0x73,  /* [725] */
    (xdc_Char)0x74,  /* [726] */
    (xdc_Char)0x20,  /* [727] */
    (xdc_Char)0x62,  /* [728] */
    (xdc_Char)0x65,  /* [729] */
    (xdc_Char)0x20,  /* [730] */
    (xdc_Char)0x63,  /* [731] */
    (xdc_Char)0x61,  /* [732] */
    (xdc_Char)0x6c,  /* [733] */
    (xdc_Char)0x6c,  /* [734] */
    (xdc_Char)0x65,  /* [735] */
    (xdc_Char)0x64,  /* [736] */
    (xdc_Char)0x20,  /* [737] */
    (xdc_Char)0x66,  /* [738] */
    (xdc_Char)0x72,  /* [739] */
    (xdc_Char)0x6f,  /* [740] */
    (xdc_Char)0x6d,  /* [741] */
    (xdc_Char)0x20,  /* [742] */
    (xdc_Char)0x61,  /* [743] */
    (xdc_Char)0x20,  /* [744] */
    (xdc_Char)0x54,  /* [745] */
    (xdc_Char)0x61,  /* [746] */
    (xdc_Char)0x73,  /* [747] */
    (xdc_Char)0x6b,  /* [748] */
    (xdc_Char)0x2e,  /* [749] */
    (xdc_Char)0x0,  /* [750] */
    (xdc_Char)0x4d,  /* [751] */
    (xdc_Char)0x61,  /* [752] */
    (xdc_Char)0x69,  /* [753] */
    (xdc_Char)0x6c,  /* [754] */
    (xdc_Char)0x62,  /* [755] */
    (xdc_Char)0x6f,  /* [756] */
    (xdc_Char)0x78,  /* [757] */
    (xdc_Char)0x5f,  /* [758] */
    (xdc_Char)0x63,  /* [759] */
    (xdc_Char)0x72,  /* [760] */
    (xdc_Char)0x65,  /* [761] */
    (xdc_Char)0x61,  /* [762] */
    (xdc_Char)0x74,  /* [763] */
    (xdc_Char)0x65,  /* [764] */
    (xdc_Char)0x27,  /* [765] */
    (xdc_Char)0x73,  /* [766] */
    (xdc_Char)0x20,  /* [767] */
    (xdc_Char)0x62,  /* [768] */
    (xdc_Char)0x75,  /* [769] */
    (xdc_Char)0x66,  /* [770] */
    (xdc_Char)0x53,  /* [771] */
    (xdc_Char)0x69,  /* [772] */
    (xdc_Char)0x7a,  /* [773] */
    (xdc_Char)0x65,  /* [774] */
    (xdc_Char)0x20,  /* [775] */
    (xdc_Char)0x70,  /* [776] */
    (xdc_Char)0x61,  /* [777] */
    (xdc_Char)0x72,  /* [778] */
    (xdc_Char)0x61,  /* [779] */
    (xdc_Char)0x6d,  /* [780] */
    (xdc_Char)0x65,  /* [781] */
    (xdc_Char)0x74,  /* [782] */
    (xdc_Char)0x65,  /* [783] */
    (xdc_Char)0x72,  /* [784] */
    (xdc_Char)0x20,  /* [785] */
    (xdc_Char)0x69,  /* [786] */
    (xdc_Char)0x73,  /* [787] */
    (xdc_Char)0x20,  /* [788] */
    (xdc_Char)0x69,  /* [789] */
    (xdc_Char)0x6e,  /* [790] */
    (xdc_Char)0x76,  /* [791] */
    (xdc_Char)0x61,  /* [792] */
    (xdc_Char)0x6c,  /* [793] */
    (xdc_Char)0x69,  /* [794] */
    (xdc_Char)0x64,  /* [795] */
    (xdc_Char)0x20,  /* [796] */
    (xdc_Char)0x28,  /* [797] */
    (xdc_Char)0x74,  /* [798] */
    (xdc_Char)0x6f,  /* [799] */
    (xdc_Char)0x6f,  /* [800] */
    (xdc_Char)0x20,  /* [801] */
    (xdc_Char)0x73,  /* [802] */
    (xdc_Char)0x6d,  /* [803] */
    (xdc_Char)0x61,  /* [804] */
    (xdc_Char)0x6c,  /* [805] */
    (xdc_Char)0x6c,  /* [806] */
    (xdc_Char)0x29,  /* [807] */
    (xdc_Char)0x0,  /* [808] */
    (xdc_Char)0x41,  /* [809] */
    (xdc_Char)0x5f,  /* [810] */
    (xdc_Char)0x6e,  /* [811] */
    (xdc_Char)0x6f,  /* [812] */
    (xdc_Char)0x45,  /* [813] */
    (xdc_Char)0x76,  /* [814] */
    (xdc_Char)0x65,  /* [815] */
    (xdc_Char)0x6e,  /* [816] */
    (xdc_Char)0x74,  /* [817] */
    (xdc_Char)0x73,  /* [818] */
    (xdc_Char)0x3a,  /* [819] */
    (xdc_Char)0x20,  /* [820] */
    (xdc_Char)0x54,  /* [821] */
    (xdc_Char)0x68,  /* [822] */
    (xdc_Char)0x65,  /* [823] */
    (xdc_Char)0x20,  /* [824] */
    (xdc_Char)0x45,  /* [825] */
    (xdc_Char)0x76,  /* [826] */
    (xdc_Char)0x65,  /* [827] */
    (xdc_Char)0x6e,  /* [828] */
    (xdc_Char)0x74,  /* [829] */
    (xdc_Char)0x2e,  /* [830] */
    (xdc_Char)0x73,  /* [831] */
    (xdc_Char)0x75,  /* [832] */
    (xdc_Char)0x70,  /* [833] */
    (xdc_Char)0x70,  /* [834] */
    (xdc_Char)0x6f,  /* [835] */
    (xdc_Char)0x72,  /* [836] */
    (xdc_Char)0x74,  /* [837] */
    (xdc_Char)0x73,  /* [838] */
    (xdc_Char)0x45,  /* [839] */
    (xdc_Char)0x76,  /* [840] */
    (xdc_Char)0x65,  /* [841] */
    (xdc_Char)0x6e,  /* [842] */
    (xdc_Char)0x74,  /* [843] */
    (xdc_Char)0x73,  /* [844] */
    (xdc_Char)0x20,  /* [845] */
    (xdc_Char)0x66,  /* [846] */
    (xdc_Char)0x6c,  /* [847] */
    (xdc_Char)0x61,  /* [848] */
    (xdc_Char)0x67,  /* [849] */
    (xdc_Char)0x20,  /* [850] */
    (xdc_Char)0x69,  /* [851] */
    (xdc_Char)0x73,  /* [852] */
    (xdc_Char)0x20,  /* [853] */
    (xdc_Char)0x64,  /* [854] */
    (xdc_Char)0x69,  /* [855] */
    (xdc_Char)0x73,  /* [856] */
    (xdc_Char)0x61,  /* [857] */
    (xdc_Char)0x62,  /* [858] */
    (xdc_Char)0x6c,  /* [859] */
    (xdc_Char)0x65,  /* [860] */
    (xdc_Char)0x64,  /* [861] */
    (xdc_Char)0x2e,  /* [862] */
    (xdc_Char)0x0,  /* [863] */
    (xdc_Char)0x41,  /* [864] */
    (xdc_Char)0x5f,  /* [865] */
    (xdc_Char)0x69,  /* [866] */
    (xdc_Char)0x6e,  /* [867] */
    (xdc_Char)0x76,  /* [868] */
    (xdc_Char)0x54,  /* [869] */
    (xdc_Char)0x69,  /* [870] */
    (xdc_Char)0x6d,  /* [871] */
    (xdc_Char)0x65,  /* [872] */
    (xdc_Char)0x6f,  /* [873] */
    (xdc_Char)0x75,  /* [874] */
    (xdc_Char)0x74,  /* [875] */
    (xdc_Char)0x3a,  /* [876] */
    (xdc_Char)0x20,  /* [877] */
    (xdc_Char)0x43,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x6e,  /* [880] */
    (xdc_Char)0x27,  /* [881] */
    (xdc_Char)0x74,  /* [882] */
    (xdc_Char)0x20,  /* [883] */
    (xdc_Char)0x75,  /* [884] */
    (xdc_Char)0x73,  /* [885] */
    (xdc_Char)0x65,  /* [886] */
    (xdc_Char)0x20,  /* [887] */
    (xdc_Char)0x42,  /* [888] */
    (xdc_Char)0x49,  /* [889] */
    (xdc_Char)0x4f,  /* [890] */
    (xdc_Char)0x53,  /* [891] */
    (xdc_Char)0x5f,  /* [892] */
    (xdc_Char)0x45,  /* [893] */
    (xdc_Char)0x56,  /* [894] */
    (xdc_Char)0x45,  /* [895] */
    (xdc_Char)0x4e,  /* [896] */
    (xdc_Char)0x54,  /* [897] */
    (xdc_Char)0x5f,  /* [898] */
    (xdc_Char)0x41,  /* [899] */
    (xdc_Char)0x43,  /* [900] */
    (xdc_Char)0x51,  /* [901] */
    (xdc_Char)0x55,  /* [902] */
    (xdc_Char)0x49,  /* [903] */
    (xdc_Char)0x52,  /* [904] */
    (xdc_Char)0x45,  /* [905] */
    (xdc_Char)0x44,  /* [906] */
    (xdc_Char)0x20,  /* [907] */
    (xdc_Char)0x77,  /* [908] */
    (xdc_Char)0x69,  /* [909] */
    (xdc_Char)0x74,  /* [910] */
    (xdc_Char)0x68,  /* [911] */
    (xdc_Char)0x20,  /* [912] */
    (xdc_Char)0x74,  /* [913] */
    (xdc_Char)0x68,  /* [914] */
    (xdc_Char)0x69,  /* [915] */
    (xdc_Char)0x73,  /* [916] */
    (xdc_Char)0x20,  /* [917] */
    (xdc_Char)0x53,  /* [918] */
    (xdc_Char)0x65,  /* [919] */
    (xdc_Char)0x6d,  /* [920] */
    (xdc_Char)0x61,  /* [921] */
    (xdc_Char)0x70,  /* [922] */
    (xdc_Char)0x68,  /* [923] */
    (xdc_Char)0x6f,  /* [924] */
    (xdc_Char)0x72,  /* [925] */
    (xdc_Char)0x65,  /* [926] */
    (xdc_Char)0x2e,  /* [927] */
    (xdc_Char)0x0,  /* [928] */
    (xdc_Char)0x41,  /* [929] */
    (xdc_Char)0x5f,  /* [930] */
    (xdc_Char)0x73,  /* [931] */
    (xdc_Char)0x77,  /* [932] */
    (xdc_Char)0x69,  /* [933] */
    (xdc_Char)0x44,  /* [934] */
    (xdc_Char)0x69,  /* [935] */
    (xdc_Char)0x73,  /* [936] */
    (xdc_Char)0x61,  /* [937] */
    (xdc_Char)0x62,  /* [938] */
    (xdc_Char)0x6c,  /* [939] */
    (xdc_Char)0x65,  /* [940] */
    (xdc_Char)0x64,  /* [941] */
    (xdc_Char)0x3a,  /* [942] */
    (xdc_Char)0x20,  /* [943] */
    (xdc_Char)0x43,  /* [944] */
    (xdc_Char)0x61,  /* [945] */
    (xdc_Char)0x6e,  /* [946] */
    (xdc_Char)0x6e,  /* [947] */
    (xdc_Char)0x6f,  /* [948] */
    (xdc_Char)0x74,  /* [949] */
    (xdc_Char)0x20,  /* [950] */
    (xdc_Char)0x63,  /* [951] */
    (xdc_Char)0x72,  /* [952] */
    (xdc_Char)0x65,  /* [953] */
    (xdc_Char)0x61,  /* [954] */
    (xdc_Char)0x74,  /* [955] */
    (xdc_Char)0x65,  /* [956] */
    (xdc_Char)0x20,  /* [957] */
    (xdc_Char)0x61,  /* [958] */
    (xdc_Char)0x20,  /* [959] */
    (xdc_Char)0x53,  /* [960] */
    (xdc_Char)0x77,  /* [961] */
    (xdc_Char)0x69,  /* [962] */
    (xdc_Char)0x20,  /* [963] */
    (xdc_Char)0x77,  /* [964] */
    (xdc_Char)0x68,  /* [965] */
    (xdc_Char)0x65,  /* [966] */
    (xdc_Char)0x6e,  /* [967] */
    (xdc_Char)0x20,  /* [968] */
    (xdc_Char)0x53,  /* [969] */
    (xdc_Char)0x77,  /* [970] */
    (xdc_Char)0x69,  /* [971] */
    (xdc_Char)0x20,  /* [972] */
    (xdc_Char)0x69,  /* [973] */
    (xdc_Char)0x73,  /* [974] */
    (xdc_Char)0x20,  /* [975] */
    (xdc_Char)0x64,  /* [976] */
    (xdc_Char)0x69,  /* [977] */
    (xdc_Char)0x73,  /* [978] */
    (xdc_Char)0x61,  /* [979] */
    (xdc_Char)0x62,  /* [980] */
    (xdc_Char)0x6c,  /* [981] */
    (xdc_Char)0x65,  /* [982] */
    (xdc_Char)0x64,  /* [983] */
    (xdc_Char)0x2e,  /* [984] */
    (xdc_Char)0x0,  /* [985] */
    (xdc_Char)0x41,  /* [986] */
    (xdc_Char)0x5f,  /* [987] */
    (xdc_Char)0x62,  /* [988] */
    (xdc_Char)0x61,  /* [989] */
    (xdc_Char)0x64,  /* [990] */
    (xdc_Char)0x50,  /* [991] */
    (xdc_Char)0x72,  /* [992] */
    (xdc_Char)0x69,  /* [993] */
    (xdc_Char)0x6f,  /* [994] */
    (xdc_Char)0x72,  /* [995] */
    (xdc_Char)0x69,  /* [996] */
    (xdc_Char)0x74,  /* [997] */
    (xdc_Char)0x79,  /* [998] */
    (xdc_Char)0x3a,  /* [999] */
    (xdc_Char)0x20,  /* [1000] */
    (xdc_Char)0x41,  /* [1001] */
    (xdc_Char)0x6e,  /* [1002] */
    (xdc_Char)0x20,  /* [1003] */
    (xdc_Char)0x69,  /* [1004] */
    (xdc_Char)0x6e,  /* [1005] */
    (xdc_Char)0x76,  /* [1006] */
    (xdc_Char)0x61,  /* [1007] */
    (xdc_Char)0x6c,  /* [1008] */
    (xdc_Char)0x69,  /* [1009] */
    (xdc_Char)0x64,  /* [1010] */
    (xdc_Char)0x20,  /* [1011] */
    (xdc_Char)0x53,  /* [1012] */
    (xdc_Char)0x77,  /* [1013] */
    (xdc_Char)0x69,  /* [1014] */
    (xdc_Char)0x20,  /* [1015] */
    (xdc_Char)0x70,  /* [1016] */
    (xdc_Char)0x72,  /* [1017] */
    (xdc_Char)0x69,  /* [1018] */
    (xdc_Char)0x6f,  /* [1019] */
    (xdc_Char)0x72,  /* [1020] */
    (xdc_Char)0x69,  /* [1021] */
    (xdc_Char)0x74,  /* [1022] */
    (xdc_Char)0x79,  /* [1023] */
    (xdc_Char)0x20,  /* [1024] */
    (xdc_Char)0x77,  /* [1025] */
    (xdc_Char)0x61,  /* [1026] */
    (xdc_Char)0x73,  /* [1027] */
    (xdc_Char)0x20,  /* [1028] */
    (xdc_Char)0x75,  /* [1029] */
    (xdc_Char)0x73,  /* [1030] */
    (xdc_Char)0x65,  /* [1031] */
    (xdc_Char)0x64,  /* [1032] */
    (xdc_Char)0x2e,  /* [1033] */
    (xdc_Char)0x0,  /* [1034] */
    (xdc_Char)0x41,  /* [1035] */
    (xdc_Char)0x5f,  /* [1036] */
    (xdc_Char)0x62,  /* [1037] */
    (xdc_Char)0x61,  /* [1038] */
    (xdc_Char)0x64,  /* [1039] */
    (xdc_Char)0x54,  /* [1040] */
    (xdc_Char)0x68,  /* [1041] */
    (xdc_Char)0x72,  /* [1042] */
    (xdc_Char)0x65,  /* [1043] */
    (xdc_Char)0x61,  /* [1044] */
    (xdc_Char)0x64,  /* [1045] */
    (xdc_Char)0x54,  /* [1046] */
    (xdc_Char)0x79,  /* [1047] */
    (xdc_Char)0x70,  /* [1048] */
    (xdc_Char)0x65,  /* [1049] */
    (xdc_Char)0x3a,  /* [1050] */
    (xdc_Char)0x20,  /* [1051] */
    (xdc_Char)0x43,  /* [1052] */
    (xdc_Char)0x61,  /* [1053] */
    (xdc_Char)0x6e,  /* [1054] */
    (xdc_Char)0x6e,  /* [1055] */
    (xdc_Char)0x6f,  /* [1056] */
    (xdc_Char)0x74,  /* [1057] */
    (xdc_Char)0x20,  /* [1058] */
    (xdc_Char)0x63,  /* [1059] */
    (xdc_Char)0x72,  /* [1060] */
    (xdc_Char)0x65,  /* [1061] */
    (xdc_Char)0x61,  /* [1062] */
    (xdc_Char)0x74,  /* [1063] */
    (xdc_Char)0x65,  /* [1064] */
    (xdc_Char)0x2f,  /* [1065] */
    (xdc_Char)0x64,  /* [1066] */
    (xdc_Char)0x65,  /* [1067] */
    (xdc_Char)0x6c,  /* [1068] */
    (xdc_Char)0x65,  /* [1069] */
    (xdc_Char)0x74,  /* [1070] */
    (xdc_Char)0x65,  /* [1071] */
    (xdc_Char)0x20,  /* [1072] */
    (xdc_Char)0x61,  /* [1073] */
    (xdc_Char)0x20,  /* [1074] */
    (xdc_Char)0x74,  /* [1075] */
    (xdc_Char)0x61,  /* [1076] */
    (xdc_Char)0x73,  /* [1077] */
    (xdc_Char)0x6b,  /* [1078] */
    (xdc_Char)0x20,  /* [1079] */
    (xdc_Char)0x66,  /* [1080] */
    (xdc_Char)0x72,  /* [1081] */
    (xdc_Char)0x6f,  /* [1082] */
    (xdc_Char)0x6d,  /* [1083] */
    (xdc_Char)0x20,  /* [1084] */
    (xdc_Char)0x48,  /* [1085] */
    (xdc_Char)0x77,  /* [1086] */
    (xdc_Char)0x69,  /* [1087] */
    (xdc_Char)0x20,  /* [1088] */
    (xdc_Char)0x6f,  /* [1089] */
    (xdc_Char)0x72,  /* [1090] */
    (xdc_Char)0x20,  /* [1091] */
    (xdc_Char)0x53,  /* [1092] */
    (xdc_Char)0x77,  /* [1093] */
    (xdc_Char)0x69,  /* [1094] */
    (xdc_Char)0x20,  /* [1095] */
    (xdc_Char)0x74,  /* [1096] */
    (xdc_Char)0x68,  /* [1097] */
    (xdc_Char)0x72,  /* [1098] */
    (xdc_Char)0x65,  /* [1099] */
    (xdc_Char)0x61,  /* [1100] */
    (xdc_Char)0x64,  /* [1101] */
    (xdc_Char)0x2e,  /* [1102] */
    (xdc_Char)0x0,  /* [1103] */
    (xdc_Char)0x41,  /* [1104] */
    (xdc_Char)0x5f,  /* [1105] */
    (xdc_Char)0x62,  /* [1106] */
    (xdc_Char)0x61,  /* [1107] */
    (xdc_Char)0x64,  /* [1108] */
    (xdc_Char)0x54,  /* [1109] */
    (xdc_Char)0x61,  /* [1110] */
    (xdc_Char)0x73,  /* [1111] */
    (xdc_Char)0x6b,  /* [1112] */
    (xdc_Char)0x53,  /* [1113] */
    (xdc_Char)0x74,  /* [1114] */
    (xdc_Char)0x61,  /* [1115] */
    (xdc_Char)0x74,  /* [1116] */
    (xdc_Char)0x65,  /* [1117] */
    (xdc_Char)0x3a,  /* [1118] */
    (xdc_Char)0x20,  /* [1119] */
    (xdc_Char)0x43,  /* [1120] */
    (xdc_Char)0x61,  /* [1121] */
    (xdc_Char)0x6e,  /* [1122] */
    (xdc_Char)0x27,  /* [1123] */
    (xdc_Char)0x74,  /* [1124] */
    (xdc_Char)0x20,  /* [1125] */
    (xdc_Char)0x64,  /* [1126] */
    (xdc_Char)0x65,  /* [1127] */
    (xdc_Char)0x6c,  /* [1128] */
    (xdc_Char)0x65,  /* [1129] */
    (xdc_Char)0x74,  /* [1130] */
    (xdc_Char)0x65,  /* [1131] */
    (xdc_Char)0x20,  /* [1132] */
    (xdc_Char)0x61,  /* [1133] */
    (xdc_Char)0x20,  /* [1134] */
    (xdc_Char)0x74,  /* [1135] */
    (xdc_Char)0x61,  /* [1136] */
    (xdc_Char)0x73,  /* [1137] */
    (xdc_Char)0x6b,  /* [1138] */
    (xdc_Char)0x20,  /* [1139] */
    (xdc_Char)0x69,  /* [1140] */
    (xdc_Char)0x6e,  /* [1141] */
    (xdc_Char)0x20,  /* [1142] */
    (xdc_Char)0x52,  /* [1143] */
    (xdc_Char)0x55,  /* [1144] */
    (xdc_Char)0x4e,  /* [1145] */
    (xdc_Char)0x4e,  /* [1146] */
    (xdc_Char)0x49,  /* [1147] */
    (xdc_Char)0x4e,  /* [1148] */
    (xdc_Char)0x47,  /* [1149] */
    (xdc_Char)0x20,  /* [1150] */
    (xdc_Char)0x73,  /* [1151] */
    (xdc_Char)0x74,  /* [1152] */
    (xdc_Char)0x61,  /* [1153] */
    (xdc_Char)0x74,  /* [1154] */
    (xdc_Char)0x65,  /* [1155] */
    (xdc_Char)0x2e,  /* [1156] */
    (xdc_Char)0x0,  /* [1157] */
    (xdc_Char)0x41,  /* [1158] */
    (xdc_Char)0x5f,  /* [1159] */
    (xdc_Char)0x6e,  /* [1160] */
    (xdc_Char)0x6f,  /* [1161] */
    (xdc_Char)0x50,  /* [1162] */
    (xdc_Char)0x65,  /* [1163] */
    (xdc_Char)0x6e,  /* [1164] */
    (xdc_Char)0x64,  /* [1165] */
    (xdc_Char)0x45,  /* [1166] */
    (xdc_Char)0x6c,  /* [1167] */
    (xdc_Char)0x65,  /* [1168] */
    (xdc_Char)0x6d,  /* [1169] */
    (xdc_Char)0x3a,  /* [1170] */
    (xdc_Char)0x20,  /* [1171] */
    (xdc_Char)0x4e,  /* [1172] */
    (xdc_Char)0x6f,  /* [1173] */
    (xdc_Char)0x74,  /* [1174] */
    (xdc_Char)0x20,  /* [1175] */
    (xdc_Char)0x65,  /* [1176] */
    (xdc_Char)0x6e,  /* [1177] */
    (xdc_Char)0x6f,  /* [1178] */
    (xdc_Char)0x75,  /* [1179] */
    (xdc_Char)0x67,  /* [1180] */
    (xdc_Char)0x68,  /* [1181] */
    (xdc_Char)0x20,  /* [1182] */
    (xdc_Char)0x69,  /* [1183] */
    (xdc_Char)0x6e,  /* [1184] */
    (xdc_Char)0x66,  /* [1185] */
    (xdc_Char)0x6f,  /* [1186] */
    (xdc_Char)0x20,  /* [1187] */
    (xdc_Char)0x74,  /* [1188] */
    (xdc_Char)0x6f,  /* [1189] */
    (xdc_Char)0x20,  /* [1190] */
    (xdc_Char)0x64,  /* [1191] */
    (xdc_Char)0x65,  /* [1192] */
    (xdc_Char)0x6c,  /* [1193] */
    (xdc_Char)0x65,  /* [1194] */
    (xdc_Char)0x74,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x20,  /* [1197] */
    (xdc_Char)0x42,  /* [1198] */
    (xdc_Char)0x4c,  /* [1199] */
    (xdc_Char)0x4f,  /* [1200] */
    (xdc_Char)0x43,  /* [1201] */
    (xdc_Char)0x4b,  /* [1202] */
    (xdc_Char)0x45,  /* [1203] */
    (xdc_Char)0x44,  /* [1204] */
    (xdc_Char)0x20,  /* [1205] */
    (xdc_Char)0x74,  /* [1206] */
    (xdc_Char)0x61,  /* [1207] */
    (xdc_Char)0x73,  /* [1208] */
    (xdc_Char)0x6b,  /* [1209] */
    (xdc_Char)0x2e,  /* [1210] */
    (xdc_Char)0x0,  /* [1211] */
    (xdc_Char)0x41,  /* [1212] */
    (xdc_Char)0x5f,  /* [1213] */
    (xdc_Char)0x74,  /* [1214] */
    (xdc_Char)0x61,  /* [1215] */
    (xdc_Char)0x73,  /* [1216] */
    (xdc_Char)0x6b,  /* [1217] */
    (xdc_Char)0x44,  /* [1218] */
    (xdc_Char)0x69,  /* [1219] */
    (xdc_Char)0x73,  /* [1220] */
    (xdc_Char)0x61,  /* [1221] */
    (xdc_Char)0x62,  /* [1222] */
    (xdc_Char)0x6c,  /* [1223] */
    (xdc_Char)0x65,  /* [1224] */
    (xdc_Char)0x64,  /* [1225] */
    (xdc_Char)0x3a,  /* [1226] */
    (xdc_Char)0x20,  /* [1227] */
    (xdc_Char)0x43,  /* [1228] */
    (xdc_Char)0x61,  /* [1229] */
    (xdc_Char)0x6e,  /* [1230] */
    (xdc_Char)0x6e,  /* [1231] */
    (xdc_Char)0x6f,  /* [1232] */
    (xdc_Char)0x74,  /* [1233] */
    (xdc_Char)0x20,  /* [1234] */
    (xdc_Char)0x63,  /* [1235] */
    (xdc_Char)0x72,  /* [1236] */
    (xdc_Char)0x65,  /* [1237] */
    (xdc_Char)0x61,  /* [1238] */
    (xdc_Char)0x74,  /* [1239] */
    (xdc_Char)0x65,  /* [1240] */
    (xdc_Char)0x20,  /* [1241] */
    (xdc_Char)0x61,  /* [1242] */
    (xdc_Char)0x20,  /* [1243] */
    (xdc_Char)0x74,  /* [1244] */
    (xdc_Char)0x61,  /* [1245] */
    (xdc_Char)0x73,  /* [1246] */
    (xdc_Char)0x6b,  /* [1247] */
    (xdc_Char)0x20,  /* [1248] */
    (xdc_Char)0x77,  /* [1249] */
    (xdc_Char)0x68,  /* [1250] */
    (xdc_Char)0x65,  /* [1251] */
    (xdc_Char)0x6e,  /* [1252] */
    (xdc_Char)0x20,  /* [1253] */
    (xdc_Char)0x74,  /* [1254] */
    (xdc_Char)0x61,  /* [1255] */
    (xdc_Char)0x73,  /* [1256] */
    (xdc_Char)0x6b,  /* [1257] */
    (xdc_Char)0x69,  /* [1258] */
    (xdc_Char)0x6e,  /* [1259] */
    (xdc_Char)0x67,  /* [1260] */
    (xdc_Char)0x20,  /* [1261] */
    (xdc_Char)0x69,  /* [1262] */
    (xdc_Char)0x73,  /* [1263] */
    (xdc_Char)0x20,  /* [1264] */
    (xdc_Char)0x64,  /* [1265] */
    (xdc_Char)0x69,  /* [1266] */
    (xdc_Char)0x73,  /* [1267] */
    (xdc_Char)0x61,  /* [1268] */
    (xdc_Char)0x62,  /* [1269] */
    (xdc_Char)0x6c,  /* [1270] */
    (xdc_Char)0x65,  /* [1271] */
    (xdc_Char)0x64,  /* [1272] */
    (xdc_Char)0x2e,  /* [1273] */
    (xdc_Char)0x0,  /* [1274] */
    (xdc_Char)0x41,  /* [1275] */
    (xdc_Char)0x5f,  /* [1276] */
    (xdc_Char)0x62,  /* [1277] */
    (xdc_Char)0x61,  /* [1278] */
    (xdc_Char)0x64,  /* [1279] */
    (xdc_Char)0x50,  /* [1280] */
    (xdc_Char)0x72,  /* [1281] */
    (xdc_Char)0x69,  /* [1282] */
    (xdc_Char)0x6f,  /* [1283] */
    (xdc_Char)0x72,  /* [1284] */
    (xdc_Char)0x69,  /* [1285] */
    (xdc_Char)0x74,  /* [1286] */
    (xdc_Char)0x79,  /* [1287] */
    (xdc_Char)0x3a,  /* [1288] */
    (xdc_Char)0x20,  /* [1289] */
    (xdc_Char)0x41,  /* [1290] */
    (xdc_Char)0x6e,  /* [1291] */
    (xdc_Char)0x20,  /* [1292] */
    (xdc_Char)0x69,  /* [1293] */
    (xdc_Char)0x6e,  /* [1294] */
    (xdc_Char)0x76,  /* [1295] */
    (xdc_Char)0x61,  /* [1296] */
    (xdc_Char)0x6c,  /* [1297] */
    (xdc_Char)0x69,  /* [1298] */
    (xdc_Char)0x64,  /* [1299] */
    (xdc_Char)0x20,  /* [1300] */
    (xdc_Char)0x74,  /* [1301] */
    (xdc_Char)0x61,  /* [1302] */
    (xdc_Char)0x73,  /* [1303] */
    (xdc_Char)0x6b,  /* [1304] */
    (xdc_Char)0x20,  /* [1305] */
    (xdc_Char)0x70,  /* [1306] */
    (xdc_Char)0x72,  /* [1307] */
    (xdc_Char)0x69,  /* [1308] */
    (xdc_Char)0x6f,  /* [1309] */
    (xdc_Char)0x72,  /* [1310] */
    (xdc_Char)0x69,  /* [1311] */
    (xdc_Char)0x74,  /* [1312] */
    (xdc_Char)0x79,  /* [1313] */
    (xdc_Char)0x20,  /* [1314] */
    (xdc_Char)0x77,  /* [1315] */
    (xdc_Char)0x61,  /* [1316] */
    (xdc_Char)0x73,  /* [1317] */
    (xdc_Char)0x20,  /* [1318] */
    (xdc_Char)0x75,  /* [1319] */
    (xdc_Char)0x73,  /* [1320] */
    (xdc_Char)0x65,  /* [1321] */
    (xdc_Char)0x64,  /* [1322] */
    (xdc_Char)0x2e,  /* [1323] */
    (xdc_Char)0x0,  /* [1324] */
    (xdc_Char)0x41,  /* [1325] */
    (xdc_Char)0x5f,  /* [1326] */
    (xdc_Char)0x62,  /* [1327] */
    (xdc_Char)0x61,  /* [1328] */
    (xdc_Char)0x64,  /* [1329] */
    (xdc_Char)0x54,  /* [1330] */
    (xdc_Char)0x69,  /* [1331] */
    (xdc_Char)0x6d,  /* [1332] */
    (xdc_Char)0x65,  /* [1333] */
    (xdc_Char)0x6f,  /* [1334] */
    (xdc_Char)0x75,  /* [1335] */
    (xdc_Char)0x74,  /* [1336] */
    (xdc_Char)0x3a,  /* [1337] */
    (xdc_Char)0x20,  /* [1338] */
    (xdc_Char)0x43,  /* [1339] */
    (xdc_Char)0x61,  /* [1340] */
    (xdc_Char)0x6e,  /* [1341] */
    (xdc_Char)0x27,  /* [1342] */
    (xdc_Char)0x74,  /* [1343] */
    (xdc_Char)0x20,  /* [1344] */
    (xdc_Char)0x73,  /* [1345] */
    (xdc_Char)0x6c,  /* [1346] */
    (xdc_Char)0x65,  /* [1347] */
    (xdc_Char)0x65,  /* [1348] */
    (xdc_Char)0x70,  /* [1349] */
    (xdc_Char)0x20,  /* [1350] */
    (xdc_Char)0x46,  /* [1351] */
    (xdc_Char)0x4f,  /* [1352] */
    (xdc_Char)0x52,  /* [1353] */
    (xdc_Char)0x45,  /* [1354] */
    (xdc_Char)0x56,  /* [1355] */
    (xdc_Char)0x45,  /* [1356] */
    (xdc_Char)0x52,  /* [1357] */
    (xdc_Char)0x2e,  /* [1358] */
    (xdc_Char)0x0,  /* [1359] */
    (xdc_Char)0x41,  /* [1360] */
    (xdc_Char)0x5f,  /* [1361] */
    (xdc_Char)0x7a,  /* [1362] */
    (xdc_Char)0x65,  /* [1363] */
    (xdc_Char)0x72,  /* [1364] */
    (xdc_Char)0x6f,  /* [1365] */
    (xdc_Char)0x54,  /* [1366] */
    (xdc_Char)0x69,  /* [1367] */
    (xdc_Char)0x6d,  /* [1368] */
    (xdc_Char)0x65,  /* [1369] */
    (xdc_Char)0x6f,  /* [1370] */
    (xdc_Char)0x75,  /* [1371] */
    (xdc_Char)0x74,  /* [1372] */
    (xdc_Char)0x3a,  /* [1373] */
    (xdc_Char)0x20,  /* [1374] */
    (xdc_Char)0x54,  /* [1375] */
    (xdc_Char)0x69,  /* [1376] */
    (xdc_Char)0x6d,  /* [1377] */
    (xdc_Char)0x65,  /* [1378] */
    (xdc_Char)0x6f,  /* [1379] */
    (xdc_Char)0x75,  /* [1380] */
    (xdc_Char)0x74,  /* [1381] */
    (xdc_Char)0x20,  /* [1382] */
    (xdc_Char)0x76,  /* [1383] */
    (xdc_Char)0x61,  /* [1384] */
    (xdc_Char)0x6c,  /* [1385] */
    (xdc_Char)0x75,  /* [1386] */
    (xdc_Char)0x65,  /* [1387] */
    (xdc_Char)0x20,  /* [1388] */
    (xdc_Char)0x61,  /* [1389] */
    (xdc_Char)0x6e,  /* [1390] */
    (xdc_Char)0x6e,  /* [1391] */
    (xdc_Char)0x6f,  /* [1392] */
    (xdc_Char)0x74,  /* [1393] */
    (xdc_Char)0x20,  /* [1394] */
    (xdc_Char)0x62,  /* [1395] */
    (xdc_Char)0x65,  /* [1396] */
    (xdc_Char)0x20,  /* [1397] */
    (xdc_Char)0x7a,  /* [1398] */
    (xdc_Char)0x65,  /* [1399] */
    (xdc_Char)0x72,  /* [1400] */
    (xdc_Char)0x6f,  /* [1401] */
    (xdc_Char)0x0,  /* [1402] */
    (xdc_Char)0x41,  /* [1403] */
    (xdc_Char)0x5f,  /* [1404] */
    (xdc_Char)0x69,  /* [1405] */
    (xdc_Char)0x6e,  /* [1406] */
    (xdc_Char)0x76,  /* [1407] */
    (xdc_Char)0x61,  /* [1408] */
    (xdc_Char)0x6c,  /* [1409] */
    (xdc_Char)0x69,  /* [1410] */
    (xdc_Char)0x64,  /* [1411] */
    (xdc_Char)0x4b,  /* [1412] */
    (xdc_Char)0x65,  /* [1413] */
    (xdc_Char)0x79,  /* [1414] */
    (xdc_Char)0x3a,  /* [1415] */
    (xdc_Char)0x20,  /* [1416] */
    (xdc_Char)0x74,  /* [1417] */
    (xdc_Char)0x68,  /* [1418] */
    (xdc_Char)0x65,  /* [1419] */
    (xdc_Char)0x20,  /* [1420] */
    (xdc_Char)0x6b,  /* [1421] */
    (xdc_Char)0x65,  /* [1422] */
    (xdc_Char)0x79,  /* [1423] */
    (xdc_Char)0x20,  /* [1424] */
    (xdc_Char)0x6d,  /* [1425] */
    (xdc_Char)0x75,  /* [1426] */
    (xdc_Char)0x73,  /* [1427] */
    (xdc_Char)0x74,  /* [1428] */
    (xdc_Char)0x20,  /* [1429] */
    (xdc_Char)0x62,  /* [1430] */
    (xdc_Char)0x65,  /* [1431] */
    (xdc_Char)0x20,  /* [1432] */
    (xdc_Char)0x73,  /* [1433] */
    (xdc_Char)0x65,  /* [1434] */
    (xdc_Char)0x74,  /* [1435] */
    (xdc_Char)0x20,  /* [1436] */
    (xdc_Char)0x74,  /* [1437] */
    (xdc_Char)0x6f,  /* [1438] */
    (xdc_Char)0x20,  /* [1439] */
    (xdc_Char)0x61,  /* [1440] */
    (xdc_Char)0x20,  /* [1441] */
    (xdc_Char)0x6e,  /* [1442] */
    (xdc_Char)0x6f,  /* [1443] */
    (xdc_Char)0x6e,  /* [1444] */
    (xdc_Char)0x2d,  /* [1445] */
    (xdc_Char)0x64,  /* [1446] */
    (xdc_Char)0x65,  /* [1447] */
    (xdc_Char)0x66,  /* [1448] */
    (xdc_Char)0x61,  /* [1449] */
    (xdc_Char)0x75,  /* [1450] */
    (xdc_Char)0x6c,  /* [1451] */
    (xdc_Char)0x74,  /* [1452] */
    (xdc_Char)0x20,  /* [1453] */
    (xdc_Char)0x76,  /* [1454] */
    (xdc_Char)0x61,  /* [1455] */
    (xdc_Char)0x6c,  /* [1456] */
    (xdc_Char)0x75,  /* [1457] */
    (xdc_Char)0x65,  /* [1458] */
    (xdc_Char)0x0,  /* [1459] */
    (xdc_Char)0x41,  /* [1460] */
    (xdc_Char)0x5f,  /* [1461] */
    (xdc_Char)0x62,  /* [1462] */
    (xdc_Char)0x61,  /* [1463] */
    (xdc_Char)0x64,  /* [1464] */
    (xdc_Char)0x43,  /* [1465] */
    (xdc_Char)0x6f,  /* [1466] */
    (xdc_Char)0x6e,  /* [1467] */
    (xdc_Char)0x74,  /* [1468] */
    (xdc_Char)0x65,  /* [1469] */
    (xdc_Char)0x78,  /* [1470] */
    (xdc_Char)0x74,  /* [1471] */
    (xdc_Char)0x3a,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x62,  /* [1474] */
    (xdc_Char)0x61,  /* [1475] */
    (xdc_Char)0x64,  /* [1476] */
    (xdc_Char)0x20,  /* [1477] */
    (xdc_Char)0x63,  /* [1478] */
    (xdc_Char)0x61,  /* [1479] */
    (xdc_Char)0x6c,  /* [1480] */
    (xdc_Char)0x6c,  /* [1481] */
    (xdc_Char)0x69,  /* [1482] */
    (xdc_Char)0x6e,  /* [1483] */
    (xdc_Char)0x67,  /* [1484] */
    (xdc_Char)0x20,  /* [1485] */
    (xdc_Char)0x63,  /* [1486] */
    (xdc_Char)0x6f,  /* [1487] */
    (xdc_Char)0x6e,  /* [1488] */
    (xdc_Char)0x74,  /* [1489] */
    (xdc_Char)0x65,  /* [1490] */
    (xdc_Char)0x78,  /* [1491] */
    (xdc_Char)0x74,  /* [1492] */
    (xdc_Char)0x2e,  /* [1493] */
    (xdc_Char)0x20,  /* [1494] */
    (xdc_Char)0x4d,  /* [1495] */
    (xdc_Char)0x61,  /* [1496] */
    (xdc_Char)0x79,  /* [1497] */
    (xdc_Char)0x20,  /* [1498] */
    (xdc_Char)0x6e,  /* [1499] */
    (xdc_Char)0x6f,  /* [1500] */
    (xdc_Char)0x74,  /* [1501] */
    (xdc_Char)0x20,  /* [1502] */
    (xdc_Char)0x62,  /* [1503] */
    (xdc_Char)0x65,  /* [1504] */
    (xdc_Char)0x20,  /* [1505] */
    (xdc_Char)0x65,  /* [1506] */
    (xdc_Char)0x6e,  /* [1507] */
    (xdc_Char)0x74,  /* [1508] */
    (xdc_Char)0x65,  /* [1509] */
    (xdc_Char)0x72,  /* [1510] */
    (xdc_Char)0x65,  /* [1511] */
    (xdc_Char)0x64,  /* [1512] */
    (xdc_Char)0x20,  /* [1513] */
    (xdc_Char)0x66,  /* [1514] */
    (xdc_Char)0x72,  /* [1515] */
    (xdc_Char)0x6f,  /* [1516] */
    (xdc_Char)0x6d,  /* [1517] */
    (xdc_Char)0x20,  /* [1518] */
    (xdc_Char)0x61,  /* [1519] */
    (xdc_Char)0x20,  /* [1520] */
    (xdc_Char)0x68,  /* [1521] */
    (xdc_Char)0x61,  /* [1522] */
    (xdc_Char)0x72,  /* [1523] */
    (xdc_Char)0x64,  /* [1524] */
    (xdc_Char)0x77,  /* [1525] */
    (xdc_Char)0x61,  /* [1526] */
    (xdc_Char)0x72,  /* [1527] */
    (xdc_Char)0x65,  /* [1528] */
    (xdc_Char)0x20,  /* [1529] */
    (xdc_Char)0x69,  /* [1530] */
    (xdc_Char)0x6e,  /* [1531] */
    (xdc_Char)0x74,  /* [1532] */
    (xdc_Char)0x65,  /* [1533] */
    (xdc_Char)0x72,  /* [1534] */
    (xdc_Char)0x72,  /* [1535] */
    (xdc_Char)0x75,  /* [1536] */
    (xdc_Char)0x70,  /* [1537] */
    (xdc_Char)0x74,  /* [1538] */
    (xdc_Char)0x20,  /* [1539] */
    (xdc_Char)0x74,  /* [1540] */
    (xdc_Char)0x68,  /* [1541] */
    (xdc_Char)0x72,  /* [1542] */
    (xdc_Char)0x65,  /* [1543] */
    (xdc_Char)0x61,  /* [1544] */
    (xdc_Char)0x64,  /* [1545] */
    (xdc_Char)0x2e,  /* [1546] */
    (xdc_Char)0x0,  /* [1547] */
    (xdc_Char)0x41,  /* [1548] */
    (xdc_Char)0x5f,  /* [1549] */
    (xdc_Char)0x62,  /* [1550] */
    (xdc_Char)0x61,  /* [1551] */
    (xdc_Char)0x64,  /* [1552] */
    (xdc_Char)0x43,  /* [1553] */
    (xdc_Char)0x6f,  /* [1554] */
    (xdc_Char)0x6e,  /* [1555] */
    (xdc_Char)0x74,  /* [1556] */
    (xdc_Char)0x65,  /* [1557] */
    (xdc_Char)0x78,  /* [1558] */
    (xdc_Char)0x74,  /* [1559] */
    (xdc_Char)0x3a,  /* [1560] */
    (xdc_Char)0x20,  /* [1561] */
    (xdc_Char)0x62,  /* [1562] */
    (xdc_Char)0x61,  /* [1563] */
    (xdc_Char)0x64,  /* [1564] */
    (xdc_Char)0x20,  /* [1565] */
    (xdc_Char)0x63,  /* [1566] */
    (xdc_Char)0x61,  /* [1567] */
    (xdc_Char)0x6c,  /* [1568] */
    (xdc_Char)0x6c,  /* [1569] */
    (xdc_Char)0x69,  /* [1570] */
    (xdc_Char)0x6e,  /* [1571] */
    (xdc_Char)0x67,  /* [1572] */
    (xdc_Char)0x20,  /* [1573] */
    (xdc_Char)0x63,  /* [1574] */
    (xdc_Char)0x6f,  /* [1575] */
    (xdc_Char)0x6e,  /* [1576] */
    (xdc_Char)0x74,  /* [1577] */
    (xdc_Char)0x65,  /* [1578] */
    (xdc_Char)0x78,  /* [1579] */
    (xdc_Char)0x74,  /* [1580] */
    (xdc_Char)0x2e,  /* [1581] */
    (xdc_Char)0x20,  /* [1582] */
    (xdc_Char)0x4d,  /* [1583] */
    (xdc_Char)0x61,  /* [1584] */
    (xdc_Char)0x79,  /* [1585] */
    (xdc_Char)0x20,  /* [1586] */
    (xdc_Char)0x6e,  /* [1587] */
    (xdc_Char)0x6f,  /* [1588] */
    (xdc_Char)0x74,  /* [1589] */
    (xdc_Char)0x20,  /* [1590] */
    (xdc_Char)0x62,  /* [1591] */
    (xdc_Char)0x65,  /* [1592] */
    (xdc_Char)0x20,  /* [1593] */
    (xdc_Char)0x65,  /* [1594] */
    (xdc_Char)0x6e,  /* [1595] */
    (xdc_Char)0x74,  /* [1596] */
    (xdc_Char)0x65,  /* [1597] */
    (xdc_Char)0x72,  /* [1598] */
    (xdc_Char)0x65,  /* [1599] */
    (xdc_Char)0x64,  /* [1600] */
    (xdc_Char)0x20,  /* [1601] */
    (xdc_Char)0x66,  /* [1602] */
    (xdc_Char)0x72,  /* [1603] */
    (xdc_Char)0x6f,  /* [1604] */
    (xdc_Char)0x6d,  /* [1605] */
    (xdc_Char)0x20,  /* [1606] */
    (xdc_Char)0x61,  /* [1607] */
    (xdc_Char)0x20,  /* [1608] */
    (xdc_Char)0x73,  /* [1609] */
    (xdc_Char)0x6f,  /* [1610] */
    (xdc_Char)0x66,  /* [1611] */
    (xdc_Char)0x74,  /* [1612] */
    (xdc_Char)0x77,  /* [1613] */
    (xdc_Char)0x61,  /* [1614] */
    (xdc_Char)0x72,  /* [1615] */
    (xdc_Char)0x65,  /* [1616] */
    (xdc_Char)0x20,  /* [1617] */
    (xdc_Char)0x6f,  /* [1618] */
    (xdc_Char)0x72,  /* [1619] */
    (xdc_Char)0x20,  /* [1620] */
    (xdc_Char)0x68,  /* [1621] */
    (xdc_Char)0x61,  /* [1622] */
    (xdc_Char)0x72,  /* [1623] */
    (xdc_Char)0x64,  /* [1624] */
    (xdc_Char)0x77,  /* [1625] */
    (xdc_Char)0x61,  /* [1626] */
    (xdc_Char)0x72,  /* [1627] */
    (xdc_Char)0x65,  /* [1628] */
    (xdc_Char)0x20,  /* [1629] */
    (xdc_Char)0x69,  /* [1630] */
    (xdc_Char)0x6e,  /* [1631] */
    (xdc_Char)0x74,  /* [1632] */
    (xdc_Char)0x65,  /* [1633] */
    (xdc_Char)0x72,  /* [1634] */
    (xdc_Char)0x72,  /* [1635] */
    (xdc_Char)0x75,  /* [1636] */
    (xdc_Char)0x70,  /* [1637] */
    (xdc_Char)0x74,  /* [1638] */
    (xdc_Char)0x20,  /* [1639] */
    (xdc_Char)0x74,  /* [1640] */
    (xdc_Char)0x68,  /* [1641] */
    (xdc_Char)0x72,  /* [1642] */
    (xdc_Char)0x65,  /* [1643] */
    (xdc_Char)0x61,  /* [1644] */
    (xdc_Char)0x64,  /* [1645] */
    (xdc_Char)0x2e,  /* [1646] */
    (xdc_Char)0x0,  /* [1647] */
    (xdc_Char)0x41,  /* [1648] */
    (xdc_Char)0x5f,  /* [1649] */
    (xdc_Char)0x62,  /* [1650] */
    (xdc_Char)0x61,  /* [1651] */
    (xdc_Char)0x64,  /* [1652] */
    (xdc_Char)0x43,  /* [1653] */
    (xdc_Char)0x6f,  /* [1654] */
    (xdc_Char)0x6e,  /* [1655] */
    (xdc_Char)0x74,  /* [1656] */
    (xdc_Char)0x65,  /* [1657] */
    (xdc_Char)0x78,  /* [1658] */
    (xdc_Char)0x74,  /* [1659] */
    (xdc_Char)0x3a,  /* [1660] */
    (xdc_Char)0x20,  /* [1661] */
    (xdc_Char)0x62,  /* [1662] */
    (xdc_Char)0x61,  /* [1663] */
    (xdc_Char)0x64,  /* [1664] */
    (xdc_Char)0x20,  /* [1665] */
    (xdc_Char)0x63,  /* [1666] */
    (xdc_Char)0x61,  /* [1667] */
    (xdc_Char)0x6c,  /* [1668] */
    (xdc_Char)0x6c,  /* [1669] */
    (xdc_Char)0x69,  /* [1670] */
    (xdc_Char)0x6e,  /* [1671] */
    (xdc_Char)0x67,  /* [1672] */
    (xdc_Char)0x20,  /* [1673] */
    (xdc_Char)0x63,  /* [1674] */
    (xdc_Char)0x6f,  /* [1675] */
    (xdc_Char)0x6e,  /* [1676] */
    (xdc_Char)0x74,  /* [1677] */
    (xdc_Char)0x65,  /* [1678] */
    (xdc_Char)0x78,  /* [1679] */
    (xdc_Char)0x74,  /* [1680] */
    (xdc_Char)0x2e,  /* [1681] */
    (xdc_Char)0x20,  /* [1682] */
    (xdc_Char)0x53,  /* [1683] */
    (xdc_Char)0x65,  /* [1684] */
    (xdc_Char)0x65,  /* [1685] */
    (xdc_Char)0x20,  /* [1686] */
    (xdc_Char)0x47,  /* [1687] */
    (xdc_Char)0x61,  /* [1688] */
    (xdc_Char)0x74,  /* [1689] */
    (xdc_Char)0x65,  /* [1690] */
    (xdc_Char)0x4d,  /* [1691] */
    (xdc_Char)0x75,  /* [1692] */
    (xdc_Char)0x74,  /* [1693] */
    (xdc_Char)0x65,  /* [1694] */
    (xdc_Char)0x78,  /* [1695] */
    (xdc_Char)0x50,  /* [1696] */
    (xdc_Char)0x72,  /* [1697] */
    (xdc_Char)0x69,  /* [1698] */
    (xdc_Char)0x20,  /* [1699] */
    (xdc_Char)0x41,  /* [1700] */
    (xdc_Char)0x50,  /* [1701] */
    (xdc_Char)0x49,  /* [1702] */
    (xdc_Char)0x20,  /* [1703] */
    (xdc_Char)0x64,  /* [1704] */
    (xdc_Char)0x6f,  /* [1705] */
    (xdc_Char)0x63,  /* [1706] */
    (xdc_Char)0x20,  /* [1707] */
    (xdc_Char)0x66,  /* [1708] */
    (xdc_Char)0x6f,  /* [1709] */
    (xdc_Char)0x72,  /* [1710] */
    (xdc_Char)0x20,  /* [1711] */
    (xdc_Char)0x64,  /* [1712] */
    (xdc_Char)0x65,  /* [1713] */
    (xdc_Char)0x74,  /* [1714] */
    (xdc_Char)0x61,  /* [1715] */
    (xdc_Char)0x69,  /* [1716] */
    (xdc_Char)0x6c,  /* [1717] */
    (xdc_Char)0x73,  /* [1718] */
    (xdc_Char)0x2e,  /* [1719] */
    (xdc_Char)0x0,  /* [1720] */
    (xdc_Char)0x41,  /* [1721] */
    (xdc_Char)0x5f,  /* [1722] */
    (xdc_Char)0x62,  /* [1723] */
    (xdc_Char)0x61,  /* [1724] */
    (xdc_Char)0x64,  /* [1725] */
    (xdc_Char)0x43,  /* [1726] */
    (xdc_Char)0x6f,  /* [1727] */
    (xdc_Char)0x6e,  /* [1728] */
    (xdc_Char)0x74,  /* [1729] */
    (xdc_Char)0x65,  /* [1730] */
    (xdc_Char)0x78,  /* [1731] */
    (xdc_Char)0x74,  /* [1732] */
    (xdc_Char)0x3a,  /* [1733] */
    (xdc_Char)0x20,  /* [1734] */
    (xdc_Char)0x62,  /* [1735] */
    (xdc_Char)0x61,  /* [1736] */
    (xdc_Char)0x64,  /* [1737] */
    (xdc_Char)0x20,  /* [1738] */
    (xdc_Char)0x63,  /* [1739] */
    (xdc_Char)0x61,  /* [1740] */
    (xdc_Char)0x6c,  /* [1741] */
    (xdc_Char)0x6c,  /* [1742] */
    (xdc_Char)0x69,  /* [1743] */
    (xdc_Char)0x6e,  /* [1744] */
    (xdc_Char)0x67,  /* [1745] */
    (xdc_Char)0x20,  /* [1746] */
    (xdc_Char)0x63,  /* [1747] */
    (xdc_Char)0x6f,  /* [1748] */
    (xdc_Char)0x6e,  /* [1749] */
    (xdc_Char)0x74,  /* [1750] */
    (xdc_Char)0x65,  /* [1751] */
    (xdc_Char)0x78,  /* [1752] */
    (xdc_Char)0x74,  /* [1753] */
    (xdc_Char)0x2e,  /* [1754] */
    (xdc_Char)0x20,  /* [1755] */
    (xdc_Char)0x53,  /* [1756] */
    (xdc_Char)0x65,  /* [1757] */
    (xdc_Char)0x65,  /* [1758] */
    (xdc_Char)0x20,  /* [1759] */
    (xdc_Char)0x47,  /* [1760] */
    (xdc_Char)0x61,  /* [1761] */
    (xdc_Char)0x74,  /* [1762] */
    (xdc_Char)0x65,  /* [1763] */
    (xdc_Char)0x4d,  /* [1764] */
    (xdc_Char)0x75,  /* [1765] */
    (xdc_Char)0x74,  /* [1766] */
    (xdc_Char)0x65,  /* [1767] */
    (xdc_Char)0x78,  /* [1768] */
    (xdc_Char)0x20,  /* [1769] */
    (xdc_Char)0x41,  /* [1770] */
    (xdc_Char)0x50,  /* [1771] */
    (xdc_Char)0x49,  /* [1772] */
    (xdc_Char)0x20,  /* [1773] */
    (xdc_Char)0x64,  /* [1774] */
    (xdc_Char)0x6f,  /* [1775] */
    (xdc_Char)0x63,  /* [1776] */
    (xdc_Char)0x20,  /* [1777] */
    (xdc_Char)0x66,  /* [1778] */
    (xdc_Char)0x6f,  /* [1779] */
    (xdc_Char)0x72,  /* [1780] */
    (xdc_Char)0x20,  /* [1781] */
    (xdc_Char)0x64,  /* [1782] */
    (xdc_Char)0x65,  /* [1783] */
    (xdc_Char)0x74,  /* [1784] */
    (xdc_Char)0x61,  /* [1785] */
    (xdc_Char)0x69,  /* [1786] */
    (xdc_Char)0x6c,  /* [1787] */
    (xdc_Char)0x73,  /* [1788] */
    (xdc_Char)0x2e,  /* [1789] */
    (xdc_Char)0x0,  /* [1790] */
    (xdc_Char)0x62,  /* [1791] */
    (xdc_Char)0x75,  /* [1792] */
    (xdc_Char)0x66,  /* [1793] */
    (xdc_Char)0x20,  /* [1794] */
    (xdc_Char)0x70,  /* [1795] */
    (xdc_Char)0x61,  /* [1796] */
    (xdc_Char)0x72,  /* [1797] */
    (xdc_Char)0x61,  /* [1798] */
    (xdc_Char)0x6d,  /* [1799] */
    (xdc_Char)0x65,  /* [1800] */
    (xdc_Char)0x74,  /* [1801] */
    (xdc_Char)0x65,  /* [1802] */
    (xdc_Char)0x72,  /* [1803] */
    (xdc_Char)0x20,  /* [1804] */
    (xdc_Char)0x63,  /* [1805] */
    (xdc_Char)0x61,  /* [1806] */
    (xdc_Char)0x6e,  /* [1807] */
    (xdc_Char)0x6e,  /* [1808] */
    (xdc_Char)0x6f,  /* [1809] */
    (xdc_Char)0x74,  /* [1810] */
    (xdc_Char)0x20,  /* [1811] */
    (xdc_Char)0x62,  /* [1812] */
    (xdc_Char)0x65,  /* [1813] */
    (xdc_Char)0x20,  /* [1814] */
    (xdc_Char)0x6e,  /* [1815] */
    (xdc_Char)0x75,  /* [1816] */
    (xdc_Char)0x6c,  /* [1817] */
    (xdc_Char)0x6c,  /* [1818] */
    (xdc_Char)0x0,  /* [1819] */
    (xdc_Char)0x62,  /* [1820] */
    (xdc_Char)0x75,  /* [1821] */
    (xdc_Char)0x66,  /* [1822] */
    (xdc_Char)0x20,  /* [1823] */
    (xdc_Char)0x6e,  /* [1824] */
    (xdc_Char)0x6f,  /* [1825] */
    (xdc_Char)0x74,  /* [1826] */
    (xdc_Char)0x20,  /* [1827] */
    (xdc_Char)0x70,  /* [1828] */
    (xdc_Char)0x72,  /* [1829] */
    (xdc_Char)0x6f,  /* [1830] */
    (xdc_Char)0x70,  /* [1831] */
    (xdc_Char)0x65,  /* [1832] */
    (xdc_Char)0x72,  /* [1833] */
    (xdc_Char)0x6c,  /* [1834] */
    (xdc_Char)0x79,  /* [1835] */
    (xdc_Char)0x20,  /* [1836] */
    (xdc_Char)0x61,  /* [1837] */
    (xdc_Char)0x6c,  /* [1838] */
    (xdc_Char)0x69,  /* [1839] */
    (xdc_Char)0x67,  /* [1840] */
    (xdc_Char)0x6e,  /* [1841] */
    (xdc_Char)0x65,  /* [1842] */
    (xdc_Char)0x64,  /* [1843] */
    (xdc_Char)0x0,  /* [1844] */
    (xdc_Char)0x61,  /* [1845] */
    (xdc_Char)0x6c,  /* [1846] */
    (xdc_Char)0x69,  /* [1847] */
    (xdc_Char)0x67,  /* [1848] */
    (xdc_Char)0x6e,  /* [1849] */
    (xdc_Char)0x20,  /* [1850] */
    (xdc_Char)0x70,  /* [1851] */
    (xdc_Char)0x61,  /* [1852] */
    (xdc_Char)0x72,  /* [1853] */
    (xdc_Char)0x61,  /* [1854] */
    (xdc_Char)0x6d,  /* [1855] */
    (xdc_Char)0x65,  /* [1856] */
    (xdc_Char)0x74,  /* [1857] */
    (xdc_Char)0x65,  /* [1858] */
    (xdc_Char)0x72,  /* [1859] */
    (xdc_Char)0x20,  /* [1860] */
    (xdc_Char)0x6d,  /* [1861] */
    (xdc_Char)0x75,  /* [1862] */
    (xdc_Char)0x73,  /* [1863] */
    (xdc_Char)0x74,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x62,  /* [1866] */
    (xdc_Char)0x65,  /* [1867] */
    (xdc_Char)0x20,  /* [1868] */
    (xdc_Char)0x30,  /* [1869] */
    (xdc_Char)0x20,  /* [1870] */
    (xdc_Char)0x6f,  /* [1871] */
    (xdc_Char)0x72,  /* [1872] */
    (xdc_Char)0x20,  /* [1873] */
    (xdc_Char)0x61,  /* [1874] */
    (xdc_Char)0x20,  /* [1875] */
    (xdc_Char)0x70,  /* [1876] */
    (xdc_Char)0x6f,  /* [1877] */
    (xdc_Char)0x77,  /* [1878] */
    (xdc_Char)0x65,  /* [1879] */
    (xdc_Char)0x72,  /* [1880] */
    (xdc_Char)0x20,  /* [1881] */
    (xdc_Char)0x6f,  /* [1882] */
    (xdc_Char)0x66,  /* [1883] */
    (xdc_Char)0x20,  /* [1884] */
    (xdc_Char)0x32,  /* [1885] */
    (xdc_Char)0x20,  /* [1886] */
    (xdc_Char)0x3e,  /* [1887] */
    (xdc_Char)0x3d,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x74,  /* [1890] */
    (xdc_Char)0x68,  /* [1891] */
    (xdc_Char)0x65,  /* [1892] */
    (xdc_Char)0x20,  /* [1893] */
    (xdc_Char)0x76,  /* [1894] */
    (xdc_Char)0x61,  /* [1895] */
    (xdc_Char)0x6c,  /* [1896] */
    (xdc_Char)0x75,  /* [1897] */
    (xdc_Char)0x65,  /* [1898] */
    (xdc_Char)0x20,  /* [1899] */
    (xdc_Char)0x6f,  /* [1900] */
    (xdc_Char)0x66,  /* [1901] */
    (xdc_Char)0x20,  /* [1902] */
    (xdc_Char)0x4d,  /* [1903] */
    (xdc_Char)0x65,  /* [1904] */
    (xdc_Char)0x6d,  /* [1905] */
    (xdc_Char)0x6f,  /* [1906] */
    (xdc_Char)0x72,  /* [1907] */
    (xdc_Char)0x79,  /* [1908] */
    (xdc_Char)0x5f,  /* [1909] */
    (xdc_Char)0x67,  /* [1910] */
    (xdc_Char)0x65,  /* [1911] */
    (xdc_Char)0x74,  /* [1912] */
    (xdc_Char)0x4d,  /* [1913] */
    (xdc_Char)0x61,  /* [1914] */
    (xdc_Char)0x78,  /* [1915] */
    (xdc_Char)0x44,  /* [1916] */
    (xdc_Char)0x65,  /* [1917] */
    (xdc_Char)0x66,  /* [1918] */
    (xdc_Char)0x61,  /* [1919] */
    (xdc_Char)0x75,  /* [1920] */
    (xdc_Char)0x6c,  /* [1921] */
    (xdc_Char)0x74,  /* [1922] */
    (xdc_Char)0x54,  /* [1923] */
    (xdc_Char)0x79,  /* [1924] */
    (xdc_Char)0x70,  /* [1925] */
    (xdc_Char)0x65,  /* [1926] */
    (xdc_Char)0x41,  /* [1927] */
    (xdc_Char)0x6c,  /* [1928] */
    (xdc_Char)0x69,  /* [1929] */
    (xdc_Char)0x67,  /* [1930] */
    (xdc_Char)0x6e,  /* [1931] */
    (xdc_Char)0x28,  /* [1932] */
    (xdc_Char)0x29,  /* [1933] */
    (xdc_Char)0x0,  /* [1934] */
    (xdc_Char)0x62,  /* [1935] */
    (xdc_Char)0x6c,  /* [1936] */
    (xdc_Char)0x6f,  /* [1937] */
    (xdc_Char)0x63,  /* [1938] */
    (xdc_Char)0x6b,  /* [1939] */
    (xdc_Char)0x53,  /* [1940] */
    (xdc_Char)0x69,  /* [1941] */
    (xdc_Char)0x7a,  /* [1942] */
    (xdc_Char)0x65,  /* [1943] */
    (xdc_Char)0x20,  /* [1944] */
    (xdc_Char)0x63,  /* [1945] */
    (xdc_Char)0x61,  /* [1946] */
    (xdc_Char)0x6e,  /* [1947] */
    (xdc_Char)0x6e,  /* [1948] */
    (xdc_Char)0x6f,  /* [1949] */
    (xdc_Char)0x74,  /* [1950] */
    (xdc_Char)0x20,  /* [1951] */
    (xdc_Char)0x62,  /* [1952] */
    (xdc_Char)0x65,  /* [1953] */
    (xdc_Char)0x20,  /* [1954] */
    (xdc_Char)0x7a,  /* [1955] */
    (xdc_Char)0x65,  /* [1956] */
    (xdc_Char)0x72,  /* [1957] */
    (xdc_Char)0x6f,  /* [1958] */
    (xdc_Char)0x0,  /* [1959] */
    (xdc_Char)0x6e,  /* [1960] */
    (xdc_Char)0x75,  /* [1961] */
    (xdc_Char)0x6d,  /* [1962] */
    (xdc_Char)0x42,  /* [1963] */
    (xdc_Char)0x6c,  /* [1964] */
    (xdc_Char)0x6f,  /* [1965] */
    (xdc_Char)0x63,  /* [1966] */
    (xdc_Char)0x6b,  /* [1967] */
    (xdc_Char)0x73,  /* [1968] */
    (xdc_Char)0x20,  /* [1969] */
    (xdc_Char)0x63,  /* [1970] */
    (xdc_Char)0x61,  /* [1971] */
    (xdc_Char)0x6e,  /* [1972] */
    (xdc_Char)0x6e,  /* [1973] */
    (xdc_Char)0x6f,  /* [1974] */
    (xdc_Char)0x74,  /* [1975] */
    (xdc_Char)0x20,  /* [1976] */
    (xdc_Char)0x62,  /* [1977] */
    (xdc_Char)0x65,  /* [1978] */
    (xdc_Char)0x20,  /* [1979] */
    (xdc_Char)0x7a,  /* [1980] */
    (xdc_Char)0x65,  /* [1981] */
    (xdc_Char)0x72,  /* [1982] */
    (xdc_Char)0x6f,  /* [1983] */
    (xdc_Char)0x0,  /* [1984] */
    (xdc_Char)0x62,  /* [1985] */
    (xdc_Char)0x75,  /* [1986] */
    (xdc_Char)0x66,  /* [1987] */
    (xdc_Char)0x53,  /* [1988] */
    (xdc_Char)0x69,  /* [1989] */
    (xdc_Char)0x7a,  /* [1990] */
    (xdc_Char)0x65,  /* [1991] */
    (xdc_Char)0x20,  /* [1992] */
    (xdc_Char)0x63,  /* [1993] */
    (xdc_Char)0x61,  /* [1994] */
    (xdc_Char)0x6e,  /* [1995] */
    (xdc_Char)0x6e,  /* [1996] */
    (xdc_Char)0x6f,  /* [1997] */
    (xdc_Char)0x74,  /* [1998] */
    (xdc_Char)0x20,  /* [1999] */
    (xdc_Char)0x62,  /* [2000] */
    (xdc_Char)0x65,  /* [2001] */
    (xdc_Char)0x20,  /* [2002] */
    (xdc_Char)0x7a,  /* [2003] */
    (xdc_Char)0x65,  /* [2004] */
    (xdc_Char)0x72,  /* [2005] */
    (xdc_Char)0x6f,  /* [2006] */
    (xdc_Char)0x0,  /* [2007] */
    (xdc_Char)0x48,  /* [2008] */
    (xdc_Char)0x65,  /* [2009] */
    (xdc_Char)0x61,  /* [2010] */
    (xdc_Char)0x70,  /* [2011] */
    (xdc_Char)0x42,  /* [2012] */
    (xdc_Char)0x75,  /* [2013] */
    (xdc_Char)0x66,  /* [2014] */
    (xdc_Char)0x5f,  /* [2015] */
    (xdc_Char)0x63,  /* [2016] */
    (xdc_Char)0x72,  /* [2017] */
    (xdc_Char)0x65,  /* [2018] */
    (xdc_Char)0x61,  /* [2019] */
    (xdc_Char)0x74,  /* [2020] */
    (xdc_Char)0x65,  /* [2021] */
    (xdc_Char)0x27,  /* [2022] */
    (xdc_Char)0x73,  /* [2023] */
    (xdc_Char)0x20,  /* [2024] */
    (xdc_Char)0x62,  /* [2025] */
    (xdc_Char)0x75,  /* [2026] */
    (xdc_Char)0x66,  /* [2027] */
    (xdc_Char)0x53,  /* [2028] */
    (xdc_Char)0x69,  /* [2029] */
    (xdc_Char)0x7a,  /* [2030] */
    (xdc_Char)0x65,  /* [2031] */
    (xdc_Char)0x20,  /* [2032] */
    (xdc_Char)0x70,  /* [2033] */
    (xdc_Char)0x61,  /* [2034] */
    (xdc_Char)0x72,  /* [2035] */
    (xdc_Char)0x61,  /* [2036] */
    (xdc_Char)0x6d,  /* [2037] */
    (xdc_Char)0x65,  /* [2038] */
    (xdc_Char)0x74,  /* [2039] */
    (xdc_Char)0x65,  /* [2040] */
    (xdc_Char)0x72,  /* [2041] */
    (xdc_Char)0x20,  /* [2042] */
    (xdc_Char)0x69,  /* [2043] */
    (xdc_Char)0x73,  /* [2044] */
    (xdc_Char)0x20,  /* [2045] */
    (xdc_Char)0x69,  /* [2046] */
    (xdc_Char)0x6e,  /* [2047] */
    (xdc_Char)0x76,  /* [2048] */
    (xdc_Char)0x61,  /* [2049] */
    (xdc_Char)0x6c,  /* [2050] */
    (xdc_Char)0x69,  /* [2051] */
    (xdc_Char)0x64,  /* [2052] */
    (xdc_Char)0x20,  /* [2053] */
    (xdc_Char)0x28,  /* [2054] */
    (xdc_Char)0x74,  /* [2055] */
    (xdc_Char)0x6f,  /* [2056] */
    (xdc_Char)0x6f,  /* [2057] */
    (xdc_Char)0x20,  /* [2058] */
    (xdc_Char)0x73,  /* [2059] */
    (xdc_Char)0x6d,  /* [2060] */
    (xdc_Char)0x61,  /* [2061] */
    (xdc_Char)0x6c,  /* [2062] */
    (xdc_Char)0x6c,  /* [2063] */
    (xdc_Char)0x29,  /* [2064] */
    (xdc_Char)0x0,  /* [2065] */
    (xdc_Char)0x43,  /* [2066] */
    (xdc_Char)0x61,  /* [2067] */
    (xdc_Char)0x6e,  /* [2068] */
    (xdc_Char)0x6e,  /* [2069] */
    (xdc_Char)0x6f,  /* [2070] */
    (xdc_Char)0x74,  /* [2071] */
    (xdc_Char)0x20,  /* [2072] */
    (xdc_Char)0x63,  /* [2073] */
    (xdc_Char)0x61,  /* [2074] */
    (xdc_Char)0x6c,  /* [2075] */
    (xdc_Char)0x6c,  /* [2076] */
    (xdc_Char)0x20,  /* [2077] */
    (xdc_Char)0x48,  /* [2078] */
    (xdc_Char)0x65,  /* [2079] */
    (xdc_Char)0x61,  /* [2080] */
    (xdc_Char)0x70,  /* [2081] */
    (xdc_Char)0x42,  /* [2082] */
    (xdc_Char)0x75,  /* [2083] */
    (xdc_Char)0x66,  /* [2084] */
    (xdc_Char)0x5f,  /* [2085] */
    (xdc_Char)0x66,  /* [2086] */
    (xdc_Char)0x72,  /* [2087] */
    (xdc_Char)0x65,  /* [2088] */
    (xdc_Char)0x65,  /* [2089] */
    (xdc_Char)0x20,  /* [2090] */
    (xdc_Char)0x77,  /* [2091] */
    (xdc_Char)0x68,  /* [2092] */
    (xdc_Char)0x65,  /* [2093] */
    (xdc_Char)0x6e,  /* [2094] */
    (xdc_Char)0x20,  /* [2095] */
    (xdc_Char)0x6e,  /* [2096] */
    (xdc_Char)0x6f,  /* [2097] */
    (xdc_Char)0x20,  /* [2098] */
    (xdc_Char)0x62,  /* [2099] */
    (xdc_Char)0x6c,  /* [2100] */
    (xdc_Char)0x6f,  /* [2101] */
    (xdc_Char)0x63,  /* [2102] */
    (xdc_Char)0x6b,  /* [2103] */
    (xdc_Char)0x73,  /* [2104] */
    (xdc_Char)0x20,  /* [2105] */
    (xdc_Char)0x68,  /* [2106] */
    (xdc_Char)0x61,  /* [2107] */
    (xdc_Char)0x76,  /* [2108] */
    (xdc_Char)0x65,  /* [2109] */
    (xdc_Char)0x20,  /* [2110] */
    (xdc_Char)0x62,  /* [2111] */
    (xdc_Char)0x65,  /* [2112] */
    (xdc_Char)0x65,  /* [2113] */
    (xdc_Char)0x6e,  /* [2114] */
    (xdc_Char)0x20,  /* [2115] */
    (xdc_Char)0x61,  /* [2116] */
    (xdc_Char)0x6c,  /* [2117] */
    (xdc_Char)0x6c,  /* [2118] */
    (xdc_Char)0x6f,  /* [2119] */
    (xdc_Char)0x63,  /* [2120] */
    (xdc_Char)0x61,  /* [2121] */
    (xdc_Char)0x74,  /* [2122] */
    (xdc_Char)0x65,  /* [2123] */
    (xdc_Char)0x64,  /* [2124] */
    (xdc_Char)0x0,  /* [2125] */
    (xdc_Char)0x41,  /* [2126] */
    (xdc_Char)0x5f,  /* [2127] */
    (xdc_Char)0x69,  /* [2128] */
    (xdc_Char)0x6e,  /* [2129] */
    (xdc_Char)0x76,  /* [2130] */
    (xdc_Char)0x61,  /* [2131] */
    (xdc_Char)0x6c,  /* [2132] */
    (xdc_Char)0x69,  /* [2133] */
    (xdc_Char)0x64,  /* [2134] */
    (xdc_Char)0x46,  /* [2135] */
    (xdc_Char)0x72,  /* [2136] */
    (xdc_Char)0x65,  /* [2137] */
    (xdc_Char)0x65,  /* [2138] */
    (xdc_Char)0x3a,  /* [2139] */
    (xdc_Char)0x20,  /* [2140] */
    (xdc_Char)0x49,  /* [2141] */
    (xdc_Char)0x6e,  /* [2142] */
    (xdc_Char)0x76,  /* [2143] */
    (xdc_Char)0x61,  /* [2144] */
    (xdc_Char)0x6c,  /* [2145] */
    (xdc_Char)0x69,  /* [2146] */
    (xdc_Char)0x64,  /* [2147] */
    (xdc_Char)0x20,  /* [2148] */
    (xdc_Char)0x66,  /* [2149] */
    (xdc_Char)0x72,  /* [2150] */
    (xdc_Char)0x65,  /* [2151] */
    (xdc_Char)0x65,  /* [2152] */
    (xdc_Char)0x0,  /* [2153] */
    (xdc_Char)0x41,  /* [2154] */
    (xdc_Char)0x5f,  /* [2155] */
    (xdc_Char)0x7a,  /* [2156] */
    (xdc_Char)0x65,  /* [2157] */
    (xdc_Char)0x72,  /* [2158] */
    (xdc_Char)0x6f,  /* [2159] */
    (xdc_Char)0x42,  /* [2160] */
    (xdc_Char)0x6c,  /* [2161] */
    (xdc_Char)0x6f,  /* [2162] */
    (xdc_Char)0x63,  /* [2163] */
    (xdc_Char)0x6b,  /* [2164] */
    (xdc_Char)0x3a,  /* [2165] */
    (xdc_Char)0x20,  /* [2166] */
    (xdc_Char)0x43,  /* [2167] */
    (xdc_Char)0x61,  /* [2168] */
    (xdc_Char)0x6e,  /* [2169] */
    (xdc_Char)0x6e,  /* [2170] */
    (xdc_Char)0x6f,  /* [2171] */
    (xdc_Char)0x74,  /* [2172] */
    (xdc_Char)0x20,  /* [2173] */
    (xdc_Char)0x61,  /* [2174] */
    (xdc_Char)0x6c,  /* [2175] */
    (xdc_Char)0x6c,  /* [2176] */
    (xdc_Char)0x6f,  /* [2177] */
    (xdc_Char)0x63,  /* [2178] */
    (xdc_Char)0x61,  /* [2179] */
    (xdc_Char)0x74,  /* [2180] */
    (xdc_Char)0x65,  /* [2181] */
    (xdc_Char)0x20,  /* [2182] */
    (xdc_Char)0x73,  /* [2183] */
    (xdc_Char)0x69,  /* [2184] */
    (xdc_Char)0x7a,  /* [2185] */
    (xdc_Char)0x65,  /* [2186] */
    (xdc_Char)0x20,  /* [2187] */
    (xdc_Char)0x30,  /* [2188] */
    (xdc_Char)0x0,  /* [2189] */
    (xdc_Char)0x41,  /* [2190] */
    (xdc_Char)0x5f,  /* [2191] */
    (xdc_Char)0x68,  /* [2192] */
    (xdc_Char)0x65,  /* [2193] */
    (xdc_Char)0x61,  /* [2194] */
    (xdc_Char)0x70,  /* [2195] */
    (xdc_Char)0x53,  /* [2196] */
    (xdc_Char)0x69,  /* [2197] */
    (xdc_Char)0x7a,  /* [2198] */
    (xdc_Char)0x65,  /* [2199] */
    (xdc_Char)0x3a,  /* [2200] */
    (xdc_Char)0x20,  /* [2201] */
    (xdc_Char)0x52,  /* [2202] */
    (xdc_Char)0x65,  /* [2203] */
    (xdc_Char)0x71,  /* [2204] */
    (xdc_Char)0x75,  /* [2205] */
    (xdc_Char)0x65,  /* [2206] */
    (xdc_Char)0x73,  /* [2207] */
    (xdc_Char)0x74,  /* [2208] */
    (xdc_Char)0x65,  /* [2209] */
    (xdc_Char)0x64,  /* [2210] */
    (xdc_Char)0x20,  /* [2211] */
    (xdc_Char)0x68,  /* [2212] */
    (xdc_Char)0x65,  /* [2213] */
    (xdc_Char)0x61,  /* [2214] */
    (xdc_Char)0x70,  /* [2215] */
    (xdc_Char)0x20,  /* [2216] */
    (xdc_Char)0x73,  /* [2217] */
    (xdc_Char)0x69,  /* [2218] */
    (xdc_Char)0x7a,  /* [2219] */
    (xdc_Char)0x65,  /* [2220] */
    (xdc_Char)0x20,  /* [2221] */
    (xdc_Char)0x69,  /* [2222] */
    (xdc_Char)0x73,  /* [2223] */
    (xdc_Char)0x20,  /* [2224] */
    (xdc_Char)0x74,  /* [2225] */
    (xdc_Char)0x6f,  /* [2226] */
    (xdc_Char)0x6f,  /* [2227] */
    (xdc_Char)0x20,  /* [2228] */
    (xdc_Char)0x73,  /* [2229] */
    (xdc_Char)0x6d,  /* [2230] */
    (xdc_Char)0x61,  /* [2231] */
    (xdc_Char)0x6c,  /* [2232] */
    (xdc_Char)0x6c,  /* [2233] */
    (xdc_Char)0x0,  /* [2234] */
    (xdc_Char)0x41,  /* [2235] */
    (xdc_Char)0x5f,  /* [2236] */
    (xdc_Char)0x61,  /* [2237] */
    (xdc_Char)0x6c,  /* [2238] */
    (xdc_Char)0x69,  /* [2239] */
    (xdc_Char)0x67,  /* [2240] */
    (xdc_Char)0x6e,  /* [2241] */
    (xdc_Char)0x3a,  /* [2242] */
    (xdc_Char)0x20,  /* [2243] */
    (xdc_Char)0x52,  /* [2244] */
    (xdc_Char)0x65,  /* [2245] */
    (xdc_Char)0x71,  /* [2246] */
    (xdc_Char)0x75,  /* [2247] */
    (xdc_Char)0x65,  /* [2248] */
    (xdc_Char)0x73,  /* [2249] */
    (xdc_Char)0x74,  /* [2250] */
    (xdc_Char)0x65,  /* [2251] */
    (xdc_Char)0x64,  /* [2252] */
    (xdc_Char)0x20,  /* [2253] */
    (xdc_Char)0x61,  /* [2254] */
    (xdc_Char)0x6c,  /* [2255] */
    (xdc_Char)0x69,  /* [2256] */
    (xdc_Char)0x67,  /* [2257] */
    (xdc_Char)0x6e,  /* [2258] */
    (xdc_Char)0x20,  /* [2259] */
    (xdc_Char)0x69,  /* [2260] */
    (xdc_Char)0x73,  /* [2261] */
    (xdc_Char)0x20,  /* [2262] */
    (xdc_Char)0x6e,  /* [2263] */
    (xdc_Char)0x6f,  /* [2264] */
    (xdc_Char)0x74,  /* [2265] */
    (xdc_Char)0x20,  /* [2266] */
    (xdc_Char)0x61,  /* [2267] */
    (xdc_Char)0x20,  /* [2268] */
    (xdc_Char)0x70,  /* [2269] */
    (xdc_Char)0x6f,  /* [2270] */
    (xdc_Char)0x77,  /* [2271] */
    (xdc_Char)0x65,  /* [2272] */
    (xdc_Char)0x72,  /* [2273] */
    (xdc_Char)0x20,  /* [2274] */
    (xdc_Char)0x6f,  /* [2275] */
    (xdc_Char)0x66,  /* [2276] */
    (xdc_Char)0x20,  /* [2277] */
    (xdc_Char)0x32,  /* [2278] */
    (xdc_Char)0x0,  /* [2279] */
    (xdc_Char)0x49,  /* [2280] */
    (xdc_Char)0x6e,  /* [2281] */
    (xdc_Char)0x76,  /* [2282] */
    (xdc_Char)0x61,  /* [2283] */
    (xdc_Char)0x6c,  /* [2284] */
    (xdc_Char)0x69,  /* [2285] */
    (xdc_Char)0x64,  /* [2286] */
    (xdc_Char)0x20,  /* [2287] */
    (xdc_Char)0x62,  /* [2288] */
    (xdc_Char)0x6c,  /* [2289] */
    (xdc_Char)0x6f,  /* [2290] */
    (xdc_Char)0x63,  /* [2291] */
    (xdc_Char)0x6b,  /* [2292] */
    (xdc_Char)0x20,  /* [2293] */
    (xdc_Char)0x61,  /* [2294] */
    (xdc_Char)0x64,  /* [2295] */
    (xdc_Char)0x64,  /* [2296] */
    (xdc_Char)0x72,  /* [2297] */
    (xdc_Char)0x65,  /* [2298] */
    (xdc_Char)0x73,  /* [2299] */
    (xdc_Char)0x73,  /* [2300] */
    (xdc_Char)0x20,  /* [2301] */
    (xdc_Char)0x6f,  /* [2302] */
    (xdc_Char)0x6e,  /* [2303] */
    (xdc_Char)0x20,  /* [2304] */
    (xdc_Char)0x74,  /* [2305] */
    (xdc_Char)0x68,  /* [2306] */
    (xdc_Char)0x65,  /* [2307] */
    (xdc_Char)0x20,  /* [2308] */
    (xdc_Char)0x66,  /* [2309] */
    (xdc_Char)0x72,  /* [2310] */
    (xdc_Char)0x65,  /* [2311] */
    (xdc_Char)0x65,  /* [2312] */
    (xdc_Char)0x2e,  /* [2313] */
    (xdc_Char)0x20,  /* [2314] */
    (xdc_Char)0x46,  /* [2315] */
    (xdc_Char)0x61,  /* [2316] */
    (xdc_Char)0x69,  /* [2317] */
    (xdc_Char)0x6c,  /* [2318] */
    (xdc_Char)0x65,  /* [2319] */
    (xdc_Char)0x64,  /* [2320] */
    (xdc_Char)0x20,  /* [2321] */
    (xdc_Char)0x74,  /* [2322] */
    (xdc_Char)0x6f,  /* [2323] */
    (xdc_Char)0x20,  /* [2324] */
    (xdc_Char)0x66,  /* [2325] */
    (xdc_Char)0x72,  /* [2326] */
    (xdc_Char)0x65,  /* [2327] */
    (xdc_Char)0x65,  /* [2328] */
    (xdc_Char)0x20,  /* [2329] */
    (xdc_Char)0x62,  /* [2330] */
    (xdc_Char)0x6c,  /* [2331] */
    (xdc_Char)0x6f,  /* [2332] */
    (xdc_Char)0x63,  /* [2333] */
    (xdc_Char)0x6b,  /* [2334] */
    (xdc_Char)0x20,  /* [2335] */
    (xdc_Char)0x62,  /* [2336] */
    (xdc_Char)0x61,  /* [2337] */
    (xdc_Char)0x63,  /* [2338] */
    (xdc_Char)0x6b,  /* [2339] */
    (xdc_Char)0x20,  /* [2340] */
    (xdc_Char)0x74,  /* [2341] */
    (xdc_Char)0x6f,  /* [2342] */
    (xdc_Char)0x20,  /* [2343] */
    (xdc_Char)0x68,  /* [2344] */
    (xdc_Char)0x65,  /* [2345] */
    (xdc_Char)0x61,  /* [2346] */
    (xdc_Char)0x70,  /* [2347] */
    (xdc_Char)0x2e,  /* [2348] */
    (xdc_Char)0x0,  /* [2349] */
    (xdc_Char)0x61,  /* [2350] */
    (xdc_Char)0x73,  /* [2351] */
    (xdc_Char)0x73,  /* [2352] */
    (xdc_Char)0x65,  /* [2353] */
    (xdc_Char)0x72,  /* [2354] */
    (xdc_Char)0x74,  /* [2355] */
    (xdc_Char)0x69,  /* [2356] */
    (xdc_Char)0x6f,  /* [2357] */
    (xdc_Char)0x6e,  /* [2358] */
    (xdc_Char)0x20,  /* [2359] */
    (xdc_Char)0x66,  /* [2360] */
    (xdc_Char)0x61,  /* [2361] */
    (xdc_Char)0x69,  /* [2362] */
    (xdc_Char)0x6c,  /* [2363] */
    (xdc_Char)0x75,  /* [2364] */
    (xdc_Char)0x72,  /* [2365] */
    (xdc_Char)0x65,  /* [2366] */
    (xdc_Char)0x25,  /* [2367] */
    (xdc_Char)0x73,  /* [2368] */
    (xdc_Char)0x25,  /* [2369] */
    (xdc_Char)0x73,  /* [2370] */
    (xdc_Char)0x0,  /* [2371] */
    (xdc_Char)0x25,  /* [2372] */
    (xdc_Char)0x24,  /* [2373] */
    (xdc_Char)0x53,  /* [2374] */
    (xdc_Char)0x0,  /* [2375] */
    (xdc_Char)0x6f,  /* [2376] */
    (xdc_Char)0x75,  /* [2377] */
    (xdc_Char)0x74,  /* [2378] */
    (xdc_Char)0x20,  /* [2379] */
    (xdc_Char)0x6f,  /* [2380] */
    (xdc_Char)0x66,  /* [2381] */
    (xdc_Char)0x20,  /* [2382] */
    (xdc_Char)0x6d,  /* [2383] */
    (xdc_Char)0x65,  /* [2384] */
    (xdc_Char)0x6d,  /* [2385] */
    (xdc_Char)0x6f,  /* [2386] */
    (xdc_Char)0x72,  /* [2387] */
    (xdc_Char)0x79,  /* [2388] */
    (xdc_Char)0x3a,  /* [2389] */
    (xdc_Char)0x20,  /* [2390] */
    (xdc_Char)0x68,  /* [2391] */
    (xdc_Char)0x65,  /* [2392] */
    (xdc_Char)0x61,  /* [2393] */
    (xdc_Char)0x70,  /* [2394] */
    (xdc_Char)0x3d,  /* [2395] */
    (xdc_Char)0x30,  /* [2396] */
    (xdc_Char)0x78,  /* [2397] */
    (xdc_Char)0x25,  /* [2398] */
    (xdc_Char)0x78,  /* [2399] */
    (xdc_Char)0x2c,  /* [2400] */
    (xdc_Char)0x20,  /* [2401] */
    (xdc_Char)0x73,  /* [2402] */
    (xdc_Char)0x69,  /* [2403] */
    (xdc_Char)0x7a,  /* [2404] */
    (xdc_Char)0x65,  /* [2405] */
    (xdc_Char)0x3d,  /* [2406] */
    (xdc_Char)0x25,  /* [2407] */
    (xdc_Char)0x75,  /* [2408] */
    (xdc_Char)0x0,  /* [2409] */
    (xdc_Char)0x25,  /* [2410] */
    (xdc_Char)0x73,  /* [2411] */
    (xdc_Char)0x20,  /* [2412] */
    (xdc_Char)0x30,  /* [2413] */
    (xdc_Char)0x78,  /* [2414] */
    (xdc_Char)0x25,  /* [2415] */
    (xdc_Char)0x78,  /* [2416] */
    (xdc_Char)0x0,  /* [2417] */
    (xdc_Char)0x45,  /* [2418] */
    (xdc_Char)0x5f,  /* [2419] */
    (xdc_Char)0x62,  /* [2420] */
    (xdc_Char)0x61,  /* [2421] */
    (xdc_Char)0x64,  /* [2422] */
    (xdc_Char)0x4c,  /* [2423] */
    (xdc_Char)0x65,  /* [2424] */
    (xdc_Char)0x76,  /* [2425] */
    (xdc_Char)0x65,  /* [2426] */
    (xdc_Char)0x6c,  /* [2427] */
    (xdc_Char)0x3a,  /* [2428] */
    (xdc_Char)0x20,  /* [2429] */
    (xdc_Char)0x42,  /* [2430] */
    (xdc_Char)0x61,  /* [2431] */
    (xdc_Char)0x64,  /* [2432] */
    (xdc_Char)0x20,  /* [2433] */
    (xdc_Char)0x66,  /* [2434] */
    (xdc_Char)0x69,  /* [2435] */
    (xdc_Char)0x6c,  /* [2436] */
    (xdc_Char)0x74,  /* [2437] */
    (xdc_Char)0x65,  /* [2438] */
    (xdc_Char)0x72,  /* [2439] */
    (xdc_Char)0x20,  /* [2440] */
    (xdc_Char)0x6c,  /* [2441] */
    (xdc_Char)0x65,  /* [2442] */
    (xdc_Char)0x76,  /* [2443] */
    (xdc_Char)0x65,  /* [2444] */
    (xdc_Char)0x6c,  /* [2445] */
    (xdc_Char)0x20,  /* [2446] */
    (xdc_Char)0x76,  /* [2447] */
    (xdc_Char)0x61,  /* [2448] */
    (xdc_Char)0x6c,  /* [2449] */
    (xdc_Char)0x75,  /* [2450] */
    (xdc_Char)0x65,  /* [2451] */
    (xdc_Char)0x3a,  /* [2452] */
    (xdc_Char)0x20,  /* [2453] */
    (xdc_Char)0x25,  /* [2454] */
    (xdc_Char)0x64,  /* [2455] */
    (xdc_Char)0x0,  /* [2456] */
    (xdc_Char)0x66,  /* [2457] */
    (xdc_Char)0x72,  /* [2458] */
    (xdc_Char)0x65,  /* [2459] */
    (xdc_Char)0x65,  /* [2460] */
    (xdc_Char)0x28,  /* [2461] */
    (xdc_Char)0x29,  /* [2462] */
    (xdc_Char)0x20,  /* [2463] */
    (xdc_Char)0x69,  /* [2464] */
    (xdc_Char)0x6e,  /* [2465] */
    (xdc_Char)0x76,  /* [2466] */
    (xdc_Char)0x61,  /* [2467] */
    (xdc_Char)0x6c,  /* [2468] */
    (xdc_Char)0x69,  /* [2469] */
    (xdc_Char)0x64,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x69,  /* [2472] */
    (xdc_Char)0x6e,  /* [2473] */
    (xdc_Char)0x20,  /* [2474] */
    (xdc_Char)0x67,  /* [2475] */
    (xdc_Char)0x72,  /* [2476] */
    (xdc_Char)0x6f,  /* [2477] */
    (xdc_Char)0x77,  /* [2478] */
    (xdc_Char)0x74,  /* [2479] */
    (xdc_Char)0x68,  /* [2480] */
    (xdc_Char)0x2d,  /* [2481] */
    (xdc_Char)0x6f,  /* [2482] */
    (xdc_Char)0x6e,  /* [2483] */
    (xdc_Char)0x6c,  /* [2484] */
    (xdc_Char)0x79,  /* [2485] */
    (xdc_Char)0x20,  /* [2486] */
    (xdc_Char)0x48,  /* [2487] */
    (xdc_Char)0x65,  /* [2488] */
    (xdc_Char)0x61,  /* [2489] */
    (xdc_Char)0x70,  /* [2490] */
    (xdc_Char)0x4d,  /* [2491] */
    (xdc_Char)0x69,  /* [2492] */
    (xdc_Char)0x6e,  /* [2493] */
    (xdc_Char)0x0,  /* [2494] */
    (xdc_Char)0x54,  /* [2495] */
    (xdc_Char)0x68,  /* [2496] */
    (xdc_Char)0x65,  /* [2497] */
    (xdc_Char)0x20,  /* [2498] */
    (xdc_Char)0x52,  /* [2499] */
    (xdc_Char)0x54,  /* [2500] */
    (xdc_Char)0x53,  /* [2501] */
    (xdc_Char)0x20,  /* [2502] */
    (xdc_Char)0x68,  /* [2503] */
    (xdc_Char)0x65,  /* [2504] */
    (xdc_Char)0x61,  /* [2505] */
    (xdc_Char)0x70,  /* [2506] */
    (xdc_Char)0x20,  /* [2507] */
    (xdc_Char)0x69,  /* [2508] */
    (xdc_Char)0x73,  /* [2509] */
    (xdc_Char)0x20,  /* [2510] */
    (xdc_Char)0x75,  /* [2511] */
    (xdc_Char)0x73,  /* [2512] */
    (xdc_Char)0x65,  /* [2513] */
    (xdc_Char)0x64,  /* [2514] */
    (xdc_Char)0x20,  /* [2515] */
    (xdc_Char)0x75,  /* [2516] */
    (xdc_Char)0x70,  /* [2517] */
    (xdc_Char)0x2e,  /* [2518] */
    (xdc_Char)0x20,  /* [2519] */
    (xdc_Char)0x45,  /* [2520] */
    (xdc_Char)0x78,  /* [2521] */
    (xdc_Char)0x61,  /* [2522] */
    (xdc_Char)0x6d,  /* [2523] */
    (xdc_Char)0x69,  /* [2524] */
    (xdc_Char)0x6e,  /* [2525] */
    (xdc_Char)0x65,  /* [2526] */
    (xdc_Char)0x20,  /* [2527] */
    (xdc_Char)0x50,  /* [2528] */
    (xdc_Char)0x72,  /* [2529] */
    (xdc_Char)0x6f,  /* [2530] */
    (xdc_Char)0x67,  /* [2531] */
    (xdc_Char)0x72,  /* [2532] */
    (xdc_Char)0x61,  /* [2533] */
    (xdc_Char)0x6d,  /* [2534] */
    (xdc_Char)0x2e,  /* [2535] */
    (xdc_Char)0x68,  /* [2536] */
    (xdc_Char)0x65,  /* [2537] */
    (xdc_Char)0x61,  /* [2538] */
    (xdc_Char)0x70,  /* [2539] */
    (xdc_Char)0x2e,  /* [2540] */
    (xdc_Char)0x0,  /* [2541] */
    (xdc_Char)0x45,  /* [2542] */
    (xdc_Char)0x5f,  /* [2543] */
    (xdc_Char)0x62,  /* [2544] */
    (xdc_Char)0x61,  /* [2545] */
    (xdc_Char)0x64,  /* [2546] */
    (xdc_Char)0x43,  /* [2547] */
    (xdc_Char)0x6f,  /* [2548] */
    (xdc_Char)0x6d,  /* [2549] */
    (xdc_Char)0x6d,  /* [2550] */
    (xdc_Char)0x61,  /* [2551] */
    (xdc_Char)0x6e,  /* [2552] */
    (xdc_Char)0x64,  /* [2553] */
    (xdc_Char)0x3a,  /* [2554] */
    (xdc_Char)0x20,  /* [2555] */
    (xdc_Char)0x52,  /* [2556] */
    (xdc_Char)0x65,  /* [2557] */
    (xdc_Char)0x63,  /* [2558] */
    (xdc_Char)0x65,  /* [2559] */
    (xdc_Char)0x69,  /* [2560] */
    (xdc_Char)0x76,  /* [2561] */
    (xdc_Char)0x65,  /* [2562] */
    (xdc_Char)0x64,  /* [2563] */
    (xdc_Char)0x20,  /* [2564] */
    (xdc_Char)0x69,  /* [2565] */
    (xdc_Char)0x6e,  /* [2566] */
    (xdc_Char)0x76,  /* [2567] */
    (xdc_Char)0x61,  /* [2568] */
    (xdc_Char)0x6c,  /* [2569] */
    (xdc_Char)0x69,  /* [2570] */
    (xdc_Char)0x64,  /* [2571] */
    (xdc_Char)0x20,  /* [2572] */
    (xdc_Char)0x63,  /* [2573] */
    (xdc_Char)0x6f,  /* [2574] */
    (xdc_Char)0x6d,  /* [2575] */
    (xdc_Char)0x6d,  /* [2576] */
    (xdc_Char)0x61,  /* [2577] */
    (xdc_Char)0x6e,  /* [2578] */
    (xdc_Char)0x64,  /* [2579] */
    (xdc_Char)0x2c,  /* [2580] */
    (xdc_Char)0x20,  /* [2581] */
    (xdc_Char)0x69,  /* [2582] */
    (xdc_Char)0x64,  /* [2583] */
    (xdc_Char)0x3a,  /* [2584] */
    (xdc_Char)0x20,  /* [2585] */
    (xdc_Char)0x25,  /* [2586] */
    (xdc_Char)0x64,  /* [2587] */
    (xdc_Char)0x2e,  /* [2588] */
    (xdc_Char)0x0,  /* [2589] */
    (xdc_Char)0x45,  /* [2590] */
    (xdc_Char)0x5f,  /* [2591] */
    (xdc_Char)0x61,  /* [2592] */
    (xdc_Char)0x6c,  /* [2593] */
    (xdc_Char)0x72,  /* [2594] */
    (xdc_Char)0x65,  /* [2595] */
    (xdc_Char)0x61,  /* [2596] */
    (xdc_Char)0x64,  /* [2597] */
    (xdc_Char)0x79,  /* [2598] */
    (xdc_Char)0x44,  /* [2599] */
    (xdc_Char)0x65,  /* [2600] */
    (xdc_Char)0x66,  /* [2601] */
    (xdc_Char)0x69,  /* [2602] */
    (xdc_Char)0x6e,  /* [2603] */
    (xdc_Char)0x65,  /* [2604] */
    (xdc_Char)0x64,  /* [2605] */
    (xdc_Char)0x3a,  /* [2606] */
    (xdc_Char)0x20,  /* [2607] */
    (xdc_Char)0x48,  /* [2608] */
    (xdc_Char)0x77,  /* [2609] */
    (xdc_Char)0x69,  /* [2610] */
    (xdc_Char)0x20,  /* [2611] */
    (xdc_Char)0x61,  /* [2612] */
    (xdc_Char)0x6c,  /* [2613] */
    (xdc_Char)0x72,  /* [2614] */
    (xdc_Char)0x65,  /* [2615] */
    (xdc_Char)0x61,  /* [2616] */
    (xdc_Char)0x64,  /* [2617] */
    (xdc_Char)0x79,  /* [2618] */
    (xdc_Char)0x20,  /* [2619] */
    (xdc_Char)0x64,  /* [2620] */
    (xdc_Char)0x65,  /* [2621] */
    (xdc_Char)0x66,  /* [2622] */
    (xdc_Char)0x69,  /* [2623] */
    (xdc_Char)0x6e,  /* [2624] */
    (xdc_Char)0x65,  /* [2625] */
    (xdc_Char)0x64,  /* [2626] */
    (xdc_Char)0x3a,  /* [2627] */
    (xdc_Char)0x20,  /* [2628] */
    (xdc_Char)0x69,  /* [2629] */
    (xdc_Char)0x6e,  /* [2630] */
    (xdc_Char)0x74,  /* [2631] */
    (xdc_Char)0x72,  /* [2632] */
    (xdc_Char)0x23,  /* [2633] */
    (xdc_Char)0x20,  /* [2634] */
    (xdc_Char)0x25,  /* [2635] */
    (xdc_Char)0x64,  /* [2636] */
    (xdc_Char)0x0,  /* [2637] */
    (xdc_Char)0x45,  /* [2638] */
    (xdc_Char)0x5f,  /* [2639] */
    (xdc_Char)0x6e,  /* [2640] */
    (xdc_Char)0x6f,  /* [2641] */
    (xdc_Char)0x74,  /* [2642] */
    (xdc_Char)0x49,  /* [2643] */
    (xdc_Char)0x6d,  /* [2644] */
    (xdc_Char)0x70,  /* [2645] */
    (xdc_Char)0x6c,  /* [2646] */
    (xdc_Char)0x65,  /* [2647] */
    (xdc_Char)0x6d,  /* [2648] */
    (xdc_Char)0x65,  /* [2649] */
    (xdc_Char)0x6e,  /* [2650] */
    (xdc_Char)0x74,  /* [2651] */
    (xdc_Char)0x65,  /* [2652] */
    (xdc_Char)0x64,  /* [2653] */
    (xdc_Char)0x3a,  /* [2654] */
    (xdc_Char)0x20,  /* [2655] */
    (xdc_Char)0x46,  /* [2656] */
    (xdc_Char)0x75,  /* [2657] */
    (xdc_Char)0x6e,  /* [2658] */
    (xdc_Char)0x63,  /* [2659] */
    (xdc_Char)0x74,  /* [2660] */
    (xdc_Char)0x69,  /* [2661] */
    (xdc_Char)0x6f,  /* [2662] */
    (xdc_Char)0x6e,  /* [2663] */
    (xdc_Char)0x20,  /* [2664] */
    (xdc_Char)0x6e,  /* [2665] */
    (xdc_Char)0x6f,  /* [2666] */
    (xdc_Char)0x74,  /* [2667] */
    (xdc_Char)0x20,  /* [2668] */
    (xdc_Char)0x69,  /* [2669] */
    (xdc_Char)0x6d,  /* [2670] */
    (xdc_Char)0x70,  /* [2671] */
    (xdc_Char)0x6c,  /* [2672] */
    (xdc_Char)0x65,  /* [2673] */
    (xdc_Char)0x6d,  /* [2674] */
    (xdc_Char)0x65,  /* [2675] */
    (xdc_Char)0x6e,  /* [2676] */
    (xdc_Char)0x74,  /* [2677] */
    (xdc_Char)0x65,  /* [2678] */
    (xdc_Char)0x64,  /* [2679] */
    (xdc_Char)0x3a,  /* [2680] */
    (xdc_Char)0x20,  /* [2681] */
    (xdc_Char)0x25,  /* [2682] */
    (xdc_Char)0x73,  /* [2683] */
    (xdc_Char)0x0,  /* [2684] */
    (xdc_Char)0x45,  /* [2685] */
    (xdc_Char)0x5f,  /* [2686] */
    (xdc_Char)0x69,  /* [2687] */
    (xdc_Char)0x6e,  /* [2688] */
    (xdc_Char)0x76,  /* [2689] */
    (xdc_Char)0x61,  /* [2690] */
    (xdc_Char)0x6c,  /* [2691] */
    (xdc_Char)0x69,  /* [2692] */
    (xdc_Char)0x64,  /* [2693] */
    (xdc_Char)0x54,  /* [2694] */
    (xdc_Char)0x69,  /* [2695] */
    (xdc_Char)0x6d,  /* [2696] */
    (xdc_Char)0x65,  /* [2697] */
    (xdc_Char)0x72,  /* [2698] */
    (xdc_Char)0x3a,  /* [2699] */
    (xdc_Char)0x20,  /* [2700] */
    (xdc_Char)0x49,  /* [2701] */
    (xdc_Char)0x6e,  /* [2702] */
    (xdc_Char)0x76,  /* [2703] */
    (xdc_Char)0x61,  /* [2704] */
    (xdc_Char)0x6c,  /* [2705] */
    (xdc_Char)0x69,  /* [2706] */
    (xdc_Char)0x64,  /* [2707] */
    (xdc_Char)0x20,  /* [2708] */
    (xdc_Char)0x54,  /* [2709] */
    (xdc_Char)0x69,  /* [2710] */
    (xdc_Char)0x6d,  /* [2711] */
    (xdc_Char)0x65,  /* [2712] */
    (xdc_Char)0x72,  /* [2713] */
    (xdc_Char)0x20,  /* [2714] */
    (xdc_Char)0x49,  /* [2715] */
    (xdc_Char)0x64,  /* [2716] */
    (xdc_Char)0x20,  /* [2717] */
    (xdc_Char)0x25,  /* [2718] */
    (xdc_Char)0x64,  /* [2719] */
    (xdc_Char)0x0,  /* [2720] */
    (xdc_Char)0x45,  /* [2721] */
    (xdc_Char)0x5f,  /* [2722] */
    (xdc_Char)0x6e,  /* [2723] */
    (xdc_Char)0x6f,  /* [2724] */
    (xdc_Char)0x74,  /* [2725] */
    (xdc_Char)0x41,  /* [2726] */
    (xdc_Char)0x76,  /* [2727] */
    (xdc_Char)0x61,  /* [2728] */
    (xdc_Char)0x69,  /* [2729] */
    (xdc_Char)0x6c,  /* [2730] */
    (xdc_Char)0x61,  /* [2731] */
    (xdc_Char)0x62,  /* [2732] */
    (xdc_Char)0x6c,  /* [2733] */
    (xdc_Char)0x65,  /* [2734] */
    (xdc_Char)0x3a,  /* [2735] */
    (xdc_Char)0x20,  /* [2736] */
    (xdc_Char)0x54,  /* [2737] */
    (xdc_Char)0x69,  /* [2738] */
    (xdc_Char)0x6d,  /* [2739] */
    (xdc_Char)0x65,  /* [2740] */
    (xdc_Char)0x72,  /* [2741] */
    (xdc_Char)0x20,  /* [2742] */
    (xdc_Char)0x6e,  /* [2743] */
    (xdc_Char)0x6f,  /* [2744] */
    (xdc_Char)0x74,  /* [2745] */
    (xdc_Char)0x20,  /* [2746] */
    (xdc_Char)0x61,  /* [2747] */
    (xdc_Char)0x76,  /* [2748] */
    (xdc_Char)0x61,  /* [2749] */
    (xdc_Char)0x69,  /* [2750] */
    (xdc_Char)0x6c,  /* [2751] */
    (xdc_Char)0x61,  /* [2752] */
    (xdc_Char)0x62,  /* [2753] */
    (xdc_Char)0x6c,  /* [2754] */
    (xdc_Char)0x65,  /* [2755] */
    (xdc_Char)0x20,  /* [2756] */
    (xdc_Char)0x25,  /* [2757] */
    (xdc_Char)0x64,  /* [2758] */
    (xdc_Char)0x0,  /* [2759] */
    (xdc_Char)0x45,  /* [2760] */
    (xdc_Char)0x5f,  /* [2761] */
    (xdc_Char)0x63,  /* [2762] */
    (xdc_Char)0x61,  /* [2763] */
    (xdc_Char)0x6e,  /* [2764] */
    (xdc_Char)0x6e,  /* [2765] */
    (xdc_Char)0x6f,  /* [2766] */
    (xdc_Char)0x74,  /* [2767] */
    (xdc_Char)0x53,  /* [2768] */
    (xdc_Char)0x75,  /* [2769] */
    (xdc_Char)0x70,  /* [2770] */
    (xdc_Char)0x70,  /* [2771] */
    (xdc_Char)0x6f,  /* [2772] */
    (xdc_Char)0x72,  /* [2773] */
    (xdc_Char)0x74,  /* [2774] */
    (xdc_Char)0x3a,  /* [2775] */
    (xdc_Char)0x20,  /* [2776] */
    (xdc_Char)0x54,  /* [2777] */
    (xdc_Char)0x69,  /* [2778] */
    (xdc_Char)0x6d,  /* [2779] */
    (xdc_Char)0x65,  /* [2780] */
    (xdc_Char)0x72,  /* [2781] */
    (xdc_Char)0x20,  /* [2782] */
    (xdc_Char)0x63,  /* [2783] */
    (xdc_Char)0x61,  /* [2784] */
    (xdc_Char)0x6e,  /* [2785] */
    (xdc_Char)0x6e,  /* [2786] */
    (xdc_Char)0x6f,  /* [2787] */
    (xdc_Char)0x74,  /* [2788] */
    (xdc_Char)0x20,  /* [2789] */
    (xdc_Char)0x73,  /* [2790] */
    (xdc_Char)0x75,  /* [2791] */
    (xdc_Char)0x70,  /* [2792] */
    (xdc_Char)0x70,  /* [2793] */
    (xdc_Char)0x6f,  /* [2794] */
    (xdc_Char)0x72,  /* [2795] */
    (xdc_Char)0x74,  /* [2796] */
    (xdc_Char)0x20,  /* [2797] */
    (xdc_Char)0x72,  /* [2798] */
    (xdc_Char)0x65,  /* [2799] */
    (xdc_Char)0x71,  /* [2800] */
    (xdc_Char)0x75,  /* [2801] */
    (xdc_Char)0x65,  /* [2802] */
    (xdc_Char)0x73,  /* [2803] */
    (xdc_Char)0x74,  /* [2804] */
    (xdc_Char)0x65,  /* [2805] */
    (xdc_Char)0x64,  /* [2806] */
    (xdc_Char)0x20,  /* [2807] */
    (xdc_Char)0x70,  /* [2808] */
    (xdc_Char)0x65,  /* [2809] */
    (xdc_Char)0x72,  /* [2810] */
    (xdc_Char)0x69,  /* [2811] */
    (xdc_Char)0x6f,  /* [2812] */
    (xdc_Char)0x64,  /* [2813] */
    (xdc_Char)0x20,  /* [2814] */
    (xdc_Char)0x25,  /* [2815] */
    (xdc_Char)0x64,  /* [2816] */
    (xdc_Char)0x0,  /* [2817] */
    (xdc_Char)0x45,  /* [2818] */
    (xdc_Char)0x5f,  /* [2819] */
    (xdc_Char)0x72,  /* [2820] */
    (xdc_Char)0x75,  /* [2821] */
    (xdc_Char)0x6e,  /* [2822] */
    (xdc_Char)0x74,  /* [2823] */
    (xdc_Char)0x69,  /* [2824] */
    (xdc_Char)0x6d,  /* [2825] */
    (xdc_Char)0x65,  /* [2826] */
    (xdc_Char)0x43,  /* [2827] */
    (xdc_Char)0x72,  /* [2828] */
    (xdc_Char)0x65,  /* [2829] */
    (xdc_Char)0x61,  /* [2830] */
    (xdc_Char)0x74,  /* [2831] */
    (xdc_Char)0x65,  /* [2832] */
    (xdc_Char)0x3a,  /* [2833] */
    (xdc_Char)0x20,  /* [2834] */
    (xdc_Char)0x52,  /* [2835] */
    (xdc_Char)0x75,  /* [2836] */
    (xdc_Char)0x6e,  /* [2837] */
    (xdc_Char)0x74,  /* [2838] */
    (xdc_Char)0x69,  /* [2839] */
    (xdc_Char)0x6d,  /* [2840] */
    (xdc_Char)0x65,  /* [2841] */
    (xdc_Char)0x20,  /* [2842] */
    (xdc_Char)0x54,  /* [2843] */
    (xdc_Char)0x69,  /* [2844] */
    (xdc_Char)0x6d,  /* [2845] */
    (xdc_Char)0x65,  /* [2846] */
    (xdc_Char)0x72,  /* [2847] */
    (xdc_Char)0x20,  /* [2848] */
    (xdc_Char)0x63,  /* [2849] */
    (xdc_Char)0x72,  /* [2850] */
    (xdc_Char)0x65,  /* [2851] */
    (xdc_Char)0x61,  /* [2852] */
    (xdc_Char)0x74,  /* [2853] */
    (xdc_Char)0x65,  /* [2854] */
    (xdc_Char)0x20,  /* [2855] */
    (xdc_Char)0x69,  /* [2856] */
    (xdc_Char)0x73,  /* [2857] */
    (xdc_Char)0x20,  /* [2858] */
    (xdc_Char)0x6e,  /* [2859] */
    (xdc_Char)0x6f,  /* [2860] */
    (xdc_Char)0x74,  /* [2861] */
    (xdc_Char)0x20,  /* [2862] */
    (xdc_Char)0x73,  /* [2863] */
    (xdc_Char)0x75,  /* [2864] */
    (xdc_Char)0x70,  /* [2865] */
    (xdc_Char)0x70,  /* [2866] */
    (xdc_Char)0x6f,  /* [2867] */
    (xdc_Char)0x72,  /* [2868] */
    (xdc_Char)0x74,  /* [2869] */
    (xdc_Char)0x65,  /* [2870] */
    (xdc_Char)0x64,  /* [2871] */
    (xdc_Char)0x20,  /* [2872] */
    (xdc_Char)0x25,  /* [2873] */
    (xdc_Char)0x64,  /* [2874] */
    (xdc_Char)0x0,  /* [2875] */
    (xdc_Char)0x45,  /* [2876] */
    (xdc_Char)0x5f,  /* [2877] */
    (xdc_Char)0x64,  /* [2878] */
    (xdc_Char)0x79,  /* [2879] */
    (xdc_Char)0x6e,  /* [2880] */
    (xdc_Char)0x61,  /* [2881] */
    (xdc_Char)0x6d,  /* [2882] */
    (xdc_Char)0x69,  /* [2883] */
    (xdc_Char)0x63,  /* [2884] */
    (xdc_Char)0x4d,  /* [2885] */
    (xdc_Char)0x6f,  /* [2886] */
    (xdc_Char)0x64,  /* [2887] */
    (xdc_Char)0x65,  /* [2888] */
    (xdc_Char)0x4e,  /* [2889] */
    (xdc_Char)0x6f,  /* [2890] */
    (xdc_Char)0x74,  /* [2891] */
    (xdc_Char)0x41,  /* [2892] */
    (xdc_Char)0x6c,  /* [2893] */
    (xdc_Char)0x6c,  /* [2894] */
    (xdc_Char)0x6f,  /* [2895] */
    (xdc_Char)0x77,  /* [2896] */
    (xdc_Char)0x65,  /* [2897] */
    (xdc_Char)0x64,  /* [2898] */
    (xdc_Char)0x3a,  /* [2899] */
    (xdc_Char)0x20,  /* [2900] */
    (xdc_Char)0x44,  /* [2901] */
    (xdc_Char)0x79,  /* [2902] */
    (xdc_Char)0x6e,  /* [2903] */
    (xdc_Char)0x61,  /* [2904] */
    (xdc_Char)0x6d,  /* [2905] */
    (xdc_Char)0x69,  /* [2906] */
    (xdc_Char)0x63,  /* [2907] */
    (xdc_Char)0x20,  /* [2908] */
    (xdc_Char)0x6d,  /* [2909] */
    (xdc_Char)0x6f,  /* [2910] */
    (xdc_Char)0x64,  /* [2911] */
    (xdc_Char)0x65,  /* [2912] */
    (xdc_Char)0x20,  /* [2913] */
    (xdc_Char)0x69,  /* [2914] */
    (xdc_Char)0x73,  /* [2915] */
    (xdc_Char)0x20,  /* [2916] */
    (xdc_Char)0x6e,  /* [2917] */
    (xdc_Char)0x6f,  /* [2918] */
    (xdc_Char)0x74,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x65,  /* [2921] */
    (xdc_Char)0x6e,  /* [2922] */
    (xdc_Char)0x61,  /* [2923] */
    (xdc_Char)0x62,  /* [2924] */
    (xdc_Char)0x6c,  /* [2925] */
    (xdc_Char)0x65,  /* [2926] */
    (xdc_Char)0x64,  /* [2927] */
    (xdc_Char)0x20,  /* [2928] */
    (xdc_Char)0x28,  /* [2929] */
    (xdc_Char)0x61,  /* [2930] */
    (xdc_Char)0x6c,  /* [2931] */
    (xdc_Char)0x6c,  /* [2932] */
    (xdc_Char)0x6f,  /* [2933] */
    (xdc_Char)0x77,  /* [2934] */
    (xdc_Char)0x44,  /* [2935] */
    (xdc_Char)0x79,  /* [2936] */
    (xdc_Char)0x6e,  /* [2937] */
    (xdc_Char)0x61,  /* [2938] */
    (xdc_Char)0x6d,  /* [2939] */
    (xdc_Char)0x69,  /* [2940] */
    (xdc_Char)0x63,  /* [2941] */
    (xdc_Char)0x4d,  /* [2942] */
    (xdc_Char)0x6f,  /* [2943] */
    (xdc_Char)0x64,  /* [2944] */
    (xdc_Char)0x65,  /* [2945] */
    (xdc_Char)0x3d,  /* [2946] */
    (xdc_Char)0x66,  /* [2947] */
    (xdc_Char)0x61,  /* [2948] */
    (xdc_Char)0x6c,  /* [2949] */
    (xdc_Char)0x73,  /* [2950] */
    (xdc_Char)0x65,  /* [2951] */
    (xdc_Char)0x29,  /* [2952] */
    (xdc_Char)0x0,  /* [2953] */
    (xdc_Char)0x45,  /* [2954] */
    (xdc_Char)0x5f,  /* [2955] */
    (xdc_Char)0x73,  /* [2956] */
    (xdc_Char)0x74,  /* [2957] */
    (xdc_Char)0x61,  /* [2958] */
    (xdc_Char)0x63,  /* [2959] */
    (xdc_Char)0x6b,  /* [2960] */
    (xdc_Char)0x4f,  /* [2961] */
    (xdc_Char)0x76,  /* [2962] */
    (xdc_Char)0x65,  /* [2963] */
    (xdc_Char)0x72,  /* [2964] */
    (xdc_Char)0x66,  /* [2965] */
    (xdc_Char)0x6c,  /* [2966] */
    (xdc_Char)0x6f,  /* [2967] */
    (xdc_Char)0x77,  /* [2968] */
    (xdc_Char)0x3a,  /* [2969] */
    (xdc_Char)0x20,  /* [2970] */
    (xdc_Char)0x49,  /* [2971] */
    (xdc_Char)0x53,  /* [2972] */
    (xdc_Char)0x52,  /* [2973] */
    (xdc_Char)0x20,  /* [2974] */
    (xdc_Char)0x73,  /* [2975] */
    (xdc_Char)0x74,  /* [2976] */
    (xdc_Char)0x61,  /* [2977] */
    (xdc_Char)0x63,  /* [2978] */
    (xdc_Char)0x6b,  /* [2979] */
    (xdc_Char)0x20,  /* [2980] */
    (xdc_Char)0x6f,  /* [2981] */
    (xdc_Char)0x76,  /* [2982] */
    (xdc_Char)0x65,  /* [2983] */
    (xdc_Char)0x72,  /* [2984] */
    (xdc_Char)0x66,  /* [2985] */
    (xdc_Char)0x6c,  /* [2986] */
    (xdc_Char)0x6f,  /* [2987] */
    (xdc_Char)0x77,  /* [2988] */
    (xdc_Char)0x2e,  /* [2989] */
    (xdc_Char)0x0,  /* [2990] */
    (xdc_Char)0x45,  /* [2991] */
    (xdc_Char)0x5f,  /* [2992] */
    (xdc_Char)0x73,  /* [2993] */
    (xdc_Char)0x74,  /* [2994] */
    (xdc_Char)0x61,  /* [2995] */
    (xdc_Char)0x63,  /* [2996] */
    (xdc_Char)0x6b,  /* [2997] */
    (xdc_Char)0x4f,  /* [2998] */
    (xdc_Char)0x76,  /* [2999] */
    (xdc_Char)0x65,  /* [3000] */
    (xdc_Char)0x72,  /* [3001] */
    (xdc_Char)0x66,  /* [3002] */
    (xdc_Char)0x6c,  /* [3003] */
    (xdc_Char)0x6f,  /* [3004] */
    (xdc_Char)0x77,  /* [3005] */
    (xdc_Char)0x3a,  /* [3006] */
    (xdc_Char)0x20,  /* [3007] */
    (xdc_Char)0x54,  /* [3008] */
    (xdc_Char)0x61,  /* [3009] */
    (xdc_Char)0x73,  /* [3010] */
    (xdc_Char)0x6b,  /* [3011] */
    (xdc_Char)0x20,  /* [3012] */
    (xdc_Char)0x30,  /* [3013] */
    (xdc_Char)0x78,  /* [3014] */
    (xdc_Char)0x25,  /* [3015] */
    (xdc_Char)0x78,  /* [3016] */
    (xdc_Char)0x20,  /* [3017] */
    (xdc_Char)0x73,  /* [3018] */
    (xdc_Char)0x74,  /* [3019] */
    (xdc_Char)0x61,  /* [3020] */
    (xdc_Char)0x63,  /* [3021] */
    (xdc_Char)0x6b,  /* [3022] */
    (xdc_Char)0x20,  /* [3023] */
    (xdc_Char)0x6f,  /* [3024] */
    (xdc_Char)0x76,  /* [3025] */
    (xdc_Char)0x65,  /* [3026] */
    (xdc_Char)0x72,  /* [3027] */
    (xdc_Char)0x66,  /* [3028] */
    (xdc_Char)0x6c,  /* [3029] */
    (xdc_Char)0x6f,  /* [3030] */
    (xdc_Char)0x77,  /* [3031] */
    (xdc_Char)0x2e,  /* [3032] */
    (xdc_Char)0x0,  /* [3033] */
    (xdc_Char)0x45,  /* [3034] */
    (xdc_Char)0x5f,  /* [3035] */
    (xdc_Char)0x73,  /* [3036] */
    (xdc_Char)0x70,  /* [3037] */
    (xdc_Char)0x4f,  /* [3038] */
    (xdc_Char)0x75,  /* [3039] */
    (xdc_Char)0x74,  /* [3040] */
    (xdc_Char)0x4f,  /* [3041] */
    (xdc_Char)0x66,  /* [3042] */
    (xdc_Char)0x42,  /* [3043] */
    (xdc_Char)0x6f,  /* [3044] */
    (xdc_Char)0x75,  /* [3045] */
    (xdc_Char)0x6e,  /* [3046] */
    (xdc_Char)0x64,  /* [3047] */
    (xdc_Char)0x73,  /* [3048] */
    (xdc_Char)0x3a,  /* [3049] */
    (xdc_Char)0x20,  /* [3050] */
    (xdc_Char)0x54,  /* [3051] */
    (xdc_Char)0x61,  /* [3052] */
    (xdc_Char)0x73,  /* [3053] */
    (xdc_Char)0x6b,  /* [3054] */
    (xdc_Char)0x20,  /* [3055] */
    (xdc_Char)0x30,  /* [3056] */
    (xdc_Char)0x78,  /* [3057] */
    (xdc_Char)0x25,  /* [3058] */
    (xdc_Char)0x78,  /* [3059] */
    (xdc_Char)0x20,  /* [3060] */
    (xdc_Char)0x73,  /* [3061] */
    (xdc_Char)0x74,  /* [3062] */
    (xdc_Char)0x61,  /* [3063] */
    (xdc_Char)0x63,  /* [3064] */
    (xdc_Char)0x6b,  /* [3065] */
    (xdc_Char)0x20,  /* [3066] */
    (xdc_Char)0x65,  /* [3067] */
    (xdc_Char)0x72,  /* [3068] */
    (xdc_Char)0x72,  /* [3069] */
    (xdc_Char)0x6f,  /* [3070] */
    (xdc_Char)0x72,  /* [3071] */
    (xdc_Char)0x2c,  /* [3072] */
    (xdc_Char)0x20,  /* [3073] */
    (xdc_Char)0x53,  /* [3074] */
    (xdc_Char)0x50,  /* [3075] */
    (xdc_Char)0x20,  /* [3076] */
    (xdc_Char)0x3d,  /* [3077] */
    (xdc_Char)0x20,  /* [3078] */
    (xdc_Char)0x30,  /* [3079] */
    (xdc_Char)0x78,  /* [3080] */
    (xdc_Char)0x25,  /* [3081] */
    (xdc_Char)0x78,  /* [3082] */
    (xdc_Char)0x2e,  /* [3083] */
    (xdc_Char)0x0,  /* [3084] */
    (xdc_Char)0x45,  /* [3085] */
    (xdc_Char)0x5f,  /* [3086] */
    (xdc_Char)0x70,  /* [3087] */
    (xdc_Char)0x72,  /* [3088] */
    (xdc_Char)0x69,  /* [3089] */
    (xdc_Char)0x6f,  /* [3090] */
    (xdc_Char)0x72,  /* [3091] */
    (xdc_Char)0x69,  /* [3092] */
    (xdc_Char)0x74,  /* [3093] */
    (xdc_Char)0x79,  /* [3094] */
    (xdc_Char)0x3a,  /* [3095] */
    (xdc_Char)0x20,  /* [3096] */
    (xdc_Char)0x54,  /* [3097] */
    (xdc_Char)0x68,  /* [3098] */
    (xdc_Char)0x72,  /* [3099] */
    (xdc_Char)0x65,  /* [3100] */
    (xdc_Char)0x61,  /* [3101] */
    (xdc_Char)0x64,  /* [3102] */
    (xdc_Char)0x20,  /* [3103] */
    (xdc_Char)0x70,  /* [3104] */
    (xdc_Char)0x72,  /* [3105] */
    (xdc_Char)0x69,  /* [3106] */
    (xdc_Char)0x6f,  /* [3107] */
    (xdc_Char)0x72,  /* [3108] */
    (xdc_Char)0x69,  /* [3109] */
    (xdc_Char)0x74,  /* [3110] */
    (xdc_Char)0x79,  /* [3111] */
    (xdc_Char)0x20,  /* [3112] */
    (xdc_Char)0x69,  /* [3113] */
    (xdc_Char)0x73,  /* [3114] */
    (xdc_Char)0x20,  /* [3115] */
    (xdc_Char)0x69,  /* [3116] */
    (xdc_Char)0x6e,  /* [3117] */
    (xdc_Char)0x76,  /* [3118] */
    (xdc_Char)0x61,  /* [3119] */
    (xdc_Char)0x6c,  /* [3120] */
    (xdc_Char)0x69,  /* [3121] */
    (xdc_Char)0x64,  /* [3122] */
    (xdc_Char)0x20,  /* [3123] */
    (xdc_Char)0x25,  /* [3124] */
    (xdc_Char)0x64,  /* [3125] */
    (xdc_Char)0x0,  /* [3126] */
    (xdc_Char)0x72,  /* [3127] */
    (xdc_Char)0x65,  /* [3128] */
    (xdc_Char)0x71,  /* [3129] */
    (xdc_Char)0x75,  /* [3130] */
    (xdc_Char)0x65,  /* [3131] */
    (xdc_Char)0x73,  /* [3132] */
    (xdc_Char)0x74,  /* [3133] */
    (xdc_Char)0x65,  /* [3134] */
    (xdc_Char)0x64,  /* [3135] */
    (xdc_Char)0x20,  /* [3136] */
    (xdc_Char)0x73,  /* [3137] */
    (xdc_Char)0x69,  /* [3138] */
    (xdc_Char)0x7a,  /* [3139] */
    (xdc_Char)0x65,  /* [3140] */
    (xdc_Char)0x20,  /* [3141] */
    (xdc_Char)0x69,  /* [3142] */
    (xdc_Char)0x73,  /* [3143] */
    (xdc_Char)0x20,  /* [3144] */
    (xdc_Char)0x74,  /* [3145] */
    (xdc_Char)0x6f,  /* [3146] */
    (xdc_Char)0x6f,  /* [3147] */
    (xdc_Char)0x20,  /* [3148] */
    (xdc_Char)0x62,  /* [3149] */
    (xdc_Char)0x69,  /* [3150] */
    (xdc_Char)0x67,  /* [3151] */
    (xdc_Char)0x3a,  /* [3152] */
    (xdc_Char)0x20,  /* [3153] */
    (xdc_Char)0x68,  /* [3154] */
    (xdc_Char)0x61,  /* [3155] */
    (xdc_Char)0x6e,  /* [3156] */
    (xdc_Char)0x64,  /* [3157] */
    (xdc_Char)0x6c,  /* [3158] */
    (xdc_Char)0x65,  /* [3159] */
    (xdc_Char)0x3d,  /* [3160] */
    (xdc_Char)0x30,  /* [3161] */
    (xdc_Char)0x78,  /* [3162] */
    (xdc_Char)0x25,  /* [3163] */
    (xdc_Char)0x78,  /* [3164] */
    (xdc_Char)0x2c,  /* [3165] */
    (xdc_Char)0x20,  /* [3166] */
    (xdc_Char)0x73,  /* [3167] */
    (xdc_Char)0x69,  /* [3168] */
    (xdc_Char)0x7a,  /* [3169] */
    (xdc_Char)0x65,  /* [3170] */
    (xdc_Char)0x3d,  /* [3171] */
    (xdc_Char)0x25,  /* [3172] */
    (xdc_Char)0x75,  /* [3173] */
    (xdc_Char)0x0,  /* [3174] */
    (xdc_Char)0x6f,  /* [3175] */
    (xdc_Char)0x75,  /* [3176] */
    (xdc_Char)0x74,  /* [3177] */
    (xdc_Char)0x20,  /* [3178] */
    (xdc_Char)0x6f,  /* [3179] */
    (xdc_Char)0x66,  /* [3180] */
    (xdc_Char)0x20,  /* [3181] */
    (xdc_Char)0x6d,  /* [3182] */
    (xdc_Char)0x65,  /* [3183] */
    (xdc_Char)0x6d,  /* [3184] */
    (xdc_Char)0x6f,  /* [3185] */
    (xdc_Char)0x72,  /* [3186] */
    (xdc_Char)0x79,  /* [3187] */
    (xdc_Char)0x3a,  /* [3188] */
    (xdc_Char)0x20,  /* [3189] */
    (xdc_Char)0x68,  /* [3190] */
    (xdc_Char)0x61,  /* [3191] */
    (xdc_Char)0x6e,  /* [3192] */
    (xdc_Char)0x64,  /* [3193] */
    (xdc_Char)0x6c,  /* [3194] */
    (xdc_Char)0x65,  /* [3195] */
    (xdc_Char)0x3d,  /* [3196] */
    (xdc_Char)0x30,  /* [3197] */
    (xdc_Char)0x78,  /* [3198] */
    (xdc_Char)0x25,  /* [3199] */
    (xdc_Char)0x78,  /* [3200] */
    (xdc_Char)0x2c,  /* [3201] */
    (xdc_Char)0x20,  /* [3202] */
    (xdc_Char)0x73,  /* [3203] */
    (xdc_Char)0x69,  /* [3204] */
    (xdc_Char)0x7a,  /* [3205] */
    (xdc_Char)0x65,  /* [3206] */
    (xdc_Char)0x3d,  /* [3207] */
    (xdc_Char)0x25,  /* [3208] */
    (xdc_Char)0x75,  /* [3209] */
    (xdc_Char)0x0,  /* [3210] */
    (xdc_Char)0x3c,  /* [3211] */
    (xdc_Char)0x2d,  /* [3212] */
    (xdc_Char)0x2d,  /* [3213] */
    (xdc_Char)0x20,  /* [3214] */
    (xdc_Char)0x63,  /* [3215] */
    (xdc_Char)0x6f,  /* [3216] */
    (xdc_Char)0x6e,  /* [3217] */
    (xdc_Char)0x73,  /* [3218] */
    (xdc_Char)0x74,  /* [3219] */
    (xdc_Char)0x72,  /* [3220] */
    (xdc_Char)0x75,  /* [3221] */
    (xdc_Char)0x63,  /* [3222] */
    (xdc_Char)0x74,  /* [3223] */
    (xdc_Char)0x3a,  /* [3224] */
    (xdc_Char)0x20,  /* [3225] */
    (xdc_Char)0x25,  /* [3226] */
    (xdc_Char)0x70,  /* [3227] */
    (xdc_Char)0x28,  /* [3228] */
    (xdc_Char)0x27,  /* [3229] */
    (xdc_Char)0x25,  /* [3230] */
    (xdc_Char)0x73,  /* [3231] */
    (xdc_Char)0x27,  /* [3232] */
    (xdc_Char)0x29,  /* [3233] */
    (xdc_Char)0x0,  /* [3234] */
    (xdc_Char)0x3c,  /* [3235] */
    (xdc_Char)0x2d,  /* [3236] */
    (xdc_Char)0x2d,  /* [3237] */
    (xdc_Char)0x20,  /* [3238] */
    (xdc_Char)0x63,  /* [3239] */
    (xdc_Char)0x72,  /* [3240] */
    (xdc_Char)0x65,  /* [3241] */
    (xdc_Char)0x61,  /* [3242] */
    (xdc_Char)0x74,  /* [3243] */
    (xdc_Char)0x65,  /* [3244] */
    (xdc_Char)0x3a,  /* [3245] */
    (xdc_Char)0x20,  /* [3246] */
    (xdc_Char)0x25,  /* [3247] */
    (xdc_Char)0x70,  /* [3248] */
    (xdc_Char)0x28,  /* [3249] */
    (xdc_Char)0x27,  /* [3250] */
    (xdc_Char)0x25,  /* [3251] */
    (xdc_Char)0x73,  /* [3252] */
    (xdc_Char)0x27,  /* [3253] */
    (xdc_Char)0x29,  /* [3254] */
    (xdc_Char)0x0,  /* [3255] */
    (xdc_Char)0x2d,  /* [3256] */
    (xdc_Char)0x2d,  /* [3257] */
    (xdc_Char)0x3e,  /* [3258] */
    (xdc_Char)0x20,  /* [3259] */
    (xdc_Char)0x64,  /* [3260] */
    (xdc_Char)0x65,  /* [3261] */
    (xdc_Char)0x73,  /* [3262] */
    (xdc_Char)0x74,  /* [3263] */
    (xdc_Char)0x72,  /* [3264] */
    (xdc_Char)0x75,  /* [3265] */
    (xdc_Char)0x63,  /* [3266] */
    (xdc_Char)0x74,  /* [3267] */
    (xdc_Char)0x3a,  /* [3268] */
    (xdc_Char)0x20,  /* [3269] */
    (xdc_Char)0x28,  /* [3270] */
    (xdc_Char)0x25,  /* [3271] */
    (xdc_Char)0x70,  /* [3272] */
    (xdc_Char)0x29,  /* [3273] */
    (xdc_Char)0x0,  /* [3274] */
    (xdc_Char)0x2d,  /* [3275] */
    (xdc_Char)0x2d,  /* [3276] */
    (xdc_Char)0x3e,  /* [3277] */
    (xdc_Char)0x20,  /* [3278] */
    (xdc_Char)0x64,  /* [3279] */
    (xdc_Char)0x65,  /* [3280] */
    (xdc_Char)0x6c,  /* [3281] */
    (xdc_Char)0x65,  /* [3282] */
    (xdc_Char)0x74,  /* [3283] */
    (xdc_Char)0x65,  /* [3284] */
    (xdc_Char)0x3a,  /* [3285] */
    (xdc_Char)0x20,  /* [3286] */
    (xdc_Char)0x28,  /* [3287] */
    (xdc_Char)0x25,  /* [3288] */
    (xdc_Char)0x70,  /* [3289] */
    (xdc_Char)0x29,  /* [3290] */
    (xdc_Char)0x0,  /* [3291] */
    (xdc_Char)0x45,  /* [3292] */
    (xdc_Char)0x52,  /* [3293] */
    (xdc_Char)0x52,  /* [3294] */
    (xdc_Char)0x4f,  /* [3295] */
    (xdc_Char)0x52,  /* [3296] */
    (xdc_Char)0x3a,  /* [3297] */
    (xdc_Char)0x20,  /* [3298] */
    (xdc_Char)0x25,  /* [3299] */
    (xdc_Char)0x24,  /* [3300] */
    (xdc_Char)0x46,  /* [3301] */
    (xdc_Char)0x25,  /* [3302] */
    (xdc_Char)0x24,  /* [3303] */
    (xdc_Char)0x53,  /* [3304] */
    (xdc_Char)0x0,  /* [3305] */
    (xdc_Char)0x57,  /* [3306] */
    (xdc_Char)0x41,  /* [3307] */
    (xdc_Char)0x52,  /* [3308] */
    (xdc_Char)0x4e,  /* [3309] */
    (xdc_Char)0x49,  /* [3310] */
    (xdc_Char)0x4e,  /* [3311] */
    (xdc_Char)0x47,  /* [3312] */
    (xdc_Char)0x3a,  /* [3313] */
    (xdc_Char)0x20,  /* [3314] */
    (xdc_Char)0x25,  /* [3315] */
    (xdc_Char)0x24,  /* [3316] */
    (xdc_Char)0x46,  /* [3317] */
    (xdc_Char)0x25,  /* [3318] */
    (xdc_Char)0x24,  /* [3319] */
    (xdc_Char)0x53,  /* [3320] */
    (xdc_Char)0x0,  /* [3321] */
    (xdc_Char)0x25,  /* [3322] */
    (xdc_Char)0x24,  /* [3323] */
    (xdc_Char)0x46,  /* [3324] */
    (xdc_Char)0x25,  /* [3325] */
    (xdc_Char)0x24,  /* [3326] */
    (xdc_Char)0x53,  /* [3327] */
    (xdc_Char)0x0,  /* [3328] */
    (xdc_Char)0x53,  /* [3329] */
    (xdc_Char)0x74,  /* [3330] */
    (xdc_Char)0x61,  /* [3331] */
    (xdc_Char)0x72,  /* [3332] */
    (xdc_Char)0x74,  /* [3333] */
    (xdc_Char)0x3a,  /* [3334] */
    (xdc_Char)0x20,  /* [3335] */
    (xdc_Char)0x25,  /* [3336] */
    (xdc_Char)0x24,  /* [3337] */
    (xdc_Char)0x53,  /* [3338] */
    (xdc_Char)0x0,  /* [3339] */
    (xdc_Char)0x53,  /* [3340] */
    (xdc_Char)0x74,  /* [3341] */
    (xdc_Char)0x6f,  /* [3342] */
    (xdc_Char)0x70,  /* [3343] */
    (xdc_Char)0x3a,  /* [3344] */
    (xdc_Char)0x20,  /* [3345] */
    (xdc_Char)0x25,  /* [3346] */
    (xdc_Char)0x24,  /* [3347] */
    (xdc_Char)0x53,  /* [3348] */
    (xdc_Char)0x0,  /* [3349] */
    (xdc_Char)0x53,  /* [3350] */
    (xdc_Char)0x74,  /* [3351] */
    (xdc_Char)0x61,  /* [3352] */
    (xdc_Char)0x72,  /* [3353] */
    (xdc_Char)0x74,  /* [3354] */
    (xdc_Char)0x49,  /* [3355] */
    (xdc_Char)0x6e,  /* [3356] */
    (xdc_Char)0x73,  /* [3357] */
    (xdc_Char)0x74,  /* [3358] */
    (xdc_Char)0x61,  /* [3359] */
    (xdc_Char)0x6e,  /* [3360] */
    (xdc_Char)0x63,  /* [3361] */
    (xdc_Char)0x65,  /* [3362] */
    (xdc_Char)0x3a,  /* [3363] */
    (xdc_Char)0x20,  /* [3364] */
    (xdc_Char)0x25,  /* [3365] */
    (xdc_Char)0x24,  /* [3366] */
    (xdc_Char)0x53,  /* [3367] */
    (xdc_Char)0x0,  /* [3368] */
    (xdc_Char)0x53,  /* [3369] */
    (xdc_Char)0x74,  /* [3370] */
    (xdc_Char)0x6f,  /* [3371] */
    (xdc_Char)0x70,  /* [3372] */
    (xdc_Char)0x49,  /* [3373] */
    (xdc_Char)0x6e,  /* [3374] */
    (xdc_Char)0x73,  /* [3375] */
    (xdc_Char)0x74,  /* [3376] */
    (xdc_Char)0x61,  /* [3377] */
    (xdc_Char)0x6e,  /* [3378] */
    (xdc_Char)0x63,  /* [3379] */
    (xdc_Char)0x65,  /* [3380] */
    (xdc_Char)0x3a,  /* [3381] */
    (xdc_Char)0x20,  /* [3382] */
    (xdc_Char)0x25,  /* [3383] */
    (xdc_Char)0x24,  /* [3384] */
    (xdc_Char)0x53,  /* [3385] */
    (xdc_Char)0x0,  /* [3386] */
    (xdc_Char)0x4c,  /* [3387] */
    (xdc_Char)0x4d,  /* [3388] */
    (xdc_Char)0x5f,  /* [3389] */
    (xdc_Char)0x62,  /* [3390] */
    (xdc_Char)0x65,  /* [3391] */
    (xdc_Char)0x67,  /* [3392] */
    (xdc_Char)0x69,  /* [3393] */
    (xdc_Char)0x6e,  /* [3394] */
    (xdc_Char)0x3a,  /* [3395] */
    (xdc_Char)0x20,  /* [3396] */
    (xdc_Char)0x68,  /* [3397] */
    (xdc_Char)0x77,  /* [3398] */
    (xdc_Char)0x69,  /* [3399] */
    (xdc_Char)0x3a,  /* [3400] */
    (xdc_Char)0x20,  /* [3401] */
    (xdc_Char)0x30,  /* [3402] */
    (xdc_Char)0x78,  /* [3403] */
    (xdc_Char)0x25,  /* [3404] */
    (xdc_Char)0x78,  /* [3405] */
    (xdc_Char)0x2c,  /* [3406] */
    (xdc_Char)0x20,  /* [3407] */
    (xdc_Char)0x66,  /* [3408] */
    (xdc_Char)0x75,  /* [3409] */
    (xdc_Char)0x6e,  /* [3410] */
    (xdc_Char)0x63,  /* [3411] */
    (xdc_Char)0x3a,  /* [3412] */
    (xdc_Char)0x20,  /* [3413] */
    (xdc_Char)0x30,  /* [3414] */
    (xdc_Char)0x78,  /* [3415] */
    (xdc_Char)0x25,  /* [3416] */
    (xdc_Char)0x78,  /* [3417] */
    (xdc_Char)0x2c,  /* [3418] */
    (xdc_Char)0x20,  /* [3419] */
    (xdc_Char)0x70,  /* [3420] */
    (xdc_Char)0x72,  /* [3421] */
    (xdc_Char)0x65,  /* [3422] */
    (xdc_Char)0x54,  /* [3423] */
    (xdc_Char)0x68,  /* [3424] */
    (xdc_Char)0x72,  /* [3425] */
    (xdc_Char)0x65,  /* [3426] */
    (xdc_Char)0x61,  /* [3427] */
    (xdc_Char)0x64,  /* [3428] */
    (xdc_Char)0x3a,  /* [3429] */
    (xdc_Char)0x20,  /* [3430] */
    (xdc_Char)0x25,  /* [3431] */
    (xdc_Char)0x64,  /* [3432] */
    (xdc_Char)0x2c,  /* [3433] */
    (xdc_Char)0x20,  /* [3434] */
    (xdc_Char)0x69,  /* [3435] */
    (xdc_Char)0x6e,  /* [3436] */
    (xdc_Char)0x74,  /* [3437] */
    (xdc_Char)0x4e,  /* [3438] */
    (xdc_Char)0x75,  /* [3439] */
    (xdc_Char)0x6d,  /* [3440] */
    (xdc_Char)0x3a,  /* [3441] */
    (xdc_Char)0x20,  /* [3442] */
    (xdc_Char)0x25,  /* [3443] */
    (xdc_Char)0x64,  /* [3444] */
    (xdc_Char)0x2c,  /* [3445] */
    (xdc_Char)0x20,  /* [3446] */
    (xdc_Char)0x69,  /* [3447] */
    (xdc_Char)0x72,  /* [3448] */
    (xdc_Char)0x70,  /* [3449] */
    (xdc_Char)0x3a,  /* [3450] */
    (xdc_Char)0x20,  /* [3451] */
    (xdc_Char)0x30,  /* [3452] */
    (xdc_Char)0x78,  /* [3453] */
    (xdc_Char)0x25,  /* [3454] */
    (xdc_Char)0x78,  /* [3455] */
    (xdc_Char)0x0,  /* [3456] */
    (xdc_Char)0x4c,  /* [3457] */
    (xdc_Char)0x44,  /* [3458] */
    (xdc_Char)0x5f,  /* [3459] */
    (xdc_Char)0x65,  /* [3460] */
    (xdc_Char)0x6e,  /* [3461] */
    (xdc_Char)0x64,  /* [3462] */
    (xdc_Char)0x3a,  /* [3463] */
    (xdc_Char)0x20,  /* [3464] */
    (xdc_Char)0x68,  /* [3465] */
    (xdc_Char)0x77,  /* [3466] */
    (xdc_Char)0x69,  /* [3467] */
    (xdc_Char)0x3a,  /* [3468] */
    (xdc_Char)0x20,  /* [3469] */
    (xdc_Char)0x30,  /* [3470] */
    (xdc_Char)0x78,  /* [3471] */
    (xdc_Char)0x25,  /* [3472] */
    (xdc_Char)0x78,  /* [3473] */
    (xdc_Char)0x0,  /* [3474] */
    (xdc_Char)0x4c,  /* [3475] */
    (xdc_Char)0x57,  /* [3476] */
    (xdc_Char)0x5f,  /* [3477] */
    (xdc_Char)0x64,  /* [3478] */
    (xdc_Char)0x65,  /* [3479] */
    (xdc_Char)0x6c,  /* [3480] */
    (xdc_Char)0x61,  /* [3481] */
    (xdc_Char)0x79,  /* [3482] */
    (xdc_Char)0x65,  /* [3483] */
    (xdc_Char)0x64,  /* [3484] */
    (xdc_Char)0x3a,  /* [3485] */
    (xdc_Char)0x20,  /* [3486] */
    (xdc_Char)0x64,  /* [3487] */
    (xdc_Char)0x65,  /* [3488] */
    (xdc_Char)0x6c,  /* [3489] */
    (xdc_Char)0x61,  /* [3490] */
    (xdc_Char)0x79,  /* [3491] */
    (xdc_Char)0x3a,  /* [3492] */
    (xdc_Char)0x20,  /* [3493] */
    (xdc_Char)0x25,  /* [3494] */
    (xdc_Char)0x64,  /* [3495] */
    (xdc_Char)0x0,  /* [3496] */
    (xdc_Char)0x4c,  /* [3497] */
    (xdc_Char)0x4d,  /* [3498] */
    (xdc_Char)0x5f,  /* [3499] */
    (xdc_Char)0x74,  /* [3500] */
    (xdc_Char)0x69,  /* [3501] */
    (xdc_Char)0x63,  /* [3502] */
    (xdc_Char)0x6b,  /* [3503] */
    (xdc_Char)0x3a,  /* [3504] */
    (xdc_Char)0x20,  /* [3505] */
    (xdc_Char)0x74,  /* [3506] */
    (xdc_Char)0x69,  /* [3507] */
    (xdc_Char)0x63,  /* [3508] */
    (xdc_Char)0x6b,  /* [3509] */
    (xdc_Char)0x3a,  /* [3510] */
    (xdc_Char)0x20,  /* [3511] */
    (xdc_Char)0x25,  /* [3512] */
    (xdc_Char)0x64,  /* [3513] */
    (xdc_Char)0x0,  /* [3514] */
    (xdc_Char)0x4c,  /* [3515] */
    (xdc_Char)0x4d,  /* [3516] */
    (xdc_Char)0x5f,  /* [3517] */
    (xdc_Char)0x62,  /* [3518] */
    (xdc_Char)0x65,  /* [3519] */
    (xdc_Char)0x67,  /* [3520] */
    (xdc_Char)0x69,  /* [3521] */
    (xdc_Char)0x6e,  /* [3522] */
    (xdc_Char)0x3a,  /* [3523] */
    (xdc_Char)0x20,  /* [3524] */
    (xdc_Char)0x63,  /* [3525] */
    (xdc_Char)0x6c,  /* [3526] */
    (xdc_Char)0x6b,  /* [3527] */
    (xdc_Char)0x3a,  /* [3528] */
    (xdc_Char)0x20,  /* [3529] */
    (xdc_Char)0x30,  /* [3530] */
    (xdc_Char)0x78,  /* [3531] */
    (xdc_Char)0x25,  /* [3532] */
    (xdc_Char)0x78,  /* [3533] */
    (xdc_Char)0x2c,  /* [3534] */
    (xdc_Char)0x20,  /* [3535] */
    (xdc_Char)0x66,  /* [3536] */
    (xdc_Char)0x75,  /* [3537] */
    (xdc_Char)0x6e,  /* [3538] */
    (xdc_Char)0x63,  /* [3539] */
    (xdc_Char)0x3a,  /* [3540] */
    (xdc_Char)0x20,  /* [3541] */
    (xdc_Char)0x30,  /* [3542] */
    (xdc_Char)0x78,  /* [3543] */
    (xdc_Char)0x25,  /* [3544] */
    (xdc_Char)0x78,  /* [3545] */
    (xdc_Char)0x0,  /* [3546] */
    (xdc_Char)0x4c,  /* [3547] */
    (xdc_Char)0x4d,  /* [3548] */
    (xdc_Char)0x5f,  /* [3549] */
    (xdc_Char)0x70,  /* [3550] */
    (xdc_Char)0x6f,  /* [3551] */
    (xdc_Char)0x73,  /* [3552] */
    (xdc_Char)0x74,  /* [3553] */
    (xdc_Char)0x3a,  /* [3554] */
    (xdc_Char)0x20,  /* [3555] */
    (xdc_Char)0x73,  /* [3556] */
    (xdc_Char)0x65,  /* [3557] */
    (xdc_Char)0x6d,  /* [3558] */
    (xdc_Char)0x3a,  /* [3559] */
    (xdc_Char)0x20,  /* [3560] */
    (xdc_Char)0x30,  /* [3561] */
    (xdc_Char)0x78,  /* [3562] */
    (xdc_Char)0x25,  /* [3563] */
    (xdc_Char)0x78,  /* [3564] */
    (xdc_Char)0x2c,  /* [3565] */
    (xdc_Char)0x20,  /* [3566] */
    (xdc_Char)0x63,  /* [3567] */
    (xdc_Char)0x6f,  /* [3568] */
    (xdc_Char)0x75,  /* [3569] */
    (xdc_Char)0x6e,  /* [3570] */
    (xdc_Char)0x74,  /* [3571] */
    (xdc_Char)0x3a,  /* [3572] */
    (xdc_Char)0x20,  /* [3573] */
    (xdc_Char)0x25,  /* [3574] */
    (xdc_Char)0x64,  /* [3575] */
    (xdc_Char)0x0,  /* [3576] */
    (xdc_Char)0x4c,  /* [3577] */
    (xdc_Char)0x4d,  /* [3578] */
    (xdc_Char)0x5f,  /* [3579] */
    (xdc_Char)0x70,  /* [3580] */
    (xdc_Char)0x65,  /* [3581] */
    (xdc_Char)0x6e,  /* [3582] */
    (xdc_Char)0x64,  /* [3583] */
    (xdc_Char)0x3a,  /* [3584] */
    (xdc_Char)0x20,  /* [3585] */
    (xdc_Char)0x73,  /* [3586] */
    (xdc_Char)0x65,  /* [3587] */
    (xdc_Char)0x6d,  /* [3588] */
    (xdc_Char)0x3a,  /* [3589] */
    (xdc_Char)0x20,  /* [3590] */
    (xdc_Char)0x30,  /* [3591] */
    (xdc_Char)0x78,  /* [3592] */
    (xdc_Char)0x25,  /* [3593] */
    (xdc_Char)0x78,  /* [3594] */
    (xdc_Char)0x2c,  /* [3595] */
    (xdc_Char)0x20,  /* [3596] */
    (xdc_Char)0x63,  /* [3597] */
    (xdc_Char)0x6f,  /* [3598] */
    (xdc_Char)0x75,  /* [3599] */
    (xdc_Char)0x6e,  /* [3600] */
    (xdc_Char)0x74,  /* [3601] */
    (xdc_Char)0x3a,  /* [3602] */
    (xdc_Char)0x20,  /* [3603] */
    (xdc_Char)0x25,  /* [3604] */
    (xdc_Char)0x64,  /* [3605] */
    (xdc_Char)0x2c,  /* [3606] */
    (xdc_Char)0x20,  /* [3607] */
    (xdc_Char)0x74,  /* [3608] */
    (xdc_Char)0x69,  /* [3609] */
    (xdc_Char)0x6d,  /* [3610] */
    (xdc_Char)0x65,  /* [3611] */
    (xdc_Char)0x6f,  /* [3612] */
    (xdc_Char)0x75,  /* [3613] */
    (xdc_Char)0x74,  /* [3614] */
    (xdc_Char)0x3a,  /* [3615] */
    (xdc_Char)0x20,  /* [3616] */
    (xdc_Char)0x25,  /* [3617] */
    (xdc_Char)0x64,  /* [3618] */
    (xdc_Char)0x0,  /* [3619] */
    (xdc_Char)0x4c,  /* [3620] */
    (xdc_Char)0x4d,  /* [3621] */
    (xdc_Char)0x5f,  /* [3622] */
    (xdc_Char)0x62,  /* [3623] */
    (xdc_Char)0x65,  /* [3624] */
    (xdc_Char)0x67,  /* [3625] */
    (xdc_Char)0x69,  /* [3626] */
    (xdc_Char)0x6e,  /* [3627] */
    (xdc_Char)0x3a,  /* [3628] */
    (xdc_Char)0x20,  /* [3629] */
    (xdc_Char)0x73,  /* [3630] */
    (xdc_Char)0x77,  /* [3631] */
    (xdc_Char)0x69,  /* [3632] */
    (xdc_Char)0x3a,  /* [3633] */
    (xdc_Char)0x20,  /* [3634] */
    (xdc_Char)0x30,  /* [3635] */
    (xdc_Char)0x78,  /* [3636] */
    (xdc_Char)0x25,  /* [3637] */
    (xdc_Char)0x78,  /* [3638] */
    (xdc_Char)0x2c,  /* [3639] */
    (xdc_Char)0x20,  /* [3640] */
    (xdc_Char)0x66,  /* [3641] */
    (xdc_Char)0x75,  /* [3642] */
    (xdc_Char)0x6e,  /* [3643] */
    (xdc_Char)0x63,  /* [3644] */
    (xdc_Char)0x3a,  /* [3645] */
    (xdc_Char)0x20,  /* [3646] */
    (xdc_Char)0x30,  /* [3647] */
    (xdc_Char)0x78,  /* [3648] */
    (xdc_Char)0x25,  /* [3649] */
    (xdc_Char)0x78,  /* [3650] */
    (xdc_Char)0x2c,  /* [3651] */
    (xdc_Char)0x20,  /* [3652] */
    (xdc_Char)0x70,  /* [3653] */
    (xdc_Char)0x72,  /* [3654] */
    (xdc_Char)0x65,  /* [3655] */
    (xdc_Char)0x54,  /* [3656] */
    (xdc_Char)0x68,  /* [3657] */
    (xdc_Char)0x72,  /* [3658] */
    (xdc_Char)0x65,  /* [3659] */
    (xdc_Char)0x61,  /* [3660] */
    (xdc_Char)0x64,  /* [3661] */
    (xdc_Char)0x3a,  /* [3662] */
    (xdc_Char)0x20,  /* [3663] */
    (xdc_Char)0x25,  /* [3664] */
    (xdc_Char)0x64,  /* [3665] */
    (xdc_Char)0x0,  /* [3666] */
    (xdc_Char)0x4c,  /* [3667] */
    (xdc_Char)0x44,  /* [3668] */
    (xdc_Char)0x5f,  /* [3669] */
    (xdc_Char)0x65,  /* [3670] */
    (xdc_Char)0x6e,  /* [3671] */
    (xdc_Char)0x64,  /* [3672] */
    (xdc_Char)0x3a,  /* [3673] */
    (xdc_Char)0x20,  /* [3674] */
    (xdc_Char)0x73,  /* [3675] */
    (xdc_Char)0x77,  /* [3676] */
    (xdc_Char)0x69,  /* [3677] */
    (xdc_Char)0x3a,  /* [3678] */
    (xdc_Char)0x20,  /* [3679] */
    (xdc_Char)0x30,  /* [3680] */
    (xdc_Char)0x78,  /* [3681] */
    (xdc_Char)0x25,  /* [3682] */
    (xdc_Char)0x78,  /* [3683] */
    (xdc_Char)0x0,  /* [3684] */
    (xdc_Char)0x4c,  /* [3685] */
    (xdc_Char)0x4d,  /* [3686] */
    (xdc_Char)0x5f,  /* [3687] */
    (xdc_Char)0x70,  /* [3688] */
    (xdc_Char)0x6f,  /* [3689] */
    (xdc_Char)0x73,  /* [3690] */
    (xdc_Char)0x74,  /* [3691] */
    (xdc_Char)0x3a,  /* [3692] */
    (xdc_Char)0x20,  /* [3693] */
    (xdc_Char)0x73,  /* [3694] */
    (xdc_Char)0x77,  /* [3695] */
    (xdc_Char)0x69,  /* [3696] */
    (xdc_Char)0x3a,  /* [3697] */
    (xdc_Char)0x20,  /* [3698] */
    (xdc_Char)0x30,  /* [3699] */
    (xdc_Char)0x78,  /* [3700] */
    (xdc_Char)0x25,  /* [3701] */
    (xdc_Char)0x78,  /* [3702] */
    (xdc_Char)0x2c,  /* [3703] */
    (xdc_Char)0x20,  /* [3704] */
    (xdc_Char)0x66,  /* [3705] */
    (xdc_Char)0x75,  /* [3706] */
    (xdc_Char)0x6e,  /* [3707] */
    (xdc_Char)0x63,  /* [3708] */
    (xdc_Char)0x3a,  /* [3709] */
    (xdc_Char)0x20,  /* [3710] */
    (xdc_Char)0x30,  /* [3711] */
    (xdc_Char)0x78,  /* [3712] */
    (xdc_Char)0x25,  /* [3713] */
    (xdc_Char)0x78,  /* [3714] */
    (xdc_Char)0x2c,  /* [3715] */
    (xdc_Char)0x20,  /* [3716] */
    (xdc_Char)0x70,  /* [3717] */
    (xdc_Char)0x72,  /* [3718] */
    (xdc_Char)0x69,  /* [3719] */
    (xdc_Char)0x3a,  /* [3720] */
    (xdc_Char)0x20,  /* [3721] */
    (xdc_Char)0x25,  /* [3722] */
    (xdc_Char)0x64,  /* [3723] */
    (xdc_Char)0x0,  /* [3724] */
    (xdc_Char)0x4c,  /* [3725] */
    (xdc_Char)0x4d,  /* [3726] */
    (xdc_Char)0x5f,  /* [3727] */
    (xdc_Char)0x73,  /* [3728] */
    (xdc_Char)0x77,  /* [3729] */
    (xdc_Char)0x69,  /* [3730] */
    (xdc_Char)0x74,  /* [3731] */
    (xdc_Char)0x63,  /* [3732] */
    (xdc_Char)0x68,  /* [3733] */
    (xdc_Char)0x3a,  /* [3734] */
    (xdc_Char)0x20,  /* [3735] */
    (xdc_Char)0x6f,  /* [3736] */
    (xdc_Char)0x6c,  /* [3737] */
    (xdc_Char)0x64,  /* [3738] */
    (xdc_Char)0x74,  /* [3739] */
    (xdc_Char)0x73,  /* [3740] */
    (xdc_Char)0x6b,  /* [3741] */
    (xdc_Char)0x3a,  /* [3742] */
    (xdc_Char)0x20,  /* [3743] */
    (xdc_Char)0x30,  /* [3744] */
    (xdc_Char)0x78,  /* [3745] */
    (xdc_Char)0x25,  /* [3746] */
    (xdc_Char)0x78,  /* [3747] */
    (xdc_Char)0x2c,  /* [3748] */
    (xdc_Char)0x20,  /* [3749] */
    (xdc_Char)0x6f,  /* [3750] */
    (xdc_Char)0x6c,  /* [3751] */
    (xdc_Char)0x64,  /* [3752] */
    (xdc_Char)0x66,  /* [3753] */
    (xdc_Char)0x75,  /* [3754] */
    (xdc_Char)0x6e,  /* [3755] */
    (xdc_Char)0x63,  /* [3756] */
    (xdc_Char)0x3a,  /* [3757] */
    (xdc_Char)0x20,  /* [3758] */
    (xdc_Char)0x30,  /* [3759] */
    (xdc_Char)0x78,  /* [3760] */
    (xdc_Char)0x25,  /* [3761] */
    (xdc_Char)0x78,  /* [3762] */
    (xdc_Char)0x2c,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x6e,  /* [3765] */
    (xdc_Char)0x65,  /* [3766] */
    (xdc_Char)0x77,  /* [3767] */
    (xdc_Char)0x74,  /* [3768] */
    (xdc_Char)0x73,  /* [3769] */
    (xdc_Char)0x6b,  /* [3770] */
    (xdc_Char)0x3a,  /* [3771] */
    (xdc_Char)0x20,  /* [3772] */
    (xdc_Char)0x30,  /* [3773] */
    (xdc_Char)0x78,  /* [3774] */
    (xdc_Char)0x25,  /* [3775] */
    (xdc_Char)0x78,  /* [3776] */
    (xdc_Char)0x2c,  /* [3777] */
    (xdc_Char)0x20,  /* [3778] */
    (xdc_Char)0x6e,  /* [3779] */
    (xdc_Char)0x65,  /* [3780] */
    (xdc_Char)0x77,  /* [3781] */
    (xdc_Char)0x66,  /* [3782] */
    (xdc_Char)0x75,  /* [3783] */
    (xdc_Char)0x6e,  /* [3784] */
    (xdc_Char)0x63,  /* [3785] */
    (xdc_Char)0x3a,  /* [3786] */
    (xdc_Char)0x20,  /* [3787] */
    (xdc_Char)0x30,  /* [3788] */
    (xdc_Char)0x78,  /* [3789] */
    (xdc_Char)0x25,  /* [3790] */
    (xdc_Char)0x78,  /* [3791] */
    (xdc_Char)0x0,  /* [3792] */
    (xdc_Char)0x4c,  /* [3793] */
    (xdc_Char)0x4d,  /* [3794] */
    (xdc_Char)0x5f,  /* [3795] */
    (xdc_Char)0x73,  /* [3796] */
    (xdc_Char)0x6c,  /* [3797] */
    (xdc_Char)0x65,  /* [3798] */
    (xdc_Char)0x65,  /* [3799] */
    (xdc_Char)0x70,  /* [3800] */
    (xdc_Char)0x3a,  /* [3801] */
    (xdc_Char)0x20,  /* [3802] */
    (xdc_Char)0x74,  /* [3803] */
    (xdc_Char)0x73,  /* [3804] */
    (xdc_Char)0x6b,  /* [3805] */
    (xdc_Char)0x3a,  /* [3806] */
    (xdc_Char)0x20,  /* [3807] */
    (xdc_Char)0x30,  /* [3808] */
    (xdc_Char)0x78,  /* [3809] */
    (xdc_Char)0x25,  /* [3810] */
    (xdc_Char)0x78,  /* [3811] */
    (xdc_Char)0x2c,  /* [3812] */
    (xdc_Char)0x20,  /* [3813] */
    (xdc_Char)0x66,  /* [3814] */
    (xdc_Char)0x75,  /* [3815] */
    (xdc_Char)0x6e,  /* [3816] */
    (xdc_Char)0x63,  /* [3817] */
    (xdc_Char)0x3a,  /* [3818] */
    (xdc_Char)0x20,  /* [3819] */
    (xdc_Char)0x30,  /* [3820] */
    (xdc_Char)0x78,  /* [3821] */
    (xdc_Char)0x25,  /* [3822] */
    (xdc_Char)0x78,  /* [3823] */
    (xdc_Char)0x2c,  /* [3824] */
    (xdc_Char)0x20,  /* [3825] */
    (xdc_Char)0x74,  /* [3826] */
    (xdc_Char)0x69,  /* [3827] */
    (xdc_Char)0x6d,  /* [3828] */
    (xdc_Char)0x65,  /* [3829] */
    (xdc_Char)0x6f,  /* [3830] */
    (xdc_Char)0x75,  /* [3831] */
    (xdc_Char)0x74,  /* [3832] */
    (xdc_Char)0x3a,  /* [3833] */
    (xdc_Char)0x20,  /* [3834] */
    (xdc_Char)0x25,  /* [3835] */
    (xdc_Char)0x64,  /* [3836] */
    (xdc_Char)0x0,  /* [3837] */
    (xdc_Char)0x4c,  /* [3838] */
    (xdc_Char)0x44,  /* [3839] */
    (xdc_Char)0x5f,  /* [3840] */
    (xdc_Char)0x72,  /* [3841] */
    (xdc_Char)0x65,  /* [3842] */
    (xdc_Char)0x61,  /* [3843] */
    (xdc_Char)0x64,  /* [3844] */
    (xdc_Char)0x79,  /* [3845] */
    (xdc_Char)0x3a,  /* [3846] */
    (xdc_Char)0x20,  /* [3847] */
    (xdc_Char)0x74,  /* [3848] */
    (xdc_Char)0x73,  /* [3849] */
    (xdc_Char)0x6b,  /* [3850] */
    (xdc_Char)0x3a,  /* [3851] */
    (xdc_Char)0x20,  /* [3852] */
    (xdc_Char)0x30,  /* [3853] */
    (xdc_Char)0x78,  /* [3854] */
    (xdc_Char)0x25,  /* [3855] */
    (xdc_Char)0x78,  /* [3856] */
    (xdc_Char)0x2c,  /* [3857] */
    (xdc_Char)0x20,  /* [3858] */
    (xdc_Char)0x66,  /* [3859] */
    (xdc_Char)0x75,  /* [3860] */
    (xdc_Char)0x6e,  /* [3861] */
    (xdc_Char)0x63,  /* [3862] */
    (xdc_Char)0x3a,  /* [3863] */
    (xdc_Char)0x20,  /* [3864] */
    (xdc_Char)0x30,  /* [3865] */
    (xdc_Char)0x78,  /* [3866] */
    (xdc_Char)0x25,  /* [3867] */
    (xdc_Char)0x78,  /* [3868] */
    (xdc_Char)0x2c,  /* [3869] */
    (xdc_Char)0x20,  /* [3870] */
    (xdc_Char)0x70,  /* [3871] */
    (xdc_Char)0x72,  /* [3872] */
    (xdc_Char)0x69,  /* [3873] */
    (xdc_Char)0x3a,  /* [3874] */
    (xdc_Char)0x20,  /* [3875] */
    (xdc_Char)0x25,  /* [3876] */
    (xdc_Char)0x64,  /* [3877] */
    (xdc_Char)0x0,  /* [3878] */
    (xdc_Char)0x4c,  /* [3879] */
    (xdc_Char)0x44,  /* [3880] */
    (xdc_Char)0x5f,  /* [3881] */
    (xdc_Char)0x62,  /* [3882] */
    (xdc_Char)0x6c,  /* [3883] */
    (xdc_Char)0x6f,  /* [3884] */
    (xdc_Char)0x63,  /* [3885] */
    (xdc_Char)0x6b,  /* [3886] */
    (xdc_Char)0x3a,  /* [3887] */
    (xdc_Char)0x20,  /* [3888] */
    (xdc_Char)0x74,  /* [3889] */
    (xdc_Char)0x73,  /* [3890] */
    (xdc_Char)0x6b,  /* [3891] */
    (xdc_Char)0x3a,  /* [3892] */
    (xdc_Char)0x20,  /* [3893] */
    (xdc_Char)0x30,  /* [3894] */
    (xdc_Char)0x78,  /* [3895] */
    (xdc_Char)0x25,  /* [3896] */
    (xdc_Char)0x78,  /* [3897] */
    (xdc_Char)0x2c,  /* [3898] */
    (xdc_Char)0x20,  /* [3899] */
    (xdc_Char)0x66,  /* [3900] */
    (xdc_Char)0x75,  /* [3901] */
    (xdc_Char)0x6e,  /* [3902] */
    (xdc_Char)0x63,  /* [3903] */
    (xdc_Char)0x3a,  /* [3904] */
    (xdc_Char)0x20,  /* [3905] */
    (xdc_Char)0x30,  /* [3906] */
    (xdc_Char)0x78,  /* [3907] */
    (xdc_Char)0x25,  /* [3908] */
    (xdc_Char)0x78,  /* [3909] */
    (xdc_Char)0x0,  /* [3910] */
    (xdc_Char)0x4c,  /* [3911] */
    (xdc_Char)0x4d,  /* [3912] */
    (xdc_Char)0x5f,  /* [3913] */
    (xdc_Char)0x79,  /* [3914] */
    (xdc_Char)0x69,  /* [3915] */
    (xdc_Char)0x65,  /* [3916] */
    (xdc_Char)0x6c,  /* [3917] */
    (xdc_Char)0x64,  /* [3918] */
    (xdc_Char)0x3a,  /* [3919] */
    (xdc_Char)0x20,  /* [3920] */
    (xdc_Char)0x74,  /* [3921] */
    (xdc_Char)0x73,  /* [3922] */
    (xdc_Char)0x6b,  /* [3923] */
    (xdc_Char)0x3a,  /* [3924] */
    (xdc_Char)0x20,  /* [3925] */
    (xdc_Char)0x30,  /* [3926] */
    (xdc_Char)0x78,  /* [3927] */
    (xdc_Char)0x25,  /* [3928] */
    (xdc_Char)0x78,  /* [3929] */
    (xdc_Char)0x2c,  /* [3930] */
    (xdc_Char)0x20,  /* [3931] */
    (xdc_Char)0x66,  /* [3932] */
    (xdc_Char)0x75,  /* [3933] */
    (xdc_Char)0x6e,  /* [3934] */
    (xdc_Char)0x63,  /* [3935] */
    (xdc_Char)0x3a,  /* [3936] */
    (xdc_Char)0x20,  /* [3937] */
    (xdc_Char)0x30,  /* [3938] */
    (xdc_Char)0x78,  /* [3939] */
    (xdc_Char)0x25,  /* [3940] */
    (xdc_Char)0x78,  /* [3941] */
    (xdc_Char)0x2c,  /* [3942] */
    (xdc_Char)0x20,  /* [3943] */
    (xdc_Char)0x63,  /* [3944] */
    (xdc_Char)0x75,  /* [3945] */
    (xdc_Char)0x72,  /* [3946] */
    (xdc_Char)0x72,  /* [3947] */
    (xdc_Char)0x54,  /* [3948] */
    (xdc_Char)0x68,  /* [3949] */
    (xdc_Char)0x72,  /* [3950] */
    (xdc_Char)0x65,  /* [3951] */
    (xdc_Char)0x61,  /* [3952] */
    (xdc_Char)0x64,  /* [3953] */
    (xdc_Char)0x3a,  /* [3954] */
    (xdc_Char)0x20,  /* [3955] */
    (xdc_Char)0x25,  /* [3956] */
    (xdc_Char)0x64,  /* [3957] */
    (xdc_Char)0x0,  /* [3958] */
    (xdc_Char)0x4c,  /* [3959] */
    (xdc_Char)0x4d,  /* [3960] */
    (xdc_Char)0x5f,  /* [3961] */
    (xdc_Char)0x73,  /* [3962] */
    (xdc_Char)0x65,  /* [3963] */
    (xdc_Char)0x74,  /* [3964] */
    (xdc_Char)0x50,  /* [3965] */
    (xdc_Char)0x72,  /* [3966] */
    (xdc_Char)0x69,  /* [3967] */
    (xdc_Char)0x3a,  /* [3968] */
    (xdc_Char)0x20,  /* [3969] */
    (xdc_Char)0x74,  /* [3970] */
    (xdc_Char)0x73,  /* [3971] */
    (xdc_Char)0x6b,  /* [3972] */
    (xdc_Char)0x3a,  /* [3973] */
    (xdc_Char)0x20,  /* [3974] */
    (xdc_Char)0x30,  /* [3975] */
    (xdc_Char)0x78,  /* [3976] */
    (xdc_Char)0x25,  /* [3977] */
    (xdc_Char)0x78,  /* [3978] */
    (xdc_Char)0x2c,  /* [3979] */
    (xdc_Char)0x20,  /* [3980] */
    (xdc_Char)0x66,  /* [3981] */
    (xdc_Char)0x75,  /* [3982] */
    (xdc_Char)0x6e,  /* [3983] */
    (xdc_Char)0x63,  /* [3984] */
    (xdc_Char)0x3a,  /* [3985] */
    (xdc_Char)0x20,  /* [3986] */
    (xdc_Char)0x30,  /* [3987] */
    (xdc_Char)0x78,  /* [3988] */
    (xdc_Char)0x25,  /* [3989] */
    (xdc_Char)0x78,  /* [3990] */
    (xdc_Char)0x2c,  /* [3991] */
    (xdc_Char)0x20,  /* [3992] */
    (xdc_Char)0x6f,  /* [3993] */
    (xdc_Char)0x6c,  /* [3994] */
    (xdc_Char)0x64,  /* [3995] */
    (xdc_Char)0x50,  /* [3996] */
    (xdc_Char)0x72,  /* [3997] */
    (xdc_Char)0x69,  /* [3998] */
    (xdc_Char)0x3a,  /* [3999] */
    (xdc_Char)0x20,  /* [4000] */
    (xdc_Char)0x25,  /* [4001] */
    (xdc_Char)0x64,  /* [4002] */
    (xdc_Char)0x2c,  /* [4003] */
    (xdc_Char)0x20,  /* [4004] */
    (xdc_Char)0x6e,  /* [4005] */
    (xdc_Char)0x65,  /* [4006] */
    (xdc_Char)0x77,  /* [4007] */
    (xdc_Char)0x50,  /* [4008] */
    (xdc_Char)0x72,  /* [4009] */
    (xdc_Char)0x69,  /* [4010] */
    (xdc_Char)0x20,  /* [4011] */
    (xdc_Char)0x25,  /* [4012] */
    (xdc_Char)0x64,  /* [4013] */
    (xdc_Char)0x0,  /* [4014] */
    (xdc_Char)0x4c,  /* [4015] */
    (xdc_Char)0x44,  /* [4016] */
    (xdc_Char)0x5f,  /* [4017] */
    (xdc_Char)0x65,  /* [4018] */
    (xdc_Char)0x78,  /* [4019] */
    (xdc_Char)0x69,  /* [4020] */
    (xdc_Char)0x74,  /* [4021] */
    (xdc_Char)0x3a,  /* [4022] */
    (xdc_Char)0x20,  /* [4023] */
    (xdc_Char)0x74,  /* [4024] */
    (xdc_Char)0x73,  /* [4025] */
    (xdc_Char)0x6b,  /* [4026] */
    (xdc_Char)0x3a,  /* [4027] */
    (xdc_Char)0x20,  /* [4028] */
    (xdc_Char)0x30,  /* [4029] */
    (xdc_Char)0x78,  /* [4030] */
    (xdc_Char)0x25,  /* [4031] */
    (xdc_Char)0x78,  /* [4032] */
    (xdc_Char)0x2c,  /* [4033] */
    (xdc_Char)0x20,  /* [4034] */
    (xdc_Char)0x66,  /* [4035] */
    (xdc_Char)0x75,  /* [4036] */
    (xdc_Char)0x6e,  /* [4037] */
    (xdc_Char)0x63,  /* [4038] */
    (xdc_Char)0x3a,  /* [4039] */
    (xdc_Char)0x20,  /* [4040] */
    (xdc_Char)0x30,  /* [4041] */
    (xdc_Char)0x78,  /* [4042] */
    (xdc_Char)0x25,  /* [4043] */
    (xdc_Char)0x78,  /* [4044] */
    (xdc_Char)0x0,  /* [4045] */
    (xdc_Char)0x78,  /* [4046] */
    (xdc_Char)0x64,  /* [4047] */
    (xdc_Char)0x63,  /* [4048] */
    (xdc_Char)0x2e,  /* [4049] */
    (xdc_Char)0x0,  /* [4050] */
    (xdc_Char)0x72,  /* [4051] */
    (xdc_Char)0x75,  /* [4052] */
    (xdc_Char)0x6e,  /* [4053] */
    (xdc_Char)0x74,  /* [4054] */
    (xdc_Char)0x69,  /* [4055] */
    (xdc_Char)0x6d,  /* [4056] */
    (xdc_Char)0x65,  /* [4057] */
    (xdc_Char)0x2e,  /* [4058] */
    (xdc_Char)0x0,  /* [4059] */
    (xdc_Char)0x41,  /* [4060] */
    (xdc_Char)0x73,  /* [4061] */
    (xdc_Char)0x73,  /* [4062] */
    (xdc_Char)0x65,  /* [4063] */
    (xdc_Char)0x72,  /* [4064] */
    (xdc_Char)0x74,  /* [4065] */
    (xdc_Char)0x0,  /* [4066] */
    (xdc_Char)0x43,  /* [4067] */
    (xdc_Char)0x6f,  /* [4068] */
    (xdc_Char)0x72,  /* [4069] */
    (xdc_Char)0x65,  /* [4070] */
    (xdc_Char)0x0,  /* [4071] */
    (xdc_Char)0x44,  /* [4072] */
    (xdc_Char)0x65,  /* [4073] */
    (xdc_Char)0x66,  /* [4074] */
    (xdc_Char)0x61,  /* [4075] */
    (xdc_Char)0x75,  /* [4076] */
    (xdc_Char)0x6c,  /* [4077] */
    (xdc_Char)0x74,  /* [4078] */
    (xdc_Char)0x73,  /* [4079] */
    (xdc_Char)0x0,  /* [4080] */
    (xdc_Char)0x44,  /* [4081] */
    (xdc_Char)0x69,  /* [4082] */
    (xdc_Char)0x61,  /* [4083] */
    (xdc_Char)0x67,  /* [4084] */
    (xdc_Char)0x73,  /* [4085] */
    (xdc_Char)0x0,  /* [4086] */
    (xdc_Char)0x45,  /* [4087] */
    (xdc_Char)0x72,  /* [4088] */
    (xdc_Char)0x72,  /* [4089] */
    (xdc_Char)0x6f,  /* [4090] */
    (xdc_Char)0x72,  /* [4091] */
    (xdc_Char)0x0,  /* [4092] */
    (xdc_Char)0x47,  /* [4093] */
    (xdc_Char)0x61,  /* [4094] */
    (xdc_Char)0x74,  /* [4095] */
    (xdc_Char)0x65,  /* [4096] */
    (xdc_Char)0x0,  /* [4097] */
    (xdc_Char)0x4c,  /* [4098] */
    (xdc_Char)0x6f,  /* [4099] */
    (xdc_Char)0x67,  /* [4100] */
    (xdc_Char)0x0,  /* [4101] */
    (xdc_Char)0x4d,  /* [4102] */
    (xdc_Char)0x61,  /* [4103] */
    (xdc_Char)0x69,  /* [4104] */
    (xdc_Char)0x6e,  /* [4105] */
    (xdc_Char)0x0,  /* [4106] */
    (xdc_Char)0x4d,  /* [4107] */
    (xdc_Char)0x65,  /* [4108] */
    (xdc_Char)0x6d,  /* [4109] */
    (xdc_Char)0x6f,  /* [4110] */
    (xdc_Char)0x72,  /* [4111] */
    (xdc_Char)0x79,  /* [4112] */
    (xdc_Char)0x0,  /* [4113] */
    (xdc_Char)0x52,  /* [4114] */
    (xdc_Char)0x65,  /* [4115] */
    (xdc_Char)0x67,  /* [4116] */
    (xdc_Char)0x69,  /* [4117] */
    (xdc_Char)0x73,  /* [4118] */
    (xdc_Char)0x74,  /* [4119] */
    (xdc_Char)0x72,  /* [4120] */
    (xdc_Char)0x79,  /* [4121] */
    (xdc_Char)0x0,  /* [4122] */
    (xdc_Char)0x53,  /* [4123] */
    (xdc_Char)0x74,  /* [4124] */
    (xdc_Char)0x61,  /* [4125] */
    (xdc_Char)0x72,  /* [4126] */
    (xdc_Char)0x74,  /* [4127] */
    (xdc_Char)0x75,  /* [4128] */
    (xdc_Char)0x70,  /* [4129] */
    (xdc_Char)0x0,  /* [4130] */
    (xdc_Char)0x53,  /* [4131] */
    (xdc_Char)0x79,  /* [4132] */
    (xdc_Char)0x73,  /* [4133] */
    (xdc_Char)0x74,  /* [4134] */
    (xdc_Char)0x65,  /* [4135] */
    (xdc_Char)0x6d,  /* [4136] */
    (xdc_Char)0x0,  /* [4137] */
    (xdc_Char)0x53,  /* [4138] */
    (xdc_Char)0x79,  /* [4139] */
    (xdc_Char)0x73,  /* [4140] */
    (xdc_Char)0x4d,  /* [4141] */
    (xdc_Char)0x69,  /* [4142] */
    (xdc_Char)0x6e,  /* [4143] */
    (xdc_Char)0x0,  /* [4144] */
    (xdc_Char)0x54,  /* [4145] */
    (xdc_Char)0x65,  /* [4146] */
    (xdc_Char)0x78,  /* [4147] */
    (xdc_Char)0x74,  /* [4148] */
    (xdc_Char)0x0,  /* [4149] */
    (xdc_Char)0x74,  /* [4150] */
    (xdc_Char)0x69,  /* [4151] */
    (xdc_Char)0x2e,  /* [4152] */
    (xdc_Char)0x0,  /* [4153] */
    (xdc_Char)0x73,  /* [4154] */
    (xdc_Char)0x79,  /* [4155] */
    (xdc_Char)0x73,  /* [4156] */
    (xdc_Char)0x62,  /* [4157] */
    (xdc_Char)0x69,  /* [4158] */
    (xdc_Char)0x6f,  /* [4159] */
    (xdc_Char)0x73,  /* [4160] */
    (xdc_Char)0x2e,  /* [4161] */
    (xdc_Char)0x0,  /* [4162] */
    (xdc_Char)0x66,  /* [4163] */
    (xdc_Char)0x61,  /* [4164] */
    (xdc_Char)0x6d,  /* [4165] */
    (xdc_Char)0x69,  /* [4166] */
    (xdc_Char)0x6c,  /* [4167] */
    (xdc_Char)0x79,  /* [4168] */
    (xdc_Char)0x2e,  /* [4169] */
    (xdc_Char)0x0,  /* [4170] */
    (xdc_Char)0x6d,  /* [4171] */
    (xdc_Char)0x73,  /* [4172] */
    (xdc_Char)0x70,  /* [4173] */
    (xdc_Char)0x34,  /* [4174] */
    (xdc_Char)0x33,  /* [4175] */
    (xdc_Char)0x30,  /* [4176] */
    (xdc_Char)0x2e,  /* [4177] */
    (xdc_Char)0x0,  /* [4178] */
    (xdc_Char)0x48,  /* [4179] */
    (xdc_Char)0x77,  /* [4180] */
    (xdc_Char)0x69,  /* [4181] */
    (xdc_Char)0x0,  /* [4182] */
    (xdc_Char)0x49,  /* [4183] */
    (xdc_Char)0x6e,  /* [4184] */
    (xdc_Char)0x74,  /* [4185] */
    (xdc_Char)0x72,  /* [4186] */
    (xdc_Char)0x69,  /* [4187] */
    (xdc_Char)0x6e,  /* [4188] */
    (xdc_Char)0x73,  /* [4189] */
    (xdc_Char)0x69,  /* [4190] */
    (xdc_Char)0x63,  /* [4191] */
    (xdc_Char)0x73,  /* [4192] */
    (xdc_Char)0x53,  /* [4193] */
    (xdc_Char)0x75,  /* [4194] */
    (xdc_Char)0x70,  /* [4195] */
    (xdc_Char)0x70,  /* [4196] */
    (xdc_Char)0x6f,  /* [4197] */
    (xdc_Char)0x72,  /* [4198] */
    (xdc_Char)0x74,  /* [4199] */
    (xdc_Char)0x0,  /* [4200] */
    (xdc_Char)0x54,  /* [4201] */
    (xdc_Char)0x61,  /* [4202] */
    (xdc_Char)0x73,  /* [4203] */
    (xdc_Char)0x6b,  /* [4204] */
    (xdc_Char)0x53,  /* [4205] */
    (xdc_Char)0x75,  /* [4206] */
    (xdc_Char)0x70,  /* [4207] */
    (xdc_Char)0x70,  /* [4208] */
    (xdc_Char)0x6f,  /* [4209] */
    (xdc_Char)0x72,  /* [4210] */
    (xdc_Char)0x74,  /* [4211] */
    (xdc_Char)0x0,  /* [4212] */
    (xdc_Char)0x54,  /* [4213] */
    (xdc_Char)0x69,  /* [4214] */
    (xdc_Char)0x6d,  /* [4215] */
    (xdc_Char)0x65,  /* [4216] */
    (xdc_Char)0x72,  /* [4217] */
    (xdc_Char)0x0,  /* [4218] */
    (xdc_Char)0x43,  /* [4219] */
    (xdc_Char)0x6c,  /* [4220] */
    (xdc_Char)0x6f,  /* [4221] */
    (xdc_Char)0x63,  /* [4222] */
    (xdc_Char)0x6b,  /* [4223] */
    (xdc_Char)0x46,  /* [4224] */
    (xdc_Char)0x72,  /* [4225] */
    (xdc_Char)0x65,  /* [4226] */
    (xdc_Char)0x71,  /* [4227] */
    (xdc_Char)0x73,  /* [4228] */
    (xdc_Char)0x0,  /* [4229] */
    (xdc_Char)0x42,  /* [4230] */
    (xdc_Char)0x49,  /* [4231] */
    (xdc_Char)0x4f,  /* [4232] */
    (xdc_Char)0x53,  /* [4233] */
    (xdc_Char)0x0,  /* [4234] */
    (xdc_Char)0x68,  /* [4235] */
    (xdc_Char)0x61,  /* [4236] */
    (xdc_Char)0x6c,  /* [4237] */
    (xdc_Char)0x2e,  /* [4238] */
    (xdc_Char)0x0,  /* [4239] */
    (xdc_Char)0x6b,  /* [4240] */
    (xdc_Char)0x6e,  /* [4241] */
    (xdc_Char)0x6c,  /* [4242] */
    (xdc_Char)0x2e,  /* [4243] */
    (xdc_Char)0x0,  /* [4244] */
    (xdc_Char)0x43,  /* [4245] */
    (xdc_Char)0x6c,  /* [4246] */
    (xdc_Char)0x6f,  /* [4247] */
    (xdc_Char)0x63,  /* [4248] */
    (xdc_Char)0x6b,  /* [4249] */
    (xdc_Char)0x0,  /* [4250] */
    (xdc_Char)0x49,  /* [4251] */
    (xdc_Char)0x64,  /* [4252] */
    (xdc_Char)0x6c,  /* [4253] */
    (xdc_Char)0x65,  /* [4254] */
    (xdc_Char)0x0,  /* [4255] */
    (xdc_Char)0x49,  /* [4256] */
    (xdc_Char)0x6e,  /* [4257] */
    (xdc_Char)0x74,  /* [4258] */
    (xdc_Char)0x72,  /* [4259] */
    (xdc_Char)0x69,  /* [4260] */
    (xdc_Char)0x6e,  /* [4261] */
    (xdc_Char)0x73,  /* [4262] */
    (xdc_Char)0x69,  /* [4263] */
    (xdc_Char)0x63,  /* [4264] */
    (xdc_Char)0x73,  /* [4265] */
    (xdc_Char)0x0,  /* [4266] */
    (xdc_Char)0x51,  /* [4267] */
    (xdc_Char)0x75,  /* [4268] */
    (xdc_Char)0x65,  /* [4269] */
    (xdc_Char)0x75,  /* [4270] */
    (xdc_Char)0x65,  /* [4271] */
    (xdc_Char)0x0,  /* [4272] */
    (xdc_Char)0x53,  /* [4273] */
    (xdc_Char)0x65,  /* [4274] */
    (xdc_Char)0x6d,  /* [4275] */
    (xdc_Char)0x61,  /* [4276] */
    (xdc_Char)0x70,  /* [4277] */
    (xdc_Char)0x68,  /* [4278] */
    (xdc_Char)0x6f,  /* [4279] */
    (xdc_Char)0x72,  /* [4280] */
    (xdc_Char)0x65,  /* [4281] */
    (xdc_Char)0x0,  /* [4282] */
    (xdc_Char)0x53,  /* [4283] */
    (xdc_Char)0x77,  /* [4284] */
    (xdc_Char)0x69,  /* [4285] */
    (xdc_Char)0x0,  /* [4286] */
    (xdc_Char)0x54,  /* [4287] */
    (xdc_Char)0x61,  /* [4288] */
    (xdc_Char)0x73,  /* [4289] */
    (xdc_Char)0x6b,  /* [4290] */
    (xdc_Char)0x0,  /* [4291] */
    (xdc_Char)0x67,  /* [4292] */
    (xdc_Char)0x61,  /* [4293] */
    (xdc_Char)0x74,  /* [4294] */
    (xdc_Char)0x65,  /* [4295] */
    (xdc_Char)0x73,  /* [4296] */
    (xdc_Char)0x2e,  /* [4297] */
    (xdc_Char)0x0,  /* [4298] */
    (xdc_Char)0x47,  /* [4299] */
    (xdc_Char)0x61,  /* [4300] */
    (xdc_Char)0x74,  /* [4301] */
    (xdc_Char)0x65,  /* [4302] */
    (xdc_Char)0x48,  /* [4303] */
    (xdc_Char)0x77,  /* [4304] */
    (xdc_Char)0x69,  /* [4305] */
    (xdc_Char)0x0,  /* [4306] */
    (xdc_Char)0x47,  /* [4307] */
    (xdc_Char)0x61,  /* [4308] */
    (xdc_Char)0x74,  /* [4309] */
    (xdc_Char)0x65,  /* [4310] */
    (xdc_Char)0x4d,  /* [4311] */
    (xdc_Char)0x75,  /* [4312] */
    (xdc_Char)0x74,  /* [4313] */
    (xdc_Char)0x65,  /* [4314] */
    (xdc_Char)0x78,  /* [4315] */
    (xdc_Char)0x0,  /* [4316] */
    (xdc_Char)0x68,  /* [4317] */
    (xdc_Char)0x65,  /* [4318] */
    (xdc_Char)0x61,  /* [4319] */
    (xdc_Char)0x70,  /* [4320] */
    (xdc_Char)0x73,  /* [4321] */
    (xdc_Char)0x2e,  /* [4322] */
    (xdc_Char)0x0,  /* [4323] */
    (xdc_Char)0x48,  /* [4324] */
    (xdc_Char)0x65,  /* [4325] */
    (xdc_Char)0x61,  /* [4326] */
    (xdc_Char)0x70,  /* [4327] */
    (xdc_Char)0x4d,  /* [4328] */
    (xdc_Char)0x65,  /* [4329] */
    (xdc_Char)0x6d,  /* [4330] */
    (xdc_Char)0x0,  /* [4331] */
    (xdc_Char)0x74,  /* [4332] */
    (xdc_Char)0x69,  /* [4333] */
    (xdc_Char)0x2e,  /* [4334] */
    (xdc_Char)0x73,  /* [4335] */
    (xdc_Char)0x79,  /* [4336] */
    (xdc_Char)0x73,  /* [4337] */
    (xdc_Char)0x62,  /* [4338] */
    (xdc_Char)0x69,  /* [4339] */
    (xdc_Char)0x6f,  /* [4340] */
    (xdc_Char)0x73,  /* [4341] */
    (xdc_Char)0x2e,  /* [4342] */
    (xdc_Char)0x6b,  /* [4343] */
    (xdc_Char)0x6e,  /* [4344] */
    (xdc_Char)0x6c,  /* [4345] */
    (xdc_Char)0x2e,  /* [4346] */
    (xdc_Char)0x54,  /* [4347] */
    (xdc_Char)0x61,  /* [4348] */
    (xdc_Char)0x73,  /* [4349] */
    (xdc_Char)0x6b,  /* [4350] */
    (xdc_Char)0x2e,  /* [4351] */
    (xdc_Char)0x49,  /* [4352] */
    (xdc_Char)0x64,  /* [4353] */
    (xdc_Char)0x6c,  /* [4354] */
    (xdc_Char)0x65,  /* [4355] */
    (xdc_Char)0x54,  /* [4356] */
    (xdc_Char)0x61,  /* [4357] */
    (xdc_Char)0x73,  /* [4358] */
    (xdc_Char)0x6b,  /* [4359] */
    (xdc_Char)0x0,  /* [4360] */
};

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[41] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0xfce,  /* left */
        (xdc_Bits16)0xfd3,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xfdc,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xfe3,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xfe8,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xff1,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xff7,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0xffd,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1002,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1006,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x100b,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1012,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x101b,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1023,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x102a,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1031,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x1036,  /* left */
        (xdc_Bits16)0x103a,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1043,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8011,  /* left */
        (xdc_Bits16)0x104b,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1053,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1057,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1069,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1075,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x107b,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1086,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x108b,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1053,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1075,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x1090,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x1095,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x109b,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x10a0,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x10ab,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x10b1,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x10bb,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801c,  /* left */
        (xdc_Bits16)0x10bf,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x10c4,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x10cb,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x10d3,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8010,  /* left */
        (xdc_Bits16)0x10dd,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x10e4,  /* right */
    },  /* [40] */
};

/* Module__diagsEnabled__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1109;

/* nodeCnt__C */
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x29;

/* unnamedModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== ti.sysbios.family.msp430.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_family_msp430_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_family_msp430_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_family_msp430_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_msp430_Hwi_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.family.msp430.Timer FUNCTION STUBS ========
 */

/* oneShotStub__E */
xdc_Void ti_sysbios_family_msp430_Timer_oneShotStub__E( xdc_UArg arg ) 
{
    ti_sysbios_family_msp430_Timer_oneShotStub__F(arg);
}

/* oneShotNestStub__E */
xdc_Void ti_sysbios_family_msp430_Timer_oneShotNestStub__E( xdc_UArg arg ) 
{
    ti_sysbios_family_msp430_Timer_oneShotNestStub__F(arg);
}

/* periodicStub__E */
xdc_Void ti_sysbios_family_msp430_Timer_periodicStub__E( xdc_UArg arg ) 
{
    ti_sysbios_family_msp430_Timer_periodicStub__F(arg);
}

/* periodicNestStub__E */
xdc_Void ti_sysbios_family_msp430_Timer_periodicNestStub__E( xdc_UArg arg ) 
{
    ti_sysbios_family_msp430_Timer_periodicNestStub__F(arg);
}

/* getHandle__E */
ti_sysbios_family_msp430_Timer_Handle ti_sysbios_family_msp430_Timer_getHandle__E( xdc_UInt id ) 
{
    return ti_sysbios_family_msp430_Timer_getHandle__F(id);
}

/* reconfig__E */
xdc_Void ti_sysbios_family_msp430_Timer_reconfig__E( ti_sysbios_family_msp430_Timer_Handle __inst, ti_sysbios_family_msp430_Timer_FuncPtr tickFxn, const ti_sysbios_family_msp430_Timer_Params* timerParams, xdc_runtime_Error_Block* eb ) 
{
    ti_sysbios_family_msp430_Timer_reconfig__F((void*)__inst, tickFxn, timerParams, eb);
}

/* Module_startup */
xdc_Int ti_sysbios_family_msp430_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_family_msp430_Timer_Module_startup__F(state);
}


/*
 * ======== ti.sysbios.gates.GateHwi FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateHwi_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateHwi_query__F(qual);
}


/*
 * ======== ti.sysbios.gates.GateMutex FUNCTION STUBS ========
 */

/* query__E */
xdc_Bool ti_sysbios_gates_GateMutex_query__E( xdc_Int qual ) 
{
    return ti_sysbios_gates_GateMutex_query__F(qual);
}


/*
 * ======== ti.sysbios.hal.Hwi FUNCTION STUBS ========
 */

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth ) 
{
    return ti_sysbios_hal_Hwi_getStackInfo__F(stkInfo, computeStackDepth);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Hwi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Hwi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_hal_Timer_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_hal_Timer_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Clock_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Clock_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Swi_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Swi_Module_startup__F(state);
}

/* Module_startup */
xdc_Int ti_sysbios_knl_Task_Module_startup__E( xdc_Int state )
{
    return ti_sysbios_knl_Task_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Diags FUNCTION STUBS ========
 */

/* setMask__E */
xdc_Void xdc_runtime_Diags_setMask__E( xdc_String control ) 
{
    xdc_runtime_Diags_setMask__F(control);
}


/*
 * ======== xdc.runtime.Error FUNCTION STUBS ========
 */

/* check__E */
xdc_Bool xdc_runtime_Error_check__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_check__F(eb);
}

/* getData__E */
xdc_runtime_Error_Data* xdc_runtime_Error_getData__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getData__F(eb);
}

/* getCode__E */
xdc_UInt16 xdc_runtime_Error_getCode__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getCode__F(eb);
}

/* getId__E */
xdc_runtime_Error_Id xdc_runtime_Error_getId__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getId__F(eb);
}

/* getMsg__E */
xdc_String xdc_runtime_Error_getMsg__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getMsg__F(eb);
}

/* getSite__E */
xdc_runtime_Types_Site* xdc_runtime_Error_getSite__E( xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Error_getSite__F(eb);
}

/* init__E */
xdc_Void xdc_runtime_Error_init__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_init__F(eb);
}

/* print__E */
xdc_Void xdc_runtime_Error_print__E( xdc_runtime_Error_Block* eb ) 
{
    xdc_runtime_Error_print__F(eb);
}

/* raiseX__E */
xdc_Void xdc_runtime_Error_raiseX__E( xdc_runtime_Error_Block* eb, xdc_runtime_Types_ModuleId mod, xdc_String file, xdc_Int line, xdc_runtime_Error_Id id, xdc_IArg arg1, xdc_IArg arg2 ) 
{
    xdc_runtime_Error_raiseX__F(eb, mod, file, line, id, arg1, arg2);
}


/*
 * ======== xdc.runtime.Gate FUNCTION STUBS ========
 */

/* enterSystem__E */
xdc_IArg xdc_runtime_Gate_enterSystem__E( void ) 
{
    return xdc_runtime_Gate_enterSystem__F();
}

/* leaveSystem__E */
xdc_Void xdc_runtime_Gate_leaveSystem__E( xdc_IArg key ) 
{
    xdc_runtime_Gate_leaveSystem__F(key);
}


/*
 * ======== xdc.runtime.Log FUNCTION STUBS ========
 */

/* doPrint__E */
xdc_Void xdc_runtime_Log_doPrint__E( xdc_runtime_Log_EventRec* evRec ) 
{
    xdc_runtime_Log_doPrint__F(evRec);
}


/*
 * ======== xdc.runtime.Memory FUNCTION STUBS ========
 */

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_alloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_alloc__F(heap, size, align, eb);
}

/* calloc__E */
xdc_Ptr xdc_runtime_Memory_calloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_calloc__F(heap, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_free__E( xdc_runtime_IHeap_Handle heap, xdc_Ptr block, xdc_SizeT size ) 
{
    xdc_runtime_Memory_free__F(heap, block, size);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_getStats__E( xdc_runtime_IHeap_Handle heap, xdc_runtime_Memory_Stats* stats ) 
{
    xdc_runtime_Memory_getStats__F(heap, stats);
}

/* query__E */
xdc_Bool xdc_runtime_Memory_query__E( xdc_runtime_IHeap_Handle heap, xdc_Int qual ) 
{
    return xdc_runtime_Memory_query__F(heap, qual);
}

/* getMaxDefaultTypeAlign__E */
xdc_SizeT xdc_runtime_Memory_getMaxDefaultTypeAlign__E( void ) 
{
    return xdc_runtime_Memory_getMaxDefaultTypeAlign__F();
}

/* valloc__E */
xdc_Ptr xdc_runtime_Memory_valloc__E( xdc_runtime_IHeap_Handle heap, xdc_SizeT size, xdc_SizeT align, xdc_Char value, xdc_runtime_Error_Block* eb ) 
{
    return xdc_runtime_Memory_valloc__F(heap, size, align, value, eb);
}


/*
 * ======== xdc.runtime.Registry FUNCTION STUBS ========
 */

/* addModule__E */
xdc_runtime_Registry_Result xdc_runtime_Registry_addModule__E( xdc_runtime_Registry_Desc* desc, xdc_String modName ) 
{
    return xdc_runtime_Registry_addModule__F(desc, modName);
}

/* findByName__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByName__E( xdc_String modName ) 
{
    return xdc_runtime_Registry_findByName__F(modName);
}

/* findByNamePattern__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findByNamePattern__E( xdc_String namePat, xdc_Int len, xdc_runtime_Registry_Desc* prev ) 
{
    return xdc_runtime_Registry_findByNamePattern__F(namePat, len, prev);
}

/* findById__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_findById__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_findById__F(mid);
}

/* getMask__E */
xdc_Bool xdc_runtime_Registry_getMask__E( xdc_String name, xdc_runtime_Types_DiagsMask* mask ) 
{
    return xdc_runtime_Registry_getMask__F(name, mask);
}

/* isMember__E */
xdc_Bool xdc_runtime_Registry_isMember__E( xdc_runtime_Types_ModuleId mid ) 
{
    return xdc_runtime_Registry_isMember__F(mid);
}

/* getNextModule__E */
xdc_runtime_Registry_Desc* xdc_runtime_Registry_getNextModule__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getNextModule__F(desc);
}

/* getModuleName__E */
xdc_String xdc_runtime_Registry_getModuleName__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleName__F(desc);
}

/* getModuleId__E */
xdc_runtime_Types_ModuleId xdc_runtime_Registry_getModuleId__E( xdc_runtime_Registry_Desc* desc ) 
{
    return xdc_runtime_Registry_getModuleId__F(desc);
}


/*
 * ======== xdc.runtime.Startup FUNCTION STUBS ========
 */

/* exec__E */
xdc_Void xdc_runtime_Startup_exec__E( void ) 
{
    xdc_runtime_Startup_exec__F();
}

/* rtsDone__E */
xdc_Bool xdc_runtime_Startup_rtsDone__E( void ) 
{
    return xdc_runtime_Startup_rtsDone__F();
}


/*
 * ======== xdc.runtime.SysMin FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_SysMin_abort__E( xdc_String str ) 
{
    xdc_runtime_SysMin_abort__F(str);
}

/* exit__E */
xdc_Void xdc_runtime_SysMin_exit__E( xdc_Int stat ) 
{
    xdc_runtime_SysMin_exit__F(stat);
}

/* flush__E */
xdc_Void xdc_runtime_SysMin_flush__E( void ) 
{
    xdc_runtime_SysMin_flush__F();
}

/* putch__E */
xdc_Void xdc_runtime_SysMin_putch__E( xdc_Char ch ) 
{
    xdc_runtime_SysMin_putch__F(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_SysMin_ready__E( void ) 
{
    return xdc_runtime_SysMin_ready__F();
}

/* Module_startup */
xdc_Int xdc_runtime_SysMin_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_SysMin_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* abort__E */
xdc_Void xdc_runtime_System_abort__E( xdc_String str ) 
{
    xdc_runtime_System_abort__F(str);
}

/* atexit__E */
xdc_Bool xdc_runtime_System_atexit__E( xdc_runtime_System_AtexitHandler handler ) 
{
    return xdc_runtime_System_atexit__F(handler);
}

/* exit__E */
xdc_Void xdc_runtime_System_exit__E( xdc_Int stat ) 
{
    xdc_runtime_System_exit__F(stat);
}

/* putch__E */
xdc_Void xdc_runtime_System_putch__E( xdc_Char ch ) 
{
    xdc_runtime_System_putch__F(ch);
}

/* flush__E */
xdc_Void xdc_runtime_System_flush__E( void ) 
{
    xdc_runtime_System_flush__F();
}

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_String fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_String fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* vprintf__E */
xdc_Int xdc_runtime_System_vprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vprintf__F(fmt, va);
}

/* avprintf__E */
xdc_Int xdc_runtime_System_avprintf__E( xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avprintf__F(fmt, va);
}

/* vsprintf__E */
xdc_Int xdc_runtime_System_vsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_vsprintf__F(buf, fmt, va);
}

/* avsprintf__E */
xdc_Int xdc_runtime_System_avsprintf__E( xdc_Char buf[], xdc_String fmt, xdc_VaList va ) 
{
    return xdc_runtime_System_avsprintf__F(buf, fmt, va);
}

/* Module_startup */
xdc_Int xdc_runtime_System_Module_startup__E( xdc_Int state )
{
    return xdc_runtime_System_Module_startup__F(state);
}


/*
 * ======== xdc.runtime.Text FUNCTION STUBS ========
 */

/* cordText__E */
xdc_String xdc_runtime_Text_cordText__E( xdc_runtime_Text_CordAddr cord ) 
{
    return xdc_runtime_Text_cordText__F(cord);
}

/* ropeText__E */
xdc_String xdc_runtime_Text_ropeText__E( xdc_runtime_Text_RopeId rope ) 
{
    return xdc_runtime_Text_ropeText__F(rope);
}

/* matchRope__E */
xdc_Int xdc_runtime_Text_matchRope__E( xdc_runtime_Text_RopeId rope, xdc_String pat, xdc_Int* lenp ) 
{
    return xdc_runtime_Text_matchRope__F(rope, pat, lenp);
}

/* putLab__E */
xdc_Int xdc_runtime_Text_putLab__E( xdc_runtime_Types_Label* lab, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putLab__F(lab, bufp, len);
}

/* putMod__E */
xdc_Int xdc_runtime_Text_putMod__E( xdc_runtime_Types_ModuleId mid, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putMod__F(mid, bufp, len);
}

/* putSite__E */
xdc_Int xdc_runtime_Text_putSite__E( xdc_runtime_Types_Site* site, xdc_Char** bufp, xdc_Int len ) 
{
    return xdc_runtime_Text_putSite__F(site, bufp, len);
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_BIOS_RtsGateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_msp430_Hwi_Object__create__S(oa, osz, aa, (ti_sysbios_family_msp430_Hwi___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_IHwi_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_msp430_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_msp430_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_msp430_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo* stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_msp430_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_msp430_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_msp430_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_msp430_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_msp430_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_msp430_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_msp430_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char* ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_msp430_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_msp430_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_msp430_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_msp430_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_msp430_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_msp430_Hwi_getFunc((ti_sysbios_family_msp430_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_msp430_Hwi_setFunc((ti_sysbios_family_msp430_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_msp430_Hwi_getHookContext((ti_sysbios_family_msp430_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_msp430_Hwi_setHookContext((ti_sysbios_family_msp430_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Hwi_getIrp((ti_sysbios_family_msp430_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer_TimerProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_msp430_Timer_Object__create__S(oa, osz, aa, (ti_sysbios_family_msp430_Timer___ParamsPtr)pa, sizeof(ti_sysbios_interfaces_ITimer_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Timer_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_msp430_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Timer_TimerProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_msp430_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_TimerProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_family_msp430_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_msp430_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_hal_Timer_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_msp430_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_startup__E( void )
{
    ti_sysbios_family_msp430_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getMaxTicks__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 periodCounts )
{
    return ti_sysbios_family_msp430_Timer_getMaxTicks((ti_sysbios_family_msp430_Timer_Handle)__inst, periodCounts);
}

/* setNextTick__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setNextTick__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 newPeriod, xdc_UInt32 countsPerTick )
{
    ti_sysbios_family_msp430_Timer_setNextTick((ti_sysbios_family_msp430_Timer_Handle)__inst, newPeriod, countsPerTick);
}

/* start__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_start__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_msp430_Timer_start((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_stop__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    ti_sysbios_family_msp430_Timer_stop((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_msp430_Timer_setPeriod((ti_sysbios_family_msp430_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_msp430_Timer_setPeriodMicroSecs((ti_sysbios_family_msp430_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getPeriod__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getPeriod((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getCount__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getCount((ti_sysbios_family_msp430_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_getFreq__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz* freq )
{
    ti_sysbios_family_msp430_Timer_getFreq((ti_sysbios_family_msp430_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_hal_Timer_TimerProxy_getFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UArg* arg )
{
    return ti_sysbios_family_msp430_Timer_getFunc((ti_sysbios_family_msp430_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_setFunc__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_msp430_Timer_setFunc((ti_sysbios_family_msp430_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_hal_Timer_TimerProxy_trigger__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_msp430_Timer_trigger((ti_sysbios_family_msp430_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_hal_Timer_TimerProxy_getExpiredCounts__E( ti_sysbios_hal_Timer_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_msp430_Timer_getExpiredCounts((ti_sysbios_family_msp430_Timer_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateMutex_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateMutex___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_msp430_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.msp430.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_family_msp430_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr* oldtskContext, xdc_Ptr* newtskContext )
{
    ti_sysbios_family_msp430_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_msp430_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char* stack, xdc_SizeT size )
{
    return ti_sysbios_family_msp430_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_msp430_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_msp430_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Main_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(oa, osz, aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)pa, sizeof(xdc_runtime_IHeap_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_Memory_HeapProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block* eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats* stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    return ti_sysbios_gates_GateHwi_Object__create__S(oa, osz, aa, (ti_sysbios_gates_GateHwi___ParamsPtr)pa, sizeof(xdc_runtime_IGateProvider_Params), eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label* xdc_runtime_System_Module_GateProxy_Handle__label__S( Ptr obj, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_String str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== ti.sysbios.family.msp430.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_msp430_Hwi_Object2__ s0; char c; } ti_sysbios_family_msp430_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_msp430_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_msp430_Hwi___S1) - sizeof(ti_sysbios_family_msp430_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_msp430_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_msp430_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.family.msp430.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_msp430_Timer_Object2__ s0; char c; } ti_sysbios_family_msp430_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_msp430_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_msp430_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_msp430_Timer___S1) - sizeof(ti_sysbios_family_msp430_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_msp430_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_msp430_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_msp430_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.hal.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Timer_Object2__ s0; char c; } ti_sysbios_hal_Timer___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Timer___S1) - sizeof(ti_sysbios_hal_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Timer_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};



/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.msp430.ClockFreqs SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_ClockFreqs_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_msp430_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_msp430_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_msp430_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_msp430_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_msp430_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_msp430_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32787;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_msp430_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_msp430_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_family_msp430_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_msp430_Hwi_Object__*)ti_sysbios_family_msp430_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_msp430_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_msp430_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_msp430_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_msp430_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_msp430_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_msp430_Hwi_Params prms;
    ti_sysbios_family_msp430_Hwi_Object* obj;
    int iStat;

    ti_sysbios_family_msp430_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_msp430_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Hwi_Object__DESC__C, *((ti_sysbios_family_msp430_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_msp430_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_msp430_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.family.msp430.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_TaskSupport_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.family.msp430.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_msp430_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_msp430_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_msp430_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_msp430_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_msp430_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_msp430_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_msp430_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_msp430_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_family_msp430_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32790;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_msp430_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_msp430_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_family_msp430_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_family_msp430_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_msp430_Timer_Object__*)ti_sysbios_family_msp430_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_msp430_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_msp430_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_msp430_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_msp430_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_family_msp430_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_family_msp430_Timer_Params prms;
    ti_sysbios_family_msp430_Timer_Object* obj;
    int iStat;

    ti_sysbios_family_msp430_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_msp430_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_msp430_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_msp430_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_msp430_Timer_Object__DESC__C, *((ti_sysbios_family_msp430_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_msp430_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_family_msp430_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateHwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__*)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_gates_GateMutex_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32806;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__*)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__*)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32794;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__*)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Hwi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object* obj;
    int iStat;

    ti_sysbios_hal_Hwi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__F(obj, args->intNum, args->hwiFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.hal.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Timer_Module__startupDone__S( void ) 
{
    return ti_sysbios_hal_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_hal_Timer_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32795;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Timer_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_hal_Timer_Object__*)oa) + i;
    }

    if (ti_sysbios_hal_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Timer_Object__*)ti_sysbios_hal_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Timer_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_hal_Timer___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_hal_Timer_Params prms;
    ti_sysbios_hal_Timer_Object* obj;
    int iStat;

    ti_sysbios_hal_Timer_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Timer_Instance_init__F(obj, args->id, args->tickFxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Timer_Object__DESC__C, *((ti_sysbios_hal_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Timer_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_hal_Timer_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.hal.Timer_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Timer_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Timer_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Timer_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Timer_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Timer_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Timer_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Timer_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Timer_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Timer_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Timer_TimerProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_hal_Timer_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Timer_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_heaps_HeapMem_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32808;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__*)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__*)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Clock_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__*)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Clock___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object* obj;

    ti_sysbios_knl_Clock_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__F(obj, args->clockFxn, args->timeout, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Queue_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__*)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Queue___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object* obj;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__F(obj, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void ) 
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Semaphore_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__*)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object* obj;

    ti_sysbios_knl_Semaphore_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__F(obj, args->count, &prms);
    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__F, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Swi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32802;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__*)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Swi___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object* obj;
    int iStat;

    ti_sysbios_knl_Swi_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void ) 
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label* ti_sysbios_knl_Task_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab ) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S( xdc_Ptr oa, xdc_Int i ) 
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__*)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__*)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr oa,
    xdc_SizeT osz,
    const xdc_Ptr aa,
    const ti_sysbios_knl_Task___ParamsPtr pa,
    xdc_SizeT psz,
    xdc_runtime_Error_Block* eb )
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object* obj;
    int iStat;

    ti_sysbios_knl_Task_Args__create* args = aa;
    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, oa, osz, &prms, (xdc_Ptr)pa, psz, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__F(obj, args->fxn, &prms, eb);
    if (xdc_runtime_Error_check(eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, iStat, (xdc_Bool)(oa != NULL));
        return NULL;
    }

    return obj;
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__F, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void ) 
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query
xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */

xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void ) 
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#if __GNUC__ >= 4
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */


/*
 * ======== CONSTANTS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
asm("	.sect \".const:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_IModule_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
asm("	.sect \".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
asm("	.sect \".const:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_IGateProvider_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
asm("	.sect \".const:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_IHeap_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
asm("	.sect \".const:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_ISystemSupport_Interface__BASE__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__FXNS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Instance_State_sem__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module_State_clockQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
asm("	.sect \".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module_State_inactiveQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
asm("	.sect \".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module_State_terminatedQ__O\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_BIOS_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
asm("	.sect \".const:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
asm("	.sect \".const:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
asm("	.sect \".const:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_smpEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
asm("	.sect \".const:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_cpuFreq__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_taskEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_swiEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
asm("	.sect \".const:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_clockEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
asm("	.sect \".const:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_heapSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
asm("	.sect \".const:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_heapSection__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
asm("	.sect \".const:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_BIOS_installedErrorHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__id__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__count__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__heap__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_Object__table__C, ".const:ti_sysbios_family_msp430_ClockFreqs_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_ACLK__C, ".const:ti_sysbios_family_msp430_ClockFreqs_ACLK__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_ACLK__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_ACLK__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_ACLK__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_ClockFreqs_SMCLK__C, ".const:ti_sysbios_family_msp430_ClockFreqs_SMCLK__C");
asm("	.sect \".const:ti_sysbios_family_msp430_ClockFreqs_SMCLK__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_ClockFreqs_SMCLK__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_ClockFreqs_SMCLK__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__DESC__C, ".const:ti_sysbios_family_msp430_Hwi_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_Hwi_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_msp430_Hwi_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_Hwi_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__id__C, ".const:ti_sysbios_family_msp430_Hwi_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__count__C, ".const:ti_sysbios_family_msp430_Hwi_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__heap__C, ".const:ti_sysbios_family_msp430_Hwi_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_msp430_Hwi_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_Object__table__C, ".const:ti_sysbios_family_msp430_Hwi_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_NUM_INTERRUPTS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_LM_begin__C, ".const:ti_sysbios_family_msp430_Hwi_LM_begin__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_LM_begin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_LD_end__C, ".const:ti_sysbios_family_msp430_Hwi_LD_end__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_LD_end__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_A_unsupportedMaskingOption__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_E_alreadyDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_E_notImplemented__C, ".const:ti_sysbios_family_msp430_Hwi_E_notImplemented__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_E_notImplemented__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_E_notImplemented__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_E_notImplemented__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Hwi_hooks__C, ".const:ti_sysbios_family_msp430_Hwi_hooks__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Hwi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Hwi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Hwi_hooks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_IntrinsicsSupport_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__id__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__count__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_Object__table__C, ".const:ti_sysbios_family_msp430_TaskSupport_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_defaultStackSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_msp430_TaskSupport_stackAlignment__C");
asm("	.sect \".const:ti_sysbios_family_msp430_TaskSupport_stackAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_TaskSupport_stackAlignment__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_TaskSupport_stackAlignment__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__DESC__C, ".const:ti_sysbios_family_msp430_Timer_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_msp430_Timer_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__gateObj__C, ".const:ti_sysbios_family_msp430_Timer_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_msp430_Timer_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__id__C, ".const:ti_sysbios_family_msp430_Timer_Module__id__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__count__C, ".const:ti_sysbios_family_msp430_Timer_Object__count__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__heap__C, ".const:ti_sysbios_family_msp430_Timer_Object__heap__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__sizeof__C, ".const:ti_sysbios_family_msp430_Timer_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_Object__table__C, ".const:ti_sysbios_family_msp430_Timer_Object__table__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_msp430_Timer_E_invalidTimer__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_E_invalidTimer__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_E_invalidTimer__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_E_invalidTimer__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_notAvailable__C, ".const:ti_sysbios_family_msp430_Timer_E_notAvailable__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_E_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_E_notAvailable__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_E_notAvailable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_msp430_Timer_E_cannotSupport__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_E_cannotSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_E_cannotSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_E_cannotSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_E_runtimeCreate__C, ".const:ti_sysbios_family_msp430_Timer_E_runtimeCreate__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_E_runtimeCreate__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_E_runtimeCreate__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_E_runtimeCreate__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_anyMask__C, ".const:ti_sysbios_family_msp430_Timer_anyMask__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_anyMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_anyMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_anyMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_keepAwake__C, ".const:ti_sysbios_family_msp430_Timer_keepAwake__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_keepAwake__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_keepAwake__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_keepAwake__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_startupNeeded__C, ".const:ti_sysbios_family_msp430_Timer_startupNeeded__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_startupNeeded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_startupNeeded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_startupNeeded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_family_msp430_Timer_numTimerDevices__C, ".const:ti_sysbios_family_msp430_Timer_numTimerDevices__C");
asm("	.sect \".const:ti_sysbios_family_msp430_Timer_numTimerDevices__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_family_msp430_Timer_numTimerDevices__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_family_msp430_Timer_numTimerDevices__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
asm("	.sect \".const:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateHwi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
asm("	.sect \".const:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_gates_GateMutex_A_badContext__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
asm("	.sect \".const:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Hwi_E_stackOverflow__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__DESC__C, ".const:ti_sysbios_hal_Timer_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__PARAMS__C, ".const:ti_sysbios_hal_Timer_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__diagsMask__C, ".const:ti_sysbios_hal_Timer_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gateObj__C, ".const:ti_sysbios_hal_Timer_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__gatePrms__C, ".const:ti_sysbios_hal_Timer_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__id__C, ".const:ti_sysbios_hal_Timer_Module__id__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerDefined__C, ".const:ti_sysbios_hal_Timer_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerObj__C, ".const:ti_sysbios_hal_Timer_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__count__C, ".const:ti_sysbios_hal_Timer_Object__count__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__heap__C, ".const:ti_sysbios_hal_Timer_Object__heap__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__sizeof__C, ".const:ti_sysbios_hal_Timer_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_hal_Timer_Object__table__C, ".const:ti_sysbios_hal_Timer_Object__table__C");
asm("	.sect \".const:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_hal_Timer_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_A_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_A_heapSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_A_heapSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_A_align__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_A_align__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_A_align__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_E_memory__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_A_invalidFree__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_A_invalidFree__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_reqAlign__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_reqAlign__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_reqAlign__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlignMask__C, ".const:ti_sysbios_heaps_HeapMem_reqAlignMask__C");
asm("	.sect \".const:ti_sysbios_heaps_HeapMem_reqAlignMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_heaps_HeapMem_reqAlignMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_heaps_HeapMem_reqAlignMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_LW_delayed__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_LM_tick__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_LM_begin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_A_clockDisabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_A_badThreadType__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_tickSource__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_tickMode__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_timerId__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
asm("	.sect \".const:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Clock_tickPeriod__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
asm("	.sect \".const:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_funcList__A\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
asm("	.sect \".const:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Idle_funcList__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Intrinsics_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Queue_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_LM_post__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_LM_pend__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_A_noEvents__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_A_invTimeout__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_A_badContext__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_supportsEvents__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_eventPost__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
asm("	.sect \".const:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Semaphore_eventSync__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_LM_begin__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_LD_end__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_LM_post__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_A_swiDisabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_A_badPriority__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_numPriorities__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_hooks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_taskDisable__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_taskRestore__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
asm("	.sect \".const:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Swi_numConstructedSwis__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__DESC__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__PARAMS__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
asm("	.sect \".const:ti_sysbios_knl_Task_hooks__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_hooks__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_hooks__A\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
asm("	.sect \".const:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_switch__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_sleep__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LD_ready__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LD_block__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_yield__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LM_setPri__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
asm("	.sect \".const:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_LD_exit__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
asm("	.sect \".const:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_E_stackOverflow__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
asm("	.sect \".const:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_E_spOutOfBounds__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_badThreadType__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_badTaskState__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_noPendElem__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_taskDisabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_badPriority__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
asm("	.sect \".const:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_A_badTimeout__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
asm("	.sect \".const:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_numPriorities__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
asm("	.sect \".const:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_defaultStackSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
asm("	.sect \".const:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_defaultStackHeap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
asm("	.sect \".const:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_allBlockedFunc__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
asm("	.sect \".const:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_initStackFlag__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
asm("	.sect \".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_deleteTerminatedTasks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
asm("	.sect \".const:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_hooks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
asm("	.sect \".const:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:ti_sysbios_knl_Task_numConstructedTasks__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Assert_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
asm("	.sect \".const:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
asm("	.sect \".const:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
asm("	.sect \".const:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Assert_E_assertFailed__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
asm("	.sect \".const:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Core_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
asm("	.sect \".const:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
asm("	.sect \".const:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
asm("	.sect \".const:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Core_A_initializedParams__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Defaults_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
asm("	.sect \".const:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
asm("	.sect \".const:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Defaults_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Diags_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
asm("	.sect \".const:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
asm("	.sect \".const:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
asm("	.sect \".const:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_setMaskEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
asm("	.sect \".const:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Diags_dictBase__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
asm("	.sect \".const:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Error_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
asm("	.sect \".const:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
asm("	.sect \".const:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
asm("	.sect \".const:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_E_generic__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
asm("	.sect \".const:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_E_memory__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
asm("	.sect \".const:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_E_msgCode__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
asm("	.sect \".const:xdc_runtime_Error_policy__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_policy__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_policy__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
asm("	.sect \".const:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_raiseHook__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
asm("	.sect \".const:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Error_maxDepth__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Gate_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
asm("	.sect \".const:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
asm("	.sect \".const:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Gate_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
asm("	.sect \".const:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Log_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
asm("	.sect \".const:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
asm("	.sect \".const:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
asm("	.sect \".const:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_construct__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
asm("	.sect \".const:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_create__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
asm("	.sect \".const:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_destruct__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
asm("	.sect \".const:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_delete__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
asm("	.sect \".const:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_error__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
asm("	.sect \".const:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_warning__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
asm("	.sect \".const:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_info__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
asm("	.sect \".const:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_start__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
asm("	.sect \".const:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_stop__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
asm("	.sect \".const:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_startInstance__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
asm("	.sect \".const:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Log_L_stopInstance__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
asm("	.sect \".const:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Main_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
asm("	.sect \".const:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
asm("	.sect \".const:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Main_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Memory_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
asm("	.sect \".const:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
asm("	.sect \".const:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
asm("	.sect \".const:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Memory_defaultHeapInstance__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Registry_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
asm("	.sect \".const:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
asm("	.sect \".const:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Registry_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
asm("	.sect \".const:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_firstFxns__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
asm("	.sect \".const:xdc_runtime_Startup_lastFxns__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_lastFxns__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_lastFxns__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
asm("	.sect \".const:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_sfxnTab__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
asm("	.sect \".const:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_sfxnRts__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Startup_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
asm("	.sect \".const:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
asm("	.sect \".const:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
asm("	.sect \".const:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_maxPasses__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
asm("	.sect \".const:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_firstFxns__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
asm("	.sect \".const:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_lastFxns__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
asm("	.sect \".const:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_startModsFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
asm("	.sect \".const:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_execImpl__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
asm("	.sect \".const:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_sfxnTab__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
asm("	.sect \".const:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Startup_sfxnRts__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_SysMin_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
asm("	.sect \".const:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
asm("	.sect \".const:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
asm("	.sect \".const:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
asm("	.sect \".const:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_bufSize__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
asm("	.sect \".const:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_flushAtExit__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
asm("	.sect \".const:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_outputFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
asm("	.sect \".const:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_SysMin_outputFunc__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
asm("	.sect \".const:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_System_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
asm("	.sect \".const:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
asm("	.sect \".const:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
asm("	.sect \".const:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
asm("	.sect \".const:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_A_cannotFitIntoArg__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
asm("	.sect \".const:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_maxAtexitHandlers__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
asm("	.sect \".const:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_System_extendFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
asm("	.sect \".const:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_charTab__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
asm("	.sect \".const:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nodeTab__A\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
asm("	.sect \".const:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__diagsEnabled__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
asm("	.sect \".const:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__diagsIncluded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
asm("	.sect \".const:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__diagsMask__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
asm("	.sect \".const:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__gateObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
asm("	.sect \".const:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__gatePrms__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
asm("	.sect \".const:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__id__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerDefined__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerObj__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn0__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn1__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn2__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn4__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
asm("	.sect \".const:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__loggerFxn8__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
asm("	.sect \".const:xdc_runtime_Text_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Module__startupDoneFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Module__startupDoneFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
asm("	.sect \".const:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Object__count__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
asm("	.sect \".const:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Object__heap__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
asm("	.sect \".const:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Object__sizeof__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
asm("	.sect \".const:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_Object__table__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
asm("	.sect \".const:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nameUnknown__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
asm("	.sect \".const:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nameEmpty__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
asm("	.sect \".const:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nameStatic__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
asm("	.sect \".const:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_isLoaded__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
asm("	.sect \".const:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_charTab__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
asm("	.sect \".const:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nodeTab__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
asm("	.sect \".const:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_charCnt__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
asm("	.sect \".const:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_nodeCnt__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
asm("	.sect \".const:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_unnamedModsLastId__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
asm("	.sect \".const:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_registryModsLastId__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
asm("	.sect \".const:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_visitRopeFxn__C\"");
asm("	.clink ");

#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
asm("	.sect \".const:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[0].const:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");
asm("	.sect \"[1].const:xdc_runtime_Text_visitRopeFxn2__C\"");
asm("	.clink ");

