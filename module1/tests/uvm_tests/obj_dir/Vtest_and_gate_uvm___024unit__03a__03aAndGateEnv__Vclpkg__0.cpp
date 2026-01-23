// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi66> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi66> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi66__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "AndGateEnv"s;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component_registry__pi66> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi66__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "AndGateEnv"s;
}

Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_env(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateAgent> __Vfunc_create__3__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateScoreboard> __Vfunc_create__4__Vfuncout;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "agent"s, 
                                                                                VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__agent = __Vfunc_create__3__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "scoreboard"s, 
                                                                                VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv>{this}, ""s, __Vfunc_create__4__Vfuncout);
    this->__PVT__scoreboard = __Vfunc_create__4__Vfuncout;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_connect_phase\n"); );
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__agent, "test_and_gate_uvm.sv", 235)
                                ->__PVT__monitor, "test_and_gate_uvm.sv", 235)
                  ->__PVT__ap, "test_and_gate_uvm.sv", 235)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__scoreboard, "test_and_gate_uvm.sv", 235)
                                                                                ->__PVT__imp);
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__8__Vfuncout;
    __Vfunc___Vbasic_randomize__8__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__8__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__8__Vfuncout));
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc___Vbasic_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_and_gate_uvm___024unit__03a__03aAndGateEnv::to_string_middle\n"); );
    // Body
    std::string out;
    out += "agent:" + VL_TO_STRING(__PVT__agent);
    out += ", scoreboard:" + VL_TO_STRING(__PVT__scoreboard);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_env::to_string_middle();
    return (out);
}
