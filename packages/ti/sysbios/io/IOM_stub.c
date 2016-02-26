/*
 *  Copyright 2012 by Texas Instruments Incorporated.
 *
 */

/*
 *  ======== iom_stub.c ========
 *  IOM mini-driver fxn stub for functions not implemented.
 */
 
#include <xdc/std.h>

#include <ti/sysbios/io/IOM.h>

/*
 *  ======== IOM_mdNotImpl ========
 *  Convenient mini-driver not implemented stub function.
 *  See IOM.h file for #define names IOM_[xxx]NOTIMPL used in 
 *  mini-driver fxn table to stub out a fxn.
 */
Int IOM_mdNotImpl(Void)
{
    return (IOM_ENOTIMPL);
}
/*
 *  @(#) ti.sysbios.io; 1, 0, 0, 0,49; 5-18-2012 06:05:49; /db/vtree/library/trees/avala/avala-q37x/src/ xlibrary

 */

