// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_set(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_set\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_try_set(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> value, CData/*0:0*/ &try_set__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_try_set\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_get\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_try_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_tr_stream_cfg> &value, CData/*0:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_try_get\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__2__Vfuncout;
    __Vfunc___Vbasic_randomize__2__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__2__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__2__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_set_get_dap_base__Tz18::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
