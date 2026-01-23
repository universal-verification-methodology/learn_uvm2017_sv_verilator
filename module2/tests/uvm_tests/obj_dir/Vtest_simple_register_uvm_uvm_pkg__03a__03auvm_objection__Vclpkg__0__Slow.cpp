// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

VL_ATTR_COLD void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_objection__Vclpkg(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_objection__Vclpkg\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz15_TBz16__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_objection"s, "uvm_objection_callback"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_objection_callback 
        = __Vfunc_m_register_pair__0__Vfuncout;
}

VL_ATTR_COLD void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg___ctor_var_reset(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_objection__Vclpkg___ctor_var_reset\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_register_cb_uvm_objection_callback = 0;
}
