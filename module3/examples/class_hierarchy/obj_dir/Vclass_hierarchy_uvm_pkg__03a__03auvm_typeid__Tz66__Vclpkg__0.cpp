// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66__Vclpkg::__VnoInFunc_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66, vlSymsp);
    }
    get__Vfuncrtn = this->__PVT__m_b_inst;
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66(Vclass_hierarchy__Syms* __restrict vlSymsp)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base(vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::~Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid__Tz66::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vclass_hierarchy_uvm_pkg__03a__03auvm_typeid_base::to_string_middle();
    return (out);
}
