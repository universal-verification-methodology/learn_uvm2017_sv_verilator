// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

Vtransactions_uvm_pkg__03a__03a__VDynScope_24::Vtransactions_uvm_pkg__03a__03a__VDynScope_24(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03a__VDynScope_24::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03a__VDynScope_24::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03a__VDynScope_24::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__triggered = 0;
    __PVT__last_trigger = VL_SCOPED_RAND_RESET_Q(64, 10137007569723261778ULL, 14228963972983550624ull);
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03a__VDynScope_24>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03a__VDynScope_24::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03a__VDynScope_24::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03a__VDynScope_24::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03a__VDynScope_24::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03a__VDynScope_24::to_string_middle\n"); );
    // Body
    std::string out;
    out += "triggered:" + VL_TO_STRING(__PVT__triggered);
    out += ", obj:" + VL_TO_STRING(__PVT__obj);
    out += ", last_trigger:" + VL_TO_STRING(__PVT__last_trigger);
    return (out);
}
