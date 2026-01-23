// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_structures_example.h for the primary calling header

#include "Vdata_structures_example__pch.h"

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

bool Vdata_structures_example___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_structures_example___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_structures_example___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vdata_structures_example___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
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
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
