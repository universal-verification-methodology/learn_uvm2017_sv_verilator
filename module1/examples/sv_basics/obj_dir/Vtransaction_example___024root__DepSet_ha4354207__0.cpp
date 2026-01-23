// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransaction_example.h for the primary calling header

#include "Vtransaction_example__pch.h"
#include "Vtransaction_example__Syms.h"
#include "Vtransaction_example___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtransaction_example___024root___dump_triggers__act(Vtransaction_example___024root* vlSelf);
#endif  // VL_DEBUG

void Vtransaction_example___024root___eval_triggers__act(Vtransaction_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtransaction_example___024root___eval_triggers__act\n"); );
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtransaction_example___024root___dump_triggers__act(vlSelf);
    }
#endif
}
