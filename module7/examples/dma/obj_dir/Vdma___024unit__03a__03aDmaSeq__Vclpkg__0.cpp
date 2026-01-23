// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma___024unit__03a__03aDmaSeq__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi61> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaSeq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaSeq__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaSeq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "DmaSeq"s;
}

void Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi61> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi61__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma___024unit__03a__03aDmaSeq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma___024unit__03a__03aDmaSeq, vlProcess, vlSymsp, "DmaSeq"s)
            : VL_NEW(Vdma___024unit__03a__03aDmaSeq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "DmaSeq"s;
}

Vdma___024unit__03a__03aDmaSeq::Vdma___024unit__03a__03aDmaSeq(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n)
    : Vdma_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126(vlProcess, vlSymsp, n) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_body(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_body\n"); );
    // Locals
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> __Vfunc_create__4__Vfuncout;
    IData/*31:0*/ __Vtask___Vrandwith_hc6e33871__0__5__Vfuncout;
    __Vtask___Vrandwith_hc6e33871__0__5__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlClassRef<Vdma___024unit__03a__03aDmaTxn> t;
    unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi60__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "t"s, VlNull{}, ""s, __Vfunc_create__4__Vfuncout);
        t = __Vfunc_create__4__Vfuncout;
        VL_NULL_CHECK(t, "dma.sv", 34)->__VnoInFunc___Vrandwith_hc6e33871__0(vlSymsp, __Vtask___Vrandwith_hc6e33871__0__5__Vfuncout);
        co_await this->__VnoInFunc_start_item(vlProcess, vlSymsp, t, 0xffffffffU, VlNull{});
        co_await this->__VnoInFunc_finish_item(vlProcess, vlSymsp, t, 0xffffffffU);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
}

void Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__9__Vfuncout;
    __Vfunc___Vbasic_randomize__9__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__9__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__9__Vfuncout));
}

void Vdma___024unit__03a__03aDmaSeq::__VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vdma___024unit__03a__03aDmaSeq::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaSeq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma___024unit__03a__03aDmaSeq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma___024unit__03a__03aDmaSeq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vdma___024unit__03a__03aDmaSeq::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vdma_uvm_pkg__03a__03auvm_sequence__Tz126_TBz126::to_string_middle();
    return (out);
}
