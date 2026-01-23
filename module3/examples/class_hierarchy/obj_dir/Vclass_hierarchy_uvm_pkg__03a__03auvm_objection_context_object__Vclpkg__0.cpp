// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::__VnoInFunc_clear(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::__VnoInFunc_clear\n"); );
    // Body
    this->__PVT__obj = VlNull{};
    this->__PVT__source_obj = VlNull{};
    this->__PVT__description = ""s;
    this->__PVT__count = 0U;
    this->__PVT__objection = VlNull{};
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__count = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_objection_context_object::to_string_middle\n"); );
    // Body
    std::string out;
    out += "obj:" + VL_TO_STRING(__PVT__obj);
    out += ", source_obj:" + VL_TO_STRING(__PVT__source_obj);
    out += ", description:" + VL_TO_STRING(__PVT__description);
    out += ", count:" + VL_TO_STRING(__PVT__count);
    out += ", objection:" + VL_TO_STRING(__PVT__objection);
    return (out);
}
