// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi66> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi66> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi66__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RegisterEnv"s;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi66> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi66__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RegisterEnv"s;
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_env(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent> __Vfunc_create__3__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterScoreboard> __Vfunc_create__4__Vfuncout;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "agent"s, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__agent = __Vfunc_create__3__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "scoreboard"s, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv>{this}, ""s, __Vfunc_create__4__Vfuncout);
    this->__PVT__scoreboard = __Vfunc_create__4__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_connect_phase\n"); );
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__agent, "test_simple_register_uvm.sv", 223)
                                ->__PVT__monitor, "test_simple_register_uvm.sv", 223)
                  ->__PVT__ap, "test_simple_register_uvm.sv", 223)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__scoreboard, "test_simple_register_uvm.sv", 223)
                                                                                ->__PVT__imp);
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__8__Vfuncout;
    __Vfunc___VBasicRand__8__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__8__Vfuncout);
            }(), __Vfunc___VBasicRand__8__Vfuncout));
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::~Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtest_simple_register_uvm___024unit__03a__03aRegisterEnv::to_string_middle\n"); );
    // Body
    std::string out;
    out += "agent:" + VL_TO_STRING(__PVT__agent);
    out += ", scoreboard:" + VL_TO_STRING(__PVT__scoreboard);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_env::to_string_middle();
    return (out);
}
