// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi84> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi84> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi84__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_map"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg::__VnoInFunc_backdoor\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_backdoor)) {
        this->__PVT__m_backdoor = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "Backdoor"s);
    }
    backdoor__Vfuncrtn = this->__PVT__m_backdoor;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi84> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi84__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, "uvm_reg_map"s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_map, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_map"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_auto_predict(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_auto_predict\n"); );
    // Body
    this->__PVT__m_auto_predict = on;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_auto_predict__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_auto_predict\n"); );
    // Body
    get_auto_predict__Vfuncrtn = this->__PVT__m_auto_predict;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_check_on_read(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ on) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_check_on_read\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk1__DOT__submap;
    CData/*0:0*/ unnamedblk1__DOT__submap__Vfirst;
    unnamedblk1__DOT__submap__Vfirst = 0;
    this->__PVT__m_check_on_read = on;
    if ((0U != this->__PVT__m_submaps.first(unnamedblk1__DOT__submap))) {
        unnamedblk1__DOT__submap__Vfirst = 1U;
        while (((IData)(unnamedblk1__DOT__submap__Vfirst) 
                || (0U != this->__PVT__m_submaps.next(unnamedblk1__DOT__submap)))) {
            unnamedblk1__DOT__submap__Vfirst = 0U;
            VL_NULL_CHECK(unnamedblk1__DOT__submap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 392)->__VnoInFunc_set_check_on_read(vlSymsp, on);
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_on_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_check_on_read\n"); );
    // Body
    get_check_on_read__Vfuncrtn = this->__PVT__m_check_on_read;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_transaction_order_policy(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_transaction_order_policy> pol) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_transaction_order_policy\n"); );
    // Body
    this->__PVT__policy = pol;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_transaction_order_policy(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_transaction_order_policy> &get_transaction_order_policy__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_transaction_order_policy\n"); );
    // Body
    get_transaction_order_policy__Vfuncrtn = this->__PVT__policy;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_ceil(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ &ceil__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_ceil\n"); );
    // Body
    IData/*31:0*/ r;
    r = 0;
    IData/*31:0*/ r0;
    r0 = 0;
    r = VL_DIV_III(32, a, b);
    r0 = VL_MODDIV_III(32, a, b);
    ceil__Vfuncrtn = ((0U != r0) ? ((IData)(1U) + r)
                       : r);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_unregister(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_unregister\n"); );
    // Body
    IData/*31:0*/ unnamedblk2__DOT__idx;
    unnamedblk2__DOT__idx = 0;
    IData/*31:0*/ unnamedblk3__DOT__idx;
    unnamedblk3__DOT__idx = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk4__DOT__map_;
    CData/*0:0*/ unnamedblk4__DOT__map___Vfirst;
    unnamedblk4__DOT__map___Vfirst = 0;
    QData/*63:0*/ unnamedblk5__DOT__i;
    unnamedblk5__DOT__i = 0;
    CData/*0:0*/ unnamedblk5__DOT__i__Vfirst;
    unnamedblk5__DOT__i__Vfirst = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block>> q;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__VnoInFunc_get_root_blocks(vlSymsp, q);
    unnamedblk2__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__idx, q.size())) {
        VL_NULL_CHECK(q.at(unnamedblk2__DOT__idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 508)->__VnoInFunc_set_lock(vlSymsp, 0U);
        unnamedblk2__DOT__idx = ((IData)(1U) + unnamedblk2__DOT__idx);
    }
    unnamedblk3__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__idx, q.size())) {
        VL_NULL_CHECK(q.at(unnamedblk3__DOT__idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 511)->__VnoInFunc_unregister(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk3__DOT__idx = ((IData)(1U) + unnamedblk3__DOT__idx);
    }
    if ((0U != this->__PVT__m_submaps.first(unnamedblk4__DOT__map_))) {
        unnamedblk4__DOT__map___Vfirst = 1U;
        while (((IData)(unnamedblk4__DOT__map___Vfirst) 
                || (0U != this->__PVT__m_submaps.next(unnamedblk4__DOT__map_)))) {
            unnamedblk4__DOT__map___Vfirst = 0U;
            VL_NULL_CHECK(unnamedblk4__DOT__map_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 514)->__VnoInFunc_unregister(vlSymsp);
        }
    }
    this->__PVT__m_submaps.clear();
    this->__PVT__m_submap_rights.clear();
    if ((0U != this->__PVT__m_regs_by_offset.first(unnamedblk5__DOT__i))) {
        unnamedblk5__DOT__i__Vfirst = 1U;
        while (((IData)(unnamedblk5__DOT__i__Vfirst) 
                || (0U != this->__PVT__m_regs_by_offset.next(unnamedblk5__DOT__i)))) {
            unnamedblk5__DOT__i__Vfirst = 0U;
            VL_NULL_CHECK(this->__PVT__m_regs_by_offset
                          .at(unnamedblk5__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 521)->__VnoInFunc_unregister(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this});
        }
    }
    this->__PVT__m_regs_by_offset.clear();
    this->__PVT__m_regs_by_offset_wo.clear();
    this->__PVT__m_mems_by_offset.clear();
    this->__PVT__m_regs_info.clear();
    this->__PVT__m_mems_info.clear();
    this->__PVT__m_parent_map = VlNull{};
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone_and_update(Vrecorders_top__Syms* __restrict vlSymsp, std::string rights, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> &clone_and_update__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone_and_update\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__verbosity;
    __Vfunc_uvm_report_enabled__9__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__9__severity;
    __Vfunc_uvm_report_enabled__9__severity = 0;
    std::string __Vfunc_uvm_report_enabled__9__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__12__Vfuncout;
    __Vtask_uvm_report_enabled__12__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__13__id;
    std::string __Vtask_uvm_report_error__13__message;
    IData/*31:0*/ __Vtask_uvm_report_error__13__verbosity;
    __Vtask_uvm_report_error__13__verbosity = 0;
    std::string __Vtask_uvm_report_error__13__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__13__line;
    __Vtask_uvm_report_error__13__line = 0;
    std::string __Vtask_uvm_report_error__13__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__13__report_enabled_checked;
    __Vtask_uvm_report_error__13__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__Vfuncout;
    __Vfunc_uvm_report_enabled__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__17__verbosity;
    __Vfunc_uvm_report_enabled__17__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__17__severity;
    __Vfunc_uvm_report_enabled__17__severity = 0;
    std::string __Vfunc_uvm_report_enabled__17__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__20__Vfuncout;
    __Vtask_uvm_report_enabled__20__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__21__id;
    std::string __Vtask_uvm_report_error__21__message;
    IData/*31:0*/ __Vtask_uvm_report_error__21__verbosity;
    __Vtask_uvm_report_error__21__verbosity = 0;
    std::string __Vtask_uvm_report_error__21__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__21__line;
    __Vtask_uvm_report_error__21__line = 0;
    std::string __Vtask_uvm_report_error__21__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__21__report_enabled_checked;
    __Vtask_uvm_report_error__21__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__25__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vtask_create_map__26__Vfuncout;
    std::string __Vfunc_get_name__27__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_get_reg_map_info__28__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_get_mem_map_info__30__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk6__DOT__m;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk6__DOT__b;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg>> unnamedblk6__DOT__qr;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem>> unnamedblk6__DOT__qm;
    QData/*63:0*/ unnamedblk6__DOT__unnamedblk7__DOT__i;
    unnamedblk6__DOT__unnamedblk7__DOT__i = 0;
    CData/*0:0*/ unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst;
    unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__rg;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info;
    VlWide<5>/*159:0*/ unnamedblk6__DOT__unnamedblk9__DOT__i;
    VL_ZERO_W(160, unnamedblk6__DOT__unnamedblk9__DOT__i);
    CData/*0:0*/ unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst;
    unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rg;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info;
    if ((VlNull{} != this->__PVT__m_parent_map)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__9__id = "UVM/REG/CLONEMAPWITHPARENT"s;
                        __Vfunc_uvm_report_enabled__9__severity = 2U;
                        __Vfunc_uvm_report_enabled__9__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__10__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__11__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), __Vfunc_uvm_report_enabled__9__id, __Vtask_uvm_report_enabled__12__Vfuncout);
                        __Vfunc_uvm_report_enabled__9__Vfuncout 
                            = __Vtask_uvm_report_enabled__12__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
            __Vtask_uvm_report_error__13__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__13__context_name = ""s;
            __Vtask_uvm_report_error__13__line = 0x00000216U;
            __Vtask_uvm_report_error__13__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__13__verbosity = 0U;
            __Vtask_uvm_report_error__13__message = "cannot clone a map which already has a parent"s;
            __Vtask_uvm_report_error__13__id = "UVM/REG/CLONEMAPWITHPARENT"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__13__id, __Vtask_uvm_report_error__13__message, __Vtask_uvm_report_error__13__verbosity, __Vtask_uvm_report_error__13__filename, __Vtask_uvm_report_error__13__line, __Vtask_uvm_report_error__13__context_name, (IData)(__Vtask_uvm_report_error__13__report_enabled_checked));
        }
    }
    if ((0U != this->__PVT__m_submaps.size())) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__17__id = "UVM/REG/CLONEMAPWITHCHILDREN"s;
                        __Vfunc_uvm_report_enabled__17__severity = 2U;
                        __Vfunc_uvm_report_enabled__17__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__18__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__19__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__17__verbosity, (IData)(__Vfunc_uvm_report_enabled__17__severity), __Vfunc_uvm_report_enabled__17__id, __Vtask_uvm_report_enabled__20__Vfuncout);
                        __Vfunc_uvm_report_enabled__17__Vfuncout 
                            = __Vtask_uvm_report_enabled__20__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__17__Vfuncout))) {
            __Vtask_uvm_report_error__21__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__21__context_name = ""s;
            __Vtask_uvm_report_error__21__line = 0x00000217U;
            __Vtask_uvm_report_error__21__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__21__verbosity = 0U;
            __Vtask_uvm_report_error__21__message = "cannot clone a map which already has children"s;
            __Vtask_uvm_report_error__21__id = "UVM/REG/CLONEMAPWITHCHILDREN"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__21__id, __Vtask_uvm_report_error__21__message, __Vtask_uvm_report_error__21__verbosity, __Vtask_uvm_report_error__21__filename, __Vtask_uvm_report_error__21__line, __Vtask_uvm_report_error__21__context_name, (IData)(__Vtask_uvm_report_error__21__report_enabled_checked));
        }
    }
    this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__25__Vfuncout);
    unnamedblk6__DOT__b = __Vfunc_get_parent__25__Vfuncout;
    VL_NULL_CHECK(unnamedblk6__DOT__b, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 543)->__VnoInFunc_create_map(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__27__Vfuncout);
                }(), __Vfunc_get_name__27__Vfuncout)), 0ULL, this->__PVT__m_n_bytes, this->__PVT__m_endian, (IData)(this->__PVT__m_byte_addressing), __Vtask_create_map__26__Vfuncout);
    unnamedblk6__DOT__m = __Vtask_create_map__26__Vfuncout;
    if ((0U != this->__PVT__m_regs_by_offset.first(unnamedblk6__DOT__unnamedblk7__DOT__i))) {
        unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst = 1U;
        while (((IData)(unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst) 
                || (0U != this->__PVT__m_regs_by_offset.next(unnamedblk6__DOT__unnamedblk7__DOT__i)))) {
            unnamedblk6__DOT__unnamedblk7__DOT__i__Vfirst = 0U;
            unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__rg 
                = this->__PVT__m_regs_by_offset.at(unnamedblk6__DOT__unnamedblk7__DOT__i);
            this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__rg, 1U, __Vfunc_get_reg_map_info__28__Vfuncout);
            unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info 
                = __Vfunc_get_reg_map_info__28__Vfuncout;
            VL_NULL_CHECK(unnamedblk6__DOT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 548)->__VnoInFunc_add_reg(vlSymsp, unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__rg, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 548)
                                                                                ->__PVT__offset, rights, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 548)
                                                                                ->__PVT__unmapped, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 548)
                                                                                ->__PVT__frontdoor);
        }
    }
    if ((0U != this->__PVT__m_mems_by_offset.first(unnamedblk6__DOT__unnamedblk9__DOT__i))) {
        unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst = 1U;
        while (((IData)(unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst) 
                || (0U != this->__PVT__m_mems_by_offset.next(unnamedblk6__DOT__unnamedblk9__DOT__i)))) {
            unnamedblk6__DOT__unnamedblk9__DOT__i__Vfirst = 0U;
            unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rg 
                = this->__PVT__m_mems_by_offset.at(unnamedblk6__DOT__unnamedblk9__DOT__i);
            this->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rg, 1U, __Vfunc_get_mem_map_info__30__Vfuncout);
            unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info 
                = __Vfunc_get_mem_map_info__30__Vfuncout;
            VL_NULL_CHECK(unnamedblk6__DOT__m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 553)->__VnoInFunc_add_mem(vlSymsp, unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__rg, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 553)
                                                                                ->__PVT__offset, rights, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 553)
                                                                                ->__PVT__unmapped, VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk9__DOT__unnamedblk10__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 553)
                                                                                ->__PVT__frontdoor);
        }
    }
    clone_and_update__Vfuncrtn = unnamedblk6__DOT__m;
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::Vrecorders_top_uvm_pkg__03a__03auvm_reg_map(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    ((""s 
                                                                      == name)
                                                                      ? "default_map"s
                                                                      : name))) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__m_auto_predict = 0U;
    this->__PVT__m_check_on_read = 0U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_configure(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> parent, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_configure\n"); );
    // Body
    this->__PVT__m_parent = parent;
    this->__PVT__m_n_bytes = n_bytes;
    this->__PVT__m_endian = endian;
    this->__PVT__m_base_addr = base_addr;
    this->__PVT__m_byte_addressing = byte_addressing;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    std::string __Vfunc_uvm_report_enabled__33__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__36__Vfuncout;
    __Vtask_uvm_report_enabled__36__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__37__id;
    std::string __Vtask_uvm_report_error__37__message;
    IData/*31:0*/ __Vtask_uvm_report_error__37__verbosity;
    __Vtask_uvm_report_error__37__verbosity = 0;
    std::string __Vtask_uvm_report_error__37__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__37__line;
    __Vtask_uvm_report_error__37__line = 0;
    std::string __Vtask_uvm_report_error__37__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__37__report_enabled_checked;
    __Vtask_uvm_report_error__37__report_enabled_checked = 0;
    std::string __Vtask_get_name__38__Vfuncout;
    std::string __Vfunc_get_name__39__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__40__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__41__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__43__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__44__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__Vfuncout;
    __Vfunc_uvm_report_enabled__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__verbosity;
    __Vfunc_uvm_report_enabled__45__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__45__severity;
    __Vfunc_uvm_report_enabled__45__severity = 0;
    std::string __Vfunc_uvm_report_enabled__45__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__48__Vfuncout;
    __Vtask_uvm_report_enabled__48__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__49__id;
    std::string __Vtask_uvm_report_error__49__message;
    IData/*31:0*/ __Vtask_uvm_report_error__49__verbosity;
    __Vtask_uvm_report_error__49__verbosity = 0;
    std::string __Vtask_uvm_report_error__49__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__49__line;
    __Vtask_uvm_report_error__49__line = 0;
    std::string __Vtask_uvm_report_error__49__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__49__report_enabled_checked;
    __Vtask_uvm_report_error__49__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__50__Vfuncout;
    std::string __Vfunc_get_full_name__51__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk484__DOT__info;
    {
        if (this->__PVT__m_regs_info.exists(rg)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__33__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__33__severity = 2U;
                            __Vfunc_uvm_report_enabled__33__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__34__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__35__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), __Vfunc_uvm_report_enabled__33__id, __Vtask_uvm_report_enabled__36__Vfuncout);
                            __Vfunc_uvm_report_enabled__33__Vfuncout 
                                = __Vtask_uvm_report_enabled__36__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__33__Vfuncout))) {
                __Vtask_uvm_report_error__37__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__37__context_name = ""s;
                __Vtask_uvm_report_error__37__line = 0x00000258U;
                __Vtask_uvm_report_error__37__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__37__verbosity = 0U;
                __Vtask_uvm_report_error__37__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 600)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__38__Vfuncout);
                                        }(), __Vtask_get_name__38__Vfuncout)), "' has already been added to map '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__39__Vfuncout);
                                }(), __Vfunc_get_name__39__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__37__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__40__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__40__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__41__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__41__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__37__id, __Vtask_uvm_report_error__37__message, __Vtask_uvm_report_error__37__verbosity, __Vtask_uvm_report_error__37__filename, __Vtask_uvm_report_error__37__line, __Vtask_uvm_report_error__37__context_name, (IData)(__Vtask_uvm_report_error__37__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((([&]() {
                        VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 604)
              ->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__43__Vfuncout);
                    }(), __Vtask_get_parent__43__Vfuncout) 
             != ([&]() {
                        this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__44__Vfuncout);
                    }(), __Vfunc_get_parent__44__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__45__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__45__severity = 2U;
                            __Vfunc_uvm_report_enabled__45__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__46__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__47__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__45__verbosity, (IData)(__Vfunc_uvm_report_enabled__45__severity), __Vfunc_uvm_report_enabled__45__id, __Vtask_uvm_report_enabled__48__Vfuncout);
                            __Vfunc_uvm_report_enabled__45__Vfuncout 
                                = __Vtask_uvm_report_enabled__48__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__45__Vfuncout))) {
                __Vtask_uvm_report_error__49__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__49__context_name = ""s;
                __Vtask_uvm_report_error__49__line = 0x0000025fU;
                __Vtask_uvm_report_error__49__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__49__verbosity = 0U;
                __Vtask_uvm_report_error__49__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 607)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__50__Vfuncout);
                                        }(), __Vtask_get_full_name__50__Vfuncout)), "' may not be added to address map '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__51__Vfuncout);
                                }(), __Vfunc_get_full_name__51__Vfuncout)), "' : they are not in the same block"s));
                __Vtask_uvm_report_error__49__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__52__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__53__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__49__id, __Vtask_uvm_report_error__49__message, __Vtask_uvm_report_error__49__verbosity, __Vtask_uvm_report_error__49__filename, __Vtask_uvm_report_error__49__line, __Vtask_uvm_report_error__49__context_name, (IData)(__Vtask_uvm_report_error__49__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 611)->__VnoInFunc_add_map(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk484__DOT__info = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info, vlSymsp);
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 615)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 616)->__PVT__rights 
            = rights;
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 617)->__PVT__unmapped 
            = unmapped;
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 618)->__PVT__frontdoor 
            = frontdoor;
        VL_NULL_CHECK(unnamedblk484__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 619)->__PVT__is_initialized = 0U;
        this->__PVT__m_regs_info.at(rg) = unnamedblk484__DOT__info;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_reg_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__57__Vfuncout;
    __Vfunc_uvm_report_enabled__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__57__verbosity;
    __Vfunc_uvm_report_enabled__57__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__57__severity;
    __Vfunc_uvm_report_enabled__57__severity = 0;
    std::string __Vfunc_uvm_report_enabled__57__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__58__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__59__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__60__Vfuncout;
    __Vtask_uvm_report_enabled__60__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__61__id;
    std::string __Vtask_uvm_report_error__61__message;
    IData/*31:0*/ __Vtask_uvm_report_error__61__verbosity;
    __Vtask_uvm_report_error__61__verbosity = 0;
    std::string __Vtask_uvm_report_error__61__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__61__line;
    __Vtask_uvm_report_error__61__line = 0;
    std::string __Vtask_uvm_report_error__61__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__61__report_enabled_checked;
    __Vtask_uvm_report_error__61__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__62__Vfuncout;
    std::string __Vfunc_get_full_name__63__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__67__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_root_map__68__Vfuncout;
    CData/*0:0*/ __Vtask_is_locked__69__Vfuncout;
    __Vtask_is_locked__69__Vfuncout = 0;
    std::string __Vtask_Xget_fields_accessX__74__Vfuncout;
    IData/*31:0*/ __Vtask_get_physical_addresses__75__Vfuncout;
    __Vtask_get_physical_addresses__75__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__76__Vfuncout;
    __Vtask_get_n_bytes__76__Vfuncout = 0;
    std::string __Vtask_Xget_fields_accessX__77__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__Vfuncout;
    __Vfunc_uvm_report_enabled__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__82__verbosity;
    __Vfunc_uvm_report_enabled__82__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__82__severity;
    __Vfunc_uvm_report_enabled__82__severity = 0;
    std::string __Vfunc_uvm_report_enabled__82__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__85__Vfuncout;
    __Vtask_uvm_report_enabled__85__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__86__id;
    std::string __Vtask_uvm_report_warning__86__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__86__verbosity;
    __Vtask_uvm_report_warning__86__verbosity = 0;
    std::string __Vtask_uvm_report_warning__86__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__86__line;
    __Vtask_uvm_report_warning__86__line = 0;
    std::string __Vtask_uvm_report_warning__86__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__86__report_enabled_checked;
    __Vtask_uvm_report_warning__86__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__87__Vfuncout;
    std::string __Vtask_get_full_name__88__Vfuncout;
    std::string __Vtask_get_full_name__89__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__90__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__91__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__93__Vfuncout;
    __Vfunc_uvm_report_enabled__93__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__93__verbosity;
    __Vfunc_uvm_report_enabled__93__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__93__severity;
    __Vfunc_uvm_report_enabled__93__severity = 0;
    std::string __Vfunc_uvm_report_enabled__93__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__94__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__95__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__96__Vfuncout;
    __Vtask_uvm_report_enabled__96__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__97__id;
    std::string __Vtask_uvm_report_warning__97__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__97__verbosity;
    __Vtask_uvm_report_warning__97__verbosity = 0;
    std::string __Vtask_uvm_report_warning__97__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__97__line;
    __Vtask_uvm_report_warning__97__line = 0;
    std::string __Vtask_uvm_report_warning__97__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__97__report_enabled_checked;
    __Vtask_uvm_report_warning__97__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__98__Vfuncout;
    std::string __Vtask_get_full_name__99__Vfuncout;
    std::string __Vtask_get_full_name__100__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk485__DOT__info;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk485__DOT__blk;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk485__DOT__top_map;
    VlQueue<QData/*63:0*/> unnamedblk485__DOT__addrs;
    unnamedblk485__DOT__addrs.atDefault() = 0;
    IData/*31:0*/ unnamedblk485__DOT__unnamedblk486__DOT__i;
    unnamedblk485__DOT__unnamedblk486__DOT__i = 0;
    std::string unnamedblk485__DOT__unnamedblk487__DOT__rg_acc;
    IData/*31:0*/ unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i;
    unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i = 0;
    QData/*63:0*/ unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr;
    unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2;
    std::string unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc;
    std::string unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__unnamedblk491__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range;
    VL_ZERO_W(160, unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range);
    CData/*0:0*/ unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst;
    unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst = 0;
    std::string unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__unnamedblk493__DOT__a;
    {
        if ((! this->__PVT__m_regs_info.exists(rg))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__57__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__57__severity = 2U;
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
                __Vtask_uvm_report_error__61__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__61__context_name = ""s;
                __Vtask_uvm_report_error__61__line = 0x0000027bU;
                __Vtask_uvm_report_error__61__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__61__verbosity = 0U;
                __Vtask_uvm_report_error__61__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of register '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 635)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__62__Vfuncout);
                                        }(), __Vtask_get_full_name__62__Vfuncout)), "' in address map '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__63__Vfuncout);
                                }(), __Vfunc_get_full_name__63__Vfuncout)), "' : register not mapped in that address map"s));
                __Vtask_uvm_report_error__61__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__64__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__65__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__61__id, __Vtask_uvm_report_error__61__message, __Vtask_uvm_report_error__61__verbosity, __Vtask_uvm_report_error__61__filename, __Vtask_uvm_report_error__61__line, __Vtask_uvm_report_error__61__context_name, (IData)(__Vtask_uvm_report_error__61__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        unnamedblk485__DOT__info = this->__PVT__m_regs_info
            .at(rg);
        this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__67__Vfuncout);
        unnamedblk485__DOT__blk = __Vfunc_get_parent__67__Vfuncout;
        this->__VnoInFunc_get_root_map(vlSymsp, __Vfunc_get_root_map__68__Vfuncout);
        unnamedblk485__DOT__top_map = __Vfunc_get_root_map__68__Vfuncout;
        if (([&]() {
                    VL_NULL_CHECK(unnamedblk485__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 646)
             ->__VnoInFunc_is_locked(vlSymsp, __Vtask_is_locked__69__Vfuncout);
                }(), (IData)(__Vtask_is_locked__69__Vfuncout))) {
            if ((1U & (~ VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 649)
                       ->__PVT__unmapped))) {
                unnamedblk485__DOT__unnamedblk486__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk485__DOT__unnamedblk486__DOT__i, VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 650)
                                  ->__PVT__addr.size())) {
                    if (VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 652)
                        ->__PVT__m_regs_by_offset_wo.exists(VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 652)
                                                            ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i))) {
                        if ((VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 656)
                             ->__PVT__m_regs_by_offset
                             .at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 656)
                                 ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i)) 
                             == rg)) {
                            __Vtemp_1 = VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 658)
                                ->__PVT__m_regs_by_offset_wo
                                .at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 658)
                                    ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i));
                            VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 657)->__PVT__m_regs_by_offset.at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 657)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i)) 
                                = __Vtemp_1;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 660)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 660)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i)));
                        } else {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_remove(vlSymsp, VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 664)
                                                                                ->__PVT__m_regs_by_offset
                                                                                .at(VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 664)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i)));
                        }
                        VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 666)->__PVT__m_regs_by_offset_wo.erase(VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 666)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i));
                    } else {
                        VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 653)->__PVT__m_regs_by_offset.erase(VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 653)
                                                                                ->__PVT__addr.at(unnamedblk485__DOT__unnamedblk486__DOT__i));
                    }
                    unnamedblk485__DOT__unnamedblk486__DOT__i 
                        = ((IData)(1U) + unnamedblk485__DOT__unnamedblk486__DOT__i);
                }
            }
            if ((1U & (~ (IData)(unmapped)))) {
                VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 673)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_Xget_fields_accessX__74__Vfuncout);
                unnamedblk485__DOT__unnamedblk487__DOT__rg_acc 
                    = __Vtask_Xget_fields_accessX__74__Vfuncout;
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, 
                                                         ([&]() {
                            VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 676)
                                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__76__Vfuncout);
                        }(), __Vtask_get_n_bytes__76__Vfuncout), unnamedblk485__DOT__addrs, __Vtask_get_physical_addresses__75__Vfuncout);
                unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i, unnamedblk485__DOT__addrs.size())) {
                    unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr 
                        = unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i);
                    if (VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 681)
                        ->__PVT__m_regs_by_offset.exists(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr)) {
                        unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2 
                            = VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 683)
                            ->__PVT__m_regs_by_offset
                            .at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr);
                        VL_NULL_CHECK(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 684)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_Xget_fields_accessX__77__Vfuncout);
                        unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc 
                            = __Vtask_Xget_fields_accessX__77__Vfuncout;
                        if ((("RO"s == unnamedblk485__DOT__unnamedblk487__DOT__rg_acc) 
                             & ("WO"s == unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc))) {
                            VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 689)->__PVT__m_regs_by_offset.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) 
                                = rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                            VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 691)->__PVT__m_regs_by_offset_wo.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) 
                                = unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2);
                        } else if ((("WO"s == unnamedblk485__DOT__unnamedblk487__DOT__rg_acc) 
                                    & ("RO"s == unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2_acc))) {
                            VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 695)->__PVT__m_regs_by_offset_wo.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) 
                                = rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__rg2);
                        } else {
                            unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__unnamedblk491__DOT__a 
                                = VL_SFORMATF_N_NX("%0x",0,
                                                   64,
                                                   unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) ;
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__82__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__82__severity = 1U;
                                            __Vfunc_uvm_report_enabled__82__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__83__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__84__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__82__verbosity, (IData)(__Vfunc_uvm_report_enabled__82__severity), __Vfunc_uvm_report_enabled__82__id, __Vtask_uvm_report_enabled__85__Vfuncout);
                                            __Vfunc_uvm_report_enabled__82__Vfuncout 
                                                = __Vtask_uvm_report_enabled__85__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__82__Vfuncout))) {
                                __Vtask_uvm_report_warning__86__report_enabled_checked = 1U;
                                __Vtask_uvm_report_warning__86__context_name = ""s;
                                __Vtask_uvm_report_warning__86__line = 0x000002c0U;
                                __Vtask_uvm_report_warning__86__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__86__verbosity = 0U;
                                __Vtask_uvm_report_warning__86__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, 
                                                                                ([&]() {
                                                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__87__Vfuncout);
                                                                    }(), __Vfunc_get_full_name__87__Vfuncout)), "' register '"s), 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 704)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__88__Vfuncout);
                                                            }(), __Vtask_get_full_name__88__Vfuncout)), "' maps to same address as register '"s), 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 704)
                                                                      ->__PVT__m_regs_by_offset
                                                                      .at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 704)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__89__Vfuncout);
                                                    }(), __Vtask_get_full_name__89__Vfuncout)), "': 'h"s), unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk490__DOT__unnamedblk491__DOT__a));
                                __Vtask_uvm_report_warning__86__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__90__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__90__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__91__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__91__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__86__id, __Vtask_uvm_report_warning__86__message, __Vtask_uvm_report_warning__86__verbosity, __Vtask_uvm_report_warning__86__filename, __Vtask_uvm_report_warning__86__line, __Vtask_uvm_report_warning__86__context_name, (IData)(__Vtask_uvm_report_warning__86__report_enabled_checked));
                            }
                        }
                    } else {
                        VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 708)->__PVT__m_regs_by_offset.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__addr) 
                            = rg;
                    }
                    if ((0U != VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 710)
                         ->__PVT__m_mems_by_offset.first(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range))) {
                        unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst = 1U;
                        while (((IData)(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst) 
                                || (0U != VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 710)
                                    ->__PVT__m_mems_by_offset.next(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range)))) {
                            unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range__Vfirst = 0U;
                            if (((unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i) 
                                  >= (((QData)((IData)(
                                                       unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[4U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[3U])))) 
                                 & (unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i) 
                                    <= (((QData)((IData)(
                                                         unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[2U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range[1U])))))) {
                                unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__unnamedblk493__DOT__a 
                                    = VL_SFORMATF_N_NX("%0x",0,
                                                       64,
                                                       unnamedblk485__DOT__addrs.at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i)) ;
                                if ((0U != ([&]() {
                                                __Vfunc_uvm_report_enabled__93__id = "RegModel"s;
                                                __Vfunc_uvm_report_enabled__93__severity = 1U;
                                                __Vfunc_uvm_report_enabled__93__verbosity = 0U;
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__94__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                    = __Vfunc_get__94__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__95__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                    = __Vtask_get_root__95__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__93__verbosity, (IData)(__Vfunc_uvm_report_enabled__93__severity), __Vfunc_uvm_report_enabled__93__id, __Vtask_uvm_report_enabled__96__Vfuncout);
                                                __Vfunc_uvm_report_enabled__93__Vfuncout 
                                                    = __Vtask_uvm_report_enabled__96__Vfuncout;
                                            }(), __Vfunc_uvm_report_enabled__93__Vfuncout))) {
                                    __Vtask_uvm_report_warning__97__report_enabled_checked = 1U;
                                    __Vtask_uvm_report_warning__97__context_name = ""s;
                                    __Vtask_uvm_report_warning__97__line = 0x000002ccU;
                                    __Vtask_uvm_report_warning__97__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                    __Vtask_uvm_report_warning__97__verbosity = 0U;
                                    __Vtask_uvm_report_warning__97__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, 
                                                                                ([&]() {
                                                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__98__Vfuncout);
                                                                        }(), __Vfunc_get_full_name__98__Vfuncout)), "' register '"s), 
                                                                                ([&]() {
                                                                    VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 716)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__99__Vfuncout);
                                                                }(), __Vtask_get_full_name__99__Vfuncout)), "' overlaps with address range of memory '"s), 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk485__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 716)
                                                                          ->__PVT__m_mems_by_offset
                                                                          .at(unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__range), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 716)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__100__Vfuncout);
                                                        }(), __Vtask_get_full_name__100__Vfuncout)), "': 'h"s), unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__unnamedblk489__DOT__unnamedblk492__DOT__unnamedblk493__DOT__a));
                                    __Vtask_uvm_report_warning__97__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                        = __Vfunc_get__101__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                        = __Vtask_get_root__102__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__97__id, __Vtask_uvm_report_warning__97__message, __Vtask_uvm_report_warning__97__verbosity, __Vtask_uvm_report_warning__97__filename, __Vtask_uvm_report_warning__97__line, __Vtask_uvm_report_warning__97__context_name, (IData)(__Vtask_uvm_report_warning__97__report_enabled_checked));
                                }
                            }
                        }
                    }
                    unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i 
                        = ((IData)(1U) + unnamedblk485__DOT__unnamedblk487__DOT__unnamedblk488__DOT__i);
                }
                VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 720)->__PVT__addr 
                    = unnamedblk485__DOT__addrs;
            }
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 725)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 726)->__PVT__unmapped = 1U;
        } else {
            VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 729)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk485__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 730)->__PVT__unmapped = 0U;
        }
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_mem(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__104__Vfuncout;
    __Vfunc_uvm_report_enabled__104__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__104__verbosity;
    __Vfunc_uvm_report_enabled__104__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__104__severity;
    __Vfunc_uvm_report_enabled__104__severity = 0;
    std::string __Vfunc_uvm_report_enabled__104__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__105__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__106__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__107__Vfuncout;
    __Vtask_uvm_report_enabled__107__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__108__id;
    std::string __Vtask_uvm_report_error__108__message;
    IData/*31:0*/ __Vtask_uvm_report_error__108__verbosity;
    __Vtask_uvm_report_error__108__verbosity = 0;
    std::string __Vtask_uvm_report_error__108__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__108__line;
    __Vtask_uvm_report_error__108__line = 0;
    std::string __Vtask_uvm_report_error__108__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__108__report_enabled_checked;
    __Vtask_uvm_report_error__108__report_enabled_checked = 0;
    std::string __Vtask_get_name__109__Vfuncout;
    std::string __Vfunc_get_name__110__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__111__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__112__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__114__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__115__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__116__Vfuncout;
    __Vfunc_uvm_report_enabled__116__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__116__verbosity;
    __Vfunc_uvm_report_enabled__116__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__116__severity;
    __Vfunc_uvm_report_enabled__116__severity = 0;
    std::string __Vfunc_uvm_report_enabled__116__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__117__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__118__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__119__Vfuncout;
    __Vtask_uvm_report_enabled__119__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__120__id;
    std::string __Vtask_uvm_report_error__120__message;
    IData/*31:0*/ __Vtask_uvm_report_error__120__verbosity;
    __Vtask_uvm_report_error__120__verbosity = 0;
    std::string __Vtask_uvm_report_error__120__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__120__line;
    __Vtask_uvm_report_error__120__line = 0;
    std::string __Vtask_uvm_report_error__120__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__120__report_enabled_checked;
    __Vtask_uvm_report_error__120__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__121__Vfuncout;
    std::string __Vfunc_get_full_name__122__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__123__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__124__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk494__DOT__info;
    {
        if (this->__PVT__m_mems_info.exists(mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__104__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__104__severity = 2U;
                            __Vfunc_uvm_report_enabled__104__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__105__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__105__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__106__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__106__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__104__verbosity, (IData)(__Vfunc_uvm_report_enabled__104__severity), __Vfunc_uvm_report_enabled__104__id, __Vtask_uvm_report_enabled__107__Vfuncout);
                            __Vfunc_uvm_report_enabled__104__Vfuncout 
                                = __Vtask_uvm_report_enabled__107__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__104__Vfuncout))) {
                __Vtask_uvm_report_error__108__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__108__context_name = ""s;
                __Vtask_uvm_report_error__108__line = 0x000002eaU;
                __Vtask_uvm_report_error__108__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__108__verbosity = 0U;
                __Vtask_uvm_report_error__108__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 746)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__109__Vfuncout);
                                        }(), __Vtask_get_name__109__Vfuncout)), "' has already been added to map '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__110__Vfuncout);
                                }(), __Vfunc_get_name__110__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__108__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__111__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__111__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__112__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__112__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__108__id, __Vtask_uvm_report_error__108__message, __Vtask_uvm_report_error__108__verbosity, __Vtask_uvm_report_error__108__filename, __Vtask_uvm_report_error__108__line, __Vtask_uvm_report_error__108__context_name, (IData)(__Vtask_uvm_report_error__108__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((([&]() {
                        VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 750)
              ->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__114__Vfuncout);
                    }(), __Vtask_get_parent__114__Vfuncout) 
             != ([&]() {
                        this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__115__Vfuncout);
                    }(), __Vfunc_get_parent__115__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__116__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__116__severity = 2U;
                            __Vfunc_uvm_report_enabled__116__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__117__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__118__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__118__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__116__verbosity, (IData)(__Vfunc_uvm_report_enabled__116__severity), __Vfunc_uvm_report_enabled__116__id, __Vtask_uvm_report_enabled__119__Vfuncout);
                            __Vfunc_uvm_report_enabled__116__Vfuncout 
                                = __Vtask_uvm_report_enabled__119__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__116__Vfuncout))) {
                __Vtask_uvm_report_error__120__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__120__context_name = ""s;
                __Vtask_uvm_report_error__120__line = 0x000002f1U;
                __Vtask_uvm_report_error__120__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__120__verbosity = 0U;
                __Vtask_uvm_report_error__120__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 753)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__121__Vfuncout);
                                        }(), __Vtask_get_full_name__121__Vfuncout)), "' may not be added to address map '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__122__Vfuncout);
                                }(), __Vfunc_get_full_name__122__Vfuncout)), "' : they are not in the same block"s));
                __Vtask_uvm_report_error__120__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__123__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__123__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__124__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__124__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__120__id, __Vtask_uvm_report_error__120__message, __Vtask_uvm_report_error__120__verbosity, __Vtask_uvm_report_error__120__filename, __Vtask_uvm_report_error__120__line, __Vtask_uvm_report_error__120__context_name, (IData)(__Vtask_uvm_report_error__120__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 757)->__VnoInFunc_add_map(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this});
        unnamedblk494__DOT__info = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info, vlSymsp);
        VL_NULL_CHECK(unnamedblk494__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 761)->__PVT__offset 
            = offset;
        VL_NULL_CHECK(unnamedblk494__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 762)->__PVT__rights 
            = rights;
        VL_NULL_CHECK(unnamedblk494__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 763)->__PVT__unmapped 
            = unmapped;
        VL_NULL_CHECK(unnamedblk494__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 764)->__PVT__frontdoor 
            = frontdoor;
        this->__PVT__m_mems_info.at(mem) = unnamedblk494__DOT__info;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, CData/*0:0*/ unmapped) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_m_set_mem_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__128__Vfuncout;
    __Vfunc_uvm_report_enabled__128__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__128__verbosity;
    __Vfunc_uvm_report_enabled__128__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__128__severity;
    __Vfunc_uvm_report_enabled__128__severity = 0;
    std::string __Vfunc_uvm_report_enabled__128__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__129__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__130__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__131__Vfuncout;
    __Vtask_uvm_report_enabled__131__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__132__id;
    std::string __Vtask_uvm_report_error__132__message;
    IData/*31:0*/ __Vtask_uvm_report_error__132__verbosity;
    __Vtask_uvm_report_error__132__verbosity = 0;
    std::string __Vtask_uvm_report_error__132__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__132__line;
    __Vtask_uvm_report_error__132__line = 0;
    std::string __Vtask_uvm_report_error__132__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__132__report_enabled_checked;
    __Vtask_uvm_report_error__132__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__133__Vfuncout;
    std::string __Vfunc_get_full_name__134__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__135__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__136__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__138__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_root_map__139__Vfuncout;
    CData/*0:0*/ __Vtask_is_locked__140__Vfuncout;
    __Vtask_is_locked__140__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__141__Vfuncout;
    __Vtask_get_physical_addresses__141__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__142__Vfuncout;
    __Vtask_get_n_bytes__142__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses__143__Vfuncout;
    __Vtask_get_physical_addresses__143__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_size__144__Vfuncout;
    __Vtask_get_size__144__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__145__Vfuncout;
    __Vtask_get_n_bytes__145__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__146__Vfuncout;
    __Vtask_get_n_bytes__146__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__147__Vfuncout;
    __Vfunc_get_addr_unit_bytes__147__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__148__Vfuncout;
    __Vfunc_uvm_report_enabled__148__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__148__verbosity;
    __Vfunc_uvm_report_enabled__148__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__148__severity;
    __Vfunc_uvm_report_enabled__148__severity = 0;
    std::string __Vfunc_uvm_report_enabled__148__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__149__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__150__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__151__Vfuncout;
    __Vtask_uvm_report_enabled__151__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__152__id;
    std::string __Vtask_uvm_report_warning__152__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__152__verbosity;
    __Vtask_uvm_report_warning__152__verbosity = 0;
    std::string __Vtask_uvm_report_warning__152__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__152__line;
    __Vtask_uvm_report_warning__152__line = 0;
    std::string __Vtask_uvm_report_warning__152__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__152__report_enabled_checked;
    __Vtask_uvm_report_warning__152__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__153__Vfuncout;
    std::string __Vtask_get_full_name__154__Vfuncout;
    std::string __Vtask_get_full_name__155__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__156__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__157__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__159__Vfuncout;
    __Vfunc_uvm_report_enabled__159__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__159__verbosity;
    __Vfunc_uvm_report_enabled__159__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__159__severity;
    __Vfunc_uvm_report_enabled__159__severity = 0;
    std::string __Vfunc_uvm_report_enabled__159__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__160__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__161__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__162__Vfuncout;
    __Vtask_uvm_report_enabled__162__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__163__id;
    std::string __Vtask_uvm_report_warning__163__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__163__verbosity;
    __Vtask_uvm_report_warning__163__verbosity = 0;
    std::string __Vtask_uvm_report_warning__163__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__163__line;
    __Vtask_uvm_report_warning__163__line = 0;
    std::string __Vtask_uvm_report_warning__163__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__163__report_enabled_checked;
    __Vtask_uvm_report_warning__163__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__164__Vfuncout;
    std::string __Vtask_get_full_name__165__Vfuncout;
    std::string __Vtask_get_full_name__166__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__167__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__168__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> unnamedblk495__DOT__info;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> unnamedblk495__DOT__blk;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk495__DOT__top_map;
    VlQueue<QData/*63:0*/> unnamedblk495__DOT__addrs;
    unnamedblk495__DOT__addrs.atDefault() = 0;
    VlWide<5>/*159:0*/ unnamedblk495__DOT__unnamedblk496__DOT__range;
    VL_ZERO_W(160, unnamedblk495__DOT__unnamedblk496__DOT__range);
    CData/*0:0*/ unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst;
    unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst = 0;
    VlQueue<QData/*63:0*/> unnamedblk495__DOT__unnamedblk497__DOT__addrs;
    unnamedblk495__DOT__unnamedblk497__DOT__addrs.atDefault() = 0;
    VlQueue<QData/*63:0*/> unnamedblk495__DOT__unnamedblk497__DOT__addrs_max;
    unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.atDefault() = 0;
    QData/*63:0*/ unnamedblk495__DOT__unnamedblk497__DOT__min;
    unnamedblk495__DOT__unnamedblk497__DOT__min = 0;
    QData/*63:0*/ unnamedblk495__DOT__unnamedblk497__DOT__max;
    unnamedblk495__DOT__unnamedblk497__DOT__max = 0;
    QData/*63:0*/ unnamedblk495__DOT__unnamedblk497__DOT__min2;
    unnamedblk495__DOT__unnamedblk497__DOT__min2 = 0;
    QData/*63:0*/ unnamedblk495__DOT__unnamedblk497__DOT__max2;
    unnamedblk495__DOT__unnamedblk497__DOT__max2 = 0;
    IData/*31:0*/ unnamedblk495__DOT__unnamedblk497__DOT__stride;
    unnamedblk495__DOT__unnamedblk497__DOT__stride = 0;
    QData/*63:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr;
    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr = 0;
    CData/*0:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst;
    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst = 0;
    std::string unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__a;
    std::string unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__b;
    VlWide<5>/*159:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range;
    VL_ZERO_W(160, unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range);
    CData/*0:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst;
    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst = 0;
    std::string unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__a;
    std::string unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__b;
    VlWide<5>/*159:0*/ unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range;
    VL_ZERO_W(160, unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range);
    {
        if ((! this->__PVT__m_mems_info.exists(mem))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__128__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__128__severity = 2U;
                            __Vfunc_uvm_report_enabled__128__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__129__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__129__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__130__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__130__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__128__verbosity, (IData)(__Vfunc_uvm_report_enabled__128__severity), __Vfunc_uvm_report_enabled__128__id, __Vtask_uvm_report_enabled__131__Vfuncout);
                            __Vfunc_uvm_report_enabled__128__Vfuncout 
                                = __Vtask_uvm_report_enabled__131__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__128__Vfuncout))) {
                __Vtask_uvm_report_error__132__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__132__context_name = ""s;
                __Vtask_uvm_report_error__132__line = 0x0000030dU;
                __Vtask_uvm_report_error__132__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__132__verbosity = 0U;
                __Vtask_uvm_report_error__132__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Cannot modify offset of memory '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 781)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__133__Vfuncout);
                                        }(), __Vtask_get_full_name__133__Vfuncout)), "' in address map '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__134__Vfuncout);
                                }(), __Vfunc_get_full_name__134__Vfuncout)), "' : memory not mapped in that address map"s));
                __Vtask_uvm_report_error__132__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__135__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__135__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__136__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__136__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__132__id, __Vtask_uvm_report_error__132__message, __Vtask_uvm_report_error__132__verbosity, __Vtask_uvm_report_error__132__filename, __Vtask_uvm_report_error__132__line, __Vtask_uvm_report_error__132__context_name, (IData)(__Vtask_uvm_report_error__132__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        unnamedblk495__DOT__info = this->__PVT__m_mems_info
            .at(mem);
        this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__138__Vfuncout);
        unnamedblk495__DOT__blk = __Vfunc_get_parent__138__Vfuncout;
        this->__VnoInFunc_get_root_map(vlSymsp, __Vfunc_get_root_map__139__Vfuncout);
        unnamedblk495__DOT__top_map = __Vfunc_get_root_map__139__Vfuncout;
        if (([&]() {
                    VL_NULL_CHECK(unnamedblk495__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 792)
             ->__VnoInFunc_is_locked(vlSymsp, __Vtask_is_locked__140__Vfuncout);
                }(), (IData)(__Vtask_is_locked__140__Vfuncout))) {
            if ((1U & (~ VL_NULL_CHECK(unnamedblk495__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 795)
                       ->__PVT__unmapped))) {
                if ((0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 796)
                     ->__PVT__m_mems_by_offset.first(unnamedblk495__DOT__unnamedblk496__DOT__range))) {
                    unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst = 1U;
                    while (((IData)(unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst) 
                            || (0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 796)
                                ->__PVT__m_mems_by_offset.next(unnamedblk495__DOT__unnamedblk496__DOT__range)))) {
                        unnamedblk495__DOT__unnamedblk496__DOT__range__Vfirst = 0U;
                        if ((VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 797)
                             ->__PVT__m_mems_by_offset
                             .at(unnamedblk495__DOT__unnamedblk496__DOT__range) 
                             == mem)) {
                            VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 798)->__PVT__m_mems_by_offset.erase(unnamedblk495__DOT__unnamedblk496__DOT__range);
                        }
                    }
                }
            }
            if ((1U & (~ (IData)(unmapped)))) {
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 0ULL, 
                                                         ([&]() {
                            VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 808)
                                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__142__Vfuncout);
                        }(), __Vtask_get_n_bytes__142__Vfuncout), unnamedblk495__DOT__unnamedblk497__DOT__addrs, __Vtask_get_physical_addresses__141__Vfuncout);
                unnamedblk495__DOT__unnamedblk497__DOT__min 
                    = ((unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(0U) 
                        < unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(
                                                                           (unnamedblk495__DOT__unnamedblk497__DOT__addrs.size() 
                                                                            - (IData)(1U))))
                        ? unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(0U)
                        : unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(
                                                                           (unnamedblk495__DOT__unnamedblk497__DOT__addrs.size() 
                                                                            - (IData)(1U))));
                unnamedblk495__DOT__unnamedblk497__DOT__min2 
                    = unnamedblk495__DOT__unnamedblk497__DOT__addrs.at(0U);
                this->__VnoInFunc_get_physical_addresses(vlSymsp, offset, 
                                                         (([&]() {
                                VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 812)
                                                           ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__144__Vfuncout);
                            }(), __Vtask_get_size__144__Vfuncout) 
                                                          - 1ULL), 
                                                         ([&]() {
                            VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 813)
                                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__145__Vfuncout);
                        }(), __Vtask_get_n_bytes__145__Vfuncout), unnamedblk495__DOT__unnamedblk497__DOT__addrs_max, __Vtask_get_physical_addresses__143__Vfuncout);
                unnamedblk495__DOT__unnamedblk497__DOT__max 
                    = ((unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(0U) 
                        > unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(
                                                                               (unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))
                        ? unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(0U)
                        : unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(
                                                                               (unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.size() 
                                                                                - (IData)(1U))));
                unnamedblk495__DOT__unnamedblk497__DOT__max2 
                    = unnamedblk495__DOT__unnamedblk497__DOT__addrs_max.at(0U);
                unnamedblk495__DOT__unnamedblk497__DOT__stride 
                    = VL_DIV_III(32, ([&]() {
                            VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 818)
                                      ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__146__Vfuncout);
                        }(), __Vtask_get_n_bytes__146__Vfuncout), 
                                 ([&]() {
                            this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__147__Vfuncout);
                        }(), __Vfunc_get_addr_unit_bytes__147__Vfuncout));
                if ((0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 821)
                     ->__PVT__m_regs_by_offset.first(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr))) {
                    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst = 1U;
                    while (((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst) 
                            || (0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 821)
                                ->__PVT__m_regs_by_offset.next(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr)))) {
                        unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr__Vfirst = 0U;
                        if (((unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr 
                              >= unnamedblk495__DOT__unnamedblk497__DOT__min) 
                             & (unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr 
                                <= unnamedblk495__DOT__unnamedblk497__DOT__max))) {
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__a 
                                = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__min,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__max) ;
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__b 
                                = VL_SFORMATF_N_NX("%0x",0,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr) ;
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__148__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__148__severity = 1U;
                                            __Vfunc_uvm_report_enabled__148__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__149__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__149__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__150__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__150__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__148__verbosity, (IData)(__Vfunc_uvm_report_enabled__148__severity), __Vfunc_uvm_report_enabled__148__id, __Vtask_uvm_report_enabled__151__Vfuncout);
                                            __Vfunc_uvm_report_enabled__148__Vfuncout 
                                                = __Vtask_uvm_report_enabled__151__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__148__Vfuncout))) {
                                __Vtask_uvm_report_warning__152__report_enabled_checked = 1U;
                                __Vtask_uvm_report_warning__152__context_name = ""s;
                                __Vtask_uvm_report_warning__152__line = 0x0000033dU;
                                __Vtask_uvm_report_warning__152__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__152__verbosity = 0U;
                                __Vtask_uvm_report_warning__152__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, 
                                                                                ([&]() {
                                                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__153__Vfuncout);
                                                                            }(), __Vfunc_get_full_name__153__Vfuncout)), "' memory '"s), 
                                                                                ([&]() {
                                                                        VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 829)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__154__Vfuncout);
                                                                    }(), __Vtask_get_full_name__154__Vfuncout)), "' with range "s), unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__a), " overlaps with address of existing register '"s), 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 829)
                                                                      ->__PVT__m_regs_by_offset
                                                                      .at(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__reg_addr), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 829)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__155__Vfuncout);
                                                    }(), __Vtask_get_full_name__155__Vfuncout)), "': 'h"s), unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk498__DOT__unnamedblk499__DOT__b));
                                __Vtask_uvm_report_warning__152__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__156__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__156__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__157__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__157__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__152__id, __Vtask_uvm_report_warning__152__message, __Vtask_uvm_report_warning__152__verbosity, __Vtask_uvm_report_warning__152__filename, __Vtask_uvm_report_warning__152__line, __Vtask_uvm_report_warning__152__context_name, (IData)(__Vtask_uvm_report_warning__152__report_enabled_checked));
                            }
                        }
                    }
                }
                if ((0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 833)
                     ->__PVT__m_mems_by_offset.first(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range))) {
                    unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst = 1U;
                    while (((IData)(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst) 
                            || (0U != VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 833)
                                ->__PVT__m_mems_by_offset.next(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range)))) {
                        unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range__Vfirst = 0U;
                        if (((((unnamedblk495__DOT__unnamedblk497__DOT__min 
                                <= (((QData)((IData)(
                                                     unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) 
                               & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                                  >= (((QData)((IData)(
                                                       unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U]))))) 
                              | ((unnamedblk495__DOT__unnamedblk497__DOT__min 
                                  <= (((QData)((IData)(
                                                       unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))) 
                                 & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                                    >= (((QData)((IData)(
                                                         unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))))) 
                             | ((unnamedblk495__DOT__unnamedblk497__DOT__min 
                                 >= (((QData)((IData)(
                                                      unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U])))) 
                                & (unnamedblk495__DOT__unnamedblk497__DOT__max 
                                   <= (((QData)((IData)(
                                                        unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U]))))))) {
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__a 
                                = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__min,
                                                   64,
                                                   unnamedblk495__DOT__unnamedblk497__DOT__max) ;
                            unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__b 
                                = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                   64,
                                                   (((QData)((IData)(
                                                                     unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[4U])) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[3U]))),
                                                   64,
                                                   (((QData)((IData)(
                                                                     unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[2U])) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range[1U])))) ;
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__159__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__159__severity = 1U;
                                            __Vfunc_uvm_report_enabled__159__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__160__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__160__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__161__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__161__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__159__verbosity, (IData)(__Vfunc_uvm_report_enabled__159__severity), __Vfunc_uvm_report_enabled__159__id, __Vtask_uvm_report_enabled__162__Vfuncout);
                                            __Vfunc_uvm_report_enabled__159__Vfuncout 
                                                = __Vtask_uvm_report_enabled__162__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__159__Vfuncout))) {
                                __Vtask_uvm_report_warning__163__report_enabled_checked = 1U;
                                __Vtask_uvm_report_warning__163__context_name = ""s;
                                __Vtask_uvm_report_warning__163__line = 0x0000034bU;
                                __Vtask_uvm_report_warning__163__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__163__verbosity = 0U;
                                __Vtask_uvm_report_warning__163__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, 
                                                                                ([&]() {
                                                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__164__Vfuncout);
                                                                            }(), __Vfunc_get_full_name__164__Vfuncout)), "' memory '"s), 
                                                                                ([&]() {
                                                                        VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 843)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__165__Vfuncout);
                                                                    }(), __Vtask_get_full_name__165__Vfuncout)), "' with range "s), unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__a), " overlaps existing memory with range '"s), 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 843)
                                                                      ->__PVT__m_mems_by_offset
                                                                      .at(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__range), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 843)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__166__Vfuncout);
                                                    }(), __Vtask_get_full_name__166__Vfuncout)), "': "s), unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk500__DOT__unnamedblk501__DOT__b));
                                __Vtask_uvm_report_warning__163__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__167__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__167__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__168__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__168__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__163__id, __Vtask_uvm_report_warning__163__message, __Vtask_uvm_report_warning__163__verbosity, __Vtask_uvm_report_warning__163__filename, __Vtask_uvm_report_warning__163__line, __Vtask_uvm_report_warning__163__context_name, (IData)(__Vtask_uvm_report_warning__163__report_enabled_checked));
                            }
                        }
                    }
                }
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[0U] 
                    = unnamedblk495__DOT__unnamedblk497__DOT__stride;
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[1U] 
                    = (IData)(unnamedblk495__DOT__unnamedblk497__DOT__max);
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[2U] 
                    = (IData)((unnamedblk495__DOT__unnamedblk497__DOT__max 
                               >> 0x00000020U));
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[3U] 
                    = (IData)(unnamedblk495__DOT__unnamedblk497__DOT__min);
                unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range[4U] 
                    = (IData)((unnamedblk495__DOT__unnamedblk497__DOT__min 
                               >> 0x00000020U));
                VL_NULL_CHECK(unnamedblk495__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 849)->__PVT__m_mems_by_offset.at(unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range) 
                    = mem;
                VL_NULL_CHECK(unnamedblk495__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 850)->__PVT__addr 
                    = unnamedblk495__DOT__unnamedblk497__DOT__addrs;
                VL_ASSIGN_W(160, VL_NULL_CHECK(unnamedblk495__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 851)
                            ->__PVT__mem_range, unnamedblk495__DOT__unnamedblk497__DOT__unnamedblk502__DOT__range);
            }
        }
        if (unmapped) {
            VL_NULL_CHECK(unnamedblk495__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 858)->__PVT__offset = 0xffffffffffffffffULL;
            VL_NULL_CHECK(unnamedblk495__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 859)->__PVT__unmapped = 1U;
        } else {
            VL_NULL_CHECK(unnamedblk495__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 862)->__PVT__offset 
                = offset;
            VL_NULL_CHECK(unnamedblk495__DOT__info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 863)->__PVT__unmapped = 0U;
        }
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_submap(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> child_map, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_submap\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__Vfuncout;
    __Vfunc_uvm_report_enabled__170__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__170__verbosity;
    __Vfunc_uvm_report_enabled__170__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__170__severity;
    __Vfunc_uvm_report_enabled__170__severity = 0;
    std::string __Vfunc_uvm_report_enabled__170__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__171__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__172__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__173__Vfuncout;
    __Vtask_uvm_report_enabled__173__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__174__id;
    std::string __Vtask_uvm_report_error__174__message;
    IData/*31:0*/ __Vtask_uvm_report_error__174__verbosity;
    __Vtask_uvm_report_error__174__verbosity = 0;
    std::string __Vtask_uvm_report_error__174__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__174__line;
    __Vtask_uvm_report_error__174__line = 0;
    std::string __Vtask_uvm_report_error__174__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__174__report_enabled_checked;
    __Vtask_uvm_report_error__174__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__175__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__176__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__177__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_parent_map__179__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__180__Vfuncout;
    __Vfunc_uvm_report_enabled__180__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__180__verbosity;
    __Vfunc_uvm_report_enabled__180__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__180__severity;
    __Vfunc_uvm_report_enabled__180__severity = 0;
    std::string __Vfunc_uvm_report_enabled__180__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__181__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__182__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__183__Vfuncout;
    __Vtask_uvm_report_enabled__183__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__184__id;
    std::string __Vtask_uvm_report_error__184__message;
    IData/*31:0*/ __Vtask_uvm_report_error__184__verbosity;
    __Vtask_uvm_report_error__184__verbosity = 0;
    std::string __Vtask_uvm_report_error__184__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__184__line;
    __Vtask_uvm_report_error__184__line = 0;
    std::string __Vtask_uvm_report_error__184__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__184__report_enabled_checked;
    __Vtask_uvm_report_error__184__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__185__Vfuncout;
    std::string __Vtask_get_full_name__186__Vfuncout;
    std::string __Vfunc_get_full_name__187__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__188__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__189__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__191__Vfuncout;
    __Vtask_get_n_bytes__191__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__192__Vfuncout;
    __Vfunc_uvm_report_enabled__192__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__192__verbosity;
    __Vfunc_uvm_report_enabled__192__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__192__severity;
    __Vfunc_uvm_report_enabled__192__severity = 0;
    std::string __Vfunc_uvm_report_enabled__192__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__193__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__194__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__195__Vfuncout;
    __Vtask_uvm_report_enabled__195__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__196__id;
    std::string __Vtask_uvm_report_warning__196__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__196__verbosity;
    __Vtask_uvm_report_warning__196__verbosity = 0;
    std::string __Vtask_uvm_report_warning__196__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__196__line;
    __Vtask_uvm_report_warning__196__line = 0;
    std::string __Vtask_uvm_report_warning__196__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__196__report_enabled_checked;
    __Vtask_uvm_report_warning__196__report_enabled_checked = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__197__Vfuncout;
    __Vtask_get_n_bytes__197__Vfuncout = 0;
    std::string __Vtask_get_full_name__198__Vfuncout;
    std::string __Vfunc_get_full_name__199__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__200__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__201__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> parent_map;
    {
        if ((VlNull{} == child_map)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__170__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__170__severity = 2U;
                            __Vfunc_uvm_report_enabled__170__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__171__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__171__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__172__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__172__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__170__verbosity, (IData)(__Vfunc_uvm_report_enabled__170__severity), __Vfunc_uvm_report_enabled__170__id, __Vtask_uvm_report_enabled__173__Vfuncout);
                            __Vfunc_uvm_report_enabled__170__Vfuncout 
                                = __Vtask_uvm_report_enabled__173__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__170__Vfuncout))) {
                __Vtask_uvm_report_error__174__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__174__context_name = ""s;
                __Vtask_uvm_report_error__174__line = 0x0000036dU;
                __Vtask_uvm_report_error__174__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__174__verbosity = 0U;
                __Vtask_uvm_report_error__174__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Attempting to add NULL map to map '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__175__Vfuncout);
                                }(), __Vfunc_get_full_name__175__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__174__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__176__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__176__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__177__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__177__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__174__id, __Vtask_uvm_report_error__174__message, __Vtask_uvm_report_error__174__verbosity, __Vtask_uvm_report_error__174__filename, __Vtask_uvm_report_error__174__line, __Vtask_uvm_report_error__174__context_name, (IData)(__Vtask_uvm_report_error__174__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        VL_NULL_CHECK(child_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 881)->__VnoInFunc_get_parent_map(vlSymsp, __Vtask_get_parent_map__179__Vfuncout);
        parent_map = __Vtask_get_parent_map__179__Vfuncout;
        if ((VlNull{} != parent_map)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__180__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__180__severity = 2U;
                            __Vfunc_uvm_report_enabled__180__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__181__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__181__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__182__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__182__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__180__verbosity, (IData)(__Vfunc_uvm_report_enabled__180__severity), __Vfunc_uvm_report_enabled__180__id, __Vtask_uvm_report_enabled__183__Vfuncout);
                            __Vfunc_uvm_report_enabled__180__Vfuncout 
                                = __Vtask_uvm_report_enabled__183__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__180__Vfuncout))) {
                __Vtask_uvm_report_error__184__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__184__context_name = ""s;
                __Vtask_uvm_report_error__184__line = 0x0000037aU;
                __Vtask_uvm_report_error__184__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__184__verbosity = 0U;
                __Vtask_uvm_report_error__184__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(child_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 890)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__185__Vfuncout);
                                                }(), __Vtask_get_full_name__185__Vfuncout)), "' is already a child of map '"s), 
                                                                                ([&]() {
                                            VL_NULL_CHECK(parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 890)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__186__Vfuncout);
                                        }(), __Vtask_get_full_name__186__Vfuncout)), "'. Cannot also be a child of map '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__187__Vfuncout);
                                }(), __Vfunc_get_full_name__187__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__184__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__188__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__188__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__189__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__189__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__184__id, __Vtask_uvm_report_error__184__message, __Vtask_uvm_report_error__184__verbosity, __Vtask_uvm_report_error__184__filename, __Vtask_uvm_report_error__184__line, __Vtask_uvm_report_error__184__context_name, (IData)(__Vtask_uvm_report_error__184__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((this->__PVT__m_n_bytes > ([&]() {
                        VL_NULL_CHECK(child_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 896)
                                       ->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vtask_get_n_bytes__191__Vfuncout);
                    }(), __Vtask_get_n_bytes__191__Vfuncout))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__192__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__192__severity = 1U;
                            __Vfunc_uvm_report_enabled__192__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__193__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__193__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__194__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__194__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__192__verbosity, (IData)(__Vfunc_uvm_report_enabled__192__severity), __Vfunc_uvm_report_enabled__192__id, __Vtask_uvm_report_enabled__195__Vfuncout);
                            __Vfunc_uvm_report_enabled__192__Vfuncout 
                                = __Vtask_uvm_report_enabled__195__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__192__Vfuncout))) {
                __Vtask_uvm_report_warning__196__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__196__context_name = ""s;
                __Vtask_uvm_report_warning__196__line = 0x00000384U;
                __Vtask_uvm_report_warning__196__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_warning__196__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(child_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 900)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__198__Vfuncout);
                    }(), __Vtask_get_full_name__198__Vfuncout);
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__199__Vfuncout);
                    }(), __Vfunc_get_full_name__199__Vfuncout);
                __Vtask_uvm_report_warning__196__message 
                    = VL_SFORMATF_N_NX("Adding %0#-byte submap '%@' to %0#-byte parent map '%@'",0,
                                       32,([&]() {
                                VL_NULL_CHECK(child_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 900)
                                           ->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vtask_get_n_bytes__197__Vfuncout);
                            }(), __Vtask_get_n_bytes__197__Vfuncout),
                                       -1,&(__Vtemp_1),
                                       32,this->__PVT__m_n_bytes,
                                       -1,&(__Vtemp_2)) ;
                __Vtask_uvm_report_warning__196__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__200__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__200__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__201__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__201__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__196__id, __Vtask_uvm_report_warning__196__message, __Vtask_uvm_report_warning__196__verbosity, __Vtask_uvm_report_warning__196__filename, __Vtask_uvm_report_warning__196__line, __Vtask_uvm_report_warning__196__context_name, (IData)(__Vtask_uvm_report_warning__196__report_enabled_checked));
            }
        }
        VL_NULL_CHECK(child_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 904)->__VnoInFunc_add_parent_map(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, offset);
        this->__VnoInFunc_set_submap_offset(vlSymsp, child_map, offset);
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset(Vrecorders_top__Syms* __restrict vlSymsp, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_reset\n"); );
    // Body
    IData/*31:0*/ unnamedblk503__DOT__i;
    unnamedblk503__DOT__i = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg>> regs;
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk503__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk503__DOT__i, regs.size())) {
        VL_NULL_CHECK(regs.at(unnamedblk503__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 919)->__VnoInFunc_reset(vlSymsp, kind);
        unnamedblk503__DOT__i = ((IData)(1U) + unnamedblk503__DOT__i);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_parent_map(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> parent_map, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_add_parent_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__207__Vfuncout;
    __Vfunc_uvm_report_enabled__207__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__207__verbosity;
    __Vfunc_uvm_report_enabled__207__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__207__severity;
    __Vfunc_uvm_report_enabled__207__severity = 0;
    std::string __Vfunc_uvm_report_enabled__207__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__208__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__209__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__210__Vfuncout;
    __Vtask_uvm_report_enabled__210__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__211__id;
    std::string __Vtask_uvm_report_error__211__message;
    IData/*31:0*/ __Vtask_uvm_report_error__211__verbosity;
    __Vtask_uvm_report_error__211__verbosity = 0;
    std::string __Vtask_uvm_report_error__211__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__211__line;
    __Vtask_uvm_report_error__211__line = 0;
    std::string __Vtask_uvm_report_error__211__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__211__report_enabled_checked;
    __Vtask_uvm_report_error__211__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__212__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__213__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__214__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__216__Vfuncout;
    __Vfunc_uvm_report_enabled__216__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__216__verbosity;
    __Vfunc_uvm_report_enabled__216__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__216__severity;
    __Vfunc_uvm_report_enabled__216__severity = 0;
    std::string __Vfunc_uvm_report_enabled__216__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__217__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__218__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__219__Vfuncout;
    __Vtask_uvm_report_enabled__219__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__220__id;
    std::string __Vtask_uvm_report_error__220__message;
    IData/*31:0*/ __Vtask_uvm_report_error__220__verbosity;
    __Vtask_uvm_report_error__220__verbosity = 0;
    std::string __Vtask_uvm_report_error__220__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__220__line;
    __Vtask_uvm_report_error__220__line = 0;
    std::string __Vtask_uvm_report_error__220__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__220__report_enabled_checked;
    __Vtask_uvm_report_error__220__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__221__Vfuncout;
    std::string __Vtask_get_full_name__222__Vfuncout;
    QData/*63:0*/ __Vtask_get_submap_offset__223__Vfuncout;
    __Vtask_get_submap_offset__223__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__224__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__225__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == parent_map)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__207__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__207__severity = 2U;
                            __Vfunc_uvm_report_enabled__207__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__208__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__208__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__209__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__209__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__207__verbosity, (IData)(__Vfunc_uvm_report_enabled__207__severity), __Vfunc_uvm_report_enabled__207__id, __Vtask_uvm_report_enabled__210__Vfuncout);
                            __Vfunc_uvm_report_enabled__207__Vfuncout 
                                = __Vtask_uvm_report_enabled__210__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__207__Vfuncout))) {
                __Vtask_uvm_report_error__211__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__211__context_name = ""s;
                __Vtask_uvm_report_error__211__line = 0x000003a2U;
                __Vtask_uvm_report_error__211__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__211__verbosity = 0U;
                __Vtask_uvm_report_error__211__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Attempting to add NULL parent map to map '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__212__Vfuncout);
                                }(), __Vfunc_get_full_name__212__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__211__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__213__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__213__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__214__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__214__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__211__id, __Vtask_uvm_report_error__211__message, __Vtask_uvm_report_error__211__verbosity, __Vtask_uvm_report_error__211__filename, __Vtask_uvm_report_error__211__line, __Vtask_uvm_report_error__211__context_name, (IData)(__Vtask_uvm_report_error__211__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} != this->__PVT__m_parent_map)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__216__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__216__severity = 2U;
                            __Vfunc_uvm_report_enabled__216__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__217__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__217__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__218__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__218__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__216__verbosity, (IData)(__Vfunc_uvm_report_enabled__216__severity), __Vfunc_uvm_report_enabled__216__id, __Vtask_uvm_report_enabled__219__Vfuncout);
                            __Vfunc_uvm_report_enabled__216__Vfuncout 
                                = __Vtask_uvm_report_enabled__219__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__216__Vfuncout))) {
                __Vtask_uvm_report_error__220__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__220__context_name = ""s;
                __Vtask_uvm_report_error__220__line = 0x000003aaU;
                __Vtask_uvm_report_error__220__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__220__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__221__Vfuncout);
                    }(), __Vfunc_get_full_name__221__Vfuncout);
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 938)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__222__Vfuncout);
                    }(), __Vtask_get_full_name__222__Vfuncout);
                __Vtask_uvm_report_error__220__message 
                    = VL_SFORMATF_N_NX("Map \"%@\" already a submap of map \"%@\" at offset 'h%x",0,
                                       -1,&(__Vtemp_1),
                                       -1,&(__Vtemp_2),
                                       64,([&]() {
                                VL_NULL_CHECK(this->__PVT__m_parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 938)
                                           ->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                           VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_get_submap_offset__223__Vfuncout);
                            }(), __Vtask_get_submap_offset__223__Vfuncout)) ;
                __Vtask_uvm_report_error__220__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__224__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__224__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__225__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__225__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__220__id, __Vtask_uvm_report_error__220__message, __Vtask_uvm_report_error__220__verbosity, __Vtask_uvm_report_error__220__filename, __Vtask_uvm_report_error__220__line, __Vtask_uvm_report_error__220__context_name, (IData)(__Vtask_uvm_report_error__220__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__PVT__m_parent_map = parent_map;
        VL_NULL_CHECK(parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 943)->__PVT__m_submaps.at(
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}) 
            = offset;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_sequencer\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__227__Vfuncout;
    __Vfunc_uvm_report_enabled__227__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__227__verbosity;
    __Vfunc_uvm_report_enabled__227__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__227__severity;
    __Vfunc_uvm_report_enabled__227__severity = 0;
    std::string __Vfunc_uvm_report_enabled__227__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__228__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__229__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__230__Vfuncout;
    __Vtask_uvm_report_enabled__230__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__231__id;
    std::string __Vtask_uvm_report_error__231__message;
    IData/*31:0*/ __Vtask_uvm_report_error__231__verbosity;
    __Vtask_uvm_report_error__231__verbosity = 0;
    std::string __Vtask_uvm_report_error__231__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__231__line;
    __Vtask_uvm_report_error__231__line = 0;
    std::string __Vtask_uvm_report_error__231__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__231__report_enabled_checked;
    __Vtask_uvm_report_error__231__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__235__Vfuncout;
    __Vfunc_uvm_report_enabled__235__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__235__verbosity;
    __Vfunc_uvm_report_enabled__235__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__235__severity;
    __Vfunc_uvm_report_enabled__235__severity = 0;
    std::string __Vfunc_uvm_report_enabled__235__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__236__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__237__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__238__Vfuncout;
    __Vtask_uvm_report_enabled__238__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__239__id;
    std::string __Vtask_uvm_report_info__239__message;
    IData/*31:0*/ __Vtask_uvm_report_info__239__verbosity;
    __Vtask_uvm_report_info__239__verbosity = 0;
    std::string __Vtask_uvm_report_info__239__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__239__line;
    __Vtask_uvm_report_info__239__line = 0;
    std::string __Vtask_uvm_report_info__239__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__239__report_enabled_checked;
    __Vtask_uvm_report_info__239__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__240__Vfuncout;
    std::string __Vtask_get_full_name__241__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__242__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__243__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((VlNull{} == sequencer)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__227__id = "REG_NULL_SQR"s;
                            __Vfunc_uvm_report_enabled__227__severity = 2U;
                            __Vfunc_uvm_report_enabled__227__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__228__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__228__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__229__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__229__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__227__verbosity, (IData)(__Vfunc_uvm_report_enabled__227__severity), __Vfunc_uvm_report_enabled__227__id, __Vtask_uvm_report_enabled__230__Vfuncout);
                            __Vfunc_uvm_report_enabled__227__Vfuncout 
                                = __Vtask_uvm_report_enabled__230__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__227__Vfuncout))) {
                __Vtask_uvm_report_error__231__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__231__context_name = ""s;
                __Vtask_uvm_report_error__231__line = 0x000003baU;
                __Vtask_uvm_report_error__231__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__231__verbosity = 0U;
                __Vtask_uvm_report_error__231__message = "Null reference specified for bus sequencer"s;
                __Vtask_uvm_report_error__231__id = "REG_NULL_SQR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__232__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__232__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__233__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__231__id, __Vtask_uvm_report_error__231__message, __Vtask_uvm_report_error__231__verbosity, __Vtask_uvm_report_error__231__filename, __Vtask_uvm_report_error__231__line, __Vtask_uvm_report_error__231__context_name, (IData)(__Vtask_uvm_report_error__231__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((VlNull{} == adapter)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__235__id = "REG_NO_ADAPT"s;
                            __Vfunc_uvm_report_enabled__235__severity = 0U;
                            __Vfunc_uvm_report_enabled__235__verbosity = 0x000000c8U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__236__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__236__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__237__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__237__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__235__verbosity, (IData)(__Vfunc_uvm_report_enabled__235__severity), __Vfunc_uvm_report_enabled__235__id, __Vtask_uvm_report_enabled__238__Vfuncout);
                            __Vfunc_uvm_report_enabled__235__Vfuncout 
                                = __Vtask_uvm_report_enabled__238__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__235__Vfuncout))) {
                __Vtask_uvm_report_info__239__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__239__context_name = ""s;
                __Vtask_uvm_report_info__239__line = 0x000003c1U;
                __Vtask_uvm_report_info__239__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__239__verbosity = 0x000000c8U;
                __Vtask_uvm_report_info__239__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Adapter not specified for map '"s, 
                                                                                ([&]() {
                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__240__Vfuncout);
                                        }(), __Vfunc_get_full_name__240__Vfuncout)), "'. Accesses via this map will send abstract 'uvm_reg_item' items to sequencer '"s), 
                                                                       ([&]() {
                                    VL_NULL_CHECK(sequencer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 961)
                                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__241__Vfuncout);
                                }(), __Vtask_get_full_name__241__Vfuncout)), "'"s));
                __Vtask_uvm_report_info__239__id = "REG_NO_ADAPT"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__242__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__242__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__243__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__243__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__239__id, __Vtask_uvm_report_info__239__message, __Vtask_uvm_report_info__239__verbosity, __Vtask_uvm_report_info__239__filename, __Vtask_uvm_report_info__239__line, __Vtask_uvm_report_info__239__context_name, (IData)(__Vtask_uvm_report_info__239__report_enabled_checked));
            }
        }
        this->__PVT__m_sequencer = sequencer;
        this->__PVT__m_adapter = adapter;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent\n"); );
    // Body
    get_parent__Vfuncrtn = this->__PVT__m_parent;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_parent_map\n"); );
    // Body
    get_parent_map__Vfuncrtn = this->__PVT__m_parent_map;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_root_map\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vtask_get_root_map__245__Vfuncout;
    // Body
    get_root_map__Vfuncrtn = ((VlNull{} == this->__PVT__m_parent_map)
                               ? VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}
                               : ([&]() {
                VL_NULL_CHECK(this->__PVT__m_parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 991)
                                  ->__VnoInFunc_get_root_map(vlSymsp, __Vtask_get_root_map__245__Vfuncout);
            }(), __Vtask_get_root_map__245__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, QData/*63:0*/ &get_base_addr__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_base_addr\n"); );
    // Locals
    QData/*63:0*/ __Vtask_get_submap_offset__246__Vfuncout;
    __Vtask_get_submap_offset__246__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_base_addr__247__Vfuncout;
    __Vtask_get_base_addr__247__Vfuncout = 0;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> child;
    {
        child = VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this};
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_base_addr__Vfuncrtn = this->__PVT__m_base_addr;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1001)->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_get_submap_offset__246__Vfuncout);
        get_base_addr__Vfuncrtn = __Vtask_get_submap_offset__246__Vfuncout;
        get_base_addr__Vfuncrtn = (get_base_addr__Vfuncrtn 
                                   + ([&]() {
                    VL_NULL_CHECK(this->__PVT__m_parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1002)
                                      ->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 1U, __Vtask_get_base_addr__247__Vfuncout);
                }(), __Vtask_get_base_addr__247__Vfuncout));
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_n_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_n_bytes\n"); );
    // Body
    {
        if ((0U == hier)) {
            get_n_bytes__Vfuncrtn = this->__PVT__m_n_bytes;
            goto __Vlabel0;
        }
        get_n_bytes__Vfuncrtn = this->__PVT__m_system_n_bytes;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_addr_unit_bytes\n"); );
    // Body
    get_addr_unit_bytes__Vfuncrtn = ((IData)(this->__PVT__m_byte_addressing)
                                      ? 1U : this->__PVT__m_n_bytes);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_endian__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_endian\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_endian__248__Vfuncout;
    __Vtask_get_endian__248__Vfuncout = 0;
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_endian__Vfuncrtn = this->__PVT__m_endian;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1027)->__VnoInFunc_get_endian(vlSymsp, hier, __Vtask_get_endian__248__Vfuncout);
        get_endian__Vfuncrtn = __Vtask_get_endian__248__Vfuncout;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_sequencer\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__249__Vfuncout;
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_sequencer__Vfuncrtn = this->__PVT__m_sequencer;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1036)->__VnoInFunc_get_sequencer(vlSymsp, hier, __Vtask_get_sequencer__249__Vfuncout);
        get_sequencer__Vfuncrtn = __Vtask_get_sequencer__249__Vfuncout;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_adapter\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> __Vtask_get_adapter__250__Vfuncout;
    // Body
    {
        if (((0U == hier) | (VlNull{} == this->__PVT__m_parent_map))) {
            get_adapter__Vfuncrtn = this->__PVT__m_adapter;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1045)->__VnoInFunc_get_adapter(vlSymsp, hier, __Vtask_get_adapter__250__Vfuncout);
        get_adapter__Vfuncrtn = __Vtask_get_adapter__250__Vfuncout;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>> &maps, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submaps\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk504__DOT__submap;
    CData/*0:0*/ unnamedblk504__DOT__submap__Vfirst;
    unnamedblk504__DOT__submap__Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk505__DOT__submap_;
    CData/*0:0*/ unnamedblk505__DOT__submap___Vfirst;
    unnamedblk505__DOT__submap___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk505__DOT__unnamedblk506__DOT__submap;
    if ((0U != this->__PVT__m_submaps.first(unnamedblk504__DOT__submap))) {
        unnamedblk504__DOT__submap__Vfirst = 1U;
        while (((IData)(unnamedblk504__DOT__submap__Vfirst) 
                || (0U != this->__PVT__m_submaps.next(unnamedblk504__DOT__submap)))) {
            unnamedblk504__DOT__submap__Vfirst = 0U;
            maps.push_back(unnamedblk504__DOT__submap);
        }
    }
    if ((1U == hier)) {
        if ((0U != this->__PVT__m_submaps.first(unnamedblk505__DOT__submap_))) {
            unnamedblk505__DOT__submap___Vfirst = 1U;
            while (((IData)(unnamedblk505__DOT__submap___Vfirst) 
                    || (0U != this->__PVT__m_submaps.next(unnamedblk505__DOT__submap_)))) {
                unnamedblk505__DOT__submap___Vfirst = 0U;
                unnamedblk505__DOT__unnamedblk506__DOT__submap 
                    = unnamedblk505__DOT__submap_;
                VL_NULL_CHECK(unnamedblk505__DOT__unnamedblk506__DOT__submap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1060)->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
            }
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_registers\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk507__DOT__rg;
    CData/*0:0*/ unnamedblk507__DOT__rg__Vfirst;
    unnamedblk507__DOT__rg__Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk508__DOT__submap_;
    CData/*0:0*/ unnamedblk508__DOT__submap___Vfirst;
    unnamedblk508__DOT__submap___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk508__DOT__unnamedblk509__DOT__submap;
    if ((0U != this->__PVT__m_regs_info.first(unnamedblk507__DOT__rg))) {
        unnamedblk507__DOT__rg__Vfirst = 1U;
        while (((IData)(unnamedblk507__DOT__rg__Vfirst) 
                || (0U != this->__PVT__m_regs_info.next(unnamedblk507__DOT__rg)))) {
            unnamedblk507__DOT__rg__Vfirst = 0U;
            regs.push_back(unnamedblk507__DOT__rg);
        }
    }
    if ((1U == hier)) {
        if ((0U != this->__PVT__m_submaps.first(unnamedblk508__DOT__submap_))) {
            unnamedblk508__DOT__submap___Vfirst = 1U;
            while (((IData)(unnamedblk508__DOT__submap___Vfirst) 
                    || (0U != this->__PVT__m_submaps.next(unnamedblk508__DOT__submap_)))) {
                unnamedblk508__DOT__submap___Vfirst = 0U;
                unnamedblk508__DOT__unnamedblk509__DOT__submap 
                    = unnamedblk508__DOT__submap_;
                VL_NULL_CHECK(unnamedblk508__DOT__unnamedblk509__DOT__submap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1075)->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
            }
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_fields\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk510__DOT__rg_;
    CData/*0:0*/ unnamedblk510__DOT__rg___Vfirst;
    unnamedblk510__DOT__rg___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk510__DOT__unnamedblk511__DOT__rg;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk512__DOT__submap_;
    CData/*0:0*/ unnamedblk512__DOT__submap___Vfirst;
    unnamedblk512__DOT__submap___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk512__DOT__unnamedblk513__DOT__submap;
    if ((0U != this->__PVT__m_regs_info.first(unnamedblk510__DOT__rg_))) {
        unnamedblk510__DOT__rg___Vfirst = 1U;
        while (((IData)(unnamedblk510__DOT__rg___Vfirst) 
                || (0U != this->__PVT__m_regs_info.next(unnamedblk510__DOT__rg_)))) {
            unnamedblk510__DOT__rg___Vfirst = 0U;
            unnamedblk510__DOT__unnamedblk511__DOT__rg 
                = unnamedblk510__DOT__rg_;
            VL_NULL_CHECK(unnamedblk510__DOT__unnamedblk511__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1087)->__VnoInFunc_get_fields(vlSymsp, fields);
        }
    }
    if ((1U == hier)) {
        if ((0U != this->__PVT__m_submaps.first(unnamedblk512__DOT__submap_))) {
            unnamedblk512__DOT__submap___Vfirst = 1U;
            while (((IData)(unnamedblk512__DOT__submap___Vfirst) 
                    || (0U != this->__PVT__m_submaps.next(unnamedblk512__DOT__submap_)))) {
                unnamedblk512__DOT__submap___Vfirst = 0U;
                unnamedblk512__DOT__unnamedblk513__DOT__submap 
                    = unnamedblk512__DOT__submap_;
                VL_NULL_CHECK(unnamedblk512__DOT__unnamedblk513__DOT__submap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1093)->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
            }
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_memories\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> unnamedblk514__DOT__mem;
    CData/*0:0*/ unnamedblk514__DOT__mem__Vfirst;
    unnamedblk514__DOT__mem__Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk515__DOT__submap_;
    CData/*0:0*/ unnamedblk515__DOT__submap___Vfirst;
    unnamedblk515__DOT__submap___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk515__DOT__unnamedblk516__DOT__submap;
    if ((0U != this->__PVT__m_mems_info.first(unnamedblk514__DOT__mem))) {
        unnamedblk514__DOT__mem__Vfirst = 1U;
        while (((IData)(unnamedblk514__DOT__mem__Vfirst) 
                || (0U != this->__PVT__m_mems_info.next(unnamedblk514__DOT__mem)))) {
            unnamedblk514__DOT__mem__Vfirst = 0U;
            mems.push_back(unnamedblk514__DOT__mem);
        }
    }
    if ((1U == hier)) {
        if ((0U != this->__PVT__m_submaps.first(unnamedblk515__DOT__submap_))) {
            unnamedblk515__DOT__submap___Vfirst = 1U;
            while (((IData)(unnamedblk515__DOT__submap___Vfirst) 
                    || (0U != this->__PVT__m_submaps.next(unnamedblk515__DOT__submap_)))) {
                unnamedblk515__DOT__submap___Vfirst = 0U;
                unnamedblk515__DOT__unnamedblk516__DOT__submap 
                    = unnamedblk515__DOT__submap_;
                VL_NULL_CHECK(unnamedblk515__DOT__unnamedblk516__DOT__submap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1109)->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
            }
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_registers\n"); );
    // Body
    IData/*31:0*/ unnamedblk517__DOT__i;
    unnamedblk517__DOT__i = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem>> mems;
    this->__VnoInFunc_get_memories(vlSymsp, mems, hier);
    unnamedblk517__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk517__DOT__i, mems.size())) {
        VL_NULL_CHECK(mems.at(unnamedblk517__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1123)->__VnoInFunc_get_virtual_registers(vlSymsp, regs);
        unnamedblk517__DOT__i = ((IData)(1U) + unnamedblk517__DOT__i);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_fields(Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_virtual_fields\n"); );
    // Body
    IData/*31:0*/ unnamedblk518__DOT__i;
    unnamedblk518__DOT__i = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_vreg>> regs;
    this->__VnoInFunc_get_virtual_registers(vlSymsp, regs, hier);
    unnamedblk518__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk518__DOT__i, regs.size())) {
        VL_NULL_CHECK(regs.at(unnamedblk518__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1136)->__VnoInFunc_get_fields(vlSymsp, fields);
        unnamedblk518__DOT__i = ((IData)(1U) + unnamedblk518__DOT__i);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_full_name\n"); );
    // Locals
    std::string __Vfunc_get_name__260__Vfuncout;
    std::string __Vtask_get_full_name__261__Vfuncout;
    std::string __Vfunc_get_name__262__Vfuncout;
    // Body
    get_full_name__Vfuncrtn = ((VlNull{} == this->__PVT__m_parent)
                                ? ([&]() {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__260__Vfuncout);
            }(), __Vfunc_get_name__260__Vfuncout) : 
                               VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1148)
                                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__261__Vfuncout);
                    }(), __Vtask_get_full_name__261__Vfuncout), "."s), 
                                              ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__262__Vfuncout);
                }(), __Vfunc_get_name__262__Vfuncout)));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, CData/*0:0*/ error, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_map_info\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__263__Vfuncout;
    __Vfunc_uvm_report_enabled__263__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__263__verbosity;
    __Vfunc_uvm_report_enabled__263__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__263__severity;
    __Vfunc_uvm_report_enabled__263__severity = 0;
    std::string __Vfunc_uvm_report_enabled__263__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__264__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__265__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__266__Vfuncout;
    __Vtask_uvm_report_enabled__266__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__267__id;
    std::string __Vtask_uvm_report_error__267__message;
    IData/*31:0*/ __Vtask_uvm_report_error__267__verbosity;
    __Vtask_uvm_report_error__267__verbosity = 0;
    std::string __Vtask_uvm_report_error__267__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__267__line;
    __Vtask_uvm_report_error__267__line = 0;
    std::string __Vtask_uvm_report_error__267__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__267__report_enabled_checked;
    __Vtask_uvm_report_error__267__report_enabled_checked = 0;
    std::string __Vtask_get_name__268__Vfuncout;
    std::string __Vfunc_get_name__269__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__270__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__271__Vfuncout;
    // Body
    {
        if ((! this->__PVT__m_mems_info.exists(mem))) {
            if (error) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__263__id = "REG_NO_MAP"s;
                                __Vfunc_uvm_report_enabled__263__severity = 2U;
                                __Vfunc_uvm_report_enabled__263__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__264__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__264__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__265__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__265__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__263__verbosity, (IData)(__Vfunc_uvm_report_enabled__263__severity), __Vfunc_uvm_report_enabled__263__id, __Vtask_uvm_report_enabled__266__Vfuncout);
                                __Vfunc_uvm_report_enabled__263__Vfuncout 
                                    = __Vtask_uvm_report_enabled__266__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__263__Vfuncout))) {
                    __Vtask_uvm_report_error__267__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__267__context_name = ""s;
                    __Vtask_uvm_report_error__267__line = 0x00000485U;
                    __Vtask_uvm_report_error__267__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_error__267__verbosity = 0U;
                    __Vtask_uvm_report_error__267__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1157)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__268__Vfuncout);
                                            }(), __Vtask_get_name__268__Vfuncout)), "' not in map '"s), 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__269__Vfuncout);
                                    }(), __Vfunc_get_name__269__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__267__id = "REG_NO_MAP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__270__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__270__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__271__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__271__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__267__id, __Vtask_uvm_report_error__267__message, __Vtask_uvm_report_error__267__verbosity, __Vtask_uvm_report_error__267__filename, __Vtask_uvm_report_error__267__line, __Vtask_uvm_report_error__267__context_name, (IData)(__Vtask_uvm_report_error__267__report_enabled_checked));
                }
            }
            get_mem_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_mem_map_info__Vfuncrtn = this->__PVT__m_mems_info
            .at(mem);
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, CData/*0:0*/ error, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_map_info\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__273__Vfuncout;
    __Vfunc_uvm_report_enabled__273__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__273__verbosity;
    __Vfunc_uvm_report_enabled__273__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__273__severity;
    __Vfunc_uvm_report_enabled__273__severity = 0;
    std::string __Vfunc_uvm_report_enabled__273__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__274__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__275__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__276__Vfuncout;
    __Vtask_uvm_report_enabled__276__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__277__id;
    std::string __Vtask_uvm_report_error__277__message;
    IData/*31:0*/ __Vtask_uvm_report_error__277__verbosity;
    __Vtask_uvm_report_error__277__verbosity = 0;
    std::string __Vtask_uvm_report_error__277__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__277__line;
    __Vtask_uvm_report_error__277__line = 0;
    std::string __Vtask_uvm_report_error__277__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__277__report_enabled_checked;
    __Vtask_uvm_report_error__277__report_enabled_checked = 0;
    std::string __Vtask_get_name__278__Vfuncout;
    std::string __Vfunc_get_name__279__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__280__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__281__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__283__Vfuncout;
    __Vfunc_uvm_report_enabled__283__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__283__verbosity;
    __Vfunc_uvm_report_enabled__283__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__283__severity;
    __Vfunc_uvm_report_enabled__283__severity = 0;
    std::string __Vfunc_uvm_report_enabled__283__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__284__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__285__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__286__Vfuncout;
    __Vtask_uvm_report_enabled__286__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__287__id;
    std::string __Vtask_uvm_report_warning__287__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__287__verbosity;
    __Vtask_uvm_report_warning__287__verbosity = 0;
    std::string __Vtask_uvm_report_warning__287__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__287__line;
    __Vtask_uvm_report_warning__287__line = 0;
    std::string __Vtask_uvm_report_warning__287__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__287__report_enabled_checked;
    __Vtask_uvm_report_warning__287__report_enabled_checked = 0;
    std::string __Vfunc_get_name__288__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__289__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__290__Vfuncout;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> result;
    {
        if ((! this->__PVT__m_regs_info.exists(rg))) {
            if (error) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__273__id = "REG_NO_MAP"s;
                                __Vfunc_uvm_report_enabled__273__severity = 2U;
                                __Vfunc_uvm_report_enabled__273__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__274__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__274__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__275__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__275__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__273__verbosity, (IData)(__Vfunc_uvm_report_enabled__273__severity), __Vfunc_uvm_report_enabled__273__id, __Vtask_uvm_report_enabled__276__Vfuncout);
                                __Vfunc_uvm_report_enabled__273__Vfuncout 
                                    = __Vtask_uvm_report_enabled__276__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__273__Vfuncout))) {
                    __Vtask_uvm_report_error__277__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__277__context_name = ""s;
                    __Vtask_uvm_report_error__277__line = 0x00000492U;
                    __Vtask_uvm_report_error__277__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                    __Vtask_uvm_report_error__277__verbosity = 0U;
                    __Vtask_uvm_report_error__277__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1170)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__278__Vfuncout);
                                            }(), __Vtask_get_name__278__Vfuncout)), "' not in map '"s), 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__279__Vfuncout);
                                    }(), __Vfunc_get_name__279__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__277__id = "REG_NO_MAP"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__280__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__280__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__281__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__281__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__277__id, __Vtask_uvm_report_error__277__message, __Vtask_uvm_report_error__277__verbosity, __Vtask_uvm_report_error__277__filename, __Vtask_uvm_report_error__277__line, __Vtask_uvm_report_error__277__context_name, (IData)(__Vtask_uvm_report_error__277__report_enabled_checked));
                }
            }
            get_reg_map_info__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        result = this->__PVT__m_regs_info.at(rg);
        if ((1U & (~ VL_NULL_CHECK(result, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1174)
                   ->__PVT__is_initialized))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__283__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__283__severity = 1U;
                            __Vfunc_uvm_report_enabled__283__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__284__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__284__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__285__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__285__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__283__verbosity, (IData)(__Vfunc_uvm_report_enabled__283__severity), __Vfunc_uvm_report_enabled__283__id, __Vtask_uvm_report_enabled__286__Vfuncout);
                            __Vfunc_uvm_report_enabled__283__Vfuncout 
                                = __Vtask_uvm_report_enabled__286__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__283__Vfuncout))) {
                __Vtask_uvm_report_warning__287__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__287__context_name = ""s;
                __Vtask_uvm_report_warning__287__line = 0x00000497U;
                __Vtask_uvm_report_warning__287__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_warning__287__verbosity = 0U;
                __Vtask_uvm_report_warning__287__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("map '"s, 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__288__Vfuncout);
                                }(), __Vfunc_get_name__288__Vfuncout)), "' does not seem to be initialized correctly, check that the top register model is locked()"s));
                __Vtask_uvm_report_warning__287__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__289__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__289__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__290__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__290__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__287__id, __Vtask_uvm_report_warning__287__message, __Vtask_uvm_report_warning__287__verbosity, __Vtask_uvm_report_warning__287__filename, __Vtask_uvm_report_warning__287__line, __Vtask_uvm_report_warning__287__context_name, (IData)(__Vtask_uvm_report_warning__287__report_enabled_checked));
            }
        }
        get_reg_map_info__Vfuncrtn = result;
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_base_addr(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_base_addr\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_locked__293__Vfuncout;
    __Vtask_is_locked__293__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_root_map__294__Vfuncout;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk519__DOT__top_map;
    if ((VlNull{} != this->__PVT__m_parent_map)) {
        VL_NULL_CHECK(this->__PVT__m_parent_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1189)->__VnoInFunc_set_submap_offset(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, offset);
    } else {
        this->__PVT__m_base_addr = offset;
        if (([&]() {
                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1193)
             ->__VnoInFunc_is_locked(vlSymsp, __Vtask_is_locked__293__Vfuncout);
                }(), (IData)(__Vtask_is_locked__293__Vfuncout))) {
            this->__VnoInFunc_get_root_map(vlSymsp, __Vfunc_get_root_map__294__Vfuncout);
            unnamedblk519__DOT__top_map = __Vfunc_get_root_map__294__Vfuncout;
            VL_NULL_CHECK(unnamedblk519__DOT__top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1195)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_size(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_size\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_n_bytes__296__Vfuncout;
    __Vtask_get_n_bytes__296__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_size__297__Vfuncout;
    __Vtask_get_size__297__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__298__Vfuncout;
    __Vtask_get_n_bytes__298__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_size__299__Vfuncout;
    __Vtask_get_size__299__Vfuncout = 0;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk520__DOT__rg_;
    CData/*0:0*/ unnamedblk520__DOT__rg___Vfirst;
    unnamedblk520__DOT__rg___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk520__DOT__unnamedblk521__DOT__rg;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> unnamedblk522__DOT__mem_;
    CData/*0:0*/ unnamedblk522__DOT__mem___Vfirst;
    unnamedblk522__DOT__mem___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> unnamedblk522__DOT__unnamedblk523__DOT__mem;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk524__DOT__submap_;
    CData/*0:0*/ unnamedblk524__DOT__submap___Vfirst;
    unnamedblk524__DOT__submap___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk524__DOT__unnamedblk525__DOT__submap;
    IData/*31:0*/ max_addr;
    max_addr = 0;
    IData/*31:0*/ addr;
    addr = 0;
    if ((0U != this->__PVT__m_regs_info.first(unnamedblk520__DOT__rg_))) {
        unnamedblk520__DOT__rg___Vfirst = 1U;
        while (((IData)(unnamedblk520__DOT__rg___Vfirst) 
                || (0U != this->__PVT__m_regs_info.next(unnamedblk520__DOT__rg_)))) {
            unnamedblk520__DOT__rg___Vfirst = 0U;
            unnamedblk520__DOT__unnamedblk521__DOT__rg 
                = unnamedblk520__DOT__rg_;
            addr = ((IData)(VL_NULL_CHECK(this->__PVT__m_regs_info
                                          .at(unnamedblk520__DOT__unnamedblk521__DOT__rg), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1211)
                            ->__PVT__offset) + (IData)(
                                                       VL_DIV_QQQ(64, 
                                                                  (VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(unnamedblk520__DOT__unnamedblk521__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1211)
                                                                                ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__296__Vfuncout);
                                    }(), __Vtask_get_n_bytes__296__Vfuncout)) 
                                                                   - 1ULL), (QData)((IData)(this->__PVT__m_n_bytes)))));
            if ((addr > max_addr)) {
                max_addr = addr;
            }
        }
    }
    if ((0U != this->__PVT__m_mems_info.first(unnamedblk522__DOT__mem_))) {
        unnamedblk522__DOT__mem___Vfirst = 1U;
        while (((IData)(unnamedblk522__DOT__mem___Vfirst) 
                || (0U != this->__PVT__m_mems_info.next(unnamedblk522__DOT__mem_)))) {
            unnamedblk522__DOT__mem___Vfirst = 0U;
            unnamedblk522__DOT__unnamedblk523__DOT__mem 
                = unnamedblk522__DOT__mem_;
            addr = (((IData)(VL_NULL_CHECK(this->__PVT__m_mems_info
                                           .at(unnamedblk522__DOT__unnamedblk523__DOT__mem), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1218)
                             ->__PVT__offset) + (IData)(
                                                        (([&]() {
                                    VL_NULL_CHECK(unnamedblk522__DOT__unnamedblk523__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1218)
                                                          ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__297__Vfuncout);
                                }(), __Vtask_get_size__297__Vfuncout) 
                                                         * 
                                                         (1ULL 
                                                          + 
                                                          VL_DIV_QQQ(64, 
                                                                     (VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(unnamedblk522__DOT__unnamedblk523__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1218)
                                                                                ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__298__Vfuncout);
                                                }(), __Vtask_get_n_bytes__298__Vfuncout)) 
                                                                      - 1ULL), (QData)((IData)(this->__PVT__m_n_bytes))))))) 
                    - (IData)(1U));
            if ((addr > max_addr)) {
                max_addr = addr;
            }
        }
    }
    if ((0U != this->__PVT__m_submaps.first(unnamedblk524__DOT__submap_))) {
        unnamedblk524__DOT__submap___Vfirst = 1U;
        while (((IData)(unnamedblk524__DOT__submap___Vfirst) 
                || (0U != this->__PVT__m_submaps.next(unnamedblk524__DOT__submap_)))) {
            unnamedblk524__DOT__submap___Vfirst = 0U;
            unnamedblk524__DOT__unnamedblk525__DOT__submap 
                = unnamedblk524__DOT__submap_;
            addr = ((IData)(this->__PVT__m_submaps.at(unnamedblk524__DOT__unnamedblk525__DOT__submap)) 
                    + ([&]() {
                        VL_NULL_CHECK(unnamedblk524__DOT__unnamedblk525__DOT__submap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1225)
                       ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__299__Vfuncout);
                    }(), __Vtask_get_size__299__Vfuncout));
            if ((addr > max_addr)) {
                max_addr = addr;
            }
        }
    }
    get_size__Vfuncrtn = ((IData)(1U) + max_addr);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xverify_map_configX(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xverify_map_configX\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_root_map__300__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> __Vtask_get_adapter__301__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__302__Vfuncout;
    __Vfunc_uvm_report_enabled__302__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__302__verbosity;
    __Vfunc_uvm_report_enabled__302__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__302__severity;
    __Vfunc_uvm_report_enabled__302__severity = 0;
    std::string __Vfunc_uvm_report_enabled__302__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__303__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__304__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__305__Vfuncout;
    __Vtask_uvm_report_enabled__305__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__306__id;
    std::string __Vtask_uvm_report_error__306__message;
    IData/*31:0*/ __Vtask_uvm_report_error__306__verbosity;
    __Vtask_uvm_report_error__306__verbosity = 0;
    std::string __Vtask_uvm_report_error__306__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__306__line;
    __Vtask_uvm_report_error__306__line = 0;
    std::string __Vtask_uvm_report_error__306__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__306__report_enabled_checked;
    __Vtask_uvm_report_error__306__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__307__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__308__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__309__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__311__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__312__Vfuncout;
    __Vfunc_uvm_report_enabled__312__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__312__verbosity;
    __Vfunc_uvm_report_enabled__312__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__312__severity;
    __Vfunc_uvm_report_enabled__312__severity = 0;
    std::string __Vfunc_uvm_report_enabled__312__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__313__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__314__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__315__Vfuncout;
    __Vtask_uvm_report_enabled__315__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__316__id;
    std::string __Vtask_uvm_report_error__316__message;
    IData/*31:0*/ __Vtask_uvm_report_error__316__verbosity;
    __Vtask_uvm_report_error__316__verbosity = 0;
    std::string __Vtask_uvm_report_error__316__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__316__line;
    __Vtask_uvm_report_error__316__line = 0;
    std::string __Vtask_uvm_report_error__316__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__316__report_enabled_checked;
    __Vtask_uvm_report_error__316__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__317__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__318__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__319__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__321__Vfuncout;
    __Vfunc_uvm_report_enabled__321__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__321__verbosity;
    __Vfunc_uvm_report_enabled__321__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__321__severity;
    __Vfunc_uvm_report_enabled__321__severity = 0;
    std::string __Vfunc_uvm_report_enabled__321__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__322__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__323__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__324__Vfuncout;
    __Vtask_uvm_report_enabled__324__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ error;
    error = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> root_map;
    this->__VnoInFunc_get_root_map(vlSymsp, __Vfunc_get_root_map__300__Vfuncout);
    root_map = __Vfunc_get_root_map__300__Vfuncout;
    if ((VlNull{} == ([&]() {
                    VL_NULL_CHECK(root_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1241)
                      ->__VnoInFunc_get_adapter(vlSymsp, 1U, __Vtask_get_adapter__301__Vfuncout);
                }(), __Vtask_get_adapter__301__Vfuncout))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__302__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__302__severity = 2U;
                        __Vfunc_uvm_report_enabled__302__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__303__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__303__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__304__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__304__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__302__verbosity, (IData)(__Vfunc_uvm_report_enabled__302__severity), __Vfunc_uvm_report_enabled__302__id, __Vtask_uvm_report_enabled__305__Vfuncout);
                        __Vfunc_uvm_report_enabled__302__Vfuncout 
                            = __Vtask_uvm_report_enabled__305__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__302__Vfuncout))) {
            __Vtask_uvm_report_error__306__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__306__context_name = ""s;
            __Vtask_uvm_report_error__306__line = 0x000004dbU;
            __Vtask_uvm_report_error__306__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__306__verbosity = 0U;
            __Vtask_uvm_report_error__306__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Map '"s, 
                                                                   ([&]() {
                                VL_NULL_CHECK(root_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1243)
                                                                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__307__Vfuncout);
                            }(), __Vtask_get_full_name__307__Vfuncout)), "' does not have an adapter registered"s));
            __Vtask_uvm_report_error__306__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__308__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__308__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__309__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__309__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__306__id, __Vtask_uvm_report_error__306__message, __Vtask_uvm_report_error__306__verbosity, __Vtask_uvm_report_error__306__filename, __Vtask_uvm_report_error__306__line, __Vtask_uvm_report_error__306__context_name, (IData)(__Vtask_uvm_report_error__306__report_enabled_checked));
        }
        error = (1U & ((IData)(1U) + (IData)(error)));
    }
    if ((VlNull{} == ([&]() {
                    VL_NULL_CHECK(root_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1246)
                      ->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vtask_get_sequencer__311__Vfuncout);
                }(), __Vtask_get_sequencer__311__Vfuncout))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__312__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__312__severity = 2U;
                        __Vfunc_uvm_report_enabled__312__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__313__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__313__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__314__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__314__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__312__verbosity, (IData)(__Vfunc_uvm_report_enabled__312__severity), __Vfunc_uvm_report_enabled__312__id, __Vtask_uvm_report_enabled__315__Vfuncout);
                        __Vfunc_uvm_report_enabled__312__Vfuncout 
                            = __Vtask_uvm_report_enabled__315__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__312__Vfuncout))) {
            __Vtask_uvm_report_error__316__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__316__context_name = ""s;
            __Vtask_uvm_report_error__316__line = 0x000004e0U;
            __Vtask_uvm_report_error__316__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_error__316__verbosity = 0U;
            __Vtask_uvm_report_error__316__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN("Map '"s, 
                                                                   ([&]() {
                                VL_NULL_CHECK(root_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1248)
                                                                    ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__317__Vfuncout);
                            }(), __Vtask_get_full_name__317__Vfuncout)), "' does not have a sequencer registered"s));
            __Vtask_uvm_report_error__316__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__318__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__318__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__319__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__319__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__316__id, __Vtask_uvm_report_error__316__message, __Vtask_uvm_report_error__316__verbosity, __Vtask_uvm_report_error__316__filename, __Vtask_uvm_report_error__316__line, __Vtask_uvm_report_error__316__context_name, (IData)(__Vtask_uvm_report_error__316__report_enabled_checked));
        }
        error = (1U & ((IData)(1U) + (IData)(error)));
    }
    if (error) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__321__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__321__severity = 3U;
                        __Vfunc_uvm_report_enabled__321__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__322__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__322__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__323__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__323__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__321__verbosity, (IData)(__Vfunc_uvm_report_enabled__321__severity), __Vfunc_uvm_report_enabled__321__id, __Vtask_uvm_report_enabled__324__Vfuncout);
                        __Vfunc_uvm_report_enabled__321__Vfuncout 
                            = __Vtask_uvm_report_enabled__324__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__321__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "Must register an adapter and sequencer for each top-level map in RegModel model"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x000004e5U, ""s, 1U);
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses_to_map(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> parent_map, IData/*31:0*/ &byte_offset, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &get_physical_addresses_to_map__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses_to_map\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_n_bytes__326__Vfuncout;
    __Vfunc_get_n_bytes__326__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_parent_map__327__Vfuncout;
    QData/*63:0*/ __Vfunc_get_base_addr__328__Vfuncout;
    __Vfunc_get_base_addr__328__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_submap_offset__329__Vfuncout;
    __Vtask_get_submap_offset__329__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__330__Vfuncout;
    __Vtask_get_n_bytes__330__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__331__Vfuncout;
    __Vfunc_get_addr_unit_bytes__331__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__332__Vfuncout;
    __Vfunc_get_addr_unit_bytes__332__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_addr_unit_bytes__333__Vfuncout;
    __Vtask_get_addr_unit_bytes__333__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__334__Vfuncout;
    __Vfunc_get_addr_unit_bytes__334__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_addr_unit_bytes__335__Vfuncout;
    __Vtask_get_addr_unit_bytes__335__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__336__Vfuncout;
    __Vtask_get_physical_addresses_to_map__336__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ceil__337__Vfuncout;
    __Vfunc_ceil__337__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__338__Vfuncout;
    __Vtask_get_n_bytes__338__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__339__Vfuncout;
    __Vfunc_get_addr_unit_bytes__339__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__340__Vfuncout;
    __Vtask_get_n_bytes__340__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__341__Vfuncout;
    __Vfunc_get_addr_unit_bytes__341__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__342__Vfuncout;
    __Vtask_get_n_bytes__342__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__343__Vfuncout;
    __Vfunc_get_addr_unit_bytes__343__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_endian__344__Vfuncout;
    __Vfunc_get_endian__344__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_endian__345__Vfuncout;
    __Vfunc_get_endian__345__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_endian__346__Vfuncout;
    __Vfunc_get_endian__346__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_endian__347__Vfuncout;
    __Vfunc_get_endian__347__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_endian__348__Vfuncout;
    __Vfunc_get_endian__348__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__349__Vfuncout;
    __Vfunc_get_addr_unit_bytes__349__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_endian__350__Vfuncout;
    __Vfunc_get_endian__350__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__351__Vfuncout;
    __Vfunc_get_addr_unit_bytes__351__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_endian__352__Vfuncout;
    __Vfunc_get_endian__352__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_endian__353__Vfuncout;
    __Vfunc_get_endian__353__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__354__Vfuncout;
    __Vfunc_uvm_report_enabled__354__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__354__verbosity;
    __Vfunc_uvm_report_enabled__354__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__354__severity;
    __Vfunc_uvm_report_enabled__354__severity = 0;
    std::string __Vfunc_uvm_report_enabled__354__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__355__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__356__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__357__Vfuncout;
    __Vtask_uvm_report_enabled__357__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__358__id;
    std::string __Vtask_uvm_report_error__358__message;
    IData/*31:0*/ __Vtask_uvm_report_error__358__verbosity;
    __Vtask_uvm_report_error__358__verbosity = 0;
    std::string __Vtask_uvm_report_error__358__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__358__line;
    __Vtask_uvm_report_error__358__line = 0;
    std::string __Vtask_uvm_report_error__358__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__358__report_enabled_checked;
    __Vtask_uvm_report_error__358__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__359__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__360__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__361__Vfuncout;
    QData/*63:0*/ __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    QData/*63:0*/ unnamedblk526__DOT__lb;
    unnamedblk526__DOT__lb = 0;
    QData/*63:0*/ unnamedblk526__DOT__laddr;
    unnamedblk526__DOT__laddr = 0;
    QData/*63:0*/ unnamedblk527__DOT__lbase_addr2;
    unnamedblk527__DOT__lbase_addr2 = 0;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk528__DOT__i;
    unnamedblk527__DOT__unnamedblk528__DOT__i = 0;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk529__DOT__i;
    unnamedblk527__DOT__unnamedblk529__DOT__i = 0;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk530__DOT__i;
    unnamedblk527__DOT__unnamedblk530__DOT__i = 0;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk531__DOT__i;
    unnamedblk527__DOT__unnamedblk531__DOT__i = 0;
    IData/*31:0*/ unnamedblk527__DOT__unnamedblk532__DOT__idx;
    unnamedblk527__DOT__unnamedblk532__DOT__idx = 0;
    IData/*31:0*/ bus_width;
    bus_width = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> up_map;
    VlQueue<QData/*63:0*/> local_addr;
    local_addr.atDefault() = 0;
    QData/*63:0*/ lbase_addr;
    lbase_addr = 0;
    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__326__Vfuncout);
    bus_width = __Vfunc_get_n_bytes__326__Vfuncout;
    this->__VnoInFunc_get_parent_map(vlSymsp, __Vfunc_get_parent_map__327__Vfuncout);
    up_map = __Vfunc_get_parent_map__327__Vfuncout;
    lbase_addr = ((VlNull{} == up_map) ? ([&]() {
                this->__VnoInFunc_get_base_addr(vlProcess, vlSymsp, 0U, __Vfunc_get_base_addr__328__Vfuncout);
            }(), __Vfunc_get_base_addr__328__Vfuncout)
                   : ([&]() {
                VL_NULL_CHECK(up_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1285)
                      ->__VnoInFunc_get_submap_offset(vlProcess, vlSymsp, 
                                                      VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_get_submap_offset__329__Vfuncout);
            }(), __Vtask_get_submap_offset__329__Vfuncout));
    if ((up_map != parent_map)) {
        if ((0U != mem_offset)) {
            base_addr = (base_addr + VL_DIV_QQQ(64, 
                                                (mem_offset 
                                                 * 
                                                 VL_EXTEND_QI(64,32, 
                                                              ([&]() {
                                    VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1297)
                                                               ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__330__Vfuncout);
                                }(), __Vtask_get_n_bytes__330__Vfuncout))), 
                                                VL_EXTEND_QI(64,32, 
                                                             ([&]() {
                                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__331__Vfuncout);
                            }(), __Vfunc_get_addr_unit_bytes__331__Vfuncout))));
        }
        unnamedblk526__DOT__laddr = (lbase_addr + VL_DIV_QQQ(64, 
                                                             (base_addr 
                                                              * 
                                                              VL_EXTEND_QI(64,32, 
                                                                           ([&]() {
                                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__332__Vfuncout);
                            }(), __Vfunc_get_addr_unit_bytes__332__Vfuncout))), 
                                                             VL_EXTEND_QI(64,32, 
                                                                          ([&]() {
                            VL_NULL_CHECK(up_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1299)
                                                                           ->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vtask_get_addr_unit_bytes__333__Vfuncout);
                        }(), __Vtask_get_addr_unit_bytes__333__Vfuncout))));
        unnamedblk526__DOT__lb = VL_MODDIV_QQQ(64, 
                                               (base_addr 
                                                * VL_EXTEND_QI(64,32, 
                                                               ([&]() {
                            this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__334__Vfuncout);
                        }(), __Vfunc_get_addr_unit_bytes__334__Vfuncout))), 
                                               VL_EXTEND_QI(64,32, 
                                                            ([&]() {
                        VL_NULL_CHECK(up_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1300)
                                                             ->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vtask_get_addr_unit_bytes__335__Vfuncout);
                    }(), __Vtask_get_addr_unit_bytes__335__Vfuncout)));
        byte_offset = (byte_offset + (IData)(unnamedblk526__DOT__lb));
        VL_NULL_CHECK(up_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1303)->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, unnamedblk526__DOT__laddr, 0ULL, 
                                                                                (n_bytes 
                                                                                + (IData)(unnamedblk526__DOT__lb)), addr, parent_map, byte_offset, VlNull{}, __Vtask_get_physical_addresses_to_map__336__Vfuncout);
        get_physical_addresses_to_map__Vfuncrtn = __Vtask_get_physical_addresses_to_map__336__Vfuncout;
    } else {
        local_addr.renew(([&]() {
                    this->__VnoInFunc_ceil(vlSymsp, n_bytes, bus_width, __Vfunc_ceil__337__Vfuncout);
                }(), __Vfunc_ceil__337__Vfuncout));
        unnamedblk527__DOT__lbase_addr2 = base_addr;
        if ((0U != mem_offset)) {
            if (((VlNull{} != mem) && (([&]() {
                                VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1312)
                                        ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__338__Vfuncout);
                            }(), __Vtask_get_n_bytes__338__Vfuncout) 
                                       >= ([&]() {
                                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__339__Vfuncout);
                            }(), __Vfunc_get_addr_unit_bytes__339__Vfuncout)))) {
                unnamedblk527__DOT__lbase_addr2 = (base_addr 
                                                   + 
                                                   VL_DIV_QQQ(64, 
                                                              (mem_offset 
                                                               * 
                                                               VL_EXTEND_QI(64,32, 
                                                                            ([&]() {
                                        VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1313)
                                                                             ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__340__Vfuncout);
                                    }(), __Vtask_get_n_bytes__340__Vfuncout))), 
                                                              VL_EXTEND_QI(64,32, 
                                                                           ([&]() {
                                    this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__341__Vfuncout);
                                }(), __Vfunc_get_addr_unit_bytes__341__Vfuncout))));
                byte_offset = (byte_offset + (IData)(
                                                     VL_MODDIV_QQQ(64, 
                                                                   (mem_offset 
                                                                    * 
                                                                    VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1314)
                                                                                ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__342__Vfuncout);
                                        }(), __Vtask_get_n_bytes__342__Vfuncout))), 
                                                                   VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                                        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__343__Vfuncout);
                                    }(), __Vfunc_get_addr_unit_bytes__343__Vfuncout)))));
            } else {
                unnamedblk527__DOT__lbase_addr2 = (base_addr 
                                                   + mem_offset);
            }
        }
        if ((1U | ((((1U == ([&]() {
                                        this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__344__Vfuncout);
                                    }(), __Vfunc_get_endian__344__Vfuncout)) 
                     | (2U == ([&]() {
                                        this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__345__Vfuncout);
                                    }(), __Vfunc_get_endian__345__Vfuncout))) 
                    | (3U == ([&]() {
                                    this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__346__Vfuncout);
                                }(), __Vfunc_get_endian__346__Vfuncout))) 
                   | (4U == ([&]() {
                                this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__347__Vfuncout);
                            }(), __Vfunc_get_endian__347__Vfuncout))))) {
            if ((1U == ([&]() {
                            this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__348__Vfuncout);
                        }(), __Vfunc_get_endian__348__Vfuncout))) {
                unnamedblk527__DOT__unnamedblk528__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk528__DOT__i, local_addr.size())) {
                    local_addr.atWrite(unnamedblk527__DOT__unnamedblk528__DOT__i) 
                        = (unnamedblk527__DOT__lbase_addr2 
                           + VL_DIV_QQQ(64, ((QData)((IData)(unnamedblk527__DOT__unnamedblk528__DOT__i)) 
                                             * (QData)((IData)(bus_width))), 
                                        VL_EXTEND_QI(64,32, 
                                                     ([&]() {
                                        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__349__Vfuncout);
                                    }(), __Vfunc_get_addr_unit_bytes__349__Vfuncout))));
                    unnamedblk527__DOT__unnamedblk528__DOT__i 
                        = ((IData)(1U) + unnamedblk527__DOT__unnamedblk528__DOT__i);
                }
            } else if ((2U == ([&]() {
                            this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__350__Vfuncout);
                        }(), __Vfunc_get_endian__350__Vfuncout))) {
                unnamedblk527__DOT__unnamedblk529__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk529__DOT__i, local_addr.size())) {
                    __Vtemp_1 = (unnamedblk527__DOT__lbase_addr2 
                                 + VL_DIV_QQQ(64, (
                                                   (((QData)((IData)(local_addr.size())) 
                                                     - 1ULL) 
                                                    - (QData)((IData)(unnamedblk527__DOT__unnamedblk529__DOT__i))) 
                                                   * (QData)((IData)(bus_width))), 
                                              VL_EXTEND_QI(64,32, 
                                                           ([&]() {
                                        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__351__Vfuncout);
                                    }(), __Vfunc_get_addr_unit_bytes__351__Vfuncout))));
                    local_addr.atWrite(unnamedblk527__DOT__unnamedblk529__DOT__i) 
                        = __Vtemp_1;
                    unnamedblk527__DOT__unnamedblk529__DOT__i 
                        = ((IData)(1U) + unnamedblk527__DOT__unnamedblk529__DOT__i);
                }
            } else if ((3U == ([&]() {
                            this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__352__Vfuncout);
                        }(), __Vfunc_get_endian__352__Vfuncout))) {
                unnamedblk527__DOT__unnamedblk530__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk530__DOT__i, local_addr.size())) {
                    local_addr.atWrite(unnamedblk527__DOT__unnamedblk530__DOT__i) 
                        = unnamedblk527__DOT__lbase_addr2;
                    unnamedblk527__DOT__unnamedblk530__DOT__i 
                        = ((IData)(1U) + unnamedblk527__DOT__unnamedblk530__DOT__i);
                }
            } else if ((4U == ([&]() {
                            this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__353__Vfuncout);
                        }(), __Vfunc_get_endian__353__Vfuncout))) {
                unnamedblk527__DOT__unnamedblk531__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk531__DOT__i, local_addr.size())) {
                    local_addr.atWrite(unnamedblk527__DOT__unnamedblk531__DOT__i) 
                        = unnamedblk527__DOT__lbase_addr2;
                    unnamedblk527__DOT__unnamedblk531__DOT__i 
                        = ((IData)(1U) + unnamedblk527__DOT__unnamedblk531__DOT__i);
                }
            } else if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__354__id = "UVM/REG/MAPNOENDIANESS"s;
                            __Vfunc_uvm_report_enabled__354__severity = 2U;
                            __Vfunc_uvm_report_enabled__354__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__355__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__355__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                               ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__356__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__356__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                               ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__354__verbosity, (IData)(__Vfunc_uvm_report_enabled__354__severity), __Vfunc_uvm_report_enabled__354__id, __Vtask_uvm_report_enabled__357__Vfuncout);
                            __Vfunc_uvm_report_enabled__354__Vfuncout 
                                = __Vtask_uvm_report_enabled__357__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__354__Vfuncout))) {
                __Vtask_uvm_report_error__358__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__358__context_name = ""s;
                __Vtask_uvm_report_error__358__line = 0x00000543U;
                __Vtask_uvm_report_error__358__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__358__verbosity = 0U;
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__359__Vfuncout);
                    }(), __Vfunc_get_full_name__359__Vfuncout);
                __Vtask_uvm_report_error__358__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("Map has no specified endianness. "s, VL_SFORMATF_N_NX("Cannot access %0# bytes register via its %0d byte \"%@\" interface",0,
                                                                                32,
                                                                                n_bytes,
                                                                                32,
                                                                                bus_width,
                                                                                -1,
                                                                                &(__Vtemp_2)) ));
                __Vtask_uvm_report_error__358__id = "UVM/REG/MAPNOENDIANESS"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__360__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__360__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__361__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__361__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__358__id, __Vtask_uvm_report_error__358__message, __Vtask_uvm_report_error__358__verbosity, __Vtask_uvm_report_error__358__filename, __Vtask_uvm_report_error__358__line, __Vtask_uvm_report_error__358__context_name, (IData)(__Vtask_uvm_report_error__358__report_enabled_checked));
            }
        }
        addr.renew_copy(local_addr.size(), local_addr);
        unnamedblk527__DOT__unnamedblk532__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk527__DOT__unnamedblk532__DOT__idx, addr.size())) {
            addr.atWrite(unnamedblk527__DOT__unnamedblk532__DOT__idx) 
                = (addr.at(unnamedblk527__DOT__unnamedblk532__DOT__idx) 
                   + lbase_addr);
            unnamedblk527__DOT__unnamedblk532__DOT__idx 
                = ((IData)(1U) + unnamedblk527__DOT__unnamedblk532__DOT__idx);
        }
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_physical_addresses__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_physical_addresses\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_physical_addresses_to_map__363__Vfuncout;
    __Vfunc_get_physical_addresses_to_map__363__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ skip;
    skip = 0;
    this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, base_addr, mem_offset, n_bytes, addr, VlNull{}, skip, VlNull{}, __Vfunc_get_physical_addresses_to_map__363__Vfuncout);
    get_physical_addresses__Vfuncrtn = __Vfunc_get_physical_addresses_to_map__363__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_submap_offset(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ offset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_set_submap_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__364__Vfuncout;
    __Vfunc_uvm_report_enabled__364__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__364__verbosity;
    __Vfunc_uvm_report_enabled__364__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__364__severity;
    __Vfunc_uvm_report_enabled__364__severity = 0;
    std::string __Vfunc_uvm_report_enabled__364__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__365__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__366__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__367__Vfuncout;
    __Vtask_uvm_report_enabled__367__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__368__id;
    std::string __Vtask_uvm_report_error__368__message;
    IData/*31:0*/ __Vtask_uvm_report_error__368__verbosity;
    __Vtask_uvm_report_error__368__verbosity = 0;
    std::string __Vtask_uvm_report_error__368__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__368__line;
    __Vtask_uvm_report_error__368__line = 0;
    std::string __Vtask_uvm_report_error__368__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__368__report_enabled_checked;
    __Vtask_uvm_report_error__368__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__369__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__370__Vfuncout;
    CData/*0:0*/ __Vtask_is_locked__372__Vfuncout;
    __Vtask_is_locked__372__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_root_map__373__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk533__DOT__root_map;
    {
        if ((VlNull{} == submap)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__364__id = "REG/NULL"s;
                            __Vfunc_uvm_report_enabled__364__severity = 2U;
                            __Vfunc_uvm_report_enabled__364__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__365__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__365__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__366__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__366__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__364__verbosity, (IData)(__Vfunc_uvm_report_enabled__364__severity), __Vfunc_uvm_report_enabled__364__id, __Vtask_uvm_report_enabled__367__Vfuncout);
                            __Vfunc_uvm_report_enabled__364__Vfuncout 
                                = __Vtask_uvm_report_enabled__367__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__364__Vfuncout))) {
                __Vtask_uvm_report_error__368__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__368__context_name = ""s;
                __Vtask_uvm_report_error__368__line = 0x00000569U;
                __Vtask_uvm_report_error__368__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__368__verbosity = 0U;
                __Vtask_uvm_report_error__368__message = "set_submap_offset: submap handle is null"s;
                __Vtask_uvm_report_error__368__id = "REG/NULL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__369__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__369__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__370__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__370__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__368__id, __Vtask_uvm_report_error__368__message, __Vtask_uvm_report_error__368__verbosity, __Vtask_uvm_report_error__368__filename, __Vtask_uvm_report_error__368__line, __Vtask_uvm_report_error__368__context_name, (IData)(__Vtask_uvm_report_error__368__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        this->__PVT__m_submaps.at(submap) = offset;
        if (([&]() {
                    VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1389)
             ->__VnoInFunc_is_locked(vlSymsp, __Vtask_is_locked__372__Vfuncout);
                }(), (IData)(__Vtask_is_locked__372__Vfuncout))) {
            this->__VnoInFunc_get_root_map(vlSymsp, __Vfunc_get_root_map__373__Vfuncout);
            unnamedblk533__DOT__root_map = __Vfunc_get_root_map__373__Vfuncout;
            VL_NULL_CHECK(unnamedblk533__DOT__root_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1391)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
        }
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ &get_submap_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_submap_offset\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__375__Vfuncout;
    __Vfunc_uvm_report_enabled__375__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__375__verbosity;
    __Vfunc_uvm_report_enabled__375__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__375__severity;
    __Vfunc_uvm_report_enabled__375__severity = 0;
    std::string __Vfunc_uvm_report_enabled__375__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__376__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__377__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__378__Vfuncout;
    __Vtask_uvm_report_enabled__378__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__379__id;
    std::string __Vtask_uvm_report_error__379__message;
    IData/*31:0*/ __Vtask_uvm_report_error__379__verbosity;
    __Vtask_uvm_report_error__379__verbosity = 0;
    std::string __Vtask_uvm_report_error__379__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__379__line;
    __Vtask_uvm_report_error__379__line = 0;
    std::string __Vtask_uvm_report_error__379__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__379__report_enabled_checked;
    __Vtask_uvm_report_error__379__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__380__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__381__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__383__Vfuncout;
    __Vfunc_uvm_report_enabled__383__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__383__verbosity;
    __Vfunc_uvm_report_enabled__383__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__383__severity;
    __Vfunc_uvm_report_enabled__383__severity = 0;
    std::string __Vfunc_uvm_report_enabled__383__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__384__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__385__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__386__Vfuncout;
    __Vtask_uvm_report_enabled__386__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__387__id;
    std::string __Vtask_uvm_report_error__387__message;
    IData/*31:0*/ __Vtask_uvm_report_error__387__verbosity;
    __Vtask_uvm_report_error__387__verbosity = 0;
    std::string __Vtask_uvm_report_error__387__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__387__line;
    __Vtask_uvm_report_error__387__line = 0;
    std::string __Vtask_uvm_report_error__387__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__387__report_enabled_checked;
    __Vtask_uvm_report_error__387__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__388__Vfuncout;
    std::string __Vfunc_get_full_name__389__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__390__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__391__Vfuncout;
    // Body
    {
        if ((VlNull{} == submap)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__375__id = "REG/NULL"s;
                            __Vfunc_uvm_report_enabled__375__severity = 2U;
                            __Vfunc_uvm_report_enabled__375__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__376__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__376__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__377__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__377__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__375__verbosity, (IData)(__Vfunc_uvm_report_enabled__375__severity), __Vfunc_uvm_report_enabled__375__id, __Vtask_uvm_report_enabled__378__Vfuncout);
                            __Vfunc_uvm_report_enabled__375__Vfuncout 
                                = __Vtask_uvm_report_enabled__378__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__375__Vfuncout))) {
                __Vtask_uvm_report_error__379__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__379__context_name = ""s;
                __Vtask_uvm_report_error__379__line = 0x00000578U;
                __Vtask_uvm_report_error__379__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__379__verbosity = 0U;
                __Vtask_uvm_report_error__379__message = "set_submap_offset: submap handle is null"s;
                __Vtask_uvm_report_error__379__id = "REG/NULL"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__380__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__380__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__381__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__381__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__379__id, __Vtask_uvm_report_error__379__message, __Vtask_uvm_report_error__379__verbosity, __Vtask_uvm_report_error__379__filename, __Vtask_uvm_report_error__379__line, __Vtask_uvm_report_error__379__context_name, (IData)(__Vtask_uvm_report_error__379__report_enabled_checked));
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        if ((! this->__PVT__m_submaps.exists(submap))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__383__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__383__severity = 2U;
                            __Vfunc_uvm_report_enabled__383__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__384__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__384__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__385__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__385__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__383__verbosity, (IData)(__Vfunc_uvm_report_enabled__383__severity), __Vfunc_uvm_report_enabled__383__id, __Vtask_uvm_report_enabled__386__Vfuncout);
                            __Vfunc_uvm_report_enabled__383__Vfuncout 
                                = __Vtask_uvm_report_enabled__386__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__383__Vfuncout))) {
                __Vtask_uvm_report_error__387__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__387__context_name = ""s;
                __Vtask_uvm_report_error__387__line = 0x0000057dU;
                __Vtask_uvm_report_error__387__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__387__verbosity = 0U;
                __Vtask_uvm_report_error__387__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(submap, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1405)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__388__Vfuncout);
                                        }(), __Vtask_get_full_name__388__Vfuncout)), "' is not a submap of '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__389__Vfuncout);
                                }(), __Vfunc_get_full_name__389__Vfuncout)), "'"s));
                __Vtask_uvm_report_error__387__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__390__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__390__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__391__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__391__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__387__id, __Vtask_uvm_report_error__387__message, __Vtask_uvm_report_error__387__verbosity, __Vtask_uvm_report_error__387__filename, __Vtask_uvm_report_error__387__line, __Vtask_uvm_report_error__387__context_name, (IData)(__Vtask_uvm_report_error__387__report_enabled_checked));
            }
            get_submap_offset__Vfuncrtn = 0xffffffffffffffffULL;
            goto __Vlabel0;
        }
        get_submap_offset__Vfuncrtn = this->__PVT__m_submaps
            .at(submap);
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_by_offset(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ read, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> &get_reg_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_reg_by_offset\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_locked__393__Vfuncout;
    __Vtask_is_locked__393__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__394__Vfuncout;
    __Vfunc_uvm_report_enabled__394__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__394__verbosity;
    __Vfunc_uvm_report_enabled__394__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__394__severity;
    __Vfunc_uvm_report_enabled__394__severity = 0;
    std::string __Vfunc_uvm_report_enabled__394__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__395__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__396__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__397__Vfuncout;
    __Vtask_uvm_report_enabled__397__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__398__id;
    std::string __Vtask_uvm_report_error__398__message;
    IData/*31:0*/ __Vtask_uvm_report_error__398__verbosity;
    __Vtask_uvm_report_error__398__verbosity = 0;
    std::string __Vtask_uvm_report_error__398__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__398__line;
    __Vtask_uvm_report_error__398__line = 0;
    std::string __Vtask_uvm_report_error__398__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__398__report_enabled_checked;
    __Vtask_uvm_report_error__398__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__399__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__400__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__401__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1416)
                      ->__VnoInFunc_is_locked(vlSymsp, __Vtask_is_locked__393__Vfuncout);
                        }(), (IData)(__Vtask_is_locked__393__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__394__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__394__severity = 2U;
                            __Vfunc_uvm_report_enabled__394__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__395__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__395__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__396__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__396__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__394__verbosity, (IData)(__Vfunc_uvm_report_enabled__394__severity), __Vfunc_uvm_report_enabled__394__id, __Vtask_uvm_report_enabled__397__Vfuncout);
                            __Vfunc_uvm_report_enabled__394__Vfuncout 
                                = __Vtask_uvm_report_enabled__397__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__394__Vfuncout))) {
                __Vtask_uvm_report_error__398__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__398__context_name = ""s;
                __Vtask_uvm_report_error__398__line = 0x00000589U;
                __Vtask_uvm_report_error__398__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__398__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1417)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__399__Vfuncout);
                    }(), __Vtask_get_full_name__399__Vfuncout);
                __Vtask_uvm_report_error__398__message 
                    = VL_SFORMATF_N_NX("Cannot get register by offset: Block %@ is not locked.",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__398__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__400__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__400__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__401__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__401__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__398__id, __Vtask_uvm_report_error__398__message, __Vtask_uvm_report_error__398__verbosity, __Vtask_uvm_report_error__398__filename, __Vtask_uvm_report_error__398__line, __Vtask_uvm_report_error__398__context_name, (IData)(__Vtask_uvm_report_error__398__report_enabled_checked));
            }
            get_reg_by_offset__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (((1U & (~ (IData)(read))) && this->__PVT__m_regs_by_offset_wo.exists(offset))) {
            get_reg_by_offset__Vfuncrtn = this->__PVT__m_regs_by_offset_wo
                .at(offset);
            goto __Vlabel0;
        }
        if (this->__PVT__m_regs_by_offset.exists(offset)) {
            get_reg_by_offset__Vfuncrtn = this->__PVT__m_regs_by_offset
                .at(offset);
            goto __Vlabel0;
        }
        get_reg_by_offset__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_by_offset(Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> &get_mem_by_offset__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_get_mem_by_offset\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_locked__403__Vfuncout;
    __Vtask_is_locked__403__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__404__Vfuncout;
    __Vfunc_uvm_report_enabled__404__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__404__verbosity;
    __Vfunc_uvm_report_enabled__404__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__404__severity;
    __Vfunc_uvm_report_enabled__404__severity = 0;
    std::string __Vfunc_uvm_report_enabled__404__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__405__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__406__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__407__Vfuncout;
    __Vtask_uvm_report_enabled__407__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__408__id;
    std::string __Vtask_uvm_report_error__408__message;
    IData/*31:0*/ __Vtask_uvm_report_error__408__verbosity;
    __Vtask_uvm_report_error__408__verbosity = 0;
    std::string __Vtask_uvm_report_error__408__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__408__line;
    __Vtask_uvm_report_error__408__line = 0;
    std::string __Vtask_uvm_report_error__408__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__408__report_enabled_checked;
    __Vtask_uvm_report_error__408__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__409__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__410__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__411__Vfuncout;
    std::string __Vtemp_1;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlWide<5>/*159:0*/ unnamedblk534__DOT__range;
    VL_ZERO_W(160, unnamedblk534__DOT__range);
    CData/*0:0*/ unnamedblk534__DOT__range__Vfirst;
    unnamedblk534__DOT__range__Vfirst = 0;
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1434)
                      ->__VnoInFunc_is_locked(vlSymsp, __Vtask_is_locked__403__Vfuncout);
                        }(), (IData)(__Vtask_is_locked__403__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__404__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__404__severity = 2U;
                            __Vfunc_uvm_report_enabled__404__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__405__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__405__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__406__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__406__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__404__verbosity, (IData)(__Vfunc_uvm_report_enabled__404__severity), __Vfunc_uvm_report_enabled__404__id, __Vtask_uvm_report_enabled__407__Vfuncout);
                            __Vfunc_uvm_report_enabled__404__Vfuncout 
                                = __Vtask_uvm_report_enabled__407__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__404__Vfuncout))) {
                __Vtask_uvm_report_error__408__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__408__context_name = ""s;
                __Vtask_uvm_report_error__408__line = 0x0000059bU;
                __Vtask_uvm_report_error__408__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_error__408__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1435)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__409__Vfuncout);
                    }(), __Vtask_get_full_name__409__Vfuncout);
                __Vtask_uvm_report_error__408__message 
                    = VL_SFORMATF_N_NX("Cannot memory register by offset: Block %@ is not locked.",0,
                                       -1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_error__408__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__410__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__410__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__411__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__411__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__408__id, __Vtask_uvm_report_error__408__message, __Vtask_uvm_report_error__408__verbosity, __Vtask_uvm_report_error__408__filename, __Vtask_uvm_report_error__408__line, __Vtask_uvm_report_error__408__context_name, (IData)(__Vtask_uvm_report_error__408__report_enabled_checked));
            }
            get_mem_by_offset__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((0U != this->__PVT__m_mems_by_offset.first(unnamedblk534__DOT__range))) {
            unnamedblk534__DOT__range__Vfirst = 1U;
            while (((IData)(unnamedblk534__DOT__range__Vfirst) 
                    || (0U != this->__PVT__m_mems_by_offset.next(unnamedblk534__DOT__range)))) {
                unnamedblk534__DOT__range__Vfirst = 0U;
                if ((((((QData)((IData)(unnamedblk534__DOT__range[4U])) 
                        << 0x00000020U) | (QData)((IData)(
                                                          unnamedblk534__DOT__range[3U]))) 
                      <= offset) & (offset <= (((QData)((IData)(
                                                                unnamedblk534__DOT__range[2U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 unnamedblk534__DOT__range[1U])))))) {
                    get_mem_by_offset__Vfuncrtn = this->__PVT__m_mems_by_offset
                        .at(unnamedblk534__DOT__range);
                    goto __Vlabel0;
                }
            }
        }
        get_mem_by_offset__Vfuncrtn = VlNull{};
        __Vlabel0: ;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xinit_address_mapX(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xinit_address_mapX\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_root_map__413__Vfuncout;
    std::string __Vtask_Xget_fields_accessX__415__Vfuncout;
    IData/*31:0*/ __Vfunc_get_physical_addresses__416__Vfuncout;
    __Vfunc_get_physical_addresses__416__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__417__Vfuncout;
    __Vtask_get_n_bytes__417__Vfuncout = 0;
    std::string __Vtask_Xget_fields_accessX__418__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__423__Vfuncout;
    __Vfunc_uvm_report_enabled__423__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__423__verbosity;
    __Vfunc_uvm_report_enabled__423__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__423__severity;
    __Vfunc_uvm_report_enabled__423__severity = 0;
    std::string __Vfunc_uvm_report_enabled__423__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__424__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__425__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__426__Vfuncout;
    __Vtask_uvm_report_enabled__426__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__427__id;
    std::string __Vtask_uvm_report_warning__427__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__427__verbosity;
    __Vtask_uvm_report_warning__427__verbosity = 0;
    std::string __Vtask_uvm_report_warning__427__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__427__line;
    __Vtask_uvm_report_warning__427__line = 0;
    std::string __Vtask_uvm_report_warning__427__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__427__report_enabled_checked;
    __Vtask_uvm_report_warning__427__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__428__Vfuncout;
    std::string __Vtask_get_full_name__429__Vfuncout;
    std::string __Vtask_get_full_name__430__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__431__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__432__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__434__Vfuncout;
    __Vfunc_uvm_report_enabled__434__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__434__verbosity;
    __Vfunc_uvm_report_enabled__434__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__434__severity;
    __Vfunc_uvm_report_enabled__434__severity = 0;
    std::string __Vfunc_uvm_report_enabled__434__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__435__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__436__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__437__Vfuncout;
    __Vtask_uvm_report_enabled__437__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__438__id;
    std::string __Vtask_uvm_report_warning__438__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__438__verbosity;
    __Vtask_uvm_report_warning__438__verbosity = 0;
    std::string __Vtask_uvm_report_warning__438__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__438__line;
    __Vtask_uvm_report_warning__438__line = 0;
    std::string __Vtask_uvm_report_warning__438__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__438__report_enabled_checked;
    __Vtask_uvm_report_warning__438__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__439__Vfuncout;
    std::string __Vtask_get_full_name__440__Vfuncout;
    std::string __Vtask_get_full_name__441__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__442__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__443__Vfuncout;
    IData/*31:0*/ __Vfunc_get_physical_addresses_to_map__445__Vfuncout;
    __Vfunc_get_physical_addresses_to_map__445__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__446__Vfuncout;
    __Vtask_get_n_bytes__446__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__447__Vfuncout;
    __Vtask_get_physical_addresses_to_map__447__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_size__448__Vfuncout;
    __Vtask_get_size__448__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__449__Vfuncout;
    __Vtask_get_n_bytes__449__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__450__Vfuncout;
    __Vtask_get_n_bytes__450__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__451__Vfuncout;
    __Vfunc_get_addr_unit_bytes__451__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__452__Vfuncout;
    __Vtask_get_n_bytes__452__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__453__Vfuncout;
    __Vfunc_get_addr_unit_bytes__453__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__454__Vfuncout;
    __Vfunc_uvm_report_enabled__454__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__454__verbosity;
    __Vfunc_uvm_report_enabled__454__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__454__severity;
    __Vfunc_uvm_report_enabled__454__severity = 0;
    std::string __Vfunc_uvm_report_enabled__454__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__455__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__456__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__457__Vfuncout;
    __Vtask_uvm_report_enabled__457__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__458__id;
    std::string __Vtask_uvm_report_warning__458__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__458__verbosity;
    __Vtask_uvm_report_warning__458__verbosity = 0;
    std::string __Vtask_uvm_report_warning__458__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__458__line;
    __Vtask_uvm_report_warning__458__line = 0;
    std::string __Vtask_uvm_report_warning__458__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__458__report_enabled_checked;
    __Vtask_uvm_report_warning__458__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__459__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bytes__460__Vfuncout;
    __Vfunc_get_n_bytes__460__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__461__Vfuncout;
    __Vfunc_get_addr_unit_bytes__461__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__462__Vfuncout;
    __Vtask_get_n_bytes__462__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__463__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__464__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__466__Vfuncout;
    __Vtask_get_n_bytes__466__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__467__Vfuncout;
    __Vfunc_get_addr_unit_bytes__467__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__468__Vfuncout;
    __Vtask_get_n_bytes__468__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__469__Vfuncout;
    __Vfunc_get_addr_unit_bytes__469__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__470__Vfuncout;
    __Vfunc_uvm_report_enabled__470__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__470__verbosity;
    __Vfunc_uvm_report_enabled__470__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__470__severity;
    __Vfunc_uvm_report_enabled__470__severity = 0;
    std::string __Vfunc_uvm_report_enabled__470__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__471__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__472__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__473__Vfuncout;
    __Vtask_uvm_report_enabled__473__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__474__id;
    std::string __Vtask_uvm_report_warning__474__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__474__verbosity;
    __Vtask_uvm_report_warning__474__verbosity = 0;
    std::string __Vtask_uvm_report_warning__474__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__474__line;
    __Vtask_uvm_report_warning__474__line = 0;
    std::string __Vtask_uvm_report_warning__474__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__474__report_enabled_checked;
    __Vtask_uvm_report_warning__474__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__475__Vfuncout;
    std::string __Vfunc_get_full_name__476__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__477__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__478__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bytes__480__Vfuncout;
    __Vtask_get_n_bytes__480__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__481__Vfuncout;
    __Vfunc_get_addr_unit_bytes__481__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__482__Vfuncout;
    __Vfunc_get_addr_unit_bytes__482__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__483__Vfuncout;
    __Vtask_get_n_bytes__483__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__484__Vfuncout;
    __Vfunc_uvm_report_enabled__484__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__484__verbosity;
    __Vfunc_uvm_report_enabled__484__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__484__severity;
    __Vfunc_uvm_report_enabled__484__severity = 0;
    std::string __Vfunc_uvm_report_enabled__484__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__485__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__486__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__487__Vfuncout;
    __Vtask_uvm_report_enabled__487__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__488__id;
    std::string __Vtask_uvm_report_warning__488__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__488__verbosity;
    __Vtask_uvm_report_warning__488__verbosity = 0;
    std::string __Vtask_uvm_report_warning__488__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__488__line;
    __Vtask_uvm_report_warning__488__line = 0;
    std::string __Vtask_uvm_report_warning__488__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__488__report_enabled_checked;
    __Vtask_uvm_report_warning__488__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__489__Vfuncout;
    std::string __Vfunc_get_full_name__490__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__491__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__492__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__494__Vfuncout;
    __Vtask_get_n_bits__494__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__495__Vfuncout;
    __Vfunc_uvm_report_enabled__495__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__495__verbosity;
    __Vfunc_uvm_report_enabled__495__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__495__severity;
    __Vfunc_uvm_report_enabled__495__severity = 0;
    std::string __Vfunc_uvm_report_enabled__495__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__496__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__497__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__498__Vfuncout;
    __Vtask_uvm_report_enabled__498__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__499__id;
    std::string __Vtask_uvm_report_warning__499__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__499__verbosity;
    __Vtask_uvm_report_warning__499__verbosity = 0;
    std::string __Vtask_uvm_report_warning__499__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__499__line;
    __Vtask_uvm_report_warning__499__line = 0;
    std::string __Vtask_uvm_report_warning__499__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__499__report_enabled_checked;
    __Vtask_uvm_report_warning__499__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__500__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__501__Vfuncout;
    __Vtask_get_n_bits__501__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__502__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__503__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__505__Vfuncout;
    __Vfunc_uvm_report_enabled__505__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__505__verbosity;
    __Vfunc_uvm_report_enabled__505__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__505__severity;
    __Vfunc_uvm_report_enabled__505__severity = 0;
    std::string __Vfunc_uvm_report_enabled__505__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__506__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__507__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__508__Vfuncout;
    __Vtask_uvm_report_enabled__508__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__509__id;
    std::string __Vtask_uvm_report_warning__509__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__509__verbosity;
    __Vtask_uvm_report_warning__509__verbosity = 0;
    std::string __Vtask_uvm_report_warning__509__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__509__line;
    __Vtask_uvm_report_warning__509__line = 0;
    std::string __Vtask_uvm_report_warning__509__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__509__report_enabled_checked;
    __Vtask_uvm_report_warning__509__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__510__Vfuncout;
    std::string __Vtask_get_full_name__511__Vfuncout;
    std::string __Vtask_get_full_name__512__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__513__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__514__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__516__Vfuncout;
    __Vfunc_uvm_report_enabled__516__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__516__verbosity;
    __Vfunc_uvm_report_enabled__516__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__516__severity;
    __Vfunc_uvm_report_enabled__516__severity = 0;
    std::string __Vfunc_uvm_report_enabled__516__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__517__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__518__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__519__Vfuncout;
    __Vtask_uvm_report_enabled__519__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__520__id;
    std::string __Vtask_uvm_report_warning__520__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__520__verbosity;
    __Vtask_uvm_report_warning__520__verbosity = 0;
    std::string __Vtask_uvm_report_warning__520__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__520__line;
    __Vtask_uvm_report_warning__520__line = 0;
    std::string __Vtask_uvm_report_warning__520__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__520__report_enabled_checked;
    __Vtask_uvm_report_warning__520__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__521__Vfuncout;
    std::string __Vtask_get_full_name__522__Vfuncout;
    std::string __Vtask_get_full_name__523__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__524__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__525__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk535__DOT__l;
    CData/*0:0*/ unnamedblk535__DOT__l__Vfirst;
    unnamedblk535__DOT__l__Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> unnamedblk535__DOT__unnamedblk536__DOT__map;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk537__DOT__rg_;
    CData/*0:0*/ unnamedblk537__DOT__rg___Vfirst;
    unnamedblk537__DOT__rg___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk537__DOT__unnamedblk538__DOT__rg;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc;
    VlQueue<QData/*63:0*/> unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs;
    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs.atDefault() = 0;
    IData/*31:0*/ unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i;
    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i = 0;
    QData/*63:0*/ unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr;
    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__unnamedblk543__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range;
    VL_ZERO_W(160, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range);
    CData/*0:0*/ unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst;
    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst = 0;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__a;
    std::string unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__b;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> unnamedblk546__DOT__mem_;
    CData/*0:0*/ unnamedblk546__DOT__mem___Vfirst;
    unnamedblk546__DOT__mem___Vfirst = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> unnamedblk546__DOT__unnamedblk547__DOT__mem;
    VlQueue<QData/*63:0*/> unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.atDefault() = 0;
    VlQueue<QData/*63:0*/> unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.atDefault() = 0;
    QData/*63:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min = 0;
    QData/*63:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max = 0;
    QData/*63:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min2;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min2 = 0;
    QData/*63:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max2;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max2 = 0;
    IData/*31:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__stride;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__stride = 0;
    IData/*31:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__bo;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__bo = 0;
    QData/*63:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr = 0;
    CData/*0:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst = 0;
    std::string unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range;
    VL_ZERO_W(160, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range);
    CData/*0:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst;
    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst = 0;
    std::string unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a;
    VlWide<5>/*159:0*/ unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range;
    VL_ZERO_W(160, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range);
    IData/*31:0*/ bus_width;
    bus_width = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> top_map;
    this->__VnoInFunc_get_root_map(vlSymsp, __Vfunc_get_root_map__413__Vfuncout);
    top_map = __Vfunc_get_root_map__413__Vfuncout;
    if ((VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this} 
         == top_map)) {
        VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1458)->__PVT__m_regs_by_offset.clear();
        VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1459)->__PVT__m_regs_by_offset_wo.clear();
        VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1460)->__PVT__m_mems_by_offset.clear();
    }
    if ((0U != this->__PVT__m_submaps.first(unnamedblk535__DOT__l))) {
        unnamedblk535__DOT__l__Vfirst = 1U;
        while (((IData)(unnamedblk535__DOT__l__Vfirst) 
                || (0U != this->__PVT__m_submaps.next(unnamedblk535__DOT__l)))) {
            unnamedblk535__DOT__l__Vfirst = 0U;
            unnamedblk535__DOT__unnamedblk536__DOT__map 
                = unnamedblk535__DOT__l;
            VL_NULL_CHECK(unnamedblk535__DOT__unnamedblk536__DOT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1465)->__VnoInFunc_Xinit_address_mapX(vlSymsp);
        }
    }
    if ((0U != this->__PVT__m_regs_info.first(unnamedblk537__DOT__rg_))) {
        unnamedblk537__DOT__rg___Vfirst = 1U;
        while (((IData)(unnamedblk537__DOT__rg___Vfirst) 
                || (0U != this->__PVT__m_regs_info.next(unnamedblk537__DOT__rg_)))) {
            unnamedblk537__DOT__rg___Vfirst = 0U;
            unnamedblk537__DOT__unnamedblk538__DOT__rg 
                = unnamedblk537__DOT__rg_;
            VL_NULL_CHECK(this->__PVT__m_regs_info.at(unnamedblk537__DOT__unnamedblk538__DOT__rg), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1470)->__PVT__is_initialized = 1U;
            if ((1U & (~ VL_NULL_CHECK(this->__PVT__m_regs_info
                                       .at(unnamedblk537__DOT__unnamedblk538__DOT__rg), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1471)
                       ->__PVT__unmapped))) {
                VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1472)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_Xget_fields_accessX__415__Vfuncout);
                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc 
                    = __Vtask_Xget_fields_accessX__415__Vfuncout;
                this->__VnoInFunc_get_physical_addresses(vlSymsp, VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                                .at(unnamedblk537__DOT__unnamedblk538__DOT__rg), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1475)
                                                         ->__PVT__offset, 0ULL, 
                                                         ([&]() {
                            VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1475)
                                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__417__Vfuncout);
                        }(), __Vtask_get_n_bytes__417__Vfuncout), unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs, __Vfunc_get_physical_addresses__416__Vfuncout);
                bus_width = __Vfunc_get_physical_addresses__416__Vfuncout;
                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs.size())) {
                    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                        = unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i);
                    if ((VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1480)
                         ->__PVT__m_regs_by_offset.exists(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                         && (VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1480)
                             ->__PVT__m_regs_by_offset
                             .at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                             != unnamedblk537__DOT__unnamedblk538__DOT__rg))) {
                        unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2 
                            = VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1482)
                            ->__PVT__m_regs_by_offset
                            .at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr);
                        VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1483)->__VnoInFunc_Xget_fields_accessX(vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_Xget_fields_accessX__418__Vfuncout);
                        unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc 
                            = __Vtask_Xget_fields_accessX__418__Vfuncout;
                        if ((("RO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc) 
                             & ("WO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc))) {
                            VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1488)->__PVT__m_regs_by_offset.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                                = unnamedblk537__DOT__unnamedblk538__DOT__rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk537__DOT__unnamedblk538__DOT__rg);
                            VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1490)->__PVT__m_regs_by_offset_wo.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                                = unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2);
                        } else if ((("WO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__rg_acc) 
                                    & ("RO"s == unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2_acc))) {
                            VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1494)->__PVT__m_regs_by_offset_wo.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                                = unnamedblk537__DOT__unnamedblk538__DOT__rg;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk537__DOT__unnamedblk538__DOT__rg);
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_read_only_cbs__Vclpkg.__VnoInFunc_add(vlSymsp, unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__rg2);
                        } else {
                            unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__unnamedblk543__DOT__a 
                                = VL_SFORMATF_N_NX("%0x",0,
                                                   64,
                                                   unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) ;
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__423__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__423__severity = 1U;
                                            __Vfunc_uvm_report_enabled__423__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__424__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__424__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__425__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__425__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__423__verbosity, (IData)(__Vfunc_uvm_report_enabled__423__severity), __Vfunc_uvm_report_enabled__423__id, __Vtask_uvm_report_enabled__426__Vfuncout);
                                            __Vfunc_uvm_report_enabled__423__Vfuncout 
                                                = __Vtask_uvm_report_enabled__426__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__423__Vfuncout))) {
                                __Vtask_uvm_report_warning__427__report_enabled_checked = 1U;
                                __Vtask_uvm_report_warning__427__context_name = ""s;
                                __Vtask_uvm_report_warning__427__line = 0x000005dfU;
                                __Vtask_uvm_report_warning__427__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__427__verbosity = 0U;
                                __Vtask_uvm_report_warning__427__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, 
                                                                                ([&]() {
                                                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__428__Vfuncout);
                                                                    }(), __Vfunc_get_full_name__428__Vfuncout)), "' register '"s), 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1503)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__429__Vfuncout);
                                                            }(), __Vtask_get_full_name__429__Vfuncout)), "' maps to same address as register '"s), 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1503)
                                                                      ->__PVT__m_regs_by_offset
                                                                      .at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1503)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__430__Vfuncout);
                                                    }(), __Vtask_get_full_name__430__Vfuncout)), "': 'h"s), unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk542__DOT__unnamedblk543__DOT__a));
                                __Vtask_uvm_report_warning__427__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__431__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__431__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__432__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__432__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__427__id, __Vtask_uvm_report_warning__427__message, __Vtask_uvm_report_warning__427__verbosity, __Vtask_uvm_report_warning__427__filename, __Vtask_uvm_report_warning__427__line, __Vtask_uvm_report_warning__427__context_name, (IData)(__Vtask_uvm_report_warning__427__report_enabled_checked));
                            }
                        }
                    } else {
                        VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1507)->__PVT__m_regs_by_offset.at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) 
                            = unnamedblk537__DOT__unnamedblk538__DOT__rg;
                    }
                    if ((0U != VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1509)
                         ->__PVT__m_mems_by_offset.first(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range))) {
                        unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst = 1U;
                        while (((IData)(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst) 
                                || (0U != VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1509)
                                    ->__PVT__m_mems_by_offset.next(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range)))) {
                            unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range__Vfirst = 0U;
                            if (((unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                                  >= (((QData)((IData)(
                                                       unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[4U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[3U])))) 
                                 & (unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr 
                                    <= (((QData)((IData)(
                                                         unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[2U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[1U])))))) {
                                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__a 
                                    = VL_SFORMATF_N_NX("%0x",0,
                                                       64,
                                                       unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__addr) ;
                                unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__b 
                                    = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                       64,
                                                       (((QData)((IData)(
                                                                         unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[4U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[3U]))),
                                                       64,
                                                       (((QData)((IData)(
                                                                         unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[2U])) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range[1U])))) ;
                                if ((0U != ([&]() {
                                                __Vfunc_uvm_report_enabled__434__id = "RegModel"s;
                                                __Vfunc_uvm_report_enabled__434__severity = 1U;
                                                __Vfunc_uvm_report_enabled__434__verbosity = 0U;
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__435__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                    = __Vfunc_get__435__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__436__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                    = __Vtask_get_root__436__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__434__verbosity, (IData)(__Vfunc_uvm_report_enabled__434__severity), __Vfunc_uvm_report_enabled__434__id, __Vtask_uvm_report_enabled__437__Vfuncout);
                                                __Vfunc_uvm_report_enabled__434__Vfuncout 
                                                    = __Vtask_uvm_report_enabled__437__Vfuncout;
                                            }(), __Vfunc_uvm_report_enabled__434__Vfuncout))) {
                                    __Vtask_uvm_report_warning__438__report_enabled_checked = 1U;
                                    __Vtask_uvm_report_warning__438__context_name = ""s;
                                    __Vtask_uvm_report_warning__438__line = 0x000005edU;
                                    __Vtask_uvm_report_warning__438__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                    __Vtask_uvm_report_warning__438__verbosity = 0U;
                                    __Vtask_uvm_report_warning__438__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, 
                                                                                ([&]() {
                                                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__439__Vfuncout);
                                                                                }(), __Vfunc_get_full_name__439__Vfuncout)), "' register '"s), 
                                                                                ([&]() {
                                                                            VL_NULL_CHECK(unnamedblk537__DOT__unnamedblk538__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1517)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__440__Vfuncout);
                                                                        }(), __Vtask_get_full_name__440__Vfuncout)), "' with address "s), unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__a), "maps to same address as memory '"s), 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1517)
                                                                          ->__PVT__m_mems_by_offset
                                                                          .at(unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__range), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1517)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__441__Vfuncout);
                                                        }(), __Vtask_get_full_name__441__Vfuncout)), "': "s), unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__unnamedblk541__DOT__unnamedblk544__DOT__unnamedblk545__DOT__b));
                                    __Vtask_uvm_report_warning__438__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__442__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                        = __Vfunc_get__442__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__443__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                        = __Vtask_get_root__443__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__438__id, __Vtask_uvm_report_warning__438__message, __Vtask_uvm_report_warning__438__verbosity, __Vtask_uvm_report_warning__438__filename, __Vtask_uvm_report_warning__438__line, __Vtask_uvm_report_warning__438__context_name, (IData)(__Vtask_uvm_report_warning__438__report_enabled_checked));
                                }
                            }
                        }
                    }
                    unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i 
                        = ((IData)(1U) + unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__unnamedblk540__DOT__i);
                }
                VL_NULL_CHECK(this->__PVT__m_regs_info
                              .at(unnamedblk537__DOT__unnamedblk538__DOT__rg), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1521)->__PVT__addr 
                    = unnamedblk537__DOT__unnamedblk538__DOT__unnamedblk539__DOT__addrs;
            }
        }
    }
    if ((0U != this->__PVT__m_mems_info.first(unnamedblk546__DOT__mem_))) {
        unnamedblk546__DOT__mem___Vfirst = 1U;
        while (((IData)(unnamedblk546__DOT__mem___Vfirst) 
                || (0U != this->__PVT__m_mems_info.next(unnamedblk546__DOT__mem_)))) {
            unnamedblk546__DOT__mem___Vfirst = 0U;
            unnamedblk546__DOT__unnamedblk547__DOT__mem 
                = unnamedblk546__DOT__mem_;
            if ((1U & (~ VL_NULL_CHECK(this->__PVT__m_mems_info
                                       .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1527)
                       ->__PVT__unmapped))) {
                this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                                .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1534)
                                                                ->__PVT__offset, 0ULL, 
                                                                ([&]() {
                            VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1534)
                                                                 ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__446__Vfuncout);
                        }(), __Vtask_get_n_bytes__446__Vfuncout), unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs, VlNull{}, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__bo, unnamedblk546__DOT__unnamedblk547__DOT__mem, __Vfunc_get_physical_addresses_to_map__445__Vfuncout);
                bus_width = __Vfunc_get_physical_addresses_to_map__445__Vfuncout;
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                    = ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(0U) 
                        < unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.size() 
                                                                                - (IData)(1U))))
                        ? unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(0U)
                        : unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs.size() 
                                                                                - (IData)(1U))));
                this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                                .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1540)
                                                                ->__PVT__offset, 
                                                                (([&]() {
                                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1540)
                                                                  ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__448__Vfuncout);
                            }(), __Vtask_get_size__448__Vfuncout) 
                                                                 - 1ULL), 
                                                                ([&]() {
                            VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1540)
                                                                 ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__449__Vfuncout);
                        }(), __Vtask_get_n_bytes__449__Vfuncout), unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max, VlNull{}, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__bo, unnamedblk546__DOT__unnamedblk547__DOT__mem, __Vtask_get_physical_addresses_to_map__447__Vfuncout);
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                    = ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(0U) 
                        > unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.size() 
                                                                                - (IData)(1U))))
                        ? unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(0U)
                        : unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.at(
                                                                                (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs_max.size() 
                                                                                - (IData)(1U))));
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__stride 
                    = VL_DIV_III(32, ([&]() {
                            VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1542)
                                      ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__450__Vfuncout);
                        }(), __Vtask_get_n_bytes__450__Vfuncout), 
                                 ([&]() {
                            this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__451__Vfuncout);
                        }(), __Vfunc_get_addr_unit_bytes__451__Vfuncout));
                if ((([&]() {
                                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1561)
                      ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__452__Vfuncout);
                            }(), __Vtask_get_n_bytes__452__Vfuncout) 
                     < ([&]() {
                                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__453__Vfuncout);
                            }(), __Vfunc_get_addr_unit_bytes__453__Vfuncout))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__454__id = "UVM/REG/ADDR"s;
                                    __Vfunc_uvm_report_enabled__454__severity = 1U;
                                    __Vfunc_uvm_report_enabled__454__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__455__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__455__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__456__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__456__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__454__verbosity, (IData)(__Vfunc_uvm_report_enabled__454__severity), __Vfunc_uvm_report_enabled__454__id, __Vtask_uvm_report_enabled__457__Vfuncout);
                                    __Vfunc_uvm_report_enabled__454__Vfuncout 
                                        = __Vtask_uvm_report_enabled__457__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__454__Vfuncout))) {
                        __Vtask_uvm_report_warning__458__report_enabled_checked = 1U;
                        __Vtask_uvm_report_warning__458__context_name = ""s;
                        __Vtask_uvm_report_warning__458__line = 0x0000061dU;
                        __Vtask_uvm_report_warning__458__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_warning__458__verbosity = 0U;
                        __Vtemp_1 = ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__459__Vfuncout);
                            }(), __Vfunc_get_full_name__459__Vfuncout);
                        __Vtask_uvm_report_warning__458__message 
                            = VL_SFORMATF_N_NX("this version of UVM does not properly support memories with \na smaller word width than the enclosing map. map %@ has n_bytes=%0# aub=%0# while the mem has get_n_bytes %0#. \nmultiple memory words fall into one bus address. if that happens memory addressing will be unpacked.",0,
                                               -1,&(__Vtemp_1),
                                               32,([&]() {
                                        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__460__Vfuncout);
                                    }(), __Vfunc_get_n_bytes__460__Vfuncout),
                                               32,([&]() {
                                        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__461__Vfuncout);
                                    }(), __Vfunc_get_addr_unit_bytes__461__Vfuncout),
                                               32,([&]() {
                                        VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1567)
                                                   ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__462__Vfuncout);
                                    }(), __Vtask_get_n_bytes__462__Vfuncout)) ;
                        __Vtask_uvm_report_warning__458__id = "UVM/REG/ADDR"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__463__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__463__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__464__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__464__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__458__id, __Vtask_uvm_report_warning__458__message, __Vtask_uvm_report_warning__458__verbosity, __Vtask_uvm_report_warning__458__filename, __Vtask_uvm_report_warning__458__line, __Vtask_uvm_report_warning__458__context_name, (IData)(__Vtask_uvm_report_warning__458__report_enabled_checked));
                    }
                }
                if ((([&]() {
                                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1567)
                      ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__466__Vfuncout);
                            }(), __Vtask_get_n_bytes__466__Vfuncout) 
                     > ([&]() {
                                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__467__Vfuncout);
                            }(), __Vfunc_get_addr_unit_bytes__467__Vfuncout))) {
                    if ((0U != VL_MODDIV_III(32, ([&]() {
                                        VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1568)
                                                  ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__468__Vfuncout);
                                    }(), __Vtask_get_n_bytes__468__Vfuncout), 
                                             ([&]() {
                                        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__469__Vfuncout);
                                    }(), __Vfunc_get_addr_unit_bytes__469__Vfuncout)))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__470__id = "UVM/REG/ADDR"s;
                                        __Vfunc_uvm_report_enabled__470__severity = 1U;
                                        __Vfunc_uvm_report_enabled__470__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__471__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__471__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__472__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__472__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__470__verbosity, (IData)(__Vfunc_uvm_report_enabled__470__severity), __Vfunc_uvm_report_enabled__470__id, __Vtask_uvm_report_enabled__473__Vfuncout);
                                        __Vfunc_uvm_report_enabled__470__Vfuncout 
                                            = __Vtask_uvm_report_enabled__473__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__470__Vfuncout))) {
                            __Vtask_uvm_report_warning__474__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__474__context_name = ""s;
                            __Vtask_uvm_report_warning__474__line = 0x00000623U;
                            __Vtask_uvm_report_warning__474__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__474__verbosity = 0U;
                            __Vtemp_2 = ([&]() {
                                    VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1572)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__475__Vfuncout);
                                }(), __Vtask_get_full_name__475__Vfuncout);
                            __Vtemp_3 = ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__476__Vfuncout);
                                }(), __Vfunc_get_full_name__476__Vfuncout);
                            __Vtask_uvm_report_warning__474__message 
                                = VL_SFORMATF_N_NX("memory %@ is not matching the word width of the enclosing map %@  \n(one memory word not fitting into k map addresses)",0,
                                                   -1,
                                                   &(__Vtemp_2),
                                                   -1,
                                                   &(__Vtemp_3)) ;
                            __Vtask_uvm_report_warning__474__id = "UVM/REG/ADDR"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__477__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__477__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__478__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__478__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__474__id, __Vtask_uvm_report_warning__474__message, __Vtask_uvm_report_warning__474__verbosity, __Vtask_uvm_report_warning__474__filename, __Vtask_uvm_report_warning__474__line, __Vtask_uvm_report_warning__474__context_name, (IData)(__Vtask_uvm_report_warning__474__report_enabled_checked));
                        }
                    }
                }
                if ((([&]() {
                                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1574)
                      ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__480__Vfuncout);
                            }(), __Vtask_get_n_bytes__480__Vfuncout) 
                     < ([&]() {
                                this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__481__Vfuncout);
                            }(), __Vfunc_get_addr_unit_bytes__481__Vfuncout))) {
                    if ((0U != VL_MODDIV_III(32, ([&]() {
                                        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__482__Vfuncout);
                                    }(), __Vfunc_get_addr_unit_bytes__482__Vfuncout), 
                                             ([&]() {
                                        VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1575)
                                              ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__483__Vfuncout);
                                    }(), __Vtask_get_n_bytes__483__Vfuncout)))) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__484__id = "UVM/REG/ADDR"s;
                                        __Vfunc_uvm_report_enabled__484__severity = 1U;
                                        __Vfunc_uvm_report_enabled__484__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__485__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__485__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__486__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__486__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__484__verbosity, (IData)(__Vfunc_uvm_report_enabled__484__severity), __Vfunc_uvm_report_enabled__484__id, __Vtask_uvm_report_enabled__487__Vfuncout);
                                        __Vfunc_uvm_report_enabled__484__Vfuncout 
                                            = __Vtask_uvm_report_enabled__487__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__484__Vfuncout))) {
                            __Vtask_uvm_report_warning__488__report_enabled_checked = 1U;
                            __Vtask_uvm_report_warning__488__context_name = ""s;
                            __Vtask_uvm_report_warning__488__line = 0x0000062aU;
                            __Vtask_uvm_report_warning__488__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                            __Vtask_uvm_report_warning__488__verbosity = 0U;
                            __Vtemp_4 = ([&]() {
                                    VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1579)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__489__Vfuncout);
                                }(), __Vtask_get_full_name__489__Vfuncout);
                            __Vtemp_5 = ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__490__Vfuncout);
                                }(), __Vfunc_get_full_name__490__Vfuncout);
                            __Vtask_uvm_report_warning__488__message 
                                = VL_SFORMATF_N_NX("the memory %@ is not matching the word width of the enclosing map %@  \n(one map address doesnt cover k memory words)",0,
                                                   -1,
                                                   &(__Vtemp_4),
                                                   -1,
                                                   &(__Vtemp_5)) ;
                            __Vtask_uvm_report_warning__488__id = "UVM/REG/ADDR"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__491__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                = __Vfunc_get__491__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__492__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                = __Vtask_get_root__492__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__488__id, __Vtask_uvm_report_warning__488__message, __Vtask_uvm_report_warning__488__verbosity, __Vtask_uvm_report_warning__488__filename, __Vtask_uvm_report_warning__488__line, __Vtask_uvm_report_warning__488__context_name, (IData)(__Vtask_uvm_report_warning__488__report_enabled_checked));
                        }
                    }
                }
                if ((0U != (7U & ([&]() {
                                    VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1580)
                                  ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__494__Vfuncout);
                                }(), __Vtask_get_n_bits__494__Vfuncout)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__495__id = "UVM/REG/ADDR"s;
                                    __Vfunc_uvm_report_enabled__495__severity = 1U;
                                    __Vfunc_uvm_report_enabled__495__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__496__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__496__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__497__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__497__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__495__verbosity, (IData)(__Vfunc_uvm_report_enabled__495__severity), __Vfunc_uvm_report_enabled__495__id, __Vtask_uvm_report_enabled__498__Vfuncout);
                                    __Vfunc_uvm_report_enabled__495__Vfuncout 
                                        = __Vtask_uvm_report_enabled__498__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__495__Vfuncout))) {
                        __Vtask_uvm_report_warning__499__report_enabled_checked = 1U;
                        __Vtask_uvm_report_warning__499__context_name = ""s;
                        __Vtask_uvm_report_warning__499__line = 0x0000062eU;
                        __Vtask_uvm_report_warning__499__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                        __Vtask_uvm_report_warning__499__verbosity = 0U;
                        __Vtemp_6 = ([&]() {
                                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1583)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__500__Vfuncout);
                            }(), __Vtask_get_full_name__500__Vfuncout);
                        __Vtask_uvm_report_warning__499__message 
                            = VL_SFORMATF_N_NX("this implementation of UVM requires memory words to be k*8 bits (mem %@ \nhas %0# bit words)",0,
                                               -1,&(__Vtemp_6),
                                               32,([&]() {
                                        VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1583)
                                                   ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__501__Vfuncout);
                                    }(), __Vtask_get_n_bits__501__Vfuncout)) ;
                        __Vtask_uvm_report_warning__499__id = "UVM/REG/ADDR"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__502__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                            = __Vfunc_get__502__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__503__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                            = __Vtask_get_root__503__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__499__id, __Vtask_uvm_report_warning__499__message, __Vtask_uvm_report_warning__499__verbosity, __Vtask_uvm_report_warning__499__filename, __Vtask_uvm_report_warning__499__line, __Vtask_uvm_report_warning__499__context_name, (IData)(__Vtask_uvm_report_warning__499__report_enabled_checked));
                    }
                }
                if ((0U != VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1584)
                     ->__PVT__m_regs_by_offset.first(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr))) {
                    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst = 1U;
                    while (((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst) 
                            || (0U != VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1584)
                                ->__PVT__m_regs_by_offset.next(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr)))) {
                        unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr__Vfirst = 0U;
                        if (((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr 
                              >= unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min) 
                             & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr 
                                <= unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max))) {
                            unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a 
                                = VL_SFORMATF_N_NX("%0x",0,
                                                   64,
                                                   unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr) ;
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__505__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__505__severity = 1U;
                                            __Vfunc_uvm_report_enabled__505__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__506__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__506__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__507__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__507__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__505__verbosity, (IData)(__Vfunc_uvm_report_enabled__505__severity), __Vfunc_uvm_report_enabled__505__id, __Vtask_uvm_report_enabled__508__Vfuncout);
                                            __Vfunc_uvm_report_enabled__505__Vfuncout 
                                                = __Vtask_uvm_report_enabled__508__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__505__Vfuncout))) {
                                __Vtask_uvm_report_warning__509__report_enabled_checked = 1U;
                                __Vtask_uvm_report_warning__509__context_name = ""s;
                                __Vtask_uvm_report_warning__509__line = 0x00000636U;
                                __Vtask_uvm_report_warning__509__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                __Vtask_uvm_report_warning__509__verbosity = 0U;
                                __Vtask_uvm_report_warning__509__message 
                                    = VL_CVT_PACK_STR_NN(
                                                         VL_CONCATN_NNN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, 
                                                                                ([&]() {
                                                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__510__Vfuncout);
                                                                    }(), __Vfunc_get_full_name__510__Vfuncout)), "' memory '"s), 
                                                                                ([&]() {
                                                                VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1590)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__511__Vfuncout);
                                                            }(), __Vtask_get_full_name__511__Vfuncout)), "' maps to same address as register '"s), 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1590)
                                                                      ->__PVT__m_regs_by_offset
                                                                      .at(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__reg_addr), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1590)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__512__Vfuncout);
                                                    }(), __Vtask_get_full_name__512__Vfuncout)), "': 'h"s), unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk549__DOT__unnamedblk550__DOT__a));
                                __Vtask_uvm_report_warning__509__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__513__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__513__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__514__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__514__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__509__id, __Vtask_uvm_report_warning__509__message, __Vtask_uvm_report_warning__509__verbosity, __Vtask_uvm_report_warning__509__filename, __Vtask_uvm_report_warning__509__line, __Vtask_uvm_report_warning__509__context_name, (IData)(__Vtask_uvm_report_warning__509__report_enabled_checked));
                            }
                        }
                    }
                }
                if ((0U != VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1594)
                     ->__PVT__m_mems_by_offset.first(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range))) {
                    unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst = 1U;
                    while (((IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst) 
                            || (0U != VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1594)
                                ->__PVT__m_mems_by_offset.next(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range)))) {
                        unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range__Vfirst = 0U;
                        if (((((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                                <= (((QData)((IData)(
                                                     unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(
                                                      unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U])))) 
                               & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                                  >= (((QData)((IData)(
                                                       unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U]))))) 
                              | ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                                  <= (((QData)((IData)(
                                                       unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                       << 0x00000020U) 
                                      | (QData)((IData)(
                                                        unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))) 
                                 & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                                    >= (((QData)((IData)(
                                                         unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))))) 
                             | ((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                                 >= (((QData)((IData)(
                                                      unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[4U])) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[3U])))) 
                                & (unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                                   <= (((QData)((IData)(
                                                        unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[2U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range[1U]))))))) {
                            if ((VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1598)
                                 ->__PVT__m_mems_by_offset
                                 .at(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range) 
                                 != unnamedblk546__DOT__unnamedblk547__DOT__mem)) {
                                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a 
                                    = VL_SFORMATF_N_NX("[%0x:%0x]",0,
                                                       64,
                                                       unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min,
                                                       64,
                                                       unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max) ;
                                if ((0U != ([&]() {
                                                __Vfunc_uvm_report_enabled__516__id = "RegModel"s;
                                                __Vfunc_uvm_report_enabled__516__severity = 1U;
                                                __Vfunc_uvm_report_enabled__516__verbosity = 0U;
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__517__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                    = __Vfunc_get__517__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__518__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                    = __Vtask_get_root__518__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__516__verbosity, (IData)(__Vfunc_uvm_report_enabled__516__severity), __Vfunc_uvm_report_enabled__516__id, __Vtask_uvm_report_enabled__519__Vfuncout);
                                                __Vfunc_uvm_report_enabled__516__Vfuncout 
                                                    = __Vtask_uvm_report_enabled__519__Vfuncout;
                                            }(), __Vfunc_uvm_report_enabled__516__Vfuncout))) {
                                    __Vtask_uvm_report_warning__520__report_enabled_checked = 1U;
                                    __Vtask_uvm_report_warning__520__context_name = ""s;
                                    __Vtask_uvm_report_warning__520__line = 0x00000644U;
                                    __Vtask_uvm_report_warning__520__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                                    __Vtask_uvm_report_warning__520__verbosity = 0U;
                                    __Vtask_uvm_report_warning__520__message 
                                        = VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("In map '"s, 
                                                                                ([&]() {
                                                                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__521__Vfuncout);
                                                                        }(), __Vfunc_get_full_name__521__Vfuncout)), "' memory '"s), 
                                                                                ([&]() {
                                                                    VL_NULL_CHECK(unnamedblk546__DOT__unnamedblk547__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1604)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__522__Vfuncout);
                                                                }(), __Vtask_get_full_name__522__Vfuncout)), "' overlaps with address range of memory '"s), 
                                                                                ([&]() {
                                                            VL_NULL_CHECK(VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1604)
                                                                          ->__PVT__m_mems_by_offset
                                                                          .at(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__range), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1604)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__523__Vfuncout);
                                                        }(), __Vtask_get_full_name__523__Vfuncout)), "': 'h"s), unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk551__DOT__unnamedblk552__DOT__a));
                                    __Vtask_uvm_report_warning__520__id = "RegModel"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__524__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                        = __Vfunc_get__524__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__525__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                        = __Vtask_get_root__525__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__520__id, __Vtask_uvm_report_warning__520__message, __Vtask_uvm_report_warning__520__verbosity, __Vtask_uvm_report_warning__520__filename, __Vtask_uvm_report_warning__520__line, __Vtask_uvm_report_warning__520__context_name, (IData)(__Vtask_uvm_report_warning__520__report_enabled_checked));
                                }
                            }
                        }
                    }
                }
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[0U] 
                    = unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__stride;
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[1U] 
                    = (IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max);
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[2U] 
                    = (IData)((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__max 
                               >> 0x00000020U));
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[3U] 
                    = (IData)(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min);
                unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range[4U] 
                    = (IData)((unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__min 
                               >> 0x00000020U));
                VL_NULL_CHECK(top_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1610)->__PVT__m_mems_by_offset.at(unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range) 
                    = unnamedblk546__DOT__unnamedblk547__DOT__mem;
                VL_NULL_CHECK(this->__PVT__m_mems_info
                              .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1611)->__PVT__addr 
                    = unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__addrs;
                VL_ASSIGN_W(160, VL_NULL_CHECK(this->__PVT__m_mems_info
                                               .at(unnamedblk546__DOT__unnamedblk547__DOT__mem), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1612)
                            ->__PVT__mem_range, unnamedblk546__DOT__unnamedblk547__DOT__unnamedblk548__DOT__unnamedblk553__DOT__range);
            }
        }
    }
    if ((0U == bus_width)) {
        bus_width = this->__PVT__m_n_bytes;
    }
    this->__PVT__m_system_n_bytes = bus_width;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, IData/*31:0*/ &size, IData/*31:0*/ &lsb, IData/*31:0*/ &addr_skip) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_Xget_bus_infoX\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__527__Vfuncout;
    __Vfunc_uvm_report_enabled__527__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__527__verbosity;
    __Vfunc_uvm_report_enabled__527__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__527__severity;
    __Vfunc_uvm_report_enabled__527__severity = 0;
    std::string __Vfunc_uvm_report_enabled__527__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__528__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__529__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__530__Vfuncout;
    __Vtask_uvm_report_enabled__530__Vfuncout = 0;
    std::string __Vtask_get_name__532__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_get_mem_map_info__533__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__534__Vfuncout;
    __Vtask_get_n_bits__534__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__535__Vfuncout;
    __Vfunc_uvm_report_enabled__535__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__535__verbosity;
    __Vfunc_uvm_report_enabled__535__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__535__severity;
    __Vfunc_uvm_report_enabled__535__severity = 0;
    std::string __Vfunc_uvm_report_enabled__535__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__536__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__537__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__538__Vfuncout;
    __Vtask_uvm_report_enabled__538__Vfuncout = 0;
    std::string __Vtask_get_name__540__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_get_reg_map_info__541__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__542__Vfuncout;
    __Vtask_get_n_bits__542__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__543__Vfuncout;
    __Vfunc_uvm_report_enabled__543__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__543__verbosity;
    __Vfunc_uvm_report_enabled__543__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__543__severity;
    __Vfunc_uvm_report_enabled__543__severity = 0;
    std::string __Vfunc_uvm_report_enabled__543__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__544__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__545__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__546__Vfuncout;
    __Vtask_uvm_report_enabled__546__Vfuncout = 0;
    std::string __Vtask_get_name__548__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> __Vfunc_get_reg_map_info__549__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> __Vtask_get_parent__550__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__551__Vfuncout;
    __Vtask_get_n_bits__551__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__552__Vfuncout;
    __Vtask_get_lsb_pos__552__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bytes__553__Vfuncout;
    __Vfunc_get_n_bytes__553__Vfuncout = 0;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> unnamedblk554__DOT__mem;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk555__DOT__rg;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk556__DOT__field;
    if ((2U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1635)
         ->__PVT__element_kind)) {
        if (((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1637)
              ->__PVT__element) || (! VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1637)
                                                      ->__PVT__element, unnamedblk554__DOT__mem)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__527__id = "REG/CAST"s;
                            __Vfunc_uvm_report_enabled__527__severity = 3U;
                            __Vfunc_uvm_report_enabled__527__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__528__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__528__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__529__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__529__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__527__verbosity, (IData)(__Vfunc_uvm_report_enabled__527__severity), __Vfunc_uvm_report_enabled__527__id, __Vtask_uvm_report_enabled__530__Vfuncout);
                            __Vfunc_uvm_report_enabled__527__Vfuncout 
                                = __Vtask_uvm_report_enabled__530__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__527__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_MEM, but 'element' does not point to a memory: "s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1639)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__532__Vfuncout);
                                }(), __Vtask_get_name__532__Vfuncout))), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x00000667U, ""s, 1U);
            }
        }
        this->__VnoInFunc_get_mem_map_info(vlProcess, vlSymsp, unnamedblk554__DOT__mem, 1U, __Vfunc_get_mem_map_info__533__Vfuncout);
        map_info = __Vfunc_get_mem_map_info__533__Vfuncout;
        VL_NULL_CHECK(unnamedblk554__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1641)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__534__Vfuncout);
        size = __Vtask_get_n_bits__534__Vfuncout;
    } else if ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1643)
                ->__PVT__element_kind)) {
        if (((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1645)
              ->__PVT__element) || (! VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1645)
                                                      ->__PVT__element, unnamedblk555__DOT__rg)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__535__id = "REG/CAST"s;
                            __Vfunc_uvm_report_enabled__535__severity = 3U;
                            __Vfunc_uvm_report_enabled__535__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__536__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__536__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__537__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__537__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__535__verbosity, (IData)(__Vfunc_uvm_report_enabled__535__severity), __Vfunc_uvm_report_enabled__535__id, __Vtask_uvm_report_enabled__538__Vfuncout);
                            __Vfunc_uvm_report_enabled__535__Vfuncout 
                                = __Vtask_uvm_report_enabled__538__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__535__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_REG, but 'element' does not point to a register: "s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1647)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__540__Vfuncout);
                                }(), __Vtask_get_name__540__Vfuncout))), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x0000066fU, ""s, 1U);
            }
        }
        this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, unnamedblk555__DOT__rg, 1U, __Vfunc_get_reg_map_info__541__Vfuncout);
        map_info = __Vfunc_get_reg_map_info__541__Vfuncout;
        VL_NULL_CHECK(unnamedblk555__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1649)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__542__Vfuncout);
        size = __Vtask_get_n_bits__542__Vfuncout;
    } else if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1651)
                ->__PVT__element_kind)) {
        if (((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1653)
              ->__PVT__element) || (! VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1653)
                                                      ->__PVT__element, unnamedblk556__DOT__field)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__543__id = "REG/CAST"s;
                            __Vfunc_uvm_report_enabled__543__severity = 3U;
                            __Vfunc_uvm_report_enabled__543__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__544__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__544__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__545__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__545__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__543__verbosity, (IData)(__Vfunc_uvm_report_enabled__543__severity), __Vfunc_uvm_report_enabled__543__id, __Vtask_uvm_report_enabled__546__Vfuncout);
                            __Vfunc_uvm_report_enabled__543__Vfuncout 
                                = __Vtask_uvm_report_enabled__546__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__543__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg_item 'element_kind' is UVM_FIELD, but 'element' does not point to a field: "s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1655)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__548__Vfuncout);
                                }(), __Vtask_get_name__548__Vfuncout))), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x00000677U, ""s, 1U);
            }
        }
        this->__VnoInFunc_get_reg_map_info(vlProcess, vlSymsp, 
                                           ([&]() {
                    VL_NULL_CHECK(unnamedblk556__DOT__field, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1656)
                                            ->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__550__Vfuncout);
                }(), __Vtask_get_parent__550__Vfuncout), 1U, __Vfunc_get_reg_map_info__549__Vfuncout);
        map_info = __Vfunc_get_reg_map_info__549__Vfuncout;
        VL_NULL_CHECK(unnamedblk556__DOT__field, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1657)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__551__Vfuncout);
        size = __Vtask_get_n_bits__551__Vfuncout;
        VL_NULL_CHECK(unnamedblk556__DOT__field, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1658)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__552__Vfuncout);
        lsb = __Vtask_get_lsb_pos__552__Vfuncout;
        addr_skip = VL_DIV_III(32, lsb, VL_SHIFTL_III(32,32,32, 
                                                      ([&]() {
                        this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vfunc_get_n_bytes__553__Vfuncout);
                    }(), __Vfunc_get_n_bytes__553__Vfuncout), 3U));
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_write\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_root_map__554__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> __Vtask_get_adapter__555__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__556__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> __Vtask_clone__557__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__558__Vfuncout;
    __Vfunc_uvm_report_enabled__558__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__558__verbosity;
    __Vfunc_uvm_report_enabled__558__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__558__severity;
    __Vfunc_uvm_report_enabled__558__severity = 0;
    std::string __Vfunc_uvm_report_enabled__558__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__559__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__560__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__561__Vfuncout;
    __Vtask_uvm_report_enabled__561__Vfuncout = 0;
    std::string __Vtask_get_full_name__563__Vfuncout;
    std::string __Vtask_get_type_name__564__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__565__Vfuncout;
    __Vfunc_uvm_report_enabled__565__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__565__verbosity;
    __Vfunc_uvm_report_enabled__565__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__565__severity;
    __Vfunc_uvm_report_enabled__565__severity = 0;
    std::string __Vfunc_uvm_report_enabled__565__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__566__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__567__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__568__Vfuncout;
    __Vtask_uvm_report_enabled__568__Vfuncout = 0;
    std::string __Vtask_get_full_name__570__Vfuncout;
    std::string __Vtask_get_type_name__571__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_string_pool__Tz18> __Vtask_get_event_pool__574__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_event_> __Vtask_get__575__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> unnamedblk557__DOT__o;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk557__DOT__seq;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_event_> unnamedblk558__DOT__end_event;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_string_pool__Tz18> unnamedblk558__DOT__ep;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    this->__VnoInFunc_get_root_map(vlSymsp, __Vfunc_get_root_map__554__Vfuncout);
    system_map = __Vfunc_get_root_map__554__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    VL_NULL_CHECK(system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1672)->__VnoInFunc_get_adapter(vlSymsp, 1U, __Vtask_get_adapter__555__Vfuncout);
    adapter = __Vtask_get_adapter__555__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    VL_NULL_CHECK(system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1673)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vtask_get_sequencer__556__Vfuncout);
    sequencer = __Vtask_get_sequencer__556__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_seq_base> parent_proxy;
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1676)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1679)
                      ->__PVT__parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1679)->__VnoInFunc_clone(vlProcess, vlSymsp, __Vtask_clone__557__Vfuncout);
        unnamedblk557__DOT__o = __Vtask_clone__557__Vfuncout;
        if ((VlNull{} == unnamedblk557__DOT__o)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__558__id = "REG/CLONE"s;
                            __Vfunc_uvm_report_enabled__558__severity = 3U;
                            __Vfunc_uvm_report_enabled__558__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__559__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__559__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__560__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__560__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__558__verbosity, (IData)(__Vfunc_uvm_report_enabled__558__severity), __Vfunc_uvm_report_enabled__558__id, __Vtask_uvm_report_enabled__561__Vfuncout);
                            __Vfunc_uvm_report_enabled__558__Vfuncout 
                                = __Vtask_uvm_report_enabled__561__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__558__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CLONE"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to clone adapter's parent sequence: '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1686)
                                                              ->__PVT__parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1686)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__563__Vfuncout);
                                            }(), __Vtask_get_full_name__563__Vfuncout)), "' (of type '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1686)
                                                      ->__PVT__parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1686)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__564__Vfuncout);
                                    }(), __Vtask_get_type_name__564__Vfuncout)), "')"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x00000696U, ""s, 1U);
            }
        }
        if ((! VL_CAST_DYNAMIC(unnamedblk557__DOT__o, unnamedblk557__DOT__seq))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__565__id = "REG/CAST"s;
                            __Vfunc_uvm_report_enabled__565__severity = 3U;
                            __Vfunc_uvm_report_enabled__565__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__566__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__566__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__567__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__567__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__565__verbosity, (IData)(__Vfunc_uvm_report_enabled__565__severity), __Vfunc_uvm_report_enabled__565__id, __Vtask_uvm_report_enabled__568__Vfuncout);
                            __Vfunc_uvm_report_enabled__565__Vfuncout 
                                = __Vtask_uvm_report_enabled__568__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__565__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to cast: '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(unnamedblk557__DOT__o, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1693)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__570__Vfuncout);
                                            }(), __Vtask_get_full_name__570__Vfuncout)), "' (of type '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(unnamedblk557__DOT__o, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1693)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__571__Vfuncout);
                                    }(), __Vtask_get_type_name__571__Vfuncout)), "') to uvm_sequence_base!"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x0000069dU, ""s, 1U);
            }
        }
        VL_NULL_CHECK(unnamedblk557__DOT__seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1694)->__VnoInFunc_set_parent_sequence(vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1694)
                                                                                ->__PVT__parent);
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1695)->__PVT__parent 
            = unnamedblk557__DOT__seq;
        tmp_parent_seq = unnamedblk557__DOT__seq;
    }
    if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1699)
         ->__PVT__parent)) {
        parent_proxy = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1701)->__PVT__parent 
            = parent_proxy;
        tmp_parent_seq = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1702)
            ->__PVT__parent;
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1708)->__VnoInFunc_get_event_pool(vlSymsp, __Vtask_get_event_pool__574__Vfuncout);
        unnamedblk558__DOT__ep = __Vtask_get_event_pool__574__Vfuncout;
        VL_NULL_CHECK(unnamedblk558__DOT__ep, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1709)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, __Vtask_get__575__Vfuncout);
        unnamedblk558__DOT__end_event = __Vtask_get__575__Vfuncout;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1710)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1711)
                               ->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1711)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1711)
                                                                                ->__PVT__prior, VlNull{});
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1712)
                               ->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1712)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(unnamedblk558__DOT__end_event, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1713)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
    } else {
        co_await this->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, sequencer, adapter);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1720)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_read\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_root_map__582__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> __Vtask_get_adapter__583__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__584__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> __Vtask_clone__585__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__586__Vfuncout;
    __Vfunc_uvm_report_enabled__586__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__586__verbosity;
    __Vfunc_uvm_report_enabled__586__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__586__severity;
    __Vfunc_uvm_report_enabled__586__severity = 0;
    std::string __Vfunc_uvm_report_enabled__586__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__587__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__588__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__589__Vfuncout;
    __Vtask_uvm_report_enabled__589__Vfuncout = 0;
    std::string __Vtask_get_full_name__591__Vfuncout;
    std::string __Vtask_get_type_name__592__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__593__Vfuncout;
    __Vfunc_uvm_report_enabled__593__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__593__verbosity;
    __Vfunc_uvm_report_enabled__593__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__593__severity;
    __Vfunc_uvm_report_enabled__593__severity = 0;
    std::string __Vfunc_uvm_report_enabled__593__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__594__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__595__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__596__Vfuncout;
    __Vtask_uvm_report_enabled__596__Vfuncout = 0;
    std::string __Vtask_get_full_name__598__Vfuncout;
    std::string __Vtask_get_type_name__599__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_string_pool__Tz18> __Vtask_get_event_pool__602__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_event_> __Vtask_get__603__Vfuncout;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> unnamedblk559__DOT__o;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> unnamedblk559__DOT__seq;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_event_> unnamedblk560__DOT__end_event;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_string_pool__Tz18> unnamedblk560__DOT__ep;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_base> tmp_parent_seq;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    this->__VnoInFunc_get_root_map(vlSymsp, __Vfunc_get_root_map__582__Vfuncout);
    system_map = __Vfunc_get_root_map__582__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> adapter;
    VL_NULL_CHECK(system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1731)->__VnoInFunc_get_adapter(vlSymsp, 1U, __Vtask_get_adapter__583__Vfuncout);
    adapter = __Vtask_get_adapter__583__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    VL_NULL_CHECK(system_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1732)->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vtask_get_sequencer__584__Vfuncout);
    sequencer = __Vtask_get_sequencer__584__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_seq_base> parent_proxy;
    if (((VlNull{} != adapter) && (VlNull{} != VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1735)
                                   ->__PVT__parent_sequence))) {
        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1738)
                      ->__PVT__parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1738)->__VnoInFunc_clone(vlProcess, vlSymsp, __Vtask_clone__585__Vfuncout);
        unnamedblk559__DOT__o = __Vtask_clone__585__Vfuncout;
        if ((VlNull{} == unnamedblk559__DOT__o)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__586__id = "REG/CLONE"s;
                            __Vfunc_uvm_report_enabled__586__severity = 3U;
                            __Vfunc_uvm_report_enabled__586__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__587__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__587__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__588__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__588__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__586__verbosity, (IData)(__Vfunc_uvm_report_enabled__586__severity), __Vfunc_uvm_report_enabled__586__id, __Vtask_uvm_report_enabled__589__Vfuncout);
                            __Vfunc_uvm_report_enabled__586__Vfuncout 
                                = __Vtask_uvm_report_enabled__589__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__586__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CLONE"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to clone adapter's parent sequence: '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1745)
                                                              ->__PVT__parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1745)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__591__Vfuncout);
                                            }(), __Vtask_get_full_name__591__Vfuncout)), "' (of type '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1745)
                                                      ->__PVT__parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1745)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__592__Vfuncout);
                                    }(), __Vtask_get_type_name__592__Vfuncout)), "')"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x000006d1U, ""s, 1U);
            }
        }
        if ((! VL_CAST_DYNAMIC(unnamedblk559__DOT__o, unnamedblk559__DOT__seq))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__593__id = "REG/CAST"s;
                            __Vfunc_uvm_report_enabled__593__severity = 3U;
                            __Vfunc_uvm_report_enabled__593__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__594__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__594__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__595__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__595__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__593__verbosity, (IData)(__Vfunc_uvm_report_enabled__593__severity), __Vfunc_uvm_report_enabled__593__id, __Vtask_uvm_report_enabled__596__Vfuncout);
                            __Vfunc_uvm_report_enabled__593__Vfuncout 
                                = __Vtask_uvm_report_enabled__596__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__593__Vfuncout))) {
                vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/CAST"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("failed to cast: '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(unnamedblk559__DOT__o, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1752)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__598__Vfuncout);
                                            }(), __Vtask_get_full_name__598__Vfuncout)), "' (of type '"s), 
                                                                                ([&]() {
                                        VL_NULL_CHECK(unnamedblk559__DOT__o, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1752)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__599__Vfuncout);
                                    }(), __Vtask_get_type_name__599__Vfuncout)), "') to uvm_sequence_base!"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x000006d8U, ""s, 1U);
            }
        }
        VL_NULL_CHECK(unnamedblk559__DOT__seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1753)->__VnoInFunc_set_parent_sequence(vlSymsp, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1753)
                                                                                ->__PVT__parent);
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1754)->__PVT__parent 
            = unnamedblk559__DOT__seq;
        tmp_parent_seq = unnamedblk559__DOT__seq;
    }
    if ((VlNull{} == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1758)
         ->__PVT__parent)) {
        parent_proxy = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_seq_base, vlProcess, vlSymsp, "default_parent_seq"s);
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1760)->__PVT__parent 
            = parent_proxy;
        tmp_parent_seq = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1761)
            ->__PVT__parent;
    }
    if ((VlNull{} == adapter)) {
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1767)->__VnoInFunc_get_event_pool(vlSymsp, __Vtask_get_event_pool__602__Vfuncout);
        unnamedblk560__DOT__ep = __Vtask_get_event_pool__602__Vfuncout;
        VL_NULL_CHECK(unnamedblk560__DOT__ep, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1768)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, __Vtask_get__603__Vfuncout);
        unnamedblk560__DOT__end_event = __Vtask_get__603__Vfuncout;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1769)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1770)
                               ->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1770)->__VnoInFunc_start_item(vlProcess, vlSymsp, rw, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1770)
                                                                                ->__PVT__prior, VlNull{});
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1771)
                               ->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1771)->__VnoInFunc_finish_item(vlProcess, vlSymsp, rw, 0xffffffffU);
        co_await VL_NULL_CHECK(unnamedblk560__DOT__end_event, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1772)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
    } else {
        co_await this->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, sequencer, adapter);
    }
    if ((VlNull{} != tmp_parent_seq)) {
        VL_NULL_CHECK(sequencer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1779)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, tmp_parent_seq);
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_write\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_do_bus_access(vlProcess, vlSymsp, rw, sequencer, adapter);
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_perform_accesses(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlQueue<Vrecorders_top_uvm_reg_bus_op__struct__0> &accesses, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> adapter, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_perform_accesses\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_endian__611__Vfuncout;
    __Vfunc_get_endian__611__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_reg2bus__614__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__616__Vfuncout;
    __Vfunc_uvm_report_enabled__616__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__616__verbosity;
    __Vfunc_uvm_report_enabled__616__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__616__severity;
    __Vfunc_uvm_report_enabled__616__severity = 0;
    std::string __Vfunc_uvm_report_enabled__616__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__617__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__618__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__619__Vfuncout;
    __Vtask_uvm_report_enabled__619__Vfuncout = 0;
    std::string __Vtask_get_name__621__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_string_pool__Tz18> __Vtask_get_event_pool__626__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_event_> __Vtask_get__627__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_base_response__629__response;
    IData/*31:0*/ __Vtask_get_transaction_id__630__Vfuncout;
    __Vtask_get_transaction_id__630__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bytes__633__Vfuncout;
    __Vfunc_get_n_bytes__633__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__634__Vfuncout;
    __Vfunc_uvm_report_enabled__634__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__634__verbosity;
    __Vfunc_uvm_report_enabled__634__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__634__severity;
    __Vfunc_uvm_report_enabled__634__severity = 0;
    std::string __Vfunc_uvm_report_enabled__634__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__635__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__636__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__637__Vfuncout;
    __Vtask_uvm_report_enabled__637__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__638__id;
    std::string __Vtask_uvm_report_info__638__message;
    IData/*31:0*/ __Vtask_uvm_report_info__638__verbosity;
    __Vtask_uvm_report_info__638__verbosity = 0;
    std::string __Vtask_uvm_report_info__638__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__638__line;
    __Vtask_uvm_report_info__638__line = 0;
    std::string __Vtask_uvm_report_info__638__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__638__report_enabled_checked;
    __Vtask_uvm_report_info__638__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__639__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__640__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__641__Vfuncout;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk561__DOT__i;
    unnamedblk561__DOT__i = 0;
    Vrecorders_top_uvm_reg_bus_op__struct__0 unnamedblk561__DOT__unnamedblk562__DOT__rw_access;
    unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__kind = 0;
    unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__addr = 0;
    unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__data = 0;
    unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__n_bits = 0;
    unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__byte_en = 0;
    unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__status = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk561__DOT__unnamedblk562__DOT__bus_req;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_event_> unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__end_event;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_string_pool__Tz18> unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__ep;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk564__DOT__bus_rsp;
    IData/*31:0*/ unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk564__DOT__op;
    unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk564__DOT__op = 0;
    std::string op;
    QData/*63:0*/ data;
    data = 0;
    IData/*31:0*/ endian;
    endian = 0;
    op = VL_CVT_PACK_STR_NQ((((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1802)
                               ->__PVT__kind) || (2U 
                                                  == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1802)
                                                  ->__PVT__kind))
                              ? 0x0000000052656164ULL
                              : 0x00000057726f7465ULL));
    this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__611__Vfuncout);
    endian = __Vfunc_get_endian__611__Vfuncout;
    if ((VlNull{} != this->__PVT__policy)) {
        VL_NULL_CHECK(this->__PVT__policy, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1807)->__VnoInFunc_order(vlSymsp, accesses);
    }
    {
        unnamedblk561__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk561__DOT__i, accesses.size())) {
            unnamedblk561__DOT__unnamedblk562__DOT__rw_access 
                = accesses.at(unnamedblk561__DOT__i);
            if (((1U == unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                  .__PVT__kind) & (2U == endian))) {
                unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__data 
                    = VL_STREAML_FAST_QQI(64, unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                                          .__PVT__data, 3);
            }
            VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1818)->__VnoInFunc_m_set_item(vlSymsp, rw);
            VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1819)->__VnoInFunc_reg2bus(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__rw_access, __Vtask_reg2bus__614__Vfuncout);
            unnamedblk561__DOT__unnamedblk562__DOT__bus_req 
                = __Vtask_reg2bus__614__Vfuncout;
            VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1820)->__VnoInFunc_m_set_item(vlSymsp, VlNull{});
            if ((VlNull{} == unnamedblk561__DOT__unnamedblk562__DOT__bus_req)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__616__id = "RegMem"s;
                                __Vfunc_uvm_report_enabled__616__severity = 3U;
                                __Vfunc_uvm_report_enabled__616__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__617__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__617__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__618__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__618__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__616__verbosity, (IData)(__Vfunc_uvm_report_enabled__616__severity), __Vfunc_uvm_report_enabled__616__id, __Vtask_uvm_report_enabled__619__Vfuncout);
                                __Vfunc_uvm_report_enabled__616__Vfuncout 
                                    = __Vtask_uvm_report_enabled__619__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__616__Vfuncout))) {
                    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegMem"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("adapter ["s, 
                                                                                ([&]() {
                                            VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1823)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__621__Vfuncout);
                                        }(), __Vtask_get_name__621__Vfuncout)), "] didnt return a bus transaction"s)), 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x0000071fU, ""s, 1U);
                }
            }
            VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__bus_req, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1825)->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1826)
                                   ->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1826)->__VnoInFunc_start_item(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__bus_req, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1826)
                                                                                ->__PVT__prior, VlNull{});
            if (((VlNull{} != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1828)
                  ->__PVT__parent) && (0U == unnamedblk561__DOT__i))) {
                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1829)
                              ->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1829)->__VnoInFunc_mid_do(vlSymsp, rw);
            }
            co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1831)
                                   ->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1831)->__VnoInFunc_finish_item(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__bus_req, 0xffffffffU);
            VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__bus_req, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1835)->__VnoInFunc_get_event_pool(vlSymsp, __Vtask_get_event_pool__626__Vfuncout);
            unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__ep 
                = __Vtask_get_event_pool__626__Vfuncout;
            VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__ep, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1836)->__VnoInFunc_get(vlProcess, vlSymsp, "end"s, __Vtask_get__627__Vfuncout);
            unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__end_event 
                = __Vtask_get__627__Vfuncout;
            co_await VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk563__DOT__end_event, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1837)->__VnoInFunc_wait_on(vlProcess, vlSymsp, 0U);
            if (VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1840)
                ->__PVT__provides_responses) {
                co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1844)
                                       ->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1844)->__VnoInFunc_get_base_response(vlProcess, vlSymsp, __Vtask_get_base_response__629__response, 
                                                                                ([&]() {
                            VL_NULL_CHECK(unnamedblk561__DOT__unnamedblk562__DOT__bus_req, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1844)
                                                                                ->__VnoInFunc_get_transaction_id(vlSymsp, __Vtask_get_transaction_id__630__Vfuncout);
                        }(), __Vtask_get_transaction_id__630__Vfuncout));
                unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk564__DOT__bus_rsp 
                    = __Vtask_get_base_response__629__response;
                VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1845)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__unnamedblk564__DOT__bus_rsp, unnamedblk561__DOT__unnamedblk562__DOT__rw_access);
            } else {
                VL_NULL_CHECK(adapter, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1848)->__VnoInFunc_bus2reg(vlProcess, vlSymsp, unnamedblk561__DOT__unnamedblk562__DOT__bus_req, unnamedblk561__DOT__unnamedblk562__DOT__rw_access);
            }
            if (((0U == unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                  .__PVT__kind) & (2U == endian))) {
                unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__data 
                    = VL_STREAML_FAST_QQI(64, unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                                          .__PVT__data, 3);
            }
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1855)->__PVT__status 
                = unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                .__PVT__status;
            data = (unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                    .__PVT__data & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                                  VL_SHIFTL_III(32,32,32, 
                                                                ([&]() {
                                    this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vfunc_get_n_bytes__633__Vfuncout);
                                }(), __Vfunc_get_n_bytes__633__Vfuncout), 3U)) 
                                    - 1ULL));
            unnamedblk561__DOT__unnamedblk562__DOT__rw_access.__PVT__data 
                = data;
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__634__id = "UVM/REG/ADDR"s;
                            __Vfunc_uvm_report_enabled__634__severity = 0U;
                            __Vfunc_uvm_report_enabled__634__verbosity = 0x00000190U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__635__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__635__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__636__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__636__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__634__verbosity, (IData)(__Vfunc_uvm_report_enabled__634__severity), __Vfunc_uvm_report_enabled__634__id, __Vtask_uvm_report_enabled__637__Vfuncout);
                            __Vfunc_uvm_report_enabled__634__Vfuncout 
                                = __Vtask_uvm_report_enabled__637__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__634__Vfuncout))) {
                __Vtask_uvm_report_info__638__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__638__context_name = ""s;
                __Vtask_uvm_report_info__638__line = 0x0000074dU;
                __Vtask_uvm_report_info__638__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
                __Vtask_uvm_report_info__638__verbosity = 0x00000190U;
                __Vtemp_3 = ([&]() {
                        VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1869)
                                      ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1869)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__639__Vfuncout);
                    }(), __Vtask_get_full_name__639__Vfuncout);
                __Vtemp_4 = Vrecorders_top___024unit::__Venumtab_enum_name71
                    [(3U & VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1869)
                      ->__PVT__status)];
                __Vtask_uvm_report_info__638__message 
                    = VL_SFORMATF_N_NX("%@ 'h%0x at 'h%0x via map \"%@\": %@...",0,
                                       -1,&(op),64,
                                       unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                                       .__PVT__data,
                                       64,unnamedblk561__DOT__unnamedblk562__DOT__rw_access
                                       .__PVT__addr,
                                       -1,&(__Vtemp_3),
                                       -1,&(__Vtemp_4)) ;
                __Vtask_uvm_report_info__638__id = "UVM/REG/ADDR"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__640__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__640__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__641__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__641__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__638__id, __Vtask_uvm_report_info__638__message, __Vtask_uvm_report_info__638__verbosity, __Vtask_uvm_report_info__638__filename, __Vtask_uvm_report_info__638__line, __Vtask_uvm_report_info__638__context_name, (IData)(__Vtask_uvm_report_info__638__report_enabled_checked));
            }
            if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1871)
                 ->__PVT__status)) {
                goto __Vlabel0;
            }
            if (((VlNull{} != VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1874)
                  ->__PVT__parent) && (unnamedblk561__DOT__i 
                                       == (accesses.size() 
                                           - (IData)(1U))))) {
                VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1875)
                              ->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1875)->__VnoInFunc_post_do(vlSymsp, rw);
            }
            accesses.atWriteAppend(unnamedblk561__DOT__i) 
                = unnamedblk561__DOT__unnamedblk562__DOT__rw_access;
            unnamedblk561__DOT__i = ((IData)(1U) + unnamedblk561__DOT__i);
        }
        __Vlabel0: ;
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_access(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_access\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> __Vfunc_get_root_map__644__Vfuncout;
    IData/*31:0*/ __Vfunc_get_n_bytes__645__Vfuncout;
    __Vfunc_get_n_bytes__645__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> __Vtask_Xget_bus_infoX__646__map_info;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__646__size;
    __Vtask_Xget_bus_infoX__646__size = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__646__lsb;
    __Vtask_Xget_bus_infoX__646__lsb = 0;
    IData/*31:0*/ __Vtask_Xget_bus_infoX__646__addr_skip;
    __Vtask_Xget_bus_infoX__646__addr_skip = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__647__Vfuncout;
    __Vtask_get_physical_addresses_to_map__647__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__648__Vfuncout;
    __Vtask_get_n_bytes__648__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__649__Vfuncout;
    __Vtask_get_n_bytes__649__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__650__Vfuncout;
    __Vtask_get_n_bytes__650__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__651__Vfuncout;
    __Vtask_get_n_bytes__651__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__652__Vfuncout;
    __Vtask_get_physical_addresses_to_map__652__Vfuncout = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> __Vtask_get_parent__653__Vfuncout;
    IData/*31:0*/ __Vfunc_ceil__654__Vfuncout;
    __Vfunc_ceil__654__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__655__Vfuncout;
    __Vtask_get_n_bits__655__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ceil__656__Vfuncout;
    __Vfunc_ceil__656__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__657__Vfuncout;
    __Vtask_get_n_bits__657__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bytes__658__Vfuncout;
    __Vfunc_get_n_bytes__658__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ceil__659__Vfuncout;
    __Vfunc_ceil__659__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__660__Vfuncout;
    __Vtask_get_n_bits__660__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bytes__661__Vfuncout;
    __Vfunc_get_n_bytes__661__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__662__Vfuncout;
    __Vtask_get_n_bits__662__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__663__Vfuncout;
    __Vtask_get_n_bits__663__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_physical_addresses_to_map__664__Vfuncout;
    __Vtask_get_physical_addresses_to_map__664__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__665__Vfuncout;
    __Vtask_get_n_bytes__665__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__666__Vfuncout;
    __Vtask_get_n_bytes__666__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bytes__667__Vfuncout;
    __Vfunc_get_n_bytes__667__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bytes__668__Vfuncout;
    __Vtask_get_n_bytes__668__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__669__Vfuncout;
    __Vfunc_uvm_report_enabled__669__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__669__verbosity;
    __Vfunc_uvm_report_enabled__669__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__669__severity;
    __Vfunc_uvm_report_enabled__669__severity = 0;
    std::string __Vfunc_uvm_report_enabled__669__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__670__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__671__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__672__Vfuncout;
    __Vtask_uvm_report_enabled__672__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__673__id;
    std::string __Vtask_uvm_report_info__673__message;
    IData/*31:0*/ __Vtask_uvm_report_info__673__verbosity;
    __Vtask_uvm_report_info__673__verbosity = 0;
    std::string __Vtask_uvm_report_info__673__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__673__line;
    __Vtask_uvm_report_info__673__line = 0;
    std::string __Vtask_uvm_report_info__673__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__673__report_enabled_checked;
    __Vtask_uvm_report_info__673__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__674__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__675__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__676__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__679__Vfuncout;
    __Vtask_get_n_bits__679__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> unnamedblk565__DOT__mem;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk566__DOT__f;
    QData/*63:0*/ unnamedblk566__DOT__ad;
    unnamedblk566__DOT__ad = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> unnamedblk567__DOT__r;
    QData/*63:0*/ unnamedblk567__DOT__ad;
    unnamedblk567__DOT__ad = 0;
    VlQueue<CData/*0:0*/> unnamedblk568__DOT__be;
    unnamedblk568__DOT__be.atDefault() = 0;
    VlQueue<CData/*7:0*/> unnamedblk568__DOT__p;
    unnamedblk568__DOT__p.atDefault() = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3;
    unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk569__DOT__idx;
    unnamedblk568__DOT__unnamedblk569__DOT__idx = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i;
    unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i = 0;
    QData/*63:0*/ unnamedblk568__DOT__unnamedblk571__DOT__ac;
    unnamedblk568__DOT__unnamedblk571__DOT__ac = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx;
    unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx = 0;
    QData/*63:0*/ unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__unnamedblk573__DOT__n;
    unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__unnamedblk573__DOT__n = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk574__DOT__i;
    unnamedblk568__DOT__unnamedblk574__DOT__i = 0;
    Vrecorders_top_uvm_reg_bus_op__struct__0 unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__kind = 0;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__addr = 0;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__data = 0;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__n_bits = 0;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__byte_en = 0;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__status = 0;
    QData/*63:0*/ unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i;
    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk579__DOT__i0;
    unnamedblk568__DOT__unnamedblk579__DOT__i0 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1;
    unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4;
    unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4 = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk581__DOT__i;
    unnamedblk568__DOT__unnamedblk581__DOT__i = 0;
    QData/*63:0*/ unnamedblk568__DOT__unnamedblk582__DOT__ac;
    unnamedblk568__DOT__unnamedblk582__DOT__ac = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i;
    unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i = 0;
    CData/*7:0*/ unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv;
    unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk585__DOT__idx;
    unnamedblk568__DOT__unnamedblk585__DOT__idx = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0;
    unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0 = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_field> unnamedblk568__DOT__unnamedblk587__DOT__f;
    QData/*63:0*/ unnamedblk568__DOT__unnamedblk587__DOT__m;
    unnamedblk568__DOT__unnamedblk587__DOT__m = 0;
    IData/*31:0*/ unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx;
    unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx = 0;
    VlQueue<QData/*63:0*/> addrs;
    addrs.atDefault() = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> system_map;
    this->__VnoInFunc_get_root_map(vlSymsp, __Vfunc_get_root_map__644__Vfuncout);
    system_map = __Vfunc_get_root_map__644__Vfuncout;
    IData/*31:0*/ bus_width;
    bus_width = 0;
    this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vfunc_get_n_bytes__645__Vfuncout);
    bus_width = __Vfunc_get_n_bytes__645__Vfuncout;
    CData/*7:0*/ byte_en;
    byte_en = 0;
    byte_en = 0xffU;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map_info> map_info;
    IData/*31:0*/ n_bits;
    n_bits = 0;
    IData/*31:0*/ lsb;
    lsb = 0;
    IData/*31:0*/ skip;
    skip = 0;
    IData/*31:0*/ curr_byte;
    curr_byte = 0;
    IData/*31:0*/ n_access_extra;
    n_access_extra = 0;
    IData/*31:0*/ n_access;
    n_access = 0;
    VlQueue<Vrecorders_top_uvm_reg_bus_op__struct__0> accesses;
    accesses.atDefault().__PVT__kind = 0;
    accesses.atDefault().__PVT__addr = 0;
    accesses.atDefault().__PVT__data = 0;
    accesses.atDefault().__PVT__n_bits = 0;
    accesses.atDefault().__PVT__byte_en = 0;
    accesses.atDefault().__PVT__status = 0;
    std::string op;
    VlQueue<QData/*63:0*/> adr;
    adr.atDefault() = 0;
    IData/*31:0*/ byte_offset;
    byte_offset = 0;
    IData/*31:0*/ num_stream_bytes;
    num_stream_bytes = 0;
    IData/*31:0*/ n_bytes;
    n_bytes = 0;
    IData/*31:0*/ bytes_per_value;
    bytes_per_value = 0;
    IData/*31:0*/ bit_shift;
    bit_shift = 0;
    IData/*31:0*/ extra_byte;
    extra_byte = 0;
    this->__VnoInFunc_Xget_bus_infoX(vlProcess, vlSymsp, rw, __Vtask_Xget_bus_infoX__646__map_info, __Vtask_Xget_bus_infoX__646__size, __Vtask_Xget_bus_infoX__646__lsb, __Vtask_Xget_bus_infoX__646__addr_skip);
    map_info = __Vtask_Xget_bus_infoX__646__map_info;
    n_bits = __Vtask_Xget_bus_infoX__646__size;
    lsb = __Vtask_Xget_bus_infoX__646__lsb;
    skip = __Vtask_Xget_bus_infoX__646__addr_skip;
    addrs = VL_NULL_CHECK(map_info, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1909)
        ->__PVT__addr;
    op = VL_CVT_PACK_STR_NQ((((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1910)
                               ->__PVT__kind) || (2U 
                                                  == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1910)
                                                  ->__PVT__kind))
                              ? 0x0052656164696e67ULL
                              : 0x0057726974696e67ULL));
    if ((2U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1912)
         ->__PVT__element_kind)) {
        if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1915)
                                            ->__PVT__element, unnamedblk565__DOT__mem))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1915: Assertion failed in %Nuvm_pkg.uvm_reg_map.do_bus_access.unnamedblk565: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1915, "");
        }
        this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_mems_info
                                                                                .at(unnamedblk565__DOT__mem), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1916)
                                                        ->__PVT__offset, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1916)
                                                        ->__PVT__offset, 
                                                        (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1916)
                                                         ->__PVT__value.size() 
                                                         * 
                                                         ([&]() {
                        VL_NULL_CHECK(unnamedblk565__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1916)
                                                          ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__648__Vfuncout);
                    }(), __Vtask_get_n_bytes__648__Vfuncout)), adr, VlNull{}, byte_offset, unnamedblk565__DOT__mem, __Vtask_get_physical_addresses_to_map__647__Vfuncout);
        num_stream_bytes = (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1917)
                            ->__PVT__value.size() * 
                            ([&]() {
                    VL_NULL_CHECK(unnamedblk565__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1917)
                             ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__649__Vfuncout);
                }(), __Vtask_get_n_bytes__649__Vfuncout));
        VL_NULL_CHECK(unnamedblk565__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1918)->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__650__Vfuncout);
        n_bytes = __Vtask_get_n_bytes__650__Vfuncout;
        VL_NULL_CHECK(unnamedblk565__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1919)->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__651__Vfuncout);
        bytes_per_value = __Vtask_get_n_bytes__651__Vfuncout;
    } else if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1912)
                ->__PVT__element_kind)) {
        if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1924)
                                            ->__PVT__element, unnamedblk566__DOT__f))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1924: Assertion failed in %Nuvm_pkg.uvm_reg_map.do_bus_access.unnamedblk566: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1924, "");
        }
        this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, 
                                                        (VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                       .at(
                                                                           ([&]() {
                                VL_NULL_CHECK(unnamedblk566__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1927)
                                                                            ->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__653__Vfuncout);
                            }(), __Vtask_get_parent__653__Vfuncout)), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1927)
                                                         ->__PVT__offset 
                                                         + (QData)((IData)(skip))), 0ULL, 
                                                        ([&]() {
                    this->__VnoInFunc_ceil(vlSymsp, 
                                           ([&]() {
                                VL_NULL_CHECK(unnamedblk566__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1927)
                                            ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__655__Vfuncout);
                            }(), __Vtask_get_n_bits__655__Vfuncout), 8U, __Vfunc_ceil__654__Vfuncout);
                }(), __Vfunc_ceil__654__Vfuncout), adr, VlNull{}, byte_offset, VlNull{}, __Vtask_get_physical_addresses_to_map__652__Vfuncout);
        this->__VnoInFunc_ceil(vlSymsp, ([&]() {
                    VL_NULL_CHECK(unnamedblk566__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1928)
                                         ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__657__Vfuncout);
                }(), __Vtask_get_n_bits__657__Vfuncout), 8U, __Vfunc_ceil__656__Vfuncout);
        num_stream_bytes = __Vfunc_ceil__656__Vfuncout;
        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__658__Vfuncout);
        n_bytes = __Vfunc_get_n_bytes__658__Vfuncout;
        this->__VnoInFunc_ceil(vlSymsp, ([&]() {
                    VL_NULL_CHECK(unnamedblk566__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1930)
                                         ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__660__Vfuncout);
                }(), __Vtask_get_n_bits__660__Vfuncout), 8U, __Vfunc_ceil__659__Vfuncout);
        bytes_per_value = __Vfunc_ceil__659__Vfuncout;
        bit_shift = VL_MODDIV_III(32, lsb, VL_SHIFTL_III(32,32,32, 
                                                         ([&]() {
                        this->__VnoInFunc_get_n_bytes(vlSymsp, 1U, __Vfunc_get_n_bytes__661__Vfuncout);
                    }(), __Vfunc_get_n_bytes__661__Vfuncout), 3U));
        if ((VL_SHIFTR_III(32,32,32, (bit_shift + ([&]() {
                                VL_NULL_CHECK(unnamedblk566__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1932)
                                                   ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__662__Vfuncout);
                            }(), __Vtask_get_n_bits__662__Vfuncout)), 3U) 
             != VL_SHIFTR_III(32,32,32, ([&]() {
                            VL_NULL_CHECK(unnamedblk566__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1932)
                                         ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__663__Vfuncout);
                        }(), __Vtask_get_n_bits__663__Vfuncout), 3U))) {
            extra_byte = 1U;
        }
    } else if ((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1912)
                ->__PVT__element_kind)) {
        if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1939)
                                            ->__PVT__element, unnamedblk567__DOT__r))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:1939: Assertion failed in %Nuvm_pkg.uvm_reg_map.do_bus_access.unnamedblk567: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1939, "");
        }
        this->__VnoInFunc_get_physical_addresses_to_map(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__m_regs_info
                                                                                .at(unnamedblk567__DOT__r), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1941)
                                                        ->__PVT__offset, 0ULL, 
                                                        ([&]() {
                    VL_NULL_CHECK(unnamedblk567__DOT__r, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1941)
                                                         ->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__665__Vfuncout);
                }(), __Vtask_get_n_bytes__665__Vfuncout), adr, VlNull{}, byte_offset, VlNull{}, __Vtask_get_physical_addresses_to_map__664__Vfuncout);
        VL_NULL_CHECK(unnamedblk567__DOT__r, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1942)->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__666__Vfuncout);
        num_stream_bytes = __Vtask_get_n_bytes__666__Vfuncout;
        this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__667__Vfuncout);
        n_bytes = __Vfunc_get_n_bytes__667__Vfuncout;
        VL_NULL_CHECK(unnamedblk567__DOT__r, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1944)->__VnoInFunc_get_n_bytes(vlSymsp, __Vtask_get_n_bytes__668__Vfuncout);
        bytes_per_value = __Vtask_get_n_bytes__668__Vfuncout;
    }
    num_stream_bytes = (num_stream_bytes + extra_byte);
    unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = byte_offset;
    while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        unnamedblk568__DOT__be.push_back(0U);
        unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (unnamedblk568__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = num_stream_bytes;
    while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        unnamedblk568__DOT__be.push_back(1U);
        unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (unnamedblk568__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2 
        = bus_width;
    while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        unnamedblk568__DOT__be.push_back(0U);
        unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (unnamedblk568__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3 
        = byte_offset;
    while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3)) {
        unnamedblk568__DOT__p.push_back(0U);
        unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3 
            = (unnamedblk568__DOT__unnamedblk1_4__DOT____Vrepeat3 
               - (IData)(1U));
    }
    unnamedblk568__DOT__unnamedblk569__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk569__DOT__idx, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1961)
                      ->__PVT__value.size())) {
        unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i = 0U;
        while ((unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i 
                < bytes_per_value)) {
            unnamedblk568__DOT__p.push_back((0x000000ffU 
                                             & (IData)(
                                                       (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 1963)
                                                        ->__PVT__value.at(unnamedblk568__DOT__unnamedblk569__DOT__idx) 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i))))));
            unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk569__DOT__unnamedblk570__DOT__i);
        }
        unnamedblk568__DOT__unnamedblk569__DOT__idx 
            = ((IData)(1U) + unnamedblk568__DOT__unnamedblk569__DOT__idx);
    }
    if ((0U != bit_shift)) {
        unnamedblk568__DOT__unnamedblk571__DOT__ac = 0ULL;
        unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx, unnamedblk568__DOT__p.size())) {
            unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__unnamedblk573__DOT__n 
                = (0x00000000000000ffULL & (unnamedblk568__DOT__unnamedblk571__DOT__ac 
                                            | VL_SHIFTL_QQI(64,64,32, (QData)((IData)(unnamedblk568__DOT__p.at(unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx))), bit_shift)));
            unnamedblk568__DOT__unnamedblk571__DOT__ac 
                = (0x00000000000000ffULL & VL_SHIFTR_QQI(64,64,32, (QData)((IData)(unnamedblk568__DOT__p.at(unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx))), bit_shift));
            unnamedblk568__DOT__p.atWriteAppend(unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx) 
                = (0x000000ffU & (IData)(unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__unnamedblk573__DOT__n));
            unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk571__DOT__unnamedblk572__DOT__idx);
        }
        if ((0U != extra_byte)) {
            unnamedblk568__DOT__p.push_back((0x000000ffU 
                                             & (IData)(unnamedblk568__DOT__unnamedblk571__DOT__ac)));
        }
    }
    accesses.clear();
    unnamedblk568__DOT__unnamedblk574__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk574__DOT__i, adr.size())) {
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0 = 0U;
        while ((unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0 
                < bus_width)) {
            unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data 
                = (((~ (0x00000000000000ffULL << (0x0000003fU 
                                                  & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0)))) 
                    & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data) 
                   | ((QData)((IData)(unnamedblk568__DOT__p.at(
                                                               ((unnamedblk568__DOT__unnamedblk574__DOT__i 
                                                                 * bus_width) 
                                                                + unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0)))) 
                      << (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0))));
            unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk576__DOT__i0);
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__669__id = "UVM/REG/ADDR"s;
                        __Vfunc_uvm_report_enabled__669__severity = 0U;
                        __Vfunc_uvm_report_enabled__669__verbosity = 0x00000190U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__670__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__670__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__671__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__671__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__669__verbosity, (IData)(__Vfunc_uvm_report_enabled__669__severity), __Vfunc_uvm_report_enabled__669__id, __Vtask_uvm_report_enabled__672__Vfuncout);
                        __Vfunc_uvm_report_enabled__669__Vfuncout 
                            = __Vtask_uvm_report_enabled__672__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__669__Vfuncout))) {
            __Vtask_uvm_report_info__673__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__673__context_name = ""s;
            __Vtask_uvm_report_info__673__line = 0x000007d7U;
            __Vtask_uvm_report_info__673__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s;
            __Vtask_uvm_report_info__673__verbosity = 0x00000190U;
            __Vtemp_1 = ([&]() {
                    VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2007)
                                  ->__PVT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2007)
                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__674__Vfuncout);
                }(), __Vtask_get_full_name__674__Vfuncout);
            __Vtask_uvm_report_info__673__message = VL_SFORMATF_N_NX("%@ 'h%0x at 'h%0x via map \"%@\"...",0,
                                                                     -1,
                                                                     &(op),
                                                                     64,
                                                                     unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data,
                                                                     64,
                                                                     adr.at(unnamedblk568__DOT__unnamedblk574__DOT__i),
                                                                     -1,
                                                                     &(__Vtemp_1)) ;
            __Vtask_uvm_report_info__673__id = "UVM/REG/ADDR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__675__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__675__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__676__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__676__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__673__id, __Vtask_uvm_report_info__673__message, __Vtask_uvm_report_info__673__verbosity, __Vtask_uvm_report_info__673__filename, __Vtask_uvm_report_info__673__line, __Vtask_uvm_report_info__673__context_name, (IData)(__Vtask_uvm_report_info__673__report_enabled_checked));
        }
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z = 0U;
        while ((unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z 
                < bus_width)) {
            unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__byte_en 
                = (((~ ((IData)(1U) << (7U & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z))) 
                    & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access
                    .__PVT__byte_en) | (0x00ffU & (unnamedblk568__DOT__be.at(
                                                                             ((bus_width 
                                                                               * unnamedblk568__DOT__unnamedblk574__DOT__i) 
                                                                              + unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z)) 
                                                   << 
                                                   (7U 
                                                    & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z))));
            unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk577__DOT__z);
        }
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__kind 
            = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2012)
            ->__PVT__kind;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__addr 
            = adr.at(unnamedblk568__DOT__unnamedblk574__DOT__i);
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__data 
            = unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__data;
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__n_bits 
            = VL_SHIFTL_III(32,32,32, bus_width, 3U);
        unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i 
            = (bus_width - (IData)(1U));
        {
            while (VL_LTES_III(32, 0U, unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i)) {
                if ((1U & (unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access
                           .__PVT__byte_en >> (7U & unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i)))) {
                    goto __Vlabel0;
                } else {
                    unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access.__PVT__n_bits 
                        = (unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access
                           .__PVT__n_bits - (IData)(8U));
                }
                unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i 
                    = (unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__unnamedblk578__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel0: ;
        }
        accesses.push_back(unnamedblk568__DOT__unnamedblk574__DOT__unnamedblk575__DOT__rw_access);
        unnamedblk568__DOT__unnamedblk574__DOT__i = 
            ((IData)(1U) + unnamedblk568__DOT__unnamedblk574__DOT__i);
    }
    co_await this->__VnoInFunc_perform_accesses(vlProcess, vlSymsp, accesses, rw, adapter, sequencer);
    if (((0U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2030)
          ->__PVT__kind) || (2U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2030)
                             ->__PVT__kind))) {
        unnamedblk568__DOT__p.clear();
        unnamedblk568__DOT__unnamedblk579__DOT__i0 = 0U;
        while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk579__DOT__i0, accesses.size())) {
            unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1 = 0U;
            while ((unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1 
                    < bus_width)) {
                unnamedblk568__DOT__p.push_back((0x000000ffU 
                                                 & (IData)(
                                                           (accesses.at(unnamedblk568__DOT__unnamedblk579__DOT__i0)
                                                            .__PVT__data 
                                                            >> 
                                                            (0x0000003fU 
                                                             & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1))))));
                unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1 
                    = ((IData)(1U) + unnamedblk568__DOT__unnamedblk579__DOT__unnamedblk580__DOT__i1);
            }
            unnamedblk568__DOT__unnamedblk579__DOT__i0 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk579__DOT__i0);
        }
        unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4 
            = byte_offset;
        while (VL_LTS_III(32, 0U, unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4)) {
            (void)unnamedblk568__DOT__p.pop_front();
            unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4 
                = (unnamedblk568__DOT__unnamedblk1_5__DOT____Vrepeat4 
                   - (IData)(1U));
        }
        unnamedblk568__DOT__unnamedblk581__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk581__DOT__i, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2037)
                          ->__PVT__value.size())) {
            VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2037)->__PVT__value.atWrite(unnamedblk568__DOT__unnamedblk581__DOT__i) = 0ULL;
            unnamedblk568__DOT__unnamedblk581__DOT__i 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk581__DOT__i);
        }
        if ((0U != bit_shift)) {
            unnamedblk568__DOT__unnamedblk582__DOT__ac = 0ULL;
            unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i, unnamedblk568__DOT__p.size())) {
                unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv 
                    = (0x000000ffU & VL_SHIFTR_III(8,8,32, unnamedblk568__DOT__p.at(unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i), bit_shift));
                if ((unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i 
                     != (unnamedblk568__DOT__p.size() 
                         - (IData)(1U)))) {
                    unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv 
                        = (0x000000ffU & ((IData)(unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv) 
                                          | VL_SHIFTL_III(8,8,32, unnamedblk568__DOT__p.at(
                                                                                ((IData)(1U) 
                                                                                + unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i)), bit_shift)));
                }
                unnamedblk568__DOT__p.atWriteAppend(unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i) 
                    = unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__unnamedblk584__DOT__nv;
                unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i 
                    = ((IData)(1U) + unnamedblk568__DOT__unnamedblk582__DOT__unnamedblk583__DOT__i);
            }
            if ((0U != extra_byte)) {
                (void)unnamedblk568__DOT__p.pop_back();
            }
        }
        unnamedblk568__DOT__unnamedblk585__DOT__idx = 0U;
        while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk585__DOT__idx, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2054)
                          ->__PVT__value.size())) {
            unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0 = 0U;
            while ((unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0 
                    < bytes_per_value)) {
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2056)->__PVT__value.atWrite(unnamedblk568__DOT__unnamedblk585__DOT__idx) 
                    = (((~ (0x00000000000000ffULL << 
                            (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0)))) 
                        & VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2056)
                        ->__PVT__value.atWrite(unnamedblk568__DOT__unnamedblk585__DOT__idx)) 
                       | ((QData)((IData)(unnamedblk568__DOT__p.at(
                                                                   ((unnamedblk568__DOT__unnamedblk585__DOT__idx 
                                                                     * bytes_per_value) 
                                                                    + unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0)))) 
                          << (0x0000003fU & VL_MULS_III(32, (IData)(8U), unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0))));
                unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0 
                    = ((IData)(1U) + unnamedblk568__DOT__unnamedblk585__DOT__unnamedblk586__DOT__i0);
            }
            unnamedblk568__DOT__unnamedblk585__DOT__idx 
                = ((IData)(1U) + unnamedblk568__DOT__unnamedblk585__DOT__idx);
        }
        if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2058)
             ->__PVT__element_kind)) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2061)
                                                ->__PVT__element, unnamedblk568__DOT__unnamedblk587__DOT__f))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_map.svh:2061: Assertion failed in %Nuvm_pkg.uvm_reg_map.do_bus_access.unnamedblk568.unnamedblk587: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2061, "");
            }
            unnamedblk568__DOT__unnamedblk587__DOT__m 
                = (VL_SHIFTL_QQI(64,64,32, 1ULL, ([&]() {
                            VL_NULL_CHECK(unnamedblk568__DOT__unnamedblk587__DOT__f, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2063)
                                                  ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__679__Vfuncout);
                        }(), __Vtask_get_n_bits__679__Vfuncout)) 
                   - 1ULL);
            unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx = 0U;
            while (VL_LTS_III(32, unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx, VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2064)
                              ->__PVT__value.size())) {
                VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2065)->__PVT__value.atWrite(unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx) 
                    = (VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2065)
                       ->__PVT__value.at(unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx) 
                       & unnamedblk568__DOT__unnamedblk587__DOT__m);
                unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx 
                    = ((IData)(1U) + unnamedblk568__DOT__unnamedblk587__DOT__unnamedblk588__DOT__idx);
            }
        }
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_adapter> adapter) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_bus_read\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_do_bus_access(vlProcess, vlSymsp, rw, sequencer, adapter);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_print\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> __Vfunc_get_sequencer__681__Vfuncout;
    IData/*31:0*/ __Vfunc_get_endian__683__Vfuncout;
    __Vfunc_get_endian__683__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bytes__686__Vfuncout;
    __Vfunc_get_n_bytes__686__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_addr_unit_bytes__688__Vfuncout;
    __Vfunc_get_addr_unit_bytes__688__Vfuncout = 0;
    std::string __Vtask_get_type_name__690__Vfuncout;
    std::string __Vtask_get_full_name__691__Vfuncout;
    std::string __Vtask_get_name__694__Vfuncout;
    std::string __Vtask_get_type_name__695__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__696__Vfuncout;
    __Vtask_get_inst_id__696__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_address__697__Vfuncout;
    __Vtask_get_address__697__Vfuncout = 0;
    std::string __Vtask_get_name__700__Vfuncout;
    std::string __Vtask_get_type_name__701__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__702__Vfuncout;
    __Vtask_get_inst_id__702__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_address__703__Vfuncout;
    __Vtask_get_address__703__Vfuncout = 0;
    std::string __Vtask_get_name__706__Vfuncout;
    std::string __Vtask_get_type_name__707__Vfuncout;
    IData/*31:0*/ __Vtask_get_inst_id__708__Vfuncout;
    __Vtask_get_inst_id__708__Vfuncout = 0;
    QData/*63:0*/ __Vtask_get_address__709__Vfuncout;
    __Vtask_get_address__709__Vfuncout = 0;
    std::string __Vtask_get_name__712__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk589__DOT__j;
    unnamedblk589__DOT__j = 0;
    IData/*31:0*/ unnamedblk590__DOT__j;
    unnamedblk590__DOT__j = 0;
    IData/*31:0*/ unnamedblk591__DOT__j;
    unnamedblk591__DOT__j = 0;
    IData/*31:0*/ unnamedblk592__DOT__j;
    unnamedblk592__DOT__j = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_vreg>> vregs;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem>> mems;
    IData/*31:0*/ endian;
    endian = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>> maps;
    std::string prefix;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer_base> sqr;
    this->__VnoInFunc_get_sequencer(vlSymsp, 1U, __Vfunc_get_sequencer__681__Vfuncout);
    sqr = __Vfunc_get_sequencer__681__Vfuncout;
    Vrecorders_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__683__Vfuncout);
    endian = __Vfunc_get_endian__683__Vfuncout;
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2107)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "endian"s, ""s, 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                Vrecorders_top___024unit::__Venumtab_enum_name77
                                                                                [
                                                                                (7U 
                                                                                & endian)]), 0x2eU);
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2108)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "n_bytes"s, 
                                                                                VL_EXTEND_QI(64,32, 
                                                                                ([&]() {
                    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__686__Vfuncout);
                }(), __Vfunc_get_n_bytes__686__Vfuncout)), 0x00000040U, 0x02000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2109)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "byte addressing"s, 
                                                                                VL_EXTEND_QI(64,1, 
                                                                                (1U 
                                                                                == 
                                                                                ([&]() {
                        this->__VnoInFunc_get_addr_unit_bytes(vlSymsp, __Vfunc_get_addr_unit_bytes__688__Vfuncout);
                    }(), __Vfunc_get_addr_unit_bytes__688__Vfuncout))), 0x00000040U, 0x02000000U, 0x2eU, ""s);
    if ((VlNull{} != sqr)) {
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2112)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "effective sequencer"s, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(sqr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2112)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__690__Vfuncout);
                    }(), __Vtask_get_type_name__690__Vfuncout)), 0xfffffffeU, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(sqr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2112)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__691__Vfuncout);
                    }(), __Vtask_get_full_name__691__Vfuncout)), 0x2eU);
    }
    this->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk589__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk589__DOT__j, regs.size())) {
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(regs.at(unnamedblk589__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__694__Vfuncout);
                    }(), __Vtask_get_name__694__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(regs.at(unnamedblk589__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__695__Vfuncout);
                    }(), __Vtask_get_type_name__695__Vfuncout)), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",0,
                                                                                32,
                                                                                ([&]() {
                            VL_NULL_CHECK(regs.at(unnamedblk589__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)
                                                                                ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__696__Vfuncout);
                        }(), __Vtask_get_inst_id__696__Vfuncout),
                                                                                64,
                                                                                ([&]() {
                            VL_NULL_CHECK(regs.at(unnamedblk589__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2116)
                                                                                ->__VnoInFunc_get_address(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_get_address__697__Vfuncout);
                        }(), __Vtask_get_address__697__Vfuncout)) , 0x2eU);
        unnamedblk589__DOT__j = ((IData)(1U) + unnamedblk589__DOT__j);
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk590__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk590__DOT__j, mems.size())) {
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(mems.at(unnamedblk590__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__700__Vfuncout);
                    }(), __Vtask_get_name__700__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(mems.at(unnamedblk590__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__701__Vfuncout);
                    }(), __Vtask_get_type_name__701__Vfuncout)), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",0,
                                                                                32,
                                                                                ([&]() {
                            VL_NULL_CHECK(mems.at(unnamedblk590__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)
                                                                                ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__702__Vfuncout);
                        }(), __Vtask_get_inst_id__702__Vfuncout),
                                                                                64,
                                                                                ([&]() {
                            VL_NULL_CHECK(mems.at(unnamedblk590__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2121)
                                                                                ->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_get_address__703__Vfuncout);
                        }(), __Vtask_get_address__703__Vfuncout)) , 0x2eU);
        unnamedblk590__DOT__j = ((IData)(1U) + unnamedblk590__DOT__j);
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk591__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk591__DOT__j, vregs.size())) {
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)->__VnoInFunc_print_generic(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(vregs.at(unnamedblk591__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__706__Vfuncout);
                    }(), __Vtask_get_name__706__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(vregs.at(unnamedblk591__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__707__Vfuncout);
                    }(), __Vtask_get_type_name__707__Vfuncout)), 0xfffffffeU, VL_SFORMATF_N_NX("@%0d +'h%0x",0,
                                                                                32,
                                                                                ([&]() {
                            VL_NULL_CHECK(vregs.at(unnamedblk591__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)
                                                                                ->__VnoInFunc_get_inst_id(vlSymsp, __Vtask_get_inst_id__708__Vfuncout);
                        }(), __Vtask_get_inst_id__708__Vfuncout),
                                                                                64,
                                                                                ([&]() {
                            VL_NULL_CHECK(vregs.at(unnamedblk591__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2125)
                                                                                ->__VnoInFunc_get_address(vlProcess, vlSymsp, 0ULL, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>{this}, __Vtask_get_address__709__Vfuncout);
                        }(), __Vtask_get_address__709__Vfuncout)) , 0x2eU);
        unnamedblk591__DOT__j = ((IData)(1U) + unnamedblk591__DOT__j);
    }
    this->__VnoInFunc_get_submaps(vlSymsp, maps, 1U);
    unnamedblk592__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk592__DOT__j, maps.size())) {
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2129)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        VL_NULL_CHECK(maps.at(unnamedblk592__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2129)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__712__Vfuncout);
                    }(), __Vtask_get_name__712__Vfuncout)), maps.at(unnamedblk592__DOT__j), 0x2eU);
        unnamedblk592__DOT__j = ((IData)(1U) + unnamedblk592__DOT__j);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vfunc_get_full_name__713__Vfuncout;
    IData/*31:0*/ __Vfunc_get_endian__714__Vfuncout;
    __Vfunc_get_endian__714__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_n_bytes__715__Vfuncout;
    __Vfunc_get_n_bytes__715__Vfuncout = 0;
    std::string __Vtask_convert2string__717__Vfuncout;
    std::string __Vtask_convert2string__719__Vfuncout;
    std::string __Vtask_convert2string__721__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    IData/*31:0*/ unnamedblk593__DOT__j;
    unnamedblk593__DOT__j = 0;
    IData/*31:0*/ unnamedblk594__DOT__j;
    unnamedblk594__DOT__j = 0;
    IData/*31:0*/ unnamedblk595__DOT__j;
    unnamedblk595__DOT__j = 0;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_vreg>> vregs;
    VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem>> mems;
    IData/*31:0*/ endian;
    endian = 0;
    std::string prefix;
    __Vtemp_1 = ([&]() {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__713__Vfuncout);
        }(), __Vfunc_get_full_name__713__Vfuncout);
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@Map %@",0,
                  -1,&(prefix),-1,&(__Vtemp_1));
    this->__VnoInFunc_get_endian(vlSymsp, 0U, __Vfunc_get_endian__714__Vfuncout);
    endian = __Vfunc_get_endian__714__Vfuncout;
    __Vtemp_2 = Vrecorders_top___024unit::__Venumtab_enum_name77
        [(7U & endian)];
    VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@ -- %0# bytes (%@)",0,
                  -1,&(convert2string__Vfuncrtn),32,
                  ([&]() {
                    this->__VnoInFunc_get_n_bytes(vlSymsp, 0U, __Vfunc_get_n_bytes__715__Vfuncout);
                }(), __Vfunc_get_n_bytes__715__Vfuncout),
                  -1,&(__Vtemp_2));
    this->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
    unnamedblk593__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk593__DOT__j, regs.size())) {
        __Vtemp_3 = ([&]() {
                VL_NULL_CHECK(regs.at(unnamedblk593__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2148)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__717__Vfuncout);
            }(), __Vtask_convert2string__717__Vfuncout);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@\n%@",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__Vtemp_3));
        unnamedblk593__DOT__j = ((IData)(1U) + unnamedblk593__DOT__j);
    }
    this->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
    unnamedblk594__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk594__DOT__j, mems.size())) {
        __Vtemp_4 = ([&]() {
                VL_NULL_CHECK(mems.at(unnamedblk594__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2153)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__719__Vfuncout);
            }(), __Vtask_convert2string__719__Vfuncout);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@\n%@",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__Vtemp_4));
        unnamedblk594__DOT__j = ((IData)(1U) + unnamedblk594__DOT__j);
    }
    this->__VnoInFunc_get_virtual_registers(vlSymsp, vregs, 1U);
    unnamedblk595__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk595__DOT__j, vregs.size())) {
        __Vtemp_5 = ([&]() {
                VL_NULL_CHECK(vregs.at(unnamedblk595__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh", 2158)
                     ->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__721__Vfuncout);
            }(), __Vtask_convert2string__721__Vfuncout);
        VL_SFORMAT_NX(64,convert2string__Vfuncrtn,"%@\n%@",0,
                      -1,&(convert2string__Vfuncrtn),
                      -1,&(__Vtemp_5));
        unnamedblk595__DOT__j = ((IData)(1U) + unnamedblk595__DOT__j);
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_clone\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__722__Vfuncout;
    __Vfunc_uvm_report_enabled__722__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__722__verbosity;
    __Vfunc_uvm_report_enabled__722__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__722__severity;
    __Vfunc_uvm_report_enabled__722__severity = 0;
    std::string __Vfunc_uvm_report_enabled__722__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__723__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__724__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__725__Vfuncout;
    __Vtask_uvm_report_enabled__725__Vfuncout = 0;
    // Body
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__722__id = "UVM/REGMAP/NOCLONE"s;
                    __Vfunc_uvm_report_enabled__722__severity = 3U;
                    __Vfunc_uvm_report_enabled__722__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__723__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__723__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__724__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__724__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__722__verbosity, (IData)(__Vfunc_uvm_report_enabled__722__severity), __Vfunc_uvm_report_enabled__722__id, __Vtask_uvm_report_enabled__725__Vfuncout);
                    __Vfunc_uvm_report_enabled__722__Vfuncout 
                        = __Vtask_uvm_report_enabled__725__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__722__Vfuncout))) {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM/REGMAP/NOCLONE"s, "uvm_reg_map doesnt support clone()"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_map.svh"s, 0x00000876U, ""s, 1U);
    }
    clone__Vfuncrtn = VlNull{};
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_do_copy\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__728__Vfuncout;
    __Vfunc___Vbasic_randomize__728__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__728__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__728__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vbasic_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_base_addr = 0;
    __PVT__m_n_bytes = 0;
    __PVT__m_endian = 0;
    __PVT__m_byte_addressing = 0;
    __PVT__m_auto_predict = 0;
    __PVT__m_check_on_read = 0;
    __PVT__m_system_n_bytes = 0;
    __PVT__m_submaps.atDefault() = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_reg_map::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_base_addr:" + VL_TO_STRING(__PVT__m_base_addr);
    out += ", m_n_bytes:" + VL_TO_STRING(__PVT__m_n_bytes);
    out += ", m_endian:" + VL_TO_STRING(__PVT__m_endian);
    out += ", m_byte_addressing:" + VL_TO_STRING(__PVT__m_byte_addressing);
    out += ", m_sequence_wrapper:" + VL_TO_STRING(__PVT__m_sequence_wrapper);
    out += ", m_adapter:" + VL_TO_STRING(__PVT__m_adapter);
    out += ", m_sequencer:" + VL_TO_STRING(__PVT__m_sequencer);
    out += ", m_auto_predict:" + VL_TO_STRING(__PVT__m_auto_predict);
    out += ", m_check_on_read:" + VL_TO_STRING(__PVT__m_check_on_read);
    out += ", m_parent:" + VL_TO_STRING(__PVT__m_parent);
    out += ", m_system_n_bytes:" + VL_TO_STRING(__PVT__m_system_n_bytes);
    out += ", m_parent_map:" + VL_TO_STRING(__PVT__m_parent_map);
    out += ", m_submaps:" + VL_TO_STRING(__PVT__m_submaps);
    out += ", m_submap_rights:" + VL_TO_STRING(__PVT__m_submap_rights);
    out += ", m_regs_info:" + VL_TO_STRING(__PVT__m_regs_info);
    out += ", m_mems_info:" + VL_TO_STRING(__PVT__m_mems_info);
    out += ", m_regs_by_offset:" + VL_TO_STRING(__PVT__m_regs_by_offset);
    out += ", m_regs_by_offset_wo:" + VL_TO_STRING(__PVT__m_regs_by_offset_wo);
    out += ", m_mems_by_offset:" + VL_TO_STRING(__PVT__m_mems_by_offset);
    out += ", policy:" + VL_TO_STRING(__PVT__policy);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
