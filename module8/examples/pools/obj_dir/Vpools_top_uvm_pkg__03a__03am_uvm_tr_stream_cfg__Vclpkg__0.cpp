// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg::Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg::to_string_middle\n"); );
    // Body
    std::string out;
    out += "db:" + VL_TO_STRING(__PVT__db);
    out += ", scope:" + VL_TO_STRING(__PVT__scope);
    out += ", stream_type_name:" + VL_TO_STRING(__PVT__stream_type_name);
    return (out);
}
