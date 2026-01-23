// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_sequence_request::Varchitecture_uvm_pkg__03a__03auvm_sequence_request(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequence_request::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Varchitecture_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequence_request::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__grant = 0;
    __PVT__sequence_id = 0;
    __PVT__request_id = 0;
    __PVT__item_priority = 0;
    __PVT__request = 0;
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_request>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequence_request::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_sequence_request::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequence_request::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_sequence_request::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_sequence_request::to_string_middle\n"); );
    // Body
    std::string out;
    out += "grant:" + VL_TO_STRING(__PVT__grant);
    out += ", sequence_id:" + VL_TO_STRING(__PVT__sequence_id);
    out += ", request_id:" + VL_TO_STRING(__PVT__request_id);
    out += ", item_priority:" + VL_TO_STRING(__PVT__item_priority);
    out += ", process_id:" + VL_TO_STRING(__PVT__process_id);
    out += ", request:" + VL_TO_STRING(__PVT__request);
    out += ", sequence_ptr:" + VL_TO_STRING(__PVT__sequence_ptr);
    return (out);
}
