// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> cntxt, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_objection> objection)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::new\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    // Body
    _ctor_var_reset(vlSymsp);
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> cs;
    ;
    this->__PVT__m_objection = objection;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    cs = __Vfunc_get__1__Vfuncout;
    this->__PVT__m_cntxt = ((VlNull{} != cntxt) ? cntxt
                             : (VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component>)(
                                                                                ([&]() {
                    VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 91)
                                                                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
                }(), __Vtask_get_root__2__Vfuncout)));
    this->__PVT__m_cb = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat_callback, vlProcess, vlSymsp, 
                               VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(name, "_cb"s)), this->__PVT__m_cntxt);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_mode(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ mode, IData/*31:0*/ &set_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_mode\n"); );
    // Body
    set_mode__Vfuncrtn = this->__PVT__m_mode;
    if ((((2U == mode) | (1U == mode)) | (0U == mode))) {
        this->__PVT__m_mode = mode;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_heartbeat(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> e, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component>> &comps) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_set_heartbeat\n"); );
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> c;
    {
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, comps.size())) {
            c = comps.at(unnamedblk1__DOT__i);
            if ((! VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 129)
                 ->__PVT__cnt.exists(c))) {
                VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 130)->__PVT__cnt.at(c) = 0U;
            }
            if ((! VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 131)
                 ->__PVT__last_trigger.exists(c))) {
                VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 132)->__PVT__last_trigger.at(c) = 0ULL;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        if (((VlNull{} == e) & (VlNull{} == this->__PVT__m_event))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_start(vlSymsp, e);
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_add(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_add\n"); );
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> c;
    {
        c = comp;
        if (VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 149)
            ->__PVT__cnt.exists(c)) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 150)->__PVT__cnt.at(c) = 0U;
        VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 151)->__PVT__last_trigger.at(c) = 0ULL;
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_remove(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_remove\n"); );
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> c;
    c = comp;
    if (VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 163)
        ->__PVT__cnt.exists(c)) {
        VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 163)->__PVT__cnt.erase(c);
    }
    if (VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 164)
        ->__PVT__last_trigger.exists(c)) {
        VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 164)->__PVT__last_trigger.erase(c);
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_start(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_event_> e) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_start\n"); );
    // Locals
    std::string __Vfunc_get_name__6__Vfuncout;
    std::string __Vfunc_get_name__8__Vfuncout;
    std::string __Vtask_get_name__9__Vfuncout;
    std::string __Vtask_get_name__10__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if (((VlNull{} == this->__PVT__m_event) & (VlNull{} 
                                                   == e))) {
            VL_NULL_CHECK(this->__PVT__m_cntxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 179)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOEVNT"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("start() was called for: "s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__6__Vfuncout);
                                }(), __Vfunc_get_name__6__Vfuncout)), " with a null trigger and no currently set trigger"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((((VlNull{} != this->__PVT__m_event) & 
              (e != this->__PVT__m_event)) & (IData)(this->__PVT__m_started))) {
            VL_NULL_CHECK(this->__PVT__m_cntxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 185)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "ILHBVNT"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("start() was called for: "s, 
                                                                                ([&]() {
                                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__8__Vfuncout);
                                                }(), __Vfunc_get_name__8__Vfuncout)), " with trigger "s), 
                                                                                ([&]() {
                                            VL_NULL_CHECK(e, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 186)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__9__Vfuncout);
                                        }(), __Vtask_get_name__9__Vfuncout)), " which is different "s), "from the original trigger "s), 
                                                                                ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_event, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 187)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__10__Vfuncout);
                            }(), __Vtask_get_name__10__Vfuncout))), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} != e)) {
            this->__PVT__m_event = e;
        }
        this->__VnoInFunc_m_enable_cb(vlSymsp);
        this->__VnoInFunc_m_start_hb_process(vlSymsp);
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_stop(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_stop\n"); );
    // Body
    this->__PVT__m_started = 0U;
    vlSymsp->fireEvent(this->__PVT__m_stop_event);
    this->__VnoInFunc_m_disable_cb(vlSymsp);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process\n"); );
    // Body
    {
        if (this->__PVT__m_started) {
            goto __Vlabel0;
        }
        this->__PVT__m_started = 1U;
        this->__VnoInFunc_m_start_hb_process____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp);
        __Vlabel0: ;
    }
}

VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process____Vfork_1__0(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_start_hb_process____Vfork_1__0\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_hb_process(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_enable_cb(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_enable_cb\n"); );
    // Locals
    CData/*0:0*/ __Vtask_callback_mode__15__Vfuncout;
    __Vtask_callback_mode__15__Vfuncout = 0;
    // Body
    {
        VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 218)->__VnoInFunc_callback_mode(vlSymsp, 1U, __Vtask_callback_mode__15__Vfuncout);
        if ((VlNull{} == this->__PVT__m_objection)) {
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(this->__PVT__m_added)))) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz65_TBz174__Vclpkg.__VnoInFunc_add(vlSymsp, this->__PVT__m_objection, this->__PVT__m_cb, 0U);
        }
        this->__PVT__m_added = 1U;
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_disable_cb(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_disable_cb\n"); );
    // Locals
    CData/*0:0*/ __Vtask_callback_mode__17__Vfuncout;
    __Vtask_callback_mode__17__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 226)->__VnoInFunc_callback_mode(vlSymsp, 0U, __Vtask_callback_mode__17__Vfuncout);
}

VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process\n"); );
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_24> __VDynScope_m_hb_process_1;
    __VDynScope_m_hb_process_1 = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_24, vlSymsp);
    VL_NULL_CHECK(__VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 232)->__PVT__last_trigger = 0ULL;
    VlForkSync __Vfork_2__sync;
    __Vfork_2__sync.init(1U, vlProcess);
    this->__VnoInFunc_m_hb_process____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_m_hb_process_1, __Vfork_2__sync);
    this->__VnoInFunc_m_hb_process____Vfork_2__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_2__sync);
    co_await __Vfork_2__sync.join(vlProcess, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                                  233);
    vlProcess->disableFork();
    co_return;
}

VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__1(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__1\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_he7a1516c__0;
    __VdynTrigger_he7a1516c__0 = 0;
    __VdynTrigger_he7a1516c__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_he7a1516c__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_heartbeat.m_stop_event)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                                                     294);
        __VdynTrigger_he7a1516c__0 = this->__PVT__m_stop_event.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_he7a1516c__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_heartbeat.m_stop_event)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                                                     294);
        this->__PVT__m_stop_event.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_heartbeat.m_stop_event)", 
                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                                                 294);
    __Vfork_2__sync.done("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                         294);
    vlProcess->state(VlProcess::FINISHED);
}

VlCoroutine Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__0(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_24> __VDynScope_m_hb_process_1, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_m_hb_process____Vfork_2__0\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03a__VDynScope_24> __Vtask___VforkTask_0__19____VDynScope_m_hb_process_1;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst;
    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst = 0;
    std::string __Vtask___VforkTask_0__19__unnamedblk3__DOT__s;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst;
    __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst = 0;
    std::string __Vtask___VforkTask_0__19__unnamedblk5__DOT__s;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst;
    __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst = 0;
    std::string __Vtask___VforkTask_0__19__unnamedblk7__DOT__s;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx;
    CData/*0:0*/ __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst;
    __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst = 0;
    std::string __Vtask_get_name__22__Vfuncout;
    std::string __Vtask_get_full_name__23__Vfuncout;
    IData/*31:0*/ __Vtask_objects_triggered__24__Vfuncout;
    __Vtask_objects_triggered__24__Vfuncout = 0;
    std::string __Vtask_get_full_name__25__Vfuncout;
    std::string __Vtask_get_name__27__Vfuncout;
    IData/*31:0*/ __Vtask_objects_triggered__28__Vfuncout;
    __Vtask_objects_triggered__28__Vfuncout = 0;
    std::string __Vtask_get_full_name__29__Vfuncout;
    std::string __Vtask_get_name__31__Vfuncout;
    IData/*31:0*/ __Vtask_objects_triggered__32__Vfuncout;
    __Vtask_objects_triggered__32__Vfuncout = 0;
    std::string __Vtask_get_full_name__33__Vfuncout;
    std::string __Vtask_get_name__35__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__19____VDynScope_m_hb_process_1 
        = __VDynScope_m_hb_process_1;
    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst = 0;
    __Vtask___VforkTask_0__19__unnamedblk3__DOT__s.clear();
    __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst = 0;
    __Vtask___VforkTask_0__19__unnamedblk5__DOT__s.clear();
    __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst = 0;
    __Vtask___VforkTask_0__19__unnamedblk7__DOT__s.clear();
    __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst = 0;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__m_event, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 239)->__VnoInFunc_wait_trigger(vlProcess, vlSymsp);
        if (VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 240)
            ->__PVT__triggered) {
            if ((0U == this->__PVT__m_mode)) {
                if ((0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 244)
                     ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk2__DOT__idx))) {
                    __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst = 1U;
                    while (((IData)(__Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst) 
                            || (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 244)
                                ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk2__DOT__idx)))) {
                        __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx__Vfirst = 0U;
                        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 245)->__PVT__obj 
                            = __Vtask___VforkTask_0__19__unnamedblk2__DOT__idx;
                        if ((1U & (~ (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 246)
                                      ->__PVT__cnt.at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 246)
                                                      ->__PVT__obj))))) {
                            __Vtemp_1 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__m_objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 248)
                                         ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__22__Vfuncout);
                                }(), __Vtask_get_name__22__Vfuncout);
                            __Vtemp_2 = ([&]() {
                                    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 248)
                                                  ->__PVT__obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 248)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__23__Vfuncout);
                                }(), __Vtask_get_full_name__23__Vfuncout);
                            VL_NULL_CHECK(this->__PVT__m_cntxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 247)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Did not recieve an update of %@ for component %@ since last event trigger at time %0t : last update time was %0t",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                64,
                                                                                VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 249)
                                                                                ->__PVT__last_trigger,
                                                                                -12,
                                                                                64,
                                                                                VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 249)
                                                                                ->__PVT__last_trigger
                                                                                .at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 249)
                                                                                ->__PVT__obj),
                                                                                -12) , 0U, ""s, 0U, ""s, 0U);
                        }
                    }
                }
            } else if ((2U == this->__PVT__m_mode)) {
                if (((0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 255)
                      ->__PVT__cnt.size()) && (1U & 
                                               (~ (0U 
                                                   != 
                                                   ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 255)
                                                    ->__VnoInFunc_objects_triggered(vlSymsp, __Vtask_objects_triggered__24__Vfuncout);
                                        }(), __Vtask_objects_triggered__24__Vfuncout)))))) {
                    if ((0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 257)
                         ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx))) {
                        __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst = 1U;
                        while (((IData)(__Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst) 
                                || (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 257)
                                    ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx)))) {
                            __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx__Vfirst = 0U;
                            VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 258)->__PVT__obj 
                                = __Vtask___VforkTask_0__19__unnamedblk3__DOT__unnamedblk4__DOT__idx;
                            __Vtask___VforkTask_0__19__unnamedblk3__DOT__s 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(__Vtask___VforkTask_0__19__unnamedblk3__DOT__s, "\n  "s), 
                                                 ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 259)
                                                      ->__PVT__obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 259)
                                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__25__Vfuncout);
                                    }(), __Vtask_get_full_name__25__Vfuncout));
                        }
                    }
                    __Vtemp_3 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 262)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__27__Vfuncout);
                        }(), __Vtask_get_name__27__Vfuncout);
                    VL_NULL_CHECK(this->__PVT__m_cntxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 261)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Did not recieve an update of %@ on any component since last event trigger at time %0t. The list of registered components is:%@",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                64,
                                                                                VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 262)
                                                                                ->__PVT__last_trigger,
                                                                                -12,
                                                                                -1,
                                                                                &(__Vtask___VforkTask_0__19__unnamedblk3__DOT__s)) , 0U, ""s, 0U, ""s, 0U);
                }
            } else if ((1U == this->__PVT__m_mode)) {
                if (VL_LTS_III(32, 1U, ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 267)
                                        ->__VnoInFunc_objects_triggered(vlSymsp, __Vtask_objects_triggered__28__Vfuncout);
                            }(), __Vtask_objects_triggered__28__Vfuncout))) {
                    if ((0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 269)
                         ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx))) {
                        __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst = 1U;
                        while (((IData)(__Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst) 
                                || (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 269)
                                    ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx)))) {
                            __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx__Vfirst = 0U;
                            VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 270)->__PVT__obj 
                                = __Vtask___VforkTask_0__19__unnamedblk5__DOT__unnamedblk6__DOT__idx;
                            if ((0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 271)
                                 ->__PVT__cnt.at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 271)
                                                 ->__PVT__obj))) {
                                __Vtemp_4 = ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 272)
                                                      ->__PVT__obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 272)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                                    }(), __Vtask_get_full_name__29__Vfuncout);
                                VL_SFORMAT_NX(64,__Vtask___VforkTask_0__19__unnamedblk5__DOT__s
                                              ,"%@\n  %@ (updated: %0t)",0,
                                              -1,&(__Vtask___VforkTask_0__19__unnamedblk5__DOT__s),
                                              -1,&(__Vtemp_4),
                                              64,VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 272)
                                              ->__PVT__last_trigger
                                              .at(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 272)
                                                  ->__PVT__obj),
                                              -12);
                            }
                        }
                    }
                    __Vtemp_5 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 275)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__31__Vfuncout);
                        }(), __Vtask_get_name__31__Vfuncout);
                    VL_NULL_CHECK(this->__PVT__m_cntxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 274)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Recieved update of %@ from more than one component since last event trigger at time %0t. The list of triggered components is:%@",0,
                                                                                -1,
                                                                                &(__Vtemp_5),
                                                                                64,
                                                                                VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 275)
                                                                                ->__PVT__last_trigger,
                                                                                -12,
                                                                                -1,
                                                                                &(__Vtask___VforkTask_0__19__unnamedblk5__DOT__s)) , 0U, ""s, 0U, ""s, 0U);
                }
                if (((0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 277)
                      ->__PVT__cnt.size()) && (1U & 
                                               (~ (0U 
                                                   != 
                                                   ([&]() {
                                            VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 277)
                                                    ->__VnoInFunc_objects_triggered(vlSymsp, __Vtask_objects_triggered__32__Vfuncout);
                                        }(), __Vtask_objects_triggered__32__Vfuncout)))))) {
                    if ((0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 279)
                         ->__PVT__cnt.first(__Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx))) {
                        __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst = 1U;
                        while (((IData)(__Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst) 
                                || (0U != VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 279)
                                    ->__PVT__cnt.next(__Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx)))) {
                            __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx__Vfirst = 0U;
                            VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 280)->__PVT__obj 
                                = __Vtask___VforkTask_0__19__unnamedblk7__DOT__unnamedblk8__DOT__idx;
                            __Vtask___VforkTask_0__19__unnamedblk7__DOT__s 
                                = VL_CONCATN_NNN(VL_CONCATN_NNN(__Vtask___VforkTask_0__19__unnamedblk7__DOT__s, "\n  "s), 
                                                 ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 281)
                                                      ->__PVT__obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 281)
                                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__33__Vfuncout);
                                    }(), __Vtask_get_full_name__33__Vfuncout));
                        }
                    }
                    __Vtemp_6 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 284)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__35__Vfuncout);
                        }(), __Vtask_get_name__35__Vfuncout);
                    VL_NULL_CHECK(this->__PVT__m_cntxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 283)->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "HBFAIL"s, VL_SFORMATF_N_NX("Did not recieve an update of %@ on any component since last event trigger at time %0t. The list of registered components is:%@",0,
                                                                                -1,
                                                                                &(__Vtemp_6),
                                                                                64,
                                                                                VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 284)
                                                                                ->__PVT__last_trigger,
                                                                                -12,
                                                                                -1,
                                                                                &(__Vtask___VforkTask_0__19__unnamedblk7__DOT__s)) , 0U, ""s, 0U, ""s, 0U);
                }
            }
        }
        VL_NULL_CHECK(this->__PVT__m_cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 289)->__VnoInFunc_reset_counts(vlSymsp);
        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 290)->__PVT__last_trigger 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1));
        VL_NULL_CHECK(__Vtask___VforkTask_0__19____VDynScope_m_hb_process_1, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 291)->__PVT__triggered = 1U;
    }
    __Vfork_2__sync.done("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_heartbeat.svh", 
                         234);
    vlProcess->state(VlProcess::FINISHED);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__38__Vfuncout;
    __Vfunc___Vbasic_randomize__38__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__38__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__38__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___Vbasic_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_mode = 0;
    __PVT__m_started = 0;
    __PVT__m_added = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_heartbeat::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_objection:" + VL_TO_STRING(__PVT__m_objection);
    out += ", m_cb:" + VL_TO_STRING(__PVT__m_cb);
    out += ", m_cntxt:" + VL_TO_STRING(__PVT__m_cntxt);
    out += ", m_mode:" + VL_TO_STRING(__PVT__m_mode);
    out += ", m_hblist:" + VL_TO_STRING(__PVT__m_hblist);
    out += ", m_event:" + VL_TO_STRING(__PVT__m_event);
    out += ", m_started:" + VL_TO_STRING(__PVT__m_started);
    out += ", m_stop_event:" + VL_TO_STRING(__PVT__m_stop_event);
    out += ", m_added:" + VL_TO_STRING(__PVT__m_added);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
