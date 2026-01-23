// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_set_default_max_ready_to_end_iterations(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_set_default_max_ready_to_end_iterations\n"); );
    // Body
    this->__PVT__m_default_max_ready_to_end_iters = max;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_get_default_max_ready_to_end_iterations(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_max_ready_to_end_iterations__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_get_default_max_ready_to_end_iterations\n"); );
    // Body
    get_default_max_ready_to_end_iterations__Vfuncrtn 
        = this->__PVT__m_default_max_ready_to_end_iters;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_jump_all(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_jump_all\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__Vfuncout;
    __Vfunc_uvm_report_enabled__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__2__verbosity;
    __Vfunc_uvm_report_enabled__2__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__2__severity;
    __Vfunc_uvm_report_enabled__2__severity = 0;
    std::string __Vfunc_uvm_report_enabled__2__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__4__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__5__Vfuncout;
    __Vtask_uvm_report_enabled__5__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__6__id;
    std::string __Vtask_uvm_report_warning__6__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__verbosity;
    __Vtask_uvm_report_warning__6__verbosity = 0;
    std::string __Vtask_uvm_report_warning__6__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__6__line;
    __Vtask_uvm_report_warning__6__line = 0;
    std::string __Vtask_uvm_report_warning__6__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__6__report_enabled_checked;
    __Vtask_uvm_report_warning__6__report_enabled_checked = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__2__id = "NOTIMPL"s;
                    __Vfunc_uvm_report_enabled__2__severity = 1U;
                    __Vfunc_uvm_report_enabled__2__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__3__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__4__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__4__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__2__verbosity, (IData)(__Vfunc_uvm_report_enabled__2__severity), __Vfunc_uvm_report_enabled__2__id, __Vtask_uvm_report_enabled__5__Vfuncout);
                    __Vfunc_uvm_report_enabled__2__Vfuncout 
                        = __Vtask_uvm_report_enabled__5__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__2__Vfuncout))) {
        __Vtask_uvm_report_warning__6__report_enabled_checked = 1U;
        __Vtask_uvm_report_warning__6__context_name = ""s;
        __Vtask_uvm_report_warning__6__line = 0x00000848U;
        __Vtask_uvm_report_warning__6__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_warning__6__verbosity = 0U;
        __Vtask_uvm_report_warning__6__message = "uvm_phase::jump_all is not implemented and has been replaced by uvm_domain::jump_all"s;
        __Vtask_uvm_report_warning__6__id = "NOTIMPL"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
            = __Vfunc_get__7__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
            = __Vtask_get_root__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__6__id, __Vtask_uvm_report_warning__6__message, __Vtask_uvm_report_warning__6__verbosity, __Vtask_uvm_report_warning__6__filename, __Vtask_uvm_report_warning__6__line, __Vtask_uvm_report_warning__6__context_name, (IData)(__Vtask_uvm_report_warning__6__report_enabled_checked));
    }
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vfunc_get_common_domain__12__Vfuncout;
    IData/*31:0*/ __Vtask_try_put__13__Vfuncout;
    __Vtask_try_put__13__Vfuncout = 0;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk156__DOT__ph;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk157__DOT__phase;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> top;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
    cs = __Vfunc_get__10__Vfuncout;
    VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2246)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
    top = __Vtask_get_root__11__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __Vfunc_get_common_domain__12__Vfuncout);
    unnamedblk156__DOT__ph = __Vfunc_get_common_domain__12__Vfuncout;
    VL_NULL_CHECK(this->__PVT__m_phase_hopper, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2251)->__VnoInFunc_try_put(vlSymsp, unnamedblk156__DOT__ph, __Vtask_try_put__13__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__m_uvm_core_state = 5U;
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__m_phase_hopper, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2257)->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk157__DOT__phase);
        this->__VnoInFunc_m_run_phases____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), unnamedblk157__DOT__phase);
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                2263);
    }
    co_return;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases____Vfork_1__0(VlProcessRef vlProcess, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk157__DOT__phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_phase__Vclpkg::__VnoInFunc_m_run_phases____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_3__15__phase;
    // Body
    __Vtask___VforkTask_3__15__phase = unnamedblk157__DOT__phase;
    co_await VL_NULL_CHECK(__Vtask___VforkTask_3__15__phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2260)->__VnoInFunc_execute_phase(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_func(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_func\n"); );
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_task(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_exec_task\n"); );
    // Body
    VL_KEEP_THIS;
    co_return;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_traverse(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, IData/*31:0*/ state) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_traverse\n"); );
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute\n"); );
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_begin_node(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &get_begin_node__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_begin_node\n"); );
    // Body
    {
        if ((VlNull{} != this->__PVT__m_imp)) {
            get_begin_node__Vfuncrtn = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        get_begin_node__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_end_node(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &get_end_node__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_end_node\n"); );
    // Body
    get_end_node__Vfuncrtn = this->__PVT__m_end_node;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_ready_to_end_count(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_ready_to_end_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_ready_to_end_count\n"); );
    // Body
    get_ready_to_end_count__Vfuncrtn = this->__PVT__m_ready_to_end_count;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vfunc_get_name__0__Vfuncout;
    std::string __Vfunc_get_schedule_name__1__Vfuncout;
    std::string __Vfunc_m_aa2string__2__Vfuncout;
    std::string __Vfunc_m_aa2string__3__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    std::string s;
    __Vtemp_1 = ([&]() {
            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__0__Vfuncout);
        }(), __Vfunc_get_name__0__Vfuncout);
    __Vtemp_2 = ((VlNull{} == this->__PVT__m_parent)
                  ? "null"s : ([&]() {
                this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __Vfunc_get_schedule_name__1__Vfuncout);
            }(), __Vfunc_get_schedule_name__1__Vfuncout));
    __Vtemp_3 = ([&]() {
            this->__VnoInFunc_m_aa2string(vlSymsp, this->__PVT__m_predecessors, __Vfunc_m_aa2string__2__Vfuncout);
        }(), __Vfunc_m_aa2string__2__Vfuncout);
    __Vtemp_4 = ([&]() {
            this->__VnoInFunc_m_aa2string(vlSymsp, this->__PVT__m_successors, __Vfunc_m_aa2string__3__Vfuncout);
        }(), __Vfunc_m_aa2string__3__Vfuncout);
    s = VL_SFORMATF_N_NX("phase: %@ parent=%@  pred=%@  succ=%@",0,
                         -1,&(__Vtemp_1),-1,&(__Vtemp_2),
                         -1,&(__Vtemp_3),-1,&(__Vtemp_4)) ;
    convert2string__Vfuncrtn = s;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_aa2string(Vuart_example__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> aa, std::string &m_aa2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_aa2string\n"); );
    // Locals
    std::string __Vtask_get_name__4__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__ph;
    CData/*0:0*/ unnamedblk1__DOT__ph__Vfirst;
    unnamedblk1__DOT__ph__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk1__DOT__unnamedblk2__DOT__n;
    std::string s;
    IData/*31:0*/ i;
    i = 0;
    s = "'{ "s;
    if ((0U != aa.first(unnamedblk1__DOT__ph))) {
        unnamedblk1__DOT__ph__Vfirst = 1U;
        while (((IData)(unnamedblk1__DOT__ph__Vfirst) 
                || (0U != aa.next(unnamedblk1__DOT__ph)))) {
            unnamedblk1__DOT__ph__Vfirst = 0U;
            unnamedblk1__DOT__unnamedblk2__DOT__n = unnamedblk1__DOT__ph;
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(s, ((VlNull{} 
                                                   == unnamedblk1__DOT__unnamedblk2__DOT__n)
                                                   ? "null"s
                                                   : 
                                                  ([&]() {
                                VL_NULL_CHECK(unnamedblk1__DOT__unnamedblk2__DOT__n, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 547)
                                                   ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__4__Vfuncout);
                            }(), __Vtask_get_name__4__Vfuncout))), 
                               VL_CVT_PACK_STR_NI((
                                                   (i 
                                                    == 
                                                    (aa.size() 
                                                     - (IData)(1U)))
                                                    ? 0U
                                                    : 0x2c20U)));
            i = ((IData)(1U) + i);
        }
    }
    s = VL_CONCATN_NNN(s, " }"s);
    m_aa2string__Vfuncrtn = s;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_domain(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_domain\n"); );
    // Body
    is_domain__Vfuncrtn = (4U == this->__PVT__m_phase_type);
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_get_transitive_children(Vuart_example__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>> &phases) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_get_transitive_children\n"); );
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk3__DOT__succ;
    CData/*0:0*/ unnamedblk3__DOT__succ__Vfirst;
    unnamedblk3__DOT__succ__Vfirst = 0;
    if ((0U != this->__PVT__m_successors.first(unnamedblk3__DOT__succ))) {
        unnamedblk3__DOT__succ__Vfirst = 1U;
        while (((IData)(unnamedblk3__DOT__succ__Vfirst) 
                || (0U != this->__PVT__m_successors.next(unnamedblk3__DOT__succ)))) {
            unnamedblk3__DOT__succ__Vfirst = 0U;
            phases.push_back(unnamedblk3__DOT__succ);
            VL_NULL_CHECK(unnamedblk3__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 563)->__VnoInFunc_m_get_transitive_children(vlSymsp, phases);
        }
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> &get_objection__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_get_imp__6__Vfuncout;
    IData/*31:0*/ __Vfunc_get_phase_type__7__Vfuncout;
    __Vfunc_get_phase_type__7__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_create__8__Vfuncout;
    std::string __Vfunc_get_name__9__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> imp;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_task_phase> tp;
    {
        this->__VnoInFunc_get_imp(vlSymsp, __Vfunc_get_imp__6__Vfuncout);
        imp = __Vfunc_get_imp__6__Vfuncout;
        if ((((1U != ([&]() {
                                this->__VnoInFunc_get_phase_type(vlSymsp, __Vfunc_get_phase_type__7__Vfuncout);
                            }(), __Vfunc_get_phase_type__7__Vfuncout)) 
              | (VlNull{} == imp)) || (! VL_CAST_DYNAMIC(imp, tp)))) {
            get_objection__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((VlNull{} == this->__PVT__phase_done)) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                ([&]() {
                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__9__Vfuncout);
                            }(), __Vfunc_get_name__9__Vfuncout), "_objection"s)), VlNull{}, ""s, __Vfunc_create__8__Vfuncout);
            this->__PVT__phase_done = __Vfunc_create__8__Vfuncout;
        }
        get_objection__Vfuncrtn = this->__PVT__phase_done;
        __Vlabel0: ;
    }
}

Vuart_example_uvm_pkg__03a__03auvm_phase::Vuart_example_uvm_pkg__03a__03auvm_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ phase_type, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> parent)
    : Vuart_example_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_default_max_ready_to_end_iterations__10__Vfuncout;
    __Vfunc_get_default_max_ready_to_end_iterations__10__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__12__Vfuncout;
    IData/*31:0*/ __Vtask_get_arg_value__13__Vfuncout;
    __Vtask_get_arg_value__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_arg_value__14__Vfuncout;
    __Vtask_get_arg_value__14__Vfuncout = 0;
    // Body
    _ctor_var_reset(vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__VnoInFunc_get_default_max_ready_to_end_iterations(vlSymsp, __Vfunc_get_default_max_ready_to_end_iterations__10__Vfuncout);
    this->__PVT__max_ready_to_end_iters = __Vfunc_get_default_max_ready_to_end_iterations__10__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> unnamedblk77__DOT__clp;
    std::string unnamedblk77__DOT__val;
    ;
    this->__PVT__m_phase_type = phase_type;
    if ((("common"s == name) & (4U == phase_type))) {
        this->__PVT__m_state = 1U;
    }
    this->__PVT__m_run_count = 0U;
    this->__PVT__m_parent = parent;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__12__Vfuncout);
    unnamedblk77__DOT__clp = __Vfunc_get_inst__12__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace 
        = (0U != ([&]() {
                VL_NULL_CHECK(unnamedblk77__DOT__clp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 717)
                  ->__VnoInFunc_get_arg_value(vlSymsp, "+UVM_PHASE_TRACE"s, unnamedblk77__DOT__val, __Vtask_get_arg_value__13__Vfuncout);
            }(), __Vtask_get_arg_value__13__Vfuncout));
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_use_ovm_run_semantic 
        = (0U != ([&]() {
                VL_NULL_CHECK(unnamedblk77__DOT__clp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 721)
                  ->__VnoInFunc_get_arg_value(vlSymsp, "+UVM_USE_OVM_RUN_SEMANTIC"s, unnamedblk77__DOT__val, __Vtask_get_arg_value__14__Vfuncout);
            }(), __Vtask_get_arg_value__14__Vfuncout));
    if (((VlNull{} == parent) & ((3U == phase_type) 
                                 | (4U == phase_type)))) {
        this->__PVT__m_end_node = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, 
                                         VL_CVT_PACK_STR_NN(
                                                            VL_CONCATN_NNN(name, "_end"s)), 2U, 
                                         VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
        this->__PVT__m_successors.at(this->__PVT__m_end_node) = 1U;
        VL_NULL_CHECK(this->__PVT__m_end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 733)->__PVT__m_predecessors.at(
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_add(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> with_phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> after_phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> before_phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> start_with_phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> end_with_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_add\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__Vfuncout;
    __Vfunc_uvm_report_enabled__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__verbosity;
    __Vfunc_uvm_report_enabled__16__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__16__severity;
    __Vfunc_uvm_report_enabled__16__severity = 0;
    std::string __Vfunc_uvm_report_enabled__16__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__17__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__18__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__19__Vfuncout;
    __Vtask_uvm_report_enabled__19__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_phase_type__21__Vfuncout;
    __Vtask_get_phase_type__21__Vfuncout = 0;
    std::string __Vtask_get_name__22__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_find__23__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__Vfuncout;
    __Vfunc_uvm_report_enabled__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__verbosity;
    __Vfunc_uvm_report_enabled__24__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__24__severity;
    __Vfunc_uvm_report_enabled__24__severity = 0;
    std::string __Vfunc_uvm_report_enabled__24__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__27__Vfuncout;
    __Vtask_uvm_report_enabled__27__Vfuncout = 0;
    std::string __Vfunc_get_name__29__Vfuncout;
    IData/*31:0*/ __Vtask_get_phase_type__30__Vfuncout;
    __Vtask_get_phase_type__30__Vfuncout = 0;
    std::string __Vtask_get_name__31__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_find__32__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    std::string __Vfunc_uvm_report_enabled__33__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__36__Vfuncout;
    __Vtask_uvm_report_enabled__36__Vfuncout = 0;
    std::string __Vfunc_get_name__38__Vfuncout;
    IData/*31:0*/ __Vtask_get_phase_type__39__Vfuncout;
    __Vtask_get_phase_type__39__Vfuncout = 0;
    std::string __Vtask_get_name__40__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_find__41__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__Vfuncout;
    __Vfunc_uvm_report_enabled__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__verbosity;
    __Vfunc_uvm_report_enabled__42__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__42__severity;
    __Vfunc_uvm_report_enabled__42__severity = 0;
    std::string __Vfunc_uvm_report_enabled__42__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__43__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__44__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__45__Vfuncout;
    __Vtask_uvm_report_enabled__45__Vfuncout = 0;
    std::string __Vfunc_get_name__47__Vfuncout;
    IData/*31:0*/ __Vtask_get_phase_type__48__Vfuncout;
    __Vtask_get_phase_type__48__Vfuncout = 0;
    std::string __Vtask_get_name__49__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_find__50__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__Vfuncout;
    __Vfunc_uvm_report_enabled__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__verbosity;
    __Vfunc_uvm_report_enabled__51__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__51__severity;
    __Vfunc_uvm_report_enabled__51__severity = 0;
    std::string __Vfunc_uvm_report_enabled__51__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__54__Vfuncout;
    __Vtask_uvm_report_enabled__54__Vfuncout = 0;
    std::string __Vfunc_get_name__56__Vfuncout;
    IData/*31:0*/ __Vtask_get_phase_type__57__Vfuncout;
    __Vtask_get_phase_type__57__Vfuncout = 0;
    std::string __Vtask_get_name__58__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_find__59__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__Vfuncout;
    __Vfunc_uvm_report_enabled__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
    __Vfunc_uvm_report_enabled__60__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
    __Vfunc_uvm_report_enabled__60__severity = 0;
    std::string __Vfunc_uvm_report_enabled__60__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__63__Vfuncout;
    __Vtask_uvm_report_enabled__63__Vfuncout = 0;
    std::string __Vfunc_get_name__65__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66__Vfuncout;
    __Vfunc_uvm_report_enabled__66__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__66__verbosity;
    __Vfunc_uvm_report_enabled__66__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__66__severity;
    __Vfunc_uvm_report_enabled__66__severity = 0;
    std::string __Vfunc_uvm_report_enabled__66__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__69__Vfuncout;
    __Vtask_uvm_report_enabled__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__71__Vfuncout;
    __Vfunc_uvm_report_enabled__71__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__71__verbosity;
    __Vfunc_uvm_report_enabled__71__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__71__severity;
    __Vfunc_uvm_report_enabled__71__severity = 0;
    std::string __Vfunc_uvm_report_enabled__71__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__74__Vfuncout;
    __Vtask_uvm_report_enabled__74__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__76__Vfuncout;
    __Vfunc_uvm_report_enabled__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__76__verbosity;
    __Vfunc_uvm_report_enabled__76__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__76__severity;
    __Vfunc_uvm_report_enabled__76__severity = 0;
    std::string __Vfunc_uvm_report_enabled__76__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__79__Vfuncout;
    __Vtask_uvm_report_enabled__79__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_before__81__Vfuncout;
    __Vtask_is_before__81__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__Vfuncout;
    __Vfunc_uvm_report_enabled__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__verbosity;
    __Vfunc_uvm_report_enabled__82__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__82__severity;
    __Vfunc_uvm_report_enabled__82__severity = 0;
    std::string __Vfunc_uvm_report_enabled__82__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__85__Vfuncout;
    __Vtask_uvm_report_enabled__85__Vfuncout = 0;
    std::string __Vtask_get_name__87__Vfuncout;
    std::string __Vtask_get_name__88__Vfuncout;
    CData/*0:0*/ __Vtask_is_before__89__Vfuncout;
    __Vtask_is_before__89__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__90__Vfuncout;
    __Vfunc_uvm_report_enabled__90__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__90__verbosity;
    __Vfunc_uvm_report_enabled__90__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__90__severity;
    __Vfunc_uvm_report_enabled__90__severity = 0;
    std::string __Vfunc_uvm_report_enabled__90__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__91__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__92__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__93__Vfuncout;
    __Vtask_uvm_report_enabled__93__Vfuncout = 0;
    std::string __Vtask_get_name__95__Vfuncout;
    std::string __Vtask_get_name__96__Vfuncout;
    CData/*0:0*/ __Vtask_is_before__97__Vfuncout;
    __Vtask_is_before__97__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__Vfuncout;
    __Vfunc_uvm_report_enabled__98__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
    __Vfunc_uvm_report_enabled__98__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
    __Vfunc_uvm_report_enabled__98__severity = 0;
    std::string __Vfunc_uvm_report_enabled__98__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__101__Vfuncout;
    __Vtask_uvm_report_enabled__101__Vfuncout = 0;
    std::string __Vtask_get_name__103__Vfuncout;
    std::string __Vtask_get_name__104__Vfuncout;
    IData/*31:0*/ __Vtask_get_phase_type__105__Vfuncout;
    __Vtask_get_phase_type__105__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_phase_type__108__Vfuncout;
    __Vtask_get_phase_type__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__109__Vfuncout;
    __Vfunc_uvm_report_enabled__109__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__109__verbosity;
    __Vfunc_uvm_report_enabled__109__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__109__severity;
    __Vfunc_uvm_report_enabled__109__severity = 0;
    std::string __Vfunc_uvm_report_enabled__109__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__112__Vfuncout;
    __Vtask_uvm_report_enabled__112__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__113__id;
    std::string __Vtask_uvm_report_info__113__message;
    IData/*31:0*/ __Vtask_uvm_report_info__113__verbosity;
    __Vtask_uvm_report_info__113__verbosity = 0;
    std::string __Vtask_uvm_report_info__113__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__113__line;
    __Vtask_uvm_report_info__113__line = 0;
    std::string __Vtask_uvm_report_info__113__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__113__report_enabled_checked;
    __Vtask_uvm_report_info__113__report_enabled_checked = 0;
    std::string __Vfunc_get_name__114__Vfuncout;
    std::string __Vtask_get_full_name__115__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__116__Vfuncout;
    __Vtask_get_inst_id__116__Vfuncout = 0;
    std::string __Vtask_get_name__117__Vfuncout;
    std::string __Vtask_get_name__118__Vfuncout;
    std::string __Vtask_get_name__119__Vfuncout;
    std::string __Vtask_get_name__120__Vfuncout;
    std::string __Vtask_get_name__121__Vfuncout;
    std::string __Vtask_get_name__122__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__123__Vfuncout;
    __Vtask_get_inst_id__123__Vfuncout = 0;
    std::string __Vtask_get_name__124__Vfuncout;
    std::string __Vtask_get_name__125__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__126__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__127__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_state_change> __Vfunc_create__129__Vfuncout;
    std::string __Vtask_get_name__130__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__132__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__134__Vfuncout;
    // Body
    std::string unnamedblk78__DOT__nm;
    std::string unnamedblk79__DOT__nm;
    std::string unnamedblk80__DOT__nm;
    std::string unnamedblk81__DOT__nm;
    std::string unnamedblk82__DOT__nm;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_task_phase> unnamedblk83__DOT__tp;
    IData/*31:0*/ unnamedblk84__DOT__typ;
    unnamedblk84__DOT__typ = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk85__DOT__pred;
    CData/*0:0*/ unnamedblk85__DOT__pred__Vfirst;
    unnamedblk85__DOT__pred__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk86__DOT__succ;
    CData/*0:0*/ unnamedblk86__DOT__succ__Vfirst;
    unnamedblk86__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk87__DOT__pred;
    CData/*0:0*/ unnamedblk87__DOT__pred__Vfirst;
    unnamedblk87__DOT__pred__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk88__DOT__succ;
    CData/*0:0*/ unnamedblk88__DOT__succ__Vfirst;
    unnamedblk88__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk89__DOT__succ;
    CData/*0:0*/ unnamedblk89__DOT__succ__Vfirst;
    unnamedblk89__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk90__DOT__pred;
    CData/*0:0*/ unnamedblk90__DOT__pred__Vfirst;
    unnamedblk90__DOT__pred__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk91__DOT__pred;
    CData/*0:0*/ unnamedblk91__DOT__pred__Vfirst;
    unnamedblk91__DOT__pred__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk92__DOT__succ;
    CData/*0:0*/ unnamedblk92__DOT__succ__Vfirst;
    unnamedblk92__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk93__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk93__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> new_node;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> begin_node;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> end_node;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> tmp_node;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_state_change> state_chg;
    if ((VlNull{} == phase)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__16__id = "PH/NULL"s;
                        __Vfunc_uvm_report_enabled__16__severity = 3U;
                        __Vfunc_uvm_report_enabled__16__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__17__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__17__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__18__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__18__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__16__verbosity, (IData)(__Vfunc_uvm_report_enabled__16__severity), __Vfunc_uvm_report_enabled__16__id, __Vtask_uvm_report_enabled__19__Vfuncout);
                        __Vfunc_uvm_report_enabled__16__Vfuncout 
                            = __Vtask_uvm_report_enabled__19__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__16__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH/NULL"s, "add: phase argument is null"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000002f2U, ""s, 1U);
        }
    }
    if (((VlNull{} != with_phase) && (0U == ([&]() {
                        VL_NULL_CHECK(with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 756)
                                             ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__21__Vfuncout);
                    }(), __Vtask_get_phase_type__21__Vfuncout)))) {
        VL_NULL_CHECK(with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 757)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__22__Vfuncout);
        unnamedblk78__DOT__nm = __Vtask_get_name__22__Vfuncout;
        this->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, __Vfunc_find__23__Vfuncout);
        with_phase = __Vfunc_find__23__Vfuncout;
        if ((VlNull{} == with_phase)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__24__id = "PH_BAD_ADD"s;
                            __Vfunc_uvm_report_enabled__24__severity = 3U;
                            __Vfunc_uvm_report_enabled__24__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__25__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__26__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__24__verbosity, (IData)(__Vfunc_uvm_report_enabled__24__severity), __Vfunc_uvm_report_enabled__24__id, __Vtask_uvm_report_enabled__27__Vfuncout);
                            __Vfunc_uvm_report_enabled__24__Vfuncout 
                                = __Vtask_uvm_report_enabled__27__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__24__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find with_phase '"s, unnamedblk78__DOT__nm), "' within node '"s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__29__Vfuncout);
                                    }(), __Vfunc_get_name__29__Vfuncout)), "'"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000002f9U, ""s, 1U);
            }
        }
    }
    if (((VlNull{} != before_phase) && (0U == ([&]() {
                        VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 764)
                                               ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__30__Vfuncout);
                    }(), __Vtask_get_phase_type__30__Vfuncout)))) {
        VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 765)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__31__Vfuncout);
        unnamedblk79__DOT__nm = __Vtask_get_name__31__Vfuncout;
        this->__VnoInFunc_find(vlProcess, vlSymsp, before_phase, 1U, __Vfunc_find__32__Vfuncout);
        before_phase = __Vfunc_find__32__Vfuncout;
        if ((VlNull{} == before_phase)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__33__id = "PH_BAD_ADD"s;
                            __Vfunc_uvm_report_enabled__33__severity = 3U;
                            __Vfunc_uvm_report_enabled__33__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__34__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__35__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), __Vfunc_uvm_report_enabled__33__id, __Vtask_uvm_report_enabled__36__Vfuncout);
                            __Vfunc_uvm_report_enabled__33__Vfuncout 
                                = __Vtask_uvm_report_enabled__36__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__33__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find before_phase '"s, unnamedblk79__DOT__nm), "' within node '"s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__38__Vfuncout);
                                    }(), __Vfunc_get_name__38__Vfuncout)), "'"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000301U, ""s, 1U);
            }
        }
    }
    if (((VlNull{} != after_phase) && (0U == ([&]() {
                        VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 772)
                                              ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__39__Vfuncout);
                    }(), __Vtask_get_phase_type__39__Vfuncout)))) {
        VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 773)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__40__Vfuncout);
        unnamedblk80__DOT__nm = __Vtask_get_name__40__Vfuncout;
        this->__VnoInFunc_find(vlProcess, vlSymsp, after_phase, 1U, __Vfunc_find__41__Vfuncout);
        after_phase = __Vfunc_find__41__Vfuncout;
        if ((VlNull{} == after_phase)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__42__id = "PH_BAD_ADD"s;
                            __Vfunc_uvm_report_enabled__42__severity = 3U;
                            __Vfunc_uvm_report_enabled__42__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__43__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__43__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__44__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__44__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__42__verbosity, (IData)(__Vfunc_uvm_report_enabled__42__severity), __Vfunc_uvm_report_enabled__42__id, __Vtask_uvm_report_enabled__45__Vfuncout);
                            __Vfunc_uvm_report_enabled__42__Vfuncout 
                                = __Vtask_uvm_report_enabled__45__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__42__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find after_phase '"s, unnamedblk80__DOT__nm), "' within node '"s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__47__Vfuncout);
                                    }(), __Vfunc_get_name__47__Vfuncout)), "'"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000309U, ""s, 1U);
            }
        }
    }
    if (((VlNull{} != start_with_phase) && (0U == ([&]() {
                        VL_NULL_CHECK(start_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 780)
                                                   ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__48__Vfuncout);
                    }(), __Vtask_get_phase_type__48__Vfuncout)))) {
        VL_NULL_CHECK(start_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 781)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__49__Vfuncout);
        unnamedblk81__DOT__nm = __Vtask_get_name__49__Vfuncout;
        this->__VnoInFunc_find(vlProcess, vlSymsp, start_with_phase, 1U, __Vfunc_find__50__Vfuncout);
        start_with_phase = __Vfunc_find__50__Vfuncout;
        if ((VlNull{} == start_with_phase)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__51__id = "PH_BAD_ADD"s;
                            __Vfunc_uvm_report_enabled__51__severity = 3U;
                            __Vfunc_uvm_report_enabled__51__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__52__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__53__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__51__verbosity, (IData)(__Vfunc_uvm_report_enabled__51__severity), __Vfunc_uvm_report_enabled__51__id, __Vtask_uvm_report_enabled__54__Vfuncout);
                            __Vfunc_uvm_report_enabled__51__Vfuncout 
                                = __Vtask_uvm_report_enabled__54__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__51__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find start_with_phase '"s, unnamedblk81__DOT__nm), "' within node '"s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__56__Vfuncout);
                                    }(), __Vfunc_get_name__56__Vfuncout)), "'"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000311U, ""s, 1U);
            }
        }
    }
    if (((VlNull{} != end_with_phase) && (0U == ([&]() {
                        VL_NULL_CHECK(end_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 788)
                                                 ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__57__Vfuncout);
                    }(), __Vtask_get_phase_type__57__Vfuncout)))) {
        VL_NULL_CHECK(end_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 789)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__58__Vfuncout);
        unnamedblk82__DOT__nm = __Vtask_get_name__58__Vfuncout;
        this->__VnoInFunc_find(vlProcess, vlSymsp, end_with_phase, 1U, __Vfunc_find__59__Vfuncout);
        end_with_phase = __Vfunc_find__59__Vfuncout;
        if ((VlNull{} == end_with_phase)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__60__id = "PH_BAD_ADD"s;
                            __Vfunc_uvm_report_enabled__60__severity = 3U;
                            __Vfunc_uvm_report_enabled__60__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__61__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__62__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__60__verbosity, (IData)(__Vfunc_uvm_report_enabled__60__severity), __Vfunc_uvm_report_enabled__60__id, __Vtask_uvm_report_enabled__63__Vfuncout);
                            __Vfunc_uvm_report_enabled__60__Vfuncout 
                                = __Vtask_uvm_report_enabled__63__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__60__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("cannot find end_with_phase '"s, unnamedblk82__DOT__nm), "' within node '"s), 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__65__Vfuncout);
                                    }(), __Vfunc_get_name__65__Vfuncout)), "'"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000319U, ""s, 1U);
            }
        }
    }
    if ((1U < (((VlNull{} != with_phase) + (VlNull{} 
                                            != after_phase)) 
               + (VlNull{} != start_with_phase)))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__66__id = "PH_BAD_ADD"s;
                        __Vfunc_uvm_report_enabled__66__severity = 3U;
                        __Vfunc_uvm_report_enabled__66__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__67__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__68__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__66__verbosity, (IData)(__Vfunc_uvm_report_enabled__66__severity), __Vfunc_uvm_report_enabled__66__id, __Vtask_uvm_report_enabled__69__Vfuncout);
                        __Vfunc_uvm_report_enabled__66__Vfuncout 
                            = __Vtask_uvm_report_enabled__69__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__66__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, "only one of with_phase/after_phase/start_with_phase may be specified as they all specify predecessor"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000031eU, ""s, 1U);
        }
    }
    if ((1U < (((VlNull{} != with_phase) + (VlNull{} 
                                            != before_phase)) 
               + (VlNull{} != end_with_phase)))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__71__id = "PH_BAD_ADD"s;
                        __Vfunc_uvm_report_enabled__71__severity = 3U;
                        __Vfunc_uvm_report_enabled__71__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__72__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__73__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__71__verbosity, (IData)(__Vfunc_uvm_report_enabled__71__severity), __Vfunc_uvm_report_enabled__71__id, __Vtask_uvm_report_enabled__74__Vfuncout);
                        __Vfunc_uvm_report_enabled__71__Vfuncout 
                            = __Vtask_uvm_report_enabled__74__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__71__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, "only one of with_phase/before_phase/end_with_phase may be specified as they all specify successor"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000322U, ""s, 1U);
        }
    }
    if ((((((before_phase == VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}) 
            | (after_phase == this->__PVT__m_end_node)) 
           | (with_phase == this->__PVT__m_end_node)) 
          | (start_with_phase == this->__PVT__m_end_node)) 
         | (end_with_phase == this->__PVT__m_end_node))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__76__id = "PH_BAD_ADD"s;
                        __Vfunc_uvm_report_enabled__76__severity = 3U;
                        __Vfunc_uvm_report_enabled__76__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__77__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__78__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__76__verbosity, (IData)(__Vfunc_uvm_report_enabled__76__severity), __Vfunc_uvm_report_enabled__76__id, __Vtask_uvm_report_enabled__79__Vfuncout);
                        __Vfunc_uvm_report_enabled__76__Vfuncout 
                            = __Vtask_uvm_report_enabled__79__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__76__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, "cannot add before begin node, after end node, or with end nodes"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000032aU, ""s, 1U);
        }
    }
    if (((VlNull{} != before_phase) & (VlNull{} != after_phase))) {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 813)
                      ->__VnoInFunc_is_before(vlProcess, vlSymsp, before_phase, __Vtask_is_before__81__Vfuncout);
                        }(), (IData)(__Vtask_is_before__81__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__82__id = "PH_BAD_ADD"s;
                            __Vfunc_uvm_report_enabled__82__severity = 3U;
                            __Vfunc_uvm_report_enabled__82__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__83__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__84__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__82__verbosity, (IData)(__Vfunc_uvm_report_enabled__82__severity), __Vfunc_uvm_report_enabled__82__id, __Vtask_uvm_report_enabled__85__Vfuncout);
                            __Vfunc_uvm_report_enabled__82__Vfuncout 
                                = __Vtask_uvm_report_enabled__85__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__82__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 815)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__87__Vfuncout);
                                            }(), __Vtask_get_name__87__Vfuncout)), "' is not before phase '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 815)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__88__Vfuncout);
                                    }(), __Vtask_get_name__88__Vfuncout)), "'"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000032fU, ""s, 1U);
            }
        }
    }
    if (((VlNull{} != before_phase) & (VlNull{} != start_with_phase))) {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(start_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 820)
                      ->__VnoInFunc_is_before(vlProcess, vlSymsp, before_phase, __Vtask_is_before__89__Vfuncout);
                        }(), (IData)(__Vtask_is_before__89__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__90__id = "PH_BAD_ADD"s;
                            __Vfunc_uvm_report_enabled__90__severity = 3U;
                            __Vfunc_uvm_report_enabled__90__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__91__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__91__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__92__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__92__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__90__verbosity, (IData)(__Vfunc_uvm_report_enabled__90__severity), __Vfunc_uvm_report_enabled__90__id, __Vtask_uvm_report_enabled__93__Vfuncout);
                            __Vfunc_uvm_report_enabled__90__Vfuncout 
                                = __Vtask_uvm_report_enabled__93__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__90__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 822)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__95__Vfuncout);
                                            }(), __Vtask_get_name__95__Vfuncout)), "' is not before phase '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(start_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 822)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__96__Vfuncout);
                                    }(), __Vtask_get_name__96__Vfuncout)), "'"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000336U, ""s, 1U);
            }
        }
    }
    if (((VlNull{} != end_with_phase) & (VlNull{} != after_phase))) {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 827)
                      ->__VnoInFunc_is_before(vlProcess, vlSymsp, end_with_phase, __Vtask_is_before__97__Vfuncout);
                        }(), (IData)(__Vtask_is_before__97__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__98__id = "PH_BAD_ADD"s;
                            __Vfunc_uvm_report_enabled__98__severity = 3U;
                            __Vfunc_uvm_report_enabled__98__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__99__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__100__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), __Vfunc_uvm_report_enabled__98__id, __Vtask_uvm_report_enabled__101__Vfuncout);
                            __Vfunc_uvm_report_enabled__98__Vfuncout 
                                = __Vtask_uvm_report_enabled__101__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__98__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BAD_ADD"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Phase '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(end_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 829)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__103__Vfuncout);
                                            }(), __Vtask_get_name__103__Vfuncout)), "' is not before phase '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 829)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__104__Vfuncout);
                                    }(), __Vtask_get_name__104__Vfuncout)), "'"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000033dU, ""s, 1U);
            }
        }
    }
    if ((0U == ([&]() {
                    VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 834)
                ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__105__Vfuncout);
                }(), __Vtask_get_phase_type__105__Vfuncout))) {
        new_node = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_phase, vlProcess, vlSymsp, 
                          VL_CVT_PACK_STR_NN(([&]() {
                        std::string __Vtask_get_name__107__Vfuncout;
                        VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 836)
                                              ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__107__Vfuncout);
                        return (__Vtask_get_name__107__Vfuncout);
                    }())), 1U, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(new_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 837)->__PVT__m_imp 
            = phase;
        begin_node = new_node;
        end_node = new_node;
    } else {
        begin_node = phase;
        end_node = VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 845)
            ->__PVT__m_end_node;
        VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 846)->__PVT__m_parent 
            = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
    }
    if ((((((VlNull{} == with_phase) & (VlNull{} == after_phase)) 
           & (VlNull{} == before_phase)) & (VlNull{} 
                                            == start_with_phase)) 
         & (VlNull{} == end_with_phase))) {
        before_phase = this->__PVT__m_end_node;
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 865)->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__108__Vfuncout);
        unnamedblk84__DOT__typ = __Vtask_get_phase_type__108__Vfuncout;
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__109__id = "PH/TRC/ADD_PH"s;
                        __Vfunc_uvm_report_enabled__109__severity = 0U;
                        __Vfunc_uvm_report_enabled__109__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__110__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__111__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__109__verbosity, (IData)(__Vfunc_uvm_report_enabled__109__severity), __Vfunc_uvm_report_enabled__109__id, __Vtask_uvm_report_enabled__112__Vfuncout);
                        __Vfunc_uvm_report_enabled__109__Vfuncout 
                            = __Vtask_uvm_report_enabled__112__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__109__Vfuncout))) {
            __Vtask_uvm_report_info__113__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__113__context_name = ""s;
            __Vtask_uvm_report_info__113__line = 0x0000036eU;
            __Vtask_uvm_report_info__113__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__113__verbosity = 0x000001f4U;
            __Vtask_uvm_report_info__113__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                ([&]() {
                                                                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__114__Vfuncout);
                                                                                }(), __Vfunc_get_name__114__Vfuncout), " ("s), 
                                                                                Vuart_example___024unit::__Venumtab_enum_name23
                                                                                [
                                                                                (7U 
                                                                                & this->__PVT__m_phase_type)]), ") ADD_PHASE: phase="s), 
                                                                                ([&]() {
                                                                                VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__115__Vfuncout);
                                                                                }(), __Vtask_get_full_name__115__Vfuncout)), " ("s), 
                                                                                Vuart_example___024unit::__Venumtab_enum_name23
                                                                                [
                                                                                (7U 
                                                                                & unnamedblk84__DOT__typ)]), ", inst_id="s), VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                ([&]() {
                                                                                VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__116__Vfuncout);
                                                                                }(), __Vtask_get_inst_id__116__Vfuncout)) ), ")"s), " with_phase="s), 
                                                                                ((VlNull{} 
                                                                                == with_phase)
                                                                                 ? "null"s
                                                                                 : 
                                                                                ([&]() {
                                                                                VL_NULL_CHECK(with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__117__Vfuncout);
                                                                                }(), __Vtask_get_name__117__Vfuncout))), " start_with_phase="s), 
                                                                                ((VlNull{} 
                                                                                == start_with_phase)
                                                                                 ? "null"s
                                                                                 : 
                                                                                ([&]() {
                                                                                VL_NULL_CHECK(start_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__118__Vfuncout);
                                                                            }(), __Vtask_get_name__118__Vfuncout))), " end_with_phase="s), 
                                                                                ((VlNull{} 
                                                                                == end_with_phase)
                                                                                 ? "null"s
                                                                                 : 
                                                                                ([&]() {
                                                                        VL_NULL_CHECK(end_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__119__Vfuncout);
                                                                    }(), __Vtask_get_name__119__Vfuncout))), " after_phase="s), 
                                                                                ((VlNull{} 
                                                                                == after_phase)
                                                                                 ? "null"s
                                                                                 : 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__120__Vfuncout);
                                                            }(), __Vtask_get_name__120__Vfuncout))), " before_phase="s), 
                                                                                ((VlNull{} 
                                                                                == before_phase)
                                                                                 ? "null"s
                                                                                 : 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__121__Vfuncout);
                                                    }(), __Vtask_get_name__121__Vfuncout))), " new_node="s), 
                                                                                ((VlNull{} 
                                                                                == new_node)
                                                                                 ? "null"s
                                                                                 : 
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                ([&]() {
                                                        VL_NULL_CHECK(new_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__122__Vfuncout);
                                                    }(), __Vtask_get_name__122__Vfuncout), " inst_id="s), VL_SFORMATF_N_NX("%0d",0,
                                                                                32,
                                                                                ([&]() {
                                                            VL_NULL_CHECK(new_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__123__Vfuncout);
                                                        }(), __Vtask_get_inst_id__123__Vfuncout)) ))), " begin_node="s), 
                                                                                ((VlNull{} 
                                                                                == begin_node)
                                                                                 ? "null"s
                                                                                 : 
                                                                                ([&]() {
                                        VL_NULL_CHECK(begin_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__124__Vfuncout);
                                    }(), __Vtask_get_name__124__Vfuncout))), " end_node="s), 
                                                  ((VlNull{} 
                                                    == end_node)
                                                    ? "null"s
                                                    : 
                                                   ([&]() {
                                VL_NULL_CHECK(end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 878)
                                                    ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__125__Vfuncout);
                            }(), __Vtask_get_name__125__Vfuncout))));
            __Vtask_uvm_report_info__113__id = "PH/TRC/ADD_PH"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__126__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__126__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__127__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__127__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__113__id, __Vtask_uvm_report_info__113__message, __Vtask_uvm_report_info__113__verbosity, __Vtask_uvm_report_info__113__filename, __Vtask_uvm_report_info__113__line, __Vtask_uvm_report_info__113__context_name, (IData)(__Vtask_uvm_report_info__113__report_enabled_checked));
        }
    }
    if ((VlNull{} != with_phase)) {
        VL_NULL_CHECK(begin_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 886)->__PVT__m_predecessors 
            = VL_NULL_CHECK(with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 886)
            ->__PVT__m_predecessors;
        if ((0U != VL_NULL_CHECK(with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 887)
             ->__PVT__m_predecessors.first(unnamedblk85__DOT__pred))) {
            unnamedblk85__DOT__pred__Vfirst = 1U;
            while (((IData)(unnamedblk85__DOT__pred__Vfirst) 
                    || (0U != VL_NULL_CHECK(with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 887)
                        ->__PVT__m_predecessors.next(unnamedblk85__DOT__pred)))) {
                unnamedblk85__DOT__pred__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk85__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 887)->__PVT__m_successors.at(begin_node) = 1U;
            }
        }
        VL_NULL_CHECK(end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 889)->__PVT__m_successors 
            = VL_NULL_CHECK(with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 889)
            ->__PVT__m_successors;
        if ((0U != VL_NULL_CHECK(with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 890)
             ->__PVT__m_successors.first(unnamedblk86__DOT__succ))) {
            unnamedblk86__DOT__succ__Vfirst = 1U;
            while (((IData)(unnamedblk86__DOT__succ__Vfirst) 
                    || (0U != VL_NULL_CHECK(with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 890)
                        ->__PVT__m_successors.next(unnamedblk86__DOT__succ)))) {
                unnamedblk86__DOT__succ__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk86__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 890)->__PVT__m_predecessors.at(end_node) = 1U;
            }
        }
    }
    if ((VlNull{} != start_with_phase)) {
        VL_NULL_CHECK(begin_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 895)->__PVT__m_predecessors 
            = VL_NULL_CHECK(start_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 895)
            ->__PVT__m_predecessors;
        if ((0U != VL_NULL_CHECK(start_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 896)
             ->__PVT__m_predecessors.first(unnamedblk87__DOT__pred))) {
            unnamedblk87__DOT__pred__Vfirst = 1U;
            while (((IData)(unnamedblk87__DOT__pred__Vfirst) 
                    || (0U != VL_NULL_CHECK(start_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 896)
                        ->__PVT__m_predecessors.next(unnamedblk87__DOT__pred)))) {
                unnamedblk87__DOT__pred__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk87__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 897)->__PVT__m_successors.at(begin_node) = 1U;
            }
        }
        if (((VlNull{} == before_phase) & (VlNull{} 
                                           == end_with_phase))) {
            VL_NULL_CHECK(end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 901)->__PVT__m_successors 
                = VL_NULL_CHECK(this->__PVT__m_end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 901)
                ->__PVT__m_successors;
            if ((0U != VL_NULL_CHECK(this->__PVT__m_end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 902)
                 ->__PVT__m_successors.first(unnamedblk88__DOT__succ))) {
                unnamedblk88__DOT__succ__Vfirst = 1U;
                while (((IData)(unnamedblk88__DOT__succ__Vfirst) 
                        || (0U != VL_NULL_CHECK(this->__PVT__m_end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 902)
                            ->__PVT__m_successors.next(unnamedblk88__DOT__succ)))) {
                    unnamedblk88__DOT__succ__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk88__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 903)->__PVT__m_predecessors.at(end_node) = 1U;
                }
            }
        }
    }
    if ((VlNull{} != end_with_phase)) {
        VL_NULL_CHECK(end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 910)->__PVT__m_successors 
            = VL_NULL_CHECK(end_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 910)
            ->__PVT__m_successors;
        if ((0U != VL_NULL_CHECK(end_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 911)
             ->__PVT__m_successors.first(unnamedblk89__DOT__succ))) {
            unnamedblk89__DOT__succ__Vfirst = 1U;
            while (((IData)(unnamedblk89__DOT__succ__Vfirst) 
                    || (0U != VL_NULL_CHECK(end_with_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 911)
                        ->__PVT__m_successors.next(unnamedblk89__DOT__succ)))) {
                unnamedblk89__DOT__succ__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk89__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 912)->__PVT__m_predecessors.at(end_node) = 1U;
            }
        }
        if (((VlNull{} == after_phase) & (VlNull{} 
                                          == start_with_phase))) {
            VL_NULL_CHECK(begin_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 916)->__PVT__m_predecessors 
                = this->__PVT__m_predecessors;
            if ((0U != this->__PVT__m_predecessors.first(unnamedblk90__DOT__pred))) {
                unnamedblk90__DOT__pred__Vfirst = 1U;
                while (((IData)(unnamedblk90__DOT__pred__Vfirst) 
                        || (0U != this->__PVT__m_predecessors.next(unnamedblk90__DOT__pred)))) {
                    unnamedblk90__DOT__pred__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk90__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 918)->__PVT__m_successors.at(begin_node) = 1U;
                }
            }
        }
    }
    if ((VlNull{} != before_phase)) {
        if (((VlNull{} == after_phase) & (VlNull{} 
                                          == start_with_phase))) {
            if ((0U != VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 928)
                 ->__PVT__m_predecessors.first(unnamedblk91__DOT__pred))) {
                unnamedblk91__DOT__pred__Vfirst = 1U;
                while (((IData)(unnamedblk91__DOT__pred__Vfirst) 
                        || (0U != VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 928)
                            ->__PVT__m_predecessors.next(unnamedblk91__DOT__pred)))) {
                    unnamedblk91__DOT__pred__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk91__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 929)->__PVT__m_successors.erase(before_phase);
                    VL_NULL_CHECK(unnamedblk91__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 930)->__PVT__m_successors.at(begin_node) = 1U;
                }
            }
            VL_NULL_CHECK(begin_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 932)->__PVT__m_predecessors 
                = VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 932)
                ->__PVT__m_predecessors;
            VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 933)->__PVT__m_predecessors.clear();
        } else if (VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 937)
                   ->__PVT__m_predecessors.exists(after_phase)) {
            VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 938)->__PVT__m_predecessors.erase(after_phase);
        }
        VL_NULL_CHECK(before_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 942)->__PVT__m_predecessors.at(end_node) = 1U;
        VL_NULL_CHECK(end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 943)->__PVT__m_successors.clear();
        VL_NULL_CHECK(end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 944)->__PVT__m_successors.at(before_phase) = 1U;
    }
    if ((VlNull{} != after_phase)) {
        if (((VlNull{} == before_phase) & (VlNull{} 
                                           == end_with_phase))) {
            if ((0U != VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 954)
                 ->__PVT__m_successors.first(unnamedblk92__DOT__succ))) {
                unnamedblk92__DOT__succ__Vfirst = 1U;
                while (((IData)(unnamedblk92__DOT__succ__Vfirst) 
                        || (0U != VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 954)
                            ->__PVT__m_successors.next(unnamedblk92__DOT__succ)))) {
                    unnamedblk92__DOT__succ__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk92__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 955)->__PVT__m_predecessors.erase(after_phase);
                    VL_NULL_CHECK(unnamedblk92__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 956)->__PVT__m_predecessors.at(end_node) = 1U;
                }
            }
            VL_NULL_CHECK(end_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 958)->__PVT__m_successors 
                = VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 958)
                ->__PVT__m_successors;
            VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 959)->__PVT__m_successors.clear();
        } else if (VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 963)
                   ->__PVT__m_successors.exists(before_phase)) {
            VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 964)->__PVT__m_successors.erase(before_phase);
        }
        VL_NULL_CHECK(after_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 968)->__PVT__m_successors.at(begin_node) = 1U;
        VL_NULL_CHECK(begin_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 969)->__PVT__m_predecessors.clear();
        VL_NULL_CHECK(begin_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 970)->__PVT__m_predecessors.at(after_phase) = 1U;
    }
    tmp_node = ((VlNull{} == new_node) ? phase : new_node);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi12__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    VL_NULL_CHECK(tmp_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 981)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__130__Vfuncout);
                }(), __Vtask_get_name__130__Vfuncout)), VlNull{}, ""s, __Vfunc_create__129__Vfuncout);
    state_chg = __Vfunc_create__129__Vfuncout;
    VL_NULL_CHECK(state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 982)->__PVT__m_phase 
        = tmp_node;
    VL_NULL_CHECK(state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 983)->__PVT__m_jump_to = VlNull{};
    VL_NULL_CHECK(state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 984)->__PVT__m_prev_state 
        = VL_NULL_CHECK(tmp_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 984)
        ->__PVT__m_state;
    VL_NULL_CHECK(tmp_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 985)->__PVT__m_state = 1U;
    unnamedblk93__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                     VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
    VL_NULL_CHECK(unnamedblk93__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 986)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__132__Vfuncout);
    unnamedblk93__DOT__cb = __Vtask_first__132__Vfuncout;
    while ((VlNull{} != unnamedblk93__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk93__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 986)->__VnoInFunc_phase_state_change(vlSymsp, tmp_node, state_chg);
        VL_NULL_CHECK(unnamedblk93__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 986)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__134__Vfuncout);
        unnamedblk93__DOT__cb = __Vtask_next__134__Vfuncout;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_parent(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_imp(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &get_imp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_imp\n"); );
    // Body
    get_imp__Vfuncrtn = this->__PVT__m_imp;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ hier, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &get_schedule__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_phase_type__135__Vfuncout;
    __Vtask_get_phase_type__135__Vfuncout = 0;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> sched;
    {
        sched = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
        if (hier) {
            while (((VlNull{} != VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1013)
                     ->__PVT__m_parent) && (3U == ([&]() {
                                VL_NULL_CHECK(VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1013)
                                              ->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1013)
                                                   ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__135__Vfuncout);
                            }(), __Vtask_get_phase_type__135__Vfuncout)))) {
                sched = VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1014)
                    ->__PVT__m_parent;
            }
        }
        if ((3U == VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1015)
             ->__PVT__m_phase_type)) {
            get_schedule__Vfuncrtn = sched;
            goto __Vlabel0;
        }
        if ((1U == VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1017)
             ->__PVT__m_phase_type)) {
            if (((VlNull{} != this->__PVT__m_parent) 
                 && (4U != VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1018)
                     ->__PVT__m_phase_type))) {
                get_schedule__Vfuncrtn = this->__PVT__m_parent;
                goto __Vlabel0;
            }
        }
        get_schedule__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> &get_domain__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__136__Vfuncout;
    __Vfunc_uvm_report_enabled__136__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__136__verbosity;
    __Vfunc_uvm_report_enabled__136__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__136__severity;
    __Vfunc_uvm_report_enabled__136__severity = 0;
    std::string __Vfunc_uvm_report_enabled__136__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__137__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__138__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__139__Vfuncout;
    __Vtask_uvm_report_enabled__139__Vfuncout = 0;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase;
    {
        phase = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
        while (((VlNull{} != phase) && (4U != VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1030)
                                        ->__PVT__m_phase_type))) {
            phase = VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1031)
                ->__PVT__m_parent;
        }
        if ((VlNull{} == phase)) {
            get_domain__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((! VL_CAST_DYNAMIC(phase, get_domain__Vfuncrtn))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__136__id = "PH/INTERNAL"s;
                            __Vfunc_uvm_report_enabled__136__severity = 3U;
                            __Vfunc_uvm_report_enabled__136__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__137__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__137__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__138__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__138__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__136__verbosity, (IData)(__Vfunc_uvm_report_enabled__136__severity), __Vfunc_uvm_report_enabled__136__id, __Vtask_uvm_report_enabled__139__Vfuncout);
                            __Vfunc_uvm_report_enabled__136__Vfuncout 
                                = __Vtask_uvm_report_enabled__139__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__136__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH/INTERNAL"s, "get_domain: m_phase_type is DOMAIN but $cast to uvm_domain fails"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000040bU, ""s, 1U);
            }
        }
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain_name(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string &get_domain_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_domain_name\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vfunc_get_domain__141__Vfuncout;
    std::string __Vtask_get_name__142__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> domain;
    {
        this->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vfunc_get_domain__141__Vfuncout);
        domain = __Vfunc_get_domain__141__Vfuncout;
        if ((VlNull{} == domain)) {
            get_domain_name__Vfuncrtn = "unknown"s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(domain, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1047)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__142__Vfuncout);
        get_domain_name__Vfuncrtn = __Vtask_get_name__142__Vfuncout;
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule_name(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ hier, std::string &get_schedule_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_schedule_name\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_get_schedule__143__Vfuncout;
    std::string __Vtask_get_name__144__Vfuncout;
    IData/*31:0*/ __Vtask_get_phase_type__145__Vfuncout;
    __Vtask_get_phase_type__145__Vfuncout = 0;
    std::string __Vtask_get_name__146__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> sched;
    std::string s;
    {
        this->__VnoInFunc_get_schedule(vlSymsp, hier, __Vfunc_get_schedule__143__Vfuncout);
        sched = __Vfunc_get_schedule__143__Vfuncout;
        if ((VlNull{} == sched)) {
            get_schedule_name__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1060)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__144__Vfuncout);
        s = __Vtask_get_name__144__Vfuncout;
        while ((((VlNull{} != VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1061)
                  ->__PVT__m_parent) && (VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1061)
                                         ->__PVT__m_parent 
                                         != sched)) 
                && (3U == ([&]() {
                            VL_NULL_CHECK(VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1062)
                                          ->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1062)
                           ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__145__Vfuncout);
                        }(), __Vtask_get_phase_type__145__Vfuncout)))) {
            sched = VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1063)
                ->__PVT__m_parent;
            s = VL_CONCATN_NNN(VL_CONCATN_NNN(([&]() {
                            VL_NULL_CHECK(sched, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1064)
                                               ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__146__Vfuncout);
                        }(), __Vtask_get_name__146__Vfuncout), 
                                              VL_CVT_PACK_STR_NI(
                                                                 (VL_LTS_III(32, 0U, 
                                                                             VL_LEN_IN(s))
                                                                   ? 0x2eU
                                                                   : 0U))), s);
        }
        get_schedule_name__Vfuncrtn = s;
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_full_name\n"); );
    // Locals
    std::string __Vfunc_get_name__147__Vfuncout;
    std::string __Vfunc_get_domain_name__148__Vfuncout;
    std::string __Vfunc_get_schedule_name__149__Vfuncout;
    std::string __Vfunc_get_name__150__Vfuncout;
    // Body
    std::string dom;
    std::string sch;
    {
        if ((0U == this->__PVT__m_phase_type)) {
            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__147__Vfuncout);
            get_full_name__Vfuncrtn = __Vfunc_get_name__147__Vfuncout;
            goto __Vlabel0;
        }
        this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, __Vfunc_get_domain_name__148__Vfuncout);
        get_full_name__Vfuncrtn = __Vfunc_get_domain_name__148__Vfuncout;
        this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __Vfunc_get_schedule_name__149__Vfuncout);
        sch = __Vfunc_get_schedule_name__149__Vfuncout;
        if ((""s != sch)) {
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(get_full_name__Vfuncrtn, "."s), sch);
        }
        if (((4U != this->__PVT__m_phase_type) & (3U 
                                                  != this->__PVT__m_phase_type))) {
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(get_full_name__Vfuncrtn, "."s), 
                                                     ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__150__Vfuncout);
                    }(), __Vfunc_get_name__150__Vfuncout));
        }
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_phase_type(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_phase_type\n"); );
    // Body
    get_phase_type__Vfuncrtn = this->__PVT__m_phase_type;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_max_ready_to_end_iterations(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_max_ready_to_end_iterations\n"); );
    // Body
    this->__PVT__max_ready_to_end_iters = max;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_max_ready_to_end_iterations(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_ready_to_end_iterations__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_max_ready_to_end_iterations\n"); );
    // Body
    get_max_ready_to_end_iterations__Vfuncrtn = this->__PVT__max_ready_to_end_iters;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_state(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_state__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_state\n"); );
    // Body
    get_state__Vfuncrtn = this->__PVT__m_state;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_run_count(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &get_run_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_run_count\n"); );
    // Body
    get_run_count__Vfuncrtn = this->__PVT__m_run_count;
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_successors(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_successors\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__151__Vfuncout;
    __Vfunc_uvm_report_enabled__151__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__151__verbosity;
    __Vfunc_uvm_report_enabled__151__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__151__severity;
    __Vfunc_uvm_report_enabled__151__severity = 0;
    std::string __Vfunc_uvm_report_enabled__151__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__152__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__153__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__154__Vfuncout;
    __Vtask_uvm_report_enabled__154__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__155__id;
    std::string __Vtask_uvm_report_info__155__message;
    IData/*31:0*/ __Vtask_uvm_report_info__155__verbosity;
    __Vtask_uvm_report_info__155__verbosity = 0;
    std::string __Vtask_uvm_report_info__155__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__155__line;
    __Vtask_uvm_report_info__155__line = 0;
    std::string __Vtask_uvm_report_info__155__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__155__report_enabled_checked;
    __Vtask_uvm_report_info__155__report_enabled_checked = 0;
    std::string __Vfunc_get_name__156__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__157__Vfuncout;
    __Vfunc_get_inst_id__157__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__158__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__159__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk94__DOT__succ;
    CData/*0:0*/ unnamedblk94__DOT__succ__Vfirst;
    unnamedblk94__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> found;
    if ((4U == this->__PVT__m_phase_type)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level = 0U;
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__151__id = "UVM/PHASE/SUCC"s;
                    __Vfunc_uvm_report_enabled__151__severity = 0U;
                    __Vfunc_uvm_report_enabled__151__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__152__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__152__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__153__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__153__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__151__verbosity, (IData)(__Vfunc_uvm_report_enabled__151__severity), __Vfunc_uvm_report_enabled__151__id, __Vtask_uvm_report_enabled__154__Vfuncout);
                    __Vfunc_uvm_report_enabled__151__Vfuncout 
                        = __Vtask_uvm_report_enabled__154__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__151__Vfuncout))) {
        __Vtask_uvm_report_info__155__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__155__context_name = ""s;
        __Vtask_uvm_report_info__155__line = 0x0000047eU;
        __Vtask_uvm_report_info__155__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_info__155__verbosity = 0U;
        __Vtemp_1 = VL_SUBSTR_N("                                                 "s,0U,
                                VL_MULS_III(32, (IData)(2U), vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level));
        __Vtemp_2 = ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__156__Vfuncout);
            }(), __Vfunc_get_name__156__Vfuncout);
        __Vtemp_3 = Vuart_example___024unit::__Venumtab_enum_name23
            [(7U & this->__PVT__m_phase_type)];
        __Vtask_uvm_report_info__155__message = VL_SFORMATF_N_NX("%@%@ (%@) id=%0d",0,
                                                                 -1,
                                                                 &(__Vtemp_1),
                                                                 -1,
                                                                 &(__Vtemp_2),
                                                                 -1,
                                                                 &(__Vtemp_3),
                                                                 32,
                                                                 ([&]() {
                        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__157__Vfuncout);
                    }(), __Vfunc_get_inst_id__157__Vfuncout)) ;
        __Vtask_uvm_report_info__155__id = "UVM/PHASE/SUCC"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__158__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__158__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__159__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__159__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__155__id, __Vtask_uvm_report_info__155__message, __Vtask_uvm_report_info__155__verbosity, __Vtask_uvm_report_info__155__filename, __Vtask_uvm_report_info__155__line, __Vtask_uvm_report_info__155__context_name, (IData)(__Vtask_uvm_report_info__155__report_enabled_checked));
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level);
    if ((0U != this->__PVT__m_successors.first(unnamedblk94__DOT__succ))) {
        unnamedblk94__DOT__succ__Vfirst = 1U;
        while (((IData)(unnamedblk94__DOT__succ__Vfirst) 
                || (0U != this->__PVT__m_successors.next(unnamedblk94__DOT__succ)))) {
            unnamedblk94__DOT__succ__Vfirst = 0U;
            VL_NULL_CHECK(unnamedblk94__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1153)->__VnoInFunc_m_print_successors(vlSymsp);
        }
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level 
        = (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_print_successors__Vstatic__level 
           - (IData)(1U));
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &m_find_predecessor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_get_schedule__162__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_get_schedule__163__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__164__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__165__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_m_find_predecessor__166__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk95__DOT__pred;
    CData/*0:0*/ unnamedblk95__DOT__pred__Vfirst;
    unnamedblk95__DOT__pred__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk95__DOT__unnamedblk96__DOT__orig;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((VlNull{} == phase)) {
            m_find_predecessor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}))) {
            m_find_predecessor__Vfuncrtn = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_predecessors.first(unnamedblk95__DOT__pred))) {
            unnamedblk95__DOT__pred__Vfirst = 1U;
            while (((IData)(unnamedblk95__DOT__pred__Vfirst) 
                    || (0U != this->__PVT__m_predecessors.next(unnamedblk95__DOT__pred)))) {
                unnamedblk95__DOT__pred__Vfirst = 0U;
                unnamedblk95__DOT__unnamedblk96__DOT__orig 
                    = ((VlNull{} == orig_phase) ? VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}
                        : orig_phase);
                if ((((1U & (~ (IData)(stay_in_scope))) 
                      || (([&]() {
                                        VL_NULL_CHECK(unnamedblk95__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1174)
                           ->__VnoInFunc_get_schedule(vlSymsp, 0U, __Vtask_get_schedule__162__Vfuncout);
                                    }(), __Vtask_get_schedule__162__Vfuncout) 
                          == ([&]() {
                                        VL_NULL_CHECK(unnamedblk95__DOT__unnamedblk96__DOT__orig, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1174)
                              ->__VnoInFunc_get_schedule(vlSymsp, 0U, __Vtask_get_schedule__163__Vfuncout);
                                    }(), __Vtask_get_schedule__163__Vfuncout))) 
                     || (([&]() {
                                    VL_NULL_CHECK(unnamedblk95__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1175)
                          ->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vtask_get_domain__164__Vfuncout);
                                }(), __Vtask_get_domain__164__Vfuncout) 
                         == ([&]() {
                                    VL_NULL_CHECK(unnamedblk95__DOT__unnamedblk96__DOT__orig, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1175)
                             ->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vtask_get_domain__165__Vfuncout);
                                }(), __Vtask_get_domain__165__Vfuncout)))) {
                    VL_NULL_CHECK(unnamedblk95__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1176)->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, stay_in_scope, unnamedblk95__DOT__unnamedblk96__DOT__orig, __Vtask_m_find_predecessor__166__Vfuncout);
                    found = __Vtask_m_find_predecessor__166__Vfuncout;
                    if ((VlNull{} != found)) {
                        m_find_predecessor__Vfuncrtn 
                            = found;
                        goto __Vlabel0;
                    }
                }
            }
        }
        m_find_predecessor__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor_by_name(Vuart_example__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &m_find_predecessor_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_predecessor_by_name\n"); );
    // Locals
    std::string __Vfunc_get_name__167__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_get_schedule__168__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_get_schedule__169__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__170__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__171__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_m_find_predecessor_by_name__172__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk97__DOT__pred;
    CData/*0:0*/ unnamedblk97__DOT__pred__Vfirst;
    unnamedblk97__DOT__pred__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk97__DOT__unnamedblk98__DOT__orig;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__167__Vfuncout);
                    }(), __Vfunc_get_name__167__Vfuncout) 
             == name)) {
            m_find_predecessor_by_name__Vfuncrtn = 
                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_predecessors.first(unnamedblk97__DOT__pred))) {
            unnamedblk97__DOT__pred__Vfirst = 1U;
            while (((IData)(unnamedblk97__DOT__pred__Vfirst) 
                    || (0U != this->__PVT__m_predecessors.next(unnamedblk97__DOT__pred)))) {
                unnamedblk97__DOT__pred__Vfirst = 0U;
                unnamedblk97__DOT__unnamedblk98__DOT__orig 
                    = ((VlNull{} == orig_phase) ? VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}
                        : orig_phase);
                if ((((1U & (~ (IData)(stay_in_scope))) 
                      || (([&]() {
                                        VL_NULL_CHECK(unnamedblk97__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1197)
                           ->__VnoInFunc_get_schedule(vlSymsp, 0U, __Vtask_get_schedule__168__Vfuncout);
                                    }(), __Vtask_get_schedule__168__Vfuncout) 
                          == ([&]() {
                                        VL_NULL_CHECK(unnamedblk97__DOT__unnamedblk98__DOT__orig, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1197)
                              ->__VnoInFunc_get_schedule(vlSymsp, 0U, __Vtask_get_schedule__169__Vfuncout);
                                    }(), __Vtask_get_schedule__169__Vfuncout))) 
                     || (([&]() {
                                    VL_NULL_CHECK(unnamedblk97__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1198)
                          ->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vtask_get_domain__170__Vfuncout);
                                }(), __Vtask_get_domain__170__Vfuncout) 
                         == ([&]() {
                                    VL_NULL_CHECK(unnamedblk97__DOT__unnamedblk98__DOT__orig, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1198)
                             ->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vtask_get_domain__171__Vfuncout);
                                }(), __Vtask_get_domain__171__Vfuncout)))) {
                    VL_NULL_CHECK(unnamedblk97__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1199)->__VnoInFunc_m_find_predecessor_by_name(vlSymsp, name, (IData)(stay_in_scope), unnamedblk97__DOT__unnamedblk98__DOT__orig, __Vtask_m_find_predecessor_by_name__172__Vfuncout);
                    found = __Vtask_m_find_predecessor_by_name__172__Vfuncout;
                    if ((VlNull{} != found)) {
                        m_find_predecessor_by_name__Vfuncrtn 
                            = found;
                        goto __Vlabel0;
                    }
                }
            }
        }
        m_find_predecessor_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &m_find_successor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_get_schedule__173__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_get_schedule__174__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__175__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__176__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_m_find_successor__177__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk99__DOT__succ;
    CData/*0:0*/ unnamedblk99__DOT__succ__Vfirst;
    unnamedblk99__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk99__DOT__unnamedblk100__DOT__orig;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((VlNull{} == phase)) {
            m_find_successor__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}))) {
            m_find_successor__Vfuncrtn = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_successors.first(unnamedblk99__DOT__succ))) {
            unnamedblk99__DOT__succ__Vfirst = 1U;
            while (((IData)(unnamedblk99__DOT__succ__Vfirst) 
                    || (0U != this->__PVT__m_successors.next(unnamedblk99__DOT__succ)))) {
                unnamedblk99__DOT__succ__Vfirst = 0U;
                unnamedblk99__DOT__unnamedblk100__DOT__orig 
                    = ((VlNull{} == orig_phase) ? VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}
                        : orig_phase);
                if ((((1U & (~ (IData)(stay_in_scope))) 
                      || (([&]() {
                                        VL_NULL_CHECK(unnamedblk99__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1224)
                           ->__VnoInFunc_get_schedule(vlSymsp, 0U, __Vtask_get_schedule__173__Vfuncout);
                                    }(), __Vtask_get_schedule__173__Vfuncout) 
                          == ([&]() {
                                        VL_NULL_CHECK(unnamedblk99__DOT__unnamedblk100__DOT__orig, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1224)
                              ->__VnoInFunc_get_schedule(vlSymsp, 0U, __Vtask_get_schedule__174__Vfuncout);
                                    }(), __Vtask_get_schedule__174__Vfuncout))) 
                     || (([&]() {
                                    VL_NULL_CHECK(unnamedblk99__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1225)
                          ->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vtask_get_domain__175__Vfuncout);
                                }(), __Vtask_get_domain__175__Vfuncout) 
                         == ([&]() {
                                    VL_NULL_CHECK(unnamedblk99__DOT__unnamedblk100__DOT__orig, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1225)
                             ->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vtask_get_domain__176__Vfuncout);
                                }(), __Vtask_get_domain__176__Vfuncout)))) {
                    VL_NULL_CHECK(unnamedblk99__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1226)->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, stay_in_scope, unnamedblk99__DOT__unnamedblk100__DOT__orig, __Vtask_m_find_successor__177__Vfuncout);
                    found = __Vtask_m_find_successor__177__Vfuncout;
                    if ((VlNull{} != found)) {
                        m_find_successor__Vfuncrtn 
                            = found;
                        goto __Vlabel0;
                    }
                }
            }
        }
        m_find_successor__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor_by_name(Vuart_example__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> orig_phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &m_find_successor_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_find_successor_by_name\n"); );
    // Locals
    std::string __Vfunc_get_name__178__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_get_schedule__179__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_get_schedule__180__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__181__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> __Vtask_get_domain__182__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_m_find_successor_by_name__183__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk101__DOT__succ;
    CData/*0:0*/ unnamedblk101__DOT__succ__Vfirst;
    unnamedblk101__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk101__DOT__unnamedblk102__DOT__orig;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> found;
    {
        if ((([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__178__Vfuncout);
                    }(), __Vfunc_get_name__178__Vfuncout) 
             == name)) {
            m_find_successor_by_name__Vfuncrtn = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_successors.first(unnamedblk101__DOT__succ))) {
            unnamedblk101__DOT__succ__Vfirst = 1U;
            while (((IData)(unnamedblk101__DOT__succ__Vfirst) 
                    || (0U != this->__PVT__m_successors.next(unnamedblk101__DOT__succ)))) {
                unnamedblk101__DOT__succ__Vfirst = 0U;
                unnamedblk101__DOT__unnamedblk102__DOT__orig 
                    = ((VlNull{} == orig_phase) ? VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}
                        : orig_phase);
                if ((((1U & (~ (IData)(stay_in_scope))) 
                      || (([&]() {
                                        VL_NULL_CHECK(unnamedblk101__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1248)
                           ->__VnoInFunc_get_schedule(vlSymsp, 0U, __Vtask_get_schedule__179__Vfuncout);
                                    }(), __Vtask_get_schedule__179__Vfuncout) 
                          == ([&]() {
                                        VL_NULL_CHECK(unnamedblk101__DOT__unnamedblk102__DOT__orig, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1248)
                              ->__VnoInFunc_get_schedule(vlSymsp, 0U, __Vtask_get_schedule__180__Vfuncout);
                                    }(), __Vtask_get_schedule__180__Vfuncout))) 
                     || (([&]() {
                                    VL_NULL_CHECK(unnamedblk101__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1249)
                          ->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vtask_get_domain__181__Vfuncout);
                                }(), __Vtask_get_domain__181__Vfuncout) 
                         == ([&]() {
                                    VL_NULL_CHECK(unnamedblk101__DOT__unnamedblk102__DOT__orig, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1249)
                             ->__VnoInFunc_get_domain(vlProcess, vlSymsp, __Vtask_get_domain__182__Vfuncout);
                                }(), __Vtask_get_domain__182__Vfuncout)))) {
                    VL_NULL_CHECK(unnamedblk101__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1250)->__VnoInFunc_m_find_successor_by_name(vlSymsp, name, (IData)(stay_in_scope), unnamedblk101__DOT__unnamedblk102__DOT__orig, __Vtask_m_find_successor_by_name__183__Vfuncout);
                    found = __Vtask_m_find_successor_by_name__183__Vfuncout;
                    if ((VlNull{} != found)) {
                        m_find_successor_by_name__Vfuncrtn 
                            = found;
                        goto __Vlabel0;
                    }
                }
            }
        }
        m_find_successor_by_name__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ stay_in_scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_m_find_predecessor__184__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_m_find_successor__185__Vfuncout;
    // Body
    {
        if (((phase == this->__PVT__m_imp) | (phase 
                                              == VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}))) {
            find__Vfuncrtn = phase;
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, stay_in_scope, 
                                             VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, __Vfunc_m_find_predecessor__184__Vfuncout);
        find__Vfuncrtn = __Vfunc_m_find_predecessor__184__Vfuncout;
        if ((VlNull{} == find__Vfuncrtn)) {
            this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, stay_in_scope, 
                                               VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, __Vfunc_m_find_successor__185__Vfuncout);
            find__Vfuncrtn = __Vfunc_m_find_successor__185__Vfuncout;
        }
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find_by_name(Vuart_example__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ stay_in_scope, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &find_by_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_find_by_name\n"); );
    // Locals
    std::string __Vfunc_get_name__186__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_m_find_predecessor_by_name__187__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_m_find_successor_by_name__188__Vfuncout;
    // Body
    {
        if ((([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__186__Vfuncout);
                    }(), __Vfunc_get_name__186__Vfuncout) 
             == name)) {
            find_by_name__Vfuncrtn = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_find_predecessor_by_name(vlSymsp, name, (IData)(stay_in_scope), 
                                                     VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, __Vfunc_m_find_predecessor_by_name__187__Vfuncout);
        find_by_name__Vfuncrtn = __Vfunc_m_find_predecessor_by_name__187__Vfuncout;
        if ((VlNull{} == find_by_name__Vfuncrtn)) {
            this->__VnoInFunc_m_find_successor_by_name(vlSymsp, name, (IData)(stay_in_scope), 
                                                       VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, __Vfunc_m_find_successor_by_name__188__Vfuncout);
            find_by_name__Vfuncrtn = __Vfunc_m_find_successor_by_name__188__Vfuncout;
        }
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is\n"); );
    // Body
    is__Vfuncrtn = ((this->__PVT__m_imp == phase) | 
                    (VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this} 
                     == phase));
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_before(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_before__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_before\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is__189__Vfuncout;
    __Vfunc_is__189__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_m_find_successor__190__Vfuncout;
    // Body
    is_before__Vfuncrtn = ((1U & (~ ([&]() {
                        this->__VnoInFunc_is(vlSymsp, phase, __Vfunc_is__189__Vfuncout);
                    }(), (IData)(__Vfunc_is__189__Vfuncout)))) 
                           && (VlNull{} != ([&]() {
                    this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, 0U, 
                                                       VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, __Vfunc_m_find_successor__190__Vfuncout);
                }(), __Vfunc_m_find_successor__190__Vfuncout)));
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_after(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, CData/*0:0*/ &is_after__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_is_after\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is__191__Vfuncout;
    __Vfunc_is__191__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_m_find_predecessor__192__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    is_after__Vfuncrtn = ((1U & (~ ([&]() {
                        this->__VnoInFunc_is(vlSymsp, phase, __Vfunc_is__191__Vfuncout);
                    }(), (IData)(__Vfunc_is__191__Vfuncout)))) 
                          && (VlNull{} != ([&]() {
                    this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, 0U, 
                                                         VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, __Vfunc_m_find_predecessor__192__Vfuncout);
                }(), __Vfunc_m_find_predecessor__192__Vfuncout)));
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__194__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__195__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_state_change> __Vfunc_create__196__Vfuncout;
    std::string __Vfunc_get_name__197__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__199__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__201__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__202__Vfuncout;
    __Vfunc_uvm_report_enabled__202__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__202__verbosity;
    __Vfunc_uvm_report_enabled__202__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__202__severity;
    __Vfunc_uvm_report_enabled__202__severity = 0;
    std::string __Vfunc_uvm_report_enabled__202__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__203__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__204__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__205__Vfuncout;
    __Vtask_uvm_report_enabled__205__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__206__id;
    std::string __Vtask_uvm_report_info__206__message;
    IData/*31:0*/ __Vtask_uvm_report_info__206__verbosity;
    __Vtask_uvm_report_info__206__verbosity = 0;
    std::string __Vtask_uvm_report_info__206__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__206__line;
    __Vtask_uvm_report_info__206__line = 0;
    std::string __Vtask_uvm_report_info__206__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__206__report_enabled_checked;
    __Vtask_uvm_report_info__206__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__207__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__208__Vfuncout;
    __Vfunc_get_inst_id__208__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__209__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__210__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__213__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__215__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__217__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__219__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__221__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__223__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__226__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__228__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__385__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__387__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__389__Vfuncout;
    __Vfunc_uvm_report_enabled__389__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__389__verbosity;
    __Vfunc_uvm_report_enabled__389__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__389__severity;
    __Vfunc_uvm_report_enabled__389__severity = 0;
    std::string __Vfunc_uvm_report_enabled__389__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__390__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__391__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__392__Vfuncout;
    __Vtask_uvm_report_enabled__392__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__393__id;
    std::string __Vtask_uvm_report_info__393__message;
    IData/*31:0*/ __Vtask_uvm_report_info__393__verbosity;
    __Vtask_uvm_report_info__393__verbosity = 0;
    std::string __Vtask_uvm_report_info__393__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__393__line;
    __Vtask_uvm_report_info__393__line = 0;
    std::string __Vtask_uvm_report_info__393__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__393__report_enabled_checked;
    __Vtask_uvm_report_info__393__report_enabled_checked = 0;
    std::string __Vfunc_get_name__394__Vfuncout;
    std::string __Vfunc_get_schedule_name__395__Vfuncout;
    std::string __Vfunc_get_domain_name__396__Vfuncout;
    std::string __Vtask_get_name__397__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__398__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__399__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__401__Vfuncout;
    __Vfunc_uvm_report_enabled__401__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__401__verbosity;
    __Vfunc_uvm_report_enabled__401__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__401__severity;
    __Vfunc_uvm_report_enabled__401__severity = 0;
    std::string __Vfunc_uvm_report_enabled__401__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__402__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__403__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__404__Vfuncout;
    __Vtask_uvm_report_enabled__404__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__405__id;
    std::string __Vtask_uvm_report_info__405__message;
    IData/*31:0*/ __Vtask_uvm_report_info__405__verbosity;
    __Vtask_uvm_report_info__405__verbosity = 0;
    std::string __Vtask_uvm_report_info__405__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__405__line;
    __Vtask_uvm_report_info__405__line = 0;
    std::string __Vtask_uvm_report_info__405__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__405__report_enabled_checked;
    __Vtask_uvm_report_info__405__report_enabled_checked = 0;
    std::string __Vfunc_get_name__406__Vfuncout;
    std::string __Vfunc_get_schedule_name__407__Vfuncout;
    std::string __Vfunc_get_domain_name__408__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__409__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__410__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__412__Vfuncout;
    __Vfunc_uvm_report_enabled__412__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__412__verbosity;
    __Vfunc_uvm_report_enabled__412__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__412__severity;
    __Vfunc_uvm_report_enabled__412__severity = 0;
    std::string __Vfunc_uvm_report_enabled__412__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__413__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__414__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__415__Vfuncout;
    __Vtask_uvm_report_enabled__415__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__416__id;
    std::string __Vtask_uvm_report_info__416__message;
    IData/*31:0*/ __Vtask_uvm_report_info__416__verbosity;
    __Vtask_uvm_report_info__416__verbosity = 0;
    std::string __Vtask_uvm_report_info__416__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__416__line;
    __Vtask_uvm_report_info__416__line = 0;
    std::string __Vtask_uvm_report_info__416__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__416__report_enabled_checked;
    __Vtask_uvm_report_info__416__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__417__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__418__Vfuncout;
    __Vfunc_get_inst_id__418__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__419__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__420__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__423__Vfuncout;
    __Vfunc_uvm_report_enabled__423__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__423__verbosity;
    __Vfunc_uvm_report_enabled__423__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__423__severity;
    __Vfunc_uvm_report_enabled__423__severity = 0;
    std::string __Vfunc_uvm_report_enabled__423__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__424__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__425__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__426__Vfuncout;
    __Vtask_uvm_report_enabled__426__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__427__id;
    std::string __Vtask_uvm_report_info__427__message;
    IData/*31:0*/ __Vtask_uvm_report_info__427__verbosity;
    __Vtask_uvm_report_info__427__verbosity = 0;
    std::string __Vtask_uvm_report_info__427__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__427__line;
    __Vtask_uvm_report_info__427__line = 0;
    std::string __Vtask_uvm_report_info__427__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__427__report_enabled_checked;
    __Vtask_uvm_report_info__427__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__428__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__429__Vfuncout;
    __Vfunc_get_inst_id__429__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__430__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__431__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__434__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__436__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__439__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__441__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__443__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__447__Vfuncout;
    __Vfunc_uvm_report_enabled__447__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__447__verbosity;
    __Vfunc_uvm_report_enabled__447__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__447__severity;
    __Vfunc_uvm_report_enabled__447__severity = 0;
    std::string __Vfunc_uvm_report_enabled__447__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__448__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__449__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__450__Vfuncout;
    __Vtask_uvm_report_enabled__450__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__451__id;
    std::string __Vtask_uvm_report_info__451__message;
    IData/*31:0*/ __Vtask_uvm_report_info__451__verbosity;
    __Vtask_uvm_report_info__451__verbosity = 0;
    std::string __Vtask_uvm_report_info__451__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__451__line;
    __Vtask_uvm_report_info__451__line = 0;
    std::string __Vtask_uvm_report_info__451__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__451__report_enabled_checked;
    __Vtask_uvm_report_info__451__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__452__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__453__Vfuncout;
    __Vfunc_get_inst_id__453__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__454__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__455__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__458__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__460__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__461__Vfuncout;
    IData/*31:0*/ __Vtask_try_put__463__Vfuncout;
    __Vtask_try_put__463__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__465__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__467__Vfuncout;
    IData/*31:0*/ __Vtask_try_put__468__Vfuncout;
    __Vtask_try_put__468__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__469__Vfuncout;
    __Vfunc_uvm_report_enabled__469__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__469__verbosity;
    __Vfunc_uvm_report_enabled__469__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__469__severity;
    __Vfunc_uvm_report_enabled__469__severity = 0;
    std::string __Vfunc_uvm_report_enabled__469__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__470__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__471__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__472__Vfuncout;
    __Vtask_uvm_report_enabled__472__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__473__id;
    std::string __Vtask_uvm_report_info__473__message;
    IData/*31:0*/ __Vtask_uvm_report_info__473__verbosity;
    __Vtask_uvm_report_info__473__verbosity = 0;
    std::string __Vtask_uvm_report_info__473__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__473__line;
    __Vtask_uvm_report_info__473__line = 0;
    std::string __Vtask_uvm_report_info__473__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__473__report_enabled_checked;
    __Vtask_uvm_report_info__473__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__474__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__475__Vfuncout;
    __Vtask_get_inst_id__475__Vfuncout = 0;
    std::string __Vfunc_get_full_name__476__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__477__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__478__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk103__DOT__pred;
    CData/*0:0*/ unnamedblk103__DOT__pred__Vfirst;
    unnamedblk103__DOT__pred__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk104__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk104__DOT__cb;
    IData/*31:0*/ unnamedblk105__DOT__i;
    unnamedblk105__DOT__i = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk106__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk106__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk107__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk107__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk108__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk108__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk110__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk110__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk109__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk109__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk117__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk117__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk118__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk118__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> unnamedblk119__DOT__objection;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk120__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk120__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> unnamedblk121__DOT__objection;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk122__DOT__succ;
    CData/*0:0*/ unnamedblk122__DOT__succ__Vfirst;
    unnamedblk122__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> unnamedblk122__DOT__unnamedblk123__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> unnamedblk122__DOT__unnamedblk123__DOT__cb;
    VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_28> __VDynScope_execute_phase_0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
    __VDynScope_execute_phase_0 = VL_NEW(Vuart_example_uvm_pkg__03a__03a__VDynScope_28, vlSymsp);
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__194__Vfuncout);
        cs = __Vfunc_get__194__Vfuncout;
        VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1326)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__195__Vfuncout);
        VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1326)->__PVT__top 
            = __Vtask_get_root__195__Vfuncout;
        if ((0U != this->__PVT__m_predecessors.first(unnamedblk103__DOT__pred))) {
            unnamedblk103__DOT__pred__Vfirst = 1U;
            while (((IData)(unnamedblk103__DOT__pred__Vfirst) 
                    || (0U != this->__PVT__m_predecessors.next(unnamedblk103__DOT__pred)))) {
                unnamedblk103__DOT__pred__Vfirst = 0U;
                if ((0x00000100U != VL_NULL_CHECK(unnamedblk103__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1333)
                     ->__PVT__m_state)) {
                    CData/*0:0*/ __VdynTrigger_h13777b2f__0;
                    __VdynTrigger_h13777b2f__0 = 0;
                    __VdynTrigger_h13777b2f__0 = 0U;
                    while ((1U & (~ (IData)(__VdynTrigger_h13777b2f__0)))) {
                        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                     vlProcess, 
                                                                     "@([true] (32'h100 == uvm_pkg::uvm_phase.unnamedblk103.pred.m_state))", 
                                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                     1333);
                        this->__Vtrigprevexpr_hf177dfba__0 
                            = (0x00000100U == VL_NULL_CHECK(unnamedblk103__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1333)
                               ->__PVT__m_state);
                        __VdynTrigger_h13777b2f__0 
                            = this->__Vtrigprevexpr_hf177dfba__0;
                        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h13777b2f__0);
                    }
                    co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                 vlProcess, 
                                                                 "@([true] (32'h100 == uvm_pkg::uvm_phase.unnamedblk103.pred.m_state))", 
                                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                 1333);
                }
            }
        }
        if ((0x00000100U == this->__PVT__m_state)) {
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi12__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__197__Vfuncout);
                    }(), __Vfunc_get_name__197__Vfuncout)), VlNull{}, ""s, __Vfunc_create__196__Vfuncout);
        VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1340)->__PVT__state_chg 
            = __Vfunc_create__196__Vfuncout;
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1341)
                      ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1341)->__PVT__m_phase 
            = VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this};
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1342)
                      ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1342)->__PVT__m_jump_to = VlNull{};
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1350)
                      ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1350)->__PVT__m_prev_state 
            = this->__PVT__m_state;
        this->__PVT__m_state = 4U;
        unnamedblk104__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                          VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(unnamedblk104__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1352)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__199__Vfuncout);
        unnamedblk104__DOT__cb = __Vtask_first__199__Vfuncout;
        while ((VlNull{} != unnamedblk104__DOT__cb)) {
            VL_NULL_CHECK(unnamedblk104__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1352)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1352)
                                                                                ->__PVT__state_chg);
            VL_NULL_CHECK(unnamedblk104__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1352)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__201__Vfuncout);
            unnamedblk104__DOT__cb = __Vtask_next__201__Vfuncout;
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                1353);
        if ((0U != this->__PVT__m_sync.size())) {
            unnamedblk105__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk105__DOT__i, this->__PVT__m_sync.size())) {
                if (VL_GTS_III(32, 4U, VL_NULL_CHECK(this->__PVT__m_sync.at(unnamedblk105__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1358)
                               ->__PVT__m_state)) {
                    CData/*0:0*/ __VdynTrigger_hbe11f8d7__0;
                    __VdynTrigger_hbe11f8d7__0 = 0;
                    __VdynTrigger_hbe11f8d7__0 = 0U;
                    while ((1U & (~ (IData)(__VdynTrigger_hbe11f8d7__0)))) {
                        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                     vlProcess, 
                                                                     "@([true] (32'h4 <= uvm_pkg::uvm_phase.m_sync.at(uvm_pkg::uvm_phase.unnamedblk105.i).m_state))", 
                                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                     1358);
                        this->__Vtrigprevexpr_hc7ed5d52__0 
                            = VL_LTES_III(32, 4U, VL_NULL_CHECK(this->__PVT__m_sync.at(unnamedblk105__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1358)
                                          ->__PVT__m_state);
                        __VdynTrigger_hbe11f8d7__0 
                            = this->__Vtrigprevexpr_hc7ed5d52__0;
                        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hbe11f8d7__0);
                    }
                    co_await vlSymsp->TOP.__VdynSched.resumption(
                                                                 vlProcess, 
                                                                 "@([true] (32'h4 <= uvm_pkg::uvm_phase.m_sync.at(uvm_pkg::uvm_phase.unnamedblk105.i).m_state))", 
                                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                 1358);
                }
                unnamedblk105__DOT__i = ((IData)(1U) 
                                         + unnamedblk105__DOT__i);
            }
        }
        this->__PVT__m_run_count = ((IData)(1U) + this->__PVT__m_run_count);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__202__id = "PH/TRC/STRT"s;
                            __Vfunc_uvm_report_enabled__202__severity = 0U;
                            __Vfunc_uvm_report_enabled__202__verbosity = 0x00000064U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__203__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__203__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__204__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__204__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__202__verbosity, (IData)(__Vfunc_uvm_report_enabled__202__severity), __Vfunc_uvm_report_enabled__202__id, __Vtask_uvm_report_enabled__205__Vfuncout);
                            __Vfunc_uvm_report_enabled__202__Vfuncout 
                                = __Vtask_uvm_report_enabled__205__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__202__Vfuncout))) {
                __Vtask_uvm_report_info__206__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__206__context_name = ""s;
                __Vtask_uvm_report_info__206__line = 0x00000556U;
                __Vtask_uvm_report_info__206__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__206__verbosity = 0x00000064U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__207__Vfuncout);
                    }(), __Vfunc_get_full_name__207__Vfuncout);
                __Vtask_uvm_report_info__206__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(__Vtemp_1),
                                                                         32,
                                                                         ([&]() {
                                        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__208__Vfuncout);
                                    }(), __Vfunc_get_inst_id__208__Vfuncout)) , "Starting phase"s));
                __Vtask_uvm_report_info__206__id = "PH/TRC/STRT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__209__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__209__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__210__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__210__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__206__id, __Vtask_uvm_report_info__206__message, __Vtask_uvm_report_info__206__verbosity, __Vtask_uvm_report_info__206__filename, __Vtask_uvm_report_info__206__line, __Vtask_uvm_report_info__206__context_name, (IData)(__Vtask_uvm_report_info__206__report_enabled_checked));
            }
        }
        if ((1U != this->__PVT__m_phase_type)) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1372)
                          ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1372)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 8U;
            unnamedblk106__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk106__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1374)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__213__Vfuncout);
            unnamedblk106__DOT__cb = __Vtask_first__213__Vfuncout;
            while ((VlNull{} != unnamedblk106__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk106__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1374)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1374)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk106__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1374)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__215__Vfuncout);
                unnamedblk106__DOT__cb = __Vtask_next__215__Vfuncout;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1376);
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1378)
                          ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1378)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 0x00000010U;
            unnamedblk107__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk107__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1380)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__217__Vfuncout);
            unnamedblk107__DOT__cb = __Vtask_first__217__Vfuncout;
            while ((VlNull{} != unnamedblk107__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk107__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1380)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1380)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk107__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1380)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__219__Vfuncout);
                unnamedblk107__DOT__cb = __Vtask_next__219__Vfuncout;
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1382);
        } else {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1391)
                          ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1391)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 8U;
            unnamedblk108__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk108__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1393)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__221__Vfuncout);
            unnamedblk108__DOT__cb = __Vtask_first__221__Vfuncout;
            while ((VlNull{} != unnamedblk108__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk108__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1393)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1393)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk108__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1393)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__223__Vfuncout);
                unnamedblk108__DOT__cb = __Vtask_next__223__Vfuncout;
            }
            VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1395)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1395)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, 8U);
            this->__PVT__m_ready_to_end_count = 0U;
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1397);
            if (VL_CAST_DYNAMIC(this->__PVT__m_imp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1401)
                                ->__PVT__task_phase)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.at(
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1417)
                              ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1417)->__PVT__m_prev_state 
                    = this->__PVT__m_state;
                this->__PVT__m_state = 0x00000010U;
                unnamedblk110__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                                  VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
                VL_NULL_CHECK(unnamedblk110__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1419)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__226__Vfuncout);
                unnamedblk110__DOT__cb = __Vtask_first__226__Vfuncout;
                while ((VlNull{} != unnamedblk110__DOT__cb)) {
                    VL_NULL_CHECK(unnamedblk110__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1419)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1419)
                                                                                ->__PVT__state_chg);
                    VL_NULL_CHECK(unnamedblk110__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1419)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__228__Vfuncout);
                    unnamedblk110__DOT__cb = __Vtask_next__228__Vfuncout;
                }
                this->__VnoInFunc_execute_phase____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_execute_phase_0);
                this->__Vtask_uvm_wait_for_nba_region__232____VDynScope_uvm_wait_for_nba_region_0 
                    = VL_NEW(Vuart_example_uvm_pkg__03a__03a__VDynScope_24, vlSymsp);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
                    = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
                this->__VnoInFunc_execute_phase____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
                CData/*0:0*/ __VdynTrigger_h0125b249__0;
                __VdynTrigger_h0125b249__0 = 0;
                __VdynTrigger_h0125b249__0 = 0U;
                this->__Vtrigprevexpr_h02da170a__0 
                    = VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__232____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
                    ->__PVT__nba;
                while ((1U & (~ (IData)(__VdynTrigger_h0125b249__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@( uvm_pkg::uvm_phase.__Vtask_uvm_wait_for_nba_region__232____VDynScope_uvm_wait_for_nba_region_0.nba)", 
                                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                                 430);
                    __VdynTrigger_h0125b249__0 = (VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__232____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
                                                  ->__PVT__nba 
                                                  != this->__Vtrigprevexpr_h02da170a__0);
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0125b249__0);
                    this->__Vtrigprevexpr_h02da170a__0 
                        = VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__232____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
                        ->__PVT__nba;
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@( uvm_pkg::uvm_phase.__Vtask_uvm_wait_for_nba_region__232____VDynScope_uvm_wait_for_nba_region_0.nba)", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                             430);
                {
                    VlForkSync __Vfork_4__sync;
                    __Vfork_4__sync.init(1U, vlProcess);
                    this->__VnoInFunc_execute_phase____Vfork_4__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_execute_phase_0, __Vfork_4__sync);
                    co_await __Vfork_4__sync.join(vlProcess, 
                                                  "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                  1439);
                }
            } else {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1406)
                              ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1406)->__PVT__m_prev_state 
                    = this->__PVT__m_state;
                this->__PVT__m_state = 0x00000010U;
                unnamedblk109__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                                  VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
                VL_NULL_CHECK(unnamedblk109__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1408)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__385__Vfuncout);
                unnamedblk109__DOT__cb = __Vtask_first__385__Vfuncout;
                while ((VlNull{} != unnamedblk109__DOT__cb)) {
                    VL_NULL_CHECK(unnamedblk109__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1408)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1408)
                                                                                ->__PVT__state_chg);
                    VL_NULL_CHECK(unnamedblk109__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1408)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__387__Vfuncout);
                    unnamedblk109__DOT__cb = __Vtask_next__387__Vfuncout;
                }
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                        1410);
                VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1411)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1411)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, 0x00000010U);
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.erase(
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
        if ((1U == this->__PVT__m_phase_type)) {
            if (this->__PVT__m_premature_end) {
                if ((VlNull{} != this->__PVT__m_jump_phase)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1577)
                                  ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1577)->__PVT__m_jump_to 
                        = this->__PVT__m_jump_phase;
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__389__id = "PH_JUMP"s;
                                    __Vfunc_uvm_report_enabled__389__severity = 0U;
                                    __Vfunc_uvm_report_enabled__389__verbosity = 0x000000c8U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__390__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__390__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__391__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__391__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__389__verbosity, (IData)(__Vfunc_uvm_report_enabled__389__severity), __Vfunc_uvm_report_enabled__389__id, __Vtask_uvm_report_enabled__392__Vfuncout);
                                    __Vfunc_uvm_report_enabled__389__Vfuncout 
                                        = __Vtask_uvm_report_enabled__392__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__389__Vfuncout))) {
                        __Vtask_uvm_report_info__393__report_enabled_checked = 1U;
                        __Vtask_uvm_report_info__393__context_name = ""s;
                        __Vtask_uvm_report_info__393__line = 0x0000062eU;
                        __Vtask_uvm_report_info__393__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_info__393__verbosity = 0x000000c8U;
                        __Vtemp_2 = ([&]() {
                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__394__Vfuncout);
                            }(), __Vfunc_get_name__394__Vfuncout);
                        __Vtemp_3 = ([&]() {
                                this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __Vfunc_get_schedule_name__395__Vfuncout);
                            }(), __Vfunc_get_schedule_name__395__Vfuncout);
                        __Vtemp_4 = ([&]() {
                                this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, __Vfunc_get_domain_name__396__Vfuncout);
                            }(), __Vfunc_get_domain_name__396__Vfuncout);
                        __Vtemp_5 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__m_jump_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1582)
                                     ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__397__Vfuncout);
                            }(), __Vtask_get_name__397__Vfuncout);
                        __Vtask_uvm_report_info__393__message 
                            = VL_SFORMATF_N_NX("phase %@ (schedule %@, domain %@) is jumping to phase %@",0,
                                               -1,&(__Vtemp_2),
                                               -1,&(__Vtemp_3),
                                               -1,&(__Vtemp_4),
                                               -1,&(__Vtemp_5)) ;
                        __Vtask_uvm_report_info__393__id = "PH_JUMP"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__398__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__398__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__399__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__399__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__393__id, __Vtask_uvm_report_info__393__message, __Vtask_uvm_report_info__393__verbosity, __Vtask_uvm_report_info__393__filename, __Vtask_uvm_report_info__393__line, __Vtask_uvm_report_info__393__context_name, (IData)(__Vtask_uvm_report_info__393__report_enabled_checked));
                    }
                } else if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__401__id = "PH_JUMP"s;
                                __Vfunc_uvm_report_enabled__401__severity = 0U;
                                __Vfunc_uvm_report_enabled__401__verbosity = 0x000000c8U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__402__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__402__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                   ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__403__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__403__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                   ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__401__verbosity, (IData)(__Vfunc_uvm_report_enabled__401__severity), __Vfunc_uvm_report_enabled__401__id, __Vtask_uvm_report_enabled__404__Vfuncout);
                                __Vfunc_uvm_report_enabled__401__Vfuncout 
                                    = __Vtask_uvm_report_enabled__404__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__401__Vfuncout))) {
                    __Vtask_uvm_report_info__405__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__405__context_name = ""s;
                    __Vtask_uvm_report_info__405__line = 0x00000634U;
                    __Vtask_uvm_report_info__405__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__405__verbosity = 0x000000c8U;
                    __Vtemp_6 = ([&]() {
                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__406__Vfuncout);
                        }(), __Vfunc_get_name__406__Vfuncout);
                    __Vtemp_7 = ([&]() {
                            this->__VnoInFunc_get_schedule_name(vlSymsp, 0U, __Vfunc_get_schedule_name__407__Vfuncout);
                        }(), __Vfunc_get_schedule_name__407__Vfuncout);
                    __Vtemp_8 = ([&]() {
                            this->__VnoInFunc_get_domain_name(vlProcess, vlSymsp, __Vfunc_get_domain_name__408__Vfuncout);
                        }(), __Vfunc_get_domain_name__408__Vfuncout);
                    __Vtask_uvm_report_info__405__message 
                        = VL_SFORMATF_N_NX("phase %@ (schedule %@, domain %@) is ending prematurely",0,
                                           -1,&(__Vtemp_6),
                                           -1,&(__Vtemp_7),
                                           -1,&(__Vtemp_8)) ;
                    __Vtask_uvm_report_info__405__id = "PH_JUMP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__409__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__409__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__410__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__410__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__405__id, __Vtask_uvm_report_info__405__message, __Vtask_uvm_report_info__405__verbosity, __Vtask_uvm_report_info__405__filename, __Vtask_uvm_report_info__405__line, __Vtask_uvm_report_info__405__context_name, (IData)(__Vtask_uvm_report_info__405__report_enabled_checked));
                }
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                        1592);
                if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__412__id = "PH_END"s;
                                    __Vfunc_uvm_report_enabled__412__severity = 0U;
                                    __Vfunc_uvm_report_enabled__412__verbosity = 0x0000012cU;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__413__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__413__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__414__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__414__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__412__verbosity, (IData)(__Vfunc_uvm_report_enabled__412__severity), __Vfunc_uvm_report_enabled__412__id, __Vtask_uvm_report_enabled__415__Vfuncout);
                                    __Vfunc_uvm_report_enabled__412__Vfuncout 
                                        = __Vtask_uvm_report_enabled__415__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__412__Vfuncout))) {
                        __Vtask_uvm_report_info__416__report_enabled_checked = 1U;
                        __Vtask_uvm_report_info__416__context_name = ""s;
                        __Vtask_uvm_report_info__416__line = 0x0000063aU;
                        __Vtask_uvm_report_info__416__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                        __Vtask_uvm_report_info__416__verbosity = 0x0000012cU;
                        __Vtemp_9 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__417__Vfuncout);
                            }(), __Vfunc_get_full_name__417__Vfuncout);
                        __Vtask_uvm_report_info__416__message 
                            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                                -1,
                                                                                &(__Vtemp_9),
                                                                                32,
                                                                                ([&]() {
                                                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__418__Vfuncout);
                                            }(), __Vfunc_get_inst_id__418__Vfuncout)) , "ENDING PHASE PREMATURELY"s));
                        __Vtask_uvm_report_info__416__id = "PH_END"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__419__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                            = __Vfunc_get__419__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__420__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                            = __Vtask_get_root__420__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__416__id, __Vtask_uvm_report_info__416__message, __Vtask_uvm_report_info__416__verbosity, __Vtask_uvm_report_info__416__filename, __Vtask_uvm_report_info__416__line, __Vtask_uvm_report_info__416__context_name, (IData)(__Vtask_uvm_report_info__416__report_enabled_checked));
                    }
                }
            } else if ((VlNull{} == VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1599)
                        ->__PVT__task_phase)) {
                co_await this->__VnoInFunc_m_wait_for_pred(vlProcess, vlSymsp);
            }
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__423__id = "PH_END"s;
                                __Vfunc_uvm_report_enabled__423__severity = 0U;
                                __Vfunc_uvm_report_enabled__423__verbosity = 0x0000012cU;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__424__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__424__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__425__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__425__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__423__verbosity, (IData)(__Vfunc_uvm_report_enabled__423__severity), __Vfunc_uvm_report_enabled__423__id, __Vtask_uvm_report_enabled__426__Vfuncout);
                                __Vfunc_uvm_report_enabled__423__Vfuncout 
                                    = __Vtask_uvm_report_enabled__426__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__423__Vfuncout))) {
                    __Vtask_uvm_report_info__427__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__427__context_name = ""s;
                    __Vtask_uvm_report_info__427__line = 0x00000648U;
                    __Vtask_uvm_report_info__427__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__427__verbosity = 0x0000012cU;
                    __Vtemp_10 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__428__Vfuncout);
                        }(), __Vfunc_get_full_name__428__Vfuncout);
                    __Vtask_uvm_report_info__427__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__Vtemp_10),
                                                                             32,
                                                                             ([&]() {
                                            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__429__Vfuncout);
                                        }(), __Vfunc_get_inst_id__429__Vfuncout)) , "ENDING PHASE"s));
                    __Vtask_uvm_report_info__427__id = "PH_END"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__430__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__430__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__431__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__431__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__427__id, __Vtask_uvm_report_info__427__message, __Vtask_uvm_report_info__427__verbosity, __Vtask_uvm_report_info__427__filename, __Vtask_uvm_report_info__427__line, __Vtask_uvm_report_info__427__context_name, (IData)(__Vtask_uvm_report_info__427__report_enabled_checked));
                }
            }
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1609)
                          ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1609)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 0x00000040U;
            unnamedblk117__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk117__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1611)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__434__Vfuncout);
            unnamedblk117__DOT__cb = __Vtask_first__434__Vfuncout;
            while ((VlNull{} != unnamedblk117__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk117__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1611)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1611)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk117__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1611)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__436__Vfuncout);
                unnamedblk117__DOT__cb = __Vtask_next__436__Vfuncout;
            }
            if ((VlNull{} != this->__PVT__m_imp)) {
                VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1613)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1613)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, 0x00000040U);
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1614);
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1621)
                          ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1621)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = ((IData)(this->__PVT__m_premature_end)
                                     ? 0x00000200U : 0x00000080U);
            unnamedblk118__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk118__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1624)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__439__Vfuncout);
            unnamedblk118__DOT__cb = __Vtask_first__439__Vfuncout;
            while ((VlNull{} != unnamedblk118__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk118__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1624)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1624)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk118__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1624)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__441__Vfuncout);
                unnamedblk118__DOT__cb = __Vtask_next__441__Vfuncout;
            }
            if ((VlNull{} != this->__PVT__m_phase_proc)) {
                VL_NULL_CHECK(this->__PVT__m_phase_proc, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1626)->__VnoInFunc_kill(vlSymsp);
                this->__PVT__m_phase_proc = VlNull{};
            }
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1629);
            this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__443__Vfuncout);
            unnamedblk119__DOT__objection = __Vfunc_get_objection__443__Vfuncout;
            if ((VlNull{} != unnamedblk119__DOT__objection)) {
                VL_NULL_CHECK(unnamedblk119__DOT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1633)->__VnoInFunc_clear(vlProcess, vlSymsp, VlNull{});
            }
        }
        this->__PVT__m_premature_end = 0U;
        if (((IData)(this->__PVT__m_jump_fwd) | (IData)(this->__PVT__m_jump_bkwd))) {
            if (this->__PVT__m_jump_fwd) {
                this->__VnoInFunc_clear_successors(vlProcess, vlSymsp, 0x00000100U, this->__PVT__m_jump_phase);
            }
            VL_NULL_CHECK(this->__PVT__m_jump_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1645)->__VnoInFunc_clear_successors(vlProcess, vlSymsp, 1U, VlNull{});
        } else {
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__447__id = "PH/TRC/DONE"s;
                                __Vfunc_uvm_report_enabled__447__severity = 0U;
                                __Vfunc_uvm_report_enabled__447__verbosity = 0x00000064U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__448__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__448__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__449__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__449__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__447__verbosity, (IData)(__Vfunc_uvm_report_enabled__447__severity), __Vfunc_uvm_report_enabled__447__id, __Vtask_uvm_report_enabled__450__Vfuncout);
                                __Vfunc_uvm_report_enabled__447__Vfuncout 
                                    = __Vtask_uvm_report_enabled__450__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__447__Vfuncout))) {
                    __Vtask_uvm_report_info__451__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__451__context_name = ""s;
                    __Vtask_uvm_report_info__451__line = 0x00000672U;
                    __Vtask_uvm_report_info__451__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__451__verbosity = 0x00000064U;
                    __Vtemp_11 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__452__Vfuncout);
                        }(), __Vfunc_get_full_name__452__Vfuncout);
                    __Vtask_uvm_report_info__451__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__Vtemp_11),
                                                                             32,
                                                                             ([&]() {
                                            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__453__Vfuncout);
                                        }(), __Vfunc_get_inst_id__453__Vfuncout)) , "Completed phase"s));
                    __Vtask_uvm_report_info__451__id = "PH/TRC/DONE"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__454__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__454__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__455__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__455__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__451__id, __Vtask_uvm_report_info__451__message, __Vtask_uvm_report_info__451__verbosity, __Vtask_uvm_report_info__451__filename, __Vtask_uvm_report_info__451__line, __Vtask_uvm_report_info__451__context_name, (IData)(__Vtask_uvm_report_info__451__report_enabled_checked));
                }
            }
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1651)
                          ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1651)->__PVT__m_prev_state 
                = this->__PVT__m_state;
            this->__PVT__m_state = 0x00000100U;
            unnamedblk120__DOT__iter = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                              VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
            VL_NULL_CHECK(unnamedblk120__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1653)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__458__Vfuncout);
            unnamedblk120__DOT__cb = __Vtask_first__458__Vfuncout;
            while ((VlNull{} != unnamedblk120__DOT__cb)) {
                VL_NULL_CHECK(unnamedblk120__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1653)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1653)
                                                                                ->__PVT__state_chg);
                VL_NULL_CHECK(unnamedblk120__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1653)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__460__Vfuncout);
                unnamedblk120__DOT__cb = __Vtask_next__460__Vfuncout;
            }
            this->__PVT__m_phase_proc = VlNull{};
            co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                    vlProcess, 
                                                    "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                    1655);
        }
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                1657);
        this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__461__Vfuncout);
        unnamedblk121__DOT__objection = __Vfunc_get_objection__461__Vfuncout;
        if ((VlNull{} != unnamedblk121__DOT__objection)) {
            VL_NULL_CHECK(unnamedblk121__DOT__objection, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1662)->__VnoInFunc_clear(vlProcess, vlSymsp, VlNull{});
        }
        if (((IData)(this->__PVT__m_jump_fwd) | (IData)(this->__PVT__m_jump_bkwd))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_hopper, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1669)->__VnoInFunc_try_put(vlSymsp, this->__PVT__m_jump_phase, __Vtask_try_put__463__Vfuncout);
            this->__PVT__m_jump_phase = VlNull{};
            this->__PVT__m_jump_fwd = 0U;
            this->__PVT__m_jump_bkwd = 0U;
        } else if ((0U == this->__PVT__m_successors.size())) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1676)
                          ->__PVT__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1676)->__PVT__m_phase_all_done = 1U;
        } else if ((0U != this->__PVT__m_successors.first(unnamedblk122__DOT__succ))) {
            unnamedblk122__DOT__succ__Vfirst = 1U;
            while (((IData)(unnamedblk122__DOT__succ__Vfirst) 
                    || (0U != this->__PVT__m_successors.next(unnamedblk122__DOT__succ)))) {
                unnamedblk122__DOT__succ__Vfirst = 0U;
                if (VL_GTS_III(32, 2U, VL_NULL_CHECK(unnamedblk122__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1681)
                               ->__PVT__m_state)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1682)
                                  ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1682)->__PVT__m_prev_state 
                        = VL_NULL_CHECK(unnamedblk122__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1682)
                        ->__PVT__m_state;
                    VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1683)
                                  ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1683)->__PVT__m_phase 
                        = unnamedblk122__DOT__succ;
                    VL_NULL_CHECK(unnamedblk122__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1684)->__PVT__m_state = 2U;
                    unnamedblk122__DOT__unnamedblk123__DOT__iter 
                        = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                                 VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
                    VL_NULL_CHECK(unnamedblk122__DOT__unnamedblk123__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1685)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__465__Vfuncout);
                    unnamedblk122__DOT__unnamedblk123__DOT__cb 
                        = __Vtask_first__465__Vfuncout;
                    while ((VlNull{} != unnamedblk122__DOT__unnamedblk123__DOT__cb)) {
                        VL_NULL_CHECK(unnamedblk122__DOT__unnamedblk123__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1685)->__VnoInFunc_phase_state_change(vlSymsp, unnamedblk122__DOT__succ, VL_NULL_CHECK(__VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1685)
                                                                                ->__PVT__state_chg);
                        VL_NULL_CHECK(unnamedblk122__DOT__unnamedblk123__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1685)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__467__Vfuncout);
                        unnamedblk122__DOT__unnamedblk123__DOT__cb 
                            = __Vtask_next__467__Vfuncout;
                    }
                    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                            vlProcess, 
                                                            "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                            1686);
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_hopper, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1687)->__VnoInFunc_try_put(vlSymsp, unnamedblk122__DOT__succ, __Vtask_try_put__468__Vfuncout);
                    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__469__id = "PH/TRC/SCHEDULED"s;
                                        __Vfunc_uvm_report_enabled__469__severity = 0U;
                                        __Vfunc_uvm_report_enabled__469__verbosity = 0x00000064U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__470__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__470__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__471__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__471__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__469__verbosity, (IData)(__Vfunc_uvm_report_enabled__469__severity), __Vfunc_uvm_report_enabled__469__id, __Vtask_uvm_report_enabled__472__Vfuncout);
                                        __Vfunc_uvm_report_enabled__469__Vfuncout 
                                            = __Vtask_uvm_report_enabled__472__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__469__Vfuncout))) {
                            __Vtask_uvm_report_info__473__report_enabled_checked = 1U;
                            __Vtask_uvm_report_info__473__context_name = ""s;
                            __Vtask_uvm_report_info__473__line = 0x00000699U;
                            __Vtask_uvm_report_info__473__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                            __Vtask_uvm_report_info__473__verbosity = 0x00000064U;
                            __Vtemp_12 = ([&]() {
                                    VL_NULL_CHECK(unnamedblk122__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1689)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__474__Vfuncout);
                                }(), __Vtask_get_full_name__474__Vfuncout);
                            __Vtask_uvm_report_info__473__message 
                                = VL_CVT_PACK_STR_NN(
                                                     VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                                -1,
                                                                                &(__Vtemp_12),
                                                                                32,
                                                                                ([&]() {
                                                    VL_NULL_CHECK(unnamedblk122__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1689)
                                                                                ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__475__Vfuncout);
                                                }(), __Vtask_get_inst_id__475__Vfuncout)) , 
                                                                    VL_CONCATN_NNN("Scheduled from phase "s, 
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__476__Vfuncout);
                                            }(), __Vfunc_get_full_name__476__Vfuncout))));
                            __Vtask_uvm_report_info__473__id = "PH/TRC/SCHEDULED"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__477__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                = __Vfunc_get__477__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__478__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                = __Vtask_get_root__478__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__473__id, __Vtask_uvm_report_info__473__message, __Vtask_uvm_report_info__473__verbosity, __Vtask_uvm_report_info__473__filename, __Vtask_uvm_report_info__473__line, __Vtask_uvm_report_info__473__context_name, (IData)(__Vtask_uvm_report_info__473__report_enabled_checked));
                        }
                    }
                }
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_28> &__VDynScope_execute_phase_0, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0\n"); );
    // Body
    VL_KEEP_THIS;
    {
        VlForkSync __Vfork_5__sync;
        __Vfork_5__sync.init(1U, vlProcess);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_5__sync);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_execute_phase_0, __Vfork_5__sync);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_execute_phase_0, __Vfork_5__sync);
        co_await __Vfork_5__sync.join(vlProcess, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                      1442);
    }
    vlProcess->disableFork();
    __Vfork_4__sync.done("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                         1440);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_28> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__2\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_28> __Vtask___VforkTask_2__304____VDynScope_execute_phase_0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_2__304__unnamedblk113__DOT__p;
    CData/*0:0*/ __Vtask___VforkTask_2__304__unnamedblk113__DOT__p__Vfirst;
    __Vtask___VforkTask_2__304__unnamedblk113__DOT__p__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vtask___VforkTask_2__304__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask___VforkTask_2__304__unnamedblk115__DOT__p;
    CData/*0:0*/ __Vtask___VforkTask_2__304__unnamedblk115__DOT__p__Vfirst;
    __Vtask___VforkTask_2__304__unnamedblk115__DOT__p__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vtask___VforkTask_2__304__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done;
    std::string __Vfunc_get_name__305__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__306__Vfuncout;
    __Vfunc_uvm_report_enabled__306__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__306__verbosity;
    __Vfunc_uvm_report_enabled__306__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__306__severity;
    __Vfunc_uvm_report_enabled__306__severity = 0;
    std::string __Vfunc_uvm_report_enabled__306__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__307__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__308__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__309__Vfuncout;
    __Vtask_uvm_report_enabled__309__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__310__id;
    std::string __Vtask_uvm_report_info__310__message;
    IData/*31:0*/ __Vtask_uvm_report_info__310__verbosity;
    __Vtask_uvm_report_info__310__verbosity = 0;
    std::string __Vtask_uvm_report_info__310__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__310__line;
    __Vtask_uvm_report_info__310__line = 0;
    std::string __Vtask_uvm_report_info__310__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__310__report_enabled_checked;
    __Vtask_uvm_report_info__310__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__311__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__312__Vfuncout;
    __Vfunc_get_inst_id__312__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__313__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__314__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__316__Vfuncout;
    __Vfunc_uvm_report_enabled__316__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__316__verbosity;
    __Vfunc_uvm_report_enabled__316__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__316__severity;
    __Vfunc_uvm_report_enabled__316__severity = 0;
    std::string __Vfunc_uvm_report_enabled__316__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__317__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__318__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__319__Vfuncout;
    __Vtask_uvm_report_enabled__319__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__320__id;
    std::string __Vtask_uvm_report_info__320__message;
    IData/*31:0*/ __Vtask_uvm_report_info__320__verbosity;
    __Vtask_uvm_report_info__320__verbosity = 0;
    std::string __Vtask_uvm_report_info__320__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__320__line;
    __Vtask_uvm_report_info__320__line = 0;
    std::string __Vtask_uvm_report_info__320__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__320__report_enabled_checked;
    __Vtask_uvm_report_info__320__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__321__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__322__Vfuncout;
    __Vfunc_get_inst_id__322__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__323__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__324__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vtask_get_objection__326__Vfuncout;
    IData/*31:0*/ __Vtask_get_objection_total__327__Vfuncout;
    __Vtask_get_objection_total__327__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__328__Vfuncout;
    __Vfunc_uvm_report_enabled__328__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__328__verbosity;
    __Vfunc_uvm_report_enabled__328__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__328__severity;
    __Vfunc_uvm_report_enabled__328__severity = 0;
    std::string __Vfunc_uvm_report_enabled__328__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__329__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__330__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__331__Vfuncout;
    __Vtask_uvm_report_enabled__331__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__332__id;
    std::string __Vtask_uvm_report_info__332__message;
    IData/*31:0*/ __Vtask_uvm_report_info__332__verbosity;
    __Vtask_uvm_report_info__332__verbosity = 0;
    std::string __Vtask_uvm_report_info__332__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__332__line;
    __Vtask_uvm_report_info__332__line = 0;
    std::string __Vtask_uvm_report_info__332__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__332__report_enabled_checked;
    __Vtask_uvm_report_info__332__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__333__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__334__Vfuncout;
    __Vfunc_get_inst_id__334__Vfuncout = 0;
    std::string __Vtask_get_full_name__335__Vfuncout;
    std::string __Vtask_convert2string__336__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__337__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__338__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__340__Vfuncout;
    __Vfunc_uvm_report_enabled__340__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__340__verbosity;
    __Vfunc_uvm_report_enabled__340__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__340__severity;
    __Vfunc_uvm_report_enabled__340__severity = 0;
    std::string __Vfunc_uvm_report_enabled__340__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__341__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__342__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__343__Vfuncout;
    __Vtask_uvm_report_enabled__343__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__345__Vfuncout;
    __Vfunc_uvm_report_enabled__345__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__345__verbosity;
    __Vfunc_uvm_report_enabled__345__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__345__severity;
    __Vfunc_uvm_report_enabled__345__severity = 0;
    std::string __Vfunc_uvm_report_enabled__345__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__346__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__347__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__348__Vfuncout;
    __Vtask_uvm_report_enabled__348__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__349__id;
    std::string __Vtask_uvm_report_info__349__message;
    IData/*31:0*/ __Vtask_uvm_report_info__349__verbosity;
    __Vtask_uvm_report_info__349__verbosity = 0;
    std::string __Vtask_uvm_report_info__349__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__349__line;
    __Vtask_uvm_report_info__349__line = 0;
    std::string __Vtask_uvm_report_info__349__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__349__report_enabled_checked;
    __Vtask_uvm_report_info__349__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__350__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__351__Vfuncout;
    __Vfunc_get_inst_id__351__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__352__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__353__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vtask_get_objection__355__Vfuncout;
    IData/*31:0*/ __Vtask_get_objection_total__356__Vfuncout;
    __Vtask_get_objection_total__356__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__357__Vfuncout;
    __Vfunc_uvm_report_enabled__357__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__357__verbosity;
    __Vfunc_uvm_report_enabled__357__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__357__severity;
    __Vfunc_uvm_report_enabled__357__severity = 0;
    std::string __Vfunc_uvm_report_enabled__357__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__358__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__359__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__360__Vfuncout;
    __Vtask_uvm_report_enabled__360__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__361__id;
    std::string __Vtask_uvm_report_info__361__message;
    IData/*31:0*/ __Vtask_uvm_report_info__361__verbosity;
    __Vtask_uvm_report_info__361__verbosity = 0;
    std::string __Vtask_uvm_report_info__361__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__361__line;
    __Vtask_uvm_report_info__361__line = 0;
    std::string __Vtask_uvm_report_info__361__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__361__report_enabled_checked;
    __Vtask_uvm_report_info__361__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__362__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__363__Vfuncout;
    __Vfunc_get_inst_id__363__Vfuncout = 0;
    std::string __Vtask_get_full_name__364__Vfuncout;
    std::string __Vtask_convert2string__365__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__366__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__367__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__369__Vfuncout;
    __Vfunc_uvm_report_enabled__369__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__369__verbosity;
    __Vfunc_uvm_report_enabled__369__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__369__severity;
    __Vfunc_uvm_report_enabled__369__severity = 0;
    std::string __Vfunc_uvm_report_enabled__369__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__370__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__371__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__372__Vfuncout;
    __Vtask_uvm_report_enabled__372__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__374__Vfuncout;
    __Vfunc_uvm_report_enabled__374__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__374__verbosity;
    __Vfunc_uvm_report_enabled__374__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__374__severity;
    __Vfunc_uvm_report_enabled__374__severity = 0;
    std::string __Vfunc_uvm_report_enabled__374__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__375__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__376__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__377__Vfuncout;
    __Vtask_uvm_report_enabled__377__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__378__id;
    std::string __Vtask_uvm_report_info__378__message;
    IData/*31:0*/ __Vtask_uvm_report_info__378__verbosity;
    __Vtask_uvm_report_info__378__verbosity = 0;
    std::string __Vtask_uvm_report_info__378__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__378__line;
    __Vtask_uvm_report_info__378__line = 0;
    std::string __Vtask_uvm_report_info__378__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__378__report_enabled_checked;
    __Vtask_uvm_report_info__378__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__379__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__380__Vfuncout;
    __Vfunc_get_inst_id__380__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__381__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__382__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_2__304____VDynScope_execute_phase_0 
        = __VDynScope_execute_phase_0;
    __Vtask___VforkTask_2__304__unnamedblk113__DOT__p__Vfirst = 0;
    __Vtask___VforkTask_2__304__unnamedblk115__DOT__p__Vfirst = 0;
    if (("run"s == ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__305__Vfuncout);
                }(), __Vfunc_get_name__305__Vfuncout))) {
        if ((0ULL == VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__304____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1494)
                                   ->__PVT__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1494)
             ->__PVT__phase_timeout)) {
            if ((0ULL == VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__304____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1495)
                                       ->__PVT__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1495)
                 ->__PVT__phase_timeout)) {
                CData/*0:0*/ __VdynTrigger_h4716d152__0;
                __VdynTrigger_h4716d152__0 = 0;
                __VdynTrigger_h4716d152__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h4716d152__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (64'h0 != uvm_pkg::uvm_phase.__Vtask___VforkTask_2__304____VDynScope_execute_phase_0.top.phase_timeout))", 
                                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                                 1495);
                    this->__Vtrigprevexpr_h3ce93667__0 
                        = (0ULL != VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__304____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1495)
                                                 ->__PVT__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1495)
                           ->__PVT__phase_timeout);
                    __VdynTrigger_h4716d152__0 = this->__Vtrigprevexpr_h3ce93667__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h4716d152__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (64'h0 != uvm_pkg::uvm_phase.__Vtask___VforkTask_2__304____VDynScope_execute_phase_0.top.phase_timeout))", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             1495);
            }
        }
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__306__id = "PH/TRC/TO_WAIT"s;
                            __Vfunc_uvm_report_enabled__306__severity = 0U;
                            __Vfunc_uvm_report_enabled__306__verbosity = 0x0000012cU;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__307__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__307__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__308__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__308__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__306__verbosity, (IData)(__Vfunc_uvm_report_enabled__306__severity), __Vfunc_uvm_report_enabled__306__id, __Vtask_uvm_report_enabled__309__Vfuncout);
                            __Vfunc_uvm_report_enabled__306__Vfuncout 
                                = __Vtask_uvm_report_enabled__309__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__306__Vfuncout))) {
                __Vtask_uvm_report_info__310__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__310__context_name = ""s;
                __Vtask_uvm_report_info__310__line = 0x000005d9U;
                __Vtask_uvm_report_info__310__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__310__verbosity = 0x0000012cU;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__311__Vfuncout);
                    }(), __Vfunc_get_full_name__311__Vfuncout);
                __Vtask_uvm_report_info__310__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(__Vtemp_1),
                                                                         32,
                                                                         ([&]() {
                                        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__312__Vfuncout);
                                    }(), __Vfunc_get_inst_id__312__Vfuncout)) , VL_SFORMATF_N_NX("STARTING PHASE TIMEOUT WATCHDOG (timeout == %t)",0,
                                                                                64,
                                                                                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__304____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1497)
                                                                                ->__PVT__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1497)
                                                                                ->__PVT__phase_timeout,
                                                                                -9) ));
                __Vtask_uvm_report_info__310__id = "PH/TRC/TO_WAIT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__313__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__313__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__314__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__314__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__310__id, __Vtask_uvm_report_info__310__message, __Vtask_uvm_report_info__310__verbosity, __Vtask_uvm_report_info__310__filename, __Vtask_uvm_report_info__310__line, __Vtask_uvm_report_info__310__context_name, (IData)(__Vtask_uvm_report_info__310__report_enabled_checked));
            }
        }
        co_await vlSymsp->TOP.__VdlySched.delay((0x00000000000003e8ULL 
                                                 * VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__304____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1498)
                                                                 ->__PVT__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1498)
                                                 ->__PVT__phase_timeout), 
                                                vlProcess, 
                                                "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                1498);
        if ((9.20000000000000000e+12 == VL_ITOR_D_Q(64, VL_TIME_UNITED_Q(1000)))) {
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__316__id = "PH/TRC/TIMEOUT"s;
                                __Vfunc_uvm_report_enabled__316__severity = 0U;
                                __Vfunc_uvm_report_enabled__316__verbosity = 0x00000064U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__317__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__317__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__318__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__318__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__316__verbosity, (IData)(__Vfunc_uvm_report_enabled__316__severity), __Vfunc_uvm_report_enabled__316__id, __Vtask_uvm_report_enabled__319__Vfuncout);
                                __Vfunc_uvm_report_enabled__316__Vfuncout 
                                    = __Vtask_uvm_report_enabled__319__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__316__Vfuncout))) {
                    __Vtask_uvm_report_info__320__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__320__context_name = ""s;
                    __Vtask_uvm_report_info__320__line = 0x000005ddU;
                    __Vtask_uvm_report_info__320__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__320__verbosity = 0x00000064U;
                    __Vtemp_2 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__321__Vfuncout);
                        }(), __Vfunc_get_full_name__321__Vfuncout);
                    __Vtask_uvm_report_info__320__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__Vtemp_2),
                                                                             32,
                                                                             ([&]() {
                                            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__322__Vfuncout);
                                        }(), __Vfunc_get_inst_id__322__Vfuncout)) , "PHASE TIMEOUT WATCHDOG EXPIRED"s));
                    __Vtask_uvm_report_info__320__id = "PH/TRC/TIMEOUT"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__323__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__323__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__324__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__324__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__320__id, __Vtask_uvm_report_info__320__message, __Vtask_uvm_report_info__320__verbosity, __Vtask_uvm_report_info__320__filename, __Vtask_uvm_report_info__320__line, __Vtask_uvm_report_info__320__context_name, (IData)(__Vtask_uvm_report_info__320__report_enabled_checked));
                }
            }
            if ((0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.first(__Vtask___VforkTask_2__304__unnamedblk113__DOT__p))) {
                __Vtask___VforkTask_2__304__unnamedblk113__DOT__p__Vfirst = 1U;
                while (((IData)(__Vtask___VforkTask_2__304__unnamedblk113__DOT__p__Vfirst) 
                        || (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.next(__Vtask___VforkTask_2__304__unnamedblk113__DOT__p)))) {
                    __Vtask___VforkTask_2__304__unnamedblk113__DOT__p__Vfirst = 0U;
                    VL_NULL_CHECK(__Vtask___VforkTask_2__304__unnamedblk113__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1504)->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vtask_get_objection__326__Vfuncout);
                    __Vtask___VforkTask_2__304__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done 
                        = __Vtask_get_objection__326__Vfuncout;
                    if (((VlNull{} != __Vtask___VforkTask_2__304__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done) 
                         & VL_LTS_III(32, 0U, ([&]() {
                                        VL_NULL_CHECK(__Vtask___VforkTask_2__304__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1505)
                                               ->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __Vtask_get_objection_total__327__Vfuncout);
                                    }(), __Vtask_get_objection_total__327__Vfuncout)))) {
                        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__328__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                                            __Vfunc_uvm_report_enabled__328__severity = 0U;
                                            __Vfunc_uvm_report_enabled__328__verbosity = 0x00000064U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__329__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__329__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__330__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__330__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__328__verbosity, (IData)(__Vfunc_uvm_report_enabled__328__severity), __Vfunc_uvm_report_enabled__328__id, __Vtask_uvm_report_enabled__331__Vfuncout);
                                            __Vfunc_uvm_report_enabled__328__Vfuncout 
                                                = __Vtask_uvm_report_enabled__331__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__328__Vfuncout))) {
                                __Vtask_uvm_report_info__332__report_enabled_checked = 1U;
                                __Vtask_uvm_report_info__332__context_name = ""s;
                                __Vtask_uvm_report_info__332__line = 0x000005e6U;
                                __Vtask_uvm_report_info__332__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                                __Vtask_uvm_report_info__332__verbosity = 0x00000064U;
                                __Vtemp_3 = ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__333__Vfuncout);
                                    }(), __Vfunc_get_full_name__333__Vfuncout);
                                __Vtemp_4 = ([&]() {
                                        VL_NULL_CHECK(__Vtask___VforkTask_2__304__unnamedblk113__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1510)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__335__Vfuncout);
                                    }(), __Vtask_get_full_name__335__Vfuncout);
                                __Vtemp_5 = ([&]() {
                                        VL_NULL_CHECK(__Vtask___VforkTask_2__304__unnamedblk113__DOT__unnamedblk114__DOT__p_phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1510)
                                             ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__336__Vfuncout);
                                    }(), __Vtask_convert2string__336__Vfuncout);
                                __Vtask_uvm_report_info__332__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                32,
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__334__Vfuncout);
                                                    }(), __Vfunc_get_inst_id__334__Vfuncout)) , VL_SFORMATF_N_NX("Phase '%@' has outstanding objections:\n%@",0,
                                                                                -1,
                                                                                &(__Vtemp_4),
                                                                                -1,
                                                                                &(__Vtemp_5)) ));
                                __Vtask_uvm_report_info__332__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__337__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                    = __Vfunc_get__337__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__338__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                    = __Vtask_get_root__338__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__332__id, __Vtask_uvm_report_info__332__message, __Vtask_uvm_report_info__332__verbosity, __Vtask_uvm_report_info__332__filename, __Vtask_uvm_report_info__332__line, __Vtask_uvm_report_info__332__context_name, (IData)(__Vtask_uvm_report_info__332__report_enabled_checked));
                            }
                        }
                    }
                }
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__340__id = "PH_TIMEOUT"s;
                            __Vfunc_uvm_report_enabled__340__severity = 3U;
                            __Vfunc_uvm_report_enabled__340__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__341__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__341__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__342__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__342__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__340__verbosity, (IData)(__Vfunc_uvm_report_enabled__340__severity), __Vfunc_uvm_report_enabled__340__id, __Vtask_uvm_report_enabled__343__Vfuncout);
                            __Vfunc_uvm_report_enabled__340__Vfuncout 
                                = __Vtask_uvm_report_enabled__343__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__340__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_TIMEOUT"s, VL_SFORMATF_N_NX("Default timeout of %0^ hit, indicating a probable testbench issue",0,
                                                                                64,
                                                                                9.20000000000000000e+12,
                                                                                -9) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000005ecU, ""s, 1U);
            }
        } else {
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__345__id = "PH/TRC/TIMEOUT"s;
                                __Vfunc_uvm_report_enabled__345__severity = 0U;
                                __Vfunc_uvm_report_enabled__345__verbosity = 0x00000064U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__346__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__346__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__347__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__347__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__345__verbosity, (IData)(__Vfunc_uvm_report_enabled__345__severity), __Vfunc_uvm_report_enabled__345__id, __Vtask_uvm_report_enabled__348__Vfuncout);
                                __Vfunc_uvm_report_enabled__345__Vfuncout 
                                    = __Vtask_uvm_report_enabled__348__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__345__Vfuncout))) {
                    __Vtask_uvm_report_info__349__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__349__context_name = ""s;
                    __Vtask_uvm_report_info__349__line = 0x000005f0U;
                    __Vtask_uvm_report_info__349__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__349__verbosity = 0x00000064U;
                    __Vtemp_6 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__350__Vfuncout);
                        }(), __Vfunc_get_full_name__350__Vfuncout);
                    __Vtask_uvm_report_info__349__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__Vtemp_6),
                                                                             32,
                                                                             ([&]() {
                                            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__351__Vfuncout);
                                        }(), __Vfunc_get_inst_id__351__Vfuncout)) , "PHASE TIMEOUT WATCHDOG EXPIRED"s));
                    __Vtask_uvm_report_info__349__id = "PH/TRC/TIMEOUT"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__352__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__352__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__353__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__353__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__349__id, __Vtask_uvm_report_info__349__message, __Vtask_uvm_report_info__349__verbosity, __Vtask_uvm_report_info__349__filename, __Vtask_uvm_report_info__349__line, __Vtask_uvm_report_info__349__context_name, (IData)(__Vtask_uvm_report_info__349__report_enabled_checked));
                }
            }
            if ((0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.first(__Vtask___VforkTask_2__304__unnamedblk115__DOT__p))) {
                __Vtask___VforkTask_2__304__unnamedblk115__DOT__p__Vfirst = 1U;
                while (((IData)(__Vtask___VforkTask_2__304__unnamedblk115__DOT__p__Vfirst) 
                        || (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_executing_phases.next(__Vtask___VforkTask_2__304__unnamedblk115__DOT__p)))) {
                    __Vtask___VforkTask_2__304__unnamedblk115__DOT__p__Vfirst = 0U;
                    VL_NULL_CHECK(__Vtask___VforkTask_2__304__unnamedblk115__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1523)->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vtask_get_objection__355__Vfuncout);
                    __Vtask___VforkTask_2__304__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done 
                        = __Vtask_get_objection__355__Vfuncout;
                    if (((VlNull{} != __Vtask___VforkTask_2__304__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done) 
                         & VL_LTS_III(32, 0U, ([&]() {
                                        VL_NULL_CHECK(__Vtask___VforkTask_2__304__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1524)
                                               ->__VnoInFunc_get_objection_total(vlSymsp, VlNull{}, __Vtask_get_objection_total__356__Vfuncout);
                                    }(), __Vtask_get_objection_total__356__Vfuncout)))) {
                        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__357__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                                            __Vfunc_uvm_report_enabled__357__severity = 0U;
                                            __Vfunc_uvm_report_enabled__357__verbosity = 0x00000064U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__358__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__358__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__359__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__359__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__357__verbosity, (IData)(__Vfunc_uvm_report_enabled__357__severity), __Vfunc_uvm_report_enabled__357__id, __Vtask_uvm_report_enabled__360__Vfuncout);
                                            __Vfunc_uvm_report_enabled__357__Vfuncout 
                                                = __Vtask_uvm_report_enabled__360__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__357__Vfuncout))) {
                                __Vtask_uvm_report_info__361__report_enabled_checked = 1U;
                                __Vtask_uvm_report_info__361__context_name = ""s;
                                __Vtask_uvm_report_info__361__line = 0x000005f9U;
                                __Vtask_uvm_report_info__361__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                                __Vtask_uvm_report_info__361__verbosity = 0x00000064U;
                                __Vtemp_7 = ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__362__Vfuncout);
                                    }(), __Vfunc_get_full_name__362__Vfuncout);
                                __Vtemp_8 = ([&]() {
                                        VL_NULL_CHECK(__Vtask___VforkTask_2__304__unnamedblk115__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1529)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__364__Vfuncout);
                                    }(), __Vtask_get_full_name__364__Vfuncout);
                                __Vtemp_9 = ([&]() {
                                        VL_NULL_CHECK(__Vtask___VforkTask_2__304__unnamedblk115__DOT__unnamedblk116__DOT__p_phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1529)
                                             ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__365__Vfuncout);
                                    }(), __Vtask_convert2string__365__Vfuncout);
                                __Vtask_uvm_report_info__361__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                                -1,
                                                                                &(__Vtemp_7),
                                                                                32,
                                                                                ([&]() {
                                                        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__363__Vfuncout);
                                                    }(), __Vfunc_get_inst_id__363__Vfuncout)) , VL_SFORMATF_N_NX("Phase '%@' has outstanding objections:\n%@",0,
                                                                                -1,
                                                                                &(__Vtemp_8),
                                                                                -1,
                                                                                &(__Vtemp_9)) ));
                                __Vtask_uvm_report_info__361__id = "PH/TRC/TIMEOUT/OBJCTN"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__366__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                                    = __Vfunc_get__366__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__367__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                                    = __Vtask_get_root__367__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__361__id, __Vtask_uvm_report_info__361__message, __Vtask_uvm_report_info__361__verbosity, __Vtask_uvm_report_info__361__filename, __Vtask_uvm_report_info__361__line, __Vtask_uvm_report_info__361__context_name, (IData)(__Vtask_uvm_report_info__361__report_enabled_checked));
                            }
                        }
                    }
                }
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__369__id = "PH_TIMEOUT"s;
                            __Vfunc_uvm_report_enabled__369__severity = 3U;
                            __Vfunc_uvm_report_enabled__369__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__370__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__370__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__371__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__371__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__369__verbosity, (IData)(__Vfunc_uvm_report_enabled__369__severity), __Vfunc_uvm_report_enabled__369__id, __Vtask_uvm_report_enabled__372__Vfuncout);
                            __Vfunc_uvm_report_enabled__369__Vfuncout 
                                = __Vtask_uvm_report_enabled__372__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__369__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_TIMEOUT"s, VL_SFORMATF_N_NX("Explicit timeout of %0t hit, indicating a probable testbench issue",0,
                                                                                64,
                                                                                VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_2__304____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1535)
                                                                                ->__PVT__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1535)
                                                                                ->__PVT__phase_timeout,
                                                                                -9) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000005ffU, ""s, 1U);
            }
        }
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__374__id = "PH/TRC/EXE/3"s;
                            __Vfunc_uvm_report_enabled__374__severity = 0U;
                            __Vfunc_uvm_report_enabled__374__verbosity = 0x000001f4U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__375__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__375__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__376__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__376__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__374__verbosity, (IData)(__Vfunc_uvm_report_enabled__374__severity), __Vfunc_uvm_report_enabled__374__id, __Vtask_uvm_report_enabled__377__Vfuncout);
                            __Vfunc_uvm_report_enabled__374__Vfuncout 
                                = __Vtask_uvm_report_enabled__377__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__374__Vfuncout))) {
                __Vtask_uvm_report_info__378__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__378__context_name = ""s;
                __Vtask_uvm_report_info__378__line = 0x00000602U;
                __Vtask_uvm_report_info__378__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__378__verbosity = 0x000001f4U;
                __Vtemp_10 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__379__Vfuncout);
                    }(), __Vfunc_get_full_name__379__Vfuncout);
                __Vtask_uvm_report_info__378__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(__Vtemp_10),
                                                                         32,
                                                                         ([&]() {
                                        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__380__Vfuncout);
                                    }(), __Vfunc_get_inst_id__380__Vfuncout)) , "PHASE EXIT TIMEOUT"s));
                __Vtask_uvm_report_info__378__id = "PH/TRC/EXE/3"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__381__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__381__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__382__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__382__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__378__id, __Vtask_uvm_report_info__378__message, __Vtask_uvm_report_info__378__verbosity, __Vtask_uvm_report_info__378__filename, __Vtask_uvm_report_info__378__line, __Vtask_uvm_report_info__378__context_name, (IData)(__Vtask_uvm_report_info__378__report_enabled_checked));
            }
        }
    } else {
        co_await VlForever{};
    }
    __Vfork_5__sync.done("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                         1492);
    vlProcess->state(VlProcess::FINISHED);
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_28> __VDynScope_execute_phase_0, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_28> __Vtask___VforkTask_1__245____VDynScope_execute_phase_0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14> __Vtask___VforkTask_1__245__unnamedblk112__DOT__iter;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask___VforkTask_1__245__unnamedblk112__DOT__cb;
    CData/*0:0*/ __Vtask___VforkTask_1__245__do_ready_to_end;
    __Vtask___VforkTask_1__245__do_ready_to_end = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vtask___VforkTask_1__245__phase_done;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__246__Vfuncout;
    IData/*31:0*/ __Vtask_get_objection_total__247__Vfuncout;
    __Vtask_get_objection_total__247__Vfuncout = 0;
    std::string __Vtask_get_name__248__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__250__Vfuncout;
    __Vfunc_uvm_report_enabled__250__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__250__verbosity;
    __Vfunc_uvm_report_enabled__250__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__250__severity;
    __Vfunc_uvm_report_enabled__250__severity = 0;
    std::string __Vfunc_uvm_report_enabled__250__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__251__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__252__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__253__Vfuncout;
    __Vtask_uvm_report_enabled__253__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__254__id;
    std::string __Vtask_uvm_report_info__254__message;
    IData/*31:0*/ __Vtask_uvm_report_info__254__verbosity;
    __Vtask_uvm_report_info__254__verbosity = 0;
    std::string __Vtask_uvm_report_info__254__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__254__line;
    __Vtask_uvm_report_info__254__line = 0;
    std::string __Vtask_uvm_report_info__254__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__254__report_enabled_checked;
    __Vtask_uvm_report_info__254__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__255__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__256__Vfuncout;
    __Vfunc_get_inst_id__256__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__257__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__258__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__260__Vfuncout;
    __Vfunc_uvm_report_enabled__260__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__260__verbosity;
    __Vfunc_uvm_report_enabled__260__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__260__severity;
    __Vfunc_uvm_report_enabled__260__severity = 0;
    std::string __Vfunc_uvm_report_enabled__260__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__261__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__262__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__263__Vfuncout;
    __Vtask_uvm_report_enabled__263__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__264__id;
    std::string __Vtask_uvm_report_info__264__message;
    IData/*31:0*/ __Vtask_uvm_report_info__264__verbosity;
    __Vtask_uvm_report_info__264__verbosity = 0;
    std::string __Vtask_uvm_report_info__264__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__264__line;
    __Vtask_uvm_report_info__264__line = 0;
    std::string __Vtask_uvm_report_info__264__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__264__report_enabled_checked;
    __Vtask_uvm_report_info__264__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__265__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__266__Vfuncout;
    __Vfunc_get_inst_id__266__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__267__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__268__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__274__Vfuncout;
    __Vfunc_uvm_report_enabled__274__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__274__verbosity;
    __Vfunc_uvm_report_enabled__274__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__274__severity;
    __Vfunc_uvm_report_enabled__274__severity = 0;
    std::string __Vfunc_uvm_report_enabled__274__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__275__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__276__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__277__Vfuncout;
    __Vtask_uvm_report_enabled__277__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__278__id;
    std::string __Vtask_uvm_report_info__278__message;
    IData/*31:0*/ __Vtask_uvm_report_info__278__verbosity;
    __Vtask_uvm_report_info__278__verbosity = 0;
    std::string __Vtask_uvm_report_info__278__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__278__line;
    __Vtask_uvm_report_info__278__line = 0;
    std::string __Vtask_uvm_report_info__278__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__278__report_enabled_checked;
    __Vtask_uvm_report_info__278__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__279__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__280__Vfuncout;
    __Vfunc_get_inst_id__280__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__281__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__282__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__284__Vfuncout;
    __Vfunc_uvm_report_enabled__284__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__284__verbosity;
    __Vfunc_uvm_report_enabled__284__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__284__severity;
    __Vfunc_uvm_report_enabled__284__severity = 0;
    std::string __Vfunc_uvm_report_enabled__284__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__285__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__286__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__287__Vfuncout;
    __Vtask_uvm_report_enabled__287__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__288__id;
    std::string __Vtask_uvm_report_info__288__message;
    IData/*31:0*/ __Vtask_uvm_report_info__288__verbosity;
    __Vtask_uvm_report_info__288__verbosity = 0;
    std::string __Vtask_uvm_report_info__288__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__288__line;
    __Vtask_uvm_report_info__288__line = 0;
    std::string __Vtask_uvm_report_info__288__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__288__report_enabled_checked;
    __Vtask_uvm_report_info__288__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__289__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__290__Vfuncout;
    __Vfunc_get_inst_id__290__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__291__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__292__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_first__295__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase_cb> __Vtask_next__297__Vfuncout;
    IData/*31:0*/ __Vfunc_get_max_ready_to_end_iterations__303__Vfuncout;
    __Vfunc_get_max_ready_to_end_iterations__303__Vfuncout = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_1__245____VDynScope_execute_phase_0 
        = __VDynScope_execute_phase_0;
    __Vtask___VforkTask_1__245__do_ready_to_end = 0;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__246__Vfuncout);
    __Vtask___VforkTask_1__245__phase_done = __Vfunc_get_objection__246__Vfuncout;
    if (((0U != ([&]() {
                        VL_NULL_CHECK(__Vtask___VforkTask_1__245__phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1455)
                 ->__VnoInFunc_get_objection_total(vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_1__245____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1455)
                                                   ->__PVT__top, __Vtask_get_objection_total__247__Vfuncout);
                    }(), __Vtask_get_objection_total__247__Vfuncout)) 
         || ((IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_use_ovm_run_semantic) 
             && ("run"s == ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1456)
                            ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__248__Vfuncout);
                        }(), __Vtask_get_name__248__Vfuncout))))) {
        if ((1U & (~ VL_NULL_CHECK(__Vtask___VforkTask_1__245__phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1457)
                   ->__PVT__m_top_all_dropped))) {
            co_await VL_NULL_CHECK(__Vtask___VforkTask_1__245__phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1458)->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, VL_NULL_CHECK(__Vtask___VforkTask_1__245____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1458)
                                                                                ->__PVT__top);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__250__id = "PH/TRC/EXE/ALLDROP"s;
                        __Vfunc_uvm_report_enabled__250__severity = 0U;
                        __Vfunc_uvm_report_enabled__250__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__251__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__251__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__252__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__252__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__250__verbosity, (IData)(__Vfunc_uvm_report_enabled__250__severity), __Vfunc_uvm_report_enabled__250__id, __Vtask_uvm_report_enabled__253__Vfuncout);
                        __Vfunc_uvm_report_enabled__250__Vfuncout 
                            = __Vtask_uvm_report_enabled__253__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__250__Vfuncout))) {
            __Vtask_uvm_report_info__254__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__254__context_name = ""s;
            __Vtask_uvm_report_info__254__line = 0x000005b3U;
            __Vtask_uvm_report_info__254__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__254__verbosity = 0x000001f4U;
            __Vtemp_1 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__255__Vfuncout);
                }(), __Vfunc_get_full_name__255__Vfuncout);
            __Vtask_uvm_report_info__254__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                   -1,
                                                                   &(__Vtemp_1),
                                                                   32,
                                                                   ([&]() {
                                    this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__256__Vfuncout);
                                }(), __Vfunc_get_inst_id__256__Vfuncout)) , "PHASE EXIT ALL_DROPPED"s));
            __Vtask_uvm_report_info__254__id = "PH/TRC/EXE/ALLDROP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__257__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__257__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__258__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__258__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__254__id, __Vtask_uvm_report_info__254__message, __Vtask_uvm_report_info__254__verbosity, __Vtask_uvm_report_info__254__filename, __Vtask_uvm_report_info__254__line, __Vtask_uvm_report_info__254__context_name, (IData)(__Vtask_uvm_report_info__254__report_enabled_checked));
        }
    } else if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__260__id = "PH/TRC/SKIP"s;
                        __Vfunc_uvm_report_enabled__260__severity = 0U;
                        __Vfunc_uvm_report_enabled__260__verbosity = 0x00000064U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__261__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__261__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__262__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__262__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__260__verbosity, (IData)(__Vfunc_uvm_report_enabled__260__severity), __Vfunc_uvm_report_enabled__260__id, __Vtask_uvm_report_enabled__263__Vfuncout);
                        __Vfunc_uvm_report_enabled__260__Vfuncout 
                            = __Vtask_uvm_report_enabled__263__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__260__Vfuncout))) {
            __Vtask_uvm_report_info__264__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__264__context_name = ""s;
            __Vtask_uvm_report_info__264__line = 0x000005b6U;
            __Vtask_uvm_report_info__264__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__264__verbosity = 0x00000064U;
            __Vtemp_2 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__265__Vfuncout);
                }(), __Vfunc_get_full_name__265__Vfuncout);
            __Vtask_uvm_report_info__264__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                   -1,
                                                                   &(__Vtemp_2),
                                                                   32,
                                                                   ([&]() {
                                    this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__266__Vfuncout);
                                }(), __Vfunc_get_inst_id__266__Vfuncout)) , "No objections raised, skipping phase"s));
            __Vtask_uvm_report_info__264__id = "PH/TRC/SKIP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__267__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__267__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__268__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__268__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__264__id, __Vtask_uvm_report_info__264__message, __Vtask_uvm_report_info__264__verbosity, __Vtask_uvm_report_info__264__filename, __Vtask_uvm_report_info__264__line, __Vtask_uvm_report_info__264__context_name, (IData)(__Vtask_uvm_report_info__264__report_enabled_checked));
        }
    }
    co_await this->__VnoInFunc_wait_for_self_and_siblings_to_drop(vlProcess, vlSymsp);
    __Vtask___VforkTask_1__245__do_ready_to_end = 1U;
    while (__Vtask___VforkTask_1__245__do_ready_to_end) {
        this->__Vtask_uvm_wait_for_nba_region__271____VDynScope_uvm_wait_for_nba_region_0 
            = VL_NEW(Vuart_example_uvm_pkg__03a__03a__VDynScope_24, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        CData/*0:0*/ __VdynTrigger_ha1fc9392__0;
        __VdynTrigger_ha1fc9392__0 = 0;
        __VdynTrigger_ha1fc9392__0 = 0U;
        this->__Vtrigprevexpr_ha3f2f673__0 = VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__271____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
            ->__PVT__nba;
        while ((1U & (~ (IData)(__VdynTrigger_ha1fc9392__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@( uvm_pkg::uvm_phase.__Vtask_uvm_wait_for_nba_region__271____VDynScope_uvm_wait_for_nba_region_0.nba)", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                         430);
            __VdynTrigger_ha1fc9392__0 = (VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__271____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
                                          ->__PVT__nba 
                                          != this->__Vtrigprevexpr_ha3f2f673__0);
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_ha1fc9392__0);
            this->__Vtrigprevexpr_ha3f2f673__0 = VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__271____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
                ->__PVT__nba;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@( uvm_pkg::uvm_phase.__Vtask_uvm_wait_for_nba_region__271____VDynScope_uvm_wait_for_nba_region_0.nba)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     430);
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__274__id = "PH_READY_TO_END"s;
                        __Vfunc_uvm_report_enabled__274__severity = 0U;
                        __Vfunc_uvm_report_enabled__274__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__275__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__275__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__276__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__276__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__274__verbosity, (IData)(__Vfunc_uvm_report_enabled__274__severity), __Vfunc_uvm_report_enabled__274__id, __Vtask_uvm_report_enabled__277__Vfuncout);
                        __Vfunc_uvm_report_enabled__274__Vfuncout 
                            = __Vtask_uvm_report_enabled__277__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__274__Vfuncout))) {
            __Vtask_uvm_report_info__278__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__278__context_name = ""s;
            __Vtask_uvm_report_info__278__line = 0x000005c2U;
            __Vtask_uvm_report_info__278__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__278__verbosity = 0x000001f4U;
            __Vtemp_3 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__279__Vfuncout);
                }(), __Vfunc_get_full_name__279__Vfuncout);
            __Vtask_uvm_report_info__278__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                   -1,
                                                                   &(__Vtemp_3),
                                                                   32,
                                                                   ([&]() {
                                    this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__280__Vfuncout);
                                }(), __Vfunc_get_inst_id__280__Vfuncout)) , "PHASE READY TO END"s));
            __Vtask_uvm_report_info__278__id = "PH_READY_TO_END"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__281__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__281__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__282__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__282__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__278__id, __Vtask_uvm_report_info__278__message, __Vtask_uvm_report_info__278__verbosity, __Vtask_uvm_report_info__278__filename, __Vtask_uvm_report_info__278__line, __Vtask_uvm_report_info__278__context_name, (IData)(__Vtask_uvm_report_info__278__report_enabled_checked));
        }
        this->__PVT__m_ready_to_end_count = ((IData)(1U) 
                                             + this->__PVT__m_ready_to_end_count);
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__284__id = "PH_READY_TO_END_CB"s;
                            __Vfunc_uvm_report_enabled__284__severity = 0U;
                            __Vfunc_uvm_report_enabled__284__verbosity = 0x0000012cU;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__285__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__285__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__286__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__286__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__284__verbosity, (IData)(__Vfunc_uvm_report_enabled__284__severity), __Vfunc_uvm_report_enabled__284__id, __Vtask_uvm_report_enabled__287__Vfuncout);
                            __Vfunc_uvm_report_enabled__284__Vfuncout 
                                = __Vtask_uvm_report_enabled__287__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__284__Vfuncout))) {
                __Vtask_uvm_report_info__288__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__288__context_name = ""s;
                __Vtask_uvm_report_info__288__line = 0x000005c5U;
                __Vtask_uvm_report_info__288__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__288__verbosity = 0x0000012cU;
                __Vtemp_4 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__289__Vfuncout);
                    }(), __Vfunc_get_full_name__289__Vfuncout);
                __Vtask_uvm_report_info__288__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(__Vtemp_4),
                                                                         32,
                                                                         ([&]() {
                                        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__290__Vfuncout);
                                    }(), __Vfunc_get_inst_id__290__Vfuncout)) , "CALLING READY_TO_END CB"s));
                __Vtask_uvm_report_info__288__id = "PH_READY_TO_END_CB"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__291__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__291__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__292__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__292__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__288__id, __Vtask_uvm_report_info__288__message, __Vtask_uvm_report_info__288__verbosity, __Vtask_uvm_report_info__288__filename, __Vtask_uvm_report_info__288__line, __Vtask_uvm_report_info__288__context_name, (IData)(__Vtask_uvm_report_info__288__report_enabled_checked));
            }
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_1__245____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1478)
                      ->__PVT__state_chg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1478)->__PVT__m_prev_state 
            = this->__PVT__m_state;
        this->__PVT__m_state = 0x00000020U;
        __Vtask___VforkTask_1__245__unnamedblk112__DOT__iter 
            = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_callback_iter__Tz13_TBz14, vlSymsp, 
                     VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
        VL_NULL_CHECK(__Vtask___VforkTask_1__245__unnamedblk112__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1480)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__295__Vfuncout);
        __Vtask___VforkTask_1__245__unnamedblk112__DOT__cb 
            = __Vtask_first__295__Vfuncout;
        while ((VlNull{} != __Vtask___VforkTask_1__245__unnamedblk112__DOT__cb)) {
            VL_NULL_CHECK(__Vtask___VforkTask_1__245__unnamedblk112__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1480)->__VnoInFunc_phase_state_change(vlSymsp, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, VL_NULL_CHECK(__Vtask___VforkTask_1__245____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1480)
                                                                                ->__PVT__state_chg);
            VL_NULL_CHECK(__Vtask___VforkTask_1__245__unnamedblk112__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1480)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__297__Vfuncout);
            __Vtask___VforkTask_1__245__unnamedblk112__DOT__cb 
                = __Vtask_next__297__Vfuncout;
        }
        if ((VlNull{} != this->__PVT__m_imp)) {
            VL_NULL_CHECK(this->__PVT__m_imp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1482)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_1__245____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1482)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, 0x00000020U);
        }
        this->__Vtask_uvm_wait_for_nba_region__299____VDynScope_uvm_wait_for_nba_region_0 
            = VL_NEW(Vuart_example_uvm_pkg__03a__03a__VDynScope_24, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        CData/*0:0*/ __VdynTrigger_h9ea10390__0;
        __VdynTrigger_h9ea10390__0 = 0;
        __VdynTrigger_h9ea10390__0 = 0U;
        this->__Vtrigprevexpr_ha85e67e5__0 = VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__299____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
            ->__PVT__nba;
        while ((1U & (~ (IData)(__VdynTrigger_h9ea10390__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@( uvm_pkg::uvm_phase.__Vtask_uvm_wait_for_nba_region__299____VDynScope_uvm_wait_for_nba_region_0.nba)", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                         430);
            __VdynTrigger_h9ea10390__0 = (VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__299____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
                                          ->__PVT__nba 
                                          != this->__Vtrigprevexpr_ha85e67e5__0);
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h9ea10390__0);
            this->__Vtrigprevexpr_ha85e67e5__0 = VL_NULL_CHECK(this->__Vtask_uvm_wait_for_nba_region__299____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 430)
                ->__PVT__nba;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@( uvm_pkg::uvm_phase.__Vtask_uvm_wait_for_nba_region__299____VDynScope_uvm_wait_for_nba_region_0.nba)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     430);
        co_await this->__VnoInFunc_wait_for_self_and_siblings_to_drop(vlProcess, vlSymsp);
        __Vtask___VforkTask_1__245__do_ready_to_end 
            = ((0x00000010U == this->__PVT__m_state) 
               & (this->__PVT__m_ready_to_end_count 
                  < ([&]() {
                        this->__VnoInFunc_get_max_ready_to_end_iterations(vlSymsp, __Vfunc_get_max_ready_to_end_iterations__303__Vfuncout);
                    }(), __Vfunc_get_max_ready_to_end_iterations__303__Vfuncout)));
    }
    __Vfork_5__sync.done("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                         1450);
    vlProcess->state(VlProcess::FINISHED);
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0\n"); );
    // Body
    VL_KEEP_THIS;
    this->__Vtask___VforkTask_0__301____VDynScope_uvm_wait_for_nba_region_0 
        = this->__Vtask_uvm_wait_for_nba_region__299____VDynScope_uvm_wait_for_nba_region_0;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_h284b2a58__0;
        __Vintraval_h284b2a58__0 = 0;
        __Vintraval_h284b2a58__0 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(vlSymsp, __Vintraval_h284b2a58__0);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
    co_return;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h284b2a58__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_8__0____Vfork_9__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__6;
    __VdynTrigger_h362143b5__6 = 0;
    __VdynTrigger_h362143b5__6 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__6)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        __VdynTrigger_h362143b5__6 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__6);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 429);
    VL_NULL_CHECK(this->__Vtask___VforkTask_0__301____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 429)->__PVT__nba 
        = __Vintraval_h284b2a58__0;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0\n"); );
    // Body
    VL_KEEP_THIS;
    this->__Vtask___VforkTask_0__273____VDynScope_uvm_wait_for_nba_region_0 
        = this->__Vtask_uvm_wait_for_nba_region__271____VDynScope_uvm_wait_for_nba_region_0;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_h39edc3b2__0;
        __Vintraval_h39edc3b2__0 = 0;
        __Vintraval_h39edc3b2__0 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(vlSymsp, __Vintraval_h39edc3b2__0);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
    co_return;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h39edc3b2__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__1____Vfork_6__0____Vfork_7__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__5;
    __VdynTrigger_h362143b5__5 = 0;
    __VdynTrigger_h362143b5__5 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__5)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        __VdynTrigger_h362143b5__5 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__5);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 429);
    VL_NULL_CHECK(this->__Vtask___VforkTask_0__273____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 429)->__PVT__nba 
        = __Vintraval_h39edc3b2__0;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_4__0____Vfork_5__0\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__235__Vfuncout;
    __Vfunc_uvm_report_enabled__235__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__235__verbosity;
    __Vfunc_uvm_report_enabled__235__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__235__severity;
    __Vfunc_uvm_report_enabled__235__severity = 0;
    std::string __Vfunc_uvm_report_enabled__235__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__236__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__237__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__238__Vfuncout;
    __Vtask_uvm_report_enabled__238__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__239__id;
    std::string __Vtask_uvm_report_info__239__message;
    IData/*31:0*/ __Vtask_uvm_report_info__239__verbosity;
    __Vtask_uvm_report_info__239__verbosity = 0;
    std::string __Vtask_uvm_report_info__239__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__239__line;
    __Vtask_uvm_report_info__239__line = 0;
    std::string __Vtask_uvm_report_info__239__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__239__report_enabled_checked;
    __Vtask_uvm_report_info__239__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__240__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__241__Vfuncout;
    __Vfunc_get_inst_id__241__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__242__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__243__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__m_premature_end)))) {
        CData/*0:0*/ __VdynTrigger_hb698ed71__0;
        __VdynTrigger_hb698ed71__0 = 0;
        __VdynTrigger_hb698ed71__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hb698ed71__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] uvm_pkg::uvm_phase.m_premature_end)", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         1445);
            __VdynTrigger_hb698ed71__0 = this->__PVT__m_premature_end;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb698ed71__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] uvm_pkg::uvm_phase.m_premature_end)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                     1445);
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__235__id = "PH/TRC/EXE/JUMP"s;
                    __Vfunc_uvm_report_enabled__235__severity = 0U;
                    __Vfunc_uvm_report_enabled__235__verbosity = 0x000001f4U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__236__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__236__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__237__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__237__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__235__verbosity, (IData)(__Vfunc_uvm_report_enabled__235__severity), __Vfunc_uvm_report_enabled__235__id, __Vtask_uvm_report_enabled__238__Vfuncout);
                    __Vfunc_uvm_report_enabled__235__Vfuncout 
                        = __Vtask_uvm_report_enabled__238__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__235__Vfuncout))) {
        __Vtask_uvm_report_info__239__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__239__context_name = ""s;
        __Vtask_uvm_report_info__239__line = 0x000005a6U;
        __Vtask_uvm_report_info__239__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_info__239__verbosity = 0x000001f4U;
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__240__Vfuncout);
            }(), __Vfunc_get_full_name__240__Vfuncout);
        __Vtask_uvm_report_info__239__message = VL_CVT_PACK_STR_NN(
                                                                   VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                32,
                                                                                ([&]() {
                                this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__241__Vfuncout);
                            }(), __Vfunc_get_inst_id__241__Vfuncout)) , "PHASE EXIT ON JUMP REQUEST"s));
        __Vtask_uvm_report_info__239__id = "PH/TRC/EXE/JUMP"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__242__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__242__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__243__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__243__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__239__id, __Vtask_uvm_report_info__239__message, __Vtask_uvm_report_info__239__verbosity, __Vtask_uvm_report_info__239__filename, __Vtask_uvm_report_info__239__line, __Vtask_uvm_report_info__239__context_name, (IData)(__Vtask_uvm_report_info__239__report_enabled_checked));
    }
    __Vfork_5__sync.done("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                         1444);
    vlProcess->state(VlProcess::FINISHED);
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0\n"); );
    // Body
    VL_KEEP_THIS;
    this->__Vtask___VforkTask_0__234____VDynScope_uvm_wait_for_nba_region_0 
        = this->__Vtask_uvm_wait_for_nba_region__232____VDynScope_uvm_wait_for_nba_region_0;
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    {
        IData/*31:0*/ __Vintraval_h67859c3a__0;
        __Vintraval_h67859c3a__0 = 0;
        __Vintraval_h67859c3a__0 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
        this->__VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(vlSymsp, __Vintraval_h67859c3a__0);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
    co_return;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h67859c3a__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_2__0____Vfork_3__0\n"); );
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h362143b5__4;
    __VdynTrigger_h362143b5__4 = 0;
    __VdynTrigger_h362143b5__4 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h362143b5__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        __VdynTrigger_h362143b5__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h362143b5__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                     429);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 
                                                 429);
    VL_NULL_CHECK(this->__Vtask___VforkTask_0__234____VDynScope_uvm_wait_for_nba_region_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 429)->__PVT__nba 
        = __Vintraval_h67859c3a__0;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_1__0(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_28> __VDynScope_execute_phase_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_execute_phase____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_28> __Vtask___VforkTask_0__229____VDynScope_execute_phase_0;
    VlClassRef<Vuart_example_std__03a__03aprocess> __Vfunc_self__230__Vfuncout;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__229____VDynScope_execute_phase_0 
        = __VDynScope_execute_phase_0;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__230__Vfuncout);
    this->__PVT__m_phase_proc = __Vfunc_self__230__Vfuncout;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__229____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1429)
                  ->__PVT__task_phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1429)->__VnoInFunc_traverse(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__229____VDynScope_execute_phase_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1429)
                                                                                ->__PVT__top, 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}, 0x00000010U);
    co_await VlForever{};
    vlProcess->state(VlProcess::FINISHED);
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_predecessor_nodes(Vuart_example__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>> &pred) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_predecessor_nodes\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_phase_type__480__Vfuncout;
    __Vtask_get_phase_type__480__Vfuncout = 0;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk124__DOT__p;
    CData/*0:0*/ unnamedblk124__DOT__p__Vfirst;
    unnamedblk124__DOT__p__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk125__DOT__p;
    CData/*0:0*/ unnamedblk125__DOT__p__Vfirst;
    unnamedblk125__DOT__p__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk125__DOT__unnamedblk126__DOT__next_p;
    CData/*0:0*/ unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst;
    unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk127__DOT__p;
    CData/*0:0*/ unnamedblk127__DOT__p__Vfirst;
    unnamedblk127__DOT__p__Vfirst = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    CData/*0:0*/ done;
    done = 0;
    VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> predecessors;
    predecessors.atDefault() = 0;
    IData/*31:0*/ idx;
    idx = 0;
    if ((0U != this->__PVT__m_predecessors.first(unnamedblk124__DOT__p))) {
        unnamedblk124__DOT__p__Vfirst = 1U;
        while (((IData)(unnamedblk124__DOT__p__Vfirst) 
                || (0U != this->__PVT__m_predecessors.next(unnamedblk124__DOT__p)))) {
            unnamedblk124__DOT__p__Vfirst = 0U;
            predecessors.at(unnamedblk124__DOT__p) = 1U;
        }
    }
    do {
        done = 1U;
        if ((0U != predecessors.first(unnamedblk125__DOT__p))) {
            unnamedblk125__DOT__p__Vfirst = 1U;
            while (((IData)(unnamedblk125__DOT__p__Vfirst) 
                    || (0U != predecessors.next(unnamedblk125__DOT__p)))) {
                unnamedblk125__DOT__p__Vfirst = 0U;
                if ((1U != ([&]() {
                                VL_NULL_CHECK(unnamedblk125__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1710)
                            ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__480__Vfuncout);
                            }(), __Vtask_get_phase_type__480__Vfuncout))) {
                    predecessors.erase(unnamedblk125__DOT__p);
                    if ((0U != VL_NULL_CHECK(unnamedblk125__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1712)
                         ->__PVT__m_predecessors.first(unnamedblk125__DOT__unnamedblk126__DOT__next_p))) {
                        unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst = 1U;
                        while (((IData)(unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst) 
                                || (0U != VL_NULL_CHECK(unnamedblk125__DOT__p, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1712)
                                    ->__PVT__m_predecessors.next(unnamedblk125__DOT__unnamedblk126__DOT__next_p)))) {
                            unnamedblk125__DOT__unnamedblk126__DOT__next_p__Vfirst = 0U;
                            predecessors.at(unnamedblk125__DOT__unnamedblk126__DOT__next_p) = 1U;
                        }
                    }
                    done = 0U;
                }
            }
        }
    } while ((1U & (~ (IData)(done))));
    pred.renew(predecessors.size());
    if ((0U != predecessors.first(unnamedblk127__DOT__p))) {
        unnamedblk127__DOT__p__Vfirst = 1U;
        while (((IData)(unnamedblk127__DOT__p__Vfirst) 
                || (0U != predecessors.next(unnamedblk127__DOT__p)))) {
            unnamedblk127__DOT__p__Vfirst = 0U;
            __Vincrement1 = idx;
            idx = ((IData)(1U) + idx);
            pred.atWrite(__Vincrement1) = unnamedblk127__DOT__p;
        }
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_successor_nodes(Vuart_example__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>> &succ) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_adjacent_successor_nodes\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_phase_type__481__Vfuncout;
    __Vtask_get_phase_type__481__Vfuncout = 0;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk128__DOT__s;
    CData/*0:0*/ unnamedblk128__DOT__s__Vfirst;
    unnamedblk128__DOT__s__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk129__DOT__s;
    CData/*0:0*/ unnamedblk129__DOT__s__Vfirst;
    unnamedblk129__DOT__s__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk129__DOT__unnamedblk130__DOT__next_s;
    CData/*0:0*/ unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst;
    unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk131__DOT__s;
    CData/*0:0*/ unnamedblk131__DOT__s__Vfirst;
    unnamedblk131__DOT__s__Vfirst = 0;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    CData/*0:0*/ done;
    done = 0;
    VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> successors;
    successors.atDefault() = 0;
    IData/*31:0*/ idx;
    idx = 0;
    if ((0U != this->__PVT__m_successors.first(unnamedblk128__DOT__s))) {
        unnamedblk128__DOT__s__Vfirst = 1U;
        while (((IData)(unnamedblk128__DOT__s__Vfirst) 
                || (0U != this->__PVT__m_successors.next(unnamedblk128__DOT__s)))) {
            unnamedblk128__DOT__s__Vfirst = 0U;
            successors.at(unnamedblk128__DOT__s) = 1U;
        }
    }
    do {
        done = 1U;
        if ((0U != successors.first(unnamedblk129__DOT__s))) {
            unnamedblk129__DOT__s__Vfirst = 1U;
            while (((IData)(unnamedblk129__DOT__s__Vfirst) 
                    || (0U != successors.next(unnamedblk129__DOT__s)))) {
                unnamedblk129__DOT__s__Vfirst = 0U;
                if ((1U != ([&]() {
                                VL_NULL_CHECK(unnamedblk129__DOT__s, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1739)
                            ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__481__Vfuncout);
                            }(), __Vtask_get_phase_type__481__Vfuncout))) {
                    successors.erase(unnamedblk129__DOT__s);
                    if ((0U != VL_NULL_CHECK(unnamedblk129__DOT__s, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1741)
                         ->__PVT__m_successors.first(unnamedblk129__DOT__unnamedblk130__DOT__next_s))) {
                        unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst = 1U;
                        while (((IData)(unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst) 
                                || (0U != VL_NULL_CHECK(unnamedblk129__DOT__s, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1741)
                                    ->__PVT__m_successors.next(unnamedblk129__DOT__unnamedblk130__DOT__next_s)))) {
                            unnamedblk129__DOT__unnamedblk130__DOT__next_s__Vfirst = 0U;
                            successors.at(unnamedblk129__DOT__unnamedblk130__DOT__next_s) = 1U;
                        }
                    }
                    done = 0U;
                }
            }
        }
    } while ((1U & (~ (IData)(done))));
    succ.renew(successors.size());
    if ((0U != successors.first(unnamedblk131__DOT__s))) {
        unnamedblk131__DOT__s__Vfirst = 1U;
        while (((IData)(unnamedblk131__DOT__s__Vfirst) 
                || (0U != successors.next(unnamedblk131__DOT__s)))) {
            unnamedblk131__DOT__s__Vfirst = 0U;
            __Vincrement2 = idx;
            idx = ((IData)(1U) + idx);
            succ.atWrite(__Vincrement2) = unnamedblk131__DOT__s;
        }
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors_for_successors(Vuart_example__Syms* __restrict vlSymsp, VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> &pred_of_succ) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_predecessors_for_successors\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_phase_type__483__Vfuncout;
    __Vtask_get_phase_type__483__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk132__DOT__s;
    unnamedblk132__DOT__s = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk132__DOT__unnamedblk133__DOT__pred;
    CData/*0:0*/ unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst;
    unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk134__DOT__pred;
    CData/*0:0*/ unnamedblk134__DOT__pred__Vfirst;
    unnamedblk134__DOT__pred__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk134__DOT__unnamedblk135__DOT__next_pred;
    CData/*0:0*/ unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst;
    unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst = 0;
    CData/*0:0*/ done;
    done = 0;
    VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>> successors;
    this->__VnoInFunc_get_adjacent_successor_nodes(vlSymsp, successors);
    unnamedblk132__DOT__s = 0U;
    while (VL_LTS_III(32, unnamedblk132__DOT__s, successors.size())) {
        if ((0U != VL_NULL_CHECK(successors.at(unnamedblk132__DOT__s), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1764)
             ->__PVT__m_predecessors.first(unnamedblk132__DOT__unnamedblk133__DOT__pred))) {
            unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst = 1U;
            while (((IData)(unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst) 
                    || (0U != VL_NULL_CHECK(successors.at(unnamedblk132__DOT__s), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1764)
                        ->__PVT__m_predecessors.next(unnamedblk132__DOT__unnamedblk133__DOT__pred)))) {
                unnamedblk132__DOT__unnamedblk133__DOT__pred__Vfirst = 0U;
                pred_of_succ.at(unnamedblk132__DOT__unnamedblk133__DOT__pred) = 1U;
            }
        }
        unnamedblk132__DOT__s = ((IData)(1U) + unnamedblk132__DOT__s);
    }
    do {
        done = 1U;
        if ((0U != pred_of_succ.first(unnamedblk134__DOT__pred))) {
            unnamedblk134__DOT__pred__Vfirst = 1U;
            while (((IData)(unnamedblk134__DOT__pred__Vfirst) 
                    || (0U != pred_of_succ.next(unnamedblk134__DOT__pred)))) {
                unnamedblk134__DOT__pred__Vfirst = 0U;
                if ((1U != ([&]() {
                                VL_NULL_CHECK(unnamedblk134__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1772)
                            ->__VnoInFunc_get_phase_type(vlSymsp, __Vtask_get_phase_type__483__Vfuncout);
                            }(), __Vtask_get_phase_type__483__Vfuncout))) {
                    pred_of_succ.erase(unnamedblk134__DOT__pred);
                    if ((0U != VL_NULL_CHECK(unnamedblk134__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1774)
                         ->__PVT__m_predecessors.first(unnamedblk134__DOT__unnamedblk135__DOT__next_pred))) {
                        unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst = 1U;
                        while (((IData)(unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst) 
                                || (0U != VL_NULL_CHECK(unnamedblk134__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1774)
                                    ->__PVT__m_predecessors.next(unnamedblk134__DOT__unnamedblk135__DOT__next_pred)))) {
                            unnamedblk134__DOT__unnamedblk135__DOT__next_pred__Vfirst = 0U;
                            pred_of_succ.at(unnamedblk134__DOT__unnamedblk135__DOT__next_pred) = 1U;
                        }
                    }
                    done = 0U;
                }
            }
        }
    } while ((1U & (~ (IData)(done))));
    pred_of_succ.erase(VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_wait_for_pred(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_wait_for_pred\n"); );
    // Locals
    VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __Vtask_get_predecessors_for_successors__484__pred_of_succ;
    __Vtask_get_predecessors_for_successors__484__pred_of_succ.atDefault() = 0;
    std::string __Vtask_get_name__485__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__486__Vfuncout;
    __Vtask_get_inst_id__486__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__487__Vfuncout;
    __Vfunc_uvm_report_enabled__487__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__487__verbosity;
    __Vfunc_uvm_report_enabled__487__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__487__severity;
    __Vfunc_uvm_report_enabled__487__severity = 0;
    std::string __Vfunc_uvm_report_enabled__487__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__488__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__489__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__490__Vfuncout;
    __Vtask_uvm_report_enabled__490__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__491__id;
    std::string __Vtask_uvm_report_info__491__message;
    IData/*31:0*/ __Vtask_uvm_report_info__491__verbosity;
    __Vtask_uvm_report_info__491__verbosity = 0;
    std::string __Vtask_uvm_report_info__491__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__491__line;
    __Vtask_uvm_report_info__491__line = 0;
    std::string __Vtask_uvm_report_info__491__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__491__report_enabled_checked;
    __Vtask_uvm_report_info__491__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__492__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__493__Vfuncout;
    __Vfunc_get_inst_id__493__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__494__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__495__Vfuncout;
    std::string __Vtask_get_name__498__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__499__Vfuncout;
    __Vtask_get_inst_id__499__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__500__Vfuncout;
    __Vfunc_uvm_report_enabled__500__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__500__verbosity;
    __Vfunc_uvm_report_enabled__500__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__500__severity;
    __Vfunc_uvm_report_enabled__500__severity = 0;
    std::string __Vfunc_uvm_report_enabled__500__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__501__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__502__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__503__Vfuncout;
    __Vtask_uvm_report_enabled__503__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__504__id;
    std::string __Vtask_uvm_report_info__504__message;
    IData/*31:0*/ __Vtask_uvm_report_info__504__verbosity;
    __Vtask_uvm_report_info__504__verbosity = 0;
    std::string __Vtask_uvm_report_info__504__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__504__line;
    __Vtask_uvm_report_info__504__line = 0;
    std::string __Vtask_uvm_report_info__504__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__504__report_enabled_checked;
    __Vtask_uvm_report_info__504__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__505__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__506__Vfuncout;
    __Vfunc_get_inst_id__506__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__507__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__508__Vfuncout;
    std::string __Vtask_get_full_name__510__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__511__Vfuncout;
    __Vfunc_uvm_report_enabled__511__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__511__verbosity;
    __Vfunc_uvm_report_enabled__511__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__511__severity;
    __Vfunc_uvm_report_enabled__511__severity = 0;
    std::string __Vfunc_uvm_report_enabled__511__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__512__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__513__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__514__Vfuncout;
    __Vtask_uvm_report_enabled__514__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__515__id;
    std::string __Vtask_uvm_report_info__515__message;
    IData/*31:0*/ __Vtask_uvm_report_info__515__verbosity;
    __Vtask_uvm_report_info__515__verbosity = 0;
    std::string __Vtask_uvm_report_info__515__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__515__line;
    __Vtask_uvm_report_info__515__line = 0;
    std::string __Vtask_uvm_report_info__515__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__515__report_enabled_checked;
    __Vtask_uvm_report_info__515__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__516__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__517__Vfuncout;
    __Vfunc_get_inst_id__517__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__518__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__519__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__521__Vfuncout;
    __Vfunc_uvm_report_enabled__521__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__521__verbosity;
    __Vfunc_uvm_report_enabled__521__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__521__severity;
    __Vfunc_uvm_report_enabled__521__severity = 0;
    std::string __Vfunc_uvm_report_enabled__521__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__522__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__523__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__524__Vfuncout;
    __Vtask_uvm_report_enabled__524__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__525__id;
    std::string __Vtask_uvm_report_info__525__message;
    IData/*31:0*/ __Vtask_uvm_report_info__525__verbosity;
    __Vtask_uvm_report_info__525__verbosity = 0;
    std::string __Vtask_uvm_report_info__525__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__525__line;
    __Vtask_uvm_report_info__525__line = 0;
    std::string __Vtask_uvm_report_info__525__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__525__report_enabled_checked;
    __Vtask_uvm_report_info__525__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__526__Vfuncout;
    IData/*31:0*/ __Vfunc_get_inst_id__527__Vfuncout;
    __Vfunc_get_inst_id__527__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__528__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__529__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk136__DOT__sibling;
    CData/*0:0*/ unnamedblk136__DOT__sibling__Vfirst;
    unnamedblk136__DOT__sibling__Vfirst = 0;
    std::string unnamedblk136__DOT__unnamedblk137__DOT__s;
    std::string unnamedblk136__DOT__unnamedblk138__DOT__s;
    std::string unnamedblk139__DOT__s;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk139__DOT__unnamedblk140__DOT__pred;
    CData/*0:0*/ unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst;
    unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst = 0;
    VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> pred_of_succ;
    pred_of_succ.atDefault() = 0;
    this->__VnoInFunc_get_predecessors_for_successors(vlSymsp, __Vtask_get_predecessors_for_successors__484__pred_of_succ);
    pred_of_succ = __Vtask_get_predecessors_for_successors__484__pred_of_succ;
    if ((0U != pred_of_succ.first(unnamedblk136__DOT__sibling))) {
        unnamedblk136__DOT__sibling__Vfirst = 1U;
        while (((IData)(unnamedblk136__DOT__sibling__Vfirst) 
                || (0U != pred_of_succ.next(unnamedblk136__DOT__sibling)))) {
            unnamedblk136__DOT__sibling__Vfirst = 0U;
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1802)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__485__Vfuncout);
                    }(), __Vtask_get_name__485__Vfuncout);
                __Vtemp_2 = Vuart_example___024unit::__Venumtab_enum_name25
                    .at(VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1802)
                        ->__PVT__m_state);
                unnamedblk136__DOT__unnamedblk137__DOT__s 
                    = VL_SFORMATF_N_NX("Waiting for phase '%@' (%0d) to be READY_TO_END. Current state is %@",0,
                                       -1,&(__Vtemp_1),
                                       32,([&]() {
                                VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1802)
                                           ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__486__Vfuncout);
                            }(), __Vtask_get_inst_id__486__Vfuncout),
                                       -1,&(__Vtemp_2)) ;
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__487__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                                __Vfunc_uvm_report_enabled__487__severity = 0U;
                                __Vfunc_uvm_report_enabled__487__verbosity = 0x0000012cU;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__488__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__488__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__489__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__489__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__487__verbosity, (IData)(__Vfunc_uvm_report_enabled__487__severity), __Vfunc_uvm_report_enabled__487__id, __Vtask_uvm_report_enabled__490__Vfuncout);
                                __Vfunc_uvm_report_enabled__487__Vfuncout 
                                    = __Vtask_uvm_report_enabled__490__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__487__Vfuncout))) {
                    __Vtask_uvm_report_info__491__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__491__context_name = ""s;
                    __Vtask_uvm_report_info__491__line = 0x0000070bU;
                    __Vtask_uvm_report_info__491__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__491__verbosity = 0x0000012cU;
                    __Vtemp_3 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__492__Vfuncout);
                        }(), __Vfunc_get_full_name__492__Vfuncout);
                    __Vtask_uvm_report_info__491__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__Vtemp_3),
                                                                             32,
                                                                             ([&]() {
                                            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__493__Vfuncout);
                                        }(), __Vfunc_get_inst_id__493__Vfuncout)) , unnamedblk136__DOT__unnamedblk137__DOT__s));
                    __Vtask_uvm_report_info__491__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__494__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__494__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__495__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__495__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__491__id, __Vtask_uvm_report_info__491__message, __Vtask_uvm_report_info__491__verbosity, __Vtask_uvm_report_info__491__filename, __Vtask_uvm_report_info__491__line, __Vtask_uvm_report_info__491__context_name, (IData)(__Vtask_uvm_report_info__491__report_enabled_checked));
                }
            }
            co_await VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1806)->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 0x00000020U, 5U);
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
                __Vtemp_4 = ([&]() {
                        VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1811)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__498__Vfuncout);
                    }(), __Vtask_get_name__498__Vfuncout);
                unnamedblk136__DOT__unnamedblk138__DOT__s 
                    = VL_SFORMATF_N_NX("Phase '%@' (%0d) is now READY_TO_END. Releasing phase",0,
                                       -1,&(__Vtemp_4),
                                       32,([&]() {
                                VL_NULL_CHECK(unnamedblk136__DOT__sibling, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1811)
                                           ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__499__Vfuncout);
                            }(), __Vtask_get_inst_id__499__Vfuncout)) ;
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__500__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                                __Vfunc_uvm_report_enabled__500__severity = 0U;
                                __Vfunc_uvm_report_enabled__500__verbosity = 0x0000012cU;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__501__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__501__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__502__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__502__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__500__verbosity, (IData)(__Vfunc_uvm_report_enabled__500__severity), __Vfunc_uvm_report_enabled__500__id, __Vtask_uvm_report_enabled__503__Vfuncout);
                                __Vfunc_uvm_report_enabled__500__Vfuncout 
                                    = __Vtask_uvm_report_enabled__503__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__500__Vfuncout))) {
                    __Vtask_uvm_report_info__504__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__504__context_name = ""s;
                    __Vtask_uvm_report_info__504__line = 0x00000714U;
                    __Vtask_uvm_report_info__504__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__504__verbosity = 0x0000012cU;
                    __Vtemp_5 = ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__505__Vfuncout);
                        }(), __Vfunc_get_full_name__505__Vfuncout);
                    __Vtask_uvm_report_info__504__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                             -1,
                                                                             &(__Vtemp_5),
                                                                             32,
                                                                             ([&]() {
                                            this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__506__Vfuncout);
                                        }(), __Vfunc_get_inst_id__506__Vfuncout)) , unnamedblk136__DOT__unnamedblk138__DOT__s));
                    __Vtask_uvm_report_info__504__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__507__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__507__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__508__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__508__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__504__id, __Vtask_uvm_report_info__504__message, __Vtask_uvm_report_info__504__verbosity, __Vtask_uvm_report_info__504__filename, __Vtask_uvm_report_info__504__line, __Vtask_uvm_report_info__504__context_name, (IData)(__Vtask_uvm_report_info__504__report_enabled_checked));
                }
            }
        }
    }
    if (vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__PVT__m_phase_trace) {
        if ((0U != pred_of_succ.size())) {
            unnamedblk139__DOT__s = "( "s;
            if ((0U != pred_of_succ.first(unnamedblk139__DOT__unnamedblk140__DOT__pred))) {
                unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst = 1U;
                while (((IData)(unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst) 
                        || (0U != pred_of_succ.next(unnamedblk139__DOT__unnamedblk140__DOT__pred)))) {
                    unnamedblk139__DOT__unnamedblk140__DOT__pred__Vfirst = 0U;
                    unnamedblk139__DOT__s = VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk139__DOT__s, 
                                                                          ([&]() {
                                    VL_NULL_CHECK(unnamedblk139__DOT__unnamedblk140__DOT__pred, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1821)
                                                                           ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__510__Vfuncout);
                                }(), __Vtask_get_full_name__510__Vfuncout)), " "s);
                }
            }
            unnamedblk139__DOT__s = VL_CONCATN_NNN(unnamedblk139__DOT__s, ")"s);
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__511__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                            __Vfunc_uvm_report_enabled__511__severity = 0U;
                            __Vfunc_uvm_report_enabled__511__verbosity = 0x0000012cU;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__512__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__512__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__513__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__513__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__511__verbosity, (IData)(__Vfunc_uvm_report_enabled__511__severity), __Vfunc_uvm_report_enabled__511__id, __Vtask_uvm_report_enabled__514__Vfuncout);
                            __Vfunc_uvm_report_enabled__511__Vfuncout 
                                = __Vtask_uvm_report_enabled__514__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__511__Vfuncout))) {
                __Vtask_uvm_report_info__515__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__515__context_name = ""s;
                __Vtask_uvm_report_info__515__line = 0x00000720U;
                __Vtask_uvm_report_info__515__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__515__verbosity = 0x0000012cU;
                __Vtemp_6 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__516__Vfuncout);
                    }(), __Vfunc_get_full_name__516__Vfuncout);
                __Vtask_uvm_report_info__515__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                         -1,
                                                                         &(__Vtemp_6),
                                                                         32,
                                                                         ([&]() {
                                        this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__517__Vfuncout);
                                    }(), __Vfunc_get_inst_id__517__Vfuncout)) , 
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN("*** All pred to succ "s, unnamedblk139__DOT__s), " in READY_TO_END state, so ending phase ***"s)));
                __Vtask_uvm_report_info__515__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__518__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__518__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__519__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__519__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__515__id, __Vtask_uvm_report_info__515__message, __Vtask_uvm_report_info__515__verbosity, __Vtask_uvm_report_info__515__filename, __Vtask_uvm_report_info__515__line, __Vtask_uvm_report_info__515__context_name, (IData)(__Vtask_uvm_report_info__515__report_enabled_checked));
            }
        } else if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__521__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
                        __Vfunc_uvm_report_enabled__521__severity = 0U;
                        __Vfunc_uvm_report_enabled__521__verbosity = 0x0000012cU;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__522__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__522__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__523__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__523__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                           ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__521__verbosity, (IData)(__Vfunc_uvm_report_enabled__521__severity), __Vfunc_uvm_report_enabled__521__id, __Vtask_uvm_report_enabled__524__Vfuncout);
                        __Vfunc_uvm_report_enabled__521__Vfuncout 
                            = __Vtask_uvm_report_enabled__524__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__521__Vfuncout))) {
            __Vtask_uvm_report_info__525__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__525__context_name = ""s;
            __Vtask_uvm_report_info__525__line = 0x00000724U;
            __Vtask_uvm_report_info__525__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__525__verbosity = 0x0000012cU;
            __Vtemp_7 = ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__526__Vfuncout);
                }(), __Vfunc_get_full_name__526__Vfuncout);
            __Vtask_uvm_report_info__525__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_SFORMATF_N_NX("Phase '%0@' (id=%0d) ",0,
                                                                   -1,
                                                                   &(__Vtemp_7),
                                                                   32,
                                                                   ([&]() {
                                    this->__VnoInFunc_get_inst_id(vlSymsp, __Vfunc_get_inst_id__527__Vfuncout);
                                }(), __Vfunc_get_inst_id__527__Vfuncout)) , "*** No pred to succ other than myself, so ending phase ***"s));
            __Vtask_uvm_report_info__525__id = "PH/TRC/WAIT_PRED_OF_SUCC"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__528__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__528__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__529__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__529__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__525__id, __Vtask_uvm_report_info__525__message, __Vtask_uvm_report_info__525__verbosity, __Vtask_uvm_report_info__525__filename, __Vtask_uvm_report_info__525__line, __Vtask_uvm_report_info__525__context_name, (IData)(__Vtask_uvm_report_info__525__report_enabled_checked));
        }
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                            1832);
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_report_null_objection(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count, std::string action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_report_null_objection\n"); );
    // Locals
    std::string __Vtask_get_full_name__531__Vfuncout;
    IData/*31:0*/ __Vfunc_get_phase_type__532__Vfuncout;
    __Vfunc_get_phase_type__532__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__533__Vfuncout;
    __Vfunc_uvm_report_enabled__533__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__533__verbosity;
    __Vfunc_uvm_report_enabled__533__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__533__severity;
    __Vfunc_uvm_report_enabled__533__severity = 0;
    std::string __Vfunc_uvm_report_enabled__533__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__534__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__535__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__536__Vfuncout;
    __Vtask_uvm_report_enabled__536__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__537__id;
    std::string __Vtask_uvm_report_error__537__message;
    IData/*31:0*/ __Vtask_uvm_report_error__537__verbosity;
    __Vtask_uvm_report_error__537__verbosity = 0;
    std::string __Vtask_uvm_report_error__537__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__537__line;
    __Vtask_uvm_report_error__537__line = 0;
    std::string __Vtask_uvm_report_error__537__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__537__report_enabled_checked;
    __Vtask_uvm_report_error__537__report_enabled_checked = 0;
    std::string __Vfunc_get_name__538__Vfuncout;
    std::string __Vfunc_get_name__539__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__540__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__541__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    std::string m_action;
    std::string m_addon;
    std::string m_obj_name;
    m_obj_name = ((VlNull{} == obj) ? "uvm_top"s : 
                  ([&]() {
                VL_NULL_CHECK(obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1847)
                   ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__531__Vfuncout);
            }(), __Vtask_get_full_name__531__Vfuncout));
    if ((("raise"s == action) | ("drop"s == action))) {
        m_action = ((1U != count) ? VL_SFORMATF_N_NX("%@ %0d objections",0,
                                                     -1,
                                                     &(action),
                                                     32,
                                                     count) 
                     : VL_SFORMATF_N_NX("%@ an objection",0,
                                        -1,&(action)) );
    } else if (("get_objection_count"s == action)) {
        m_action = "call get_objection_count"s;
    }
    if ((0U == ([&]() {
                    this->__VnoInFunc_get_phase_type(vlSymsp, __Vfunc_get_phase_type__532__Vfuncout);
                }(), __Vfunc_get_phase_type__532__Vfuncout))) {
        m_addon = " (This is a UVM_PHASE_IMP, you have to query the schedule to find the UVM_PHASE_NODE)"s;
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__533__id = "UVM/PH/NULL_OBJECTION"s;
                    __Vfunc_uvm_report_enabled__533__severity = 2U;
                    __Vfunc_uvm_report_enabled__533__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__534__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__534__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__535__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__535__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__533__verbosity, (IData)(__Vfunc_uvm_report_enabled__533__severity), __Vfunc_uvm_report_enabled__533__id, __Vtask_uvm_report_enabled__536__Vfuncout);
                    __Vfunc_uvm_report_enabled__533__Vfuncout 
                        = __Vtask_uvm_report_enabled__536__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__533__Vfuncout))) {
        __Vtask_uvm_report_error__537__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__537__context_name = ""s;
        __Vtask_uvm_report_error__537__line = 0x0000074dU;
        __Vtask_uvm_report_error__537__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
        __Vtask_uvm_report_error__537__verbosity = 0U;
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__538__Vfuncout);
            }(), __Vfunc_get_name__538__Vfuncout);
        __Vtemp_2 = ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__539__Vfuncout);
            }(), __Vfunc_get_name__539__Vfuncout);
        __Vtask_uvm_report_error__537__message = VL_SFORMATF_N_NX("'%@' attempted to %@ on '%@', however '%@' is not a task-based phase node! %@",0,
                                                                  -1,
                                                                  &(m_obj_name),
                                                                  -1,
                                                                  &(m_action),
                                                                  -1,
                                                                  &(__Vtemp_1),
                                                                  -1,
                                                                  &(__Vtemp_2),
                                                                  -1,
                                                                  &(m_addon)) ;
        __Vtask_uvm_report_error__537__id = "UVM/PH/NULL_OBJECTION"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__540__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__540__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__541__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__541__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__537__id, __Vtask_uvm_report_error__537__message, __Vtask_uvm_report_error__537__verbosity, __Vtask_uvm_report_error__537__filename, __Vtask_uvm_report_error__537__line, __Vtask_uvm_report_error__537__context_name, (IData)(__Vtask_uvm_report_error__537__report_enabled_checked));
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_raise_objection(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_raise_objection\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__543__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> phase_done;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__543__Vfuncout);
    phase_done = __Vfunc_get_objection__543__Vfuncout;
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1882)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, obj, description, count);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, description, count, "raise"s);
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_drop_objection(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_drop_objection\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__546__Vfuncout;
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> phase_done;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__546__Vfuncout);
    phase_done = __Vfunc_get_objection__546__Vfuncout;
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1897)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, obj, description, count);
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, description, count, "drop"s);
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection_count(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> obj, IData/*31:0*/ &get_objection_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_objection_count\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__549__Vfuncout;
    IData/*31:0*/ __Vtask_get_objection_count__550__Vfuncout;
    __Vtask_get_objection_count__550__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> phase_done;
    this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__549__Vfuncout);
    phase_done = __Vfunc_get_objection__549__Vfuncout;
    if ((VlNull{} != phase_done)) {
        VL_NULL_CHECK(phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1909)->__VnoInFunc_get_objection_count(vlSymsp, obj, __Vtask_get_objection_count__550__Vfuncout);
        get_objection_count__Vfuncrtn = __Vtask_get_objection_count__550__Vfuncout;
    } else {
        this->__VnoInFunc_m_report_null_objection(vlProcess, vlSymsp, obj, ""s, 0U, "get_objection_count"s);
        get_objection_count__Vfuncrtn = 0U;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_sync(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> with_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_sync\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_domain__552__Vfuncout;
    __Vfunc_is_domain__552__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__553__Vfuncout;
    __Vfunc_uvm_report_enabled__553__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__553__verbosity;
    __Vfunc_uvm_report_enabled__553__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__553__severity;
    __Vfunc_uvm_report_enabled__553__severity = 0;
    std::string __Vfunc_uvm_report_enabled__553__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__554__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__555__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__556__Vfuncout;
    __Vtask_uvm_report_enabled__556__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_domain__558__Vfuncout;
    __Vtask_is_domain__558__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__559__Vfuncout;
    __Vfunc_uvm_report_enabled__559__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__559__verbosity;
    __Vfunc_uvm_report_enabled__559__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__559__severity;
    __Vfunc_uvm_report_enabled__559__severity = 0;
    std::string __Vfunc_uvm_report_enabled__559__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__560__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__561__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__562__Vfuncout;
    __Vtask_uvm_report_enabled__562__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_find__565__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_find__566__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__567__Vfuncout;
    __Vfunc_uvm_report_enabled__567__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__567__verbosity;
    __Vfunc_uvm_report_enabled__567__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__567__severity;
    __Vfunc_uvm_report_enabled__567__severity = 0;
    std::string __Vfunc_uvm_report_enabled__567__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__568__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__569__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__570__Vfuncout;
    __Vtask_uvm_report_enabled__570__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__572__Vfuncout;
    __Vfunc_uvm_report_enabled__572__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__572__verbosity;
    __Vfunc_uvm_report_enabled__572__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__572__severity;
    __Vfunc_uvm_report_enabled__572__severity = 0;
    std::string __Vfunc_uvm_report_enabled__572__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__573__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__574__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__575__Vfuncout;
    __Vtask_uvm_report_enabled__575__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, IData/*31:0*/> unnamedblk141__DOT__visited;
    unnamedblk141__DOT__visited.atDefault() = 0;
    VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>> unnamedblk141__DOT__queue;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk141__DOT__unnamedblk142__DOT__node;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ;
    CData/*0:0*/ unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst;
    unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk144__DOT__from_node;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk144__DOT__to_node;
    VlQueue<IData/*31:0*/> unnamedblk144__DOT__found_to;
    unnamedblk144__DOT__found_to.atDefault() = 0;
    VlQueue<IData/*31:0*/> unnamedblk144__DOT__found_from;
    unnamedblk144__DOT__found_from.atDefault() = 0;
    {
        if (([&]() {
                    this->__VnoInFunc_is_domain(vlSymsp, __Vfunc_is_domain__552__Vfuncout);
                }(), (IData)(__Vfunc_is_domain__552__Vfuncout))) {
            if ((VlNull{} == target)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__553__id = "PH_BADSYNC"s;
                                __Vfunc_uvm_report_enabled__553__severity = 3U;
                                __Vfunc_uvm_report_enabled__553__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__554__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__554__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__555__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__555__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__553__verbosity, (IData)(__Vfunc_uvm_report_enabled__553__severity), __Vfunc_uvm_report_enabled__553__id, __Vtask_uvm_report_enabled__556__Vfuncout);
                                __Vfunc_uvm_report_enabled__553__Vfuncout 
                                    = __Vtask_uvm_report_enabled__556__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__553__Vfuncout))) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "sync() called with a null target domain"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000786U, ""s, 1U);
                }
            } else if (([&]() {
                        VL_NULL_CHECK(target, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1928)
                        ->__VnoInFunc_is_domain(vlSymsp, __Vtask_is_domain__558__Vfuncout);
                    }(), (IData)(__Vtask_is_domain__558__Vfuncout))) {
                if (((VlNull{} == phase) & (VlNull{} 
                                            != with_phase))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__559__id = "PH_BADSYNC"s;
                                    __Vfunc_uvm_report_enabled__559__severity = 3U;
                                    __Vfunc_uvm_report_enabled__559__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__560__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__560__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__561__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__561__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__559__verbosity, (IData)(__Vfunc_uvm_report_enabled__559__severity), __Vfunc_uvm_report_enabled__559__id, __Vtask_uvm_report_enabled__562__Vfuncout);
                                    __Vfunc_uvm_report_enabled__559__Vfuncout 
                                        = __Vtask_uvm_report_enabled__562__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__559__Vfuncout))) {
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "sync() called with null phase and non-null with phase"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000078cU, ""s, 1U);
                    }
                } else if ((VlNull{} == phase)) {
                    unnamedblk141__DOT__queue.push_back(
                                                        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
                    unnamedblk141__DOT__visited.at(
                                                   VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
                    while ((0U != unnamedblk141__DOT__queue.size())) {
                        unnamedblk141__DOT__unnamedblk142__DOT__node 
                            = unnamedblk141__DOT__queue.pop_front();
                        if ((VlNull{} != VL_NULL_CHECK(unnamedblk141__DOT__unnamedblk142__DOT__node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1943)
                             ->__PVT__m_imp)) {
                            this->__VnoInFunc_sync(vlSymsp, target, VL_NULL_CHECK(unnamedblk141__DOT__unnamedblk142__DOT__node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1944)
                                                   ->__PVT__m_imp, VlNull{});
                        }
                        if ((0U != VL_NULL_CHECK(unnamedblk141__DOT__unnamedblk142__DOT__node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1946)
                             ->__PVT__m_successors.first(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ))) {
                            unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst = 1U;
                            while (((IData)(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst) 
                                    || (0U != VL_NULL_CHECK(unnamedblk141__DOT__unnamedblk142__DOT__node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1946)
                                        ->__PVT__m_successors.next(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ)))) {
                                unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ__Vfirst = 0U;
                                if ((! unnamedblk141__DOT__visited.exists(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ))) {
                                    unnamedblk141__DOT__queue.push_back(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ);
                                    unnamedblk141__DOT__visited.at(unnamedblk141__DOT__unnamedblk142__DOT__unnamedblk143__DOT__succ) = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((VlNull{} == with_phase)) {
                        with_phase = phase;
                    }
                    this->__VnoInFunc_find(vlProcess, vlSymsp, phase, 1U, __Vfunc_find__565__Vfuncout);
                    unnamedblk144__DOT__from_node = __Vfunc_find__565__Vfuncout;
                    VL_NULL_CHECK(target, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1960)->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, __Vtask_find__566__Vfuncout);
                    unnamedblk144__DOT__to_node = __Vtask_find__566__Vfuncout;
                    if (((VlNull{} == unnamedblk144__DOT__from_node) 
                         | (VlNull{} == unnamedblk144__DOT__to_node))) {
                        goto __Vlabel0;
                    }
                    unnamedblk144__DOT__found_to = VL_NULL_CHECK(unnamedblk144__DOT__from_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1962)
                        ->__PVT__m_sync.find_index(
                                                   [&](
                                                       IData/*31:0*/ node__DOT__index, 
                                                       VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> node) -> 
                                                   CData/*31:0*/ {
                            return ((node == unnamedblk144__DOT__to_node));
                        }
                    );
                    unnamedblk144__DOT__found_from 
                        = VL_NULL_CHECK(unnamedblk144__DOT__to_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1963)
                        ->__PVT__m_sync.find_index(
                                                   [&](
                                                       IData/*31:0*/ node__DOT__index, 
                                                       VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> node) -> 
                                                   CData/*31:0*/ {
                            return ((node == unnamedblk144__DOT__from_node));
                        }
                    );
                    if ((0U == unnamedblk144__DOT__found_to.size())) {
                        VL_NULL_CHECK(unnamedblk144__DOT__from_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1964)->__PVT__m_sync.push_back(unnamedblk144__DOT__to_node);
                    }
                    if ((0U == unnamedblk144__DOT__found_from.size())) {
                        VL_NULL_CHECK(unnamedblk144__DOT__to_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1965)->__PVT__m_sync.push_back(unnamedblk144__DOT__from_node);
                    }
                }
            } else if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__567__id = "PH_BADSYNC"s;
                            __Vfunc_uvm_report_enabled__567__severity = 3U;
                            __Vfunc_uvm_report_enabled__567__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__568__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__568__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                               ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__569__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__569__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                               ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__567__verbosity, (IData)(__Vfunc_uvm_report_enabled__567__severity), __Vfunc_uvm_report_enabled__567__id, __Vtask_uvm_report_enabled__570__Vfuncout);
                            __Vfunc_uvm_report_enabled__567__Vfuncout 
                                = __Vtask_uvm_report_enabled__570__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__567__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "sync() called with a non-domain phase schedule node as target"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000789U, ""s, 1U);
            }
        } else if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__572__id = "PH_BADSYNC"s;
                        __Vfunc_uvm_report_enabled__572__severity = 3U;
                        __Vfunc_uvm_report_enabled__572__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__573__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__573__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__574__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__574__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                           ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__572__verbosity, (IData)(__Vfunc_uvm_report_enabled__572__severity), __Vfunc_uvm_report_enabled__572__id, __Vtask_uvm_report_enabled__575__Vfuncout);
                        __Vfunc_uvm_report_enabled__572__Vfuncout 
                            = __Vtask_uvm_report_enabled__575__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__572__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "sync() called from a non-domain phase schedule node"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x00000783U, ""s, 1U);
        }
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_unsync(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_domain> target, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> with_phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_unsync\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_is_domain__577__Vfuncout;
    __Vfunc_is_domain__577__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__578__Vfuncout;
    __Vfunc_uvm_report_enabled__578__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__578__verbosity;
    __Vfunc_uvm_report_enabled__578__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__578__severity;
    __Vfunc_uvm_report_enabled__578__severity = 0;
    std::string __Vfunc_uvm_report_enabled__578__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__579__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__580__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__581__Vfuncout;
    __Vtask_uvm_report_enabled__581__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_domain__583__Vfuncout;
    __Vtask_is_domain__583__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__584__Vfuncout;
    __Vfunc_uvm_report_enabled__584__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__584__verbosity;
    __Vfunc_uvm_report_enabled__584__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__584__severity;
    __Vfunc_uvm_report_enabled__584__severity = 0;
    std::string __Vfunc_uvm_report_enabled__584__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__585__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__586__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__587__Vfuncout;
    __Vtask_uvm_report_enabled__587__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_find__590__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vtask_find__591__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__592__Vfuncout;
    __Vfunc_uvm_report_enabled__592__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__592__verbosity;
    __Vfunc_uvm_report_enabled__592__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__592__severity;
    __Vfunc_uvm_report_enabled__592__severity = 0;
    std::string __Vfunc_uvm_report_enabled__592__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__593__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__594__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__595__Vfuncout;
    __Vtask_uvm_report_enabled__595__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__597__Vfuncout;
    __Vfunc_uvm_report_enabled__597__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__597__verbosity;
    __Vfunc_uvm_report_enabled__597__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__597__severity;
    __Vfunc_uvm_report_enabled__597__severity = 0;
    std::string __Vfunc_uvm_report_enabled__597__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__598__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__599__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__600__Vfuncout;
    __Vtask_uvm_report_enabled__600__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, IData/*31:0*/> unnamedblk145__DOT__visited;
    unnamedblk145__DOT__visited.atDefault() = 0;
    VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>> unnamedblk145__DOT__queue;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk145__DOT__unnamedblk146__DOT__node;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ;
    CData/*0:0*/ unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst;
    unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk148__DOT__from_node;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk148__DOT__to_node;
    VlQueue<IData/*31:0*/> unnamedblk148__DOT__found_to;
    unnamedblk148__DOT__found_to.atDefault() = 0;
    VlQueue<IData/*31:0*/> unnamedblk148__DOT__found_from;
    unnamedblk148__DOT__found_from.atDefault() = 0;
    {
        if (([&]() {
                    this->__VnoInFunc_is_domain(vlSymsp, __Vfunc_is_domain__577__Vfuncout);
                }(), (IData)(__Vfunc_is_domain__577__Vfuncout))) {
            if ((VlNull{} == target)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__578__id = "PH_BADSYNC"s;
                                __Vfunc_uvm_report_enabled__578__severity = 3U;
                                __Vfunc_uvm_report_enabled__578__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__579__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__579__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__580__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__580__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__578__verbosity, (IData)(__Vfunc_uvm_report_enabled__578__severity), __Vfunc_uvm_report_enabled__578__id, __Vtask_uvm_report_enabled__581__Vfuncout);
                                __Vfunc_uvm_report_enabled__578__Vfuncout 
                                    = __Vtask_uvm_report_enabled__581__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__578__Vfuncout))) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "unsync() called with a null target domain"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000007bbU, ""s, 1U);
                }
            } else if (([&]() {
                        VL_NULL_CHECK(target, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1980)
                        ->__VnoInFunc_is_domain(vlSymsp, __Vtask_is_domain__583__Vfuncout);
                    }(), (IData)(__Vtask_is_domain__583__Vfuncout))) {
                if (((VlNull{} == phase) & (VlNull{} 
                                            != with_phase))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__584__id = "PH_BADSYNC"s;
                                    __Vfunc_uvm_report_enabled__584__severity = 3U;
                                    __Vfunc_uvm_report_enabled__584__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__585__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__585__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__586__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__586__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__584__verbosity, (IData)(__Vfunc_uvm_report_enabled__584__severity), __Vfunc_uvm_report_enabled__584__id, __Vtask_uvm_report_enabled__587__Vfuncout);
                                    __Vfunc_uvm_report_enabled__584__Vfuncout 
                                        = __Vtask_uvm_report_enabled__587__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__584__Vfuncout))) {
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "unsync() called with null phase and non-null with phase"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000007bfU, ""s, 1U);
                    }
                } else if ((VlNull{} == phase)) {
                    unnamedblk145__DOT__queue.push_back(
                                                        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
                    unnamedblk145__DOT__visited.at(
                                                   VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this}) = 1U;
                    while ((0U != unnamedblk145__DOT__queue.size())) {
                        unnamedblk145__DOT__unnamedblk146__DOT__node 
                            = unnamedblk145__DOT__queue.pop_front();
                        if ((VlNull{} != VL_NULL_CHECK(unnamedblk145__DOT__unnamedblk146__DOT__node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1993)
                             ->__PVT__m_imp)) {
                            this->__VnoInFunc_unsync(vlSymsp, target, VL_NULL_CHECK(unnamedblk145__DOT__unnamedblk146__DOT__node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1993)
                                                     ->__PVT__m_imp, VlNull{});
                        }
                        if ((0U != VL_NULL_CHECK(unnamedblk145__DOT__unnamedblk146__DOT__node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1994)
                             ->__PVT__m_successors.first(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ))) {
                            unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst = 1U;
                            while (((IData)(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst) 
                                    || (0U != VL_NULL_CHECK(unnamedblk145__DOT__unnamedblk146__DOT__node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 1994)
                                        ->__PVT__m_successors.next(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ)))) {
                                unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ__Vfirst = 0U;
                                if ((! unnamedblk145__DOT__visited.exists(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ))) {
                                    unnamedblk145__DOT__queue.push_back(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ);
                                    unnamedblk145__DOT__visited.at(unnamedblk145__DOT__unnamedblk146__DOT__unnamedblk147__DOT__succ) = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((VlNull{} == with_phase)) {
                        with_phase = phase;
                    }
                    this->__VnoInFunc_find(vlProcess, vlSymsp, phase, 1U, __Vfunc_find__590__Vfuncout);
                    unnamedblk148__DOT__from_node = __Vfunc_find__590__Vfuncout;
                    VL_NULL_CHECK(target, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2008)->__VnoInFunc_find(vlProcess, vlSymsp, with_phase, 1U, __Vtask_find__591__Vfuncout);
                    unnamedblk148__DOT__to_node = __Vtask_find__591__Vfuncout;
                    if (((VlNull{} == unnamedblk148__DOT__from_node) 
                         | (VlNull{} == unnamedblk148__DOT__to_node))) {
                        goto __Vlabel0;
                    }
                    unnamedblk148__DOT__found_to = VL_NULL_CHECK(unnamedblk148__DOT__from_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2010)
                        ->__PVT__m_sync.find_index(
                                                   [&](
                                                       IData/*31:0*/ node__DOT__index, 
                                                       VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> node) -> 
                                                   CData/*31:0*/ {
                            return ((node == unnamedblk148__DOT__to_node));
                        }
                    );
                    unnamedblk148__DOT__found_from 
                        = VL_NULL_CHECK(unnamedblk148__DOT__to_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2011)
                        ->__PVT__m_sync.find_index(
                                                   [&](
                                                       IData/*31:0*/ node__DOT__index, 
                                                       VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> node) -> 
                                                   CData/*31:0*/ {
                            return ((node == unnamedblk148__DOT__from_node));
                        }
                    );
                    if ((0U != unnamedblk148__DOT__found_to.size())) {
                        VL_NULL_CHECK(unnamedblk148__DOT__from_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2012)->__PVT__m_sync.erase(unnamedblk148__DOT__found_to.at(0U));
                    }
                    if ((0U != unnamedblk148__DOT__found_from.size())) {
                        VL_NULL_CHECK(unnamedblk148__DOT__to_node, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2013)->__PVT__m_sync.erase(unnamedblk148__DOT__found_from.at(0U));
                    }
                }
            } else if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__592__id = "PH_BADSYNC"s;
                            __Vfunc_uvm_report_enabled__592__severity = 3U;
                            __Vfunc_uvm_report_enabled__592__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__593__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__593__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                               ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__594__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__594__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                               ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__592__verbosity, (IData)(__Vfunc_uvm_report_enabled__592__severity), __Vfunc_uvm_report_enabled__592__id, __Vtask_uvm_report_enabled__595__Vfuncout);
                            __Vfunc_uvm_report_enabled__592__Vfuncout 
                                = __Vtask_uvm_report_enabled__595__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__592__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "unsync() called with a non-domain phase schedule node as target"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000007bdU, ""s, 1U);
            }
        } else if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__597__id = "PH_BADSYNC"s;
                        __Vfunc_uvm_report_enabled__597__severity = 3U;
                        __Vfunc_uvm_report_enabled__597__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__598__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__598__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__599__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__599__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                           ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__597__verbosity, (IData)(__Vfunc_uvm_report_enabled__597__severity), __Vfunc_uvm_report_enabled__597__id, __Vtask_uvm_report_enabled__600__Vfuncout);
                        __Vfunc_uvm_report_enabled__597__Vfuncout 
                            = __Vtask_uvm_report_enabled__600__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__597__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADSYNC"s, "unsync() called from a non-domain phase schedule node"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x000007b9U, ""s, 1U);
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_state(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ state, IData/*31:0*/ op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_state\n"); );
    // Body
    VL_KEEP_THIS;
    if ((3U == op)) {
        if ((0U == (state & this->__PVT__m_state))) {
            CData/*0:0*/ __VdynTrigger_h890791ab__0;
            __VdynTrigger_h890791ab__0 = 0;
            __VdynTrigger_h890791ab__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h890791ab__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 != (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2023);
                this->__Vtrigprevexpr_h7ae7f53e__0 
                    = (0U != (state & this->__PVT__m_state));
                __VdynTrigger_h890791ab__0 = this->__Vtrigprevexpr_h7ae7f53e__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h890791ab__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 != (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2023);
        }
    } else if ((2U == op)) {
        if ((0U != (state & this->__PVT__m_state))) {
            CData/*0:0*/ __VdynTrigger_h8911845e__0;
            __VdynTrigger_h8911845e__0 = 0;
            __VdynTrigger_h8911845e__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h8911845e__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 == (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2024);
                this->__Vtrigprevexpr_h7aedf16b__0 
                    = (0U == (state & this->__PVT__m_state));
                __VdynTrigger_h8911845e__0 = this->__Vtrigprevexpr_h7aedf16b__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h8911845e__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 == (uvm_pkg::uvm_phase.state & uvm_pkg::uvm_phase.m_state)))", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2024);
        }
    } else if ((0U == op)) {
        if (VL_GTES_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_h37695a4b__0;
            __VdynTrigger_h37695a4b__0 = 0;
            __VdynTrigger_h37695a4b__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h37695a4b__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state < uvm_pkg::uvm_phase.state))", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2025);
                this->__Vtrigprevexpr_h0d86bfde__0 
                    = VL_LTS_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h37695a4b__0 = this->__Vtrigprevexpr_h0d86bfde__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h37695a4b__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state < uvm_pkg::uvm_phase.state))", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2025);
        }
    } else if ((1U == op)) {
        if (VL_GTS_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_h377c402e__0;
            __VdynTrigger_h377c402e__0 = 0;
            __VdynTrigger_h377c402e__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h377c402e__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state <= uvm_pkg::uvm_phase.state))", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2026);
                this->__Vtrigprevexpr_h0d73a8bb__0 
                    = VL_LTES_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h377c402e__0 = this->__Vtrigprevexpr_h0d73a8bb__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h377c402e__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state <= uvm_pkg::uvm_phase.state))", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2026);
        }
    } else if ((4U == op)) {
        if (VL_LTES_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_h36f1d418__0;
            __VdynTrigger_h36f1d418__0 = 0;
            __VdynTrigger_h36f1d418__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h36f1d418__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state > uvm_pkg::uvm_phase.state))", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2027);
                this->__Vtrigprevexpr_h0d0e4411__0 
                    = VL_GTS_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h36f1d418__0 = this->__Vtrigprevexpr_h0d0e4411__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h36f1d418__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state > uvm_pkg::uvm_phase.state))", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2027);
        }
    } else if ((5U == op)) {
        if (VL_LTS_III(32, this->__PVT__m_state, state)) {
            CData/*0:0*/ __VdynTrigger_h37804eb2__0;
            __VdynTrigger_h37804eb2__0 = 0;
            __VdynTrigger_h37804eb2__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h37804eb2__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_phase.m_state >= uvm_pkg::uvm_phase.state))", 
                                                             "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                             2028);
                this->__Vtrigprevexpr_h0d7fb647__0 
                    = VL_GTES_III(32, this->__PVT__m_state, state);
                __VdynTrigger_h37804eb2__0 = this->__Vtrigprevexpr_h0d7fb647__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h37804eb2__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_phase.m_state >= uvm_pkg::uvm_phase.state))", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 
                                                         2028);
        }
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_jump_phase(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_set_jump_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__602__Vfuncout;
    __Vfunc_uvm_report_enabled__602__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__602__verbosity;
    __Vfunc_uvm_report_enabled__602__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__602__severity;
    __Vfunc_uvm_report_enabled__602__severity = 0;
    std::string __Vfunc_uvm_report_enabled__602__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__603__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__604__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__605__Vfuncout;
    __Vtask_uvm_report_enabled__605__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__606__id;
    std::string __Vtask_uvm_report_error__606__message;
    IData/*31:0*/ __Vtask_uvm_report_error__606__verbosity;
    __Vtask_uvm_report_error__606__verbosity = 0;
    std::string __Vtask_uvm_report_error__606__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__606__line;
    __Vtask_uvm_report_error__606__line = 0;
    std::string __Vtask_uvm_report_error__606__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__606__report_enabled_checked;
    __Vtask_uvm_report_error__606__report_enabled_checked = 0;
    std::string __Vfunc_get_name__607__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__608__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__609__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_m_find_predecessor__611__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> __Vfunc_m_find_successor__612__Vfuncout;
    std::string __Vtask_get_name__613__Vfuncout;
    std::string __Vfunc_get_name__614__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__615__Vfuncout;
    __Vfunc_uvm_report_enabled__615__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__615__verbosity;
    __Vfunc_uvm_report_enabled__615__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__615__severity;
    __Vfunc_uvm_report_enabled__615__severity = 0;
    std::string __Vfunc_uvm_report_enabled__615__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__616__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__617__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__618__Vfuncout;
    __Vtask_uvm_report_enabled__618__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__620__Vfuncout;
    __Vfunc_uvm_report_enabled__620__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__620__verbosity;
    __Vfunc_uvm_report_enabled__620__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__620__severity;
    __Vfunc_uvm_report_enabled__620__severity = 0;
    std::string __Vfunc_uvm_report_enabled__620__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__621__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__622__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__623__Vfuncout;
    __Vtask_uvm_report_enabled__623__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__624__id;
    std::string __Vtask_uvm_report_info__624__message;
    IData/*31:0*/ __Vtask_uvm_report_info__624__verbosity;
    __Vtask_uvm_report_info__624__verbosity = 0;
    std::string __Vtask_uvm_report_info__624__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__624__line;
    __Vtask_uvm_report_info__624__line = 0;
    std::string __Vtask_uvm_report_info__624__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__624__report_enabled_checked;
    __Vtask_uvm_report_info__624__report_enabled_checked = 0;
    std::string __Vtask_get_name__625__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__626__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__627__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__629__Vfuncout;
    __Vfunc_uvm_report_enabled__629__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__629__verbosity;
    __Vfunc_uvm_report_enabled__629__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__629__severity;
    __Vfunc_uvm_report_enabled__629__severity = 0;
    std::string __Vfunc_uvm_report_enabled__629__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__630__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__631__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__632__Vfuncout;
    __Vtask_uvm_report_enabled__632__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__633__id;
    std::string __Vtask_uvm_report_info__633__message;
    IData/*31:0*/ __Vtask_uvm_report_info__633__verbosity;
    __Vtask_uvm_report_info__633__verbosity = 0;
    std::string __Vtask_uvm_report_info__633__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__633__line;
    __Vtask_uvm_report_info__633__line = 0;
    std::string __Vtask_uvm_report_info__633__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__633__report_enabled_checked;
    __Vtask_uvm_report_info__633__report_enabled_checked = 0;
    std::string __Vtask_get_name__634__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__635__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__636__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    std::string unnamedblk149__DOT__msg;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> d;
    if ((VL_GTS_III(32, 8U, this->__PVT__m_state) | 
         VL_LTS_III(32, 0x00000040U, this->__PVT__m_state))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__602__id = "JMPPHIDL"s;
                        __Vfunc_uvm_report_enabled__602__severity = 2U;
                        __Vfunc_uvm_report_enabled__602__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__603__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__603__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__604__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__604__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__602__verbosity, (IData)(__Vfunc_uvm_report_enabled__602__severity), __Vfunc_uvm_report_enabled__602__id, __Vtask_uvm_report_enabled__605__Vfuncout);
                        __Vfunc_uvm_report_enabled__602__Vfuncout 
                            = __Vtask_uvm_report_enabled__605__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__602__Vfuncout))) {
            __Vtask_uvm_report_error__606__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__606__context_name = ""s;
            __Vtask_uvm_report_error__606__line = 0x00000803U;
            __Vtask_uvm_report_error__606__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_error__606__verbosity = 0U;
            __Vtask_uvm_report_error__606__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Attempting to jump from phase \""s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__607__Vfuncout);
                                }(), __Vfunc_get_name__607__Vfuncout)), "\" which is not currently active (current state is "s), Vuart_example___024unit::__Venumtab_enum_name25
                                                                                .at(this->__PVT__m_state)), "). The jump will not happen until the phase becomes "s), "active."s));
                __Vtask_uvm_report_error__606__id = "JMPPHIDL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__608__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__608__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__609__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__609__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__606__id, __Vtask_uvm_report_error__606__message, __Vtask_uvm_report_error__606__verbosity, __Vtask_uvm_report_error__606__filename, __Vtask_uvm_report_error__606__line, __Vtask_uvm_report_error__606__context_name, (IData)(__Vtask_uvm_report_error__606__report_enabled_checked));
            }
        }
        this->__VnoInFunc_m_find_predecessor(vlProcess, vlSymsp, phase, 0U, VlNull{}, __Vfunc_m_find_predecessor__611__Vfuncout);
        d = __Vfunc_m_find_predecessor__611__Vfuncout;
        if ((VlNull{} == d)) {
            this->__VnoInFunc_m_find_successor(vlProcess, vlSymsp, phase, 0U, VlNull{}, __Vfunc_m_find_successor__612__Vfuncout);
            d = __Vfunc_m_find_successor__612__Vfuncout;
            if ((VlNull{} == d)) {
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2076)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__613__Vfuncout);
                    }(), __Vtask_get_name__613__Vfuncout);
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__614__Vfuncout);
                    }(), __Vfunc_get_name__614__Vfuncout);
                VL_SFORMAT_NX(64,unnamedblk149__DOT__msg
                              ,"185383141835722405686727906483606959610028223926251639965095180328105454202181021798014576523050255831739430717755357314293325527416269751734457336470388580408199567827659786885213904295820986423154265006128633119184827052696120418375767289254633306786801057639318606312792243541311889362526786697607599250599226180508548699624233443935867961249400945172205084085794463694864294299872742311917735567633304964265243749%@%@",0,
                              -1,&(__Vtemp_1),-1,&(__Vtemp_2));
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__615__id = "PH_BADJUMP"s;
                                __Vfunc_uvm_report_enabled__615__severity = 3U;
                                __Vfunc_uvm_report_enabled__615__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__616__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__616__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__617__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__617__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__615__verbosity, (IData)(__Vfunc_uvm_report_enabled__615__severity), __Vfunc_uvm_report_enabled__615__id, __Vtask_uvm_report_enabled__618__Vfuncout);
                                __Vfunc_uvm_report_enabled__615__Vfuncout 
                                    = __Vtask_uvm_report_enabled__618__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__615__Vfuncout))) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "PH_BADJUMP"s, unnamedblk149__DOT__msg, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s, 0x0000081dU, ""s, 1U);
                }
            } else {
                this->__PVT__m_jump_fwd = 1U;
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__620__id = "PH_JUMPF"s;
                                __Vfunc_uvm_report_enabled__620__severity = 0U;
                                __Vfunc_uvm_report_enabled__620__verbosity = 0x000001f4U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__621__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__621__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__622__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__622__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__620__verbosity, (IData)(__Vfunc_uvm_report_enabled__620__severity), __Vfunc_uvm_report_enabled__620__id, __Vtask_uvm_report_enabled__623__Vfuncout);
                                __Vfunc_uvm_report_enabled__620__Vfuncout 
                                    = __Vtask_uvm_report_enabled__623__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__620__Vfuncout))) {
                    __Vtask_uvm_report_info__624__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__624__context_name = ""s;
                    __Vtask_uvm_report_info__624__line = 0x00000822U;
                    __Vtask_uvm_report_info__624__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                    __Vtask_uvm_report_info__624__verbosity = 0x000001f4U;
                    __Vtemp_3 = ([&]() {
                            VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2082)
                                 ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__625__Vfuncout);
                        }(), __Vtask_get_name__625__Vfuncout);
                    __Vtask_uvm_report_info__624__message 
                        = VL_SFORMATF_N_NX("jumping forward to phase %@",0,
                                           -1,&(__Vtemp_3)) ;
                    __Vtask_uvm_report_info__624__id = "PH_JUMPF"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__626__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__626__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__627__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__627__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__624__id, __Vtask_uvm_report_info__624__message, __Vtask_uvm_report_info__624__verbosity, __Vtask_uvm_report_info__624__filename, __Vtask_uvm_report_info__624__line, __Vtask_uvm_report_info__624__context_name, (IData)(__Vtask_uvm_report_info__624__report_enabled_checked));
                }
            }
        } else {
            this->__PVT__m_jump_bkwd = 1U;
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__629__id = "PH_JUMPB"s;
                            __Vfunc_uvm_report_enabled__629__severity = 0U;
                            __Vfunc_uvm_report_enabled__629__verbosity = 0x000001f4U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__630__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__630__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__631__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__631__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__629__verbosity, (IData)(__Vfunc_uvm_report_enabled__629__severity), __Vfunc_uvm_report_enabled__629__id, __Vtask_uvm_report_enabled__632__Vfuncout);
                            __Vfunc_uvm_report_enabled__629__Vfuncout 
                                = __Vtask_uvm_report_enabled__632__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__629__Vfuncout))) {
                __Vtask_uvm_report_info__633__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__633__context_name = ""s;
                __Vtask_uvm_report_info__633__line = 0x00000828U;
                __Vtask_uvm_report_info__633__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__633__verbosity = 0x000001f4U;
                __Vtemp_4 = ([&]() {
                        VL_NULL_CHECK(phase, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2088)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__634__Vfuncout);
                    }(), __Vtask_get_name__634__Vfuncout);
                __Vtask_uvm_report_info__633__message 
                    = VL_SFORMATF_N_NX("jumping backward to phase %@",0,
                                       -1,&(__Vtemp_4)) ;
                __Vtask_uvm_report_info__633__id = "PH_JUMPB"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__635__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__635__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__636__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__636__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__633__id, __Vtask_uvm_report_info__633__message, __Vtask_uvm_report_info__633__verbosity, __Vtask_uvm_report_info__633__filename, __Vtask_uvm_report_info__633__line, __Vtask_uvm_report_info__633__context_name, (IData)(__Vtask_uvm_report_info__633__report_enabled_checked));
            }
        }
        this->__PVT__m_jump_phase = d;
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_end_prematurely(Vuart_example__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_end_prematurely\n"); );
        // Body
        this->__PVT__m_premature_end = 1U;
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_jump(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_jump\n"); );
        // Body
        this->__VnoInFunc_set_jump_phase(vlSymsp, phase);
        this->__VnoInFunc_end_prematurely(vlSymsp);
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_jump_target(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> &get_jump_target__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_get_jump_target\n"); );
        // Body
        get_jump_target__Vfuncrtn = this->__PVT__m_jump_phase;
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ state) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear\n"); );
        // Locals
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__640__Vfuncout;
        // Body
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> phase_done;
        this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__640__Vfuncout);
        phase_done = __Vfunc_get_objection__640__Vfuncout;
        this->__PVT__m_state = state;
        this->__PVT__m_phase_proc = VlNull{};
        if ((VlNull{} != phase_done)) {
            VL_NULL_CHECK(phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2141)
                ->__VnoInFunc_clear(vlProcess, vlSymsp, 
                                    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
        }
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear_successors(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ state, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> end_state) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_clear_successors\n"); );
        // Body
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk150__DOT__succ;
        CData/*0:0*/ unnamedblk150__DOT__succ__Vfirst;
        unnamedblk150__DOT__succ__Vfirst = 0;
        {
            if ((VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this} 
                 == end_state)) {
                goto __Vlabel0;
            }
            this->__VnoInFunc_clear(vlProcess, vlSymsp, state);
            if ((0U != this->__PVT__m_successors.first(unnamedblk150__DOT__succ))) {
                unnamedblk150__DOT__succ__Vfirst = 1U;
                while (((IData)(unnamedblk150__DOT__succ__Vfirst) 
                        || (0U != this->__PVT__m_successors.next(unnamedblk150__DOT__succ)))) {
                    unnamedblk150__DOT__succ__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk150__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2157)
                ->__VnoInFunc_clear_successors(vlProcess, vlSymsp, state, end_state);
                }
            }
            __Vlabel0: ;
        }
    }

    VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_self_and_siblings_to_drop(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_wait_for_self_and_siblings_to_drop\n"); );
        // Locals
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__644__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__645__Vfuncout;
        VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> __Vtask_get_predecessors_for_successors__646__pred_of_succ;
        __Vtask_get_predecessors_for_successors__646__pred_of_succ.atDefault() = 0;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__647__Vfuncout;
        IData/*31:0*/ __Vtask_get_objection_total__648__Vfuncout;
        __Vtask_get_objection_total__648__Vfuncout = 0;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vtask_get_objection__650__Vfuncout;
        IData/*31:0*/ __Vtask_get_objection_total__652__Vfuncout;
        __Vtask_get_objection_total__652__Vfuncout = 0;
        // Body
        VL_KEEP_THIS;
        IData/*31:0*/ unnamedblk151__DOT__i;
        unnamedblk151__DOT__i = 0;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> unnamedblk152__DOT__phase_done;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk152__DOT__unnamedblk153__DOT__sib;
        CData/*0:0*/ unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst;
        unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst = 0;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done;
        CData/*0:0*/ need_to_check_all;
        need_to_check_all = 0;
        need_to_check_all = 1U;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> top;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
        VlAssocArray<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>, CData/*0:0*/> siblings;
        siblings.atDefault() = 0;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__644__Vfuncout);
        cs = __Vfunc_get__644__Vfuncout;
        VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2176)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__645__Vfuncout);
        top = __Vtask_get_root__645__Vfuncout;
        this->__VnoInFunc_get_predecessors_for_successors(vlSymsp, __Vtask_get_predecessors_for_successors__646__pred_of_succ);
        siblings = __Vtask_get_predecessors_for_successors__646__pred_of_succ;
        unnamedblk151__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk151__DOT__i, this->__PVT__m_sync.size())) {
            siblings.at(this->__PVT__m_sync.at(unnamedblk151__DOT__i)) = 1U;
            unnamedblk151__DOT__i = ((IData)(1U) + unnamedblk151__DOT__i);
        }
        while (need_to_check_all) {
            this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__647__Vfuncout);
            unnamedblk152__DOT__phase_done = __Vfunc_get_objection__647__Vfuncout;
            need_to_check_all = 0U;
            if (((VlNull{} != unnamedblk152__DOT__phase_done) 
                 && (0U != ([&]() {
                                VL_NULL_CHECK(unnamedblk152__DOT__phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2189)
                            ->__VnoInFunc_get_objection_total(vlSymsp, top, __Vtask_get_objection_total__648__Vfuncout);
                            }(), __Vtask_get_objection_total__648__Vfuncout)))) {
                this->__PVT__m_state = 0x00000010U;
                co_await VL_NULL_CHECK(unnamedblk152__DOT__phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2191)
                ->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, top);
                need_to_check_all = 1U;
            }
            if ((0U != siblings.first(unnamedblk152__DOT__unnamedblk153__DOT__sib))) {
                unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst = 1U;
                while (((IData)(unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst) 
                        || (0U != siblings.next(unnamedblk152__DOT__unnamedblk153__DOT__sib)))) {
                    unnamedblk152__DOT__unnamedblk153__DOT__sib__Vfirst = 0U;
                    VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__sib, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2198)
                ->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vtask_get_objection__650__Vfuncout);
                    unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done 
                        = __Vtask_get_objection__650__Vfuncout;
                    co_await VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__sib, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2199)
                ->__VnoInFunc_wait_for_state(vlProcess, vlSymsp, 0x00000010U, 5U);
                    if (((VlNull{} != unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done) 
                         && (0U != ([&]() {
                                        VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2200)
                                    ->__VnoInFunc_get_objection_total(vlSymsp, top, __Vtask_get_objection_total__652__Vfuncout);
                                    }(), __Vtask_get_objection_total__652__Vfuncout)))) {
                        this->__PVT__m_state = 0x00000010U;
                        co_await VL_NULL_CHECK(unnamedblk152__DOT__unnamedblk153__DOT__unnamedblk154__DOT__sib_phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2202)
                ->__VnoInFunc_wait_for(vlProcess, vlSymsp, 4U, top);
                        need_to_check_all = 1U;
                    }
                }
            }
        }
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill(Vuart_example__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__654__Vfuncout;
        __Vfunc_uvm_report_enabled__654__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__654__verbosity;
        __Vfunc_uvm_report_enabled__654__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__654__severity;
        __Vfunc_uvm_report_enabled__654__severity = 0;
        std::string __Vfunc_uvm_report_enabled__654__id;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__655__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__656__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__657__Vfuncout;
        __Vtask_uvm_report_enabled__657__Vfuncout = 0;
        std::string __Vtask_uvm_report_info__658__id;
        std::string __Vtask_uvm_report_info__658__message;
        IData/*31:0*/ __Vtask_uvm_report_info__658__verbosity;
        __Vtask_uvm_report_info__658__verbosity = 0;
        std::string __Vtask_uvm_report_info__658__filename;
        IData/*31:0*/ __Vtask_uvm_report_info__658__line;
        __Vtask_uvm_report_info__658__line = 0;
        std::string __Vtask_uvm_report_info__658__context_name;
        CData/*0:0*/ __Vtask_uvm_report_info__658__report_enabled_checked;
        __Vtask_uvm_report_info__658__report_enabled_checked = 0;
        std::string __Vfunc_get_name__659__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__660__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__661__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__654__id = "PH_KILL"s;
                        __Vfunc_uvm_report_enabled__654__severity = 0U;
                        __Vfunc_uvm_report_enabled__654__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__655__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__655__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__656__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__656__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__654__verbosity, (IData)(__Vfunc_uvm_report_enabled__654__severity), __Vfunc_uvm_report_enabled__654__id, __Vtask_uvm_report_enabled__657__Vfuncout);
                        __Vfunc_uvm_report_enabled__654__Vfuncout 
                            = __Vtask_uvm_report_enabled__657__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__654__Vfuncout))) {
            __Vtask_uvm_report_info__658__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__658__context_name = ""s;
            __Vtask_uvm_report_info__658__line = 0x000008a6U;
            __Vtask_uvm_report_info__658__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__658__verbosity = 0x000001f4U;
            __Vtask_uvm_report_info__658__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN("killing phase '"s, 
                                                                 ([&]() {
                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__659__Vfuncout);
                            }(), __Vfunc_get_name__659__Vfuncout)), "'"s));
            __Vtask_uvm_report_info__658__id = "PH_KILL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__660__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__660__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__661__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__661__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__658__id, __Vtask_uvm_report_info__658__message, __Vtask_uvm_report_info__658__verbosity, __Vtask_uvm_report_info__658__filename, __Vtask_uvm_report_info__658__line, __Vtask_uvm_report_info__658__context_name, (IData)(__Vtask_uvm_report_info__658__report_enabled_checked));
        }
        if ((VlNull{} != this->__PVT__m_phase_proc)) {
            VL_NULL_CHECK(this->__PVT__m_phase_proc, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2217)
                ->__VnoInFunc_kill(vlSymsp);
            this->__PVT__m_phase_proc = VlNull{};
        }
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill_successors(Vuart_example__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_kill_successors\n"); );
        // Body
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> unnamedblk155__DOT__succ;
        CData/*0:0*/ unnamedblk155__DOT__succ__Vfirst;
        unnamedblk155__DOT__succ__Vfirst = 0;
        if ((0U != this->__PVT__m_successors.first(unnamedblk155__DOT__succ))) {
            unnamedblk155__DOT__succ__Vfirst = 1U;
            while (((IData)(unnamedblk155__DOT__succ__Vfirst) 
                    || (0U != this->__PVT__m_successors.next(unnamedblk155__DOT__succ)))) {
                unnamedblk155__DOT__succ__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk155__DOT__succ, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2231)
                ->__VnoInFunc_kill_successors(vlSymsp);
            }
        }
        this->__VnoInFunc_kill(vlSymsp);
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_terminate_phase(Vuart_example__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_terminate_phase\n"); );
        // Locals
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__666__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> phase_done;
        this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__666__Vfuncout);
        phase_done = __Vfunc_get_objection__666__Vfuncout;
        if ((VlNull{} != phase_done)) {
            VL_NULL_CHECK(phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2275)
                ->__VnoInFunc_clear(vlProcess, vlSymsp, 
                                    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>{this});
        }
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_termination_state(Vuart_example__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_m_print_termination_state\n"); );
        // Locals
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> __Vfunc_get_objection__668__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__669__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__670__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__671__Vfuncout;
        __Vfunc_uvm_report_enabled__671__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__671__verbosity;
        __Vfunc_uvm_report_enabled__671__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__671__severity;
        __Vfunc_uvm_report_enabled__671__severity = 0;
        std::string __Vfunc_uvm_report_enabled__671__id;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__672__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__673__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__674__Vfuncout;
        __Vtask_uvm_report_enabled__674__Vfuncout = 0;
        std::string __Vtask_uvm_report_info__675__id;
        std::string __Vtask_uvm_report_info__675__message;
        IData/*31:0*/ __Vtask_uvm_report_info__675__verbosity;
        __Vtask_uvm_report_info__675__verbosity = 0;
        std::string __Vtask_uvm_report_info__675__filename;
        IData/*31:0*/ __Vtask_uvm_report_info__675__line;
        __Vtask_uvm_report_info__675__line = 0;
        std::string __Vtask_uvm_report_info__675__context_name;
        CData/*0:0*/ __Vtask_uvm_report_info__675__report_enabled_checked;
        __Vtask_uvm_report_info__675__report_enabled_checked = 0;
        std::string __Vfunc_get_name__676__Vfuncout;
        IData/*31:0*/ __Vtask_get_objection_total__677__Vfuncout;
        __Vtask_get_objection_total__677__Vfuncout = 0;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__678__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__679__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__681__Vfuncout;
        __Vfunc_uvm_report_enabled__681__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__681__verbosity;
        __Vfunc_uvm_report_enabled__681__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__681__severity;
        __Vfunc_uvm_report_enabled__681__severity = 0;
        std::string __Vfunc_uvm_report_enabled__681__id;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__682__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__683__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__684__Vfuncout;
        __Vtask_uvm_report_enabled__684__Vfuncout = 0;
        std::string __Vtask_uvm_report_info__685__id;
        std::string __Vtask_uvm_report_info__685__message;
        IData/*31:0*/ __Vtask_uvm_report_info__685__verbosity;
        __Vtask_uvm_report_info__685__verbosity = 0;
        std::string __Vtask_uvm_report_info__685__filename;
        IData/*31:0*/ __Vtask_uvm_report_info__685__line;
        __Vtask_uvm_report_info__685__line = 0;
        std::string __Vtask_uvm_report_info__685__context_name;
        CData/*0:0*/ __Vtask_uvm_report_info__685__report_enabled_checked;
        __Vtask_uvm_report_info__685__report_enabled_checked = 0;
        std::string __Vfunc_get_name__686__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__687__Vfuncout;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__688__Vfuncout;
        std::string __Vtemp_1;
        std::string __Vtemp_2;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> top;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> cs;
        VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_objection> phase_done;
        this->__VnoInFunc_get_objection(vlProcess, vlSymsp, __Vfunc_get_objection__668__Vfuncout);
        phase_done = __Vfunc_get_objection__668__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__669__Vfuncout);
        cs = __Vfunc_get__669__Vfuncout;
        VL_NULL_CHECK(cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2288)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__670__Vfuncout);
        top = __Vtask_get_root__670__Vfuncout;
        if ((VlNull{} != phase_done)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__671__id = "PH_TERMSTATE"s;
                            __Vfunc_uvm_report_enabled__671__severity = 0U;
                            __Vfunc_uvm_report_enabled__671__verbosity = 0x000001f4U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__672__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__672__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__673__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__673__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__671__verbosity, (IData)(__Vfunc_uvm_report_enabled__671__severity), __Vfunc_uvm_report_enabled__671__id, __Vtask_uvm_report_enabled__674__Vfuncout);
                            __Vfunc_uvm_report_enabled__671__Vfuncout 
                                = __Vtask_uvm_report_enabled__674__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__671__Vfuncout))) {
                __Vtask_uvm_report_info__675__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__675__context_name = ""s;
                __Vtask_uvm_report_info__675__line = 0x000008f5U;
                __Vtask_uvm_report_info__675__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
                __Vtask_uvm_report_info__675__verbosity = 0x000001f4U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__676__Vfuncout);
                    }(), __Vfunc_get_name__676__Vfuncout);
                __Vtask_uvm_report_info__675__message 
                    = VL_SFORMATF_N_NX("phase %@ outstanding objections = %0d",0,
                                       -1,&(__Vtemp_1),
                                       32,([&]() {
                                VL_NULL_CHECK(phase_done, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh", 2293)
                                           ->__VnoInFunc_get_objection_total(vlSymsp, top, __Vtask_get_objection_total__677__Vfuncout);
                            }(), __Vtask_get_objection_total__677__Vfuncout)) ;
                __Vtask_uvm_report_info__675__id = "PH_TERMSTATE"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__678__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__678__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__679__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__679__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__675__id, __Vtask_uvm_report_info__675__message, __Vtask_uvm_report_info__675__verbosity, __Vtask_uvm_report_info__675__filename, __Vtask_uvm_report_info__675__line, __Vtask_uvm_report_info__675__context_name, (IData)(__Vtask_uvm_report_info__675__report_enabled_checked));
            }
        } else if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__681__id = "PH_TERMSTATE"s;
                        __Vfunc_uvm_report_enabled__681__severity = 0U;
                        __Vfunc_uvm_report_enabled__681__verbosity = 0x000001f4U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__682__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__682__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                           ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__683__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__683__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                           ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__681__verbosity, (IData)(__Vfunc_uvm_report_enabled__681__severity), __Vfunc_uvm_report_enabled__681__id, __Vtask_uvm_report_enabled__684__Vfuncout);
                        __Vfunc_uvm_report_enabled__681__Vfuncout 
                            = __Vtask_uvm_report_enabled__684__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__681__Vfuncout))) {
            __Vtask_uvm_report_info__685__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__685__context_name = ""s;
            __Vtask_uvm_report_info__685__line = 0x000008fbU;
            __Vtask_uvm_report_info__685__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_phase.svh"s;
            __Vtask_uvm_report_info__685__verbosity = 0x000001f4U;
            __Vtemp_2 = ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__686__Vfuncout);
                }(), __Vfunc_get_name__686__Vfuncout);
            __Vtask_uvm_report_info__685__message = VL_SFORMATF_N_NX("phase %@ has no outstanding objections",0,
                                                                     -1,
                                                                     &(__Vtemp_2)) ;
            __Vtask_uvm_report_info__685__id = "PH_TERMSTATE"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__687__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__687__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__688__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__688__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__685__id, __Vtask_uvm_report_info__685__message, __Vtask_uvm_report_info__685__verbosity, __Vtask_uvm_report_info__685__filename, __Vtask_uvm_report_info__685__line, __Vtask_uvm_report_info__685__context_name, (IData)(__Vtask_uvm_report_info__685__report_enabled_checked));
        }
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc_randomize\n"); );
        // Locals
        IData/*31:0*/ __Vfunc___Vbasic_randomize__691__Vfuncout;
        __Vfunc___Vbasic_randomize__691__Vfuncout = 0;
        // Body
        Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
        this->__VnoInFunc___Vsetup_constraints(vlSymsp);
        randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
        randomize__Vfuncrtn = (randomize__Vfuncrtn 
                               & ([&]() {
                    this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__691__Vfuncout);
                }(), __Vfunc___Vbasic_randomize__691__Vfuncout));
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::__VnoInFunc___Vbasic_randomize\n"); );
        // Body
        __Vbasic_randomize__Vfuncrtn = 1U;
    }

    void Vuart_example_uvm_pkg__03a__03auvm_phase::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::_ctor_var_reset\n"); );
        // Body
        (void)vlSymsp;  // Prevent unused variable warning
        __PVT__m_phase_type = 0;
        __PVT__m_state = 0;
        __PVT__m_run_count = 0;
        __PVT__max_ready_to_end_iters = 0;
        __PVT__m_num_procs_not_yet_returned = 0;
        __PVT__m_predecessors.atDefault() = 0;
        __PVT__m_successors.atDefault() = 0;
        __PVT__m_ready_to_end_count = 0;
        __PVT__m_jump_bkwd = 0;
        __PVT__m_jump_fwd = 0;
        __PVT__m_premature_end = 0;
        __Vtrigprevexpr_hf177dfba__0 = VL_SCOPED_RAND_RESET_I(1, 15660274532594046260ULL, 12809768261474360038ull);
        __Vtrigprevexpr_hc7ed5d52__0 = VL_SCOPED_RAND_RESET_I(1, 15660274532594046260ULL, 6038688298901931339ull);
        __Vtrigprevexpr_h02da170a__0 = 0;
        __Vtrigprevexpr_ha3f2f673__0 = 0;
        __Vtrigprevexpr_ha85e67e5__0 = 0;
        __Vtrigprevexpr_h3ce93667__0 = VL_SCOPED_RAND_RESET_I(1, 15660274532594046260ULL, 12698571668618224146ull);
        __Vtrigprevexpr_h7ae7f53e__0 = VL_SCOPED_RAND_RESET_I(1, 15660274532594046260ULL, 15877857291504186646ull);
        __Vtrigprevexpr_h7aedf16b__0 = VL_SCOPED_RAND_RESET_I(1, 15660274532594046260ULL, 5581022400573867047ull);
        __Vtrigprevexpr_h0d86bfde__0 = VL_SCOPED_RAND_RESET_I(1, 15660274532594046260ULL, 5161802409015531412ull);
        __Vtrigprevexpr_h0d73a8bb__0 = VL_SCOPED_RAND_RESET_I(1, 15660274532594046260ULL, 1680148406721100120ull);
        __Vtrigprevexpr_h0d0e4411__0 = VL_SCOPED_RAND_RESET_I(1, 15660274532594046260ULL, 15546746918259245981ull);
        __Vtrigprevexpr_h0d7fb647__0 = VL_SCOPED_RAND_RESET_I(1, 15660274532594046260ULL, 8715844440707277642ull);
    }

    std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase>& obj) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::VL_TO_STRING\n"); );
        // Body
        return (obj ? obj->to_string() : "null");
    }

    std::string Vuart_example_uvm_pkg__03a__03auvm_phase::to_string() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::to_string\n"); );
        // Body
        return ("'{"s + to_string_middle() + "}");
    }

    std::string Vuart_example_uvm_pkg__03a__03auvm_phase::to_string_middle() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_phase::to_string_middle\n"); );
        // Body
        std::string out;
        out += "m_phase_type:" + VL_TO_STRING(__PVT__m_phase_type);
        out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
        out += ", m_imp:" + VL_TO_STRING(__PVT__m_imp);
        out += ", m_state:" + VL_TO_STRING(__PVT__m_state);
        out += ", m_run_count:" + VL_TO_STRING(__PVT__m_run_count);
        out += ", m_phase_proc:" + VL_TO_STRING(__PVT__m_phase_proc);
        out += ", max_ready_to_end_iters:" + VL_TO_STRING(__PVT__max_ready_to_end_iters);
        out += ", m_num_procs_not_yet_returned:" + VL_TO_STRING(__PVT__m_num_procs_not_yet_returned);
        out += ", m_predecessors:" + VL_TO_STRING(__PVT__m_predecessors);
        out += ", m_successors:" + VL_TO_STRING(__PVT__m_successors);
        out += ", m_end_node:" + VL_TO_STRING(__PVT__m_end_node);
        out += ", m_sync:" + VL_TO_STRING(__PVT__m_sync);
        out += ", phase_done:" + VL_TO_STRING(__PVT__phase_done);
        out += ", m_ready_to_end_count:" + VL_TO_STRING(__PVT__m_ready_to_end_count);
        out += ", m_jump_bkwd:" + VL_TO_STRING(__PVT__m_jump_bkwd);
        out += ", m_jump_fwd:" + VL_TO_STRING(__PVT__m_jump_fwd);
        out += ", m_jump_phase:" + VL_TO_STRING(__PVT__m_jump_phase);
        out += ", m_premature_end:" + VL_TO_STRING(__PVT__m_premature_end);
        out += ", __Vtask_get_name__107__Vfuncout:" + VL_TO_STRING(__Vtask_get_name__107__Vfuncout);
        out += ", __Vtask_uvm_wait_for_nba_region__232____VDynScope_uvm_wait_for_nba_region_0:" + VL_TO_STRING(__Vtask_uvm_wait_for_nba_region__232____VDynScope_uvm_wait_for_nba_region_0);
        out += ", __Vtask___VforkTask_0__234____VDynScope_uvm_wait_for_nba_region_0:" + VL_TO_STRING(__Vtask___VforkTask_0__234____VDynScope_uvm_wait_for_nba_region_0);
        out += ", __Vtask_uvm_wait_for_nba_region__271____VDynScope_uvm_wait_for_nba_region_0:" + VL_TO_STRING(__Vtask_uvm_wait_for_nba_region__271____VDynScope_uvm_wait_for_nba_region_0);
        out += ", __Vtask___VforkTask_0__273____VDynScope_uvm_wait_for_nba_region_0:" + VL_TO_STRING(__Vtask___VforkTask_0__273____VDynScope_uvm_wait_for_nba_region_0);
        out += ", __Vtask_uvm_wait_for_nba_region__299____VDynScope_uvm_wait_for_nba_region_0:" + VL_TO_STRING(__Vtask_uvm_wait_for_nba_region__299____VDynScope_uvm_wait_for_nba_region_0);
        out += ", __Vtask___VforkTask_0__301____VDynScope_uvm_wait_for_nba_region_0:" + VL_TO_STRING(__Vtask___VforkTask_0__301____VDynScope_uvm_wait_for_nba_region_0);
        out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_object::to_string_middle();
        return (out);
    }
