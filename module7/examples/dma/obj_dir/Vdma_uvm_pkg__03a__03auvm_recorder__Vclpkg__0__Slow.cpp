// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

VL_ATTR_COLD void Vdma_uvm_pkg__03a__03auvm_recorder__Vclpkg___ctor_var_reset(Vdma_uvm_pkg__03a__03auvm_recorder__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_recorder__Vclpkg___ctor_var_reset\n"); );
    Vdma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__m_ids_by_recorder.atDefault() = 0;
    vlSelf->__PVT__m_id = 0;
}
