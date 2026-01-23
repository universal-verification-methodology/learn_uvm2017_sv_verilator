// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "RegisterAgent"s;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component_registry__pi65> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi65__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "RegisterAgent"s;
}

Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_agent(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterDriver> __Vfunc_create__3__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterMonitor> __Vfunc_create__4__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126> __Vfunc_create__5__Vfuncout;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "driver"s, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__driver = __Vfunc_create__3__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "monitor"s, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent>{this}, ""s, __Vfunc_create__4__Vfuncout);
    this->__PVT__monitor = __Vfunc_create__4__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz153__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "sequencer"s, 
                                                                                VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent>{this}, ""s, __Vfunc_create__5__Vfuncout);
    this->__PVT__sequencer = __Vfunc_create__5__Vfuncout;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_connect_phase\n"); );
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__driver, "test_simple_register_uvm.sv", 198)
                  ->__PVT__seq_item_port, "test_simple_register_uvm.sv", 198)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__sequencer, "test_simple_register_uvm.sv", 198)
                                                                                ->__PVT__seq_item_export);
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__9__Vfuncout;
    __Vfunc___Vbasic_randomize__9__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__9__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__9__Vfuncout));
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                        Vtest_simple_register_uvm___024unit__03a__03aRegisterAgent::to_string_middle\n"); );
    // Body
    std::string out;
    out += "driver:" + VL_TO_STRING(__PVT__driver);
    out += ", monitor:" + VL_TO_STRING(__PVT__monitor);
    out += ", sequencer:" + VL_TO_STRING(__PVT__sequencer);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_agent::to_string_middle();
    return (out);
}
