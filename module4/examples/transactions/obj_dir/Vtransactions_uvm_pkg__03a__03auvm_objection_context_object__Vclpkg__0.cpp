// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::__VnoInFunc_clear(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::__VnoInFunc_clear\n"); );
    // Body
    this->__PVT__obj = VlNull{};
    this->__PVT__source_obj = VlNull{};
    this->__PVT__description = ""s;
    this->__PVT__count = 0U;
    this->__PVT__objection = VlNull{};
}

Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::Vtransactions_uvm_pkg__03a__03auvm_objection_context_object(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__count = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_objection_context_object>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_objection_context_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "obj:" + VL_TO_STRING(__PVT__obj);
    out += ", source_obj:" + VL_TO_STRING(__PVT__source_obj);
    out += ", description:" + VL_TO_STRING(__PVT__description);
    out += ", count:" + VL_TO_STRING(__PVT__count);
    out += ", objection:" + VL_TO_STRING(__PVT__objection);
    return (out);
}
