// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

Vuart_example_uvm_pkg__03a__03a__VDynScope_55::Vuart_example_uvm_pkg__03a__03a__VDynScope_55(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_55::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vuart_example_uvm_pkg__03a__03a__VDynScope_55::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_55::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__k = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_55>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_55::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03a__VDynScope_55::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_55::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03a__VDynScope_55::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_55::to_string_middle\n"); );
    // Body
    std::string out;
    out += "k:" + VL_TO_STRING(__PVT__k);
    return (out);
}
