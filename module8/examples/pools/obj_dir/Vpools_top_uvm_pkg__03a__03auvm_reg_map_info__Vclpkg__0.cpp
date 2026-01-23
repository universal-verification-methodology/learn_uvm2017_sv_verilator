// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03auvm_reg_map_info::Vpools_top_uvm_pkg__03a__03auvm_reg_map_info(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_map_info::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_map_info::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_map_info::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__offset = 0;
    __PVT__unmapped = 0;
    __PVT__addr.atDefault() = 0;
    VL_ZERO_W(160, __PVT__mem_range);
    __PVT__is_initialized = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_map_info>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_map_info::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_reg_map_info::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_map_info::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_reg_map_info::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_map_info::to_string_middle\n"); );
    // Body
    std::string out;
    out += "offset:" + VL_TO_STRING(__PVT__offset);
    out += ", rights:" + VL_TO_STRING(__PVT__rights);
    out += ", unmapped:" + VL_TO_STRING(__PVT__unmapped);
    out += ", addr:" + VL_TO_STRING(__PVT__addr);
    out += ", frontdoor:" + VL_TO_STRING(__PVT__frontdoor);
    out += ", mem_range:" + VL_TO_STRING(__PVT__mem_range);
    out += ", is_initialized:" + VL_TO_STRING(__PVT__is_initialized);
    return (out);
}
