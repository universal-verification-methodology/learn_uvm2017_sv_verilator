// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

Vtransactions_uvm_pkg__03a__03auvm_visitor_::Vtransactions_uvm_pkg__03a__03auvm_visitor_(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_begin_v(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_begin_v\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_end_v(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_end_v\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_visit(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> node) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_visit\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__2__Vfuncout;
    __Vfunc___VBasicRand__2__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__2__Vfuncout);
            }(), __Vfunc___VBasicRand__2__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtransactions_uvm_pkg__03a__03auvm_visitor_::~Vtransactions_uvm_pkg__03a__03auvm_visitor_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_visitor_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_visitor_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_visitor_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtransactions_uvm_pkg__03a__03auvm_visitor_::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtransactions_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
