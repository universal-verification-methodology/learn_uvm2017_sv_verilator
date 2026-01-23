// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_add(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &add__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_add\n"); );
    // Body
    CData/*0:0*/ found;
    found = 0;
    IData/*31:0*/ i;
    i = 0;
    {
        if ((VlNull{} == cb)) {
            add__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        found = 0U;
        i = 0U;
        while (((~ (IData)(found)) & (i < this->__PVT__m_registered_cbs.size()))) {
            if ((this->__PVT__m_registered_cbs.at(i) 
                 == cb)) {
                found = 1U;
            }
            i = ((IData)(1U) + i);
        }
        if ((1U & (~ (IData)(found)))) {
            this->__PVT__m_registered_cbs.push_back(cb);
        }
        add__Vfuncrtn = (1U & (~ (IData)(found)));
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_delete(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &delete__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_delete\n"); );
    // Body
    IData/*31:0*/ unnamedblk159__DOT__i;
    unnamedblk159__DOT__i = 0;
    VlQueue<IData/*31:0*/> cb_idxs;
    cb_idxs.atDefault() = 0;
    {
        if ((VlNull{} == cb)) {
            delete__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        cb_idxs = this->__PVT__m_registered_cbs.find_index(
                                                           [&](
                                                               IData/*31:0*/ item__DOT__index, 
                                                               VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_run_test_callback> item) -> 
                                                           CData/*31:0*/ {
                return ((item == cb));
            }
        );
        unnamedblk159__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk159__DOT__i, cb_idxs.size())) {
            this->__PVT__m_registered_cbs.erase(unnamedblk159__DOT__i);
            unnamedblk159__DOT__i = ((IData)(1U) + unnamedblk159__DOT__i);
        }
        delete__Vfuncrtn = VL_LTS_III(32, 0U, cb_idxs.size());
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_run_test(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_run_test\n"); );
    // Body
    IData/*31:0*/ unnamedblk160__DOT__i;
    unnamedblk160__DOT__i = 0;
    unnamedblk160__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk160__DOT__i, this->__PVT__m_registered_cbs.size())) {
        VL_NULL_CHECK(this->__PVT__m_registered_cbs.at(unnamedblk160__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_run_test_callback.svh", 114)->__VnoInFunc_pre_run_test(vlSymsp);
        unnamedblk160__DOT__i = ((IData)(1U) + unnamedblk160__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_post_run_test(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_post_run_test\n"); );
    // Body
    IData/*31:0*/ unnamedblk161__DOT__i;
    unnamedblk161__DOT__i = 0;
    unnamedblk161__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk161__DOT__i, this->__PVT__m_registered_cbs.size())) {
        VL_NULL_CHECK(this->__PVT__m_registered_cbs.at(unnamedblk161__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_run_test_callback.svh", 121)->__VnoInFunc_post_run_test(vlSymsp);
        unnamedblk161__DOT__i = ((IData)(1U) + unnamedblk161__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_abort(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_abort\n"); );
    // Body
    IData/*31:0*/ unnamedblk162__DOT__i;
    unnamedblk162__DOT__i = 0;
    unnamedblk162__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk162__DOT__i, this->__PVT__m_registered_cbs.size())) {
        VL_NULL_CHECK(this->__PVT__m_registered_cbs.at(unnamedblk162__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_run_test_callback.svh", 128)->__VnoInFunc_pre_abort(vlSymsp);
        unnamedblk162__DOT__i = ((IData)(1U) + unnamedblk162__DOT__i);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_run_test(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_run_test\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_post_run_test(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_post_run_test\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_abort(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_pre_abort\n"); );
}

Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::Vpools_top_uvm_pkg__03a__03auvm_run_test_callback(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__2__Vfuncout;
    __Vfunc___VBasicRand__2__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__2__Vfuncout);
            }(), __Vfunc___VBasicRand__2__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::~Vpools_top_uvm_pkg__03a__03auvm_run_test_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_run_test_callback>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_run_test_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vpools_top_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
