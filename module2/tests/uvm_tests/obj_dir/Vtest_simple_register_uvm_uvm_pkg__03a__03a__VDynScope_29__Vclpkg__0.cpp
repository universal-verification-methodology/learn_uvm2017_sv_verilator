// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29::Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__triggered = 0;
    __PVT__last_trigger = VL_SCOPED_RAND_RESET_Q(64, 2400557191240704885ULL, 14228963972983550624ull);
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03a__VDynScope_29::to_string_middle\n"); );
    // Body
    std::string out;
    out += "triggered:" + VL_TO_STRING(__PVT__triggered);
    out += ", obj:" + VL_TO_STRING(__PVT__obj);
    out += ", last_trigger:" + VL_TO_STRING(__PVT__last_trigger);
    return (out);
}
