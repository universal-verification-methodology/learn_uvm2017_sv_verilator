// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

std::string VL_TO_STRING(const Vuart_example_access_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_resource_types__Vclpkg::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{read_time:" + VL_TO_STRING(obj.__PVT__read_time);
    out += ", write_time:" + VL_TO_STRING(obj.__PVT__write_time);
    out += ", read_count:" + VL_TO_STRING(obj.__PVT__read_count);
    out += ", write_count:" + VL_TO_STRING(obj.__PVT__write_count);
    out += "}";
    return (out);
}

Vuart_example_uvm_pkg__03a__03auvm_resource_types::Vuart_example_uvm_pkg__03a__03auvm_resource_types(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_resource_types::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vuart_example_uvm_pkg__03a__03auvm_resource_types::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_resource_types::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource_types>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_resource_types::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_resource_types::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_resource_types::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_resource_types::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_resource_types::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
