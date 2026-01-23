// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

Vtransactions_uvm_pkg__03a__03auvm_link_base::Vtransactions_uvm_pkg__03a__03auvm_link_base(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_lhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_lhs\n"); );
    // Body
    this->__VnoInFunc_do_set_lhs(vlSymsp, lhs);
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_lhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_lhs\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> __Vfunc_do_get_lhs__2__Vfuncout;
    // Body
    this->__VnoInFunc_do_get_lhs(vlSymsp, __Vfunc_do_get_lhs__2__Vfuncout);
    get_lhs__Vfuncrtn = __Vfunc_do_get_lhs__2__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_rhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_rhs\n"); );
    // Body
    this->__VnoInFunc_do_set_rhs(vlSymsp, rhs);
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_rhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_rhs\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> __Vfunc_do_get_rhs__4__Vfuncout;
    // Body
    this->__VnoInFunc_do_get_rhs(vlSymsp, __Vfunc_do_get_rhs__4__Vfuncout);
    get_rhs__Vfuncrtn = __Vfunc_do_get_rhs__4__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set\n"); );
    // Body
    this->__VnoInFunc_do_set_lhs(vlSymsp, lhs);
    this->__VnoInFunc_do_set_rhs(vlSymsp, rhs);
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_lhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_lhs\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_lhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &do_get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_lhs\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_rhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_rhs\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_rhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &do_get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_rhs\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__8__Vfuncout;
    __Vfunc___VBasicRand__8__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__8__Vfuncout);
            }(), __Vfunc___VBasicRand__8__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_link_base::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtransactions_uvm_pkg__03a__03auvm_link_base::~Vtransactions_uvm_pkg__03a__03auvm_link_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_link_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_link_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_link_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_link_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtransactions_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
