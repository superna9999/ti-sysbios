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
 *  ======== Idle.xs ========
 *
 */

/*
 *  ======== module$use ========
 */
function module$use()
{
    /* add user specified functions to funcList array */
    for (var i = 0; i < this.idleFxns.length; i++) {
        var fxn = this.idleFxns[i];
        if (fxn != null) {
            this.addFunc(fxn);
        }
    }
}

/*
 *  ======== addFunc ========
 */
function addFunc(func)
{
    this.funcList.$add(func);
}

/*
 *  ======== viewInitModule ========
 *  Initialize the Task module view.
 */
function viewInitModule(view, mod)
{
    var Idle = xdc.useModule('ti.sysbios.knl.Idle');
    var Program = xdc.useModule('xdc.rov.Program');

    var modConfig = Program.getModuleConfig(Idle.$name);

    var elements = new Array();

    for (var i=0; i< modConfig.funcList.length; i++) {
        var elem = Program.newViewStruct('ti.sysbios.knl.Idle', 'Idle.funcList');
        elem.index = i;
        elem.fxn = modConfig.funcList[i];
        elements[elements.length] = elem;                
    }
    view.elements = elements;
}


/*
 *  @(#) ti.sysbios.knl; 2, 0, 0, 0,552; 5-18-2012 06:05:53; /db/vtree/library/trees/avala/avala-q37x/src/ xlibrary

 */

