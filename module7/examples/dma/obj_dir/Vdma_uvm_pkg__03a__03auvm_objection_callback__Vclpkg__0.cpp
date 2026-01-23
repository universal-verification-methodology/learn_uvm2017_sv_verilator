// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_objection_callback::Vdma_uvm_pkg__03a__03auvm_objection_callback(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_raised(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_raised\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_dropped(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_dropped\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_all_dropped(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_all_dropped\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__2__Vfuncout;
    __Vfunc___VBasicRand__2__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__2__Vfuncout);
            }(), __Vfunc___VBasicRand__2__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_objection_callback::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_objection_callback::~Vdma_uvm_pkg__03a__03auvm_objection_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_objection_callback>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_objection_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_objection_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_objection_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vdma_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
