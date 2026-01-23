// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg::Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__n_bytes = 0;
    __PVT__start_offset = 0;
    __PVT__end_offset = 0;
    __PVT__mode = 0;
    __PVT__locality = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_mem_mam_cfg::to_string_middle\n"); );
    // Body
    std::string out;
    out += "n_bytes:" + VL_TO_STRING(__PVT__n_bytes);
    out += ", start_offset:" + VL_TO_STRING(__PVT__start_offset);
    out += ", end_offset:" + VL_TO_STRING(__PVT__end_offset);
    out += ", mode:" + VL_TO_STRING(__PVT__mode);
    out += ", locality:" + VL_TO_STRING(__PVT__locality);
    return (out);
}
