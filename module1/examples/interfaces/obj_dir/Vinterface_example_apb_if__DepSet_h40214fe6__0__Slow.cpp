// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"
#include "Vinterface_example_apb_if.h"

VL_ATTR_COLD void Vinterface_example_apb_if___ctor_var_reset(Vinterface_example_apb_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vinterface_example_apb_if___ctor_var_reset\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->psel = VL_RAND_RESET_I(1);
    vlSelf->penable = VL_RAND_RESET_I(1);
    vlSelf->pwrite = VL_RAND_RESET_I(1);
    vlSelf->paddr = VL_RAND_RESET_I(16);
    vlSelf->pwdata = VL_RAND_RESET_I(32);
}
