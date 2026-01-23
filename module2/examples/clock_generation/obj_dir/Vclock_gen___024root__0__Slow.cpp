// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclock_gen.h for the primary calling header

#include "Vclock_gen__pch.h"

VL_ATTR_COLD void Vclock_gen___024root___eval_static__TOP(Vclock_gen___024root* vlSelf);

VL_ATTR_COLD void Vclock_gen___024root___eval_static(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_static\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vclock_gen___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clock_gen__DOT__clk1__0 
        = vlSelfRef.clock_gen__DOT__clk1;
    vlSelfRef.__Vtrigprevexpr___TOP__clock_gen__DOT__clk2__0 
        = vlSelfRef.clock_gen__DOT__clk2;
    vlSelfRef.__Vtrigprevexpr___TOP__clock_gen__DOT__clk3__0 
        = vlSelfRef.clock_gen__DOT__clk3;
    vlSelfRef.__Vtrigprevexpr_h588af64e__1 = (1U & 
                                              (~ (IData)(vlSelfRef.clock_gen__DOT__clk_stop)));
}

VL_ATTR_COLD void Vclock_gen___024root___eval_static__TOP(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_static__TOP\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clock_gen__DOT__clk1_edges = 0U;
    vlSelfRef.clock_gen__DOT__clk2_edges = 0U;
    vlSelfRef.clock_gen__DOT__clk3_edges = 0U;
}

VL_ATTR_COLD void Vclock_gen___024root___eval_initial__TOP(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_initial__TOP\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("============================================================\nClock Generation Examples\n============================================================\n\nExample 1: Simple Clock Generation\n  Clock period: 10 ns\n",0);
}

VL_ATTR_COLD void Vclock_gen___024root___eval_final(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_final\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vclock_gen___024root___eval_settle(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___eval_settle\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vclock_gen___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vclock_gen___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vclock_gen___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clock_gen.clk1)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge clock_gen.clk2)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge clock_gen.clk3)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( (~ clock_gen.clk_stop))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vclock_gen___024root___ctor_var_reset(Vclock_gen___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclock_gen___024root___ctor_var_reset\n"); );
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock_gen__DOT__clk1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17216913142356162270ull);
    vlSelf->clock_gen__DOT__clk2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2050085415900215057ull);
    vlSelf->clock_gen__DOT__clk3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10118968715771558781ull);
    vlSelf->clock_gen__DOT__clk_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11580385134493643503ull);
    vlSelf->clock_gen__DOT__clk_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2660783306412362650ull);
    vlSelf->clock_gen__DOT__clk_stop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5422261826998141988ull);
    vlSelf->clock_gen__DOT__clk_stopped = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7257197521498173196ull);
    vlSelf->clock_gen__DOT__clk1_edges = 0;
    vlSelf->clock_gen__DOT__clk2_edges = 0;
    vlSelf->clock_gen__DOT__clk3_edges = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock_gen__DOT__clk1__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock_gen__DOT__clk2__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock_gen__DOT__clk3__0 = 0;
    vlSelf->__Vtrigprevexpr_h588af64e__1 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
