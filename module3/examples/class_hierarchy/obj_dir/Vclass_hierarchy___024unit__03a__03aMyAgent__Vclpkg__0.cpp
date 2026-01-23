// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy___024unit__03a__03aMyAgent__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi3> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aMyAgent__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi3> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi3__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyAgent__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy___024unit__03a__03aMyAgent__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "MyAgent"s;
}

void Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component_registry__pi3> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi3__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "MyAgent"s;
}

Vclass_hierarchy___024unit__03a__03aMyAgent::Vclass_hierarchy___024unit__03a__03aMyAgent(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_agent(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_build_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__3__Vfuncout;
    __Vfunc_uvm_report_enabled__3__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyDriver> __Vfunc_create__5__Vfuncout;
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyMonitor> __Vfunc_create__6__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer__Tz1_TBz1> __Vfunc_create__7__Vfuncout;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_agent::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "AGENT"s, __Vfunc_uvm_report_enabled__3__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__3__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "AGENT"s, "Building agent component"s, 0x000000c8U, "class_hierarchy.sv"s, 0x00000067U, ""s, 1U);
    }
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi1__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "driver"s, 
                                                                                VlClassRef<Vclass_hierarchy___024unit__03a__03aMyAgent>{this}, ""s, __Vfunc_create__5__Vfuncout);
    this->__PVT__driver = __Vfunc_create__5__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "monitor"s, 
                                                                                VlClassRef<Vclass_hierarchy___024unit__03a__03aMyAgent>{this}, ""s, __Vfunc_create__6__Vfuncout);
    this->__PVT__monitor = __Vfunc_create__6__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz32__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "sequencer"s, 
                                                                                VlClassRef<Vclass_hierarchy___024unit__03a__03aMyAgent>{this}, ""s, __Vfunc_create__7__Vfuncout);
    this->__PVT__sequencer = __Vfunc_create__7__Vfuncout;
}

void Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_connect_phase\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x000000c8U, 0U, "AGENT"s, __Vfunc_uvm_report_enabled__9__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "AGENT"s, "Connecting agent components"s, 0x000000c8U, "class_hierarchy.sv"s, 0x0000006fU, ""s, 1U);
    }
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__driver, "class_hierarchy.sv", 112)
                  ->__PVT__seq_item_port, "class_hierarchy.sv", 112)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__sequencer, "class_hierarchy.sv", 112)
                                                                                ->__PVT__seq_item_export);
}

void Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__13__Vfuncout;
    __Vfunc___Vbasic_randomize__13__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__13__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__13__Vfuncout));
}

void Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc___Vbasic_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vclass_hierarchy___024unit__03a__03aMyAgent::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy___024unit__03a__03aMyAgent>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy___024unit__03a__03aMyAgent::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy___024unit__03a__03aMyAgent::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vclass_hierarchy___024unit__03a__03aMyAgent::to_string_middle\n"); );
    // Body
    std::string out;
    out += "driver:" + VL_TO_STRING(__PVT__driver);
    out += ", monitor:" + VL_TO_STRING(__PVT__monitor);
    out += ", sequencer:" + VL_TO_STRING(__PVT__sequencer);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_agent::to_string_middle();
    return (out);
}
