// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_add(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &add__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_add\n"); );
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

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_delete(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback> cb, CData/*0:0*/ &delete__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_delete\n"); );
    // Body
    IData/*31:0*/ unnamedblk158__DOT__i;
    unnamedblk158__DOT__i = 0;
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
                                                               VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback> item) -> 
                                                           CData/*31:0*/ {
                return ((item == cb));
            }
        );
        unnamedblk158__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk158__DOT__i, cb_idxs.size())) {
            this->__PVT__m_registered_cbs.erase(unnamedblk158__DOT__i);
            unnamedblk158__DOT__i = ((IData)(1U) + unnamedblk158__DOT__i);
        }
        delete__Vfuncrtn = VL_LTS_III(32, 0U, cb_idxs.size());
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_run_test(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_run_test\n"); );
    // Body
    IData/*31:0*/ unnamedblk159__DOT__i;
    unnamedblk159__DOT__i = 0;
    unnamedblk159__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk159__DOT__i, this->__PVT__m_registered_cbs.size())) {
        VL_NULL_CHECK(this->__PVT__m_registered_cbs.at(unnamedblk159__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_run_test_callback.svh", 114)->__VnoInFunc_pre_run_test(vlSymsp);
        unnamedblk159__DOT__i = ((IData)(1U) + unnamedblk159__DOT__i);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_post_run_test(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_post_run_test\n"); );
    // Body
    IData/*31:0*/ unnamedblk160__DOT__i;
    unnamedblk160__DOT__i = 0;
    unnamedblk160__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk160__DOT__i, this->__PVT__m_registered_cbs.size())) {
        VL_NULL_CHECK(this->__PVT__m_registered_cbs.at(unnamedblk160__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_run_test_callback.svh", 121)->__VnoInFunc_post_run_test(vlSymsp);
        unnamedblk160__DOT__i = ((IData)(1U) + unnamedblk160__DOT__i);
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_abort(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback__Vclpkg::__VnoInFunc_m_do_pre_abort\n"); );
    // Body
    IData/*31:0*/ unnamedblk161__DOT__i;
    unnamedblk161__DOT__i = 0;
    unnamedblk161__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk161__DOT__i, this->__PVT__m_registered_cbs.size())) {
        VL_NULL_CHECK(this->__PVT__m_registered_cbs.at(unnamedblk161__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_run_test_callback.svh", 128)->__VnoInFunc_pre_abort(vlSymsp);
        unnamedblk161__DOT__i = ((IData)(1U) + unnamedblk161__DOT__i);
    }
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__2__Vfuncout;
    __Vfunc___Vbasic_randomize__2__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__2__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__2__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_test_callback::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback::to_string_middle();
    return (out);
}
