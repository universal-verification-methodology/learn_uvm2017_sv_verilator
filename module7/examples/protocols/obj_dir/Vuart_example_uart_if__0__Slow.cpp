// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

VL_ATTR_COLD void Vuart_example_uart_if___ctor_var_reset(Vuart_example_uart_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vuart_example_uart_if___ctor_var_reset\n"); );
    Vuart_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->tx_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14770307426006424685ull);
    vlSelf->tx_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10922211238440073863ull);
    vlSelf->tx_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1130330860826808631ull);
}
