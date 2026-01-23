// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

VL_ATTR_COLD void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_vreg__Vclpkg(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_vreg__Vclpkg\n"); );
    Vtest_and_gate_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz197_TBz198__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_vreg"s, "uvm_vreg_cbs"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_vreg_cbs = __Vfunc_m_register_pair__0__Vfuncout;
}

VL_ATTR_COLD void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg__Vclpkg___ctor_var_reset(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_vreg__Vclpkg___ctor_var_reset\n"); );
    Vtest_and_gate_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_register_cb_uvm_vreg_cbs = 0;
}
