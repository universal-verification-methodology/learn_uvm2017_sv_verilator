// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::__VnoInFunc_accept(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> s, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_visitor_> v, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_structure_proxy_> p, CData/*0:0*/ invoke_begin_end) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::__VnoInFunc_accept\n"); );
}

Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::__VnoInFunc_randomize\n"); );
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

void Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::~Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_visitor_adapter__TBz96::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtransactions_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
