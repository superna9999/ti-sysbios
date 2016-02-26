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
 *  ======== TimestampProvider.xdc ========
 *
 *
 */

package ti.sysbios.family.arm.a8;

/*!
 *  ======== TimestampProvider ========
 *  A8 TimestampProvider.
 *
 *  The source of the timestamps for the A8 TimestampProvider is
 *  the A8's internal PMC counter which counts CPU cycles.
 *
 *  As this counter is only 32 bits in length, provision is made
 *  in the get64() API to test if an overflow has occurred since 
 *  the last invocation of get64() and compensate the return value
 *  accordingly.
 *
 *  As it is possible for the 32 bit counter to roll over more 
 *  than once between successive get64() calls, it is up to the user
 *  to call the get64() API often enough to guarantee coherency in
 *  successive timestamps. A simple mechanism to do this would be 
 *  to add a Clock function that simply invokes get64():
 *
 *  @p(code)
 *  var Clock = xdc.useModule('ti.sysbios.knl.Clock');
 *  var TimestampProvider = xdc.useModule('ti.sysbios.family.arm.a8.TimestampProvider');
 *  var clockParams = new Clock.Params();
 *  clockParams.period = 1;     // call every Clock tick
 *  Clock.create($externModFxn(TimestampProvider.get64), 1, clockParams);
 *  @p
 *
 *  @p(html)
 *  <h3> Calling Context </h3>
 *  <table border="1" cellpadding="3">
 *    <colgroup span="1"></colgroup> <colgroup span="5" align="center">
 *    </colgroup>
 *
 *    <tr><th> Function                 </th><th>  Hwi   </th><th>  Swi   </th>
 *    <th>  Task  </th><th>  Main  </th><th>  Startup  </th></tr>
 *    <!--                                                              -->
 *    <tr><td> {@link #get32}           </td><td>   Y    </td><td>   Y    </td>
 *    <td>   Y    </td><td>   Y    </td><td>   N    </td></tr>
 *    <tr><td> {@link #get64}           </td><td>   Y    </td><td>   Y    </td>
 *    <td>   Y    </td><td>   Y    </td><td>   N    </td></tr>
 *    <tr><td> {@link #getFreq}         </td><td>   Y    </td><td>   Y    </td>
 *    <td>   Y    </td><td>   Y    </td><td>   N    </td></tr>
 *    <tr><td colspan="6"> Definitions: <br />
 *       <ul>
 *         <li> <b>Hwi</b>: API is callable from a Hwi thread. </li>
 *         <li> <b>Swi</b>: API is callable from a Swi thread. </li>
 *         <li> <b>Task</b>: API is callable from a Task thread. </li>
 *         <li> <b>Main</b>: API is callable during any of these phases: </li>
 *           <ul>
 *             <li> In your module startup after this module is started 
 *    (e.g. TimestampProvider_Module_startupDone() returns TRUE). </li>
 *             <li> During xdc.runtime.Startup.lastFxns. </li>
 *             <li> During main().</li>
 *             <li> During BIOS.startupFxns.</li>
 *           </ul>
 *         <li> <b>Startup</b>: API is callable during any of these phases:</li>
 *           <ul>
 *             <li> During xdc.runtime.Startup.firstFxns.</li>
 *             <li> In your module startup before this module is started 
 *    (e.g. TimestampProvider_Module_startupDone() returns FALSE).</li>
 *           </ul>
 *       </ul>
 *    </td></tr>
 *
 *  </table>
 *  @p
 */

@ModuleStartup          /* To get Clock Timer Handle */

module TimestampProvider inherits ti.sysbios.interfaces.ITimestamp
{
    /*! @_nodoc */
    @XmlDtd
    metaonly struct Module_View {
    };

internal:   /* not for client use */

    UInt32 getCCNT32();
    UInt32 getOverflowCCNT();
    Void initCCNT();
    
    struct Module_State {
        UInt32          upper32Bits;    /* upper 32 bits of counter */
    }
}
/*
 *  @(#) ti.sysbios.family.arm.a8; 2, 0, 0, 0,161; 5-18-2012 06:03:52; /db/vtree/library/trees/avala/avala-q37x/src/ xlibrary

 */

