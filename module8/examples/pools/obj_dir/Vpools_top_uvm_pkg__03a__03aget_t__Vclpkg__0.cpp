// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03aget_t::Vpools_top_uvm_pkg__03a__03aget_t(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03aget_t::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03aget_t::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03aget_t::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__t = VL_SCOPED_RAND_RESET_Q(64, 12660958201627560659ULL, 12247454108283186160ull);
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03aget_t>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03aget_t::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03aget_t::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03aget_t::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03aget_t::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03aget_t::to_string_middle\n"); );
    // Body
    std::string out;
    out += "name:" + VL_TO_STRING(__PVT__name);
    out += ", scope:" + VL_TO_STRING(__PVT__scope);
    out += ", rsrc:" + VL_TO_STRING(__PVT__rsrc);
    out += ", t:" + VL_TO_STRING(__PVT__t);
    return (out);
}
