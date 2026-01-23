// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"
#include "Vtransaction_example__Syms.h"
#include "Vtransaction_example___024root.h"

VL_ATTR_COLD void Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg___eval_static__TOP__transaction_pkg__03a__03aTransaction__Vclpkg(Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg* vlSelf);

VL_ATTR_COLD void Vtransaction_example___024root___eval_static(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval_static\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtransaction_example_transaction_pkg__03a__03aTransaction__Vclpkg___eval_static__TOP__transaction_pkg__03a__03aTransaction__Vclpkg((&vlSymsp->TOP__transaction_pkg__03a__03aTransaction__Vclpkg));
}
