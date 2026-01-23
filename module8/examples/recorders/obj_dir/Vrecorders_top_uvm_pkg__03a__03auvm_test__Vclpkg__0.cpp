// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_test__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi9> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_test__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi9> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi9__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_test__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_test__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_test"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi9> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi9__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_test"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_test::Vrecorders_top_uvm_pkg__03a__03auvm_test(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> parent)
    : Vrecorders_top_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__3__Vfuncout;
    __Vfunc___VBasicRand__3__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__3__Vfuncout);
            }(), __Vfunc___VBasicRand__3__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_test::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_test::~Vrecorders_top_uvm_pkg__03a__03auvm_test() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_test>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_test::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_test::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_test::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
