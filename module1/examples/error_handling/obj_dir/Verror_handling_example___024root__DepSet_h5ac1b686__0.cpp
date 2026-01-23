// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Verror_handling_example.h for the primary calling header

#include "Verror_handling_example__pch.h"
#include "Verror_handling_example__Syms.h"
#include "Verror_handling_example___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Verror_handling_example___024root___dump_triggers__act(Verror_handling_example___024root* vlSelf);
#endif  // VL_DEBUG

void Verror_handling_example___024root___eval_triggers__act(Verror_handling_example___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Verror_handling_example___024root___eval_triggers__act\n"); );
    Verror_handling_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Verror_handling_example___024root___dump_triggers__act(vlSelf);
    }
#endif
}
