// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsignal_access.h for the primary calling header

#include "Vsignal_access__pch.h"

VL_ATTR_COLD void Vsignal_access___024root___eval_static__TOP(Vsignal_access___024root* vlSelf);

VL_ATTR_COLD void Vsignal_access___024root___eval_static(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_static\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsignal_access___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__signal_access__DOT__clk__0 
        = vlSelfRef.signal_access__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__signal_access__DOT__rst_n__0 
        = vlSelfRef.signal_access__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__signal_access__DOT__q__0 
        = vlSelfRef.signal_access__DOT__q;
}

VL_ATTR_COLD void Vsignal_access___024root___eval_static__TOP(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_static__TOP\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.signal_access__DOT__monitor_count = 0U;
}

VL_ATTR_COLD void Vsignal_access___024root___eval_final(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_final\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsignal_access___024root___eval_settle(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___eval_settle\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vsignal_access___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsignal_access___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsignal_access___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge signal_access.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge signal_access.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( signal_access.q)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsignal_access___024root___ctor_var_reset(Vsignal_access___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsignal_access___024root___ctor_var_reset\n"); );
    Vsignal_access__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->signal_access__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15593770162267594570ull);
    vlSelf->signal_access__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7046074131027383033ull);
    vlSelf->signal_access__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 280100379555711244ull);
    vlSelf->signal_access__DOT__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11140490980062319941ull);
    vlSelf->signal_access__DOT__q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17128134342721152668ull);
    vlSelf->signal_access__DOT__single_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2450401400425008088ull);
    vlSelf->signal_access__DOT__multi_bit = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7947636938381632108ull);
    vlSelf->signal_access__DOT__array_signal = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2257858257747218295ull);
    vlSelf->signal_access__DOT__monitor_count = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__signal_access__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__signal_access__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__signal_access__DOT__q__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
