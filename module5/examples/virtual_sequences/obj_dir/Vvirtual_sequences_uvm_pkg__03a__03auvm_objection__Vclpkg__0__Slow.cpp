// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

VL_ATTR_COLD void Vvirtual_sequences_uvm_pkg__03a__03auvm_objection__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_objection__Vclpkg(Vvirtual_sequences_uvm_pkg__03a__03auvm_objection__Vclpkg* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_objection__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_objection__Vclpkg\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_m_register_pair__0__Vfuncout;
    __Vfunc_m_register_pair__0__Vfuncout = 0;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz57_TBz58__Vclpkg.__VnoInFunc_m_register_pair(vlProcess, vlSymsp, "uvm_objection"s, "uvm_objection_callback"s, __Vfunc_m_register_pair__0__Vfuncout);
    vlSelfRef.__PVT__m_register_cb_uvm_objection_callback 
        = __Vfunc_m_register_pair__0__Vfuncout;
}

VL_ATTR_COLD void Vvirtual_sequences_uvm_pkg__03a__03auvm_objection__Vclpkg___ctor_var_reset(Vvirtual_sequences_uvm_pkg__03a__03auvm_objection__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_objection__Vclpkg___ctor_var_reset\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_register_cb_uvm_objection_callback = 0;
}
