// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_callback__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi22> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_callback__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi22> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi22__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_callback__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_callback"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi22> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi22__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_callback, vlProcess, vlSymsp, "uvm_callback"s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_callback, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_callback"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_callback::Vrecorders_top_uvm_pkg__03a__03auvm_callback(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_enabled = 1U;
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_callback_mode(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ on, CData/*0:0*/ &callback_mode__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_callback_mode\n"); );
    // Body
    callback_mode__Vfuncrtn = this->__PVT__m_enabled;
    if ((0U == on)) {
        this->__PVT__m_enabled = 0U;
    }
    if ((1U == on)) {
        this->__PVT__m_enabled = 1U;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_is_enabled(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_is_enabled\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_callback_mode__4__Vfuncout;
    __Vfunc_callback_mode__4__Vfuncout = 0;
    // Body
    this->__VnoInFunc_callback_mode(vlSymsp, 0xffffffffU, __Vfunc_callback_mode__4__Vfuncout);
    is_enabled__Vfuncrtn = __Vfunc_callback_mode__4__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__6__Vfuncout;
    __Vfunc___VBasicRand__6__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__6__Vfuncout);
            }(), __Vfunc___VBasicRand__6__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_callback::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_enabled = 0;
}

Vrecorders_top_uvm_pkg__03a__03auvm_callback::~Vrecorders_top_uvm_pkg__03a__03auvm_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_callback>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_enabled:" + VL_TO_STRING(__PVT__m_enabled);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
