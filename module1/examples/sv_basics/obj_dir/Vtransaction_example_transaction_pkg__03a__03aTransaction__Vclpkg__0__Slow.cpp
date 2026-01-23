// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"

VL_ATTR_COLD void Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg___eval_static__TOP__transaction_pkg__03a__03aTransaction__Vclpkg(Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg___eval_static__TOP__transaction_pkg__03a__03aTransaction__Vclpkg\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__id_counter = 0U;
}

VL_ATTR_COLD void Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg___ctor_var_reset(Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg___ctor_var_reset\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__id_counter = 0;
}
