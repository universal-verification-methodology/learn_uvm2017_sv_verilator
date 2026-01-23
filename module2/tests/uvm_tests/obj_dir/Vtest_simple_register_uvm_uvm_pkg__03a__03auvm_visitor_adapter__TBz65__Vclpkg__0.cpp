// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::__VnoInFunc_accept(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> s, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_> v, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_structure_proxy_> p, CData/*0:0*/ invoke_begin_end) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::__VnoInFunc_accept\n"); );
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__2__Vfuncout;
    __Vfunc___VBasicRand__2__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__2__Vfuncout);
            }(), __Vfunc___VBasicRand__2__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_visitor_adapter__TBz65::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
