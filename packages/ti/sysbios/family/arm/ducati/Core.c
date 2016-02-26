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
 *  ======== Core.c ========
 */

#include <xdc/std.h>

#include <xdc/runtime/Error.h>
#include <xdc/runtime/Startup.h>

#include "package/internal/Core.xdc.h"

#define PID0_ADDRESS 0xE00FFFE0

/* hack to force this boot code to be retained */
extern Void ducatiReset();

/*
 *  ======== Timer_Module_startup ========
 *  Calls postInit for all statically-created & constructed
 *  timers to initialize them.
 */
Int Core_Module_startup(status)
{
    if (Core_id != *(UInt *)(PID0_ADDRESS)) {
        Error_raise(NULL, Core_E_mismatchedIds, Core_id, *(UInt *)(PID0_ADDRESS));

        /* hack to force this boot code to be retained */
        ducatiReset();
    }
    
    return (Startup_DONE);
}

/*
 * Below API provided for backward compatability.
 */

#ifdef __ti__
#pragma CODE_SECTION(ti_sysbios_family_arm_ducati_Core_getId__E, ".text:ti_sysbios_family_arm_ducati_Core_getId__E")
#pragma FUNC_EXT_CALLED(ti_sysbios_family_arm_ducati_Core_getId__E);
#else
UInt ti_sysbios_family_arm_ducati_Core_getId__E() __attribute__((used, section(".text:ti_sysbios_family_arm_ducati_Core_getId__E")));
#endif

/*
 *  ======== Core_getId ========
 */
UInt ti_sysbios_family_arm_ducati_Core_getId__E()
{
    return (Core_id);
}

/*
 */
/*
 *  @(#) ti.sysbios.family.arm.ducati; 2, 0, 0, 0,302; 5-18-2012 06:04:12; /db/vtree/library/trees/avala/avala-q37x/src/ xlibrary

 */

