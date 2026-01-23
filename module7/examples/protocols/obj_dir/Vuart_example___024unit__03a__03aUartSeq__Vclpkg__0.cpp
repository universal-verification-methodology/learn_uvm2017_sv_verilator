// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example___024unit__03a__03aUartSeq__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi61> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartSeq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartSeq__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example___024unit__03a__03aUartSeq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "UartSeq"s;
}

void Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vuart_example___024unit__03a__03aUartSeq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vuart_example___024unit__03a__03aUartSeq, vlProcess, vlSymsp, "UartSeq"s)
            : VL_NEW(Vuart_example___024unit__03a__03aUartSeq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "UartSeq"s;
}

Vuart_example___024unit__03a__03aUartSeq::Vuart_example___024unit__03a__03aUartSeq(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string n)
    : Vuart_example_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126(vlProcess, vlSymsp, n) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_body(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Vuart_example___024unit__03a__03aUartTxn> __Vfunc_create__4__Vfuncout;
    IData/*31:0*/ __Vtask_randomize__5__Vfuncout;
    __Vtask_randomize__5__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<Vuart_example___024unit__03a__03aUartTxn> t;
    unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "t"s, VlNull{}, ""s, __Vfunc_create__4__Vfuncout);
        t = __Vfunc_create__4__Vfuncout;
        VL_NULL_CHECK(t, "uart_example.sv", 32)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__5__Vfuncout);
        co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, t, 0xffffffffU, VlNull{});
        co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, t, 0xffffffffU);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
}

void Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc_randomize\n"); );
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

void Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example___024unit__03a__03aUartSeq::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example___024unit__03a__03aUartSeq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example___024unit__03a__03aUartSeq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example___024unit__03a__03aUartSeq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vuart_example___024unit__03a__03aUartSeq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vuart_example_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126::to_string_middle();
    return (out);
}
