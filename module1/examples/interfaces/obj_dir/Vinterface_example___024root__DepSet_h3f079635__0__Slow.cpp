// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"
#include "Vinterface_example___024root.h"

VL_ATTR_COLD void Vinterface_example___024root___eval_static(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_static\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__interface_example__DOT__clk__0 
        = vlSelfRef.interface_example__DOT__clk;
}

VL_ATTR_COLD void Vinterface_example___024root___eval_final(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_final\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vinterface_example___024root___eval_settle(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___eval_settle\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinterface_example___024root___dump_triggers__act(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___dump_triggers__act\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge interface_example.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vinterface_example___024root___dump_triggers__nba(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___dump_triggers__nba\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge interface_example.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vinterface_example___024root___ctor_var_reset(Vinterface_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinterface_example___024root___ctor_var_reset\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->interface_example__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->interface_example__DOT____Vcellout__dut__pready = VL_RAND_RESET_I(1);
    vlSelf->interface_example__DOT____Vcellout__dut__prdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->interface_example__DOT__dut__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__interface_example__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
