// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg::__VnoInFunc_m_initialize(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base> &m_initialize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base__Vclpkg::__VnoInFunc_m_initialize\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_b_inst)) {
        this->__PVT__m_b_inst = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base, vlProcess, vlSymsp);
        this->__PVT__m_pool = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pool__Tz68_TBz69, vlProcess, vlSymsp, ""s);
    }
    m_initialize__Vfuncrtn = this->__PVT__m_b_inst;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_am_i_a(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, CData/*0:0*/ &m_am_i_a__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_am_i_a\n"); );
    // Body
    m_am_i_a__Vfuncrtn = 0U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_for_me(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_for_me__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_for_me\n"); );
    // Body
    m_is_for_me__Vfuncrtn = 0U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_registered(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_is_registered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_is_registered\n"); );
    // Body
    m_is_registered__Vfuncrtn = 0U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_get_tw_cb_q(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_queue__Tz48> &m_get_tw_cb_q__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_get_tw_cb_q\n"); );
    // Body
    m_get_tw_cb_q__Vfuncrtn = VlNull{};
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_add_tw_cbs(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, IData/*31:0*/ ordering) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_add_tw_cbs\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_delete_tw_cbs(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &m_delete_tw_cbs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_m_delete_tw_cbs\n"); );
    // Body
    m_delete_tw_cbs__Vfuncrtn = 0U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_check_registration(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callback> cb, CData/*0:0*/ &check_registration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_check_registration\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_m_is_registered__0__Vfuncout;
    __Vfunc_m_is_registered__0__Vfuncout = 0;
    CData/*0:0*/ __Vtask_m_is_registered__1__Vfuncout;
    __Vtask_m_is_registered__1__Vfuncout = 0;
    CData/*0:0*/ __Vtask_check_registration__2__Vfuncout;
    __Vtask_check_registration__2__Vfuncout = 0;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base> dt;
    {
        if (([&]() {
                    this->__VnoInFunc_m_is_registered(vlSymsp, obj, cb, __Vfunc_m_is_registered__0__Vfuncout);
                }(), (IData)(__Vfunc_m_is_registered__0__Vfuncout))) {
            check_registration__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__m_this_type.size())) {
            if (((vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks_base__Vclpkg.__PVT__m_b_inst 
                  != this->__PVT__m_this_type.at(unnamedblk1__DOT__i)) 
                 && ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_this_type.at(unnamedblk1__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 147)
                     ->__VnoInFunc_m_is_registered(vlSymsp, obj, cb, __Vtask_m_is_registered__1__Vfuncout);
                        }(), (IData)(__Vtask_m_is_registered__1__Vfuncout)))) {
                check_registration__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            unnamedblk1__DOT__i = ((IData)(1U) + unnamedblk1__DOT__i);
        }
        if ((VlNull{} == obj)) {
            unnamedblk2__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_derived_types.size())) {
                dt = vlSymsp->TOP__uvm_pkg__03a__03auvm_typeid_base__Vclpkg.__PVT__typeid_map
                    .at(this->__PVT__m_derived_types.at(unnamedblk2__DOT__i));
                if (((VlNull{} != dt) && ([&]() {
                                VL_NULL_CHECK(dt, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_callback.svh", 153)
                                          ->__VnoInFunc_check_registration(vlSymsp, VlNull{}, cb, __Vtask_check_registration__2__Vfuncout);
                            }(), (IData)(__Vtask_check_registration__2__Vfuncout)))) {
                    check_registration__Vfuncrtn = 1U;
                    goto __Vlabel0;
                }
                unnamedblk2__DOT__i = ((IData)(1U) 
                                       + unnamedblk2__DOT__i);
            }
        }
        check_registration__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, ""s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__5__Vfuncout;
    __Vfunc___VBasicRand__5__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__5__Vfuncout);
            }(), __Vfunc___VBasicRand__5__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_callbacks_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_this_type:" + VL_TO_STRING(__PVT__m_this_type);
    out += ", m_super_type:" + VL_TO_STRING(__PVT__m_super_type);
    out += ", m_derived_types:" + VL_TO_STRING(__PVT__m_derived_types);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
