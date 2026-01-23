// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi167> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi167> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi167__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_write_only_cbs"s;
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_me)) {
        this->__PVT__m_me = VL_NEW(Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs, vlProcess, vlSymsp, "uvm_reg_write_only_cbs"s);
    }
    get__Vfuncrtn = this->__PVT__m_me;
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_add(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs> __Vfunc_get__6__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_field>> flds;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz164_TBz165__Vclpkg.__VnoInFunc_add(vlSymsp, rg, 
                                                                                ([&]() {
                this->__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
            }(), __Vfunc_get__3__Vfuncout), 0U);
    VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 334)->__VnoInFunc_get_fields(vlSymsp, flds);
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, flds.size())) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz168_TBz165__Vclpkg.__VnoInFunc_add(vlSymsp, flds.at(unnamedblk2__DOT__i), 
                                                                                ([&]() {
                    this->__VnoInFunc_get(vlSymsp, __Vfunc_get__6__Vfuncout);
                }(), __Vfunc_get__6__Vfuncout), 0U);
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_remove(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__VnoInFunc_remove\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__8__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_get_cb__9__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_get_cb__11__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__12__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs> __Vfunc_get__17__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_callback_iter__pi83> cbs;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_field>> flds;
    {
        cbs = VL_NEW(Vdma_uvm_pkg__03a__03auvm_callback_iter__pi83, vlSymsp, rg);
        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 347)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__8__Vfuncout);
        while ((([&]() {
                        VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 348)
                 ->__VnoInFunc_get_cb(vlSymsp, __Vtask_get_cb__9__Vfuncout);
                    }(), __Vtask_get_cb__9__Vfuncout) 
                != ([&]() {
                        this->__VnoInFunc_get(vlSymsp, __Vfunc_get__10__Vfuncout);
                    }(), __Vfunc_get__10__Vfuncout))) {
            if ((VlNull{} == ([&]() {
                            VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 349)
                              ->__VnoInFunc_get_cb(vlSymsp, __Vtask_get_cb__11__Vfuncout);
                        }(), __Vtask_get_cb__11__Vfuncout))) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(cbs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 351)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__12__Vfuncout);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz164_TBz165__Vclpkg.__VnoInFunc_delete(vlSymsp, rg, 
                                                                                ([&]() {
                    this->__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
                }(), __Vfunc_get__14__Vfuncout));
        VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 354)->__VnoInFunc_get_fields(vlSymsp, flds);
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, flds.size())) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz168_TBz165__Vclpkg.__VnoInFunc_delete(vlSymsp, flds.at(unnamedblk3__DOT__i), 
                                                                                ([&]() {
                        this->__VnoInFunc_get(vlSymsp, __Vfunc_get__17__Vfuncout);
                    }(), __Vfunc_get__17__Vfuncout));
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
        __Vlabel0: ;
    }
}

Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_reg_cbs(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi167> __Vfunc_get__1__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi167__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__1__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs, vlProcess, vlSymsp, "uvm_reg_write_only_cbs"s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_write_only_cbs"s;
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_pre_read(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_pre_read\n"); );
    // Locals
    std::string __Vtask_get_full_name__4__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> __Vtask_get_parent__5__Vfuncout;
    std::string __Vtask_get_full_name__6__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__Vfuncout;
    __Vfunc_uvm_report_enabled__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    std::string __Vfunc_uvm_report_enabled__7__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__10__Vfuncout;
    __Vtask_uvm_report_enabled__10__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__11__id;
    std::string __Vtask_uvm_report_error__11__message;
    IData/*31:0*/ __Vtask_uvm_report_error__11__verbosity;
    __Vtask_uvm_report_error__11__verbosity = 0;
    std::string __Vtask_uvm_report_error__11__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__11__line;
    __Vtask_uvm_report_error__11__line = 0;
    std::string __Vtask_uvm_report_error__11__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__11__report_enabled_checked;
    __Vtask_uvm_report_error__11__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_field> unnamedblk1__DOT__fld;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> unnamedblk1__DOT__rg;
    std::string name;
    {
        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 302)
                      ->__PVT__element, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 302)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__4__Vfuncout);
        name = __Vtask_get_full_name__4__Vfuncout;
        if ((0U != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 304)
             ->__PVT__status)) {
            goto __Vlabel0;
        }
        if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 307)
             ->__PVT__element_kind)) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 310)
                                                ->__PVT__element, unnamedblk1__DOT__fld))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_cbs.svh:310: Assertion failed in %Nuvm_pkg.uvm_reg_write_only_cbs.pre_read.unnamedblk1: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,vlSymsp->name());
                VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 310, "");
            }
            VL_NULL_CHECK(unnamedblk1__DOT__fld, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 311)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__5__Vfuncout);
            unnamedblk1__DOT__rg = __Vtask_get_parent__5__Vfuncout;
            VL_NULL_CHECK(unnamedblk1__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 312)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__6__Vfuncout);
            name = __Vtask_get_full_name__6__Vfuncout;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__7__id = "UVM/REG/WRTEONLY"s;
                        __Vfunc_uvm_report_enabled__7__severity = 2U;
                        __Vfunc_uvm_report_enabled__7__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__8__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__9__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), __Vfunc_uvm_report_enabled__7__id, __Vtask_uvm_report_enabled__10__Vfuncout);
                        __Vfunc_uvm_report_enabled__7__Vfuncout 
                            = __Vtask_uvm_report_enabled__10__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__7__Vfuncout))) {
            __Vtask_uvm_report_error__11__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__11__context_name = ""s;
            __Vtask_uvm_report_error__11__line = 0x0000013cU;
            __Vtask_uvm_report_error__11__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh"s;
            __Vtask_uvm_report_error__11__verbosity = 0U;
            __Vtask_uvm_report_error__11__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(name, " is write-only. Cannot call read() method."s));
            __Vtask_uvm_report_error__11__id = "UVM/REG/WRTEONLY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__11__id, __Vtask_uvm_report_error__11__message, __Vtask_uvm_report_error__11__verbosity, __Vtask_uvm_report_error__11__filename, __Vtask_uvm_report_error__11__line, __Vtask_uvm_report_error__11__context_name, (IData)(__Vtask_uvm_report_error__11__report_enabled_checked));
        }
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 318)->__PVT__status = 1U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__16__Vfuncout;
    __Vfunc___Vbasic_randomize__16__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__16__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__16__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_reg_write_only_cbs::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vdma_uvm_pkg__03a__03auvm_reg_cbs::to_string_middle();
    return (out);
}
