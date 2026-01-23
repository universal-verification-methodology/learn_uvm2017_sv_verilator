// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

VL_ATTR_COLD void Vuart_example_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg___ctor_var_reset(Vuart_example_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg___ctor_var_reset\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__ready = 0;
    vlSelf->__PVT__tracing = 0;
}
