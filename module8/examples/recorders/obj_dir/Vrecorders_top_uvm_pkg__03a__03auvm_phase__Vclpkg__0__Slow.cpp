// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

VL_ATTR_COLD void Vrecorders_top_uvm_pkg__03a__03auvm_phase__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg(Vrecorders_top_uvm_pkg__03a__03auvm_phase__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_phase__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_phase__Vclpkg\n"); );
    Vrecorders_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz23_TBz24__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_phase"s, "uvm_phase_cb"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_phase_cb = __Vfunc_m_register_pair__0__Vfuncout;
    vlSelfRef.__PVT__m_default_max_ready_to_end_iters = 0x00000014U;
    vlSelfRef.__PVT__m_phase_hopper = VL_NEW(Vrecorders_top_std__03a__03amailbox__Tz23, vlSymsp, 0U);
}

VL_ATTR_COLD void Vrecorders_top_uvm_pkg__03a__03auvm_phase__Vclpkg___ctor_var_reset(Vrecorders_top_uvm_pkg__03a__03auvm_phase__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_phase__Vclpkg___ctor_var_reset\n"); );
    Vrecorders_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_register_cb_uvm_phase_cb = 0;
    vlSelf->__PVT__m_default_max_ready_to_end_iters = 0;
    vlSelf->__PVT__m_executing_phases.atDefault() = 0;
    vlSelf->__PVT__m_phase_trace = 0;
    vlSelf->__PVT__m_use_ovm_run_semantic = 0;
    vlSelf->__PVT__m_print_successors__Vstatic__level = 0;
}
