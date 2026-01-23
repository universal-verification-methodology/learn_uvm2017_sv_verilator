// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_set(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_set\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_set(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_set\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_get\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_try_get\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc_randomize\n"); );
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

void Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::~Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdma_uvm_pkg__03a__03auvm_set_get_dap_base__Tz21::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vdma_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
