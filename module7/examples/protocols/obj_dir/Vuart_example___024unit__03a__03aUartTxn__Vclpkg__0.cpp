// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example___024unit__03a__03aUartTxn__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi60> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartTxn__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartTxn__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartTxn__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "UartTxn"s;
}

void Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi60> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vuart_example___024unit__03a__03aUartTxn> tmp;
    tmp = ((""s == name) ? VL_NEW(Vuart_example___024unit__03a__03aUartTxn, vlProcess, vlSymsp, "UartTxn"s)
            : VL_NEW(Vuart_example___024unit__03a__03aUartTxn, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "UartTxn"s;
}

Vuart_example___024unit__03a__03aUartTxn::Vuart_example___024unit__03a__03aUartTxn(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string n)
    : Vuart_example_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, n) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__5__Vfuncout;
    __Vfunc___Vbasic_randomize__5__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__5__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__5__Vfuncout));
}

void Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
    this->__PVT__data = (0x000000ffU & VL_RANDOM_RNG_I(__Vm_rng));
}

void Vuart_example___024unit__03a__03aUartTxn::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__data = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example___024unit__03a__03aUartTxn>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example___024unit__03a__03aUartTxn::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example___024unit__03a__03aUartTxn::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartTxn::to_string_middle\n"); );
    // Body
    std::string out;
    out += "data:" + VL_TO_STRING(__PVT__data);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
