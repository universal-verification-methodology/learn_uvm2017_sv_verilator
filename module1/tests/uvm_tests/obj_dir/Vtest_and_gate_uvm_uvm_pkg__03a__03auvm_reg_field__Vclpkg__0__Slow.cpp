// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

VL_ATTR_COLD void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg\n"); );
    Vtest_and_gate_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_predefine_policies__1__Vfuncout;
    __Vfunc_m_predefine_policies__1__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_m_register_pair__2__Vfuncout;
    __Vfunc_m_register_pair__2__Vfuncout = 0;
    // Body
    vlSelfRef.__VnoInFunc_m_predefine_policies(vlSymsp, __Vfunc_m_predefine_policies__1__Vfuncout);
    vlSelfRef.__PVT__m_predefined = __Vfunc_m_predefine_policies__1__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz194_TBz191__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_reg_field"s, "uvm_reg_cbs"s, __Vfunc_m_register_pair__2__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_reg_cbs = __Vfunc_m_register_pair__2__Vfuncout;
}

VL_ATTR_COLD void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg___ctor_var_reset(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_field__Vclpkg___ctor_var_reset\n"); );
    Vtest_and_gate_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_max_size = 0;
    vlSelf->__PVT__m_policy_names.atDefault() = 0;
    vlSelf->__PVT__m_predefined = 0;
    vlSelf->__PVT__m_register_cb_uvm_reg_cbs = 0;
}
