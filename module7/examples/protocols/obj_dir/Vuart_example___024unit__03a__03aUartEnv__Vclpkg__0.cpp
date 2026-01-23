// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example___024unit__03a__03aUartEnv__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi63> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartEnv__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi63> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartEnv__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartEnv__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "UartEnv"s;
}

void Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi63> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "UartEnv"s;
}

Vuart_example___024unit__03a__03aUartEnv::Vuart_example___024unit__03a__03aUartEnv(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> p)
    : Vuart_example_uvm_pkg__03a__03auvm_env(vlProcess, vlSymsp, n, p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126> __Vfunc_create__3__Vfuncout;
    VlClassRef<Vuart_example___024unit__03a__03aUartDriver> __Vfunc_create__4__Vfuncout;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz140__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seqr"s, 
                                                                                VlClassRef<Vuart_example___024unit__03a__03aUartEnv>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__seqr = __Vfunc_create__3__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "drv"s, 
                                                                                VlClassRef<Vuart_example___024unit__03a__03aUartEnv>{this}, ""s, __Vfunc_create__4__Vfuncout);
    this->__PVT__drv = __Vfunc_create__4__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_connect_phase\n"); );
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__drv, "uart_example.sv", 76)
                  ->__PVT__seq_item_port, "uart_example.sv", 76)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__seqr, "uart_example.sv", 76)
                                                                                ->__PVT__seq_item_export);
}

void Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__8__Vfuncout;
    __Vfunc___Vbasic_randomize__8__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__8__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__8__Vfuncout));
}

void Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example___024unit__03a__03aUartEnv::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example___024unit__03a__03aUartEnv>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example___024unit__03a__03aUartEnv::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example___024unit__03a__03aUartEnv::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vuart_example___024unit__03a__03aUartEnv::to_string_middle\n"); );
    // Body
    std::string out;
    out += "seqr:" + VL_TO_STRING(__PVT__seqr);
    out += ", drv:" + VL_TO_STRING(__PVT__drv);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_env::to_string_middle();
    return (out);
}
