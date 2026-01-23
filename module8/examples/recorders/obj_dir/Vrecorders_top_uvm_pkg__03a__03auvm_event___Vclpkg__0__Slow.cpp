// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

VL_ATTR_COLD void Vrecorders_top_uvm_pkg__03a__03auvm_event___Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event___Vclpkg(Vrecorders_top_uvm_pkg__03a__03auvm_event___Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_event___Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_event___Vclpkg\n"); );
    Vrecorders_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_cb__1__Vfuncout;
    __Vfunc_m_register_cb__1__Vfuncout = 0;
    // Body
    vlSelfRef.__VnoInFunc_m_register_cb(vlProcess, vlSymsp, __Vfunc_m_register_cb__1__Vfuncout);
    vlSelfRef.__PVT__m_cb_registered = __Vfunc_m_register_cb__1__Vfuncout;
}

VL_ATTR_COLD void Vrecorders_top_uvm_pkg__03a__03auvm_event___Vclpkg___ctor_var_reset(Vrecorders_top_uvm_pkg__03a__03auvm_event___Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_event___Vclpkg___ctor_var_reset\n"); );
    Vrecorders_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_cb_registered = 0;
}
