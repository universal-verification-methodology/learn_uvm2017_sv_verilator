// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg::Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg::to_string_middle\n"); );
    // Body
    std::string out;
    out += "db:" + VL_TO_STRING(__PVT__db);
    out += ", scope:" + VL_TO_STRING(__PVT__scope);
    out += ", stream_type_name:" + VL_TO_STRING(__PVT__stream_type_name);
    return (out);
}
