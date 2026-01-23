// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_lhs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_lhs\n"); );
    // Body
    this->__VnoInFunc_do_set_lhs(vlSymsp, lhs);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_lhs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_lhs\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> __Vfunc_do_get_lhs__2__Vfuncout;
    // Body
    this->__VnoInFunc_do_get_lhs(vlSymsp, __Vfunc_do_get_lhs__2__Vfuncout);
    get_lhs__Vfuncrtn = __Vfunc_do_get_lhs__2__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_rhs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_rhs\n"); );
    // Body
    this->__VnoInFunc_do_set_rhs(vlSymsp, rhs);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_rhs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_rhs\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> __Vfunc_do_get_rhs__4__Vfuncout;
    // Body
    this->__VnoInFunc_do_get_rhs(vlSymsp, __Vfunc_do_get_rhs__4__Vfuncout);
    get_rhs__Vfuncrtn = __Vfunc_do_get_rhs__4__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set\n"); );
    // Body
    this->__VnoInFunc_do_set_lhs(vlSymsp, lhs);
    this->__VnoInFunc_do_set_rhs(vlSymsp, rhs);
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_lhs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_lhs\n"); );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_lhs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &do_get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_lhs\n"); );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_rhs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_rhs\n"); );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_rhs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &do_get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_rhs\n"); );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__8__Vfuncout;
    __Vfunc___VBasicRand__8__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__8__Vfuncout);
            }(), __Vfunc___VBasicRand__8__Vfuncout));
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_link_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
