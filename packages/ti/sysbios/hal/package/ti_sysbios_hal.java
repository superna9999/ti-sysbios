/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-y25
 */
import java.util.*;
import org.mozilla.javascript.*;
import xdc.services.intern.xsr.*;
import xdc.services.spec.Session;

public class ti_sysbios_hal
{
    static final String VERS = "@(#) xdc-y25\n";

    static final Proto.Elm $$T_Bool = Proto.Elm.newBool();
    static final Proto.Elm $$T_Num = Proto.Elm.newNum();
    static final Proto.Elm $$T_Str = Proto.Elm.newStr();
    static final Proto.Elm $$T_Obj = Proto.Elm.newObj();

    static final Proto.Fxn $$T_Met = new Proto.Fxn(null, null, 0, -1, false);
    static final Proto.Map $$T_Map = new Proto.Map($$T_Obj);
    static final Proto.Arr $$T_Vec = new Proto.Arr($$T_Obj);

    static final XScriptO $$DEFAULT = Value.DEFAULT;
    static final Object $$UNDEF = Undefined.instance;

    static final Proto.Obj $$Package = (Proto.Obj)Global.get("$$Package");
    static final Proto.Obj $$Module = (Proto.Obj)Global.get("$$Module");
    static final Proto.Obj $$Instance = (Proto.Obj)Global.get("$$Instance");
    static final Proto.Obj $$Params = (Proto.Obj)Global.get("$$Params");

    static final Object $$objFldGet = Global.get("$$objFldGet");
    static final Object $$objFldSet = Global.get("$$objFldSet");
    static final Object $$proxyGet = Global.get("$$proxyGet");
    static final Object $$proxySet = Global.get("$$proxySet");
    static final Object $$delegGet = Global.get("$$delegGet");
    static final Object $$delegSet = Global.get("$$delegSet");

    Scriptable xdcO;
    Session ses;
    Value.Obj om;

    boolean isROV;
    boolean isCFG;

    Proto.Obj pkgP;
    Value.Obj pkgV;

    ArrayList<Object> imports = new ArrayList<Object>();
    ArrayList<Object> loggables = new ArrayList<Object>();
    ArrayList<Object> mcfgs = new ArrayList<Object>();
    ArrayList<Object> icfgs = new ArrayList<Object>();
    ArrayList<String> inherits = new ArrayList<String>();
    ArrayList<Object> proxies = new ArrayList<Object>();
    ArrayList<Object> sizes = new ArrayList<Object>();
    ArrayList<Object> tdefs = new ArrayList<Object>();

    void $$IMPORTS()
    {
        Global.callFxn("loadPackage", xdcO, "ti.sysbios.interfaces");
        Global.callFxn("loadPackage", xdcO, "ti.sysbios.family");
        Global.callFxn("loadPackage", xdcO, "xdc");
        Global.callFxn("loadPackage", xdcO, "xdc.corevers");
        Global.callFxn("loadPackage", xdcO, "xdc.runtime");
        Global.callFxn("loadPackage", xdcO, "xdc.rov");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.sysbios.hal.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.sysbios.hal", new Value.Obj("ti.sysbios.hal", pkgP));
    }

    void Hwi$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sysbios.hal.Hwi.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sysbios.hal.Hwi", new Value.Obj("ti.sysbios.hal.Hwi", po));
        pkgV.bind("Hwi", vo);
        // decls 
        om.bind("ti.sysbios.hal.Hwi.HookSet", om.findStrict("ti.sysbios.interfaces.IHwi.HookSet", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Hwi.MaskingOption", om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Hwi.StackInfo", om.findStrict("ti.sysbios.interfaces.IHwi.StackInfo", "ti.sysbios.hal"));
        spo = (Proto.Obj)om.bind("ti.sysbios.hal.Hwi$$Instance_State", new Proto.Obj());
        om.bind("ti.sysbios.hal.Hwi.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sysbios.hal.Hwi.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Hwi$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sysbios.hal.Hwi.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Hwi$$Params", new Proto.Obj());
        om.bind("ti.sysbios.hal.Hwi.Params", new Proto.Str(po, false));
        om.bind("ti.sysbios.hal.Hwi.Handle", insP);
        if (isROV) {
            om.bind("ti.sysbios.hal.Hwi.Object", om.findStrict("ti.sysbios.hal.Hwi.Instance_State", "ti.sysbios.hal"));
        }//isROV
    }

    void Timer$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sysbios.hal.Timer.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sysbios.hal.Timer", new Value.Obj("ti.sysbios.hal.Timer", po));
        pkgV.bind("Timer", vo);
        // decls 
        om.bind("ti.sysbios.hal.Timer.StartMode", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Timer.RunMode", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Timer.Status", om.findStrict("ti.sysbios.interfaces.ITimer.Status", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Timer.PeriodType", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType", "ti.sysbios.hal"));
        spo = (Proto.Obj)om.bind("ti.sysbios.hal.Timer$$Instance_State", new Proto.Obj());
        om.bind("ti.sysbios.hal.Timer.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sysbios.hal.Timer.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Timer$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sysbios.hal.Timer.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Timer$$Params", new Proto.Obj());
        om.bind("ti.sysbios.hal.Timer.Params", new Proto.Str(po, false));
        om.bind("ti.sysbios.hal.Timer.Handle", insP);
        if (isROV) {
            om.bind("ti.sysbios.hal.Timer.Object", om.findStrict("ti.sysbios.hal.Timer.Instance_State", "ti.sysbios.hal"));
        }//isROV
    }

    void TimerNull$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sysbios.hal.TimerNull.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sysbios.hal.TimerNull", new Value.Obj("ti.sysbios.hal.TimerNull", po));
        pkgV.bind("TimerNull", vo);
        // decls 
        om.bind("ti.sysbios.hal.TimerNull.StartMode", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.TimerNull.RunMode", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.TimerNull.Status", om.findStrict("ti.sysbios.interfaces.ITimer.Status", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.TimerNull.PeriodType", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType", "ti.sysbios.hal"));
        spo = (Proto.Obj)om.bind("ti.sysbios.hal.TimerNull$$Instance_State", new Proto.Obj());
        om.bind("ti.sysbios.hal.TimerNull.Instance_State", new Proto.Str(spo, false));
        // insts 
        Object insP = om.bind("ti.sysbios.hal.TimerNull.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sysbios.hal.TimerNull$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sysbios.hal.TimerNull.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sysbios.hal.TimerNull$$Params", new Proto.Obj());
        om.bind("ti.sysbios.hal.TimerNull.Params", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sysbios.hal.TimerNull$$Instance_State", new Proto.Obj());
        om.bind("ti.sysbios.hal.TimerNull.Instance_State", new Proto.Str(po, false));
        om.bind("ti.sysbios.hal.TimerNull.Handle", insP);
        if (isROV) {
            om.bind("ti.sysbios.hal.TimerNull.Object", om.findStrict("ti.sysbios.hal.TimerNull.Instance_State", "ti.sysbios.hal"));
        }//isROV
    }

    void Cache$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sysbios.hal.Cache.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sysbios.hal.Cache", new Value.Obj("ti.sysbios.hal.Cache", po));
        pkgV.bind("Cache", vo);
        // decls 
        om.bind("ti.sysbios.hal.Cache.Type", om.findStrict("ti.sysbios.interfaces.ICache.Type", "ti.sysbios.hal"));
    }

    void CacheNull$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sysbios.hal.CacheNull.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sysbios.hal.CacheNull", new Value.Obj("ti.sysbios.hal.CacheNull", po));
        pkgV.bind("CacheNull", vo);
        // decls 
        om.bind("ti.sysbios.hal.CacheNull.Type", om.findStrict("ti.sysbios.interfaces.ICache.Type", "ti.sysbios.hal"));
    }

    void Hwi_HwiProxy$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sysbios.hal.Hwi_HwiProxy.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sysbios.hal.Hwi_HwiProxy", new Value.Obj("ti.sysbios.hal.Hwi_HwiProxy", po));
        pkgV.bind("Hwi_HwiProxy", vo);
        // decls 
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.HookSet", om.findStrict("ti.sysbios.interfaces.IHwi.HookSet", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.MaskingOption", om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.StackInfo", om.findStrict("ti.sysbios.interfaces.IHwi.StackInfo", "ti.sysbios.hal"));
        // insts 
        Object insP = om.bind("ti.sysbios.hal.Hwi_HwiProxy.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Hwi_HwiProxy$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sysbios.hal.Hwi_HwiProxy.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Hwi_HwiProxy$$Params", new Proto.Obj());
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.Params", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Hwi_HwiProxy$$Instance_State", new Proto.Obj());
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.Instance_State", new Proto.Str(po, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.Handle", insP);
        if (isROV) {
            om.bind("ti.sysbios.hal.Hwi_HwiProxy.Object", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Instance_State", "ti.sysbios.hal"));
        }//isROV
    }

    void Timer_TimerProxy$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sysbios.hal.Timer_TimerProxy.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sysbios.hal.Timer_TimerProxy", new Value.Obj("ti.sysbios.hal.Timer_TimerProxy", po));
        pkgV.bind("Timer_TimerProxy", vo);
        // decls 
        om.bind("ti.sysbios.hal.Timer_TimerProxy.StartMode", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Timer_TimerProxy.RunMode", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Timer_TimerProxy.Status", om.findStrict("ti.sysbios.interfaces.ITimer.Status", "ti.sysbios.hal"));
        om.bind("ti.sysbios.hal.Timer_TimerProxy.PeriodType", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType", "ti.sysbios.hal"));
        // insts 
        Object insP = om.bind("ti.sysbios.hal.Timer_TimerProxy.Instance", new Proto.Obj());
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Timer_TimerProxy$$Object", new Proto.Obj());
        Object objP = om.bind("ti.sysbios.hal.Timer_TimerProxy.Object", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Timer_TimerProxy$$Params", new Proto.Obj());
        om.bind("ti.sysbios.hal.Timer_TimerProxy.Params", new Proto.Str(po, false));
        po = (Proto.Obj)om.bind("ti.sysbios.hal.Timer_TimerProxy$$Instance_State", new Proto.Obj());
        om.bind("ti.sysbios.hal.Timer_TimerProxy.Instance_State", new Proto.Str(po, false));
        om.bind("ti.sysbios.hal.Timer_TimerProxy.Handle", insP);
        if (isROV) {
            om.bind("ti.sysbios.hal.Timer_TimerProxy.Object", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Instance_State", "ti.sysbios.hal"));
        }//isROV
    }

    void Cache_CacheProxy$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sysbios.hal.Cache_CacheProxy.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sysbios.hal.Cache_CacheProxy", new Value.Obj("ti.sysbios.hal.Cache_CacheProxy", po));
        pkgV.bind("Cache_CacheProxy", vo);
        // decls 
        om.bind("ti.sysbios.hal.Cache_CacheProxy.Type", om.findStrict("ti.sysbios.interfaces.ICache.Type", "ti.sysbios.hal"));
    }

    void Hwi$$CONSTS()
    {
        // module Hwi
        om.bind("ti.sysbios.hal.Hwi.getStackInfo", new Extern("ti_sysbios_hal_Hwi_getStackInfo__E", "xdc_Bool(*)(ti_sysbios_interfaces_IHwi_StackInfo*,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.Hwi.startup", new Extern("ti_sysbios_hal_Hwi_startup__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Hwi.switchFromBootStack", new Extern("ti_sysbios_hal_Hwi_switchFromBootStack__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Hwi.post", new Extern("ti_sysbios_hal_Hwi_post__E", "xdc_Void(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Hwi.getTaskSP", new Extern("ti_sysbios_hal_Hwi_getTaskSP__E", "xdc_Char*(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Hwi.disableInterrupt", new Extern("ti_sysbios_hal_Hwi_disableInterrupt__E", "xdc_UInt(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Hwi.enableInterrupt", new Extern("ti_sysbios_hal_Hwi_enableInterrupt__E", "xdc_UInt(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Hwi.restoreInterrupt", new Extern("ti_sysbios_hal_Hwi_restoreInterrupt__E", "xdc_Void(*)(xdc_UInt,xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Hwi.clearInterrupt", new Extern("ti_sysbios_hal_Hwi_clearInterrupt__E", "xdc_Void(*)(xdc_UInt)", true, false));
    }

    void Timer$$CONSTS()
    {
        // module Timer
        om.bind("ti.sysbios.hal.Timer.getNumTimers", new Extern("ti_sysbios_hal_Timer_getNumTimers__E", "xdc_UInt(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Timer.getStatus", new Extern("ti_sysbios_hal_Timer_getStatus__E", "ti_sysbios_interfaces_ITimer_Status(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Timer.startup", new Extern("ti_sysbios_hal_Timer_startup__E", "xdc_Void(*)(xdc_Void)", true, false));
    }

    void TimerNull$$CONSTS()
    {
        // module TimerNull
        om.bind("ti.sysbios.hal.TimerNull.getNumTimers", new Extern("ti_sysbios_hal_TimerNull_getNumTimers__E", "xdc_UInt(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.TimerNull.getStatus", new Extern("ti_sysbios_hal_TimerNull_getStatus__E", "ti_sysbios_interfaces_ITimer_Status(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.TimerNull.startup", new Extern("ti_sysbios_hal_TimerNull_startup__E", "xdc_Void(*)(xdc_Void)", true, false));
    }

    void Cache$$CONSTS()
    {
        // module Cache
        om.bind("ti.sysbios.hal.Cache.enable", new Extern("ti_sysbios_hal_Cache_enable__E", "xdc_Void(*)(xdc_Bits16)", true, false));
        om.bind("ti.sysbios.hal.Cache.disable", new Extern("ti_sysbios_hal_Cache_disable__E", "xdc_Void(*)(xdc_Bits16)", true, false));
        om.bind("ti.sysbios.hal.Cache.inv", new Extern("ti_sysbios_hal_Cache_inv__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_Bits16,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.Cache.wb", new Extern("ti_sysbios_hal_Cache_wb__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_Bits16,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.Cache.wbInv", new Extern("ti_sysbios_hal_Cache_wbInv__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_Bits16,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.Cache.wbAll", new Extern("ti_sysbios_hal_Cache_wbAll__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Cache.wbInvAll", new Extern("ti_sysbios_hal_Cache_wbInvAll__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Cache.wait", new Extern("ti_sysbios_hal_Cache_wait__E", "xdc_Void(*)(xdc_Void)", true, false));
    }

    void CacheNull$$CONSTS()
    {
        // module CacheNull
        om.bind("ti.sysbios.hal.CacheNull.enable", new Extern("ti_sysbios_hal_CacheNull_enable__E", "xdc_Void(*)(xdc_Bits16)", true, false));
        om.bind("ti.sysbios.hal.CacheNull.disable", new Extern("ti_sysbios_hal_CacheNull_disable__E", "xdc_Void(*)(xdc_Bits16)", true, false));
        om.bind("ti.sysbios.hal.CacheNull.inv", new Extern("ti_sysbios_hal_CacheNull_inv__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_Bits16,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.CacheNull.wb", new Extern("ti_sysbios_hal_CacheNull_wb__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_Bits16,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.CacheNull.wbInv", new Extern("ti_sysbios_hal_CacheNull_wbInv__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_Bits16,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.CacheNull.wbAll", new Extern("ti_sysbios_hal_CacheNull_wbAll__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.CacheNull.wbInvAll", new Extern("ti_sysbios_hal_CacheNull_wbInvAll__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.CacheNull.wait", new Extern("ti_sysbios_hal_CacheNull_wait__E", "xdc_Void(*)(xdc_Void)", true, false));
    }

    void Hwi_HwiProxy$$CONSTS()
    {
        // module Hwi_HwiProxy
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.getStackInfo", new Extern("ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E", "xdc_Bool(*)(ti_sysbios_interfaces_IHwi_StackInfo*,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.startup", new Extern("ti_sysbios_hal_Hwi_HwiProxy_startup__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.disable", new Extern("ti_sysbios_hal_Hwi_HwiProxy_disable__E", "xdc_UInt(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.enable", new Extern("ti_sysbios_hal_Hwi_HwiProxy_enable__E", "xdc_UInt(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.restore", new Extern("ti_sysbios_hal_Hwi_HwiProxy_restore__E", "xdc_Void(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.switchFromBootStack", new Extern("ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.post", new Extern("ti_sysbios_hal_Hwi_HwiProxy_post__E", "xdc_Void(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.getTaskSP", new Extern("ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E", "xdc_Char*(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.disableInterrupt", new Extern("ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E", "xdc_UInt(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.enableInterrupt", new Extern("ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E", "xdc_UInt(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.restoreInterrupt", new Extern("ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E", "xdc_Void(*)(xdc_UInt,xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Hwi_HwiProxy.clearInterrupt", new Extern("ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E", "xdc_Void(*)(xdc_UInt)", true, false));
    }

    void Timer_TimerProxy$$CONSTS()
    {
        // module Timer_TimerProxy
        om.bind("ti.sysbios.hal.Timer_TimerProxy.getNumTimers", new Extern("ti_sysbios_hal_Timer_TimerProxy_getNumTimers__E", "xdc_UInt(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Timer_TimerProxy.getStatus", new Extern("ti_sysbios_hal_Timer_TimerProxy_getStatus__E", "ti_sysbios_interfaces_ITimer_Status(*)(xdc_UInt)", true, false));
        om.bind("ti.sysbios.hal.Timer_TimerProxy.startup", new Extern("ti_sysbios_hal_Timer_TimerProxy_startup__E", "xdc_Void(*)(xdc_Void)", true, false));
    }

    void Cache_CacheProxy$$CONSTS()
    {
        // module Cache_CacheProxy
        om.bind("ti.sysbios.hal.Cache_CacheProxy.enable", new Extern("ti_sysbios_hal_Cache_CacheProxy_enable__E", "xdc_Void(*)(xdc_Bits16)", true, false));
        om.bind("ti.sysbios.hal.Cache_CacheProxy.disable", new Extern("ti_sysbios_hal_Cache_CacheProxy_disable__E", "xdc_Void(*)(xdc_Bits16)", true, false));
        om.bind("ti.sysbios.hal.Cache_CacheProxy.inv", new Extern("ti_sysbios_hal_Cache_CacheProxy_inv__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_Bits16,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.Cache_CacheProxy.wb", new Extern("ti_sysbios_hal_Cache_CacheProxy_wb__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_Bits16,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.Cache_CacheProxy.wbInv", new Extern("ti_sysbios_hal_Cache_CacheProxy_wbInv__E", "xdc_Void(*)(xdc_Ptr,xdc_SizeT,xdc_Bits16,xdc_Bool)", true, false));
        om.bind("ti.sysbios.hal.Cache_CacheProxy.wbAll", new Extern("ti_sysbios_hal_Cache_CacheProxy_wbAll__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Cache_CacheProxy.wbInvAll", new Extern("ti_sysbios_hal_Cache_CacheProxy_wbInvAll__E", "xdc_Void(*)(xdc_Void)", true, false));
        om.bind("ti.sysbios.hal.Cache_CacheProxy.wait", new Extern("ti_sysbios_hal_Cache_CacheProxy_wait__E", "xdc_Void(*)(xdc_Void)", true, false));
    }

    void Hwi$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Hwi$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sysbios.hal.Hwi.create() called before xdc.useModule('ti.sysbios.hal.Hwi')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst.$args.intNum, inst.$args.hwiFxn, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.Hwi$$create", new Proto.Fxn(om.findStrict("ti.sysbios.hal.Hwi.Module", "ti.sysbios.hal"), om.findStrict("ti.sysbios.hal.Hwi.Instance", "ti.sysbios.hal"), 3, 2, false));
                        fxn.addArg(0, "intNum", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF);
                        fxn.addArg(1, "hwiFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF);
                        fxn.addArg(2, "__params", (Proto)om.findStrict("ti.sysbios.hal.Hwi.Params", "ti.sysbios.hal"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Hwi$$create = function( intNum, hwiFxn, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sysbios.hal.Hwi'];\n");
                sb.append("var __inst = xdc.om['ti.sysbios.hal.Hwi.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sysbios.hal']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {intNum:intNum, hwiFxn:hwiFxn});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sysbios.hal.Hwi'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, [intNum, hwiFxn]);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sysbios.hal.Hwi'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.Hwi$$construct", new Proto.Fxn(om.findStrict("ti.sysbios.hal.Hwi.Module", "ti.sysbios.hal"), null, 4, 2, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sysbios.hal.Hwi$$Object", "ti.sysbios.hal"), null);
                        fxn.addArg(1, "intNum", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF);
                        fxn.addArg(2, "hwiFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF);
                        fxn.addArg(3, "__params", (Proto)om.findStrict("ti.sysbios.hal.Hwi.Params", "ti.sysbios.hal"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Hwi$$construct = function( __obj, intNum, hwiFxn, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sysbios.hal.Hwi'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {intNum:intNum, hwiFxn:hwiFxn});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sysbios.hal.Hwi'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sysbios.hal.Hwi'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void Timer$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Timer$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sysbios.hal.Timer.create() called before xdc.useModule('ti.sysbios.hal.Timer')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst.$args.id, inst.$args.tickFxn, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.Timer$$create", new Proto.Fxn(om.findStrict("ti.sysbios.hal.Timer.Module", "ti.sysbios.hal"), om.findStrict("ti.sysbios.hal.Timer.Instance", "ti.sysbios.hal"), 3, 2, false));
                        fxn.addArg(0, "id", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF);
                        fxn.addArg(1, "tickFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF);
                        fxn.addArg(2, "__params", (Proto)om.findStrict("ti.sysbios.hal.Timer.Params", "ti.sysbios.hal"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Timer$$create = function( id, tickFxn, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sysbios.hal.Timer'];\n");
                sb.append("var __inst = xdc.om['ti.sysbios.hal.Timer.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sysbios.hal']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {id:id, tickFxn:tickFxn});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sysbios.hal.Timer'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, [id, tickFxn]);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sysbios.hal.Timer'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.Timer$$construct", new Proto.Fxn(om.findStrict("ti.sysbios.hal.Timer.Module", "ti.sysbios.hal"), null, 4, 2, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sysbios.hal.Timer$$Object", "ti.sysbios.hal"), null);
                        fxn.addArg(1, "id", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF);
                        fxn.addArg(2, "tickFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF);
                        fxn.addArg(3, "__params", (Proto)om.findStrict("ti.sysbios.hal.Timer.Params", "ti.sysbios.hal"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Timer$$construct = function( __obj, id, tickFxn, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sysbios.hal.Timer'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {id:id, tickFxn:tickFxn});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sysbios.hal.Timer'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sysbios.hal.Timer'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void TimerNull$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$TimerNull$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sysbios.hal.TimerNull.create() called before xdc.useModule('ti.sysbios.hal.TimerNull')\");\n");
                sb.append("}\n");
                sb.append("var name = xdc.module('xdc.runtime.Text').defineRopeCord(inst.instance.name);\n");
                sb.append("inst.$object.$$bind('__name', name);\n");
                sb.append("this.instance$static$init.$fxn.apply(inst, [inst.$object, inst.$args.id, inst.$args.tickFxn, inst, inst.$module]);\n");
                sb.append("inst.$seal();\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.TimerNull$$create", new Proto.Fxn(om.findStrict("ti.sysbios.hal.TimerNull.Module", "ti.sysbios.hal"), om.findStrict("ti.sysbios.hal.TimerNull.Instance", "ti.sysbios.hal"), 3, 2, false));
                        fxn.addArg(0, "id", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF);
                        fxn.addArg(1, "tickFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF);
                        fxn.addArg(2, "__params", (Proto)om.findStrict("ti.sysbios.hal.TimerNull.Params", "ti.sysbios.hal"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$TimerNull$$create = function( id, tickFxn, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sysbios.hal.TimerNull'];\n");
                sb.append("var __inst = xdc.om['ti.sysbios.hal.TimerNull.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sysbios.hal']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {id:id, tickFxn:tickFxn});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sysbios.hal.TimerNull'].Instance_State);\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, [id, tickFxn]);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sysbios.hal.TimerNull'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
        if (isCFG) {
            fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.TimerNull$$construct", new Proto.Fxn(om.findStrict("ti.sysbios.hal.TimerNull.Module", "ti.sysbios.hal"), null, 4, 2, false));
                        fxn.addArg(0, "__obj", (Proto)om.findStrict("ti.sysbios.hal.TimerNull$$Object", "ti.sysbios.hal"), null);
                        fxn.addArg(1, "id", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF);
                        fxn.addArg(2, "tickFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF);
                        fxn.addArg(3, "__params", (Proto)om.findStrict("ti.sysbios.hal.TimerNull.Params", "ti.sysbios.hal"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$TimerNull$$construct = function( __obj, id, tickFxn, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sysbios.hal.TimerNull'];\n");
                sb.append("var __inst = __obj;\n");
                sb.append("__inst.$$bind('$args', {id:id, tickFxn:tickFxn});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$objects.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', xdc.om['ti.sysbios.hal.TimerNull'].Instance_State.$$make(__inst.$$parent, __inst.$name));\n");
                sb.append("for (var __p in __params) __inst[__p] = __params[__p];\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sysbios.hal.TimerNull'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return null;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void Cache$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void CacheNull$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void Hwi_HwiProxy$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Hwi_HwiProxy$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sysbios.hal.Hwi_HwiProxy.create() called before xdc.useModule('ti.sysbios.hal.Hwi_HwiProxy')\");\n");
                sb.append("}\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.Hwi_HwiProxy$$create", new Proto.Fxn(om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Module", "ti.sysbios.hal"), om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Instance", "ti.sysbios.hal"), 3, 2, false));
                        fxn.addArg(0, "intNum", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF);
                        fxn.addArg(1, "hwiFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF);
                        fxn.addArg(2, "__params", (Proto)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Params", "ti.sysbios.hal"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Hwi_HwiProxy$$create = function( intNum, hwiFxn, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sysbios.hal.Hwi_HwiProxy'];\n");
                sb.append("var __inst = xdc.om['ti.sysbios.hal.Hwi_HwiProxy.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sysbios.hal']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {intNum:intNum, hwiFxn:hwiFxn});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sysbios.hal.Hwi_HwiProxy'].Instance_State);\n");
                sb.append("if (!__mod.delegate$) {\n");
                    sb.append("throw new Error(\"Unbound proxy module: ti.sysbios.hal.Hwi_HwiProxy\");\n");
                sb.append("}\n");
                sb.append("var __dmod = __mod.delegate$.$orig;\n");
                sb.append("var __dinst = __dmod.create(intNum, hwiFxn, __params);\n");
                sb.append("__inst.$$bind('delegate$', __dinst);\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, [intNum, hwiFxn]);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sysbios.hal.Hwi_HwiProxy'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void Timer_TimerProxy$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

        if (isCFG) {
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Timer_TimerProxy$$__initObject = function( inst ) {\n");
                sb.append("if (!this.$used) {\n");
                    sb.append("throw new Error(\"Function ti.sysbios.hal.Timer_TimerProxy.create() called before xdc.useModule('ti.sysbios.hal.Timer_TimerProxy')\");\n");
                sb.append("}\n");
            sb.append("};\n");
            Global.eval(sb.toString());
            fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.Timer_TimerProxy$$create", new Proto.Fxn(om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Module", "ti.sysbios.hal"), om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Instance", "ti.sysbios.hal"), 3, 2, false));
                        fxn.addArg(0, "id", Proto.Elm.newCNum("(xdc_Int)"), $$UNDEF);
                        fxn.addArg(1, "tickFxn", new Proto.Adr("xdc_Void(*)(xdc_UArg)", "PFv"), $$UNDEF);
                        fxn.addArg(2, "__params", (Proto)om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Params", "ti.sysbios.hal"), Global.newObject());
            sb = new StringBuilder();
            sb.append("ti$sysbios$hal$Timer_TimerProxy$$create = function( id, tickFxn, __params ) {\n");
                sb.append("var __mod = xdc.om['ti.sysbios.hal.Timer_TimerProxy'];\n");
                sb.append("var __inst = xdc.om['ti.sysbios.hal.Timer_TimerProxy.Instance'].$$make();\n");
                sb.append("__inst.$$bind('$package', xdc.om['ti.sysbios.hal']);\n");
                sb.append("__inst.$$bind('$index', __mod.$instances.length);\n");
                sb.append("__inst.$$bind('$category', 'Instance');\n");
                sb.append("__inst.$$bind('$args', {id:id, tickFxn:tickFxn});\n");
                sb.append("__inst.$$bind('$module', __mod);\n");
                sb.append("__mod.$instances.$add(__inst);\n");
                sb.append("__inst.$$bind('$object', new xdc.om['ti.sysbios.hal.Timer_TimerProxy'].Instance_State);\n");
                sb.append("if (!__mod.delegate$) {\n");
                    sb.append("throw new Error(\"Unbound proxy module: ti.sysbios.hal.Timer_TimerProxy\");\n");
                sb.append("}\n");
                sb.append("var __dmod = __mod.delegate$.$orig;\n");
                sb.append("var __dinst = __dmod.create(id, tickFxn, __params);\n");
                sb.append("__inst.$$bind('delegate$', __dinst);\n");
                sb.append("var save = xdc.om.$curpkg;\n");
                sb.append("xdc.om.$$bind('$curpkg', __mod.$package.$name);\n");
                sb.append("__mod.instance$meta$init.$fxn.apply(__inst, [id, tickFxn]);\n");
                sb.append("xdc.om.$$bind('$curpkg', save);\n");
                sb.append("__inst.$$bless();\n");
                sb.append("if (xdc.om.$$phase >= 5) xdc.om['ti.sysbios.hal.Timer_TimerProxy'].__initObject(__inst);\n");
                sb.append("__inst.$$bind('$$phase', xdc.om.$$phase);\n");
                sb.append("return __inst;\n");
            sb.append("}\n");
            Global.eval(sb.toString());
        }//isCFG
    }

    void Cache_CacheProxy$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void Hwi$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn Hwi.viewGetHandle
        fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.Hwi$$viewGetHandle", new Proto.Fxn(om.findStrict("ti.sysbios.hal.Hwi.Module", "ti.sysbios.hal"), (Proto)om.findStrict("ti.sysbios.hal.Hwi.Handle", "ti.sysbios.hal"), 1, 1, false));
                fxn.addArg(0, "pi", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF);
    }

    void Timer$$FUNCTIONS()
    {
        Proto.Fxn fxn;

        // fxn Timer.viewGetHandle
        fxn = (Proto.Fxn)om.bind("ti.sysbios.hal.Timer$$viewGetHandle", new Proto.Fxn(om.findStrict("ti.sysbios.hal.Timer.Module", "ti.sysbios.hal"), (Proto)om.findStrict("ti.sysbios.hal.Timer.Handle", "ti.sysbios.hal"), 1, 1, false));
                fxn.addArg(0, "pi", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF);
    }

    void TimerNull$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void Cache$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void CacheNull$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void Hwi_HwiProxy$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void Timer_TimerProxy$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void Cache_CacheProxy$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void Hwi$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sysbios.hal.Hwi.Instance_State", "ti.sysbios.hal");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("pi", "UPtr"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sysbios.hal.Hwi.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sysbios.hal.Hwi.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sysbios.hal.Hwi.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void Timer$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sysbios.hal.Timer.Instance_State", "ti.sysbios.hal");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        sizes.add(Global.newArray("pi", "UPtr"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sysbios.hal.Timer.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sysbios.hal.Timer.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sysbios.hal.Timer.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void TimerNull$$SIZES()
    {
        Proto.Str so;
        Object fxn;

        so = (Proto.Str)om.findStrict("ti.sysbios.hal.TimerNull.Instance_State", "ti.sysbios.hal");
        sizes.clear();
        sizes.add(Global.newArray("__fxns", "UPtr"));
        so.bind("$$sizes", Global.newArray(sizes.toArray()));
        fxn = Global.eval("function() { return $$sizeof(xdc.om['ti.sysbios.hal.TimerNull.Instance_State']); }");
        so.bind("$sizeof", fxn);
        fxn = Global.eval("function() { return $$alignof(xdc.om['ti.sysbios.hal.TimerNull.Instance_State']); }");
        so.bind("$alignof", fxn);
        fxn = Global.eval("function(fld) { return $$offsetof(xdc.om['ti.sysbios.hal.TimerNull.Instance_State'], fld); }");
        so.bind("$offsetof", fxn);
    }

    void Cache$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void CacheNull$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void Hwi_HwiProxy$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void Timer_TimerProxy$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void Cache_CacheProxy$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void Hwi$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sysbios/hal/Hwi.xs");
        om.bind("ti.sysbios.hal.Hwi$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi.Module", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi.Module", om.findStrict("ti.sysbios.interfaces.IHwi.Module", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("E_stackOverflow", (Proto)om.findStrict("xdc.runtime.Error$$Id", "ti.sysbios.hal"), Global.newObject("msg", "E_stackOverflow: ISR stack overflow."), "w");
            po.addFld("initStackFlag", $$T_Bool, true, "wh");
            po.addFld("checkStackFlag", $$T_Bool, true, "wh");
            po.addFld("numHooks", Proto.Elm.newCNum("(xdc_UInt)"), 0L, "wh");
            po.addFldV("HwiProxy", (Proto)om.findStrict("ti.sysbios.interfaces.IHwi.Module", "ti.sysbios.hal"), null, "wh", $$delegGet, $$delegSet);
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sysbios.hal.Hwi$$create", "ti.sysbios.hal"), Global.get("ti$sysbios$hal$Hwi$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sysbios.hal.Hwi$$construct", "ti.sysbios.hal"), Global.get("ti$sysbios$hal$Hwi$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sysbios.hal.Hwi$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Hwi$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Hwi$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Hwi$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sysbios.hal.Hwi$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Hwi$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
                fxn = Global.get(cap, "addHookSet");
                if (fxn != null) po.addFxn("addHookSet", (Proto.Fxn)om.findStrict("ti.sysbios.interfaces.IHwi$$addHookSet", "ti.sysbios.hal"), fxn);
                fxn = Global.get(cap, "viewGetStackInfo");
                if (fxn != null) po.addFxn("viewGetStackInfo", (Proto.Fxn)om.findStrict("ti.sysbios.interfaces.IHwi$$viewGetStackInfo", "ti.sysbios.hal"), fxn);
                po.addFxn("viewGetHandle", (Proto.Fxn)om.findStrict("ti.sysbios.hal.Hwi$$viewGetHandle", "ti.sysbios.hal"), Global.get(cap, "viewGetHandle"));
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi.Instance", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi.Instance", om.findStrict("ti.sysbios.interfaces.IHwi.Instance", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi$$Params", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi.Params", om.findStrict("ti.sysbios.interfaces.IHwi$$Params", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi$$Object", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi.Object", om.findStrict("ti.sysbios.hal.Hwi.Instance", "ti.sysbios.hal"));
        // struct Hwi.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi$$Instance_State", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("pi", (Proto)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Handle", "ti.sysbios.hal"), $$UNDEF, "w");
    }

    void Timer$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sysbios/hal/Timer.xs");
        om.bind("ti.sysbios.hal.Timer$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer.Module", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer.Module", om.findStrict("ti.sysbios.interfaces.ITimer.Module", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("ANY", Proto.Elm.newCNum("(xdc_UInt)"), Global.eval("~0"), "rh");
        if (isCFG) {
            po.addFldV("TimerProxy", (Proto)om.findStrict("ti.sysbios.interfaces.ITimer.Module", "ti.sysbios.hal"), null, "wh", $$delegGet, $$delegSet);
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sysbios.hal.Timer$$create", "ti.sysbios.hal"), Global.get("ti$sysbios$hal$Timer$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sysbios.hal.Timer$$construct", "ti.sysbios.hal"), Global.get("ti$sysbios$hal$Timer$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sysbios.hal.Timer$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Timer$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Timer$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Timer$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sysbios.hal.Timer$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Timer$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
                po.addFxn("viewGetHandle", (Proto.Fxn)om.findStrict("ti.sysbios.hal.Timer$$viewGetHandle", "ti.sysbios.hal"), Global.get(cap, "viewGetHandle"));
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer.Instance", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer.Instance", om.findStrict("ti.sysbios.interfaces.ITimer.Instance", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("ANY", Proto.Elm.newCNum("(xdc_UInt)"), Global.eval("~0"), "rh");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer$$Params", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer.Params", om.findStrict("ti.sysbios.interfaces.ITimer$$Params", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("ANY", Proto.Elm.newCNum("(xdc_UInt)"), Global.eval("~0"), "rh");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer$$Object", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer.Object", om.findStrict("ti.sysbios.hal.Timer.Instance", "ti.sysbios.hal"));
        // struct Timer.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer$$Instance_State", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("pi", (Proto)om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Handle", "ti.sysbios.hal"), $$UNDEF, "w");
    }

    void TimerNull$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sysbios/hal/TimerNull.xs");
        om.bind("ti.sysbios.hal.TimerNull$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.TimerNull.Module", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.TimerNull.Module", om.findStrict("ti.sysbios.interfaces.ITimer.Module", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("ANY", Proto.Elm.newCNum("(xdc_UInt)"), Global.eval("~0"), "rh");
        if (isCFG) {
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sysbios.hal.TimerNull$$create", "ti.sysbios.hal"), Global.get("ti$sysbios$hal$TimerNull$$create"));
                        po.addFxn("construct", (Proto.Fxn)om.findStrict("ti.sysbios.hal.TimerNull$$construct", "ti.sysbios.hal"), Global.get("ti$sysbios$hal$TimerNull$$construct"));
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sysbios.hal.TimerNull$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sysbios.hal.TimerNull$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$meta$init");
        if (fxn != null) om.bind("ti.sysbios.hal.TimerNull$$instance$meta$init", true);
        if (fxn != null) po.addFxn("instance$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sysbios.hal.TimerNull$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sysbios.hal.TimerNull$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
        fxn = Global.get(cap, "instance$static$init");
        if (fxn != null) om.bind("ti.sysbios.hal.TimerNull$$instance$static$init", true);
        if (fxn != null) po.addFxn("instance$static$init", $$T_Met, fxn);
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.TimerNull.Instance", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.TimerNull.Instance", om.findStrict("ti.sysbios.interfaces.ITimer.Instance", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("ANY", Proto.Elm.newCNum("(xdc_UInt)"), Global.eval("~0"), "rh");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.TimerNull$$Params", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.TimerNull.Params", om.findStrict("ti.sysbios.interfaces.ITimer$$Params", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("ANY", Proto.Elm.newCNum("(xdc_UInt)"), Global.eval("~0"), "rh");
        if (isCFG) {
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.TimerNull$$Object", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.TimerNull.Object", om.findStrict("ti.sysbios.hal.TimerNull.Instance", "ti.sysbios.hal"));
        // struct TimerNull.Instance_State
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.TimerNull$$Instance_State", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.TimerNull.Instance_State", null);
                po.addFld("$hostonly", $$T_Num, 0, "r");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.TimerNull$$Instance_State", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.TimerNull.Instance_State", null);
        po.addFld("$hostonly", $$T_Num, 0, "r");
    }

    void Cache$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sysbios/hal/Cache.xs");
        om.bind("ti.sysbios.hal.Cache$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Cache.Module", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Cache.Module", om.findStrict("ti.sysbios.interfaces.ICache.Module", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFldV("CacheProxy", (Proto)om.findStrict("ti.sysbios.interfaces.ICache.Module", "ti.sysbios.hal"), null, "wh", $$delegGet, $$delegSet);
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sysbios.hal.Cache$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Cache$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sysbios.hal.Cache$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sysbios.hal.Cache$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
    }

    void CacheNull$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.CacheNull.Module", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.CacheNull.Module", om.findStrict("ti.sysbios.interfaces.ICache.Module", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
    }

    void Hwi_HwiProxy$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Module", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi_HwiProxy.Module", om.findStrict("ti.sysbios.interfaces.IHwi.Module", "ti.sysbios.hal"));
                po.addFld("delegate$", (Proto)om.findStrict("ti.sysbios.interfaces.IHwi.Module", "ti.sysbios.hal"), null, "wh");
                po.addFld("abstractInstances$", $$T_Bool, false, "wh");
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFldV("dispatcherAutoNestingSupport", $$T_Bool, true, "w", $$proxyGet, $$proxySet);
            po.addFldV("dispatcherSwiSupport", $$T_Bool, $$UNDEF, "w", $$proxyGet, $$proxySet);
            po.addFldV("dispatcherTaskSupport", $$T_Bool, $$UNDEF, "w", $$proxyGet, $$proxySet);
            po.addFldV("dispatcherIrpTrackingSupport", $$T_Bool, true, "w", $$proxyGet, $$proxySet);
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy$$create", "ti.sysbios.hal"), Global.get("ti$sysbios$hal$Hwi_HwiProxy$$create"));
        }//isCFG
                po.addFxn("addHookSet", (Proto.Fxn)om.findStrict("ti.sysbios.interfaces.IHwi$$addHookSet", "ti.sysbios.hal"), $$UNDEF);
                po.addFxn("viewGetStackInfo", (Proto.Fxn)om.findStrict("ti.sysbios.interfaces.IHwi$$viewGetStackInfo", "ti.sysbios.hal"), $$UNDEF);
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Instance", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi_HwiProxy.Instance", om.findStrict("ti.sysbios.interfaces.IHwi.Instance", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFldV("maskSetting", (Proto)om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption", "ti.sysbios.hal"), om.find("ti.sysbios.interfaces.IHwi.MaskingOption_SELF"), "w", $$proxyGet, $$proxySet);
            po.addFldV("arg", new Proto.Adr("xdc_UArg", "Pv"), 0L, "w", $$proxyGet, $$proxySet);
            po.addFldV("enableInt", $$T_Bool, true, "w", $$proxyGet, $$proxySet);
            po.addFldV("eventId", Proto.Elm.newCNum("(xdc_Int)"), Global.eval("-1"), "w", $$proxyGet, $$proxySet);
            po.addFldV("priority", Proto.Elm.newCNum("(xdc_Int)"), Global.eval("-1"), "w", $$proxyGet, $$proxySet);
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy$$Params", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi_HwiProxy.Params", om.findStrict("ti.sysbios.interfaces.IHwi$$Params", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("maskSetting", (Proto)om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption", "ti.sysbios.hal"), om.find("ti.sysbios.interfaces.IHwi.MaskingOption_SELF"), "w");
            po.addFld("arg", new Proto.Adr("xdc_UArg", "Pv"), 0L, "w");
            po.addFld("enableInt", $$T_Bool, true, "w");
            po.addFld("eventId", Proto.Elm.newCNum("(xdc_Int)"), Global.eval("-1"), "w");
            po.addFld("priority", Proto.Elm.newCNum("(xdc_Int)"), Global.eval("-1"), "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy$$Object", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi_HwiProxy.Object", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Instance", "ti.sysbios.hal"));
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy$$Instance_State", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Hwi_HwiProxy.Instance_State", null);
        po.addFld("$hostonly", $$T_Num, 0, "r");
    }

    void Timer_TimerProxy$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Module", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer_TimerProxy.Module", om.findStrict("ti.sysbios.interfaces.ITimer.Module", "ti.sysbios.hal"));
                po.addFld("delegate$", (Proto)om.findStrict("ti.sysbios.interfaces.ITimer.Module", "ti.sysbios.hal"), null, "wh");
                po.addFld("abstractInstances$", $$T_Bool, false, "wh");
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("ANY", Proto.Elm.newCNum("(xdc_UInt)"), Global.eval("~0"), "rh");
        if (isCFG) {
            po.addFldV("supportsDynamic", $$T_Bool, false, "wh", $$proxyGet, $$proxySet);
            po.addFldV("defaultDynamic", $$T_Bool, false, "wh", $$proxyGet, $$proxySet);
        }//isCFG
        if (isCFG) {
                        po.addFxn("create", (Proto.Fxn)om.findStrict("ti.sysbios.hal.Timer_TimerProxy$$create", "ti.sysbios.hal"), Global.get("ti$sysbios$hal$Timer_TimerProxy$$create"));
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Instance", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer_TimerProxy.Instance", om.findStrict("ti.sysbios.interfaces.ITimer.Instance", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("ANY", Proto.Elm.newCNum("(xdc_UInt)"), Global.eval("~0"), "rh");
        if (isCFG) {
            po.addFldV("runMode", (Proto)om.findStrict("ti.sysbios.interfaces.ITimer.RunMode", "ti.sysbios.hal"), om.find("ti.sysbios.interfaces.ITimer.RunMode_CONTINUOUS"), "w", $$proxyGet, $$proxySet);
            po.addFldV("startMode", (Proto)om.findStrict("ti.sysbios.interfaces.ITimer.StartMode", "ti.sysbios.hal"), om.find("ti.sysbios.interfaces.ITimer.StartMode_AUTO"), "w", $$proxyGet, $$proxySet);
            po.addFldV("arg", new Proto.Adr("xdc_UArg", "Pv"), null, "w", $$proxyGet, $$proxySet);
            po.addFldV("period", Proto.Elm.newCNum("(xdc_UInt32)"), 0L, "w", $$proxyGet, $$proxySet);
            po.addFldV("periodType", (Proto)om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType", "ti.sysbios.hal"), om.find("ti.sysbios.interfaces.ITimer.PeriodType_MICROSECS"), "w", $$proxyGet, $$proxySet);
            po.addFldV("extFreq", (Proto)om.findStrict("xdc.runtime.Types.FreqHz", "ti.sysbios.hal"), Global.newObject("lo", 0L, "hi", 0L), "w", $$proxyGet, $$proxySet);
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer_TimerProxy$$Params", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer_TimerProxy.Params", om.findStrict("ti.sysbios.interfaces.ITimer$$Params", "ti.sysbios.hal"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
                po.addFld("ANY", Proto.Elm.newCNum("(xdc_UInt)"), Global.eval("~0"), "rh");
        if (isCFG) {
            po.addFld("runMode", (Proto)om.findStrict("ti.sysbios.interfaces.ITimer.RunMode", "ti.sysbios.hal"), om.find("ti.sysbios.interfaces.ITimer.RunMode_CONTINUOUS"), "w");
            po.addFld("startMode", (Proto)om.findStrict("ti.sysbios.interfaces.ITimer.StartMode", "ti.sysbios.hal"), om.find("ti.sysbios.interfaces.ITimer.StartMode_AUTO"), "w");
            po.addFld("arg", new Proto.Adr("xdc_UArg", "Pv"), null, "w");
            po.addFld("period", Proto.Elm.newCNum("(xdc_UInt32)"), 0L, "w");
            po.addFld("periodType", (Proto)om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType", "ti.sysbios.hal"), om.find("ti.sysbios.interfaces.ITimer.PeriodType_MICROSECS"), "w");
            po.addFld("extFreq", (Proto)om.findStrict("xdc.runtime.Types.FreqHz", "ti.sysbios.hal"), Global.newObject("lo", 0L, "hi", 0L), "w");
                        po.addFld("instance", (Proto)om.findStrict("xdc.runtime.IInstance.Params", "ti.sysbios.hal"), $$UNDEF, "w");
        }//isCFG
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer_TimerProxy$$Object", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer_TimerProxy.Object", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Instance", "ti.sysbios.hal"));
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer_TimerProxy$$Instance_State", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Timer_TimerProxy.Instance_State", null);
        po.addFld("$hostonly", $$T_Num, 0, "r");
    }

    void Cache_CacheProxy$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Cache_CacheProxy.Module", "ti.sysbios.hal");
        po.init("ti.sysbios.hal.Cache_CacheProxy.Module", om.findStrict("ti.sysbios.interfaces.ICache.Module", "ti.sysbios.hal"));
                po.addFld("delegate$", (Proto)om.findStrict("ti.sysbios.interfaces.ICache.Module", "ti.sysbios.hal"), null, "wh");
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
        }//isCFG
    }

    void Hwi$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Hwi", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi$$Instance_State", "ti.sysbios.hal");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sysbios.hal.Hwi.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi$$Instance_State", "ti.sysbios.hal");
    }

    void Timer$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Timer", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer$$Instance_State", "ti.sysbios.hal");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sysbios.hal.Timer.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer$$Instance_State", "ti.sysbios.hal");
    }

    void TimerNull$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.TimerNull", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.TimerNull$$Instance_State", "ti.sysbios.hal");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
        vo.bind("Instance_State$fetchDesc", Global.newObject("type", "ti.sysbios.hal.TimerNull.Instance_State", "isScalar", false));
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.TimerNull$$Instance_State", "ti.sysbios.hal");
    }

    void Cache$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Cache", "ti.sysbios.hal");
    }

    void CacheNull$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.CacheNull", "ti.sysbios.hal");
    }

    void Hwi_HwiProxy$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy$$Instance_State", "ti.sysbios.hal");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
    }

    void Timer_TimerProxy$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Timer_TimerProxy", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer_TimerProxy$$Instance_State", "ti.sysbios.hal");
        po.addFld("__fxns", new Proto.Adr("xdc_Ptr", "Pv"), $$UNDEF, "w");
    }

    void Cache_CacheProxy$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Cache_CacheProxy", "ti.sysbios.hal");
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.sysbios.hal.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.sysbios.hal"));
        Scriptable cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sysbios/hal/package.xs");
        om.bind("xdc.IPackage$$capsule", cap);
        Object fxn;
                fxn = Global.get(cap, "init");
                if (fxn != null) pkgP.addFxn("init", (Proto.Fxn)om.findStrict("xdc.IPackage$$init", "ti.sysbios.hal"), fxn);
                fxn = Global.get(cap, "close");
                if (fxn != null) pkgP.addFxn("close", (Proto.Fxn)om.findStrict("xdc.IPackage$$close", "ti.sysbios.hal"), fxn);
                fxn = Global.get(cap, "validate");
                if (fxn != null) pkgP.addFxn("validate", (Proto.Fxn)om.findStrict("xdc.IPackage$$validate", "ti.sysbios.hal"), fxn);
                fxn = Global.get(cap, "exit");
                if (fxn != null) pkgP.addFxn("exit", (Proto.Fxn)om.findStrict("xdc.IPackage$$exit", "ti.sysbios.hal"), fxn);
                fxn = Global.get(cap, "getLibs");
                if (fxn != null) pkgP.addFxn("getLibs", (Proto.Fxn)om.findStrict("xdc.IPackage$$getLibs", "ti.sysbios.hal"), fxn);
                fxn = Global.get(cap, "getSects");
                if (fxn != null) pkgP.addFxn("getSects", (Proto.Fxn)om.findStrict("xdc.IPackage$$getSects", "ti.sysbios.hal"), fxn);
        pkgP.bind("$capsule", cap);
        pkgV.init2(pkgP, "ti.sysbios.hal", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.sysbios.hal");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.sysbios.hal.");
        pkgV.bind("$vers", Global.newArray("2, 0, 0, 0"));
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        imports.add(Global.newArray("ti.sysbios.interfaces", Global.newArray()));
        imports.add(Global.newArray("ti.sysbios.family", Global.newArray()));
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.sysbios.hal'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
            sb.append("'lib/debug/ti.sysbios.hal.a28L',\n");
            sb.append("'lib/debug/ti.sysbios.hal.a28FP',\n");
            sb.append("'lib/debug/ti.sysbios.hal.a64',\n");
            sb.append("'lib/debug/ti.sysbios.hal.a64P',\n");
            sb.append("'lib/debug/ti.sysbios.hal.a64Pe',\n");
            sb.append("'lib/debug/ti.sysbios.hal.a674',\n");
            sb.append("'lib/debug/ti.sysbios.hal.a430',\n");
            sb.append("'lib/debug/ti.sysbios.hal.a430X',\n");
            sb.append("'lib/debug/ti.sysbios.hal.a430XS',\n");
            sb.append("'lib/debug/ti.sysbios.hal.ae430X',\n");
            sb.append("'lib/debug/ti.sysbios.hal.ae430XS',\n");
            sb.append("'lib/debug/ti.sysbios.hal.ae64P',\n");
            sb.append("'lib/debug/ti.sysbios.hal.ae64Pe',\n");
            sb.append("'lib/debug/ti.sysbios.hal.ae674',\n");
            sb.append("'lib/debug/ti.sysbios.hal.ae64T',\n");
            sb.append("'lib/debug/ti.sysbios.hal.ae66',\n");
            sb.append("'lib/debug/ti.sysbios.hal.ae66e',\n");
            sb.append("'lib/debug/ti.sysbios.hal.aearp32',\n");
            sb.append("'lib/debug/ti.sysbios.hal.ae9',\n");
            sb.append("'lib/debug/ti.sysbios.hal.aea8f',\n");
            sb.append("'lib/debug/ti.sysbios.hal.aea8fnv',\n");
            sb.append("'lib/debug/ti.sysbios.hal.aem3',\n");
            sb.append("'lib/debug/ti.sysbios.hal.aem4',\n");
            sb.append("'lib/debug/ti.sysbios.hal.aem4f',\n");
            sb.append("'lib/debug/ti.sysbios.hal.aer4te',\n");
            sb.append("'lib/debug/ti.sysbios.hal.aer4fte',\n");
            sb.append("'lib/debug/ti.sysbios.hal.am3g',\n");
            sb.append("'lib/debug/ti.sysbios.hal.am4g',\n");
            sb.append("'lib/debug/ti.sysbios.hal.am4fg',\n");
            sb.append("'lib/debug/ti.sysbios.hal.a86W',\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
            sb.append("['lib/debug/ti.sysbios.hal.a28L', {target: 'ti.targets.C28_large', suffix: '28L'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.a28FP', {target: 'ti.targets.C28_float', suffix: '28FP'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.a64', {target: 'ti.targets.C64', suffix: '64'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.a64P', {target: 'ti.targets.C64P', suffix: '64P'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.a64Pe', {target: 'ti.targets.C64P_big_endian', suffix: '64Pe'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.a674', {target: 'ti.targets.C674', suffix: '674'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.a430', {target: 'ti.targets.msp430.MSP430', suffix: '430'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.a430X', {target: 'ti.targets.msp430.MSP430X', suffix: '430X'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.a430XS', {target: 'ti.targets.msp430.MSP430X_small', suffix: '430XS'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.ae430X', {target: 'ti.targets.msp430.elf.MSP430X', suffix: 'e430X'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.ae430XS', {target: 'ti.targets.msp430.elf.MSP430X_small', suffix: 'e430XS'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.ae64P', {target: 'ti.targets.elf.C64P', suffix: 'e64P'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.ae64Pe', {target: 'ti.targets.elf.C64P_big_endian', suffix: 'e64Pe'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.ae64T', {target: 'ti.targets.elf.C64T', suffix: 'e64T'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.aearp32', {target: 'ti.targets.arp32.elf.ARP32', suffix: 'earp32'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.aea8f', {target: 'ti.targets.arm.elf.A8F', suffix: 'ea8f'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.aer4te', {target: 'ti.targets.arm.elf.R4t_big_endian', suffix: 'er4te'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.aer4fte', {target: 'ti.targets.arm.elf.R4Ft_big_endian', suffix: 'er4fte'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.am3g', {target: 'gnu.targets.arm.M3', suffix: 'm3g'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.am4g', {target: 'gnu.targets.arm.M4', suffix: 'm4g'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.am4fg', {target: 'gnu.targets.arm.M4F', suffix: 'm4fg'}],\n");
            sb.append("['lib/debug/ti.sysbios.hal.a86W', {target: 'microsoft.targets.Win32', suffix: '86W'}],\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void Hwi$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Hwi", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi.Module", "ti.sysbios.hal");
        vo.init2(po, "ti.sysbios.hal.Hwi", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sysbios.hal.Hwi$$capsule", "ti.sysbios.hal"));
        vo.bind("Instance", om.findStrict("ti.sysbios.hal.Hwi.Instance", "ti.sysbios.hal"));
        vo.bind("Params", om.findStrict("ti.sysbios.hal.Hwi.Params", "ti.sysbios.hal"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sysbios.hal.Hwi.Params", "ti.sysbios.hal")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sysbios.hal.Hwi.Handle", "ti.sysbios.hal"));
        vo.bind("$package", om.findStrict("ti.sysbios.hal", "ti.sysbios.hal"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("FuncPtr", om.findStrict("ti.sysbios.interfaces.IHwi.FuncPtr", "ti.sysbios.hal"));
        vo.bind("Irp", om.findStrict("ti.sysbios.interfaces.IHwi.Irp", "ti.sysbios.hal"));
        vo.bind("HookSet", om.findStrict("ti.sysbios.interfaces.IHwi.HookSet", "ti.sysbios.hal"));
        tdefs.add(om.findStrict("ti.sysbios.interfaces.IHwi.HookSet", "ti.sysbios.hal"));
        vo.bind("MaskingOption", om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption", "ti.sysbios.hal"));
        vo.bind("StackInfo", om.findStrict("ti.sysbios.interfaces.IHwi.StackInfo", "ti.sysbios.hal"));
        tdefs.add(om.findStrict("ti.sysbios.interfaces.IHwi.StackInfo", "ti.sysbios.hal"));
        mcfgs.add("dispatcherAutoNestingSupport");
        mcfgs.add("dispatcherSwiSupport");
        mcfgs.add("dispatcherTaskSupport");
        mcfgs.add("dispatcherIrpTrackingSupport");
        mcfgs.add("E_stackOverflow");
        icfgs.add("numHooks");
        vo.bind("HwiProxy$proxy", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy", "ti.sysbios.hal"));
        proxies.add("HwiProxy");
        vo.bind("Instance_State", om.findStrict("ti.sysbios.hal.Hwi.Instance_State", "ti.sysbios.hal"));
        tdefs.add(om.findStrict("ti.sysbios.hal.Hwi.Instance_State", "ti.sysbios.hal"));
        vo.bind("MaskingOption_NONE", om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption_NONE", "ti.sysbios.hal"));
        vo.bind("MaskingOption_ALL", om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption_ALL", "ti.sysbios.hal"));
        vo.bind("MaskingOption_SELF", om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption_SELF", "ti.sysbios.hal"));
        vo.bind("MaskingOption_BITMASK", om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption_BITMASK", "ti.sysbios.hal"));
        vo.bind("MaskingOption_LOWER", om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption_LOWER", "ti.sysbios.hal"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sysbios.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sysbios.hal")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", om.has("ti.sysbios.hal.Hwi$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sysbios$hal$Hwi$$__initObject"));
        }//isCFG
        vo.bind("getStackInfo", om.findStrict("ti.sysbios.hal.Hwi.getStackInfo", "ti.sysbios.hal"));
        vo.bind("startup", om.findStrict("ti.sysbios.hal.Hwi.startup", "ti.sysbios.hal"));
        vo.bind("switchFromBootStack", om.findStrict("ti.sysbios.hal.Hwi.switchFromBootStack", "ti.sysbios.hal"));
        vo.bind("post", om.findStrict("ti.sysbios.hal.Hwi.post", "ti.sysbios.hal"));
        vo.bind("getTaskSP", om.findStrict("ti.sysbios.hal.Hwi.getTaskSP", "ti.sysbios.hal"));
        vo.bind("disableInterrupt", om.findStrict("ti.sysbios.hal.Hwi.disableInterrupt", "ti.sysbios.hal"));
        vo.bind("enableInterrupt", om.findStrict("ti.sysbios.hal.Hwi.enableInterrupt", "ti.sysbios.hal"));
        vo.bind("restoreInterrupt", om.findStrict("ti.sysbios.hal.Hwi.restoreInterrupt", "ti.sysbios.hal"));
        vo.bind("clearInterrupt", om.findStrict("ti.sysbios.hal.Hwi.clearInterrupt", "ti.sysbios.hal"));
        vo.bind("$$fxntab", Global.newArray("ti_sysbios_hal_Hwi_Handle__label__E", "ti_sysbios_hal_Hwi_Module__startupDone__E", "ti_sysbios_hal_Hwi_Object__create__E", "ti_sysbios_hal_Hwi_Object__delete__E", "ti_sysbios_hal_Hwi_Object__destruct__E", "ti_sysbios_hal_Hwi_Object__get__E", "ti_sysbios_hal_Hwi_Object__first__E", "ti_sysbios_hal_Hwi_Object__next__E", "ti_sysbios_hal_Hwi_Params__init__E", "ti_sysbios_hal_Hwi_getStackInfo__E", "ti_sysbios_hal_Hwi_startup__E", "ti_sysbios_hal_Hwi_switchFromBootStack__E", "ti_sysbios_hal_Hwi_post__E", "ti_sysbios_hal_Hwi_getTaskSP__E", "ti_sysbios_hal_Hwi_disableInterrupt__E", "ti_sysbios_hal_Hwi_enableInterrupt__E", "ti_sysbios_hal_Hwi_restoreInterrupt__E", "ti_sysbios_hal_Hwi_clearInterrupt__E", "ti_sysbios_hal_Hwi_getFunc__E", "ti_sysbios_hal_Hwi_setFunc__E", "ti_sysbios_hal_Hwi_getIrp__E", "ti_sysbios_hal_Hwi_disable__E", "ti_sysbios_hal_Hwi_enable__E", "ti_sysbios_hal_Hwi_restore__E", "ti_sysbios_hal_Hwi_getHookContext__E", "ti_sysbios_hal_Hwi_setHookContext__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray("E_stackOverflow"));
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.setElem("", true);
        atmap.setElem("", "./Hwi.xdt");
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sysbios.hal.Hwi.Object", "ti.sysbios.hal"));
        vo.bind("MODULE_STARTUP$", 1);
        vo.bind("PROXY$", 0);
        loggables.clear();
        loggables.add(Global.newObject("name", "getStackInfo", "entry", "%p, %d", "exit", "%d"));
        vo.bind("$$loggables", loggables.toArray());
        vo.bind("TEMPLATE$", "./Hwi.xdt");
        pkgV.bind("Hwi", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Hwi");
    }

    void Timer$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Timer", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer.Module", "ti.sysbios.hal");
        vo.init2(po, "ti.sysbios.hal.Timer", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sysbios.hal.Timer$$capsule", "ti.sysbios.hal"));
        vo.bind("Instance", om.findStrict("ti.sysbios.hal.Timer.Instance", "ti.sysbios.hal"));
        vo.bind("Params", om.findStrict("ti.sysbios.hal.Timer.Params", "ti.sysbios.hal"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sysbios.hal.Timer.Params", "ti.sysbios.hal")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sysbios.hal.Timer.Handle", "ti.sysbios.hal"));
        vo.bind("$package", om.findStrict("ti.sysbios.hal", "ti.sysbios.hal"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("FuncPtr", om.findStrict("ti.sysbios.interfaces.ITimer.FuncPtr", "ti.sysbios.hal"));
        vo.bind("StartMode", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode", "ti.sysbios.hal"));
        vo.bind("RunMode", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode", "ti.sysbios.hal"));
        vo.bind("Status", om.findStrict("ti.sysbios.interfaces.ITimer.Status", "ti.sysbios.hal"));
        vo.bind("PeriodType", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType", "ti.sysbios.hal"));
        vo.bind("TimerProxy$proxy", om.findStrict("ti.sysbios.hal.Timer_TimerProxy", "ti.sysbios.hal"));
        proxies.add("TimerProxy");
        vo.bind("Instance_State", om.findStrict("ti.sysbios.hal.Timer.Instance_State", "ti.sysbios.hal"));
        tdefs.add(om.findStrict("ti.sysbios.hal.Timer.Instance_State", "ti.sysbios.hal"));
        vo.bind("StartMode_AUTO", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode_AUTO", "ti.sysbios.hal"));
        vo.bind("StartMode_USER", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode_USER", "ti.sysbios.hal"));
        vo.bind("RunMode_CONTINUOUS", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode_CONTINUOUS", "ti.sysbios.hal"));
        vo.bind("RunMode_ONESHOT", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode_ONESHOT", "ti.sysbios.hal"));
        vo.bind("RunMode_DYNAMIC", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode_DYNAMIC", "ti.sysbios.hal"));
        vo.bind("Status_INUSE", om.findStrict("ti.sysbios.interfaces.ITimer.Status_INUSE", "ti.sysbios.hal"));
        vo.bind("Status_FREE", om.findStrict("ti.sysbios.interfaces.ITimer.Status_FREE", "ti.sysbios.hal"));
        vo.bind("PeriodType_MICROSECS", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType_MICROSECS", "ti.sysbios.hal"));
        vo.bind("PeriodType_COUNTS", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType_COUNTS", "ti.sysbios.hal"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sysbios.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sysbios.hal")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 1);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", om.has("ti.sysbios.hal.Timer$$instance$static$init", null) ? 1 : 0);
            vo.bind("__initObject", Global.get("ti$sysbios$hal$Timer$$__initObject"));
        }//isCFG
        vo.bind("getNumTimers", om.findStrict("ti.sysbios.hal.Timer.getNumTimers", "ti.sysbios.hal"));
        vo.bind("getStatus", om.findStrict("ti.sysbios.hal.Timer.getStatus", "ti.sysbios.hal"));
        vo.bind("startup", om.findStrict("ti.sysbios.hal.Timer.startup", "ti.sysbios.hal"));
        vo.bind("$$fxntab", Global.newArray("ti_sysbios_hal_Timer_Handle__label__E", "ti_sysbios_hal_Timer_Module__startupDone__E", "ti_sysbios_hal_Timer_Object__create__E", "ti_sysbios_hal_Timer_Object__delete__E", "ti_sysbios_hal_Timer_Object__destruct__E", "ti_sysbios_hal_Timer_Object__get__E", "ti_sysbios_hal_Timer_Object__first__E", "ti_sysbios_hal_Timer_Object__next__E", "ti_sysbios_hal_Timer_Params__init__E", "ti_sysbios_hal_Timer_getNumTimers__E", "ti_sysbios_hal_Timer_getStatus__E", "ti_sysbios_hal_Timer_startup__E", "ti_sysbios_hal_Timer_getMaxTicks__E", "ti_sysbios_hal_Timer_setNextTick__E", "ti_sysbios_hal_Timer_start__E", "ti_sysbios_hal_Timer_stop__E", "ti_sysbios_hal_Timer_setPeriod__E", "ti_sysbios_hal_Timer_setPeriodMicroSecs__E", "ti_sysbios_hal_Timer_getPeriod__E", "ti_sysbios_hal_Timer_getCount__E", "ti_sysbios_hal_Timer_getFreq__E", "ti_sysbios_hal_Timer_getFunc__E", "ti_sysbios_hal_Timer_setFunc__E", "ti_sysbios_hal_Timer_trigger__E", "ti_sysbios_hal_Timer_getExpiredCounts__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.setElem("", true);
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sysbios.hal.Timer.Object", "ti.sysbios.hal"));
        vo.bind("MODULE_STARTUP$", 1);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("Timer", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Timer");
    }

    void TimerNull$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.TimerNull", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.TimerNull.Module", "ti.sysbios.hal");
        vo.init2(po, "ti.sysbios.hal.TimerNull", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sysbios.hal.TimerNull$$capsule", "ti.sysbios.hal"));
        vo.bind("Instance", om.findStrict("ti.sysbios.hal.TimerNull.Instance", "ti.sysbios.hal"));
        vo.bind("Params", om.findStrict("ti.sysbios.hal.TimerNull.Params", "ti.sysbios.hal"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sysbios.hal.TimerNull.Params", "ti.sysbios.hal")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sysbios.hal.TimerNull.Handle", "ti.sysbios.hal"));
        vo.bind("$package", om.findStrict("ti.sysbios.hal", "ti.sysbios.hal"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("FuncPtr", om.findStrict("ti.sysbios.interfaces.ITimer.FuncPtr", "ti.sysbios.hal"));
        vo.bind("StartMode", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode", "ti.sysbios.hal"));
        vo.bind("RunMode", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode", "ti.sysbios.hal"));
        vo.bind("Status", om.findStrict("ti.sysbios.interfaces.ITimer.Status", "ti.sysbios.hal"));
        vo.bind("PeriodType", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType", "ti.sysbios.hal"));
        vo.bind("Instance_State", om.findStrict("ti.sysbios.hal.TimerNull.Instance_State", "ti.sysbios.hal"));
        tdefs.add(om.findStrict("ti.sysbios.hal.TimerNull.Instance_State", "ti.sysbios.hal"));
        vo.bind("StartMode_AUTO", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode_AUTO", "ti.sysbios.hal"));
        vo.bind("StartMode_USER", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode_USER", "ti.sysbios.hal"));
        vo.bind("RunMode_CONTINUOUS", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode_CONTINUOUS", "ti.sysbios.hal"));
        vo.bind("RunMode_ONESHOT", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode_ONESHOT", "ti.sysbios.hal"));
        vo.bind("RunMode_DYNAMIC", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode_DYNAMIC", "ti.sysbios.hal"));
        vo.bind("Status_INUSE", om.findStrict("ti.sysbios.interfaces.ITimer.Status_INUSE", "ti.sysbios.hal"));
        vo.bind("Status_FREE", om.findStrict("ti.sysbios.interfaces.ITimer.Status_FREE", "ti.sysbios.hal"));
        vo.bind("PeriodType_MICROSECS", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType_MICROSECS", "ti.sysbios.hal"));
        vo.bind("PeriodType_COUNTS", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType_COUNTS", "ti.sysbios.hal"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sysbios.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sysbios.hal")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
            vo.bind("__initObject", Global.get("ti$sysbios$hal$TimerNull$$__initObject"));
        }//isCFG
        vo.bind("getNumTimers", om.findStrict("ti.sysbios.hal.TimerNull.getNumTimers", "ti.sysbios.hal"));
        vo.bind("getStatus", om.findStrict("ti.sysbios.hal.TimerNull.getStatus", "ti.sysbios.hal"));
        vo.bind("startup", om.findStrict("ti.sysbios.hal.TimerNull.startup", "ti.sysbios.hal"));
        vo.bind("$$fxntab", Global.newArray("ti_sysbios_hal_TimerNull_Handle__label__E", "ti_sysbios_hal_TimerNull_Module__startupDone__E", "ti_sysbios_hal_TimerNull_Object__create__E", "ti_sysbios_hal_TimerNull_Object__delete__E", "ti_sysbios_hal_TimerNull_Object__destruct__E", "ti_sysbios_hal_TimerNull_Object__get__E", "ti_sysbios_hal_TimerNull_Object__first__E", "ti_sysbios_hal_TimerNull_Object__next__E", "ti_sysbios_hal_TimerNull_Params__init__E", "ti_sysbios_hal_TimerNull_getNumTimers__E", "ti_sysbios_hal_TimerNull_getStatus__E", "ti_sysbios_hal_TimerNull_startup__E", "ti_sysbios_hal_TimerNull_getMaxTicks__E", "ti_sysbios_hal_TimerNull_setNextTick__E", "ti_sysbios_hal_TimerNull_start__E", "ti_sysbios_hal_TimerNull_stop__E", "ti_sysbios_hal_TimerNull_setPeriod__E", "ti_sysbios_hal_TimerNull_setPeriodMicroSecs__E", "ti_sysbios_hal_TimerNull_getPeriod__E", "ti_sysbios_hal_TimerNull_getCount__E", "ti_sysbios_hal_TimerNull_getFreq__E", "ti_sysbios_hal_TimerNull_getFunc__E", "ti_sysbios_hal_TimerNull_setFunc__E", "ti_sysbios_hal_TimerNull_trigger__E", "ti_sysbios_hal_TimerNull_getExpiredCounts__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sysbios.hal.TimerNull.Object", "ti.sysbios.hal"));
        vo.bind("Instance_State", om.findStrict("ti.sysbios.hal.TimerNull.Instance_State", "ti.sysbios.hal"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("TimerNull", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("TimerNull");
    }

    void Cache$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Cache", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Cache.Module", "ti.sysbios.hal");
        vo.init2(po, "ti.sysbios.hal.Cache", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sysbios.hal.Cache$$capsule", "ti.sysbios.hal"));
        vo.bind("$package", om.findStrict("ti.sysbios.hal", "ti.sysbios.hal"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("Type", om.findStrict("ti.sysbios.interfaces.ICache.Type", "ti.sysbios.hal"));
        vo.bind("CacheProxy$proxy", om.findStrict("ti.sysbios.hal.Cache_CacheProxy", "ti.sysbios.hal"));
        proxies.add("CacheProxy");
        vo.bind("Type_L1P", om.findStrict("ti.sysbios.interfaces.ICache.Type_L1P", "ti.sysbios.hal"));
        vo.bind("Type_L1D", om.findStrict("ti.sysbios.interfaces.ICache.Type_L1D", "ti.sysbios.hal"));
        vo.bind("Type_L1", om.findStrict("ti.sysbios.interfaces.ICache.Type_L1", "ti.sysbios.hal"));
        vo.bind("Type_L2P", om.findStrict("ti.sysbios.interfaces.ICache.Type_L2P", "ti.sysbios.hal"));
        vo.bind("Type_L2D", om.findStrict("ti.sysbios.interfaces.ICache.Type_L2D", "ti.sysbios.hal"));
        vo.bind("Type_L2", om.findStrict("ti.sysbios.interfaces.ICache.Type_L2", "ti.sysbios.hal"));
        vo.bind("Type_ALLP", om.findStrict("ti.sysbios.interfaces.ICache.Type_ALLP", "ti.sysbios.hal"));
        vo.bind("Type_ALLD", om.findStrict("ti.sysbios.interfaces.ICache.Type_ALLD", "ti.sysbios.hal"));
        vo.bind("Type_ALL", om.findStrict("ti.sysbios.interfaces.ICache.Type_ALL", "ti.sysbios.hal"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sysbios.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sysbios.hal")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
        }//isCFG
        vo.bind("enable", om.findStrict("ti.sysbios.hal.Cache.enable", "ti.sysbios.hal"));
        vo.bind("disable", om.findStrict("ti.sysbios.hal.Cache.disable", "ti.sysbios.hal"));
        vo.bind("inv", om.findStrict("ti.sysbios.hal.Cache.inv", "ti.sysbios.hal"));
        vo.bind("wb", om.findStrict("ti.sysbios.hal.Cache.wb", "ti.sysbios.hal"));
        vo.bind("wbInv", om.findStrict("ti.sysbios.hal.Cache.wbInv", "ti.sysbios.hal"));
        vo.bind("wbAll", om.findStrict("ti.sysbios.hal.Cache.wbAll", "ti.sysbios.hal"));
        vo.bind("wbInvAll", om.findStrict("ti.sysbios.hal.Cache.wbInvAll", "ti.sysbios.hal"));
        vo.bind("wait", om.findStrict("ti.sysbios.hal.Cache.wait", "ti.sysbios.hal"));
        vo.bind("$$fxntab", Global.newArray("ti_sysbios_hal_Cache_Module__startupDone__E", "ti_sysbios_hal_Cache_enable__E", "ti_sysbios_hal_Cache_disable__E", "ti_sysbios_hal_Cache_inv__E", "ti_sysbios_hal_Cache_wb__E", "ti_sysbios_hal_Cache_wbInv__E", "ti_sysbios_hal_Cache_wbAll__E", "ti_sysbios_hal_Cache_wbInvAll__E", "ti_sysbios_hal_Cache_wait__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("Cache", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Cache");
    }

    void CacheNull$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.CacheNull", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.CacheNull.Module", "ti.sysbios.hal");
        vo.init2(po, "ti.sysbios.hal.CacheNull", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("$package", om.findStrict("ti.sysbios.hal", "ti.sysbios.hal"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        vo.bind("Type", om.findStrict("ti.sysbios.interfaces.ICache.Type", "ti.sysbios.hal"));
        vo.bind("Type_L1P", om.findStrict("ti.sysbios.interfaces.ICache.Type_L1P", "ti.sysbios.hal"));
        vo.bind("Type_L1D", om.findStrict("ti.sysbios.interfaces.ICache.Type_L1D", "ti.sysbios.hal"));
        vo.bind("Type_L1", om.findStrict("ti.sysbios.interfaces.ICache.Type_L1", "ti.sysbios.hal"));
        vo.bind("Type_L2P", om.findStrict("ti.sysbios.interfaces.ICache.Type_L2P", "ti.sysbios.hal"));
        vo.bind("Type_L2D", om.findStrict("ti.sysbios.interfaces.ICache.Type_L2D", "ti.sysbios.hal"));
        vo.bind("Type_L2", om.findStrict("ti.sysbios.interfaces.ICache.Type_L2", "ti.sysbios.hal"));
        vo.bind("Type_ALLP", om.findStrict("ti.sysbios.interfaces.ICache.Type_ALLP", "ti.sysbios.hal"));
        vo.bind("Type_ALLD", om.findStrict("ti.sysbios.interfaces.ICache.Type_ALLD", "ti.sysbios.hal"));
        vo.bind("Type_ALL", om.findStrict("ti.sysbios.interfaces.ICache.Type_ALL", "ti.sysbios.hal"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("ti.sysbios.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sysbios.hal")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
        }//isCFG
        vo.bind("enable", om.findStrict("ti.sysbios.hal.CacheNull.enable", "ti.sysbios.hal"));
        vo.bind("disable", om.findStrict("ti.sysbios.hal.CacheNull.disable", "ti.sysbios.hal"));
        vo.bind("inv", om.findStrict("ti.sysbios.hal.CacheNull.inv", "ti.sysbios.hal"));
        vo.bind("wb", om.findStrict("ti.sysbios.hal.CacheNull.wb", "ti.sysbios.hal"));
        vo.bind("wbInv", om.findStrict("ti.sysbios.hal.CacheNull.wbInv", "ti.sysbios.hal"));
        vo.bind("wbAll", om.findStrict("ti.sysbios.hal.CacheNull.wbAll", "ti.sysbios.hal"));
        vo.bind("wbInvAll", om.findStrict("ti.sysbios.hal.CacheNull.wbInvAll", "ti.sysbios.hal"));
        vo.bind("wait", om.findStrict("ti.sysbios.hal.CacheNull.wait", "ti.sysbios.hal"));
        vo.bind("$$fxntab", Global.newArray("ti_sysbios_hal_CacheNull_Module__startupDone__E", "ti_sysbios_hal_CacheNull_enable__E", "ti_sysbios_hal_CacheNull_disable__E", "ti_sysbios_hal_CacheNull_inv__E", "ti_sysbios_hal_CacheNull_wb__E", "ti_sysbios_hal_CacheNull_wbInv__E", "ti_sysbios_hal_CacheNull_wbAll__E", "ti_sysbios_hal_CacheNull_wbInvAll__E", "ti_sysbios_hal_CacheNull_wait__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("CacheNull", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("CacheNull");
    }

    void Hwi_HwiProxy$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Module", "ti.sysbios.hal");
        vo.init2(po, "ti.sysbios.hal.Hwi_HwiProxy", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("Instance", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Instance", "ti.sysbios.hal"));
        vo.bind("Params", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Params", "ti.sysbios.hal"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Params", "ti.sysbios.hal")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Handle", "ti.sysbios.hal"));
        vo.bind("$package", om.findStrict("ti.sysbios.hal", "ti.sysbios.hal"));
        tdefs.clear();
        proxies.clear();
        proxies.add("delegate$");
        inherits.clear();
        vo.bind("FuncPtr", om.findStrict("ti.sysbios.interfaces.IHwi.FuncPtr", "ti.sysbios.hal"));
        vo.bind("Irp", om.findStrict("ti.sysbios.interfaces.IHwi.Irp", "ti.sysbios.hal"));
        vo.bind("HookSet", om.findStrict("ti.sysbios.interfaces.IHwi.HookSet", "ti.sysbios.hal"));
        tdefs.add(om.findStrict("ti.sysbios.interfaces.IHwi.HookSet", "ti.sysbios.hal"));
        vo.bind("MaskingOption", om.findStrict("ti.sysbios.interfaces.IHwi.MaskingOption", "ti.sysbios.hal"));
        vo.bind("StackInfo", om.findStrict("ti.sysbios.interfaces.IHwi.StackInfo", "ti.sysbios.hal"));
        tdefs.add(om.findStrict("ti.sysbios.interfaces.IHwi.StackInfo", "ti.sysbios.hal"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("ti.sysbios.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sysbios.hal")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 0);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
            vo.bind("__initObject", Global.get("ti$sysbios$hal$Hwi_HwiProxy$$__initObject"));
        }//isCFG
        vo.bind("getStackInfo", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.getStackInfo", "ti.sysbios.hal"));
        vo.bind("startup", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.startup", "ti.sysbios.hal"));
        vo.bind("disable", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.disable", "ti.sysbios.hal"));
        vo.bind("enable", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.enable", "ti.sysbios.hal"));
        vo.bind("restore", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.restore", "ti.sysbios.hal"));
        vo.bind("switchFromBootStack", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.switchFromBootStack", "ti.sysbios.hal"));
        vo.bind("post", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.post", "ti.sysbios.hal"));
        vo.bind("getTaskSP", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.getTaskSP", "ti.sysbios.hal"));
        vo.bind("disableInterrupt", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.disableInterrupt", "ti.sysbios.hal"));
        vo.bind("enableInterrupt", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.enableInterrupt", "ti.sysbios.hal"));
        vo.bind("restoreInterrupt", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.restoreInterrupt", "ti.sysbios.hal"));
        vo.bind("clearInterrupt", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.clearInterrupt", "ti.sysbios.hal"));
        vo.bind("$$fxntab", Global.newArray("ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Handle__label", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Module__startupDone", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Object__create", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Object__delete", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Object__destruct", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Object__get", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Object__first", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Object__next", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Params__init", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Proxy__abstract", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__Proxy__delegate", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__addHookSet", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__viewGetStackInfo", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__getStackInfo", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__startup", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__disable", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__enable", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__restore", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__switchFromBootStack", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__post", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__getTaskSP", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__disableInterrupt", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__enableInterrupt", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__restoreInterrupt", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__clearInterrupt", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__getFunc", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__setFunc", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__getHookContext", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__setHookContext", "ti_sysbios_hal_Hwi_HwiProxy_DELEGATE__getIrp"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", true);
        atmap.setElem("", true);
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Object", "ti.sysbios.hal"));
        vo.bind("Instance_State", om.findStrict("ti.sysbios.hal.Hwi_HwiProxy.Instance_State", "ti.sysbios.hal"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 1);
        loggables.clear();
        loggables.add(Global.newObject("name", "getStackInfo", "entry", "%p, %d", "exit", "%d"));
        loggables.add(Global.newObject("name", "disable", "entry", "", "exit", "0x%x"));
        loggables.add(Global.newObject("name", "enable", "entry", "", "exit", "0x%x"));
        loggables.add(Global.newObject("name", "restore", "entry", "0x%x", "exit", ""));
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("Hwi_HwiProxy", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Hwi_HwiProxy");
    }

    void Timer_TimerProxy$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Timer_TimerProxy", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Module", "ti.sysbios.hal");
        vo.init2(po, "ti.sysbios.hal.Timer_TimerProxy", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("Instance", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Instance", "ti.sysbios.hal"));
        vo.bind("Params", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Params", "ti.sysbios.hal"));
        vo.bind("PARAMS", ((Proto.Str)om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Params", "ti.sysbios.hal")).newInstance());
        vo.bind("Handle", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Handle", "ti.sysbios.hal"));
        vo.bind("$package", om.findStrict("ti.sysbios.hal", "ti.sysbios.hal"));
        tdefs.clear();
        proxies.clear();
        proxies.add("delegate$");
        inherits.clear();
        vo.bind("FuncPtr", om.findStrict("ti.sysbios.interfaces.ITimer.FuncPtr", "ti.sysbios.hal"));
        vo.bind("StartMode", om.findStrict("ti.sysbios.interfaces.ITimer.StartMode", "ti.sysbios.hal"));
        vo.bind("RunMode", om.findStrict("ti.sysbios.interfaces.ITimer.RunMode", "ti.sysbios.hal"));
        vo.bind("Status", om.findStrict("ti.sysbios.interfaces.ITimer.Status", "ti.sysbios.hal"));
        vo.bind("PeriodType", om.findStrict("ti.sysbios.interfaces.ITimer.PeriodType", "ti.sysbios.hal"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("ti.sysbios.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sysbios.hal")).add(vo);
        vo.bind("$$instflag", 1);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 0);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
            vo.bind("__initObject", Global.get("ti$sysbios$hal$Timer_TimerProxy$$__initObject"));
        }//isCFG
        vo.bind("getNumTimers", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.getNumTimers", "ti.sysbios.hal"));
        vo.bind("getStatus", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.getStatus", "ti.sysbios.hal"));
        vo.bind("startup", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.startup", "ti.sysbios.hal"));
        vo.bind("$$fxntab", Global.newArray("ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Handle__label", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Module__startupDone", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Object__create", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Object__delete", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Object__destruct", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Object__get", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Object__first", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Object__next", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Params__init", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Proxy__abstract", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__Proxy__delegate", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__getNumTimers", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__getStatus", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__startup", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__getMaxTicks", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__setNextTick", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__start", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__stop", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__setPeriod", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__setPeriodMicroSecs", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__getPeriod", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__getCount", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__getFreq", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__getFunc", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__setFunc", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__trigger", "ti_sysbios_hal_Timer_TimerProxy_DELEGATE__getExpiredCounts"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("Object", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Object", "ti.sysbios.hal"));
        vo.bind("Instance_State", om.findStrict("ti.sysbios.hal.Timer_TimerProxy.Instance_State", "ti.sysbios.hal"));
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 1);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("Timer_TimerProxy", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Timer_TimerProxy");
    }

    void Cache_CacheProxy$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.hal.Cache_CacheProxy", "ti.sysbios.hal");
        po = (Proto.Obj)om.findStrict("ti.sysbios.hal.Cache_CacheProxy.Module", "ti.sysbios.hal");
        vo.init2(po, "ti.sysbios.hal.Cache_CacheProxy", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", $$UNDEF);
        vo.bind("$package", om.findStrict("ti.sysbios.hal", "ti.sysbios.hal"));
        tdefs.clear();
        proxies.clear();
        proxies.add("delegate$");
        inherits.clear();
        vo.bind("Type", om.findStrict("ti.sysbios.interfaces.ICache.Type", "ti.sysbios.hal"));
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        inherits.add("ti.sysbios.interfaces");
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sysbios.hal")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 0);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 1);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
        }//isCFG
        vo.bind("enable", om.findStrict("ti.sysbios.hal.Cache_CacheProxy.enable", "ti.sysbios.hal"));
        vo.bind("disable", om.findStrict("ti.sysbios.hal.Cache_CacheProxy.disable", "ti.sysbios.hal"));
        vo.bind("inv", om.findStrict("ti.sysbios.hal.Cache_CacheProxy.inv", "ti.sysbios.hal"));
        vo.bind("wb", om.findStrict("ti.sysbios.hal.Cache_CacheProxy.wb", "ti.sysbios.hal"));
        vo.bind("wbInv", om.findStrict("ti.sysbios.hal.Cache_CacheProxy.wbInv", "ti.sysbios.hal"));
        vo.bind("wbAll", om.findStrict("ti.sysbios.hal.Cache_CacheProxy.wbAll", "ti.sysbios.hal"));
        vo.bind("wbInvAll", om.findStrict("ti.sysbios.hal.Cache_CacheProxy.wbInvAll", "ti.sysbios.hal"));
        vo.bind("wait", om.findStrict("ti.sysbios.hal.Cache_CacheProxy.wait", "ti.sysbios.hal"));
        vo.bind("$$fxntab", Global.newArray("ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Handle__label", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Module__startupDone", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Object__create", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Object__delete", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Object__destruct", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Object__get", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Object__first", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Object__next", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Params__init", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Proxy__abstract", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__Proxy__delegate", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__enable", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__disable", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__inv", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__wb", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__wbInv", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__wbAll", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__wbInvAll", "ti_sysbios_hal_Cache_CacheProxy_DELEGATE__wait"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 1);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        pkgV.bind("Cache_CacheProxy", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Cache_CacheProxy");
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
            Object srcP = ((XScriptO)om.findStrict("xdc.runtime.IInstance", "ti.sysbios.hal")).findStrict("PARAMS", "ti.sysbios.hal");
            Scriptable dstP;

            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sysbios.hal.Hwi", "ti.sysbios.hal")).findStrict("PARAMS", "ti.sysbios.hal");
            Global.put(dstP, "instance", srcP);
            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sysbios.hal.Timer", "ti.sysbios.hal")).findStrict("PARAMS", "ti.sysbios.hal");
            Global.put(dstP, "instance", srcP);
            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sysbios.hal.TimerNull", "ti.sysbios.hal")).findStrict("PARAMS", "ti.sysbios.hal");
            Global.put(dstP, "instance", srcP);
            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy", "ti.sysbios.hal")).findStrict("PARAMS", "ti.sysbios.hal");
            Global.put(dstP, "instance", srcP);
            dstP = (Scriptable)((XScriptO)om.findStrict("ti.sysbios.hal.Timer_TimerProxy", "ti.sysbios.hal")).findStrict("PARAMS", "ti.sysbios.hal");
            Global.put(dstP, "instance", srcP);
        }//isCFG
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sysbios.hal.Hwi", "ti.sysbios.hal"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sysbios.hal.Timer", "ti.sysbios.hal"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sysbios.hal.TimerNull", "ti.sysbios.hal"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sysbios.hal.Cache", "ti.sysbios.hal"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sysbios.hal.CacheNull", "ti.sysbios.hal"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sysbios.hal.Hwi_HwiProxy", "ti.sysbios.hal"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sysbios.hal.Timer_TimerProxy", "ti.sysbios.hal"));
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sysbios.hal.Cache_CacheProxy", "ti.sysbios.hal"));
        Global.callFxn("init", pkgV);
        ((Value.Obj)om.getv("ti.sysbios.hal.Hwi")).bless();
        ((Value.Obj)om.getv("ti.sysbios.hal.Timer")).bless();
        ((Value.Obj)om.getv("ti.sysbios.hal.TimerNull")).bless();
        ((Value.Obj)om.getv("ti.sysbios.hal.Cache")).bless();
        ((Value.Obj)om.getv("ti.sysbios.hal.CacheNull")).bless();
        ((Value.Obj)om.getv("ti.sysbios.hal.Hwi_HwiProxy")).bless();
        ((Value.Obj)om.getv("ti.sysbios.hal.Timer_TimerProxy")).bless();
        ((Value.Obj)om.getv("ti.sysbios.hal.Cache_CacheProxy")).bless();
        ((Value.Arr)om.findStrict("$packages", "ti.sysbios.hal")).add(pkgV);
    }

    public void exec( Scriptable xdcO, Session ses )
    {
        this.xdcO = xdcO;
        this.ses = ses;
        om = (Value.Obj)xdcO.get("om", null);

        Object o = om.geto("$name");
        String s = o instanceof String ? (String)o : null;
        isCFG = s != null && s.equals("cfg");
        isROV = s != null && s.equals("rov");

        $$IMPORTS();
        $$OBJECTS();
        Hwi$$OBJECTS();
        Timer$$OBJECTS();
        TimerNull$$OBJECTS();
        Cache$$OBJECTS();
        CacheNull$$OBJECTS();
        Hwi_HwiProxy$$OBJECTS();
        Timer_TimerProxy$$OBJECTS();
        Cache_CacheProxy$$OBJECTS();
        Hwi$$CONSTS();
        Timer$$CONSTS();
        TimerNull$$CONSTS();
        Cache$$CONSTS();
        CacheNull$$CONSTS();
        Hwi_HwiProxy$$CONSTS();
        Timer_TimerProxy$$CONSTS();
        Cache_CacheProxy$$CONSTS();
        Hwi$$CREATES();
        Timer$$CREATES();
        TimerNull$$CREATES();
        Cache$$CREATES();
        CacheNull$$CREATES();
        Hwi_HwiProxy$$CREATES();
        Timer_TimerProxy$$CREATES();
        Cache_CacheProxy$$CREATES();
        Hwi$$FUNCTIONS();
        Timer$$FUNCTIONS();
        TimerNull$$FUNCTIONS();
        Cache$$FUNCTIONS();
        CacheNull$$FUNCTIONS();
        Hwi_HwiProxy$$FUNCTIONS();
        Timer_TimerProxy$$FUNCTIONS();
        Cache_CacheProxy$$FUNCTIONS();
        Hwi$$SIZES();
        Timer$$SIZES();
        TimerNull$$SIZES();
        Cache$$SIZES();
        CacheNull$$SIZES();
        Hwi_HwiProxy$$SIZES();
        Timer_TimerProxy$$SIZES();
        Cache_CacheProxy$$SIZES();
        Hwi$$TYPES();
        Timer$$TYPES();
        TimerNull$$TYPES();
        Cache$$TYPES();
        CacheNull$$TYPES();
        Hwi_HwiProxy$$TYPES();
        Timer_TimerProxy$$TYPES();
        Cache_CacheProxy$$TYPES();
        if (isROV) {
            Hwi$$ROV();
            Timer$$ROV();
            TimerNull$$ROV();
            Cache$$ROV();
            CacheNull$$ROV();
            Hwi_HwiProxy$$ROV();
            Timer_TimerProxy$$ROV();
            Cache_CacheProxy$$ROV();
        }//isROV
        $$SINGLETONS();
        Hwi$$SINGLETONS();
        Timer$$SINGLETONS();
        TimerNull$$SINGLETONS();
        Cache$$SINGLETONS();
        CacheNull$$SINGLETONS();
        Hwi_HwiProxy$$SINGLETONS();
        Timer_TimerProxy$$SINGLETONS();
        Cache_CacheProxy$$SINGLETONS();
        $$INITIALIZATION();
    }
}
