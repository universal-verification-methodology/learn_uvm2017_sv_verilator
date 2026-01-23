// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_set(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_set\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_try_set(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_try_set\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_get\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_try_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_phase> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_try_get\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__2__Vfuncout;
    __Vfunc___Vbasic_randomize__2__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__2__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__2__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc___Vbasic_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_set_get_dap_base__Tz25::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtransactions_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
