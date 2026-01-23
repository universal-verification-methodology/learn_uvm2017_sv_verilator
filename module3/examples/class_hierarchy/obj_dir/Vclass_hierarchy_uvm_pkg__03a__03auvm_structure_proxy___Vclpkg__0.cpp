// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::__VnoInFunc_get_immediate_children(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> s, VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component>> &children) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::__VnoInFunc_get_immediate_children\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__2__Vfuncout;
    __Vfunc___VBasicRand__2__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__2__Vfuncout);
            }(), __Vfunc___VBasicRand__2__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::__VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::__VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::~Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_structure_proxy_::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vclass_hierarchy_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
