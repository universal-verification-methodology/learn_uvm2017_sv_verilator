// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

std::string VL_TO_STRING(const Vuart_example_uart_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vuart_example_uart_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
