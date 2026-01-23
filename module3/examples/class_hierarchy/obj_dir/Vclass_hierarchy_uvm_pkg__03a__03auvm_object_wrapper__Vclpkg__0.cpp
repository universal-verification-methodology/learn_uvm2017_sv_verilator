// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_object(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_object\n"); );
    // Body
    create_object__Vfuncrtn = VlNull{};
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_component(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_component\n"); );
    // Body
    create_component__Vfuncrtn = VlNull{};
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_get_type_name\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_initialize(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_initialize\n"); );
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::~Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
