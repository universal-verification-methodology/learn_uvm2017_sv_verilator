// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vinterface_example.h for the primary calling header

#include "Vinterface_example__pch.h"

VL_ATTR_COLD void Vinterface_example_apb_if___ctor_var_reset(Vinterface_example_apb_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vinterface_example_apb_if___ctor_var_reset\n"); );
    Vinterface_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5365422930610402651ull);
    vlSelf->penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10310706929790612258ull);
    vlSelf->pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3040259829508521558ull);
    vlSelf->paddr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14875722346688934266ull);
    vlSelf->pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 876536812074066652ull);
}
