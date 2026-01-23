// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10::Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03a__VDynScope_10::to_string_middle\n"); );
    // Body
    std::string out;
    out += "phase:" + VL_TO_STRING(__PVT__phase);
    out += ", comp:" + VL_TO_STRING(__PVT__comp);
    return (out);
}
