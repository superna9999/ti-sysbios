/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     FUNCTION SELECTORS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sysbios_syncs_SyncSwi__include
#define ti_sysbios_syncs_SyncSwi__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_syncs_SyncSwi__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sysbios_syncs_SyncSwi___VERS 150


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sysbios/syncs/package/package.defs.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/knl/ISync.h>
#include <ti/sysbios/knl/Swi.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* WaitStatus */
typedef xdc_runtime_knl_ISync_WaitStatus ti_sysbios_syncs_SyncSwi_WaitStatus;

/* Q_BLOCKING */
#define ti_sysbios_syncs_SyncSwi_Q_BLOCKING (1)

/* WAIT_FOREVER */
#define ti_sysbios_syncs_SyncSwi_WAIT_FOREVER (~(0))

/* NO_WAIT */
#define ti_sysbios_syncs_SyncSwi_NO_WAIT (0)

/* WaitStatus_ERROR */
#define ti_sysbios_syncs_SyncSwi_WaitStatus_ERROR xdc_runtime_knl_ISync_WaitStatus_ERROR

/* WaitStatus_TIMEOUT */
#define ti_sysbios_syncs_SyncSwi_WaitStatus_TIMEOUT xdc_runtime_knl_ISync_WaitStatus_TIMEOUT

/* WaitStatus_SUCCESS */
#define ti_sysbios_syncs_SyncSwi_WaitStatus_SUCCESS xdc_runtime_knl_ISync_WaitStatus_SUCCESS


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_syncs_SyncSwi_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__diagsEnabled ti_sysbios_syncs_SyncSwi_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_syncs_SyncSwi_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__diagsIncluded ti_sysbios_syncs_SyncSwi_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16* CT__ti_sysbios_syncs_SyncSwi_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__diagsMask ti_sysbios_syncs_SyncSwi_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_syncs_SyncSwi_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__gateObj ti_sysbios_syncs_SyncSwi_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_syncs_SyncSwi_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__gatePrms ti_sysbios_syncs_SyncSwi_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_syncs_SyncSwi_Module__id;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__id ti_sysbios_syncs_SyncSwi_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_syncs_SyncSwi_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__loggerDefined ti_sysbios_syncs_SyncSwi_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_syncs_SyncSwi_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__loggerObj ti_sysbios_syncs_SyncSwi_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn0 ti_sysbios_syncs_SyncSwi_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn1 ti_sysbios_syncs_SyncSwi_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn2 ti_sysbios_syncs_SyncSwi_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn4 ti_sysbios_syncs_SyncSwi_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__loggerFxn8 ti_sysbios_syncs_SyncSwi_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sysbios_syncs_SyncSwi_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Module__startupDoneFxn ti_sysbios_syncs_SyncSwi_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sysbios_syncs_SyncSwi_Object__count;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Object__count ti_sysbios_syncs_SyncSwi_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_syncs_SyncSwi_Object__heap;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Object__heap ti_sysbios_syncs_SyncSwi_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_syncs_SyncSwi_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Object__sizeof ti_sysbios_syncs_SyncSwi_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_syncs_SyncSwi_Object__table;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_Object__table ti_sysbios_syncs_SyncSwi_Object__table__C;

/* A_nullHandle */
#define ti_sysbios_syncs_SyncSwi_A_nullHandle (ti_sysbios_syncs_SyncSwi_A_nullHandle__C)
typedef xdc_runtime_Assert_Id CT__ti_sysbios_syncs_SyncSwi_A_nullHandle;
__extern __FAR__ const CT__ti_sysbios_syncs_SyncSwi_A_nullHandle ti_sysbios_syncs_SyncSwi_A_nullHandle__C;


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sysbios_syncs_SyncSwi_Params {
    size_t __size;
    const void* __self;
    void* __fxns;
    xdc_runtime_IInstance_Params* instance;
    ti_sysbios_knl_Swi_Handle swi;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sysbios_syncs_SyncSwi_Struct {
    const ti_sysbios_syncs_SyncSwi_Fxns__* __fxns;
    ti_sysbios_knl_Swi_Handle __f0;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sysbios_syncs_SyncSwi_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Bool (*query)(ti_sysbios_syncs_SyncSwi_Handle, xdc_Int);
    xdc_Void (*signal)(ti_sysbios_syncs_SyncSwi_Handle);
    xdc_Int (*wait)(ti_sysbios_syncs_SyncSwi_Handle, xdc_UInt, xdc_runtime_Error_Block*);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sysbios_syncs_SyncSwi_Fxns__ ti_sysbios_syncs_SyncSwi_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_syncs_SyncSwi_Module_startup( state ) -1

/* Instance_init__F */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Instance_init__F, "ti_sysbios_syncs_SyncSwi_Instance_init")
__extern void ti_sysbios_syncs_SyncSwi_Instance_init__F( ti_sysbios_syncs_SyncSwi_Object*, const ti_sysbios_syncs_SyncSwi_Params* );

/* Instance_init__R */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Instance_init__R, "ti_sysbios_syncs_SyncSwi_Instance_init")
__extern void ti_sysbios_syncs_SyncSwi_Instance_init__R( ti_sysbios_syncs_SyncSwi_Object*, const ti_sysbios_syncs_SyncSwi_Params* );

/* Handle__label__S */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Handle__label__S, "ti_sysbios_syncs_SyncSwi_Handle__label")
__extern xdc_runtime_Types_Label* ti_sysbios_syncs_SyncSwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label* lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Module__startupDone__S, "ti_sysbios_syncs_SyncSwi_Module__startupDone")
__extern xdc_Bool ti_sysbios_syncs_SyncSwi_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Object__create__S, "ti_sysbios_syncs_SyncSwi_Object__create")
__extern xdc_Ptr ti_sysbios_syncs_SyncSwi_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar* __pa, xdc_SizeT __psz, xdc_runtime_Error_Block* __eb );

/* Object__delete__S */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Object__delete__S, "ti_sysbios_syncs_SyncSwi_Object__delete")
__extern xdc_Void ti_sysbios_syncs_SyncSwi_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Object__destruct__S, "ti_sysbios_syncs_SyncSwi_Object__destruct")
__extern xdc_Void ti_sysbios_syncs_SyncSwi_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Object__get__S, "ti_sysbios_syncs_SyncSwi_Object__get")
__extern xdc_Ptr ti_sysbios_syncs_SyncSwi_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Object__first__S, "ti_sysbios_syncs_SyncSwi_Object__first")
__extern xdc_Ptr ti_sysbios_syncs_SyncSwi_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Object__next__S, "ti_sysbios_syncs_SyncSwi_Object__next")
__extern xdc_Ptr ti_sysbios_syncs_SyncSwi_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_Params__init__S, "ti_sysbios_syncs_SyncSwi_Params__init")
__extern xdc_Void ti_sysbios_syncs_SyncSwi_Params__init__S( xdc_Ptr dst, xdc_Ptr src, xdc_SizeT psz, xdc_SizeT isz );

/* query__E */
#define ti_sysbios_syncs_SyncSwi_query ti_sysbios_syncs_SyncSwi_query__E
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_query__E, "ti_sysbios_syncs_SyncSwi_query")
__extern xdc_Bool ti_sysbios_syncs_SyncSwi_query__E( ti_sysbios_syncs_SyncSwi_Handle __inst, xdc_Int qual );
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_query__F, "ti_sysbios_syncs_SyncSwi_query")
__extern xdc_Bool ti_sysbios_syncs_SyncSwi_query__F( ti_sysbios_syncs_SyncSwi_Object* __inst, xdc_Int qual );
__extern xdc_Bool ti_sysbios_syncs_SyncSwi_query__R( ti_sysbios_syncs_SyncSwi_Handle __inst, xdc_Int qual );

/* signal__E */
#define ti_sysbios_syncs_SyncSwi_signal ti_sysbios_syncs_SyncSwi_signal__E
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_signal__E, "ti_sysbios_syncs_SyncSwi_signal")
__extern xdc_Void ti_sysbios_syncs_SyncSwi_signal__E( ti_sysbios_syncs_SyncSwi_Handle __inst );
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_signal__F, "ti_sysbios_syncs_SyncSwi_signal")
__extern xdc_Void ti_sysbios_syncs_SyncSwi_signal__F( ti_sysbios_syncs_SyncSwi_Object* __inst );
__extern xdc_Void ti_sysbios_syncs_SyncSwi_signal__R( ti_sysbios_syncs_SyncSwi_Handle __inst );

/* wait__E */
#define ti_sysbios_syncs_SyncSwi_wait ti_sysbios_syncs_SyncSwi_wait__E
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_wait__E, "ti_sysbios_syncs_SyncSwi_wait")
__extern xdc_Int ti_sysbios_syncs_SyncSwi_wait__E( ti_sysbios_syncs_SyncSwi_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb );
xdc__CODESECT(ti_sysbios_syncs_SyncSwi_wait__F, "ti_sysbios_syncs_SyncSwi_wait")
__extern xdc_Int ti_sysbios_syncs_SyncSwi_wait__F( ti_sysbios_syncs_SyncSwi_Object* __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb );
__extern xdc_Int ti_sysbios_syncs_SyncSwi_wait__R( ti_sysbios_syncs_SyncSwi_Handle __inst, xdc_UInt timeout, xdc_runtime_Error_Block* eb );


/*
 * ======== FUNCTION SELECTORS ========
 */

/* query_{FxnT,fxnP} */
typedef xdc_Bool (*ti_sysbios_syncs_SyncSwi_query_FxnT)(void*, xdc_Int);
static inline ti_sysbios_syncs_SyncSwi_query_FxnT ti_sysbios_syncs_SyncSwi_query_fxnP( void )
{
    return (ti_sysbios_syncs_SyncSwi_query_FxnT)ti_sysbios_syncs_SyncSwi_query; 
}

/* signal_{FxnT,fxnP} */
typedef xdc_Void (*ti_sysbios_syncs_SyncSwi_signal_FxnT)(void*);
static inline ti_sysbios_syncs_SyncSwi_signal_FxnT ti_sysbios_syncs_SyncSwi_signal_fxnP( void )
{
    return (ti_sysbios_syncs_SyncSwi_signal_FxnT)ti_sysbios_syncs_SyncSwi_signal; 
}

/* wait_{FxnT,fxnP} */
typedef xdc_Int (*ti_sysbios_syncs_SyncSwi_wait_FxnT)(void*, xdc_UInt, xdc_runtime_Error_Block*);
static inline ti_sysbios_syncs_SyncSwi_wait_FxnT ti_sysbios_syncs_SyncSwi_wait_fxnP( void )
{
    return (ti_sysbios_syncs_SyncSwi_wait_FxnT)ti_sysbios_syncs_SyncSwi_wait; 
}


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline xdc_runtime_knl_ISync_Module ti_sysbios_syncs_SyncSwi_Module_upCast( void )
{
    return (xdc_runtime_knl_ISync_Module)&ti_sysbios_syncs_SyncSwi_Module__FXNS__C;
}

/* Module_to_xdc_runtime_knl_ISync */
#define ti_sysbios_syncs_SyncSwi_Module_to_xdc_runtime_knl_ISync ti_sysbios_syncs_SyncSwi_Module_upCast

/* Handle_upCast */
static inline xdc_runtime_knl_ISync_Handle ti_sysbios_syncs_SyncSwi_Handle_upCast( ti_sysbios_syncs_SyncSwi_Handle i )
{
    return (xdc_runtime_knl_ISync_Handle)i;
}

/* Handle_to_xdc_runtime_knl_ISync */
#define ti_sysbios_syncs_SyncSwi_Handle_to_xdc_runtime_knl_ISync ti_sysbios_syncs_SyncSwi_Handle_upCast

/* Handle_downCast */
static inline ti_sysbios_syncs_SyncSwi_Handle ti_sysbios_syncs_SyncSwi_Handle_downCast( xdc_runtime_knl_ISync_Handle i )
{
    xdc_runtime_knl_ISync_Handle i2 = (xdc_runtime_knl_ISync_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sysbios_syncs_SyncSwi_Module__FXNS__C ? (ti_sysbios_syncs_SyncSwi_Handle)i : 0;
}

/* Handle_from_xdc_runtime_knl_ISync */
#define ti_sysbios_syncs_SyncSwi_Handle_from_xdc_runtime_knl_ISync ti_sysbios_syncs_SyncSwi_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_syncs_SyncSwi_Module_startupDone() ti_sysbios_syncs_SyncSwi_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_syncs_SyncSwi_Object_heap() ti_sysbios_syncs_SyncSwi_Object__heap__C

/* Module_heap */
#define ti_sysbios_syncs_SyncSwi_Module_heap() ti_sysbios_syncs_SyncSwi_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_syncs_SyncSwi_Module__id ti_sysbios_syncs_SyncSwi_Module_id( void ) 
{
    return ti_sysbios_syncs_SyncSwi_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sysbios_syncs_SyncSwi_Module_hasMask( void ) 
{
    return ti_sysbios_syncs_SyncSwi_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sysbios_syncs_SyncSwi_Module_getMask( void ) 
{
    return ti_sysbios_syncs_SyncSwi_Module__diagsMask__C != NULL ? *ti_sysbios_syncs_SyncSwi_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sysbios_syncs_SyncSwi_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sysbios_syncs_SyncSwi_Module__diagsMask__C != NULL) *ti_sysbios_syncs_SyncSwi_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sysbios_syncs_SyncSwi_Params_init( ti_sysbios_syncs_SyncSwi_Params* prms ) 
{
    if (prms) {
        ti_sysbios_syncs_SyncSwi_Params__init__S(prms, 0, sizeof(ti_sysbios_syncs_SyncSwi_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sysbios_syncs_SyncSwi_Params_copy( ti_sysbios_syncs_SyncSwi_Params* dst, const ti_sysbios_syncs_SyncSwi_Params* src ) 
{
    if (dst) {
        ti_sysbios_syncs_SyncSwi_Params__init__S(dst, (xdc_Ptr)src, sizeof(ti_sysbios_syncs_SyncSwi_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sysbios_syncs_SyncSwi_Object_count() ti_sysbios_syncs_SyncSwi_Object__count__C

/* Object_sizeof */
#define ti_sysbios_syncs_SyncSwi_Object_sizeof() ti_sysbios_syncs_SyncSwi_Object__sizeof__C

/* Object_get */
static inline ti_sysbios_syncs_SyncSwi_Handle ti_sysbios_syncs_SyncSwi_Object_get( ti_sysbios_syncs_SyncSwi_Instance_State* oarr, int i ) 
{
    return (ti_sysbios_syncs_SyncSwi_Handle)ti_sysbios_syncs_SyncSwi_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sysbios_syncs_SyncSwi_Handle ti_sysbios_syncs_SyncSwi_Object_first( void )
{
    return (ti_sysbios_syncs_SyncSwi_Handle)ti_sysbios_syncs_SyncSwi_Object__first__S();
}

/* Object_next */
static inline ti_sysbios_syncs_SyncSwi_Handle ti_sysbios_syncs_SyncSwi_Object_next( ti_sysbios_syncs_SyncSwi_Object* obj )
{
    return (ti_sysbios_syncs_SyncSwi_Handle)ti_sysbios_syncs_SyncSwi_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label* ti_sysbios_syncs_SyncSwi_Handle_label( ti_sysbios_syncs_SyncSwi_Handle inst, xdc_runtime_Types_Label* lab )
{
    return ti_sysbios_syncs_SyncSwi_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline String ti_sysbios_syncs_SyncSwi_Handle_name( ti_sysbios_syncs_SyncSwi_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sysbios_syncs_SyncSwi_Handle__label__S(inst, &lab)->iname;
}

/* create */
static inline ti_sysbios_syncs_SyncSwi_Handle ti_sysbios_syncs_SyncSwi_create( const ti_sysbios_syncs_SyncSwi_Params* __prms, xdc_runtime_Error_Block* __eb )
{
    return (ti_sysbios_syncs_SyncSwi_Handle)ti_sysbios_syncs_SyncSwi_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_syncs_SyncSwi_Params), __eb);
}

/* construct */
static inline void ti_sysbios_syncs_SyncSwi_construct( ti_sysbios_syncs_SyncSwi_Struct* __obj, const ti_sysbios_syncs_SyncSwi_Params* __prms )
{
    ti_sysbios_syncs_SyncSwi_Object__create__S(__obj, sizeof (ti_sysbios_syncs_SyncSwi_Struct), 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_syncs_SyncSwi_Params), NULL);
}

/* delete */
static inline void ti_sysbios_syncs_SyncSwi_delete( ti_sysbios_syncs_SyncSwi_Handle* instp )
{
    ti_sysbios_syncs_SyncSwi_Object__delete__S(instp);
}

/* destruct */
static inline void ti_sysbios_syncs_SyncSwi_destruct( ti_sysbios_syncs_SyncSwi_Struct* obj )
{
    ti_sysbios_syncs_SyncSwi_Object__destruct__S(obj);
}

/* handle */
static inline ti_sysbios_syncs_SyncSwi_Handle ti_sysbios_syncs_SyncSwi_handle( ti_sysbios_syncs_SyncSwi_Struct* str )
{
    return (ti_sysbios_syncs_SyncSwi_Handle)str;
}

/* struct */
static inline ti_sysbios_syncs_SyncSwi_Struct* ti_sysbios_syncs_SyncSwi_struct( ti_sysbios_syncs_SyncSwi_Handle inst )
{
    return (ti_sysbios_syncs_SyncSwi_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sysbios_syncs_SyncSwi__top__
#undef __nested__
#endif

#endif /* ti_sysbios_syncs_SyncSwi__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sysbios_syncs_SyncSwi__internalaccess))

#ifndef ti_sysbios_syncs_SyncSwi__include_state
#define ti_sysbios_syncs_SyncSwi__include_state

/* Object */
struct ti_sysbios_syncs_SyncSwi_Object {
    const ti_sysbios_syncs_SyncSwi_Fxns__* __fxns;
    ti_sysbios_knl_Swi_Handle swi;
};

#endif /* ti_sysbios_syncs_SyncSwi__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_syncs_SyncSwi__nolocalnames)

#ifndef ti_sysbios_syncs_SyncSwi__localnames__done
#define ti_sysbios_syncs_SyncSwi__localnames__done

/* module prefix */
#define SyncSwi_Instance ti_sysbios_syncs_SyncSwi_Instance
#define SyncSwi_Handle ti_sysbios_syncs_SyncSwi_Handle
#define SyncSwi_Module ti_sysbios_syncs_SyncSwi_Module
#define SyncSwi_Object ti_sysbios_syncs_SyncSwi_Object
#define SyncSwi_Struct ti_sysbios_syncs_SyncSwi_Struct
#define SyncSwi_WaitStatus ti_sysbios_syncs_SyncSwi_WaitStatus
#define SyncSwi_Q_BLOCKING ti_sysbios_syncs_SyncSwi_Q_BLOCKING
#define SyncSwi_WAIT_FOREVER ti_sysbios_syncs_SyncSwi_WAIT_FOREVER
#define SyncSwi_NO_WAIT ti_sysbios_syncs_SyncSwi_NO_WAIT
#define SyncSwi_Instance_State ti_sysbios_syncs_SyncSwi_Instance_State
#define SyncSwi_WaitStatus_ERROR ti_sysbios_syncs_SyncSwi_WaitStatus_ERROR
#define SyncSwi_WaitStatus_TIMEOUT ti_sysbios_syncs_SyncSwi_WaitStatus_TIMEOUT
#define SyncSwi_WaitStatus_SUCCESS ti_sysbios_syncs_SyncSwi_WaitStatus_SUCCESS
#define SyncSwi_A_nullHandle ti_sysbios_syncs_SyncSwi_A_nullHandle
#define SyncSwi_Params ti_sysbios_syncs_SyncSwi_Params
#define SyncSwi_query ti_sysbios_syncs_SyncSwi_query
#define SyncSwi_query_fxnP ti_sysbios_syncs_SyncSwi_query_fxnP
#define SyncSwi_query_FxnT ti_sysbios_syncs_SyncSwi_query_FxnT
#define SyncSwi_signal ti_sysbios_syncs_SyncSwi_signal
#define SyncSwi_signal_fxnP ti_sysbios_syncs_SyncSwi_signal_fxnP
#define SyncSwi_signal_FxnT ti_sysbios_syncs_SyncSwi_signal_FxnT
#define SyncSwi_wait ti_sysbios_syncs_SyncSwi_wait
#define SyncSwi_wait_fxnP ti_sysbios_syncs_SyncSwi_wait_fxnP
#define SyncSwi_wait_FxnT ti_sysbios_syncs_SyncSwi_wait_FxnT
#define SyncSwi_Module_name ti_sysbios_syncs_SyncSwi_Module_name
#define SyncSwi_Module_id ti_sysbios_syncs_SyncSwi_Module_id
#define SyncSwi_Module_startup ti_sysbios_syncs_SyncSwi_Module_startup
#define SyncSwi_Module_startupDone ti_sysbios_syncs_SyncSwi_Module_startupDone
#define SyncSwi_Module_hasMask ti_sysbios_syncs_SyncSwi_Module_hasMask
#define SyncSwi_Module_getMask ti_sysbios_syncs_SyncSwi_Module_getMask
#define SyncSwi_Module_setMask ti_sysbios_syncs_SyncSwi_Module_setMask
#define SyncSwi_Object_heap ti_sysbios_syncs_SyncSwi_Object_heap
#define SyncSwi_Module_heap ti_sysbios_syncs_SyncSwi_Module_heap
#define SyncSwi_construct ti_sysbios_syncs_SyncSwi_construct
#define SyncSwi_create ti_sysbios_syncs_SyncSwi_create
#define SyncSwi_handle ti_sysbios_syncs_SyncSwi_handle
#define SyncSwi_struct ti_sysbios_syncs_SyncSwi_struct
#define SyncSwi_Handle_label ti_sysbios_syncs_SyncSwi_Handle_label
#define SyncSwi_Handle_name ti_sysbios_syncs_SyncSwi_Handle_name
#define SyncSwi_Instance_init ti_sysbios_syncs_SyncSwi_Instance_init
#define SyncSwi_Object_count ti_sysbios_syncs_SyncSwi_Object_count
#define SyncSwi_Object_get ti_sysbios_syncs_SyncSwi_Object_get
#define SyncSwi_Object_first ti_sysbios_syncs_SyncSwi_Object_first
#define SyncSwi_Object_next ti_sysbios_syncs_SyncSwi_Object_next
#define SyncSwi_Object_sizeof ti_sysbios_syncs_SyncSwi_Object_sizeof
#define SyncSwi_Params_copy ti_sysbios_syncs_SyncSwi_Params_copy
#define SyncSwi_Params_init ti_sysbios_syncs_SyncSwi_Params_init
#define SyncSwi_delete ti_sysbios_syncs_SyncSwi_delete
#define SyncSwi_destruct ti_sysbios_syncs_SyncSwi_destruct
#define SyncSwi_Module_upCast ti_sysbios_syncs_SyncSwi_Module_upCast
#define SyncSwi_Module_to_xdc_runtime_knl_ISync ti_sysbios_syncs_SyncSwi_Module_to_xdc_runtime_knl_ISync
#define SyncSwi_Handle_upCast ti_sysbios_syncs_SyncSwi_Handle_upCast
#define SyncSwi_Handle_to_xdc_runtime_knl_ISync ti_sysbios_syncs_SyncSwi_Handle_to_xdc_runtime_knl_ISync
#define SyncSwi_Handle_downCast ti_sysbios_syncs_SyncSwi_Handle_downCast
#define SyncSwi_Handle_from_xdc_runtime_knl_ISync ti_sysbios_syncs_SyncSwi_Handle_from_xdc_runtime_knl_ISync

#endif /* ti_sysbios_syncs_SyncSwi__localnames__done */
#endif
/*
 *  @(#) ti.sysbios.syncs; 2, 0, 0, 0,386; 5-18-2012 06:06:05; /db/vtree/library/trees/avala/avala-q37x/src/ xlibrary

 */

