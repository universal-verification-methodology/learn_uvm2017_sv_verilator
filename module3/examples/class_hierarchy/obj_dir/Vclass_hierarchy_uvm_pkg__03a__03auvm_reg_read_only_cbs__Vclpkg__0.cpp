// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi169> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi169> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi169__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_read_only_cbs"s;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_get(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_me)) {
        this->__PVT__m_me = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs, vlProcess, vlSymsp, "uvm_reg_read_only_cbs"s);
    }
    get__Vfuncrtn = this->__PVT__m_me;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_add(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_add\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs> __Vfunc_get__3__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs> __Vfunc_get__6__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field>> flds;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz176_TBz177__Vclpkg.__VnoInFunc_add(vlSymsp, rg, 
                                                                                ([&]() {
                this->__VnoInFunc_get(vlSymsp, __Vfunc_get__3__Vfuncout);
            }(), __Vfunc_get__3__Vfuncout), 0U);
    VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 250)->__VnoInFunc_get_fields(vlSymsp, flds);
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, flds.size())) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz180_TBz177__Vclpkg.__VnoInFunc_add(vlSymsp, flds.at(unnamedblk2__DOT__i), 
                                                                                ([&]() {
                    this->__VnoInFunc_get(vlSymsp, __Vfunc_get__6__Vfuncout);
                }(), __Vfunc_get__6__Vfuncout), 0U);
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_remove(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg> rg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg::__VnoInFunc_remove\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_first__8__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_get_cb__9__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_get_cb__11__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs> __Vtask_next__12__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs> __Vfunc_get__17__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi89> cbs;
    VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field>> flds;
    {
        cbs = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_callback_iter__pi89, vlSymsp, rg);
        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 263)->__VnoInFunc_first(vlProcess, vlSymsp, __Vtask_first__8__Vfuncout);
        while ((([&]() {
                        VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 264)
                 ->__VnoInFunc_get_cb(vlSymsp, __Vtask_get_cb__9__Vfuncout);
                    }(), __Vtask_get_cb__9__Vfuncout) 
                != ([&]() {
                        this->__VnoInFunc_get(vlSymsp, __Vfunc_get__10__Vfuncout);
                    }(), __Vfunc_get__10__Vfuncout))) {
            if ((VlNull{} == ([&]() {
                            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 265)
                              ->__VnoInFunc_get_cb(vlSymsp, __Vtask_get_cb__11__Vfuncout);
                        }(), __Vtask_get_cb__11__Vfuncout))) {
                goto __Vlabel0;
            }
            VL_NULL_CHECK(cbs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 267)->__VnoInFunc_next(vlProcess, vlSymsp, __Vtask_next__12__Vfuncout);
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz176_TBz177__Vclpkg.__VnoInFunc_delete(vlSymsp, rg, 
                                                                                ([&]() {
                    this->__VnoInFunc_get(vlSymsp, __Vfunc_get__14__Vfuncout);
                }(), __Vfunc_get__14__Vfuncout));
        VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 270)->__VnoInFunc_get_fields(vlSymsp, flds);
        unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__i, flds.size())) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_callbacks__Tz180_TBz177__Vclpkg.__VnoInFunc_delete(vlSymsp, flds.at(unnamedblk3__DOT__i), 
                                                                                ([&]() {
                        this->__VnoInFunc_get(vlSymsp, __Vfunc_get__17__Vfuncout);
                    }(), __Vfunc_get__17__Vfuncout));
            unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
        }
        __Vlabel0: ;
    }
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_registry__pi169> __Vfunc_get__1__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi169__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__1__Vfuncout;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_create(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs> tmp;
    tmp = ((""s == name) ? VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs, vlProcess, vlSymsp, "uvm_reg_read_only_cbs"s)
            : VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_read_only_cbs"s;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_pre_write(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_pre_write\n"); );
    // Locals
    std::string __Vtask_get_full_name__4__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg> __Vtask_get_parent__5__Vfuncout;
    std::string __Vtask_get_full_name__6__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__Vfuncout;
    __Vfunc_uvm_report_enabled__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__7__verbosity;
    __Vfunc_uvm_report_enabled__7__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__7__severity;
    __Vfunc_uvm_report_enabled__7__severity = 0;
    std::string __Vfunc_uvm_report_enabled__7__id;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
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
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_field> unnamedblk1__DOT__fld;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg> unnamedblk1__DOT__rg;
    std::string name;
    {
        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 218)
                      ->__PVT__element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 218)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__4__Vfuncout);
        name = __Vtask_get_full_name__4__Vfuncout;
        if ((0U != VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 220)
             ->__PVT__status)) {
            goto __Vlabel0;
        }
        if ((1U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 223)
             ->__PVT__element_kind)) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 226)
                                                ->__PVT__element, unnamedblk1__DOT__fld))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_cbs.svh:226: Assertion failed in %Nuvm_pkg.uvm_reg_read_only_cbs.pre_write.unnamedblk1: '$cast' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 226, "");
            }
            VL_NULL_CHECK(unnamedblk1__DOT__fld, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 227)->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__5__Vfuncout);
            unnamedblk1__DOT__rg = __Vtask_get_parent__5__Vfuncout;
            VL_NULL_CHECK(unnamedblk1__DOT__rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 228)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__6__Vfuncout);
            name = __Vtask_get_full_name__6__Vfuncout;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__7__id = "UVM/REG/READONLY"s;
                        __Vfunc_uvm_report_enabled__7__severity = 2U;
                        __Vfunc_uvm_report_enabled__7__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__8__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__9__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__7__verbosity, (IData)(__Vfunc_uvm_report_enabled__7__severity), __Vfunc_uvm_report_enabled__7__id, __Vtask_uvm_report_enabled__10__Vfuncout);
                        __Vfunc_uvm_report_enabled__7__Vfuncout 
                            = __Vtask_uvm_report_enabled__10__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__7__Vfuncout))) {
            __Vtask_uvm_report_error__11__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__11__context_name = ""s;
            __Vtask_uvm_report_error__11__line = 0x000000e8U;
            __Vtask_uvm_report_error__11__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh"s;
            __Vtask_uvm_report_error__11__verbosity = 0U;
            __Vtask_uvm_report_error__11__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(name, " is read-only. Cannot call write() method."s));
            __Vtask_uvm_report_error__11__id = "UVM/REG/READONLY"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__13__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__11__id, __Vtask_uvm_report_error__11__message, __Vtask_uvm_report_error__11__verbosity, __Vtask_uvm_report_error__11__filename, __Vtask_uvm_report_error__11__line, __Vtask_uvm_report_error__11__context_name, (IData)(__Vtask_uvm_report_error__11__report_enabled_checked));
        }
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_cbs.svh", 234)->__PVT__status = 1U;
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__16__Vfuncout;
    __Vfunc___VBasicRand__16__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__16__Vfuncout);
            }(), __Vfunc___VBasicRand__16__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::~Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_read_only_cbs::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vclass_hierarchy_uvm_pkg__03a__03auvm_reg_cbs::to_string_middle();
    return (out);
}
