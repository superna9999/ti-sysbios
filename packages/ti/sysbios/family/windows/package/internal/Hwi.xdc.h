/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */

#ifndef ti_sysbios_family_windows_Hwi__INTERNAL__
#define ti_sysbios_family_windows_Hwi__INTERNAL__

#ifndef ti_sysbios_family_windows_Hwi__internalaccess
#define ti_sysbios_family_windows_Hwi__internalaccess
#endif

#include <ti/sysbios/family/windows/Hwi.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* getStackInfo */
#undef ti_sysbios_family_windows_Hwi_getStackInfo
#define ti_sysbios_family_windows_Hwi_getStackInfo ti_sysbios_family_windows_Hwi_getStackInfo__F

/* startup */
#undef ti_sysbios_family_windows_Hwi_startup
#define ti_sysbios_family_windows_Hwi_startup ti_sysbios_family_windows_Hwi_startup__E

/* disable */
#undef ti_sysbios_family_windows_Hwi_disable
#define ti_sysbios_family_windows_Hwi_disable ti_sysbios_family_windows_Hwi_disable__F

/* enable */
#undef ti_sysbios_family_windows_Hwi_enable
#define ti_sysbios_family_windows_Hwi_enable ti_sysbios_family_windows_Hwi_enable__F

/* restore */
#undef ti_sysbios_family_windows_Hwi_restore
#define ti_sysbios_family_windows_Hwi_restore ti_sysbios_family_windows_Hwi_restore__F

/* switchFromBootStack */
#undef ti_sysbios_family_windows_Hwi_switchFromBootStack
#define ti_sysbios_family_windows_Hwi_switchFromBootStack ti_sysbios_family_windows_Hwi_switchFromBootStack__E

/* post */
#undef ti_sysbios_family_windows_Hwi_post
#define ti_sysbios_family_windows_Hwi_post ti_sysbios_family_windows_Hwi_post__E

/* getTaskSP */
#undef ti_sysbios_family_windows_Hwi_getTaskSP
#define ti_sysbios_family_windows_Hwi_getTaskSP ti_sysbios_family_windows_Hwi_getTaskSP__E

/* disableInterrupt */
#undef ti_sysbios_family_windows_Hwi_disableInterrupt
#define ti_sysbios_family_windows_Hwi_disableInterrupt ti_sysbios_family_windows_Hwi_disableInterrupt__E

/* enableInterrupt */
#undef ti_sysbios_family_windows_Hwi_enableInterrupt
#define ti_sysbios_family_windows_Hwi_enableInterrupt ti_sysbios_family_windows_Hwi_enableInterrupt__E

/* restoreInterrupt */
#undef ti_sysbios_family_windows_Hwi_restoreInterrupt
#define ti_sysbios_family_windows_Hwi_restoreInterrupt ti_sysbios_family_windows_Hwi_restoreInterrupt__E

/* clearInterrupt */
#undef ti_sysbios_family_windows_Hwi_clearInterrupt
#define ti_sysbios_family_windows_Hwi_clearInterrupt ti_sysbios_family_windows_Hwi_clearInterrupt__E

/* getFunc */
#undef ti_sysbios_family_windows_Hwi_getFunc
#define ti_sysbios_family_windows_Hwi_getFunc ti_sysbios_family_windows_Hwi_getFunc__E

/* setFunc */
#undef ti_sysbios_family_windows_Hwi_setFunc
#define ti_sysbios_family_windows_Hwi_setFunc ti_sysbios_family_windows_Hwi_setFunc__E

/* getHookContext */
#undef ti_sysbios_family_windows_Hwi_getHookContext
#define ti_sysbios_family_windows_Hwi_getHookContext ti_sysbios_family_windows_Hwi_getHookContext__E

/* setHookContext */
#undef ti_sysbios_family_windows_Hwi_setHookContext
#define ti_sysbios_family_windows_Hwi_setHookContext ti_sysbios_family_windows_Hwi_setHookContext__E

/* getIrp */
#undef ti_sysbios_family_windows_Hwi_getIrp
#define ti_sysbios_family_windows_Hwi_getIrp ti_sysbios_family_windows_Hwi_getIrp__E

/* disableIER */
#undef ti_sysbios_family_windows_Hwi_disableIER
#define ti_sysbios_family_windows_Hwi_disableIER ti_sysbios_family_windows_Hwi_disableIER__F

/* enableIER */
#undef ti_sysbios_family_windows_Hwi_enableIER
#define ti_sysbios_family_windows_Hwi_enableIER ti_sysbios_family_windows_Hwi_enableIER__F

/* restoreIER */
#undef ti_sysbios_family_windows_Hwi_restoreIER
#define ti_sysbios_family_windows_Hwi_restoreIER ti_sysbios_family_windows_Hwi_restoreIER__F

/* getHandle */
#undef ti_sysbios_family_windows_Hwi_getHandle
#define ti_sysbios_family_windows_Hwi_getHandle ti_sysbios_family_windows_Hwi_getHandle__F

/* plug */
#undef ti_sysbios_family_windows_Hwi_plug
#define ti_sysbios_family_windows_Hwi_plug ti_sysbios_family_windows_Hwi_plug__F

/* reconfig */
#undef ti_sysbios_family_windows_Hwi_reconfig
#define ti_sysbios_family_windows_Hwi_reconfig ti_sysbios_family_windows_Hwi_reconfig__F

/* dispatch */
#define Hwi_dispatch ti_sysbios_family_windows_Hwi_dispatch__I

/* init */
#define Hwi_init ti_sysbios_family_windows_Hwi_init__I

/* unPluggedInterrupt */
#define Hwi_unPluggedInterrupt ti_sysbios_family_windows_Hwi_unPluggedInterrupt__I

/* Module_startup */
#undef ti_sysbios_family_windows_Hwi_Module_startup
#define ti_sysbios_family_windows_Hwi_Module_startup ti_sysbios_family_windows_Hwi_Module_startup__F

/* Instance_init */
#undef ti_sysbios_family_windows_Hwi_Instance_init
#define ti_sysbios_family_windows_Hwi_Instance_init ti_sysbios_family_windows_Hwi_Instance_init__F

/* Instance_finalize */
#undef ti_sysbios_family_windows_Hwi_Instance_finalize
#define ti_sysbios_family_windows_Hwi_Instance_finalize ti_sysbios_family_windows_Hwi_Instance_finalize__F

/* module */
#define Hwi_module ((ti_sysbios_family_windows_Hwi_Module_State *)(xdc__MODOBJADDR__(ti_sysbios_family_windows_Hwi_Module__state__V)))
#if !defined(__cplusplus) || !defined(ti_sysbios_family_windows_Hwi__cplusplus)
#define module ((ti_sysbios_family_windows_Hwi_Module_State *)(xdc__MODOBJADDR__(ti_sysbios_family_windows_Hwi_Module__state__V)))
#endif
/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_windows_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_windows_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_windows_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_windows_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_windows_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_windows_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_windows_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_windows_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_windows_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_windows_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_windows_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_windows_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_windows_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_windows_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_windows_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_windows_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_windows_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_windows_Hwi_Module_GateProxy_query

/* Object__sizingError */
#line 1 "Error_inconsistent_object_size_in_ti.sysbios.family.windows.Hwi"
typedef char ti_sysbios_family_windows_Hwi_Object__sizingError[sizeof(ti_sysbios_family_windows_Hwi_Object) > sizeof(ti_sysbios_family_windows_Hwi_Struct) ? -1 : 1];


#endif /* ti_sysbios_family_windows_Hwi__INTERNAL____ */
