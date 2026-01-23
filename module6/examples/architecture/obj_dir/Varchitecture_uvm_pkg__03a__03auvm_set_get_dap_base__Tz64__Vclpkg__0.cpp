// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name)
    : Varchitecture_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_set(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_set\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_try_set(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_try_set\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_get\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_try_get(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_stream> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_try_get\n"); );
}

void Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__2__Vfuncout;
    __Vfunc___Vbasic_randomize__2__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__2__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__2__Vfuncout));
}

void Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc___Vbasic_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Varchitecture_uvm_pkg__03a__03auvm_set_get_dap_base__Tz64::to_string_middle\n"); );
    // Body
    std::string out;
    out += Varchitecture_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
