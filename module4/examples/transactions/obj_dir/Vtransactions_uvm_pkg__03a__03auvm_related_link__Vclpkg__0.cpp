// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi90> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi90> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi90__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_related_link"s;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_get_link(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_related_link> &get_link__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_related_link__Vclpkg::__VnoInFunc_get_link\n"); );
    // Locals
    VlClassRef<Vtransactions_std__03a__03aprocess> __Vfunc_self__1__Vfuncout;
    std::string __Vtask_get_randstate__2__Vfuncout;
    // Body
    VlClassRef<Vtransactions_std__03a__03aprocess> p_;
    std::string s_;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__1__Vfuncout);
    p_ = __Vfunc_self__1__Vfuncout;
    if ((VlNull{} != p_)) {
        VL_NULL_CHECK(p_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_links.svh", 282)->__VnoInFunc_get_randstate(vlSymsp, __Vtask_get_randstate__2__Vfuncout);
        s_ = __Vtask_get_randstate__2__Vfuncout;
    }
    get_link__Vfuncrtn = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_related_link, vlProcess, vlSymsp, name);
    if ((VlNull{} != p_)) {
        VL_NULL_CHECK(p_, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_links.svh", 287)->__VnoInFunc_set_randstate(vlSymsp, s_);
    }
    VL_NULL_CHECK(get_link__Vfuncrtn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_links.svh", 289)->__VnoInFunc_set(vlSymsp, lhs, rhs);
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi90> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi90__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_related_link> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_related_link, vlProcess, vlSymsp, "unnamed-uvm_related_link"s)
            : VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_related_link, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_related_link"s;
}

Vtransactions_uvm_pkg__03a__03auvm_related_link::Vtransactions_uvm_pkg__03a__03auvm_related_link(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_link_base(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_set_lhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> lhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_set_lhs\n"); );
    // Body
    this->__PVT__m_lhs = lhs;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_get_lhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &do_get_lhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_get_lhs\n"); );
    // Body
    do_get_lhs__Vfuncrtn = this->__PVT__m_lhs;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_set_rhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_set_rhs\n"); );
    // Body
    this->__PVT__m_rhs = rhs;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_get_rhs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &do_get_rhs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_do_get_rhs\n"); );
    // Body
    do_get_rhs__Vfuncrtn = this->__PVT__m_rhs;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_related_link::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtransactions_uvm_pkg__03a__03auvm_related_link::~Vtransactions_uvm_pkg__03a__03auvm_related_link() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_related_link>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_related_link::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_related_link::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_related_link::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_lhs:" + VL_TO_STRING(__PVT__m_lhs);
    out += ", m_rhs:" + VL_TO_STRING(__PVT__m_rhs);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_link_base::to_string_middle();
    return (out);
}
