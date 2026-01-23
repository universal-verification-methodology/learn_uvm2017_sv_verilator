// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi74> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi74> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi74__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_backdoor"s;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_abstract_object_registry__pi74> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi74__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_backdoor"s;
}

Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_read\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__4__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__6__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64> unnamedblk1__DOT__iter;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk1__DOT__cb;
    this->__VnoInFunc_pre_read(vlSymsp, rw);
    unnamedblk1__DOT__iter = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64, vlSymsp, 
                                    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk1__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__4__Vfuncout);
    unnamedblk1__DOT__cb = __Vtask_first__4__Vfuncout;
    while ((VlNull{} != unnamedblk1__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk1__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57)->__VnoInFunc_pre_read(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk1__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 57)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__6__Vfuncout);
        unnamedblk1__DOT__cb = __Vtask_next__6__Vfuncout;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_read\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_last__8__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_prev__10__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__12__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__14__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk2__DOT__cb;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64> unnamedblk3__DOT__iter;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk3__DOT__cb;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64> iter;
    iter = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64, vlSymsp, 
                  VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 65)->__VnoInFunc_last(vlProcess, vlSymsp, __Vtask_last__8__Vfuncout);
    unnamedblk2__DOT__cb = __Vtask_last__8__Vfuncout;
    while ((VlNull{} != unnamedblk2__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk2__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 66)->__VnoInFunc_decode(vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 66)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 65)->__VnoInFunc_prev(vlProcess, vlSymsp, __Vtask_prev__10__Vfuncout);
        unnamedblk2__DOT__cb = __Vtask_prev__10__Vfuncout;
    }
    unnamedblk3__DOT__iter = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64, vlSymsp, 
                                    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk3__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__12__Vfuncout);
    unnamedblk3__DOT__cb = __Vtask_first__12__Vfuncout;
    while ((VlNull{} != unnamedblk3__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk3__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67)->__VnoInFunc_post_read(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk3__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 67)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__14__Vfuncout);
        unnamedblk3__DOT__cb = __Vtask_next__14__Vfuncout;
    }
    this->__VnoInFunc_post_read(vlSymsp, rw);
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_pre_write\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__19__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__21__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__22__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__24__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64> unnamedblk4__DOT__iter;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk4__DOT__cb;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk5__DOT__cb;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64> iter;
    iter = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64, vlSymsp, 
                  VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    this->__VnoInFunc_pre_write(vlSymsp, rw);
    unnamedblk4__DOT__iter = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64, vlSymsp, 
                                    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk4__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__19__Vfuncout);
    unnamedblk4__DOT__cb = __Vtask_first__19__Vfuncout;
    while ((VlNull{} != unnamedblk4__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk4__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77)->__VnoInFunc_pre_write(vlProcess, vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk4__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 77)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__21__Vfuncout);
        unnamedblk4__DOT__cb = __Vtask_next__21__Vfuncout;
    }
    VL_NULL_CHECK(iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 78)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__22__Vfuncout);
    unnamedblk5__DOT__cb = __Vtask_first__22__Vfuncout;
    while ((VlNull{} != unnamedblk5__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk5__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 79)->__VnoInFunc_encode(vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 79)
                                                                                ->__PVT__value);
        VL_NULL_CHECK(iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 78)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__24__Vfuncout);
        unnamedblk5__DOT__cb = __Vtask_next__24__Vfuncout;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_do_post_write\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__26__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__28__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64> unnamedblk6__DOT__iter;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_cbs> unnamedblk6__DOT__cb;
    unnamedblk6__DOT__iter = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_callback_iter__pi64, vlSymsp, 
                                    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor>{this});
    VL_NULL_CHECK(unnamedblk6__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__26__Vfuncout);
    unnamedblk6__DOT__cb = __Vtask_first__26__Vfuncout;
    while ((VlNull{} != unnamedblk6__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk6__DOT__cb, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86)->__VnoInFunc_post_write(vlSymsp, rw);
        VL_NULL_CHECK(unnamedblk6__DOT__iter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 86)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__28__Vfuncout);
        unnamedblk6__DOT__cb = __Vtask_next__28__Vfuncout;
    }
    this->__VnoInFunc_post_write(vlSymsp, rw);
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_read\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_read\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_pre_write\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_post_write\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_field> field, CData/*0:0*/ &is_auto_updated__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_is_auto_updated\n"); );
    // Body
    is_auto_updated__Vfuncrtn = 0U;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_wait_for_change\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__verbosity;
    __Vfunc_uvm_report_enabled__30__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__30__severity;
    __Vfunc_uvm_report_enabled__30__severity = 0;
    std::string __Vfunc_uvm_report_enabled__30__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__31__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__32__Vfuncout;
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
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__32__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__32__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__30__verbosity, (IData)(__Vfunc_uvm_report_enabled__30__severity), __Vfunc_uvm_report_enabled__30__id, __Vtask_uvm_report_enabled__33__Vfuncout);
                    __Vfunc_uvm_report_enabled__30__Vfuncout 
                        = __Vtask_uvm_report_enabled__33__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_backdoor::wait_for_change() method has not been overloaded"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s, 0x000000abU, ""s, 1U);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread\n"); );
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_33> __VDynScope_start_update_thread_0;
    __VDynScope_start_update_thread_0 = VL_NEW(Vpools_top_uvm_pkg__03a__03a__VDynScope_33, vlSymsp);
    VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 177)->__PVT__element 
        = element;
    {
        if (this->__PVT__m_update_thread.exists(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 179)
                                                ->__PVT__element)) {
            this->__VnoInFunc_kill_update_thread(vlSymsp, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 180)
                                                 ->__PVT__element);
        }
        if ((! VL_CAST_DYNAMIC(VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 182)
                               ->__PVT__element, VL_NULL_CHECK(__VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 182)
                               ->__PVT__rg))) {
            goto __Vlabel0;
        }
        this->__VnoInFunc_start_update_thread____Vfork_1__0(std::make_shared<VlProcess>(), vlSymsp, __VDynScope_start_update_thread_0);
        __Vlabel0: ;
    }
}

VlCoroutine Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_33> __VDynScope_start_update_thread_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_start_update_thread____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03a__VDynScope_33> __Vtask___VforkTask_0__37____VDynScope_start_update_thread_0;
    IData/*31:0*/ __Vtask___VforkTask_0__37__unnamedblk269__DOT__status;
    __Vtask___VforkTask_0__37__unnamedblk269__DOT__status = 0;
    QData/*63:0*/ __Vtask___VforkTask_0__37__unnamedblk269__DOT__val;
    __Vtask___VforkTask_0__37__unnamedblk269__DOT__val = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> __Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item;
    IData/*31:0*/ __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i;
    __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i = 0;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_field>> __Vtask___VforkTask_0__37__fields;
    VlClassRef<Vpools_top_std__03a__03aprocess> __Vfunc_self__38__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__Vfuncout;
    __Vfunc_uvm_report_enabled__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__verbosity;
    __Vfunc_uvm_report_enabled__42__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__42__severity;
    __Vfunc_uvm_report_enabled__42__severity = 0;
    std::string __Vfunc_uvm_report_enabled__42__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__43__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__44__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__45__Vfuncout;
    __Vtask_uvm_report_enabled__45__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__46__id;
    std::string __Vtask_uvm_report_error__46__message;
    IData/*31:0*/ __Vtask_uvm_report_error__46__verbosity;
    __Vtask_uvm_report_error__46__verbosity = 0;
    std::string __Vtask_uvm_report_error__46__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__46__line;
    __Vtask_uvm_report_error__46__line = 0;
    std::string __Vtask_uvm_report_error__46__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__46__report_enabled_checked;
    __Vtask_uvm_report_error__46__report_enabled_checked = 0;
    std::string __Vtask_get_name__47__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__48__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__49__Vfuncout;
    CData/*0:0*/ __Vfunc_is_auto_updated__51__Vfuncout;
    __Vfunc_is_auto_updated__51__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__52__Vfuncout;
    __Vtask_get_lsb_pos__52__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__53__Vfuncout;
    __Vtask_get_n_bits__53__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__37____VDynScope_start_update_thread_0 
        = __VDynScope_start_update_thread_0;
    __Vtask___VforkTask_0__37__unnamedblk269__DOT__status = 0;
    __Vtask___VforkTask_0__37__unnamedblk269__DOT__val = 0;
    __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i = 0;
    __Vtask___VforkTask_0__37__fields.clear();
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__38__Vfuncout);
    this->__PVT__m_update_thread.at(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 192)
                                    ->__PVT__element) 
        = __Vfunc_self__38__Vfuncout;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 195)
                  ->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 195)->__VnoInFunc_get_fields(vlSymsp, __Vtask___VforkTask_0__37__fields);
    while (true) {
        __Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item 
            = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_reg_item, vlProcess, vlSymsp, "bd_r_item"s);
        VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 200)->__PVT__element 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 200)
            ->__PVT__rg;
        VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 201)->__PVT__element_kind = 0U;
        this->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item);
        __Vtask___VforkTask_0__37__unnamedblk269__DOT__val 
            = VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 203)
            ->__PVT__value.at(0U);
        if ((0U != VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 204)
             ->__PVT__status)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__42__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__42__severity = 2U;
                            __Vfunc_uvm_report_enabled__42__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__43__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__43__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__44__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__44__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__42__verbosity, (IData)(__Vfunc_uvm_report_enabled__42__severity), __Vfunc_uvm_report_enabled__42__id, __Vtask_uvm_report_enabled__45__Vfuncout);
                            __Vfunc_uvm_report_enabled__42__Vfuncout 
                                = __Vtask_uvm_report_enabled__45__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__42__Vfuncout))) {
                __Vtask_uvm_report_error__46__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__46__context_name = ""s;
                __Vtask_uvm_report_error__46__line = 0x000000ceU;
                __Vtask_uvm_report_error__46__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s;
                __Vtask_uvm_report_error__46__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 206)
                                      ->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 206)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__47__Vfuncout);
                    }(), __Vtask_get_name__47__Vfuncout);
                __Vtask_uvm_report_error__46__message 
                    = VL_SFORMATF_N_NX("Backdoor read of register '%@' failed.",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__46__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__48__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__48__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__49__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__49__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__46__id, __Vtask_uvm_report_error__46__message, __Vtask_uvm_report_error__46__verbosity, __Vtask_uvm_report_error__46__filename, __Vtask_uvm_report_error__46__line, __Vtask_uvm_report_error__46__context_name, (IData)(__Vtask_uvm_report_error__46__report_enabled_checked));
            }
        }
        __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i, __Vtask___VforkTask_0__37__fields.size())) {
            if (([&]() {
                        this->__VnoInFunc_is_auto_updated(vlSymsp, __Vtask___VforkTask_0__37__fields.at(__Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i), __Vfunc_is_auto_updated__51__Vfuncout);
                    }(), (IData)(__Vfunc_is_auto_updated__51__Vfuncout))) {
                VL_NULL_CHECK(__Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 210)->__PVT__value.atWrite(0U) 
                    = (VL_SHIFTR_QQI(64,64,32, __Vtask___VforkTask_0__37__unnamedblk269__DOT__val, 
                                     ([&]() {
                                VL_NULL_CHECK(__Vtask___VforkTask_0__37__fields.at(__Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 210)
                                      ->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__52__Vfuncout);
                            }(), __Vtask_get_lsb_pos__52__Vfuncout)) 
                       & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                        ([&]() {
                                    VL_NULL_CHECK(__Vtask___VforkTask_0__37__fields.at(__Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 211)
                                         ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__53__Vfuncout);
                                }(), __Vtask_get_n_bits__53__Vfuncout)) 
                          - 1ULL));
                VL_NULL_CHECK(__Vtask___VforkTask_0__37__fields.at(__Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 212)->__VnoInFunc_do_predict(vlProcess, vlSymsp, __Vtask___VforkTask_0__37__unnamedblk269__DOT__r_item, 0U, 0xffU);
            }
            __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i 
                = ((IData)(1U) + __Vtask___VforkTask_0__37__unnamedblk269__DOT__unnamedblk270__DOT__i);
        }
        this->__VnoInFunc_wait_for_change(vlProcess, vlSymsp, VL_NULL_CHECK(__Vtask___VforkTask_0__37____VDynScope_start_update_thread_0, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 215)
                                          ->__PVT__element);
    }
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> element) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_kill_update_thread\n"); );
    // Body
    if (this->__PVT__m_update_thread.exists(element)) {
        VL_NULL_CHECK(this->__PVT__m_update_thread.at(element), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 230)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_update_thread.erase(element);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads(Vpools_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_update_threads__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_has_update_threads\n"); );
    // Body
    has_update_threads__Vfuncrtn = VL_LTS_III(32, 0U, this->__PVT__m_update_thread.size());
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_write\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__57__Vfuncout;
    __Vfunc_uvm_report_enabled__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__57__verbosity;
    __Vfunc_uvm_report_enabled__57__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__57__severity;
    __Vfunc_uvm_report_enabled__57__severity = 0;
    std::string __Vfunc_uvm_report_enabled__57__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__58__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__59__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__60__Vfuncout;
    __Vtask_uvm_report_enabled__60__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__57__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__57__severity = 3U;
                    __Vfunc_uvm_report_enabled__57__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__58__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__58__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__59__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__59__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__57__verbosity, (IData)(__Vfunc_uvm_report_enabled__57__severity), __Vfunc_uvm_report_enabled__57__id, __Vtask_uvm_report_enabled__60__Vfuncout);
                    __Vfunc_uvm_report_enabled__57__Vfuncout 
                        = __Vtask_uvm_report_enabled__60__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__57__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_backdoor::write() method has not been overloaded"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s, 0x000000f8U, ""s, 1U);
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read\n"); );
    // Body
    this->__VnoInFunc_do_pre_read(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_read_func(vlProcess, vlSymsp, rw);
    this->__VnoInFunc_do_post_read(vlProcess, vlSymsp, rw);
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_read_func\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__65__Vfuncout;
    __Vfunc_uvm_report_enabled__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__65__verbosity;
    __Vfunc_uvm_report_enabled__65__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__65__severity;
    __Vfunc_uvm_report_enabled__65__severity = 0;
    std::string __Vfunc_uvm_report_enabled__65__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__66__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__67__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__68__Vfuncout;
    __Vtask_uvm_report_enabled__68__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__65__id = "RegModel"s;
                    __Vfunc_uvm_report_enabled__65__severity = 3U;
                    __Vfunc_uvm_report_enabled__65__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__66__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__66__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__67__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__67__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__65__verbosity, (IData)(__Vfunc_uvm_report_enabled__65__severity), __Vfunc_uvm_report_enabled__65__id, __Vtask_uvm_report_enabled__68__Vfuncout);
                    __Vfunc_uvm_report_enabled__65__Vfuncout 
                        = __Vtask_uvm_report_enabled__68__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__65__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "uvm_reg_backdoor::read_func() method has not been overloaded"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh"s, 0x00000108U, ""s, 1U);
    }
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_backdoor.svh", 265)->__PVT__status = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__71__Vfuncout;
    __Vfunc___Vbasic_randomize__71__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__71__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__71__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vbasic_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__lineno = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_reg_backdoor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "fname:" + VL_TO_STRING(__PVT__fname);
    out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
    out += ", m_update_thread:" + VL_TO_STRING(__PVT__m_update_thread);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
