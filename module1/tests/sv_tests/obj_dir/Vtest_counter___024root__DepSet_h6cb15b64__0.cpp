// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_counter.h for the primary calling header

#include "Vtest_counter__pch.h"
#include "Vtest_counter__Syms.h"
#include "Vtest_counter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_counter___024root___dump_triggers__act(Vtest_counter___024root* vlSelf);
#endif  // VL_DEBUG

void Vtest_counter___024root___eval_triggers__act(Vtest_counter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_counter___024root___eval_triggers__act\n"); );
    Vtest_counter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.test_counter__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.test_counter__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__clk__0 
        = vlSelfRef.test_counter__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__test_counter__DOT__rst_n__0 
        = vlSelfRef.test_counter__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_counter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
