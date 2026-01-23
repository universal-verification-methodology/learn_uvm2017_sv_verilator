// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc_pre_trigger(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event__Tz61> e, std::string data, CData/*0:0*/ &pre_trigger__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc_pre_trigger\n"); );
    // Body
    pre_trigger__Vfuncrtn = 0U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc_post_trigger(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event__Tz61> e, std::string data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc_post_trigger\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc_create(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc_create\n"); );
    // Body
    create__Vfuncrtn = VlNull{};
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__2__Vfuncout;
    __Vfunc___VBasicRand__2__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__2__Vfuncout);
            }(), __Vfunc___VBasicRand__2__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::~Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vvirtual_sequences_uvm_pkg__03a__03auvm_event_callback__Tz61::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vvirtual_sequences_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
