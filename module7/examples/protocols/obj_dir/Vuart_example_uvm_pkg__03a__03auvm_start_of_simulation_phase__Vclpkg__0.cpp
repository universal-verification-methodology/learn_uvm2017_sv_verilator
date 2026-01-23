// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_start_of_simulation_phase"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_inst)) {
        this->__PVT__m_inst = VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase, vlProcess, vlSymsp, "start_of_simulation"s);
    }
    get__Vfuncrtn = this->__PVT__m_inst;
}

void Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::__VnoInFunc_exec_func(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::__VnoInFunc_exec_func\n"); );
    // Body
    VL_NULL_CHECK(comp, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_common_phases.svh", 199)->__VnoInFunc_start_of_simulation_phase(vlSymsp, phase);
}

void Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_start_of_simulation_phase"s;
}

Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name)
    : Vuart_example_uvm_pkg__03a__03auvm_bottomup_phase(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__3__Vfuncout;
    __Vfunc___Vbasic_randomize__3__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__3__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__3__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_start_of_simulation_phase::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vuart_example_uvm_pkg__03a__03auvm_bottomup_phase::to_string_middle();
    return (out);
}
