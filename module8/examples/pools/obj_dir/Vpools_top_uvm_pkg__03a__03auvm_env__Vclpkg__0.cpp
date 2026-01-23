// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_env__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi144> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_env__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi144> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi144__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_env__Vclpkg::__VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_env__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_env"s;
}

void Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_abstract_component_registry__pi144> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_component_registry__pi144__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_env"s;
}

Vpools_top_uvm_pkg__03a__03auvm_env::Vpools_top_uvm_pkg__03a__03auvm_env(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_component> parent)
    : Vpools_top_uvm_pkg__03a__03auvm_component(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__3__Vfuncout;
    __Vfunc___VBasicRand__3__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__3__Vfuncout);
            }(), __Vfunc___VBasicRand__3__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_env::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_env::~Vpools_top_uvm_pkg__03a__03auvm_env() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_env>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_env::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_env::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_env::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vpools_top_uvm_pkg__03a__03auvm_component::to_string_middle();
    return (out);
}
