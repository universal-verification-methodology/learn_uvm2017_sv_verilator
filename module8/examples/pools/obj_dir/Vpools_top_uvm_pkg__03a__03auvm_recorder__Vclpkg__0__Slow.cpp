// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

VL_ATTR_COLD void Vpools_top_uvm_pkg__03a__03auvm_recorder__Vclpkg___ctor_var_reset(Vpools_top_uvm_pkg__03a__03auvm_recorder__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_recorder__Vclpkg___ctor_var_reset\n"); );
    Vpools_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_ids_by_recorder.atDefault() = 0;
    vlSelf->__PVT__m_id = 0;
}
