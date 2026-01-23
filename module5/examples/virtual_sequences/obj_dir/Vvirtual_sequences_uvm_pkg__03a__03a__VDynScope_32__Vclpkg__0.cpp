// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32::Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_32::to_string_middle\n"); );
    // Body
    std::string out;
    out += "seq:" + VL_TO_STRING(__PVT__seq);
    out += ", phase:" + VL_TO_STRING(__PVT__phase);
    return (out);
}
