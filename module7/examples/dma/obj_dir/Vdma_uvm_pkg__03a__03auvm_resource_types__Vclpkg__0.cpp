// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

std::string VL_TO_STRING(const Vdma_access_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_resource_types__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{read_time:" + VL_TO_STRING(obj.__PVT__read_time);
    out += ", write_time:" + VL_TO_STRING(obj.__PVT__write_time);
    out += ", read_count:" + VL_TO_STRING(obj.__PVT__read_count);
    out += ", write_count:" + VL_TO_STRING(obj.__PVT__write_count);
    out += "}";
    return (out);
}

Vdma_uvm_pkg__03a__03auvm_resource_types::Vdma_uvm_pkg__03a__03auvm_resource_types(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_types::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_resource_types::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_types::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_types>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_types::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_resource_types::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_types::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_resource_types::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_resource_types::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
