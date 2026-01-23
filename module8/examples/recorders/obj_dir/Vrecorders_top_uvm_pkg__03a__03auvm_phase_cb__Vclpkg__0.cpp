// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::__VnoInFunc_phase_state_change(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase_state_change> change) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::__VnoInFunc_phase_state_change\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__2__Vfuncout;
    __Vfunc___VBasicRand__2__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__2__Vfuncout);
            }(), __Vfunc___VBasicRand__2__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::~Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_phase_cb::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
