// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::__VnoInFunc_get_immediate_children(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element> s, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element>> &children) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::__VnoInFunc_get_immediate_children\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__2__Vfuncout;
    __Vfunc___VBasicRand__2__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__2__Vfuncout);
            }(), __Vfunc___VBasicRand__2__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::~Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_structure_proxy__Tz61::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vpools_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
