// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_sequences.h for the primary calling header

#include "Vvirtual_sequences__pch.h"

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_object_registry__pi93> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_object_registry__pi93> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi93__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_backdoor"s;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_abstract_object_registry__pi93> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi93__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_backdoor"s;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name)
    : Vvirtual_sequences_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__4__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__6__Vfuncout;
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84> unnamedblk1__DOT__iter;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk1__DOT__cb;
    this->__VnoInFunc_pre_read(vlSymsp, rw);
    unnamedblk1__DOT__iter = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84, vlSymsp, 
                                    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk1__DOT__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__4__Vfuncout);
    unnamedblk1__DOT__cb = __Vtask_first__4__Vfuncout;
    while ((VlNull{} != unnamedblk1__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk1__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk1__DOT__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__6__Vfuncout);
        unnamedblk1__DOT__cb = __Vtask_next__6__Vfuncout;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_last__8__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_prev__10__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__12__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__14__Vfuncout;
    // Body
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk2__DOT__cb;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84> unnamedblk3__DOT__iter;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk3__DOT__cb;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84> iter;
    iter = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84, vlSymsp, 
                  VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 65)->__VnoInFunc_last(vlProcess, vlSymsp, __Vtask_last__8__Vfuncout);
    unnamedblk2__DOT__cb = __Vtask_last__8__Vfuncout;
    while ((VlNull{} != unnamedblk2__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk2__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 66)->__VnoInFunc_decode(vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 66)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 65)->__VnoInFunc_prev(vlProcess, vlSymsp, __Vtask_prev__10__Vfuncout);
        unnamedblk2__DOT__cb = __Vtask_prev__10__Vfuncout;
    }
    unnamedblk3__DOT__iter = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84, vlSymsp, 
                                    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk3__DOT__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__12__Vfuncout);
    unnamedblk3__DOT__cb = __Vtask_first__12__Vfuncout;
    while ((VlNull{} != unnamedblk3__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk3__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67)->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk3__DOT__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__14__Vfuncout);
        unnamedblk3__DOT__cb = __Vtask_next__14__Vfuncout;
    }
    this->__VnoInFunc_post_read(vlSymsp, rw);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__19__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__21__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__22__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__24__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84> unnamedblk4__DOT__iter;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk4__DOT__cb;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk5__DOT__cb;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84> iter;
    iter = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84, vlSymsp, 
                  VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    this->__VnoInFunc_pre_write(vlSymsp, rw);
    unnamedblk4__DOT__iter = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84, vlSymsp, 
                                    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk4__DOT__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__19__Vfuncout);
    unnamedblk4__DOT__cb = __Vtask_first__19__Vfuncout;
    while ((VlNull{} != unnamedblk4__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk4__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk4__DOT__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__21__Vfuncout);
        unnamedblk4__DOT__cb = __Vtask_next__21__Vfuncout;
    }
    VL_NULL_CHECK(iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 78)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__22__Vfuncout);
    unnamedblk5__DOT__cb = __Vtask_first__22__Vfuncout;
    while ((VlNull{} != unnamedblk5__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk5__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 79)->__VnoInFunc_encode(vlSymsp, VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 79)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 78)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__24__Vfuncout);
        unnamedblk5__DOT__cb = __Vtask_next__24__Vfuncout;
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__26__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__28__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84> unnamedblk6__DOT__iter;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk6__DOT__cb;
    unnamedblk6__DOT__iter = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_callback_iter__pi84, vlSymsp, 
                                    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk6__DOT__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__26__Vfuncout);
    unnamedblk6__DOT__cb = __Vtask_first__26__Vfuncout;
    while ((VlNull{} != unnamedblk6__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk6__DOT__cb, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86)->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk6__DOT__iter, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__28__Vfuncout);
        unnamedblk6__DOT__cb = __Vtask_next__28__Vfuncout;
    }
    this->__VnoInFunc_post_write(vlSymsp, rw);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_field> field, CData/*0:0*/ &is_auto_updated__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated\n"); );
    // Body
    is_auto_updated__Vfuncrtn = 0U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    std::string __Vfunc_uvm_report_enabled__30__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__33__Vfuncout;
    __Vtask_uvm_report_enabled__33__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__30__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__30__severity = 3U;
                    __Vfunc_uvm_report_enabled__30__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__31__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__31__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__32__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), __Vfunc_uvm_report_enabled__30__id, __Vtask_uvm_report_enabled__33__Vfuncout);
                    __Vfunc_uvm_report_enabled__30__Vfuncout 
                        = __Vtask_uvm_report_enabled__33__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_backdoor::wait_for_change() method has not been overloaded"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s, 0x000000abU, ""s, 1U);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> __Vfunc_self__37__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> unnamedblk274__DOT____VforkParent;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_start_update_thread_0;
    __VDynScope_start_update_thread_0 = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_45, vlSymsp);
    VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 177)->__PVT__element 
        = element;
    {
        if (this->__PVT__m_update_thread.exists(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 179)
                                                ->__PVT__element)) {
            this->__VnoInFunc_kill_update_thread(vlSymsp, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 180)
                                                 ->__PVT__element);
        }
        if ((! VL_CAST_DYNAMIC(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 182)
                               ->__PVT__element, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 182)
                               ->__PVT__rg))) {
            goto __Vlabel0;
        }
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__37__Vfuncout);
        unnamedblk274__DOT____VforkParent = __Vfunc_self__37__Vfuncout;
        this->__VnoInFunc_start_update_thread____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp, __VDynScope_start_update_thread_0, unnamedblk274__DOT____VforkParent);
        __Vlabel0: ;
    }
}

VlCoroutine Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_45> __VDynScope_start_update_thread_0, VlClassRef<Vvirtual_sequences_std__03a__03aprocess> unnamedblk274__DOT____VforkParent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> __Vtask___VforkTask_0__38____VforkParent;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03a__VDynScope_45> __Vtask___VforkTask_0__38____VDynScope_start_update_thread_0;
    IData/*31:0*/ __Vtask___VforkTask_0__38__unnamedblk276__DOT__status;
    __Vtask___VforkTask_0__38__unnamedblk276__DOT__status = 0;
    QData/*63:0*/ __Vtask___VforkTask_0__38__unnamedblk276__DOT__val;
    __Vtask___VforkTask_0__38__unnamedblk276__DOT__val = 0;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> __Vtask___VforkTask_0__38__unnamedblk276__DOT__r_item;
    IData/*31:0*/ __Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i;
    __Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i = 0;
    VlQueue<VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_field>> __Vtask___VforkTask_0__38__fields;
    IData/*31:0*/ __Vtask_status__39__Vfuncout;
    __Vtask_status__39__Vfuncout = 0;
    VlClassRef<Vvirtual_sequences_std__03a__03aprocess> __Vfunc_self__40__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44__Vfuncout;
    __Vfunc_uvm_report_enabled__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44__verbosity;
    __Vfunc_uvm_report_enabled__44__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__44__severity;
    __Vfunc_uvm_report_enabled__44__severity = 0;
    std::string __Vfunc_uvm_report_enabled__44__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__45__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__46__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__47__Vfuncout;
    __Vtask_uvm_report_enabled__47__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__48__id;
    std::string __Vtask_uvm_report_error__48__message;
    IData/*31:0*/ __Vtask_uvm_report_error__48__verbosity;
    __Vtask_uvm_report_error__48__verbosity = 0;
    std::string __Vtask_uvm_report_error__48__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__48__line;
    __Vtask_uvm_report_error__48__line = 0;
    std::string __Vtask_uvm_report_error__48__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__48__report_enabled_checked;
    __Vtask_uvm_report_error__48__report_enabled_checked = 0;
    std::string __Vtask_get_name__49__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__50__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__51__Vfuncout;
    CData/*0:0*/ __Vfunc_is_auto_updated__53__Vfuncout;
    __Vfunc_is_auto_updated__53__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__54__Vfuncout;
    __Vtask_get_lsb_pos__54__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__55__Vfuncout;
    __Vtask_get_n_bits__55__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    CData/*0:0*/ __Vtrigprevexpr_h4f665383__0;
    __Vtrigprevexpr_h4f665383__0 = 0;
    __Vtask___VforkTask_0__38____VDynScope_start_update_thread_0 
        = __VDynScope_start_update_thread_0;
    __Vtask___VforkTask_0__38____VforkParent = unnamedblk274__DOT____VforkParent;
    __Vtask___VforkTask_0__38__unnamedblk276__DOT__status = 0;
    __Vtask___VforkTask_0__38__unnamedblk276__DOT__val = 0;
    __Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i = 0;
    __Vtask___VforkTask_0__38__fields.clear();
    if ((1U == ([&]() {
                    VL_NULL_CHECK(__Vtask___VforkTask_0__38____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 185)
                ->__VnoInFunc_status(vlSymsp, __Vtask_status__39__Vfuncout);
                }(), __Vtask_status__39__Vfuncout))) {
        CData/*0:0*/ __VdynTrigger_h7588f88e__0;
        __VdynTrigger_h7588f88e__0 = 0;
        __VdynTrigger_h7588f88e__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h7588f88e__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_reg_backdoor.__Vtask___VforkTask_0__38____VforkParent.(uvm_pkg::uvm_reg_backdoor.__Vtask_status__39__Vfuncout); , ); ))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 
                                                         185);
            __Vtrigprevexpr_h4f665383__0 = (1U != ([&]() {
                        VL_NULL_CHECK(__Vtask___VforkTask_0__38____VforkParent, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 185)
                                                   ->__VnoInFunc_status(vlSymsp, __Vtask_status__39__Vfuncout);
                    }(), __Vtask_status__39__Vfuncout));
            __VdynTrigger_h7588f88e__0 = __Vtrigprevexpr_h4f665383__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h7588f88e__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (32'h1 != $_EXPRSTMT( // Function: status uvm_pkg::uvm_reg_backdoor.__Vtask___VforkTask_0__38____VforkParent.(uvm_pkg::uvm_reg_backdoor.__Vtask_status__39__Vfuncout); , ); ))", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 
                                                     185);
    }
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__40__Vfuncout);
    this->__PVT__m_update_thread.at(VL_NULL_CHECK(__Vtask___VforkTask_0__38____VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 192)
                                    ->__PVT__element) 
        = __Vfunc_self__40__Vfuncout;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__38____VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 195)
                  ->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 195)->__VnoInFunc_get_fields(vlSymsp, __Vtask___VforkTask_0__38__fields);
    while (true) {
        __Vtask___VforkTask_0__38__unnamedblk276__DOT__r_item 
            = VL_NEW(Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, "bd_r_item"s);
        VL_NULL_CHECK(__Vtask___VforkTask_0__38__unnamedblk276__DOT__r_item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 200)->__PVT__element 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__38____VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 200)
            ->__PVT__rg;
        VL_NULL_CHECK(__Vtask___VforkTask_0__38__unnamedblk276__DOT__r_item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 201)->__PVT__element_kind = 0U;
        this->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask___VforkTask_0__38__unnamedblk276__DOT__r_item);
        __Vtask___VforkTask_0__38__unnamedblk276__DOT__val 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__38__unnamedblk276__DOT__r_item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 203)
            ->__PVT__value.at(0U);
        if ((0U != VL_NULL_CHECK(__Vtask___VforkTask_0__38__unnamedblk276__DOT__r_item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 204)
             ->__PVT__status)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__44__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__44__severity = 2U;
                            __Vfunc_uvm_report_enabled__44__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__45__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__46__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__46__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__44__verbosity, (IData)(__Vfunc_uvm_report_enabled__44__severity), __Vfunc_uvm_report_enabled__44__id, __Vtask_uvm_report_enabled__47__Vfuncout);
                            __Vfunc_uvm_report_enabled__44__Vfuncout 
                                = __Vtask_uvm_report_enabled__47__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__44__Vfuncout))) {
                __Vtask_uvm_report_error__48__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__48__context_name = ""s;
                __Vtask_uvm_report_error__48__line = 0x000000ceU;
                __Vtask_uvm_report_error__48__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s;
                __Vtask_uvm_report_error__48__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__38____VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 206)
                                      ->__PVT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 206)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__49__Vfuncout);
                    }(), __Vtask_get_name__49__Vfuncout);
                __Vtask_uvm_report_error__48__message 
                    = VL_SFORMATF_N_NX("Backdoor read of register '%@' failed.",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__48__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__50__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__50__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__51__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__51__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__48__id, __Vtask_uvm_report_error__48__message, __Vtask_uvm_report_error__48__verbosity, __Vtask_uvm_report_error__48__filename, __Vtask_uvm_report_error__48__line, __Vtask_uvm_report_error__48__context_name, (IData)(__Vtask_uvm_report_error__48__report_enabled_checked));
            }
        }
        __Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i, __Vtask___VforkTask_0__38__fields.size())) {
            if (([&]() {
                        this->__VnoInFunc_is_auto_updated(vlSymsp, __Vtask___VforkTask_0__38__fields.at(__Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i), __Vfunc_is_auto_updated__53__Vfuncout);
                    }(), (IData)(__Vfunc_is_auto_updated__53__Vfuncout))) {
                VL_NULL_CHECK(__Vtask___VforkTask_0__38__unnamedblk276__DOT__r_item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 210)->__PVT__value.atWrite(0U) 
                    = (VL_SHIFTR_QQI(64,64,32, __Vtask___VforkTask_0__38__unnamedblk276__DOT__val, 
                                     ([&]() {
                                VL_NULL_CHECK(__Vtask___VforkTask_0__38__fields.at(__Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 210)
                                      ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__54__Vfuncout);
                            }(), __Vtask_get_lsb_pos__54__Vfuncout)) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                        ([&]() {
                                    VL_NULL_CHECK(__Vtask___VforkTask_0__38__fields.at(__Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 211)
                                         ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__55__Vfuncout);
                                }(), __Vtask_get_n_bits__55__Vfuncout)) 
                          - 1ULL));
                VL_NULL_CHECK(__Vtask___VforkTask_0__38__fields.at(__Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 212)->__VnoInFunc_do_predict(vlProcess, vlSymsp, __Vtask___VforkTask_0__38__unnamedblk276__DOT__r_item, 0U, 0xffU);
            }
            __Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i 
                = ((IData)(1U) + __Vtask___VforkTask_0__38__unnamedblk276__DOT__unnamedblk277__DOT__i);
        }
        this->__VnoInFunc_wait_for_change(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__38____VDynScope_start_update_thread_0, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 215)
                                          ->__PVT__element);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread\n"); );
    // Body
    if (this->__PVT__m_update_thread.exists(element)) {
        VL_NULL_CHECK(this->__PVT__m_update_thread.at(element), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 230)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_update_thread.erase(element);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &has_update_threads__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads\n"); );
    // Body
    has_update_threads__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__m_update_thread.size());
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59__Vfuncout;
    __Vfunc_uvm_report_enabled__59__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__59__verbosity;
    __Vfunc_uvm_report_enabled__59__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__59__severity;
    __Vfunc_uvm_report_enabled__59__severity = 0;
    std::string __Vfunc_uvm_report_enabled__59__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__62__Vfuncout;
    __Vtask_uvm_report_enabled__62__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__59__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__59__severity = 3U;
                    __Vfunc_uvm_report_enabled__59__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__60__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__61__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__59__verbosity, (IData)(__Vfunc_uvm_report_enabled__59__severity), __Vfunc_uvm_report_enabled__59__id, __Vtask_uvm_report_enabled__62__Vfuncout);
                    __Vfunc_uvm_report_enabled__59__Vfuncout 
                        = __Vtask_uvm_report_enabled__62__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__59__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_backdoor::write() method has not been overloaded"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s, 0x000000f8U, ""s, 1U);
    }
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read\n"); );
    // Body
    this->__VnoInFunc_do_pre_read(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_read_func(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_do_post_read(vlProcess, vlSymsp, rw);
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__Vfuncout;
    __Vfunc_uvm_report_enabled__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__verbosity;
    __Vfunc_uvm_report_enabled__67__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__67__severity;
    __Vfunc_uvm_report_enabled__67__severity = 0;
    std::string __Vfunc_uvm_report_enabled__67__id;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__70__Vfuncout;
    __Vtask_uvm_report_enabled__70__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__67__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__67__severity = 3U;
                    __Vfunc_uvm_report_enabled__67__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__68__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__68__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__69__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__67__verbosity, (IData)(__Vfunc_uvm_report_enabled__67__severity), __Vfunc_uvm_report_enabled__67__id, __Vtask_uvm_report_enabled__70__Vfuncout);
                    __Vfunc_uvm_report_enabled__67__Vfuncout 
                        = __Vtask_uvm_report_enabled__70__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__67__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_backdoor::read_func() method has not been overloaded"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s, 0x00000108U, ""s, 1U);
    }
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 265)->__PVT__status = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__73__Vfuncout;
    __Vfunc___VBasicRand__73__Vfuncout = 0;
    // Body
    Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vvirtual_sequences_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__73__Vfuncout);
            }(), __Vfunc___VBasicRand__73__Vfuncout));
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}

Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::~Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vvirtual_sequences_uvm_pkg__03a__03auvm_reg_backdoor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", m_update_thread:" + VL_TO_STRING(__PVT__m_update_thread);
    out += ", "+ Vvirtual_sequences_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
