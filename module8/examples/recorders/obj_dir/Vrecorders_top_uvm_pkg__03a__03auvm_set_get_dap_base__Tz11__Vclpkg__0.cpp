// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_set(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_set\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_try_set(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_try_set\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_get\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_try_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_stream> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_try_get\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc_randomize\n"); );
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

void Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::~Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vrecorders_top_uvm_pkg__03a__03auvm_set_get_dap_base__Tz11::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
