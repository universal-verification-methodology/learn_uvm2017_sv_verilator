// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03a__VDynScope_32::Varchitecture_uvm_pkg__03a__03a__VDynScope_32(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03a__VDynScope_32::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Varchitecture_uvm_pkg__03a__03a__VDynScope_32::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03a__VDynScope_32::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03a__VDynScope_32>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03a__VDynScope_32::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03a__VDynScope_32::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03a__VDynScope_32::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03a__VDynScope_32::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03a__VDynScope_32::to_string_middle\n"); );
    // Body
    std::string out;
    out += "seq:" + VL_TO_STRING(__PVT__seq);
    out += ", phase:" + VL_TO_STRING(__PVT__phase);
    return (out);
}
