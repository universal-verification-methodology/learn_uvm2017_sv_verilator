// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vapb_slave.h for the primary calling header

#include "Vapb_slave__pch.h"
#include "Vapb_slave___024root.h"

VL_ATTR_COLD void Vapb_slave___024root___eval_static(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval_static\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vapb_slave___024root___eval_initial(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval_initial\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vapb_slave___024root___eval_final(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval_final\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vapb_slave___024root___eval_settle(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___eval_settle\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_slave___024root___dump_triggers__act(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___dump_triggers__act\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vapb_slave___024root___dump_triggers__nba(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___dump_triggers__nba\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vapb_slave___024root___ctor_var_reset(Vapb_slave___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vapb_slave___024root___ctor_var_reset\n"); );
    Vapb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->psel = VL_RAND_RESET_I(1);
    vlSelf->penable = VL_RAND_RESET_I(1);
    vlSelf->pwrite = VL_RAND_RESET_I(1);
    vlSelf->paddr = VL_RAND_RESET_I(16);
    vlSelf->pwdata = VL_RAND_RESET_I(32);
    vlSelf->prdata = VL_RAND_RESET_I(32);
    vlSelf->pready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->apb_slave__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
