// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpackage_example.h for the primary calling header

#include "Vpackage_example__pch.h"

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

bool Vpackage_example___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpackage_example___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vpackage_example___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpackage_example___024root___ctor_var_reset(Vpackage_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpackage_example___024root___ctor_var_reset\n"); );
    Vpackage_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->package_example__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4047920632570226896ull);
    vlSelf->package_example__DOT__trans = VL_SCOPED_RAND_RESET_Q(49, __VscopeHash, 18024950248179923150ull);
    vlSelf->package_example__DOT__condition = 0;
    vlSelf->package_example__DOT__unnamedblk1__DOT__timeout_val = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
