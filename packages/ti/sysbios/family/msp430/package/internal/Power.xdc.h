/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */

#ifndef ti_sysbios_family_msp430_Power__INTERNAL__
#define ti_sysbios_family_msp430_Power__INTERNAL__

#ifndef ti_sysbios_family_msp430_Power__internalaccess
#define ti_sysbios_family_msp430_Power__internalaccess
#endif

#include <ti/sysbios/family/msp430/Power.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* idleCPU */
#undef ti_sysbios_family_msp430_Power_idleCPU
#define ti_sysbios_family_msp430_Power_idleCPU ti_sysbios_family_msp430_Power_idleCPU__E

/* changeIdleMode */
#undef ti_sysbios_family_msp430_Power_changeIdleMode
#define ti_sysbios_family_msp430_Power_changeIdleMode ti_sysbios_family_msp430_Power_changeIdleMode__E

/* sleepCPU */
#undef ti_sysbios_family_msp430_Power_sleepCPU
#define ti_sysbios_family_msp430_Power_sleepCPU ti_sysbios_family_msp430_Power_sleepCPU__E

/* wakeCPU */
#undef ti_sysbios_family_msp430_Power_wakeCPU
#define ti_sysbios_family_msp430_Power_wakeCPU ti_sysbios_family_msp430_Power_wakeCPU__E

/* getModeChangeFlag */
#undef ti_sysbios_family_msp430_Power_getModeChangeFlag
#define ti_sysbios_family_msp430_Power_getModeChangeFlag ti_sysbios_family_msp430_Power_getModeChangeFlag__E

/* defaultSleepPrepFunction */
#define Power_defaultSleepPrepFunction ti_sysbios_family_msp430_Power_defaultSleepPrepFunction__I

/* blockedTaskFunction */
#define Power_blockedTaskFunction ti_sysbios_family_msp430_Power_blockedTaskFunction__I

/* Module_startup */
#undef ti_sysbios_family_msp430_Power_Module_startup
#define ti_sysbios_family_msp430_Power_Module_startup ti_sysbios_family_msp430_Power_Module_startup__F

/* Instance_init */
#undef ti_sysbios_family_msp430_Power_Instance_init
#define ti_sysbios_family_msp430_Power_Instance_init ti_sysbios_family_msp430_Power_Instance_init__F

/* Instance_finalize */
#undef ti_sysbios_family_msp430_Power_Instance_finalize
#define ti_sysbios_family_msp430_Power_Instance_finalize ti_sysbios_family_msp430_Power_Instance_finalize__F

/* module */
#define Power_module ((ti_sysbios_family_msp430_Power_Module_State *)(xdc__MODOBJADDR__(ti_sysbios_family_msp430_Power_Module__state__V)))
#if !defined(__cplusplus) || !defined(ti_sysbios_family_msp430_Power__cplusplus)
#define module ((ti_sysbios_family_msp430_Power_Module_State *)(xdc__MODOBJADDR__(ti_sysbios_family_msp430_Power_Module__state__V)))
#endif
/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_msp430_Power_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_msp430_Power_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_msp430_Power_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_msp430_Power_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_msp430_Power_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_msp430_Power_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_msp430_Power_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_msp430_Power_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_msp430_Power_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_msp430_Power_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_msp430_Power_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_msp430_Power_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_msp430_Power_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_msp430_Power_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_msp430_Power_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_msp430_Power_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_msp430_Power_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_msp430_Power_Module_GateProxy_query


#endif /* ti_sysbios_family_msp430_Power__INTERNAL____ */
