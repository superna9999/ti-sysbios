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
 *  ======== SyncEvent.xs ========
 *
 */

var Event = null;
var SyncEvent = null;

/*
 *  ======== module$use ========
 */
function module$use()
{
    SyncEvent = this;
    Event = xdc.useModule("ti.sysbios.knl.Event");
}

/*
 *  ======== instance$static$init ========
 */
function instance$static$init(obj, params)
{
    if (!params.event) {
        SyncEvent.$logFatal("params.event cannot be null", this);
    }

    obj.evtId = params.eventId;
    obj.evt = params.event;
}

/*
 *  ======== viewInitBasic ========
 *  Initialize the 'Basic' SyncEvent instance view.
 */
function viewInitBasic(view, obj)
{
    var Program = xdc.useModule('xdc.rov.Program');
    
    view.label = Program.getShortName(obj.$label);

    view.EventHandle = "0x" + Number(obj.evt).toString(16);
    view.EventId = obj.evtId;

    try {
        var eventView = 
            Program.scanHandleView('ti.sysbios.knl.Event', obj.evt, 'Basic');
    }
    catch (e) {
        Program.displayError(view, "pendedTask",
            "Error: could not scan view of Event Handle: " + e.toString());
        return;
    }

    view.pendedTask = eventView.pendedTask;
}
/*
 *  @(#) ti.sysbios.syncs; 2, 0, 0, 0,386; 5-18-2012 06:06:05; /db/vtree/library/trees/avala/avala-q37x/src/ xlibrary

 */
