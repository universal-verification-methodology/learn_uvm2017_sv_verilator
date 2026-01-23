// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

VL_ATTR_COLD void Vvirtual_sequences_uvm_pkg__03a__03auvm_root__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_root__Vclpkg(Vvirtual_sequences_uvm_pkg__03a__03auvm_root__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_root__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_root__Vclpkg\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__m_relnotes_done = 0U;
    vlSelfRef.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable = 1U;
}

VL_ATTR_COLD void Vvirtual_sequences_uvm_pkg__03a__03auvm_root__Vclpkg___ctor_var_reset(Vvirtual_sequences_uvm_pkg__03a__03auvm_root__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_root__Vclpkg___ctor_var_reset\n"); );
    Vvirtual_sequences__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_relnotes_done = 0;
    vlSelf->__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable = 0;
}
