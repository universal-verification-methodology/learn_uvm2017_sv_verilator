// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

VL_ATTR_COLD void Vtest_simple_register_uvm_register_if___ctor_var_reset(Vtest_simple_register_uvm_register_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vtest_simple_register_uvm_register_if___ctor_var_reset\n"); );
    Vtest_simple_register_uvm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030669854614834172ull);
    vlSelf->d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1720370409040345145ull);
    vlSelf->q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8861071527689086543ull);
}
