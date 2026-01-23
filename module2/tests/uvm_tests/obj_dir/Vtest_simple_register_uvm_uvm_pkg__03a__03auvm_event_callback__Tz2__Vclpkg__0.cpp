// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc_pre_trigger(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event__Tz2> e, std::string data, CData/*0:0*/ &pre_trigger__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc_pre_trigger\n"); );
    // Body
    pre_trigger__Vfuncrtn = 0U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc_post_trigger(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event__Tz2> e, std::string data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc_post_trigger\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc_create\n"); );
    // Body
    create__Vfuncrtn = VlNull{};
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc_randomize\n"); );
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

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_event_callback__Tz2::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
