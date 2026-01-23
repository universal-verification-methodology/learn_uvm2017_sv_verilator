// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::__VnoInFunc_clear(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::__VnoInFunc_clear\n"); );
    // Body
    this->__PVT__obj = VlNull{};
    this->__PVT__source_obj = VlNull{};
    this->__PVT__description = ""s;
    this->__PVT__count = 0U;
    this->__PVT__objection = VlNull{};
}

Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::Vpools_top_uvm_pkg__03a__03auvm_objection_context_object(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__count = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_objection_context_object>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_objection_context_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "obj:" + VL_TO_STRING(__PVT__obj);
    out += ", source_obj:" + VL_TO_STRING(__PVT__source_obj);
    out += ", description:" + VL_TO_STRING(__PVT__description);
    out += ", count:" + VL_TO_STRING(__PVT__count);
    out += ", objection:" + VL_TO_STRING(__PVT__objection);
    return (out);
}
