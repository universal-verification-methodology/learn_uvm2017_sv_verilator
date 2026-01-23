// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_object(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_object\n"); );
    // Body
    create_object__Vfuncrtn = VlNull{};
}

void Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_component(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_component\n"); );
    // Body
    create_component__Vfuncrtn = VlNull{};
}

void Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_get_type_name\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_initialize(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_initialize\n"); );
}

Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::~Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
