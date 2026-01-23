// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"
#include "Vdata_structures_example___024root.h"

VL_ATTR_COLD void Vdata_structures_example___024root___eval_static(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_static\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdata_structures_example___024root___eval_final(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_final\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vdata_structures_example___024root___eval_settle(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___eval_settle\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_structures_example___024root___dump_triggers__act(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___dump_triggers__act\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vdata_structures_example___024root___dump_triggers__nba(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___dump_triggers__nba\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vdata_structures_example___024root___ctor_var_reset(Vdata_structures_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___ctor_var_reset\n"); );
    Vdata_structures_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->data_structures_example__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->data_structures_example__DOT__unnamedblk2__DOT__i = 0;
    }
