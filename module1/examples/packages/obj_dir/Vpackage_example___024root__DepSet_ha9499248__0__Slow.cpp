// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpackage_example.h for the primary calling header

#include "Vpackage_example__pch.h"
#include "Vpackage_example___024root.h"

VL_ATTR_COLD void Vpackage_example___024root___eval_static(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_static\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpackage_example___024root___eval_final(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_final\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vpackage_example___024root___eval_settle(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___eval_settle\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpackage_example___024root___dump_triggers__act(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___dump_triggers__act\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vpackage_example___024root___dump_triggers__nba(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___dump_triggers__nba\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vpackage_example___024root___ctor_var_reset(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___ctor_var_reset\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->package_example__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->package_example__DOT__trans = VL_RAND_RESET_Q(49);
    vlSelf->package_example__DOT__condition = 0;
    vlSelf->package_example__DOT__unnamedblk1__DOT__timeout_val = 0;
    }
