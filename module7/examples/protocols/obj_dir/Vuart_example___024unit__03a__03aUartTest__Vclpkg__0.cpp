// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example___024unit__03a__03aUartTest__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi64> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartTest__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartTest__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartTest__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "UartTest"s;
}

void Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__pi64> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi64__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "UartTest"s;
}

Vuart_example___024unit__03a__03aUartTest::Vuart_example___024unit__03a__03aUartTest(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> p)
    : Vuart_example_uvm_pkg__03a__03auvm_test(vlProcess, vlSymsp, n, p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vuart_example___024unit__03a__03aUartEnv> __Vfunc_create__3__Vfuncout;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "env"s, 
                                                                                VlClassRef<Vuart_example___024unit__03a__03aUartTest>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__env = __Vfunc_create__3__Vfuncout;
}

VlCoroutine Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_run_phase\n"); );
    // Locals
    VlClassRef<Vuart_example___024unit__03a__03aUartSeq> __Vfunc_create__5__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vuart_example___024unit__03a__03aUartSeq> seq;
    VL_NULL_CHECK(phase, "uart_example.sv", 90)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                             VlClassRef<Vuart_example___024unit__03a__03aUartTest>{this}, ""s, 1U);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seq"s, VlNull{}, ""s, __Vfunc_create__5__Vfuncout);
    seq = __Vfunc_create__5__Vfuncout;
    co_await VL_NULL_CHECK(seq, "uart_example.sv", 92)->__VnoInFunc_start(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__env, "uart_example.sv", 92)
                                                                          ->__PVT__seqr, VlNull{}, 0xffffffffU, 1U);
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000000001e8480ULL, 
                                            vlProcess, 
                                            "uart_example.sv", 
                                            93);
    VL_NULL_CHECK(phase, "uart_example.sv", 94)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                            VlClassRef<Vuart_example___024unit__03a__03aUartTest>{this}, ""s, 1U);
}

void Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__9__Vfuncout;
    __Vfunc___Vbasic_randomize__9__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__9__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__9__Vfuncout));
}

void Vuart_example___024unit__03a__03aUartTest::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example___024unit__03a__03aUartTest::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example___024unit__03a__03aUartTest>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example___024unit__03a__03aUartTest::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example___024unit__03a__03aUartTest::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vuart_example___024unit__03a__03aUartTest::to_string_middle\n"); );
    // Body
    std::string out;
    out += "env:" + VL_TO_STRING(__PVT__env);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_test::to_string_middle();
    return (out);
}
