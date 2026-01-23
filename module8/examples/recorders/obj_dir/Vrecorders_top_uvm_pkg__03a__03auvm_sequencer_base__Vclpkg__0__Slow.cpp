// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

VL_ATTR_COLD void Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg(Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg___eval_static__TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg\n"); );
    Vrecorders_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__g_sequence_id = 1U;
    vlSelfRef.__PVT__g_sequencer_id = 1U;
}

VL_ATTR_COLD void Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg___ctor_var_reset(Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg___ctor_var_reset\n"); );
    Vrecorders_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__g_request_id = 0;
    vlSelf->__PVT__g_sequence_id = 0;
    vlSelf->__PVT__g_sequencer_id = 0;
}
