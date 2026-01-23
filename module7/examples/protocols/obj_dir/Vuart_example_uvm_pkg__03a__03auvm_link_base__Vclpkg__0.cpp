// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

Vuart_example_uvm_pkg__03a__03auvm_link_base::Vuart_example_uvm_pkg__03a__03auvm_link_base(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name)
    : Vuart_example_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_lhs(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_lhs\n"); );
    // Body
    this->__VnoInFunc_do_set_lhs(vlSymsp, lhs);
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_lhs(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_lhs\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> __Vfunc_do_get_lhs__2__Vfuncout;
    // Body
    this->__VnoInFunc_do_get_lhs(vlSymsp, __Vfunc_do_get_lhs__2__Vfuncout);
    get_lhs__Vfuncrtn = __Vfunc_do_get_lhs__2__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_rhs(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set_rhs\n"); );
    // Body
    this->__VnoInFunc_do_set_rhs(vlSymsp, rhs);
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_rhs(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_get_rhs\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> __Vfunc_do_get_rhs__4__Vfuncout;
    // Body
    this->__VnoInFunc_do_get_rhs(vlSymsp, __Vfunc_do_get_rhs__4__Vfuncout);
    get_rhs__Vfuncrtn = __Vfunc_do_get_rhs__4__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_set\n"); );
    // Body
    this->__VnoInFunc_do_set_lhs(vlSymsp, lhs);
    this->__VnoInFunc_do_set_rhs(vlSymsp, rhs);
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_lhs(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_lhs\n"); );
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_lhs(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &do_get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_lhs\n"); );
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_rhs(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_set_rhs\n"); );
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_rhs(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &do_get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_do_get_rhs\n"); );
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__8__Vfuncout;
    __Vfunc___Vbasic_randomize__8__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__8__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__8__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_link_base::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_link_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_link_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_link_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_link_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vuart_example_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
