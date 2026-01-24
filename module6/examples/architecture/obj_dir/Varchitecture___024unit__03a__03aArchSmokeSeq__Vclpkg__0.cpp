// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture___024unit__03a__03aArchSmokeSeq__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi6> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture___024unit__03a__03aArchSmokeSeq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi6> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture___024unit__03a__03aArchSmokeSeq__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture___024unit__03a__03aArchSmokeSeq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "ArchSmokeSeq"s;
}

void Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi6> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Varchitecture___024unit__03a__03aArchSmokeSeq> tmp;
    tmp = ((""s == name) ? VL_NEW(Varchitecture___024unit__03a__03aArchSmokeSeq, vlProcess, vlSymsp, "ArchSmokeSeq"s)
            : VL_NEW(Varchitecture___024unit__03a__03aArchSmokeSeq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "ArchSmokeSeq"s;
}

Varchitecture___024unit__03a__03aArchSmokeSeq::Varchitecture___024unit__03a__03aArchSmokeSeq(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name)
    : Varchitecture_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_body(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Varchitecture___024unit__03a__03aArchTxn> __Vfunc_create__4__Vfuncout;
    IData/*31:0*/ __Vtask___Vrandwith_h6b5f49b2__0__5__Vfuncout;
    __Vtask___Vrandwith_h6b5f49b2__0__5__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<Varchitecture___024unit__03a__03aArchTxn> t;
    unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz1_TBz2__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "t"s, VlNull{}, ""s, __Vfunc_create__4__Vfuncout);
        t = __Vfunc_create__4__Vfuncout;
        VL_NULL_CHECK(t, "architecture.sv", 577)->__VnoInFunc___Vrandwith_h6b5f49b2__0(vlSymsp, __Vtask___Vrandwith_h6b5f49b2__0__5__Vfuncout);
        co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, t, 0xffffffffU, VlNull{});
        co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, t, 0xffffffffU);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    co_return;}

void Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__9__Vfuncout;
    __Vfunc___VBasicRand__9__Vfuncout = 0;
    // Body
    Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__9__Vfuncout);
            }(), __Vfunc___VBasicRand__9__Vfuncout));
}

void Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc___Vsetup_constraints\n"); );
}

void Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Varchitecture___024unit__03a__03aArchSmokeSeq::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Varchitecture___024unit__03a__03aArchSmokeSeq::~Varchitecture___024unit__03a__03aArchSmokeSeq() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture___024unit__03a__03aArchSmokeSeq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture___024unit__03a__03aArchSmokeSeq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture___024unit__03a__03aArchSmokeSeq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Varchitecture___024unit__03a__03aArchSmokeSeq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Varchitecture_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1::to_string_middle();
    return (out);
}
