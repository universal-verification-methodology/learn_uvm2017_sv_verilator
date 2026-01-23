// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

std::string VL_TO_STRING(const Vclass_hierarchy_access_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{read_time:" + VL_TO_STRING(obj.__PVT__read_time);
    out += ", write_time:" + VL_TO_STRING(obj.__PVT__write_time);
    out += ", read_count:" + VL_TO_STRING(obj.__PVT__read_count);
    out += ", write_count:" + VL_TO_STRING(obj.__PVT__write_count);
    out += "}";
    return (out);
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types::Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_resource_types::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
