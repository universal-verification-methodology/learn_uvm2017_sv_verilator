// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_event_callback_::Varchitecture_uvm_pkg__03a__03auvm_event_callback_(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name)
    : Varchitecture_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc_pre_trigger(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event_> e, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> data, CData/*0:0*/ &pre_trigger__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc_pre_trigger\n"); );
    // Body
    pre_trigger__Vfuncrtn = 0U;
}

void Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc_post_trigger(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event_> e, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc_post_trigger\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc_create\n"); );
    // Body
    create__Vfuncrtn = VlNull{};
}

void Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__2__Vfuncout;
    __Vfunc___VBasicRand__2__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__2__Vfuncout);
            }(), __Vfunc___VBasicRand__2__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_event_callback_::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture_uvm_pkg__03a__03auvm_event_callback_::~Varchitecture_uvm_pkg__03a__03auvm_event_callback_() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_event_callback_>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_event_callback_::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_event_callback_::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_event_callback_::to_string_middle\n"); );
    // Body
    std::string out;
    out += Varchitecture_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
