// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

Vuart_example_uvm_pkg__03a__03a__VDynScope_48::Vuart_example_uvm_pkg__03a__03a__VDynScope_48(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_48::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vuart_example_uvm_pkg__03a__03a__VDynScope_48::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_48::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__triggered = 0;
    __PVT__last_trigger = VL_SCOPED_RAND_RESET_Q(64, 5564509274031911375ULL, 14228963972983550624ull);
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_48>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_48::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03a__VDynScope_48::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_48::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03a__VDynScope_48::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03a__VDynScope_48::to_string_middle\n"); );
    // Body
    std::string out;
    out += "triggered:" + VL_TO_STRING(__PVT__triggered);
    out += ", obj:" + VL_TO_STRING(__PVT__obj);
    out += ", last_trigger:" + VL_TO_STRING(__PVT__last_trigger);
    return (out);
}
