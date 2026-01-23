// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vreset_patterns.h for the primary calling header

#include "Vreset_patterns__pch.h"

VL_ATTR_COLD void Vreset_patterns___024root___eval_static(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_static\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__reset_patterns__DOT__clk__0 
        = vlSelfRef.reset_patterns__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_patterns__DOT__rst_n__0 
        = vlSelfRef.reset_patterns__DOT__rst_n;
}

VL_ATTR_COLD void Vreset_patterns___024root___eval_final(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_final\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vreset_patterns___024root___eval_settle(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___eval_settle\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vreset_patterns___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vreset_patterns___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vreset_patterns___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge reset_patterns.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge reset_patterns.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vreset_patterns___024root___ctor_var_reset(Vreset_patterns___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vreset_patterns___024root___ctor_var_reset\n"); );
    Vreset_patterns__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->reset_patterns__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3703627502664421551ull);
    vlSelf->reset_patterns__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17915148930751984820ull);
    vlSelf->reset_patterns__DOT__rst_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10507700028114209189ull);
    vlSelf->reset_patterns__DOT__reg_async = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14774646522438185847ull);
    vlSelf->reset_patterns__DOT__reg_sync = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6486294746119889515ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__reset_patterns__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6500311909403398582ull);
    vlSelf->__Vtrigprevexpr___TOP__reset_patterns__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10127086229144389389ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
