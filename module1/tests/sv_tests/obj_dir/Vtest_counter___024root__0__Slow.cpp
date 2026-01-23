// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_counter.h for the primary calling header

#include "Vtest_counter__pch.h"

VL_ATTR_COLD void Vtest_counter___024root___eval_static(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_static\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__clk__0 
        = vlSelfRef.test_counter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__rst_n__0 
        = vlSelfRef.test_counter__DOT__rst_n;
}

VL_ATTR_COLD void Vtest_counter___024root___eval_final(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_final\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtest_counter___024root___eval_settle(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_settle\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vtest_counter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_counter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtest_counter___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge test_counter.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge test_counter.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_counter___024root___ctor_var_reset(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___ctor_var_reset\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->test_counter__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12420031768787571501ull);
    vlSelf->test_counter__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7753636639822217101ull);
    vlSelf->test_counter__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13530964856758481912ull);
    vlSelf->test_counter__DOT__count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15329142146354082186ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__test_counter__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15530420578990949250ull);
    vlSelf->__Vtrigprevexpr___TOP__test_counter__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18393655057309378258ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
