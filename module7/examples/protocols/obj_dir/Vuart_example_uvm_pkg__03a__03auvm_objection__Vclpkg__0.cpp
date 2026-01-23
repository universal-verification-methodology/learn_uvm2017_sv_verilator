// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks\n"); );
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_44> unnamedblk5__DOT____VDynScope_unnamedblk5_2;
    VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_45> unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    while (true) {
        while ((0U == this->__PVT__m_scheduled_list.size())) {
            co_await vlSymsp->TOP.__VtrigSched_hbd132277__0.trigger(1U, 
                                                                    vlProcess, 
                                                                    "@( (32'sh0 != uvm_pkg::uvm_objection__Vclpkg.m_scheduled_list.size()))", 
                                                                    "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                    649);
        }
        if ((0U != this->__PVT__m_scheduled_list.size())) {
            unnamedblk5__DOT____VDynScope_unnamedblk5_2 
                = VL_NEW(Vuart_example_uvm_pkg__03a__03a__VDynScope_44, vlSymsp);
            VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 653)->__PVT__c 
                = this->__PVT__m_scheduled_list.pop_front();
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                                        ->__PVT__c, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                          ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)->__PVT__m_scheduled_contexts.at(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                                                                                ->__PVT__c, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                                                                                ->__PVT__obj) 
                = VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 655)
                ->__PVT__c;
            VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 657)
                                        ->__PVT__c, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 657)
                          ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 657)->__PVT__m_forked_list.push_back(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 657)
                                                                                ->__PVT__c);
            unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3 
                = VL_NEW(Vuart_example_uvm_pkg__03a__03a__VDynScope_45, vlSymsp);
            VL_NULL_CHECK(unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 662)->__PVT__objection 
                = VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk5__DOT____VDynScope_unnamedblk5_2, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 662)
                                ->__PVT__c, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 662)
                ->__PVT__objection;
            this->__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3);
        }
    }
    co_return;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_45> unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_execute_scheduled_forks____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_45> __Vtask___VforkTask_0__3____VDynScope_guard_3;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_context_object> __Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt;
    VlClassRef<Vuart_example_std__03a__03aprocess> __Vfunc_self__4__Vfuncout;
    // Body
    __Vtask___VforkTask_0__3____VDynScope_guard_3 = unnamedblk5__DOT___Vwrapped_guard_3__DOT____VDynScope_guard_3;
    if (VL_LTS_III(32, 0U, VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 665)
                                         ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 665)
                   ->__PVT__m_forked_list.size())) {
        __Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt 
            = VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 667)
                            ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 667)
            ->__PVT__m_forked_list.pop_front();
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 669)
                      ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 669)->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 669)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 671)
                      ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 671)->__PVT__m_forked_contexts.at(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 671)
                                                                                ->__PVT__obj) 
            = __Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__4__Vfuncout);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 674)
                      ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 674)->__PVT__m_drain_proc.at(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 674)
                                                                                ->__PVT__obj) 
            = __Vfunc_self__4__Vfuncout;
        co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                               ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)->__VnoInFunc_m_forked_drain(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                                                                                ->__PVT__obj, VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                                                                                ->__PVT__source_obj, 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                                                                                ->__PVT__description), VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 682)
                                                                                ->__PVT__count, 1U);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 684)
                      ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 684)->__PVT__m_drain_proc.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 684)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__3____VDynScope_guard_3, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 685)
                      ->__PVT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 685)->__PVT__m_forked_contexts.erase(VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 685)
                                                                                ->__PVT__obj);
        VL_NULL_CHECK(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 687)->__VnoInFunc_clear(vlSymsp);
        this->__PVT__m_context_pool.push_back(__Vtask___VforkTask_0__3__unnamedblk6__DOT__ctxt);
    }
    vlProcess->state(VlProcess::FINISHED);
}

void Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections\n"); );
    // Body
    this->__VnoInFunc_m_init_objections____Vfork_2__0(std::make_shared<VlProcess>(vlProcess));
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0(VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_m_init_objections____Vfork_2__0\n"); );
    // Body
    co_await this->__VnoInFunc_m_execute_scheduled_forks(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
}

void Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi2> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_objection__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi2> __Vfunc_get__8__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi2__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__8__Vfuncout;
}

Vuart_example_uvm_pkg__03a__03auvm_objection::Vuart_example_uvm_pkg__03a__03auvm_objection(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name)
    : Vuart_example_uvm_pkg__03a__03auvm_report_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::new\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__1__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__2__Vfuncout;
    IData/*31:0*/ __Vtask_get_report_verbosity_level__4__Vfuncout;
    __Vtask_get_report_verbosity_level__4__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__5__Vfuncout;
    IData/*31:0*/ __Vtask_get_arg_matches__6__Vfuncout;
    __Vtask_get_arg_matches__6__Vfuncout = 0;
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_prop_mode = 1U;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> clp;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs_;
    VlQueue<std::string> trace_args;
    ;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
    cs_ = __Vfunc_get__1__Vfuncout;
    VL_NULL_CHECK(cs_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 140)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__2__Vfuncout);
    this->__PVT__m_top = __Vtask_get_root__2__Vfuncout;
    this->__VnoInFunc_set_report_verbosity_level(vlProcess, vlSymsp, 
                                                 ([&]() {
                VL_NULL_CHECK(this->__PVT__m_top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 142)
                                                  ->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, 0U, ""s, __Vtask_get_report_verbosity_level__4__Vfuncout);
            }(), __Vtask_get_report_verbosity_level__4__Vfuncout));
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__5__Vfuncout);
    clp = __Vfunc_get_inst__5__Vfuncout;
    if ((0U != ([&]() {
                    VL_NULL_CHECK(clp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 146)
                ->__VnoInFunc_get_arg_matches(vlSymsp, "+UVM_OBJECTION_TRACE"s, trace_args, __Vtask_get_arg_matches__6__Vfuncout);
                }(), __Vtask_get_arg_matches__6__Vfuncout))) {
        this->__PVT__m_trace_mode = 1U;
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_objections.push_back(
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this});
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_trace_mode(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ mode, CData/*0:0*/ &trace_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_trace_mode\n"); );
    // Body
    trace_mode__Vfuncrtn = this->__PVT__m_trace_mode;
    if ((0U == mode)) {
        this->__PVT__m_trace_mode = 0U;
    } else if ((1U == mode)) {
        this->__PVT__m_trace_mode = 1U;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, std::string action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_report\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__Vfuncout;
    __Vfunc_uvm_report_enabled__7__Vfuncout = 0;
    std::string __Vtask_get_full_name__9__Vfuncout;
    std::string __Vtask_get_full_name__10__Vfuncout;
    std::string __Vtask_get_full_name__11__Vfuncout;
    std::string __Vtask_get_full_name__12__Vfuncout;
    std::string __Vtask_get_full_name__14__Vfuncout;
    std::string __Vtask_get_full_name__15__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__cpath;
    unnamedblk1__DOT__cpath = 0;
    IData/*31:0*/ unnamedblk1__DOT__last_dot;
    unnamedblk1__DOT__last_dot = 0;
    std::string unnamedblk1__DOT__sname;
    std::string unnamedblk1__DOT__nm;
    IData/*31:0*/ unnamedblk1__DOT__max;
    unnamedblk1__DOT__max = 0;
    IData/*31:0*/ _count;
    _count = 0;
    IData/*31:0*/ _total;
    _total = 0;
    {
        _count = (this->__PVT__m_source_count.exists(obj)
                   ? this->__PVT__m_source_count.at(obj)
                   : 0U);
        _total = (this->__PVT__m_total_count.exists(obj)
                   ? this->__PVT__m_total_count.at(obj)
                   : 0U);
        if (((1U & (~ (0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "OBJTN_TRC"s, __Vfunc_uvm_report_enabled__7__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__7__Vfuncout)))) 
             || (1U & (~ (IData)(this->__PVT__m_trace_mode))))) {
            goto __Vlabel0;
        }
        if ((source_obj == obj)) {
            __Vtemp_1 = ((""s == ([&]() {
                            VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 180)
                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__9__Vfuncout);
                        }(), __Vtask_get_full_name__9__Vfuncout))
                          ? "uvm_top"s : ([&]() {
                        VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 180)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__10__Vfuncout);
                    }(), __Vtask_get_full_name__10__Vfuncout));
            __Vtemp_2 = ((""s != description) ? VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(" ("s, description), ")"s)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0@ %0@ %0d objection(s)%@: count=%0d  total=%0d",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                -1,
                                                                                &(action),
                                                                                32,
                                                                                count,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                32,
                                                                                _count,
                                                                                32,
                                                                                _total) , 0U, ""s, 0U, ""s, 0U);
        } else {
            unnamedblk1__DOT__cpath = 0U;
            unnamedblk1__DOT__last_dot = 0U;
            VL_NULL_CHECK(source_obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 184)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
            unnamedblk1__DOT__sname = __Vtask_get_full_name__11__Vfuncout;
            VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 184)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__12__Vfuncout);
            unnamedblk1__DOT__nm = __Vtask_get_full_name__12__Vfuncout;
            unnamedblk1__DOT__max = (VL_GTS_III(32, 
                                                VL_LEN_IN(unnamedblk1__DOT__sname), 
                                                VL_LEN_IN(unnamedblk1__DOT__nm))
                                      ? VL_LEN_IN(unnamedblk1__DOT__nm)
                                      : VL_LEN_IN(unnamedblk1__DOT__sname));
            while (((VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath) 
                     == VL_GETC_N(unnamedblk1__DOT__nm,unnamedblk1__DOT__cpath)) 
                    & VL_LTS_III(32, unnamedblk1__DOT__cpath, unnamedblk1__DOT__max))) {
                if ((0x2eU == VL_GETC_N(unnamedblk1__DOT__sname,unnamedblk1__DOT__cpath))) {
                    unnamedblk1__DOT__last_dot = unnamedblk1__DOT__cpath;
                }
                unnamedblk1__DOT__cpath = ((IData)(1U) 
                                           + unnamedblk1__DOT__cpath);
            }
            if ((0U != unnamedblk1__DOT__last_dot)) {
                unnamedblk1__DOT__sname = VL_SUBSTR_N(unnamedblk1__DOT__sname,
                                                      ((IData)(1U) 
                                                       + unnamedblk1__DOT__last_dot),
                                                      VL_LEN_IN(unnamedblk1__DOT__sname));
            }
            if (("raised"s == action)) {
                __Vtemp_6[0U] = 0x64646564U;
                __Vtemp_6[1U] = 0x00000061U;
                __Vtemp_6[2U] = 0U;
            } else {
                __Vtemp_6[0U] = 0x63746564U;
                __Vtemp_6[1U] = 0x62747261U;
                __Vtemp_6[2U] = 0x00007375U;
            }
            __Vtemp_7 = ((""s == ([&]() {
                            VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 197)
                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__14__Vfuncout);
                        }(), __Vtask_get_full_name__14__Vfuncout))
                          ? "uvm_top"s : ([&]() {
                        VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 197)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__15__Vfuncout);
                    }(), __Vtask_get_full_name__15__Vfuncout));
            __Vtemp_8 = ((""s != description) ? VL_CONCATN_NNN(", "s, description)
                          : ""s);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "OBJTN_TRC"s, VL_SFORMATF_N_NX("Object %0@ %0s %0d objection(s) %0s its total (%@ from source object %@%@): count=%0d  total=%0d",0,
                                                                                -1,
                                                                                &(__Vtemp_7),
                                                                                80,
                                                                                __Vtemp_6.data(),
                                                                                32,
                                                                                count,
                                                                                32,
                                                                                (("raised"s 
                                                                                == action)
                                                                                 ? 0x0000746fU
                                                                                 : 0x66726f6dU),
                                                                                -1,
                                                                                &(action),
                                                                                -1,
                                                                                &(unnamedblk1__DOT__sname),
                                                                                -1,
                                                                                &(__Vtemp_8),
                                                                                32,
                                                                                _count,
                                                                                32,
                                                                                _total) , 0U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &m_get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_get_parent\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> __Vtask_get_parent__16__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__17__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequence_base> seq;
    obj = (VL_CAST_DYNAMIC(obj, comp) ? ([&]() {
                VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 213)
                                         ->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__16__Vfuncout);
            }(), __Vtask_get_parent__16__Vfuncout) : 
           (VL_CAST_DYNAMIC(obj, seq) ? (VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>)(
                                                                                ([&]() {
                        VL_NULL_CHECK(seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 216)
                                                                                ->__VnoInFunc_get_sequencer(vlSymsp, __Vtask_get_sequencer__17__Vfuncout);
                    }(), __Vtask_get_sequencer__17__Vfuncout))
             : (VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>)(this->__PVT__m_top)));
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    m_get_parent__Vfuncrtn = obj;
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, CData/*0:0*/ raise, IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_propagate\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> __Vfunc_m_get_parent__18__Vfuncout;
    // Body
    if (((VlNull{} != obj) & (obj != this->__PVT__m_top))) {
        this->__VnoInFunc_m_get_parent(vlSymsp, obj, __Vfunc_m_get_parent__18__Vfuncout);
        obj = __Vfunc_m_get_parent__18__Vfuncout;
        if (raise) {
            this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, source_obj, description, count);
        } else {
            this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, source_obj, description, count, in_top_thread);
        }
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_propagate_mode(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ prop_mode) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_propagate_mode\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_objection_total__21__Vfuncout;
    __Vfunc_get_objection_total__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__22__Vfuncout;
    __Vfunc_uvm_report_enabled__22__Vfuncout = 0;
    std::string __Vfunc_get_full_name__24__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if (((~ (IData)(this->__PVT__m_top_all_dropped)) 
             & (0U != ([&]() {
                            this->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __Vfunc_get_objection_total__21__Vfuncout);
                        }(), __Vfunc_get_objection_total__21__Vfuncout)))) {
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "UVM/BASE/OBJTN/PROP_MODE"s, __Vfunc_uvm_report_enabled__22__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__22__Vfuncout))) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM/BASE/OBJTN/PROP_MODE"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The propagation mode of '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__24__Vfuncout);
                                        }(), __Vfunc_get_full_name__24__Vfuncout)), "' cannot be changed while the objection is raised "s), "or draining!"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh"s, 0x00000109U, ""s, 1U);
            }
            goto __Vlabel0;
        }
        this->__PVT__m_prop_mode = prop_mode;
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_propagate_mode(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &get_propagate_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_propagate_mode\n"); );
    // Body
    get_propagate_mode__Vfuncrtn = this->__PVT__m_prop_mode;
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raise_objection\n"); );
    // Body
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    this->__PVT__m_cleared = 0U;
    this->__PVT__m_top_all_dropped = 0U;
    this->__VnoInFunc_m_raise(vlProcess, vlSymsp, obj, obj, description, count);
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_raise\n"); );
    // Locals
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    IData/*31:0*/ unnamedblk2__DOT__diff_count;
    unnamedblk2__DOT__diff_count = 0;
    IData/*31:0*/ idx;
    idx = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_context_object> ctxt;
    {
        if ((0U == count)) {
            goto __Vlabel0;
        }
        if (this->__PVT__m_total_count.exists(obj)) {
            __Vtemp_1 = (this->__PVT__m_total_count
                         .at(obj) + count);
            this->__PVT__m_total_count.at(obj) = __Vtemp_1;
        } else {
            this->__PVT__m_total_count.at(obj) = count;
        }
        if ((source_obj == obj)) {
            if (this->__PVT__m_source_count.exists(obj)) {
                __Vtemp_2 = (this->__PVT__m_source_count
                             .at(obj) + count);
                this->__PVT__m_source_count.at(obj) 
                    = __Vtemp_2;
            } else {
                this->__PVT__m_source_count.at(obj) 
                    = count;
            }
        }
        if (this->__PVT__m_trace_mode) {
            this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "raised"s);
        }
        this->__VnoInFunc_raised(vlProcess, vlSymsp, obj, source_obj, description, count);
        idx = 0U;
        {
            while (VL_LTS_III(32, idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size())) {
                if (((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 343)
                      ->__PVT__obj == obj) && (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 344)
                                               ->__PVT__objection 
                                               == VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this}))) {
                    ctxt = vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.erase(idx);
                    goto __Vlabel1;
                }
                idx = ((IData)(1U) + idx);
            }
            __Vlabel1: ;
        }
        if ((VlNull{} == ctxt)) {
            idx = 0U;
            {
                while (VL_LTS_III(32, idx, this->__PVT__m_forked_list.size())) {
                    if ((VL_NULL_CHECK(this->__PVT__m_forked_list.at(idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 357)
                         ->__PVT__obj == obj)) {
                        ctxt = this->__PVT__m_forked_list.at(idx);
                        this->__PVT__m_forked_list.erase(idx);
                        this->__PVT__m_scheduled_contexts.erase(VL_NULL_CHECK(ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 362)
                                                                ->__PVT__obj);
                        goto __Vlabel2;
                    }
                    idx = ((IData)(1U) + idx);
                }
                __Vlabel2: ;
            }
        }
        if ((VlNull{} == ctxt)) {
            if (this->__PVT__m_forked_contexts.exists(obj)) {
                ctxt = this->__PVT__m_forked_contexts
                    .at(obj);
                this->__PVT__m_forked_contexts.erase(obj);
                VL_NULL_CHECK(this->__PVT__m_drain_proc
                              .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 377)->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_drain_proc.erase(obj);
            }
        }
        if ((VlNull{} == ctxt)) {
            if (((~ (IData)(this->__PVT__m_prop_mode)) 
                 & (obj != this->__PVT__m_top))) {
                this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count);
            } else if ((obj != this->__PVT__m_top)) {
                this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 1U, 0U);
            }
        } else {
            unnamedblk2__DOT__diff_count = (count - VL_NULL_CHECK(ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 403)
                                            ->__PVT__count);
            if ((0U != unnamedblk2__DOT__diff_count)) {
                if (VL_LTS_III(32, 0U, unnamedblk2__DOT__diff_count)) {
                    if (((~ (IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_raise(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk2__DOT__diff_count);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk2__DOT__diff_count, 1U, 0U);
                    }
                } else {
                    unnamedblk2__DOT__diff_count = 
                        (- unnamedblk2__DOT__diff_count);
                    if (((~ (IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, unnamedblk2__DOT__diff_count, 0U);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, unnamedblk2__DOT__diff_count, 0U, 0U);
                    }
                }
            }
            VL_NULL_CHECK(ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 426)->__VnoInFunc_clear(vlSymsp);
            vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(ctxt);
        }
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_drop_objection\n"); );
    // Body
    if ((VlNull{} == obj)) {
        obj = this->__PVT__m_top;
    }
    this->__VnoInFunc_m_drop(vlProcess, vlSymsp, obj, obj, description, count, 0U);
}

void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_drop\n"); );
    // Locals
    std::string __Vtask_get_full_name__38__Vfuncout;
    std::string __Vfunc_get_name__39__Vfuncout;
    std::string __Vtask_get_full_name__41__Vfuncout;
    std::string __Vfunc_get_name__42__Vfuncout;
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_context_object> unnamedblk3__DOT__ctxt;
    {
        if ((0U == count)) {
            goto __Vlabel0;
        }
        if (((! this->__PVT__m_total_count.exists(obj)) 
             || VL_GTS_III(32, count, this->__PVT__m_total_count
                           .at(obj)))) {
            if (this->__PVT__m_cleared) {
                goto __Vlabel0;
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 517)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__38__Vfuncout);
                                }(), __Vtask_get_full_name__38__Vfuncout)), "\" attempted to drop objection '"s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__39__Vfuncout);
                                    }(), __Vfunc_get_name__39__Vfuncout)), "' count below zero"s)), 0U, ""s, 0U, ""s, 0U);
                goto __Vlabel0;
            }
            if ((obj == source_obj)) {
                if (((! this->__PVT__m_source_count.exists(obj)) 
                     || VL_GTS_III(32, count, this->__PVT__m_source_count
                                   .at(obj)))) {
                    if (this->__PVT__m_cleared) {
                        goto __Vlabel0;
                    }
                    this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "OBJTN_ZERO"s, 
                                                       VL_CVT_PACK_STR_NN(
                                                                          VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object \""s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 526)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__41__Vfuncout);
                                        }(), __Vtask_get_full_name__41__Vfuncout)), "\" attempted to drop objection '"s), 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__42__Vfuncout);
                                            }(), __Vfunc_get_name__42__Vfuncout)), "' count below zero"s)), 0U, ""s, 0U, ""s, 0U);
                        goto __Vlabel0;
                    }
                    __Vtemp_1 = (this->__PVT__m_source_count
                                 .at(obj) - count);
                    this->__PVT__m_source_count.at(obj) 
                        = __Vtemp_1;
                }
                __Vtemp_2 = (this->__PVT__m_total_count
                             .at(obj) - count);
                this->__PVT__m_total_count.at(obj) 
                    = __Vtemp_2;
                if (this->__PVT__m_trace_mode) {
                    this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "dropped"s);
                }
                this->__VnoInFunc_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
                if ((0U != this->__PVT__m_total_count
                     .at(obj))) {
                    if (((~ (IData)(this->__PVT__m_prop_mode)) 
                         & (obj != this->__PVT__m_top))) {
                        this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, in_top_thread);
                    } else if ((obj != this->__PVT__m_top)) {
                        this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, in_top_thread);
                    }
                } else {
                    if ((0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.size())) {
                        unnamedblk3__DOT__ctxt = vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.pop_front();
                    } else {
                        unnamedblk3__DOT__ctxt = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_objection_context_object, vlSymsp);
                    }
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 556)
                                                       ->__PVT__obj 
                        = obj;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 557)
                                                       ->__PVT__source_obj 
                        = source_obj;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 558)
                                                       ->__PVT__description 
                        = description;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 559)
                                                       ->__PVT__count 
                        = count;
                    VL_NULL_CHECK(unnamedblk3__DOT__ctxt, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 560)
                                                       ->__PVT__objection 
                        = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this};
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.push_back(unnamedblk3__DOT__ctxt);
                }
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_clear\n"); );
            // Locals
            std::string __Vtask_get_full_name__48__Vfuncout;
            std::string __Vtask_get_full_name__49__Vfuncout;
            IData/*31:0*/ __Vfunc_get_objection_total__50__Vfuncout;
            __Vfunc_get_objection_total__50__Vfuncout = 0;
            std::string __Vfunc_get_name__52__Vfuncout;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> unnamedblk4__DOT__o;
            CData/*0:0*/ unnamedblk4__DOT__o__Vfirst;
            unnamedblk4__DOT__o__Vfirst = 0;
            std::string name;
            IData/*31:0*/ idx;
            idx = 0;
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
            }
            VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 587)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__48__Vfuncout);
            name = __Vtask_get_full_name__48__Vfuncout;
            name = ((""s == name) ? "uvm_top"s : ([&]() {
                        VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 591)
                                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__49__Vfuncout);
                    }(), __Vtask_get_full_name__49__Vfuncout));
            if (((~ (IData)(this->__PVT__m_top_all_dropped)) 
                 & (0U != ([&]() {
                                this->__VnoInFunc_get_objection_total(vlSymsp, this->__PVT__m_top, __Vfunc_get_objection_total__50__Vfuncout);
                            }(), __Vfunc_get_objection_total__50__Vfuncout)))) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "OBJTN_CLEAR"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Object '"s, name), "' cleared objection counts for "s), 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__52__Vfuncout);
                                }(), __Vfunc_get_name__52__Vfuncout))), 0x000000c8U, ""s, 0U, ""s, 0U);
            }
            this->__PVT__m_source_count.clear();
            this->__PVT__m_total_count.clear();
            idx = 0U;
            while (VL_LTS_III(32, idx, vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.size())) {
                if ((VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 602)
                     ->__PVT__objection == VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this})) {
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 603)
                                                       ->__VnoInFunc_clear(vlSymsp);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.at(idx));
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_scheduled_list.erase(idx);
                } else {
                    idx = ((IData)(1U) + idx);
                }
            }
            this->__PVT__m_scheduled_contexts.clear();
            while ((0U != this->__PVT__m_forked_list.size())) {
                VL_NULL_CHECK(this->__PVT__m_forked_list.at(0U), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 616)
                                                       ->__VnoInFunc_clear(vlSymsp);
                vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(this->__PVT__m_forked_list.at(0U));
                (void)this->__PVT__m_forked_list.pop_front();
            }
            if ((0U != this->__PVT__m_forked_contexts.first(unnamedblk4__DOT__o))) {
                unnamedblk4__DOT__o__Vfirst = 1U;
                while (((IData)(unnamedblk4__DOT__o__Vfirst) 
                        || (0U != this->__PVT__m_forked_contexts.next(unnamedblk4__DOT__o)))) {
                    unnamedblk4__DOT__o__Vfirst = 0U;
                    VL_NULL_CHECK(this->__PVT__m_drain_proc
                                  .at(unnamedblk4__DOT__o), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 624)
                                                       ->__VnoInFunc_kill(vlSymsp);
                    this->__PVT__m_drain_proc.erase(unnamedblk4__DOT__o);
                    VL_NULL_CHECK(this->__PVT__m_forked_contexts
                                  .at(unnamedblk4__DOT__o), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 631)
                                                       ->__VnoInFunc_clear(vlSymsp);
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__PVT__m_context_pool.push_back(this->__PVT__m_forked_contexts
                                                                                .at(unnamedblk4__DOT__o));
                    this->__PVT__m_forked_contexts.erase(unnamedblk4__DOT__o);
                }
            }
            this->__PVT__m_top_all_dropped = 0U;
            this->__PVT__m_cleared = 1U;
            if (this->__PVT__m_events.exists(this->__PVT__m_top)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(this->__PVT__m_top), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 639)
                                   ->__PVT__all_dropped);
            }
        }

        VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count, IData/*31:0*/ in_top_thread) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_forked_drain\n"); );
            // Body
            VL_KEEP_THIS;
            if (this->__PVT__m_drain_time.exists(obj)) {
                co_await vlSymsp->TOP.__VdlySched.delay(
                                                        (0x00000000000003e8ULL 
                                                         * this->__PVT__m_drain_time
                                                         .at(obj)), 
                                                        vlProcess, 
                                                        "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                        708);
            }
            if (this->__PVT__m_trace_mode) {
                this->__VnoInFunc_m_report(vlProcess, vlSymsp, obj, source_obj, description, count, "all_dropped"s);
            }
            this->__VnoInFunc_all_dropped(vlProcess, vlSymsp, obj, source_obj, description, count);
            if ((1U & (~ (IData)(vlProcess->completedFork())))) {
                CData/*0:0*/ __VdynTrigger_h33943cd4__0;
                __VdynTrigger_h33943cd4__0 = 0;
                __VdynTrigger_h33943cd4__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h33943cd4__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 716);
                    this->__Vtrigprevexpr_h116ba8f5__0 
                        = vlProcess->completedFork();
                    __VdynTrigger_h33943cd4__0 = this->__Vtrigprevexpr_h116ba8f5__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h33943cd4__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] $_CEXPR(vlProcess->completedFork()))", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                             716);
            }
            if ((this->__PVT__m_source_count.exists(obj) 
                 && (0U == this->__PVT__m_source_count
                     .at(obj)))) {
                this->__PVT__m_source_count.erase(obj);
            }
            if ((this->__PVT__m_total_count.exists(obj) 
                 && (0U == this->__PVT__m_total_count
                     .at(obj)))) {
                this->__PVT__m_total_count.erase(obj);
            }
            if (((~ (IData)(this->__PVT__m_prop_mode)) 
                 & (obj != this->__PVT__m_top))) {
                this->__VnoInFunc_m_drop(vlProcess, vlSymsp, this->__PVT__m_top, source_obj, description, count, 1U);
            } else if ((obj != this->__PVT__m_top)) {
                this->__VnoInFunc_m_propagate(vlProcess, vlSymsp, obj, source_obj, description, count, 0U, 1U);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_drain_time(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ drain) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_set_drain_time\n"); );
            // Body
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
            }
            this->__PVT__m_drain_time.at(obj) = drain;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_raised\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_callback> __Vtask_first__63__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_callback> __Vtask_next__65__Vfuncout;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16> unnamedblk7__DOT__iter;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_callback> unnamedblk7__DOT__cb;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp;
            if (VL_CAST_DYNAMIC(obj, comp)) {
                VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 788)
                                                       ->__VnoInFunc_raised(vlSymsp, 
                                                                            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
            }
            unnamedblk7__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16, vlSymsp, 
                                            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this});
            VL_NULL_CHECK(unnamedblk7__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 789)
                                                       ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__63__Vfuncout);
            unnamedblk7__DOT__cb = __Vtask_first__63__Vfuncout;
            while ((VlNull{} != unnamedblk7__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk7__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 789)
                                                       ->__VnoInFunc_raised(vlSymsp, 
                                                                            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
                VL_NULL_CHECK(unnamedblk7__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 789)
                                                       ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__65__Vfuncout);
                unnamedblk7__DOT__cb = __Vtask_next__65__Vfuncout;
            }
            if (this->__PVT__m_events.exists(obj)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 791)
                                   ->__PVT__raised);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_dropped\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_callback> __Vtask_first__68__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_callback> __Vtask_next__70__Vfuncout;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16> unnamedblk8__DOT__iter;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_callback> unnamedblk8__DOT__cb;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp;
            if (VL_CAST_DYNAMIC(obj, comp)) {
                VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 807)
                                                       ->__VnoInFunc_dropped(vlSymsp, 
                                                                             VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
            }
            unnamedblk8__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16, vlSymsp, 
                                            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this});
            VL_NULL_CHECK(unnamedblk8__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 808)
                                                       ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__68__Vfuncout);
            unnamedblk8__DOT__cb = __Vtask_first__68__Vfuncout;
            while ((VlNull{} != unnamedblk8__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk8__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 808)
                                                       ->__VnoInFunc_dropped(vlSymsp, 
                                                                             VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
                VL_NULL_CHECK(unnamedblk8__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 808)
                                                       ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__70__Vfuncout);
                unnamedblk8__DOT__cb = __Vtask_next__70__Vfuncout;
            }
            if (this->__PVT__m_events.exists(obj)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 810)
                                   ->__PVT__dropped);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_all_dropped\n"); );
            // Locals
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_callback> __Vtask_first__73__Vfuncout;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_callback> __Vtask_next__75__Vfuncout;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16> unnamedblk9__DOT__iter;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection_callback> unnamedblk9__DOT__cb;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp;
            if (VL_CAST_DYNAMIC(obj, comp)) {
                VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 828)
                                                       ->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this}, source_obj, description, count);
            }
            unnamedblk9__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz15_TBz16, vlSymsp, 
                                            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this});
            VL_NULL_CHECK(unnamedblk9__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 829)
                                                       ->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__73__Vfuncout);
            unnamedblk9__DOT__cb = __Vtask_first__73__Vfuncout;
            while ((VlNull{} != unnamedblk9__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk9__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 829)
                                                       ->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>{this}, obj, source_obj, description, count);
                VL_NULL_CHECK(unnamedblk9__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 829)
                                                       ->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__75__Vfuncout);
                unnamedblk9__DOT__cb = __Vtask_next__75__Vfuncout;
            }
            if (this->__PVT__m_events.exists(obj)) {
                vlSymsp->fireEvent(VL_NULL_CHECK(this->__PVT__m_events
                                                 .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 831)
                                   ->__PVT__all_dropped);
            }
            if ((obj == this->__PVT__m_top)) {
                this->__PVT__m_top_all_dropped = 1U;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors(Vuart_example__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object>> &list) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objectors\n"); );
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> unnamedblk10__DOT__obj;
            CData/*0:0*/ unnamedblk10__DOT__obj__Vfirst;
            unnamedblk10__DOT__obj__Vfirst = 0;
            list.clear();
            if ((0U != this->__PVT__m_source_count.first(unnamedblk10__DOT__obj))) {
                unnamedblk10__DOT__obj__Vfirst = 1U;
                while (((IData)(unnamedblk10__DOT__obj__Vfirst) 
                        || (0U != this->__PVT__m_source_count.next(unnamedblk10__DOT__obj)))) {
                    unnamedblk10__DOT__obj__Vfirst = 0U;
                    list.push_back(unnamedblk10__DOT__obj);
                }
            }
        }

        VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ objt_event, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for\n"); );
            // Locals
            IData/*31:0*/ __Vtemp_1;
            IData/*31:0*/ __Vtemp_2;
            // Body
            VL_KEEP_THIS;
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
            }
            if ((! this->__PVT__m_events.exists(obj))) {
                this->__PVT__m_events.at(obj) = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_objection_events, vlSymsp);
            }
            __Vtemp_1 = ((IData)(1U) + VL_NULL_CHECK(this->__PVT__m_events
                                                     .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 864)
                         ->__PVT__waiters);
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 864)
                                                       ->__PVT__waiters 
                = __Vtemp_1;
            if ((1U == objt_event)) {
                CData/*0:0*/ __VdynTrigger_h755b6afe__0;
                __VdynTrigger_h755b6afe__0 = 0;
                __VdynTrigger_h755b6afe__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h755b6afe__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 866);
                    __VdynTrigger_h755b6afe__0 = VL_NULL_CHECK(this->__PVT__m_events
                                                               .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 866)
                        ->__PVT__raised.isFired();
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h755b6afe__0);
                    VL_NULL_CHECK(this->__PVT__m_events
                                  .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 866)
                                                       ->__PVT__raised.clearFired();
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).raised)", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                             866);
            } else if ((2U == objt_event)) {
                CData/*0:0*/ __VdynTrigger_ha4d2b2a1__0;
                __VdynTrigger_ha4d2b2a1__0 = 0;
                __VdynTrigger_ha4d2b2a1__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_ha4d2b2a1__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 867);
                    __VdynTrigger_ha4d2b2a1__0 = VL_NULL_CHECK(this->__PVT__m_events
                                                               .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 867)
                        ->__PVT__dropped.isFired();
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_ha4d2b2a1__0);
                    VL_NULL_CHECK(this->__PVT__m_events
                                  .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 867)
                                                       ->__PVT__dropped.clearFired();
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).dropped)", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                             867);
            } else if ((4U == objt_event)) {
                CData/*0:0*/ __VdynTrigger_h2d211205__0;
                __VdynTrigger_h2d211205__0 = 0;
                __VdynTrigger_h2d211205__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h2d211205__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 868);
                    __VdynTrigger_h2d211205__0 = VL_NULL_CHECK(this->__PVT__m_events
                                                               .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 868)
                        ->__PVT__all_dropped.isFired();
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2d211205__0);
                    VL_NULL_CHECK(this->__PVT__m_events
                                  .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 868)
                                                       ->__PVT__all_dropped.clearFired();
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([event] (uvm_pkg::uvm_objection.m_events[uvm_pkg::uvm_objection.obj]).all_dropped)", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                             868);
            }
            __Vtemp_2 = (VL_NULL_CHECK(this->__PVT__m_events
                                       .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 871)
                         ->__PVT__waiters - (IData)(1U));
            VL_NULL_CHECK(this->__PVT__m_events.at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 871)
                                                       ->__PVT__waiters 
                = __Vtemp_2;
            if ((0U == VL_NULL_CHECK(this->__PVT__m_events
                                     .at(obj), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 873)
                 ->__PVT__waiters)) {
                this->__PVT__m_events.erase(obj);
            }
        }

        VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for_total_count(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ count) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_wait_for_total_count\n"); );
            // Body
            VL_KEEP_THIS;
            {
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                }
                if (((! this->__PVT__m_total_count.exists(obj)) 
                     & (0U == count))) {
                    goto __Vlabel0;
                }
                if ((0U == count)) {
                    if ((1U & (~ ((! this->__PVT__m_total_count.exists(obj)) 
                                  & (0U == count))))) {
                        CData/*0:0*/ __VdynTrigger_h462c4fb5__0;
                        __VdynTrigger_h462c4fb5__0 = 0;
                        __VdynTrigger_h462c4fb5__0 = 0U;
                        while ((1U & (~ (IData)(__VdynTrigger_h462c4fb5__0)))) {
                            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                         nullptr, 
                                                                         "@([true] ((! uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj)) & (32'sh0 == uvm_pkg::uvm_objection.count)))", 
                                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                         886);
                            this->__Vtrigprevexpr_h4043bb54__0 
                                = ((! this->__PVT__m_total_count.exists(obj)) 
                                   & (0U == count));
                            __VdynTrigger_h462c4fb5__0 
                                = this->__Vtrigprevexpr_h4043bb54__0;
                            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h462c4fb5__0);
                        }
                        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                     nullptr, 
                                                                     "@([true] ((! uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj)) & (32'sh0 == uvm_pkg::uvm_objection.count)))", 
                                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                     886);
                    }
                } else if ((1U & (~ (this->__PVT__m_total_count.exists(obj) 
                                     && (this->__PVT__m_total_count
                                         .at(obj) == count))))) {
                    CData/*0:0*/ __VdynTrigger_h36a23fc1__0;
                    __VdynTrigger_h36a23fc1__0 = 0;
                    __VdynTrigger_h36a23fc1__0 = 0U;
                    while ((1U & (~ (IData)(__VdynTrigger_h36a23fc1__0)))) {
                        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                     nullptr, 
                                                                     "@([true] (uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj) && ((uvm_pkg::uvm_objection.m_total_count[uvm_pkg::uvm_objection.obj]) == uvm_pkg::uvm_objection.count)))", 
                                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                     888);
                        this->__Vtrigprevexpr_h105da858__0 
                            = (this->__PVT__m_total_count.exists(obj) 
                               && (this->__PVT__m_total_count
                                   .at(obj) == count));
                        __VdynTrigger_h36a23fc1__0 
                            = this->__Vtrigprevexpr_h105da858__0;
                        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h36a23fc1__0);
                    }
                    co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                 nullptr, 
                                                                 "@([true] (uvm_pkg::uvm_objection.m_total_count.exists(uvm_pkg::uvm_objection.obj) && ((uvm_pkg::uvm_objection.m_total_count[uvm_pkg::uvm_objection.obj]) == uvm_pkg::uvm_objection.count)))", 
                                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 
                                                                 888);
                }
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_count(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_count\n"); );
            // Body
            {
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                }
                if ((! this->__PVT__m_source_count.exists(obj))) {
                    get_objection_count__Vfuncrtn = 0U;
                    goto __Vlabel0;
                }
                get_objection_count__Vfuncrtn = this->__PVT__m_source_count
                    .at(obj);
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_total__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_objection_total\n"); );
            // Body
            if ((VlNull{} == obj)) {
                obj = this->__PVT__m_top;
            }
            if (this->__PVT__m_total_count.exists(obj)) {
                get_objection_total__Vfuncrtn = this->__PVT__m_total_count
                    .at(obj);
            } else {
                get_objection_total__Vfuncrtn = 0U;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_drain_time(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, QData/*63:0*/ &get_drain_time__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_drain_time\n"); );
            // Body
            {
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                }
                if ((! this->__PVT__m_drain_time.exists(obj))) {
                    get_drain_time__Vfuncrtn = 0ULL;
                    goto __Vlabel0;
                }
                get_drain_time__Vfuncrtn = this->__PVT__m_drain_time
                    .at(obj);
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header, std::string &m_display_objections__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_m_display_objections\n"); );
            // Locals
            std::string __Vtask_get_full_name__77__Vfuncout;
            IData/*31:0*/ __Vfunc_get_objection_total__78__Vfuncout;
            __Vfunc_get_objection_total__78__Vfuncout = 0;
            std::string __Vtask_get_full_name__79__Vfuncout;
            std::string __Vtemp_1;
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> unnamedblk11__DOT__o;
            CData/*0:0*/ unnamedblk11__DOT__o__Vfirst;
            unnamedblk11__DOT__o__Vfirst = 0;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> unnamedblk11__DOT__unnamedblk12__DOT__theobj;
            IData/*31:0*/ unnamedblk13__DOT__i;
            unnamedblk13__DOT__i = 0;
            IData/*31:0*/ unnamedblk14__DOT__i;
            unnamedblk14__DOT__i = 0;
            std::string s;
            IData/*31:0*/ total;
            total = 0;
            VlAssocArray<std::string, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object>> list;
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> curr_obj;
            IData/*31:0*/ depth;
            depth = 0;
            std::string name;
            std::string this_obj_name;
            std::string curr_obj_name;
            {
                if ((0U != this->__PVT__m_total_count.first(unnamedblk11__DOT__o))) {
                    unnamedblk11__DOT__o__Vfirst = 1U;
                    while (((IData)(unnamedblk11__DOT__o__Vfirst) 
                            || (0U != this->__PVT__m_total_count.next(unnamedblk11__DOT__o)))) {
                        unnamedblk11__DOT__o__Vfirst = 0U;
                        unnamedblk11__DOT__unnamedblk12__DOT__theobj 
                            = unnamedblk11__DOT__o;
                        if (VL_LTS_III(32, 0U, this->__PVT__m_total_count
                                       .at(unnamedblk11__DOT__o))) {
                            list.at(([&]() {
                                        VL_NULL_CHECK(unnamedblk11__DOT__unnamedblk12__DOT__theobj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 959)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__77__Vfuncout);
                                    }(), __Vtask_get_full_name__77__Vfuncout)) 
                                = unnamedblk11__DOT__unnamedblk12__DOT__theobj;
                        }
                    }
                }
                if ((VlNull{} == obj)) {
                    obj = this->__PVT__m_top;
                }
                this->__VnoInFunc_get_objection_total(vlSymsp, obj, __Vfunc_get_objection_total__78__Vfuncout);
                total = __Vfunc_get_objection_total__78__Vfuncout;
                s = VL_SFORMATF_N_NX("The total objection count is %0d\n",0,
                                     32,total) ;
                if ((0U == total)) {
                    m_display_objections__Vfuncrtn 
                        = s;
                    goto __Vlabel0;
                }
                s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
                s = VL_CONCATN_NNN(s, "Source  Total   \n"s);
                s = VL_CONCATN_NNN(s, "Count   Count   Object\n"s);
                s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
                VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 978)
                                                       ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__79__Vfuncout);
                this_obj_name = __Vtask_get_full_name__79__Vfuncout;
                curr_obj_name = this_obj_name;
                do {
                    curr_obj = list.at(curr_obj_name);
                    depth = 0U;
                    unnamedblk13__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk13__DOT__i, 
                                      VL_LEN_IN(curr_obj_name))) {
                        if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk13__DOT__i))) {
                            depth = ((IData)(1U) + depth);
                        }
                        unnamedblk13__DOT__i = ((IData)(1U) 
                                                + unnamedblk13__DOT__i);
                    }
                    name = curr_obj_name;
                    unnamedblk14__DOT__i = (VL_LEN_IN(curr_obj_name) 
                                            - (IData)(1U));
                    {
                        while (VL_LTES_III(32, 0U, unnamedblk14__DOT__i)) {
                            if ((0x2eU == VL_GETC_N(curr_obj_name,unnamedblk14__DOT__i))) {
                                name = VL_SUBSTR_N(curr_obj_name,
                                                   ((IData)(1U) 
                                                    + unnamedblk14__DOT__i),
                                                   (VL_LEN_IN(curr_obj_name) 
                                                    - (IData)(1U)));
                                goto __Vlabel1;
                            }
                            unnamedblk14__DOT__i = 
                                (unnamedblk14__DOT__i 
                                 - (IData)(1U));
                        }
                        __Vlabel1: ;
                    }
                    if ((""s == curr_obj_name)) {
                        name = "uvm_top"s;
                    } else {
                        depth = ((IData)(1U) + depth);
                    }
                    __Vtemp_1 = VL_SUBSTR_N("                                                                                   "s,0U,
                                            VL_MULS_III(32, (IData)(2U), depth));
                    s = VL_CONCATN_NNN(s, VL_SFORMATF_N_NX("%-6d  %-6d %@%@\n",0,
                                                           32,
                                                           (this->__PVT__m_source_count.exists(curr_obj)
                                                             ? this->__PVT__m_source_count
                                                            .at(curr_obj)
                                                             : 0U),
                                                           32,
                                                           (this->__PVT__m_total_count.exists(curr_obj)
                                                             ? this->__PVT__m_total_count
                                                            .at(curr_obj)
                                                             : 0U),
                                                           -1,
                                                           &(__Vtemp_1),
                                                           -1,
                                                           &(name)) );
                } while (((0U != list.next(curr_obj_name)) 
                          && (VL_SUBSTR_N(curr_obj_name,0U,
                                          (VL_LEN_IN(this_obj_name) 
                                           - (IData)(1U))) 
                              == this_obj_name)));
                s = VL_CONCATN_NNN(s, "---------------------------------------------------------\n"s);
                m_display_objections__Vfuncrtn = s;
                __Vlabel0: ;
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_convert2string\n"); );
            // Locals
            std::string __Vfunc_m_display_objections__80__Vfuncout;
            // Body
            this->__VnoInFunc_m_display_objections(vlProcess, vlSymsp, this->__PVT__m_top, 1U, __Vfunc_m_display_objections__80__Vfuncout);
            convert2string__Vfuncrtn = __Vfunc_m_display_objections__80__Vfuncout;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_display_objections(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ show_header) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_display_objections\n"); );
            // Locals
            std::string __Vfunc_m_display_objections__81__Vfuncout;
            IData/*31:0*/ __Vfunc_uvm_report_enabled__82__Vfuncout;
            __Vfunc_uvm_report_enabled__82__Vfuncout = 0;
            // Body
            VlProcessRef vlProcess = std::make_shared<VlProcess>();
            std::string m;
            this->__VnoInFunc_m_display_objections(vlProcess, vlSymsp, obj, show_header, __Vfunc_m_display_objections__81__Vfuncout);
            m = __Vfunc_m_display_objections__81__Vfuncout;
            if ((0U != ([&]() {
                            this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 0U, "UVM/OBJ/DISPLAY"s, __Vfunc_uvm_report_enabled__82__Vfuncout);
                        }(), __Vfunc_uvm_report_enabled__82__Vfuncout))) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM/OBJ/DISPLAY"s, m, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh"s, 0x00000409U, ""s, 1U);
            }
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_create\n"); );
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> tmp;
            tmp = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_objection, vlProcess, vlSymsp, name);
            create__Vfuncrtn = tmp;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_get_type_name\n"); );
            // Body
            get_type_name__Vfuncrtn = "uvm_objection"s;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_do_copy\n"); );
            // Body
            VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> _rhs;
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(rhs, _rhs))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_objection.svh:1056: Assertion failed in %Nuvm_pkg.uvm_objection.do_copy: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 1056, "");
            }
            this->__PVT__m_source_count = VL_NULL_CHECK(_rhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 1057)
                ->__PVT__m_source_count;
            this->__PVT__m_total_count = VL_NULL_CHECK(_rhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 1058)
                ->__PVT__m_total_count;
            this->__PVT__m_drain_time = VL_NULL_CHECK(_rhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 1059)
                ->__PVT__m_drain_time;
            this->__PVT__m_prop_mode = VL_NULL_CHECK(_rhs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_objection.svh", 1060)
                ->__PVT__m_prop_mode;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc_randomize\n"); );
            // Locals
            IData/*31:0*/ __Vfunc___Vbasic_randomize__86__Vfuncout;
            __Vfunc___Vbasic_randomize__86__Vfuncout = 0;
            // Body
            Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
            this->__VnoInFunc___Vsetup_constraints(vlSymsp);
            randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
            randomize__Vfuncrtn = (randomize__Vfuncrtn 
                                   & ([&]() {
                        this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__86__Vfuncout);
                    }(), __Vfunc___Vbasic_randomize__86__Vfuncout));
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::__VnoInFunc___Vbasic_randomize\n"); );
            // Body
            __Vbasic_randomize__Vfuncrtn = 1U;
        }

        void Vuart_example_uvm_pkg__03a__03auvm_objection::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::_ctor_var_reset\n"); );
            // Body
            (void)vlSymsp;  // Prevent unused variable warning
            __PVT__m_trace_mode = 0;
            __PVT__m_source_count.atDefault() = 0;
            __PVT__m_total_count.atDefault() = 0;
            __PVT__m_drain_time.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 17709275628653521742ULL, 4102563340287712520ull);
            __PVT__m_top_all_dropped = 0;
            __PVT__m_prop_mode = 0;
            __PVT__m_cleared = 0;
            __Vtrigprevexpr_h116ba8f5__0 = VL_SCOPED_RAND_RESET_I(1, 17709275628653521742ULL, 13114877098527223999ull);
            __Vtrigprevexpr_h4043bb54__0 = VL_SCOPED_RAND_RESET_I(1, 17709275628653521742ULL, 800287487426775132ull);
            __Vtrigprevexpr_h105da858__0 = VL_SCOPED_RAND_RESET_I(1, 17709275628653521742ULL, 1754245429406011701ull);
        }

        std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection>& obj) {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::VL_TO_STRING\n"); );
            // Body
            return (obj ? obj->to_string() : "null");
        }

        std::string Vuart_example_uvm_pkg__03a__03auvm_objection::to_string() const {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::to_string\n"); );
            // Body
            return ("'{"s + to_string_middle() + "}");
        }

        std::string Vuart_example_uvm_pkg__03a__03auvm_objection::to_string_middle() const {
            VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_objection::to_string_middle\n"); );
            // Body
            std::string out;
            out += "m_trace_mode:" + VL_TO_STRING(__PVT__m_trace_mode);
            out += ", m_source_count:" + VL_TO_STRING(__PVT__m_source_count);
            out += ", m_total_count:" + VL_TO_STRING(__PVT__m_total_count);
            out += ", m_drain_time:" + VL_TO_STRING(__PVT__m_drain_time);
            out += ", m_events:" + VL_TO_STRING(__PVT__m_events);
            out += ", m_top_all_dropped:" + VL_TO_STRING(__PVT__m_top_all_dropped);
            out += ", m_top:" + VL_TO_STRING(__PVT__m_top);
            out += ", m_drain_proc:" + VL_TO_STRING(__PVT__m_drain_proc);
            out += ", m_scheduled_contexts:" + VL_TO_STRING(__PVT__m_scheduled_contexts);
            out += ", m_forked_list:" + VL_TO_STRING(__PVT__m_forked_list);
            out += ", m_forked_contexts:" + VL_TO_STRING(__PVT__m_forked_contexts);
            out += ", m_prop_mode:" + VL_TO_STRING(__PVT__m_prop_mode);
            out += ", m_cleared:" + VL_TO_STRING(__PVT__m_cleared);
            out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_report_object::to_string_middle();
            return (out);
        }
