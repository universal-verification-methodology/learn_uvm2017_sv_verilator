// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi109> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi109> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi109__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_seq_base"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi109> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi109__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base> tmp;
    tmp = ((""s == name) ? VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, "uvm_reg_seq_base"s)
            : VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_seq_base"s;
}

Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name)
    : Vuart_example_uvm_pkg__03a__03auvm_sequence_base(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc_randomize\n"); );
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

void Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_reg_seq_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vuart_example_uvm_pkg__03a__03auvm_sequence_base::to_string_middle();
    return (out);
}
