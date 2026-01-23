// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi75> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi75> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi75__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_cbs"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi75> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi75__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs, vlProcess, vlSymsp, "uvm_reg_cbs"s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_cbs"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_pre_write\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_write(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_write\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_pre_read(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_pre_read\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_read(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_read\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_predict(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field> fld, QData/*63:0*/ previous, QData/*63:0*/ &value, IData/*31:0*/ kind, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_post_predict\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_encode(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_encode\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_decode(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<QData/*63:0*/> &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_decode\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::~Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_cbs::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
