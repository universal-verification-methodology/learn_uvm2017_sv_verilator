// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"
#include "Verror_handling_example___024root.h"

VL_ATTR_COLD void Verror_handling_example___024root___eval_static(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_static\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Verror_handling_example___024root___eval_final(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_final\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Verror_handling_example___024root___eval_settle(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_settle\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Verror_handling_example___024root___dump_triggers__act(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___dump_triggers__act\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Verror_handling_example___024root___dump_triggers__nba(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___dump_triggers__nba\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Verror_handling_example___024root___ctor_var_reset(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___ctor_var_reset\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    }
