// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

std::string VL_TO_STRING(const Vrecorders_top_access_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{read_time:" + VL_TO_STRING(obj.__PVT__read_time);
    out += ", write_time:" + VL_TO_STRING(obj.__PVT__write_time);
    out += ", read_count:" + VL_TO_STRING(obj.__PVT__read_count);
    out += ", write_count:" + VL_TO_STRING(obj.__PVT__write_count);
    out += "}";
    return (out);
}

Vrecorders_top_uvm_pkg__03a__03auvm_resource_types::Vrecorders_top_uvm_pkg__03a__03auvm_resource_types(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_resource_types::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_resource_types::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_resource_types::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_resource_types>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_resource_types::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_resource_types::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_resource_types::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_resource_types::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_resource_types::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
