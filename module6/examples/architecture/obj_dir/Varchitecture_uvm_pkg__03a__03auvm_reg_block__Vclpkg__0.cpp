// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi111> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi111> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi111__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_block"s;
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_check_data_width(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ width, CData/*0:0*/ &check_data_width__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_check_data_width\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__Vfuncout;
    __Vfunc_uvm_report_enabled__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    std::string __Vfunc_uvm_report_enabled__1__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__4__Vfuncout;
    __Vtask_uvm_report_enabled__4__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((0x00000040U >= width)) {
            check_data_width__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__1__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__1__severity = 3U;
                        __Vfunc_uvm_report_enabled__1__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__2__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__3__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), __Vfunc_uvm_report_enabled__1__id, __Vtask_uvm_report_enabled__4__Vfuncout);
                        __Vfunc_uvm_report_enabled__1__Vfuncout 
                            = __Vtask_uvm_report_enabled__4__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__1__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Register model requires that UVM_REG_DATA_WIDTH be defined as %0# or greater. Currently defined as 64",0,
                                                                                32,
                                                                                width) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s, 0x000003e7U, ""s, 1U);
        }
        check_data_width__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>> &blks) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_get_root_blocks\n"); );
    // Body
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk624__DOT__blk;
    CData/*0:0*/ unnamedblk624__DOT__blk__Vfirst;
    unnamedblk624__DOT__blk__Vfirst = 0;
    if ((0U != this->__PVT__m_roots.first(unnamedblk624__DOT__blk))) {
        unnamedblk624__DOT__blk__Vfirst = 1U;
        while (((IData)(unnamedblk624__DOT__blk__Vfirst) 
                || (0U != this->__PVT__m_roots.next(unnamedblk624__DOT__blk)))) {
            unnamedblk624__DOT__blk__Vfirst = 0U;
            blks.push_back(unnamedblk624__DOT__blk);
        }
    }
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_blocks(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>> &blks, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor, IData/*31:0*/ &find_blocks__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_blocks\n"); );
    // Locals
    std::string __Vtask_get_full_name__6__Vfuncout;
    CData/*0:0*/ __Vfunc_uvm_is_match__9__Vfuncout;
    __Vfunc_uvm_is_match__9__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__9__expr;
    std::string __Vfunc_uvm_is_match__9__str;
    std::string __Vtask_get_full_name__10__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__11__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__11__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__12__Vfuncout;
    __Vfunc_uvm_re_match__12__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__12__re;
    std::string __Vfunc_uvm_re_match__12__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__12____Vincrement1;
    __Vfunc_uvm_re_match__12____Vincrement1 = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    IData/*31:0*/ unnamedblk625__DOT__idx;
    unnamedblk625__DOT__idx = 0;
    IData/*31:0*/ unnamedblk626__DOT__idx;
    unnamedblk626__DOT__idx = 0;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>> r;
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>> b;
    if ((VlNull{} != root)) {
        name = VL_CONCATN_NNN(VL_CONCATN_NNN(([&]() {
                        VL_NULL_CHECK(root, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1307)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__6__Vfuncout);
                    }(), __Vtask_get_full_name__6__Vfuncout), "."s), name);
        b = VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>>::consVC(root, 
                                                                                VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>>{});
    } else {
        this->__VnoInFunc_get_root_blocks(vlSymsp, b);
    }
    unnamedblk625__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk625__DOT__idx, b.size())) {
        r.push_back(b.at(unnamedblk625__DOT__idx));
        VL_NULL_CHECK(b.at(unnamedblk625__DOT__idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1314)->__VnoInFunc_get_blocks(vlSymsp, r, 1U);
        unnamedblk625__DOT__idx = ((IData)(1U) + unnamedblk625__DOT__idx);
    }
    blks.clear();
    unnamedblk626__DOT__idx = 0U;
    while (VL_LTS_III(32, unnamedblk626__DOT__idx, r.size())) {
        if (([&]() {
                    __Vfunc_uvm_is_match__9__str = 
                        VL_CVT_PACK_STR_NN(([&]() {
                                VL_NULL_CHECK(r.at(unnamedblk626__DOT__idx), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1320)
                                            ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__10__Vfuncout);
                            }(), __Vtask_get_full_name__10__Vfuncout));
                    __Vfunc_uvm_is_match__9__expr = name;
                    __Vfunc_uvm_glob_to_re__11__glob 
                        = __Vfunc_uvm_is_match__9__expr;
                    __Vfunc_uvm_glob_to_re__11__Vfuncout 
                        = __Vfunc_uvm_glob_to_re__11__glob;
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                        = __Vfunc_uvm_glob_to_re__11__Vfuncout;
                    __Vfunc_uvm_is_match__9__Vfuncout 
                        = (0U == ([&]() {
                                __Vfunc_uvm_re_match__12__str 
                                    = __Vfunc_uvm_is_match__9__str;
                                __Vfunc_uvm_re_match__12__re 
                                    = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                {
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                    if ((0U == VL_LEN_IN(__Vfunc_uvm_re_match__12__re))) {
                                        __Vfunc_uvm_re_match__12__Vfuncout = 0U;
                                        goto __Vlabel0;
                                    }
                                    if ((0x5eU == VL_GETC_N(__Vfunc_uvm_re_match__12__re,0U))) {
                                        __Vfunc_uvm_re_match__12__re 
                                            = VL_SUBSTR_N(__Vfunc_uvm_re_match__12__re,1U,
                                                          (VL_LEN_IN(__Vfunc_uvm_re_match__12__re) 
                                                           - (IData)(1U)));
                                    }
                                    while (((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                             != VL_LEN_IN(__Vfunc_uvm_re_match__12__str)) 
                                            & (0x2aU 
                                               != VL_GETC_N(__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                        if (((VL_GETC_N(__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                              != VL_GETC_N(__Vfunc_uvm_re_match__12__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                             & (0x3fU 
                                                != 
                                                VL_GETC_N(__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                            __Vfunc_uvm_re_match__12__Vfuncout = 1U;
                                            goto __Vlabel0;
                                        }
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                            = ((IData)(1U) 
                                               + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                            = ((IData)(1U) 
                                               + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                    }
                                    while ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                            != VL_LEN_IN(__Vfunc_uvm_re_match__12__str))) {
                                        if ((0x2aU 
                                             == VL_GETC_N(__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            if ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                 == 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__12__re))) {
                                                __Vfunc_uvm_re_match__12__Vfuncout = 0U;
                                                goto __Vlabel0;
                                            }
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                        } else if (
                                                   ((VL_GETC_N(__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                     == 
                                                     VL_GETC_N(__Vfunc_uvm_re_match__12__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                    | (0x3fU 
                                                       == 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                        } else {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                            __Vfunc_uvm_re_match__12____Vincrement1 
                                                = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                = ((IData)(1U) 
                                                   + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                = __Vfunc_uvm_re_match__12____Vincrement1;
                                        }
                                    }
                                    while ((VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                       VL_LEN_IN(__Vfunc_uvm_re_match__12__re)) 
                                            & (0x2aU 
                                               == VL_GETC_N(__Vfunc_uvm_re_match__12__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                            = ((IData)(1U) 
                                               + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                    }
                                    __Vfunc_uvm_re_match__12__Vfuncout 
                                        = ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                            == VL_LEN_IN(__Vfunc_uvm_re_match__12__re))
                                            ? 0U : 1U);
                                    __Vlabel0: ;
                                }
                            }(), __Vfunc_uvm_re_match__12__Vfuncout));
                }(), (IData)(__Vfunc_uvm_is_match__9__Vfuncout))) {
            blks.push_back(r.at(unnamedblk626__DOT__idx));
        }
        unnamedblk626__DOT__idx = ((IData)(1U) + unnamedblk626__DOT__idx);
    }
    find_blocks__Vfuncrtn = blks.size();
}

void Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_block(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> root, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> accessor, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> &find_block__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_uvm_pkg__03a__03auvm_reg_block__Vclpkg::__VnoInFunc_find_block\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_find_blocks__13__Vfuncout;
    __Vfunc_find_blocks__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__Vfuncout;
    __Vfunc_uvm_report_enabled__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__14__verbosity;
    __Vfunc_uvm_report_enabled__14__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__14__severity;
    __Vfunc_uvm_report_enabled__14__severity = 0;
    std::string __Vfunc_uvm_report_enabled__14__id;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__17__Vfuncout;
    __Vtask_uvm_report_enabled__17__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__18__id;
    std::string __Vtask_uvm_report_warning__18__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__verbosity;
    __Vtask_uvm_report_warning__18__verbosity = 0;
    std::string __Vtask_uvm_report_warning__18__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__18__line;
    __Vtask_uvm_report_warning__18__line = 0;
    std::string __Vtask_uvm_report_warning__18__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__18__report_enabled_checked;
    __Vtask_uvm_report_warning__18__report_enabled_checked = 0;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>> blks;
    {
        if ((1U & (~ (0U != ([&]() {
                                this->__VnoInFunc_find_blocks(vlSymsp, name, blks, root, accessor, __Vfunc_find_blocks__13__Vfuncout);
                            }(), __Vfunc_find_blocks__13__Vfuncout))))) {
            find_block__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if (VL_LTS_III(32, 1U, blks.size())) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__14__id = "MRTH1BLK"s;
                            __Vfunc_uvm_report_enabled__14__severity = 1U;
                            __Vfunc_uvm_report_enabled__14__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__15__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__16__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__14__verbosity, (IData)(__Vfunc_uvm_report_enabled__14__severity), __Vfunc_uvm_report_enabled__14__id, __Vtask_uvm_report_enabled__17__Vfuncout);
                            __Vfunc_uvm_report_enabled__14__Vfuncout 
                                = __Vtask_uvm_report_enabled__17__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__14__Vfuncout))) {
                __Vtask_uvm_report_warning__18__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__18__context_name = ""s;
                __Vtask_uvm_report_warning__18__line = 0x0000053dU;
                __Vtask_uvm_report_warning__18__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__18__verbosity = 0U;
                __Vtask_uvm_report_warning__18__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("More than one block matched the name \""s, name), "\"."s));
                    __Vtask_uvm_report_warning__18__id = "MRTH1BLK"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__18__id, __Vtask_uvm_report_warning__18__message, __Vtask_uvm_report_warning__18__verbosity, __Vtask_uvm_report_warning__18__filename, __Vtask_uvm_report_warning__18__line, __Vtask_uvm_report_warning__18__context_name, (IData)(__Vtask_uvm_report_warning__18__report_enabled_checked));
                }
            }
            find_block__Vfuncrtn = blks.at(0U);
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_object_type\n"); );
        // Locals
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi111> __Vfunc_get__0__Vfuncout;
        // Body
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi111__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
        get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> tmp;
        tmp = ((""s == name) ? VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_reg_block, vlProcess, vlSymsp, ""s, 0U)
                : VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_reg_block, vlProcess, vlSymsp, name, 0U));
        create__Vfuncrtn = tmp;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_type_name\n"); );
        // Body
        get_type_name__Vfuncrtn = "uvm_reg_block"s;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unlock_model(Varchitecture__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unlock_model\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk1__DOT__blk_;
        CData/*0:0*/ unnamedblk1__DOT__blk___Vfirst;
        unnamedblk1__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk2__DOT__b;
        CData/*0:0*/ unnamedblk2__DOT__b__Vfirst;
        unnamedblk2__DOT__b__Vfirst = 0;
        VlAssocArray<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>, CData/*0:0*/> s;
        s.atDefault() = 0;
        s = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.clear();
        if ((0U != this->__PVT__blks.first(unnamedblk1__DOT__blk_))) {
            unnamedblk1__DOT__blk___Vfirst = 1U;
            while (((IData)(unnamedblk1__DOT__blk___Vfirst) 
                    || (0U != this->__PVT__blks.next(unnamedblk1__DOT__blk_)))) {
                unnamedblk1__DOT__blk___Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk1__DOT__blk_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 206)
                    ->__VnoInFunc_unlock_model(vlSymsp);
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots 
            = s;
        if ((0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.first(unnamedblk2__DOT__b))) {
            unnamedblk2__DOT__b__Vfirst = 1U;
            while (((IData)(unnamedblk2__DOT__b__Vfirst) 
                    || (0U != vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.next(unnamedblk2__DOT__b)))) {
                unnamedblk2__DOT__b__Vfirst = 0U;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots
                    .at(unnamedblk2__DOT__b) = 0U;
            }
        }
        this->__PVT__locked = 0U;
    }

    VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_wait_for_lock(Varchitecture__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_wait_for_lock\n"); );
        // Body
        VL_KEEP_THIS;
        CData/*0:0*/ __VdynTrigger_hb231b4df__0;
        __VdynTrigger_hb231b4df__0 = 0;
        __VdynTrigger_hb231b4df__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hb231b4df__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_reg_block.m_uvm_lock_model_complete)", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 
                                                         216);
            __VdynTrigger_hb231b4df__0 = this->__PVT__m_uvm_lock_model_complete.isFired();
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb231b4df__0);
            co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                         nullptr, 
                                                         "@([event] uvm_pkg::uvm_reg_block.m_uvm_lock_model_complete)", 
                                                         "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 
                                                         216);
            this->__PVT__m_uvm_lock_model_complete.clearFired();
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([event] uvm_pkg::uvm_reg_block.m_uvm_lock_model_complete)", 
                                                     "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 
                                                     216);
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ is_read, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample\n"); );
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_lock(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ v) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_lock\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk3__DOT__idx;
        CData/*0:0*/ unnamedblk3__DOT__idx__Vfirst;
        unnamedblk3__DOT__idx__Vfirst = 0;
        this->__PVT__locked = v;
        if ((0U != this->__PVT__blks.first(unnamedblk3__DOT__idx))) {
            unnamedblk3__DOT__idx__Vfirst = 1U;
            while (((IData)(unnamedblk3__DOT__idx__Vfirst) 
                    || (0U != this->__PVT__blks.next(unnamedblk3__DOT__idx)))) {
                unnamedblk3__DOT__idx__Vfirst = 0U;
                VL_NULL_CHECK(unnamedblk3__DOT__idx, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 966)
                    ->__VnoInFunc_set_lock(vlSymsp, v);
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unregister(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> m) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_unregister\n"); );
        // Locals
        CData/*0:0*/ __Vtask_is_in_map__5__Vfuncout;
        __Vtask_is_in_map__5__Vfuncout = 0;
        CData/*0:0*/ __Vtask_is_in_map__6__Vfuncout;
        __Vtask_is_in_map__6__Vfuncout = 0;
        CData/*0:0*/ __Vtask_is_in_map__7__Vfuncout;
        __Vtask_is_in_map__7__Vfuncout = 0;
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk4__DOT__idx;
        CData/*0:0*/ unnamedblk4__DOT__idx__Vfirst;
        unnamedblk4__DOT__idx__Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk5__DOT__idx;
        CData/*0:0*/ unnamedblk5__DOT__idx__Vfirst;
        unnamedblk5__DOT__idx__Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk6__DOT__idx;
        CData/*0:0*/ unnamedblk6__DOT__idx__Vfirst;
        unnamedblk6__DOT__idx__Vfirst = 0;
        if ((0U != this->__PVT__regs.first(unnamedblk4__DOT__idx))) {
            unnamedblk4__DOT__idx__Vfirst = 1U;
            while (((IData)(unnamedblk4__DOT__idx__Vfirst) 
                    || (0U != this->__PVT__regs.next(unnamedblk4__DOT__idx)))) {
                unnamedblk4__DOT__idx__Vfirst = 0U;
                if (([&]() {
                            VL_NULL_CHECK(unnamedblk4__DOT__idx, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 972)
                     ->__VnoInFunc_is_in_map(vlSymsp, m, __Vtask_is_in_map__5__Vfuncout);
                        }(), (IData)(__Vtask_is_in_map__5__Vfuncout))) {
                    this->__PVT__regs.erase(unnamedblk4__DOT__idx);
                }
            }
        }
        if ((0U != this->__PVT__mems.first(unnamedblk5__DOT__idx))) {
            unnamedblk5__DOT__idx__Vfirst = 1U;
            while (((IData)(unnamedblk5__DOT__idx__Vfirst) 
                    || (0U != this->__PVT__mems.next(unnamedblk5__DOT__idx)))) {
                unnamedblk5__DOT__idx__Vfirst = 0U;
                if (([&]() {
                            VL_NULL_CHECK(unnamedblk5__DOT__idx, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 976)
                     ->__VnoInFunc_is_in_map(vlSymsp, m, __Vtask_is_in_map__6__Vfuncout);
                        }(), (IData)(__Vtask_is_in_map__6__Vfuncout))) {
                    this->__PVT__mems.erase(unnamedblk5__DOT__idx);
                }
            }
        }
        if ((0U != this->__PVT__vregs.first(unnamedblk6__DOT__idx))) {
            unnamedblk6__DOT__idx__Vfirst = 1U;
            while (((IData)(unnamedblk6__DOT__idx__Vfirst) 
                    || (0U != this->__PVT__vregs.next(unnamedblk6__DOT__idx)))) {
                unnamedblk6__DOT__idx__Vfirst = 0U;
                if (([&]() {
                            VL_NULL_CHECK(unnamedblk6__DOT__idx, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 980)
                     ->__VnoInFunc_is_in_map(vlSymsp, m, __Vtask_is_in_map__7__Vfuncout);
                        }(), (IData)(__Vtask_is_in_map__7__Vfuncout))) {
                    this->__PVT__vregs.erase(unnamedblk6__DOT__idx);
                }
            }
        }
        this->__PVT__maps.erase(m);
    }

    Varchitecture_uvm_pkg__03a__03auvm_reg_block::Varchitecture_uvm_pkg__03a__03auvm_reg_block(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ has_coverage)
      : Varchitecture_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::new\n"); );
        // Locals
        IData/*31:0*/ __Vtemp_1;
        // Body
        _ctor_var_reset(vlSymsp);
        this->__PVT__default_hdl_path = "RTL"s;
        this->__PVT__default_path = 3U;
        ;
        this->__PVT__hdl_paths_pool = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_object_string_pool__Tz211, vlProcess, vlSymsp, "hdl_paths"s);
        this->__PVT__has_cover = has_coverage;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots
                    .at(VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>{this}) = 0U;
        if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names.exists(name)) {
            __Vtemp_1 = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                         .at(name));
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                    .at(name) = __Vtemp_1;
        } else {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                    .at(name) = 1U;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_configure(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> parent, std::string hdl_path) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_configure\n"); );
        // Body
        this->__PVT__parent = parent;
        if ((VlNull{} != parent)) {
            VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1025)
                    ->__VnoInFunc_add_block(vlSymsp, 
                                            VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>{this});
        }
        this->__VnoInFunc_add_hdl_path(vlSymsp, hdl_path, "RTL"s);
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_block(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> blk) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_block\n"); );
        // Locals
        CData/*0:0*/ __Vfunc_is_locked__12__Vfuncout;
        __Vfunc_is_locked__12__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__13__Vfuncout;
        __Vfunc_uvm_report_enabled__13__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
        __Vfunc_uvm_report_enabled__13__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
        __Vfunc_uvm_report_enabled__13__severity = 0;
        std::string __Vfunc_uvm_report_enabled__13__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__16__Vfuncout;
        __Vtask_uvm_report_enabled__16__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__17__id;
        std::string __Vtask_uvm_report_error__17__message;
        IData/*31:0*/ __Vtask_uvm_report_error__17__verbosity;
        __Vtask_uvm_report_error__17__verbosity = 0;
        std::string __Vtask_uvm_report_error__17__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__17__line;
        __Vtask_uvm_report_error__17__line = 0;
        std::string __Vtask_uvm_report_error__17__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__17__report_enabled_checked;
        __Vtask_uvm_report_error__17__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__21__Vfuncout;
        __Vfunc_uvm_report_enabled__21__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__21__verbosity;
        __Vfunc_uvm_report_enabled__21__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__21__severity;
        __Vfunc_uvm_report_enabled__21__severity = 0;
        std::string __Vfunc_uvm_report_enabled__21__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__24__Vfuncout;
        __Vtask_uvm_report_enabled__24__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__25__id;
        std::string __Vtask_uvm_report_error__25__message;
        IData/*31:0*/ __Vtask_uvm_report_error__25__verbosity;
        __Vtask_uvm_report_error__25__verbosity = 0;
        std::string __Vtask_uvm_report_error__25__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__25__line;
        __Vtask_uvm_report_error__25__line = 0;
        std::string __Vtask_uvm_report_error__25__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__25__report_enabled_checked;
        __Vtask_uvm_report_error__25__report_enabled_checked = 0;
        std::string __Vtask_get_name__26__Vfuncout;
        std::string __Vfunc_get_name__27__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
        std::string __Vtask_get_name__31__Vfuncout;
        IData/*31:0*/ __Vtemp_1;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        std::string unnamedblk596__DOT__name;
        IData/*31:0*/ __Vincrement1;
        __Vincrement1 = 0;
        {
            if (([&]() {
                        this->__VnoInFunc_is_locked(vlSymsp, __Vfunc_is_locked__12__Vfuncout);
                    }(), (IData)(__Vfunc_is_locked__12__Vfuncout))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__13__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__13__severity = 2U;
                                __Vfunc_uvm_report_enabled__13__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__14__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__15__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__15__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__13__verbosity, (IData)(__Vfunc_uvm_report_enabled__13__severity), __Vfunc_uvm_report_enabled__13__id, __Vtask_uvm_report_enabled__16__Vfuncout);
                                __Vfunc_uvm_report_enabled__13__Vfuncout 
                                    = __Vtask_uvm_report_enabled__16__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__13__Vfuncout))) {
                    __Vtask_uvm_report_error__17__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__17__context_name = ""s;
                    __Vtask_uvm_report_error__17__line = 0x0000040aU;
                    __Vtask_uvm_report_error__17__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__17__verbosity = 0U;
                    __Vtask_uvm_report_error__17__message = "Cannot add subblock to locked block model"s;
                    __Vtask_uvm_report_error__17__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__18__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__17__id, __Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, __Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, __Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__blks.exists(blk)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__21__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__21__severity = 2U;
                                __Vfunc_uvm_report_enabled__21__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__22__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__23__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__21__verbosity, (IData)(__Vfunc_uvm_report_enabled__21__severity), __Vfunc_uvm_report_enabled__21__id, __Vtask_uvm_report_enabled__24__Vfuncout);
                                __Vfunc_uvm_report_enabled__21__Vfuncout 
                                    = __Vtask_uvm_report_enabled__24__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__21__Vfuncout))) {
                    __Vtask_uvm_report_error__25__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__25__context_name = ""s;
                    __Vtask_uvm_report_error__25__line = 0x0000040fU;
                    __Vtask_uvm_report_error__25__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__25__verbosity = 0U;
                    __Vtask_uvm_report_error__25__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Subblock '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1039)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__26__Vfuncout);
                                            }(), __Vtask_get_name__26__Vfuncout)), "' has already been registered with block '"s), 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__27__Vfuncout);
                                    }(), __Vfunc_get_name__27__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__25__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__28__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__28__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__29__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__29__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__25__id, __Vtask_uvm_report_error__25__message, __Vtask_uvm_report_error__25__verbosity, __Vtask_uvm_report_error__25__filename, __Vtask_uvm_report_error__25__line, __Vtask_uvm_report_error__25__context_name, (IData)(__Vtask_uvm_report_error__25__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__blks.at(blk) = __Vincrement1;
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.exists(blk)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_roots.erase(blk);
            }
            VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1046)
                    ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__31__Vfuncout);
            unnamedblk596__DOT__name = __Vtask_get_name__31__Vfuncout;
            if (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names.exists(unnamedblk596__DOT__name)) {
                __Vtemp_1 = (vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                             .at(unnamedblk596__DOT__name) 
                             - (IData)(1U));
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                    .at(unnamedblk596__DOT__name) = __Vtemp_1;
            }
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_reg(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> rg) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_reg\n"); );
        // Locals
        CData/*0:0*/ __Vfunc_is_locked__32__Vfuncout;
        __Vfunc_is_locked__32__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
        __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
        __Vfunc_uvm_report_enabled__33__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
        __Vfunc_uvm_report_enabled__33__severity = 0;
        std::string __Vfunc_uvm_report_enabled__33__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
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
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__38__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__39__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__41__Vfuncout;
        __Vfunc_uvm_report_enabled__41__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
        __Vfunc_uvm_report_enabled__41__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
        __Vfunc_uvm_report_enabled__41__severity = 0;
        std::string __Vfunc_uvm_report_enabled__41__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__44__Vfuncout;
        __Vtask_uvm_report_enabled__44__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__45__id;
        std::string __Vtask_uvm_report_error__45__message;
        IData/*31:0*/ __Vtask_uvm_report_error__45__verbosity;
        __Vtask_uvm_report_error__45__verbosity = 0;
        std::string __Vtask_uvm_report_error__45__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__45__line;
        __Vtask_uvm_report_error__45__line = 0;
        std::string __Vtask_uvm_report_error__45__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__45__report_enabled_checked;
        __Vtask_uvm_report_error__45__report_enabled_checked = 0;
        std::string __Vtask_get_name__46__Vfuncout;
        std::string __Vfunc_get_name__47__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__48__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__49__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __Vincrement2;
        __Vincrement2 = 0;
        {
            if (([&]() {
                        this->__VnoInFunc_is_locked(vlSymsp, __Vfunc_is_locked__32__Vfuncout);
                    }(), (IData)(__Vfunc_is_locked__32__Vfuncout))) {
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
                    __Vtask_uvm_report_error__37__line = 0x00000420U;
                    __Vtask_uvm_report_error__37__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__37__verbosity = 0U;
                    __Vtask_uvm_report_error__37__message = "Cannot add register to locked block model"s;
                    __Vtask_uvm_report_error__37__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__38__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__38__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__39__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__39__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__37__id, __Vtask_uvm_report_error__37__message, __Vtask_uvm_report_error__37__verbosity, __Vtask_uvm_report_error__37__filename, __Vtask_uvm_report_error__37__line, __Vtask_uvm_report_error__37__context_name, (IData)(__Vtask_uvm_report_error__37__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__regs.exists(rg)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__41__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__41__severity = 2U;
                                __Vfunc_uvm_report_enabled__41__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__42__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__42__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__43__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__43__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__41__verbosity, (IData)(__Vfunc_uvm_report_enabled__41__severity), __Vfunc_uvm_report_enabled__41__id, __Vtask_uvm_report_enabled__44__Vfuncout);
                                __Vfunc_uvm_report_enabled__41__Vfuncout 
                                    = __Vtask_uvm_report_enabled__44__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__41__Vfuncout))) {
                    __Vtask_uvm_report_error__45__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__45__context_name = ""s;
                    __Vtask_uvm_report_error__45__line = 0x00000426U;
                    __Vtask_uvm_report_error__45__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__45__verbosity = 0U;
                    __Vtask_uvm_report_error__45__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Register '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1062)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__46__Vfuncout);
                                            }(), __Vtask_get_name__46__Vfuncout)), "' has already been registered with block '"s), 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__47__Vfuncout);
                                    }(), __Vfunc_get_name__47__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__45__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__48__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__48__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__49__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__49__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__45__id, __Vtask_uvm_report_error__45__message, __Vtask_uvm_report_error__45__verbosity, __Vtask_uvm_report_error__45__filename, __Vtask_uvm_report_error__45__line, __Vtask_uvm_report_error__45__context_name, (IData)(__Vtask_uvm_report_error__45__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            __Vincrement2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__regs.at(rg) = __Vincrement2;
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_vreg(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> vreg) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_vreg\n"); );
        // Locals
        CData/*0:0*/ __Vfunc_is_locked__51__Vfuncout;
        __Vfunc_is_locked__51__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__52__Vfuncout;
        __Vfunc_uvm_report_enabled__52__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__52__verbosity;
        __Vfunc_uvm_report_enabled__52__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__52__severity;
        __Vfunc_uvm_report_enabled__52__severity = 0;
        std::string __Vfunc_uvm_report_enabled__52__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__53__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__54__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__55__Vfuncout;
        __Vtask_uvm_report_enabled__55__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__56__id;
        std::string __Vtask_uvm_report_error__56__message;
        IData/*31:0*/ __Vtask_uvm_report_error__56__verbosity;
        __Vtask_uvm_report_error__56__verbosity = 0;
        std::string __Vtask_uvm_report_error__56__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__56__line;
        __Vtask_uvm_report_error__56__line = 0;
        std::string __Vtask_uvm_report_error__56__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__56__report_enabled_checked;
        __Vtask_uvm_report_error__56__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__60__Vfuncout;
        __Vfunc_uvm_report_enabled__60__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
        __Vfunc_uvm_report_enabled__60__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
        __Vfunc_uvm_report_enabled__60__severity = 0;
        std::string __Vfunc_uvm_report_enabled__60__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__63__Vfuncout;
        __Vtask_uvm_report_enabled__63__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__64__id;
        std::string __Vtask_uvm_report_error__64__message;
        IData/*31:0*/ __Vtask_uvm_report_error__64__verbosity;
        __Vtask_uvm_report_error__64__verbosity = 0;
        std::string __Vtask_uvm_report_error__64__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__64__line;
        __Vtask_uvm_report_error__64__line = 0;
        std::string __Vtask_uvm_report_error__64__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__64__report_enabled_checked;
        __Vtask_uvm_report_error__64__report_enabled_checked = 0;
        std::string __Vtask_get_name__65__Vfuncout;
        std::string __Vfunc_get_name__66__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__67__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__68__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __Vincrement3;
        __Vincrement3 = 0;
        {
            if (([&]() {
                        this->__VnoInFunc_is_locked(vlSymsp, __Vfunc_is_locked__51__Vfuncout);
                    }(), (IData)(__Vfunc_is_locked__51__Vfuncout))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__52__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__52__severity = 2U;
                                __Vfunc_uvm_report_enabled__52__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__53__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__53__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__54__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__54__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__52__verbosity, (IData)(__Vfunc_uvm_report_enabled__52__severity), __Vfunc_uvm_report_enabled__52__id, __Vtask_uvm_report_enabled__55__Vfuncout);
                                __Vfunc_uvm_report_enabled__52__Vfuncout 
                                    = __Vtask_uvm_report_enabled__55__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__52__Vfuncout))) {
                    __Vtask_uvm_report_error__56__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__56__context_name = ""s;
                    __Vtask_uvm_report_error__56__line = 0x00000432U;
                    __Vtask_uvm_report_error__56__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__56__verbosity = 0U;
                    __Vtask_uvm_report_error__56__message = "Cannot add virtual register to locked block model"s;
                    __Vtask_uvm_report_error__56__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__57__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__58__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__56__id, __Vtask_uvm_report_error__56__message, __Vtask_uvm_report_error__56__verbosity, __Vtask_uvm_report_error__56__filename, __Vtask_uvm_report_error__56__line, __Vtask_uvm_report_error__56__context_name, (IData)(__Vtask_uvm_report_error__56__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__vregs.exists(vreg)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__60__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__60__severity = 2U;
                                __Vfunc_uvm_report_enabled__60__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__61__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__61__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__62__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__62__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__60__verbosity, (IData)(__Vfunc_uvm_report_enabled__60__severity), __Vfunc_uvm_report_enabled__60__id, __Vtask_uvm_report_enabled__63__Vfuncout);
                                __Vfunc_uvm_report_enabled__60__Vfuncout 
                                    = __Vtask_uvm_report_enabled__63__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__60__Vfuncout))) {
                    __Vtask_uvm_report_error__64__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__64__context_name = ""s;
                    __Vtask_uvm_report_error__64__line = 0x00000438U;
                    __Vtask_uvm_report_error__64__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__64__verbosity = 0U;
                    __Vtask_uvm_report_error__64__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Virtual register '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(vreg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1080)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__65__Vfuncout);
                                            }(), __Vtask_get_name__65__Vfuncout)), "' has already been registered with block '"s), 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__66__Vfuncout);
                                    }(), __Vfunc_get_name__66__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__64__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__67__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__67__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__68__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__68__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__64__id, __Vtask_uvm_report_error__64__message, __Vtask_uvm_report_error__64__verbosity, __Vtask_uvm_report_error__64__filename, __Vtask_uvm_report_error__64__line, __Vtask_uvm_report_error__64__context_name, (IData)(__Vtask_uvm_report_error__64__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            __Vincrement3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__vregs.at(vreg) = __Vincrement3;
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_mem(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> mem) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_mem\n"); );
        // Locals
        CData/*0:0*/ __Vfunc_is_locked__70__Vfuncout;
        __Vfunc_is_locked__70__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__71__Vfuncout;
        __Vfunc_uvm_report_enabled__71__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__71__verbosity;
        __Vfunc_uvm_report_enabled__71__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__71__severity;
        __Vfunc_uvm_report_enabled__71__severity = 0;
        std::string __Vfunc_uvm_report_enabled__71__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__72__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__73__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__74__Vfuncout;
        __Vtask_uvm_report_enabled__74__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__75__id;
        std::string __Vtask_uvm_report_error__75__message;
        IData/*31:0*/ __Vtask_uvm_report_error__75__verbosity;
        __Vtask_uvm_report_error__75__verbosity = 0;
        std::string __Vtask_uvm_report_error__75__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__75__line;
        __Vtask_uvm_report_error__75__line = 0;
        std::string __Vtask_uvm_report_error__75__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__75__report_enabled_checked;
        __Vtask_uvm_report_error__75__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__76__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__77__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__79__Vfuncout;
        __Vfunc_uvm_report_enabled__79__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__79__verbosity;
        __Vfunc_uvm_report_enabled__79__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__79__severity;
        __Vfunc_uvm_report_enabled__79__severity = 0;
        std::string __Vfunc_uvm_report_enabled__79__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__80__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__81__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__82__Vfuncout;
        __Vtask_uvm_report_enabled__82__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__83__id;
        std::string __Vtask_uvm_report_error__83__message;
        IData/*31:0*/ __Vtask_uvm_report_error__83__verbosity;
        __Vtask_uvm_report_error__83__verbosity = 0;
        std::string __Vtask_uvm_report_error__83__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__83__line;
        __Vtask_uvm_report_error__83__line = 0;
        std::string __Vtask_uvm_report_error__83__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__83__report_enabled_checked;
        __Vtask_uvm_report_error__83__report_enabled_checked = 0;
        std::string __Vtask_get_name__84__Vfuncout;
        std::string __Vfunc_get_name__85__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ __Vincrement4;
        __Vincrement4 = 0;
        {
            if (([&]() {
                        this->__VnoInFunc_is_locked(vlSymsp, __Vfunc_is_locked__70__Vfuncout);
                    }(), (IData)(__Vfunc_is_locked__70__Vfuncout))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__71__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__71__severity = 2U;
                                __Vfunc_uvm_report_enabled__71__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__72__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__72__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__73__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__73__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__71__verbosity, (IData)(__Vfunc_uvm_report_enabled__71__severity), __Vfunc_uvm_report_enabled__71__id, __Vtask_uvm_report_enabled__74__Vfuncout);
                                __Vfunc_uvm_report_enabled__71__Vfuncout 
                                    = __Vtask_uvm_report_enabled__74__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__71__Vfuncout))) {
                    __Vtask_uvm_report_error__75__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__75__context_name = ""s;
                    __Vtask_uvm_report_error__75__line = 0x00000443U;
                    __Vtask_uvm_report_error__75__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__75__verbosity = 0U;
                    __Vtask_uvm_report_error__75__message = "Cannot add memory to locked block model"s;
                    __Vtask_uvm_report_error__75__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__76__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__76__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__77__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__77__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__75__id, __Vtask_uvm_report_error__75__message, __Vtask_uvm_report_error__75__verbosity, __Vtask_uvm_report_error__75__filename, __Vtask_uvm_report_error__75__line, __Vtask_uvm_report_error__75__context_name, (IData)(__Vtask_uvm_report_error__75__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__mems.exists(mem)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__79__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__79__severity = 2U;
                                __Vfunc_uvm_report_enabled__79__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__80__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__80__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__81__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__81__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__79__verbosity, (IData)(__Vfunc_uvm_report_enabled__79__severity), __Vfunc_uvm_report_enabled__79__id, __Vtask_uvm_report_enabled__82__Vfuncout);
                                __Vfunc_uvm_report_enabled__79__Vfuncout 
                                    = __Vtask_uvm_report_enabled__82__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__79__Vfuncout))) {
                    __Vtask_uvm_report_error__83__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__83__context_name = ""s;
                    __Vtask_uvm_report_error__83__line = 0x00000449U;
                    __Vtask_uvm_report_error__83__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__83__verbosity = 0U;
                    __Vtask_uvm_report_error__83__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Memory '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1097)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__84__Vfuncout);
                                            }(), __Vtask_get_name__84__Vfuncout)), "' has already been registered with block '"s), 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__85__Vfuncout);
                                    }(), __Vfunc_get_name__85__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__83__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__86__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__86__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__87__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__83__id, __Vtask_uvm_report_error__83__message, __Vtask_uvm_report_error__83__verbosity, __Vtask_uvm_report_error__83__filename, __Vtask_uvm_report_error__83__line, __Vtask_uvm_report_error__83__context_name, (IData)(__Vtask_uvm_report_error__83__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            __Vincrement4 = vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id 
                = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__id);
            this->__PVT__mems.at(mem) = __Vincrement4;
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_parent(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> parent) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_parent\n"); );
        // Body
        if ((VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>{this} 
             != parent)) {
            this->__PVT__parent = parent;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_locked__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_locked\n"); );
        // Body
        is_locked__Vfuncrtn = this->__PVT__locked;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_lock_model(Varchitecture__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_lock_model\n"); );
        // Locals
        CData/*0:0*/ __Vfunc_is_locked__89__Vfuncout;
        __Vfunc_is_locked__89__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_get_max_size__93__Vfuncout;
        __Vfunc_get_max_size__93__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_get_max_size__94__Vfuncout;
        __Vfunc_get_max_size__94__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_get_max_size__95__Vfuncout;
        __Vfunc_get_max_size__95__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_get_max_size__96__Vfuncout;
        __Vfunc_get_max_size__96__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_get_max_size__97__Vfuncout;
        __Vfunc_get_max_size__97__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__98__Vfuncout;
        __Vfunc_uvm_report_enabled__98__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__98__verbosity;
        __Vfunc_uvm_report_enabled__98__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__98__severity;
        __Vfunc_uvm_report_enabled__98__severity = 0;
        std::string __Vfunc_uvm_report_enabled__98__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__101__Vfuncout;
        __Vtask_uvm_report_enabled__101__Vfuncout = 0;
        std::string __Vfunc_get_name__104__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__105__Vfuncout;
        __Vfunc_uvm_report_enabled__105__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__105__verbosity;
        __Vfunc_uvm_report_enabled__105__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__105__severity;
        __Vfunc_uvm_report_enabled__105__severity = 0;
        std::string __Vfunc_uvm_report_enabled__105__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__108__Vfuncout;
        __Vtask_uvm_report_enabled__108__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__109__id;
        std::string __Vtask_uvm_report_error__109__message;
        IData/*31:0*/ __Vtask_uvm_report_error__109__verbosity;
        __Vtask_uvm_report_error__109__verbosity = 0;
        std::string __Vtask_uvm_report_error__109__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__109__line;
        __Vtask_uvm_report_error__109__line = 0;
        std::string __Vtask_uvm_report_error__109__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__109__report_enabled_checked;
        __Vtask_uvm_report_error__109__report_enabled_checked = 0;
        std::string __Vfunc_get_name__110__Vfuncout;
        std::string __Vfunc_get_name__111__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__112__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__113__Vfuncout;
        std::string __Vtemp_1;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk597__DOT__rg_;
        CData/*0:0*/ unnamedblk597__DOT__rg___Vfirst;
        unnamedblk597__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk597__DOT__unnamedblk598__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk599__DOT__mem_;
        CData/*0:0*/ unnamedblk599__DOT__mem___Vfirst;
        unnamedblk599__DOT__mem___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk599__DOT__unnamedblk600__DOT__mem;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk601__DOT__blk_;
        CData/*0:0*/ unnamedblk601__DOT__blk___Vfirst;
        unnamedblk601__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk601__DOT__unnamedblk602__DOT__blk;
        IData/*31:0*/ unnamedblk603__DOT__max_size;
        unnamedblk603__DOT__max_size = 0;
        {
            if (([&]() {
                        this->__VnoInFunc_is_locked(vlSymsp, __Vfunc_is_locked__89__Vfuncout);
                    }(), (IData)(__Vfunc_is_locked__89__Vfuncout))) {
                goto __Vlabel0;
            }
            this->__PVT__locked = 1U;
            if ((0U != this->__PVT__regs.first(unnamedblk597__DOT__rg_))) {
                unnamedblk597__DOT__rg___Vfirst = 1U;
                while (((IData)(unnamedblk597__DOT__rg___Vfirst) 
                        || (0U != this->__PVT__regs.next(unnamedblk597__DOT__rg_)))) {
                    unnamedblk597__DOT__rg___Vfirst = 0U;
                    unnamedblk597__DOT__unnamedblk598__DOT__rg 
                        = unnamedblk597__DOT__rg_;
                    VL_NULL_CHECK(unnamedblk597__DOT__unnamedblk598__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1130)
                    ->__VnoInFunc_Xlock_modelX(vlSymsp);
                }
            }
            if ((0U != this->__PVT__mems.first(unnamedblk599__DOT__mem_))) {
                unnamedblk599__DOT__mem___Vfirst = 1U;
                while (((IData)(unnamedblk599__DOT__mem___Vfirst) 
                        || (0U != this->__PVT__mems.next(unnamedblk599__DOT__mem_)))) {
                    unnamedblk599__DOT__mem___Vfirst = 0U;
                    unnamedblk599__DOT__unnamedblk600__DOT__mem 
                        = unnamedblk599__DOT__mem_;
                    VL_NULL_CHECK(unnamedblk599__DOT__unnamedblk600__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1135)
                    ->__VnoInFunc_Xlock_modelX(vlSymsp);
                }
            }
            if ((0U != this->__PVT__blks.first(unnamedblk601__DOT__blk_))) {
                unnamedblk601__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk601__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk601__DOT__blk_)))) {
                    unnamedblk601__DOT__blk___Vfirst = 0U;
                    unnamedblk601__DOT__unnamedblk602__DOT__blk 
                        = unnamedblk601__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk601__DOT__unnamedblk602__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1140)
                    ->__VnoInFunc_lock_model(vlSymsp);
                }
            }
            if ((VlNull{} == this->__PVT__parent)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__93__Vfuncout);
                unnamedblk603__DOT__max_size = __Vfunc_get_max_size__93__Vfuncout;
                if ((([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__94__Vfuncout);
                            }(), __Vfunc_get_max_size__94__Vfuncout) 
                     > unnamedblk603__DOT__max_size)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_field__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__95__Vfuncout);
                    unnamedblk603__DOT__max_size = __Vfunc_get_max_size__95__Vfuncout;
                }
                if ((([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__96__Vfuncout);
                            }(), __Vfunc_get_max_size__96__Vfuncout) 
                     > unnamedblk603__DOT__max_size)) {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_mem__Vclpkg.__VnoInFunc_get_max_size(vlSymsp, __Vfunc_get_max_size__97__Vfuncout);
                    unnamedblk603__DOT__max_size = __Vfunc_get_max_size__97__Vfuncout;
                }
                if (VL_LTS_III(32, 0x00000040U, unnamedblk603__DOT__max_size)) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__98__id = "RegModel"s;
                                    __Vfunc_uvm_report_enabled__98__severity = 3U;
                                    __Vfunc_uvm_report_enabled__98__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__99__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__100__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__98__verbosity, (IData)(__Vfunc_uvm_report_enabled__98__severity), __Vfunc_uvm_report_enabled__98__id, __Vtask_uvm_report_enabled__101__Vfuncout);
                                    __Vfunc_uvm_report_enabled__98__Vfuncout 
                                        = __Vtask_uvm_report_enabled__101__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__98__Vfuncout))) {
                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, VL_SFORMATF_N_NX("Register model requires that UVM_REG_DATA_WIDTH be defined as %0d or greater. Currently defined as 64",0,
                                                                                32,
                                                                                unnamedblk603__DOT__max_size) , 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s, 0x00000481U, ""s, 1U);
                    }
                }
                this->__VnoInFunc_Xinit_address_mapsX(vlSymsp);
                if ((1U < vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                     .at(([&]() {
                                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__104__Vfuncout);
                                }(), __Vfunc_get_name__104__Vfuncout)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__105__id = "UVM/REG/DUPLROOT"s;
                                    __Vfunc_uvm_report_enabled__105__severity = 2U;
                                    __Vfunc_uvm_report_enabled__105__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__106__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__106__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__107__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__105__verbosity, (IData)(__Vfunc_uvm_report_enabled__105__severity), __Vfunc_uvm_report_enabled__105__id, __Vtask_uvm_report_enabled__108__Vfuncout);
                                    __Vfunc_uvm_report_enabled__105__Vfuncout 
                                        = __Vtask_uvm_report_enabled__108__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__105__Vfuncout))) {
                        __Vtask_uvm_report_error__109__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__109__context_name = ""s;
                        __Vtask_uvm_report_error__109__line = 0x0000048aU;
                        __Vtask_uvm_report_error__109__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                        __Vtask_uvm_report_error__109__verbosity = 0U;
                        __Vtemp_1 = ([&]() {
                                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__111__Vfuncout);
                            }(), __Vfunc_get_name__111__Vfuncout);
                        __Vtask_uvm_report_error__109__message 
                            = VL_SFORMATF_N_NX("There are %0# root register models named \"%@\". The names of the root register models have to be unique",0,
                                               32,vlSymsp->TOP__uvm_pkg__03a__03auvm_reg_block__Vclpkg.__PVT__m_root_names
                                               .at(
                                                   ([&]() {
                                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__110__Vfuncout);
                                        }(), __Vfunc_get_name__110__Vfuncout)),
                                               -1,&(__Vtemp_1)) ;
                        __Vtask_uvm_report_error__109__id = "UVM/REG/DUPLROOT"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__112__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__112__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__113__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__113__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__109__id, __Vtask_uvm_report_error__109__message, __Vtask_uvm_report_error__109__verbosity, __Vtask_uvm_report_error__109__filename, __Vtask_uvm_report_error__109__line, __Vtask_uvm_report_error__109__context_name, (IData)(__Vtask_uvm_report_error__109__report_enabled_checked));
                    }
                }
                vlSymsp->fireEvent(this->__PVT__m_uvm_lock_model_complete);
            }
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_name\n"); );
        // Locals
        std::string __Vfunc_get_name__115__Vfuncout;
        std::string __Vtask_get_full_name__116__Vfuncout;
        std::string __Vfunc_get_name__117__Vfuncout;
        // Body
        {
            if ((VlNull{} == this->__PVT__parent)) {
                this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__115__Vfuncout);
                get_full_name__Vfuncrtn = __Vfunc_get_name__115__Vfuncout;
                goto __Vlabel0;
            }
            get_full_name__Vfuncrtn = VL_CONCATN_NNN(
                                                     VL_CONCATN_NNN(
                                                                    ([&]() {
                            VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1179)
                                                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__116__Vfuncout);
                        }(), __Vtask_get_full_name__116__Vfuncout), "."s), 
                                                     ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__117__Vfuncout);
                    }(), __Vfunc_get_name__117__Vfuncout));
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_fields\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk604__DOT__rg_;
        CData/*0:0*/ unnamedblk604__DOT__rg___Vfirst;
        unnamedblk604__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk604__DOT__unnamedblk605__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk606__DOT__blk_;
        CData/*0:0*/ unnamedblk606__DOT__blk___Vfirst;
        unnamedblk606__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk606__DOT__unnamedblk607__DOT__blk;
        if ((0U != this->__PVT__regs.first(unnamedblk604__DOT__rg_))) {
            unnamedblk604__DOT__rg___Vfirst = 1U;
            while (((IData)(unnamedblk604__DOT__rg___Vfirst) 
                    || (0U != this->__PVT__regs.next(unnamedblk604__DOT__rg_)))) {
                unnamedblk604__DOT__rg___Vfirst = 0U;
                unnamedblk604__DOT__unnamedblk605__DOT__rg 
                    = unnamedblk604__DOT__rg_;
                VL_NULL_CHECK(unnamedblk604__DOT__unnamedblk605__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1191)
                    ->__VnoInFunc_get_fields(vlSymsp, fields);
            }
        }
        if ((1U == hier)) {
            if ((0U != this->__PVT__blks.first(unnamedblk606__DOT__blk_))) {
                unnamedblk606__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk606__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk606__DOT__blk_)))) {
                    unnamedblk606__DOT__blk___Vfirst = 0U;
                    unnamedblk606__DOT__unnamedblk607__DOT__blk 
                        = unnamedblk606__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk606__DOT__unnamedblk607__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1198)
                    ->__VnoInFunc_get_fields(vlSymsp, fields, 1U);
                }
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_fields(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_fields\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk608__DOT__vreg_;
        CData/*0:0*/ unnamedblk608__DOT__vreg___Vfirst;
        unnamedblk608__DOT__vreg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk608__DOT__unnamedblk609__DOT__vreg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk610__DOT__blk_;
        CData/*0:0*/ unnamedblk610__DOT__blk___Vfirst;
        unnamedblk610__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk610__DOT__unnamedblk611__DOT__blk;
        if ((0U != this->__PVT__vregs.first(unnamedblk608__DOT__vreg_))) {
            unnamedblk608__DOT__vreg___Vfirst = 1U;
            while (((IData)(unnamedblk608__DOT__vreg___Vfirst) 
                    || (0U != this->__PVT__vregs.next(unnamedblk608__DOT__vreg_)))) {
                unnamedblk608__DOT__vreg___Vfirst = 0U;
                unnamedblk608__DOT__unnamedblk609__DOT__vreg 
                    = unnamedblk608__DOT__vreg_;
                VL_NULL_CHECK(unnamedblk608__DOT__unnamedblk609__DOT__vreg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1211)
                    ->__VnoInFunc_get_fields(vlSymsp, fields);
            }
        }
        if ((1U == hier)) {
            if ((0U != this->__PVT__blks.first(unnamedblk610__DOT__blk_))) {
                unnamedblk610__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk610__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk610__DOT__blk_)))) {
                    unnamedblk610__DOT__blk___Vfirst = 0U;
                    unnamedblk610__DOT__unnamedblk611__DOT__blk 
                        = unnamedblk610__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk610__DOT__unnamedblk611__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1217)
                    ->__VnoInFunc_get_virtual_fields(vlSymsp, fields, 1U);
                }
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_registers\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk612__DOT__rg;
        CData/*0:0*/ unnamedblk612__DOT__rg__Vfirst;
        unnamedblk612__DOT__rg__Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk613__DOT__blk_;
        CData/*0:0*/ unnamedblk613__DOT__blk___Vfirst;
        unnamedblk613__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk613__DOT__unnamedblk614__DOT__blk;
        if ((0U != this->__PVT__regs.first(unnamedblk612__DOT__rg))) {
            unnamedblk612__DOT__rg__Vfirst = 1U;
            while (((IData)(unnamedblk612__DOT__rg__Vfirst) 
                    || (0U != this->__PVT__regs.next(unnamedblk612__DOT__rg)))) {
                unnamedblk612__DOT__rg__Vfirst = 0U;
                regs.push_back(unnamedblk612__DOT__rg);
            }
        }
        if ((1U == hier)) {
            if ((0U != this->__PVT__blks.first(unnamedblk613__DOT__blk_))) {
                unnamedblk613__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk613__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk613__DOT__blk_)))) {
                    unnamedblk613__DOT__blk___Vfirst = 0U;
                    unnamedblk613__DOT__unnamedblk614__DOT__blk 
                        = unnamedblk613__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk613__DOT__unnamedblk614__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1232)
                    ->__VnoInFunc_get_registers(vlSymsp, regs, 1U);
                }
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_virtual_registers\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk615__DOT__rg;
        CData/*0:0*/ unnamedblk615__DOT__rg__Vfirst;
        unnamedblk615__DOT__rg__Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__blk_;
        CData/*0:0*/ unnamedblk616__DOT__blk___Vfirst;
        unnamedblk616__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk616__DOT__unnamedblk617__DOT__blk;
        if ((0U != this->__PVT__vregs.first(unnamedblk615__DOT__rg))) {
            unnamedblk615__DOT__rg__Vfirst = 1U;
            while (((IData)(unnamedblk615__DOT__rg__Vfirst) 
                    || (0U != this->__PVT__vregs.next(unnamedblk615__DOT__rg)))) {
                unnamedblk615__DOT__rg__Vfirst = 0U;
                regs.push_back(unnamedblk615__DOT__rg);
            }
        }
        if ((1U == hier)) {
            if ((0U != this->__PVT__blks.first(unnamedblk616__DOT__blk_))) {
                unnamedblk616__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk616__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk616__DOT__blk_)))) {
                    unnamedblk616__DOT__blk___Vfirst = 0U;
                    unnamedblk616__DOT__unnamedblk617__DOT__blk 
                        = unnamedblk616__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk616__DOT__unnamedblk617__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1248)
                    ->__VnoInFunc_get_virtual_registers(vlSymsp, regs, 1U);
                }
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_memories\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk618__DOT__mem_;
        CData/*0:0*/ unnamedblk618__DOT__mem___Vfirst;
        unnamedblk618__DOT__mem___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk618__DOT__unnamedblk619__DOT__mem;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__blk_;
        CData/*0:0*/ unnamedblk620__DOT__blk___Vfirst;
        unnamedblk620__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk620__DOT__unnamedblk621__DOT__blk;
        if ((0U != this->__PVT__mems.first(unnamedblk618__DOT__mem_))) {
            unnamedblk618__DOT__mem___Vfirst = 1U;
            while (((IData)(unnamedblk618__DOT__mem___Vfirst) 
                    || (0U != this->__PVT__mems.next(unnamedblk618__DOT__mem_)))) {
                unnamedblk618__DOT__mem___Vfirst = 0U;
                unnamedblk618__DOT__unnamedblk619__DOT__mem 
                    = unnamedblk618__DOT__mem_;
                mems.push_back(unnamedblk618__DOT__unnamedblk619__DOT__mem);
            }
        }
        if ((1U == hier)) {
            if ((0U != this->__PVT__blks.first(unnamedblk620__DOT__blk_))) {
                unnamedblk620__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk620__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk620__DOT__blk_)))) {
                    unnamedblk620__DOT__blk___Vfirst = 0U;
                    unnamedblk620__DOT__unnamedblk621__DOT__blk 
                        = unnamedblk620__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk620__DOT__unnamedblk621__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1266)
                    ->__VnoInFunc_get_memories(vlSymsp, mems, 1U);
                }
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>> &blks, IData/*31:0*/ hier) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_blocks\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk622__DOT__blk_;
        CData/*0:0*/ unnamedblk622__DOT__blk___Vfirst;
        unnamedblk622__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk622__DOT__unnamedblk623__DOT__blk;
        if ((0U != this->__PVT__blks.first(unnamedblk622__DOT__blk_))) {
            unnamedblk622__DOT__blk___Vfirst = 1U;
            while (((IData)(unnamedblk622__DOT__blk___Vfirst) 
                    || (0U != this->__PVT__blks.next(unnamedblk622__DOT__blk_)))) {
                unnamedblk622__DOT__blk___Vfirst = 0U;
                unnamedblk622__DOT__unnamedblk623__DOT__blk 
                    = unnamedblk622__DOT__blk_;
                blks.push_back(unnamedblk622__DOT__unnamedblk623__DOT__blk);
                if ((1U == hier)) {
                    VL_NULL_CHECK(unnamedblk622__DOT__unnamedblk623__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1281)
                    ->__VnoInFunc_get_blocks(vlSymsp, blks, 1U);
                }
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map>> &maps) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_maps\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk627__DOT__map;
        CData/*0:0*/ unnamedblk627__DOT__map__Vfirst;
        unnamedblk627__DOT__map__Vfirst = 0;
        if ((0U != this->__PVT__maps.first(unnamedblk627__DOT__map))) {
            unnamedblk627__DOT__map__Vfirst = 1U;
            while (((IData)(unnamedblk627__DOT__map__Vfirst) 
                    || (0U != this->__PVT__maps.next(unnamedblk627__DOT__map)))) {
                unnamedblk627__DOT__map__Vfirst = 0U;
                maps.push_back(unnamedblk627__DOT__map);
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_parent\n"); );
        // Body
        get_parent__Vfuncrtn = this->__PVT__parent;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_block_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> &get_block_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_block_by_name\n"); );
        // Locals
        std::string __Vfunc_get_name__126__Vfuncout;
        std::string __Vtask_get_name__127__Vfuncout;
        std::string __Vtask_get_name__129__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__130__Vfuncout;
        __Vfunc_uvm_report_enabled__130__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__130__verbosity;
        __Vfunc_uvm_report_enabled__130__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__130__severity;
        __Vfunc_uvm_report_enabled__130__severity = 0;
        std::string __Vfunc_uvm_report_enabled__130__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__131__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__132__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__133__Vfuncout;
        __Vtask_uvm_report_enabled__133__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__134__id;
        std::string __Vtask_uvm_report_warning__134__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__134__verbosity;
        __Vtask_uvm_report_warning__134__verbosity = 0;
        std::string __Vtask_uvm_report_warning__134__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__134__line;
        __Vtask_uvm_report_warning__134__line = 0;
        std::string __Vtask_uvm_report_warning__134__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__134__report_enabled_checked;
        __Vtask_uvm_report_warning__134__report_enabled_checked = 0;
        std::string __Vfunc_get_full_name__135__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__136__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__137__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__blk_;
        CData/*0:0*/ unnamedblk628__DOT__blk___Vfirst;
        unnamedblk628__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk628__DOT__unnamedblk629__DOT__blk;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk630__DOT__blk_;
        CData/*0:0*/ unnamedblk630__DOT__blk___Vfirst;
        unnamedblk630__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk630__DOT__unnamedblk631__DOT__blk;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>> unnamedblk630__DOT__unnamedblk631__DOT__subblks;
        IData/*31:0*/ unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j;
        unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j = 0;
        {
            if ((([&]() {
                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__126__Vfuncout);
                        }(), __Vfunc_get_name__126__Vfuncout) 
                 == name)) {
                get_block_by_name__Vfuncrtn = VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>{this};
                goto __Vlabel0;
            }
            if ((0U != this->__PVT__blks.first(unnamedblk628__DOT__blk_))) {
                unnamedblk628__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk628__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk628__DOT__blk_)))) {
                    unnamedblk628__DOT__blk___Vfirst = 0U;
                    unnamedblk628__DOT__unnamedblk629__DOT__blk 
                        = unnamedblk628__DOT__blk_;
                    if ((([&]() {
                                    VL_NULL_CHECK(unnamedblk628__DOT__unnamedblk629__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1380)
                          ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__127__Vfuncout);
                                }(), __Vtask_get_name__127__Vfuncout) 
                         == name)) {
                        get_block_by_name__Vfuncrtn 
                            = unnamedblk628__DOT__unnamedblk629__DOT__blk;
                        goto __Vlabel0;
                    }
                }
            }
            if ((0U != this->__PVT__blks.first(unnamedblk630__DOT__blk_))) {
                unnamedblk630__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk630__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk630__DOT__blk_)))) {
                    unnamedblk630__DOT__blk___Vfirst = 0U;
                    unnamedblk630__DOT__unnamedblk631__DOT__blk 
                        = unnamedblk630__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk630__DOT__blk_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1387)
                    ->__VnoInFunc_get_blocks(vlSymsp, unnamedblk630__DOT__unnamedblk631__DOT__subblks, 1U);
                    unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j, unnamedblk630__DOT__unnamedblk631__DOT__subblks.size())) {
                        if ((([&]() {
                                        VL_NULL_CHECK(unnamedblk630__DOT__unnamedblk631__DOT__subblks.at(unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1390)
                              ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__129__Vfuncout);
                                    }(), __Vtask_get_name__129__Vfuncout) 
                             == name)) {
                            get_block_by_name__Vfuncrtn 
                                = unnamedblk630__DOT__unnamedblk631__DOT__subblks.at(unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j);
                            goto __Vlabel0;
                        }
                        unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j 
                            = ((IData)(1U) + unnamedblk630__DOT__unnamedblk631__DOT__unnamedblk632__DOT__j);
                    }
                }
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__130__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__130__severity = 1U;
                            __Vfunc_uvm_report_enabled__130__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__131__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__131__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__132__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__132__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__130__verbosity, (IData)(__Vfunc_uvm_report_enabled__130__severity), __Vfunc_uvm_report_enabled__130__id, __Vtask_uvm_report_enabled__133__Vfuncout);
                            __Vfunc_uvm_report_enabled__130__Vfuncout 
                                = __Vtask_uvm_report_enabled__133__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__130__Vfuncout))) {
                __Vtask_uvm_report_warning__134__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__134__context_name = ""s;
                __Vtask_uvm_report_warning__134__line = 0x00000573U;
                __Vtask_uvm_report_warning__134__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__134__verbosity = 0U;
                __Vtask_uvm_report_warning__134__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate block '"s, name), "' in block '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__135__Vfuncout);
                                }(), __Vfunc_get_full_name__135__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__134__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__136__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__136__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__137__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__137__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__134__id, __Vtask_uvm_report_warning__134__message, __Vtask_uvm_report_warning__134__verbosity, __Vtask_uvm_report_warning__134__filename, __Vtask_uvm_report_warning__134__line, __Vtask_uvm_report_warning__134__context_name, (IData)(__Vtask_uvm_report_warning__134__report_enabled_checked));
            }
            get_block_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_reg_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> &get_reg_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_reg_by_name\n"); );
        // Locals
        std::string __Vtask_get_name__139__Vfuncout;
        std::string __Vtask_get_name__141__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__142__Vfuncout;
        __Vfunc_uvm_report_enabled__142__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__142__verbosity;
        __Vfunc_uvm_report_enabled__142__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__142__severity;
        __Vfunc_uvm_report_enabled__142__severity = 0;
        std::string __Vfunc_uvm_report_enabled__142__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__143__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__144__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__145__Vfuncout;
        __Vtask_uvm_report_enabled__145__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__146__id;
        std::string __Vtask_uvm_report_warning__146__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__146__verbosity;
        __Vtask_uvm_report_warning__146__verbosity = 0;
        std::string __Vtask_uvm_report_warning__146__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__146__line;
        __Vtask_uvm_report_warning__146__line = 0;
        std::string __Vtask_uvm_report_warning__146__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__146__report_enabled_checked;
        __Vtask_uvm_report_warning__146__report_enabled_checked = 0;
        std::string __Vfunc_get_full_name__147__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__148__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__149__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk633__DOT__rg_;
        CData/*0:0*/ unnamedblk633__DOT__rg___Vfirst;
        unnamedblk633__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk633__DOT__unnamedblk634__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk635__DOT__blk_;
        CData/*0:0*/ unnamedblk635__DOT__blk___Vfirst;
        unnamedblk635__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk635__DOT__unnamedblk636__DOT__blk;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg>> unnamedblk635__DOT__unnamedblk636__DOT__subregs;
        IData/*31:0*/ unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j;
        unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0;
        {
            if ((0U != this->__PVT__regs.first(unnamedblk633__DOT__rg_))) {
                unnamedblk633__DOT__rg___Vfirst = 1U;
                while (((IData)(unnamedblk633__DOT__rg___Vfirst) 
                        || (0U != this->__PVT__regs.next(unnamedblk633__DOT__rg_)))) {
                    unnamedblk633__DOT__rg___Vfirst = 0U;
                    unnamedblk633__DOT__unnamedblk634__DOT__rg 
                        = unnamedblk633__DOT__rg_;
                    if ((([&]() {
                                    VL_NULL_CHECK(unnamedblk633__DOT__unnamedblk634__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1407)
                          ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__139__Vfuncout);
                                }(), __Vtask_get_name__139__Vfuncout) 
                         == name)) {
                        get_reg_by_name__Vfuncrtn = unnamedblk633__DOT__unnamedblk634__DOT__rg;
                        goto __Vlabel0;
                    }
                }
            }
            if ((0U != this->__PVT__blks.first(unnamedblk635__DOT__blk_))) {
                unnamedblk635__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk635__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk635__DOT__blk_)))) {
                    unnamedblk635__DOT__blk___Vfirst = 0U;
                    unnamedblk635__DOT__unnamedblk636__DOT__blk 
                        = unnamedblk635__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk635__DOT__blk_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1414)
                    ->__VnoInFunc_get_registers(vlSymsp, unnamedblk635__DOT__unnamedblk636__DOT__subregs, 1U);
                    unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j, unnamedblk635__DOT__unnamedblk636__DOT__subregs.size())) {
                        if ((([&]() {
                                        VL_NULL_CHECK(unnamedblk635__DOT__unnamedblk636__DOT__subregs.at(unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1417)
                              ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__141__Vfuncout);
                                    }(), __Vtask_get_name__141__Vfuncout) 
                             == name)) {
                            get_reg_by_name__Vfuncrtn 
                                = unnamedblk635__DOT__unnamedblk636__DOT__subregs.at(unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j);
                            goto __Vlabel0;
                        }
                        unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j 
                            = ((IData)(1U) + unnamedblk635__DOT__unnamedblk636__DOT__unnamedblk637__DOT__j);
                    }
                }
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__142__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__142__severity = 1U;
                            __Vfunc_uvm_report_enabled__142__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__143__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__143__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__144__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__144__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__142__verbosity, (IData)(__Vfunc_uvm_report_enabled__142__severity), __Vfunc_uvm_report_enabled__142__id, __Vtask_uvm_report_enabled__145__Vfuncout);
                            __Vfunc_uvm_report_enabled__142__Vfuncout 
                                = __Vtask_uvm_report_enabled__145__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__142__Vfuncout))) {
                __Vtask_uvm_report_warning__146__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__146__context_name = ""s;
                __Vtask_uvm_report_warning__146__line = 0x0000058eU;
                __Vtask_uvm_report_warning__146__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__146__verbosity = 0U;
                __Vtask_uvm_report_warning__146__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate register '"s, name), "' in block '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__147__Vfuncout);
                                }(), __Vfunc_get_full_name__147__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__146__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__148__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__148__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__149__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__149__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__146__id, __Vtask_uvm_report_warning__146__message, __Vtask_uvm_report_warning__146__verbosity, __Vtask_uvm_report_warning__146__filename, __Vtask_uvm_report_warning__146__line, __Vtask_uvm_report_warning__146__context_name, (IData)(__Vtask_uvm_report_warning__146__report_enabled_checked));
            }
            get_reg_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vreg_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> &get_vreg_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vreg_by_name\n"); );
        // Locals
        std::string __Vtask_get_name__151__Vfuncout;
        std::string __Vtask_get_name__153__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__154__Vfuncout;
        __Vfunc_uvm_report_enabled__154__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__154__verbosity;
        __Vfunc_uvm_report_enabled__154__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__154__severity;
        __Vfunc_uvm_report_enabled__154__severity = 0;
        std::string __Vfunc_uvm_report_enabled__154__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__155__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__156__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__157__Vfuncout;
        __Vtask_uvm_report_enabled__157__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__158__id;
        std::string __Vtask_uvm_report_warning__158__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__158__verbosity;
        __Vtask_uvm_report_warning__158__verbosity = 0;
        std::string __Vtask_uvm_report_warning__158__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__158__line;
        __Vtask_uvm_report_warning__158__line = 0;
        std::string __Vtask_uvm_report_warning__158__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__158__report_enabled_checked;
        __Vtask_uvm_report_warning__158__report_enabled_checked = 0;
        std::string __Vfunc_get_full_name__159__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__160__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__161__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk638__DOT__rg_;
        CData/*0:0*/ unnamedblk638__DOT__rg___Vfirst;
        unnamedblk638__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk638__DOT__unnamedblk639__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk640__DOT__blk_;
        CData/*0:0*/ unnamedblk640__DOT__blk___Vfirst;
        unnamedblk640__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk640__DOT__unnamedblk641__DOT__blk;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg>> unnamedblk640__DOT__unnamedblk641__DOT__subvregs;
        IData/*31:0*/ unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j;
        unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j = 0;
        {
            if ((0U != this->__PVT__vregs.first(unnamedblk638__DOT__rg_))) {
                unnamedblk638__DOT__rg___Vfirst = 1U;
                while (((IData)(unnamedblk638__DOT__rg___Vfirst) 
                        || (0U != this->__PVT__vregs.next(unnamedblk638__DOT__rg_)))) {
                    unnamedblk638__DOT__rg___Vfirst = 0U;
                    unnamedblk638__DOT__unnamedblk639__DOT__rg 
                        = unnamedblk638__DOT__rg_;
                    if ((([&]() {
                                    VL_NULL_CHECK(unnamedblk638__DOT__unnamedblk639__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1434)
                          ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__151__Vfuncout);
                                }(), __Vtask_get_name__151__Vfuncout) 
                         == name)) {
                        get_vreg_by_name__Vfuncrtn 
                            = unnamedblk638__DOT__unnamedblk639__DOT__rg;
                        goto __Vlabel0;
                    }
                }
            }
            if ((0U != this->__PVT__blks.first(unnamedblk640__DOT__blk_))) {
                unnamedblk640__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk640__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk640__DOT__blk_)))) {
                    unnamedblk640__DOT__blk___Vfirst = 0U;
                    unnamedblk640__DOT__unnamedblk641__DOT__blk 
                        = unnamedblk640__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk640__DOT__blk_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1441)
                    ->__VnoInFunc_get_virtual_registers(vlSymsp, unnamedblk640__DOT__unnamedblk641__DOT__subvregs, 1U);
                    unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j, unnamedblk640__DOT__unnamedblk641__DOT__subvregs.size())) {
                        if ((([&]() {
                                        VL_NULL_CHECK(unnamedblk640__DOT__unnamedblk641__DOT__subvregs.at(unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1444)
                              ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__153__Vfuncout);
                                    }(), __Vtask_get_name__153__Vfuncout) 
                             == name)) {
                            get_vreg_by_name__Vfuncrtn 
                                = unnamedblk640__DOT__unnamedblk641__DOT__subvregs.at(unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j);
                            goto __Vlabel0;
                        }
                        unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j 
                            = ((IData)(1U) + unnamedblk640__DOT__unnamedblk641__DOT__unnamedblk642__DOT__j);
                    }
                }
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__154__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__154__severity = 1U;
                            __Vfunc_uvm_report_enabled__154__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__155__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__155__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__156__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__156__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__154__verbosity, (IData)(__Vfunc_uvm_report_enabled__154__severity), __Vfunc_uvm_report_enabled__154__id, __Vtask_uvm_report_enabled__157__Vfuncout);
                            __Vfunc_uvm_report_enabled__154__Vfuncout 
                                = __Vtask_uvm_report_enabled__157__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__154__Vfuncout))) {
                __Vtask_uvm_report_warning__158__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__158__context_name = ""s;
                __Vtask_uvm_report_warning__158__line = 0x000005a9U;
                __Vtask_uvm_report_warning__158__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__158__verbosity = 0U;
                __Vtask_uvm_report_warning__158__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate virtual register '"s, name), "' in block '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__159__Vfuncout);
                                }(), __Vfunc_get_full_name__159__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__158__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__160__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__160__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__161__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__161__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__158__id, __Vtask_uvm_report_warning__158__message, __Vtask_uvm_report_warning__158__verbosity, __Vtask_uvm_report_warning__158__filename, __Vtask_uvm_report_warning__158__line, __Vtask_uvm_report_warning__158__context_name, (IData)(__Vtask_uvm_report_warning__158__report_enabled_checked));
            }
            get_vreg_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_mem_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> &get_mem_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_mem_by_name\n"); );
        // Locals
        std::string __Vtask_get_name__163__Vfuncout;
        std::string __Vtask_get_name__165__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__166__Vfuncout;
        __Vfunc_uvm_report_enabled__166__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__166__verbosity;
        __Vfunc_uvm_report_enabled__166__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__166__severity;
        __Vfunc_uvm_report_enabled__166__severity = 0;
        std::string __Vfunc_uvm_report_enabled__166__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__167__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__168__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__169__Vfuncout;
        __Vtask_uvm_report_enabled__169__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__170__id;
        std::string __Vtask_uvm_report_warning__170__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__170__verbosity;
        __Vtask_uvm_report_warning__170__verbosity = 0;
        std::string __Vtask_uvm_report_warning__170__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__170__line;
        __Vtask_uvm_report_warning__170__line = 0;
        std::string __Vtask_uvm_report_warning__170__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__170__report_enabled_checked;
        __Vtask_uvm_report_warning__170__report_enabled_checked = 0;
        std::string __Vfunc_get_full_name__171__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__172__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__173__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk643__DOT__mem_;
        CData/*0:0*/ unnamedblk643__DOT__mem___Vfirst;
        unnamedblk643__DOT__mem___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk643__DOT__unnamedblk644__DOT__mem;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk645__DOT__blk_;
        CData/*0:0*/ unnamedblk645__DOT__blk___Vfirst;
        unnamedblk645__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk645__DOT__unnamedblk646__DOT__blk;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem>> unnamedblk645__DOT__unnamedblk646__DOT__submems;
        IData/*31:0*/ unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j;
        unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j = 0;
        {
            if ((0U != this->__PVT__mems.first(unnamedblk643__DOT__mem_))) {
                unnamedblk643__DOT__mem___Vfirst = 1U;
                while (((IData)(unnamedblk643__DOT__mem___Vfirst) 
                        || (0U != this->__PVT__mems.next(unnamedblk643__DOT__mem_)))) {
                    unnamedblk643__DOT__mem___Vfirst = 0U;
                    unnamedblk643__DOT__unnamedblk644__DOT__mem 
                        = unnamedblk643__DOT__mem_;
                    if ((([&]() {
                                    VL_NULL_CHECK(unnamedblk643__DOT__unnamedblk644__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1461)
                          ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__163__Vfuncout);
                                }(), __Vtask_get_name__163__Vfuncout) 
                         == name)) {
                        get_mem_by_name__Vfuncrtn = unnamedblk643__DOT__unnamedblk644__DOT__mem;
                        goto __Vlabel0;
                    }
                }
            }
            if ((0U != this->__PVT__blks.first(unnamedblk645__DOT__blk_))) {
                unnamedblk645__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk645__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk645__DOT__blk_)))) {
                    unnamedblk645__DOT__blk___Vfirst = 0U;
                    unnamedblk645__DOT__unnamedblk646__DOT__blk 
                        = unnamedblk645__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk645__DOT__blk_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1468)
                    ->__VnoInFunc_get_memories(vlSymsp, unnamedblk645__DOT__unnamedblk646__DOT__submems, 1U);
                    unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j, unnamedblk645__DOT__unnamedblk646__DOT__submems.size())) {
                        if ((([&]() {
                                        VL_NULL_CHECK(unnamedblk645__DOT__unnamedblk646__DOT__submems.at(unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1471)
                              ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__165__Vfuncout);
                                    }(), __Vtask_get_name__165__Vfuncout) 
                             == name)) {
                            get_mem_by_name__Vfuncrtn 
                                = unnamedblk645__DOT__unnamedblk646__DOT__submems.at(unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j);
                            goto __Vlabel0;
                        }
                        unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j 
                            = ((IData)(1U) + unnamedblk645__DOT__unnamedblk646__DOT__unnamedblk647__DOT__j);
                    }
                }
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__166__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__166__severity = 1U;
                            __Vfunc_uvm_report_enabled__166__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__167__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__167__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__168__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__168__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__166__verbosity, (IData)(__Vfunc_uvm_report_enabled__166__severity), __Vfunc_uvm_report_enabled__166__id, __Vtask_uvm_report_enabled__169__Vfuncout);
                            __Vfunc_uvm_report_enabled__166__Vfuncout 
                                = __Vtask_uvm_report_enabled__169__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__166__Vfuncout))) {
                __Vtask_uvm_report_warning__170__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__170__context_name = ""s;
                __Vtask_uvm_report_warning__170__line = 0x000005c4U;
                __Vtask_uvm_report_warning__170__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__170__verbosity = 0U;
                __Vtask_uvm_report_warning__170__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate memory '"s, name), "' in block '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__171__Vfuncout);
                                }(), __Vfunc_get_full_name__171__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__170__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__172__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__172__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__173__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__173__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__170__id, __Vtask_uvm_report_warning__170__message, __Vtask_uvm_report_warning__170__verbosity, __Vtask_uvm_report_warning__170__filename, __Vtask_uvm_report_warning__170__line, __Vtask_uvm_report_warning__170__context_name, (IData)(__Vtask_uvm_report_warning__170__report_enabled_checked));
            }
            get_mem_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_field_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_field> &get_field_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_field_by_name\n"); );
        // Locals
        std::string __Vtask_get_name__176__Vfuncout;
        std::string __Vtask_get_name__179__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__180__Vfuncout;
        __Vfunc_uvm_report_enabled__180__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__180__verbosity;
        __Vfunc_uvm_report_enabled__180__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__180__severity;
        __Vfunc_uvm_report_enabled__180__severity = 0;
        std::string __Vfunc_uvm_report_enabled__180__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__181__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__182__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__183__Vfuncout;
        __Vtask_uvm_report_enabled__183__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__184__id;
        std::string __Vtask_uvm_report_warning__184__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__184__verbosity;
        __Vtask_uvm_report_warning__184__verbosity = 0;
        std::string __Vtask_uvm_report_warning__184__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__184__line;
        __Vtask_uvm_report_warning__184__line = 0;
        std::string __Vtask_uvm_report_warning__184__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__184__report_enabled_checked;
        __Vtask_uvm_report_warning__184__report_enabled_checked = 0;
        std::string __Vfunc_get_full_name__185__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__186__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__187__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk648__DOT__rg_;
        CData/*0:0*/ unnamedblk648__DOT__rg___Vfirst;
        unnamedblk648__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk648__DOT__unnamedblk649__DOT__rg;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_field>> unnamedblk648__DOT__unnamedblk649__DOT__fields;
        IData/*31:0*/ unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i;
        unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk651__DOT__blk_;
        CData/*0:0*/ unnamedblk651__DOT__blk___Vfirst;
        unnamedblk651__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk651__DOT__unnamedblk652__DOT__blk;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg>> unnamedblk651__DOT__unnamedblk652__DOT__subregs;
        IData/*31:0*/ unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j;
        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j = 0;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_field>> unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields;
        IData/*31:0*/ unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i;
        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i = 0;
        {
            if ((0U != this->__PVT__regs.first(unnamedblk648__DOT__rg_))) {
                unnamedblk648__DOT__rg___Vfirst = 1U;
                while (((IData)(unnamedblk648__DOT__rg___Vfirst) 
                        || (0U != this->__PVT__regs.next(unnamedblk648__DOT__rg_)))) {
                    unnamedblk648__DOT__rg___Vfirst = 0U;
                    unnamedblk648__DOT__unnamedblk649__DOT__rg 
                        = unnamedblk648__DOT__rg_;
                    VL_NULL_CHECK(unnamedblk648__DOT__unnamedblk649__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1490)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk648__DOT__unnamedblk649__DOT__fields);
                    unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i, unnamedblk648__DOT__unnamedblk649__DOT__fields.size())) {
                        if ((([&]() {
                                        VL_NULL_CHECK(unnamedblk648__DOT__unnamedblk649__DOT__fields.at(unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1492)
                              ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__176__Vfuncout);
                                    }(), __Vtask_get_name__176__Vfuncout) 
                             == name)) {
                            get_field_by_name__Vfuncrtn 
                                = unnamedblk648__DOT__unnamedblk649__DOT__fields.at(unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i);
                            goto __Vlabel0;
                        }
                        unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i 
                            = ((IData)(1U) + unnamedblk648__DOT__unnamedblk649__DOT__unnamedblk650__DOT__i);
                    }
                }
            }
            if ((0U != this->__PVT__blks.first(unnamedblk651__DOT__blk_))) {
                unnamedblk651__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk651__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk651__DOT__blk_)))) {
                    unnamedblk651__DOT__blk___Vfirst = 0U;
                    unnamedblk651__DOT__unnamedblk652__DOT__blk 
                        = unnamedblk651__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk651__DOT__blk_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1499)
                    ->__VnoInFunc_get_registers(vlSymsp, unnamedblk651__DOT__unnamedblk652__DOT__subregs, 1U);
                    unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j, unnamedblk651__DOT__unnamedblk652__DOT__subregs.size())) {
                        VL_NULL_CHECK(unnamedblk651__DOT__unnamedblk652__DOT__subregs.at(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1503)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields);
                        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i, unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.size())) {
                            if ((([&]() {
                                            VL_NULL_CHECK(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.at(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1505)
                                  ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__179__Vfuncout);
                                        }(), __Vtask_get_name__179__Vfuncout) 
                                 == name)) {
                                get_field_by_name__Vfuncrtn 
                                    = unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__fields.at(unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i);
                                goto __Vlabel0;
                            }
                            unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i 
                                = ((IData)(1U) + unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__unnamedblk654__DOT__unnamedblk655__DOT__i);
                        }
                        unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j 
                            = ((IData)(1U) + unnamedblk651__DOT__unnamedblk652__DOT__unnamedblk653__DOT__j);
                    }
                }
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__180__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__180__severity = 1U;
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
                __Vtask_uvm_report_warning__184__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__184__context_name = ""s;
                __Vtask_uvm_report_warning__184__line = 0x000005e7U;
                __Vtask_uvm_report_warning__184__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__184__verbosity = 0U;
                __Vtask_uvm_report_warning__184__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate field '"s, name), "' in block '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__185__Vfuncout);
                                }(), __Vfunc_get_full_name__185__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__184__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__186__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__186__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__187__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__187__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__184__id, __Vtask_uvm_report_warning__184__message, __Vtask_uvm_report_warning__184__verbosity, __Vtask_uvm_report_warning__184__filename, __Vtask_uvm_report_warning__184__line, __Vtask_uvm_report_warning__184__context_name, (IData)(__Vtask_uvm_report_warning__184__report_enabled_checked));
            }
            get_field_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vfield_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_field> &get_vfield_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_vfield_by_name\n"); );
        // Locals
        std::string __Vtask_get_name__190__Vfuncout;
        std::string __Vtask_get_name__193__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__194__Vfuncout;
        __Vfunc_uvm_report_enabled__194__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__194__verbosity;
        __Vfunc_uvm_report_enabled__194__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__194__severity;
        __Vfunc_uvm_report_enabled__194__severity = 0;
        std::string __Vfunc_uvm_report_enabled__194__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__195__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__196__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__197__Vfuncout;
        __Vtask_uvm_report_enabled__197__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__198__id;
        std::string __Vtask_uvm_report_warning__198__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__198__verbosity;
        __Vtask_uvm_report_warning__198__verbosity = 0;
        std::string __Vtask_uvm_report_warning__198__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__198__line;
        __Vtask_uvm_report_warning__198__line = 0;
        std::string __Vtask_uvm_report_warning__198__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__198__report_enabled_checked;
        __Vtask_uvm_report_warning__198__report_enabled_checked = 0;
        std::string __Vfunc_get_full_name__199__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__200__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__201__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk656__DOT__rg_;
        CData/*0:0*/ unnamedblk656__DOT__rg___Vfirst;
        unnamedblk656__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk656__DOT__unnamedblk657__DOT__rg;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_field>> unnamedblk656__DOT__unnamedblk657__DOT__fields;
        IData/*31:0*/ unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i;
        unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk659__DOT__blk_;
        CData/*0:0*/ unnamedblk659__DOT__blk___Vfirst;
        unnamedblk659__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk659__DOT__unnamedblk660__DOT__blk;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg>> unnamedblk659__DOT__unnamedblk660__DOT__subvregs;
        IData/*31:0*/ unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j;
        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j = 0;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg_field>> unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields;
        IData/*31:0*/ unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i;
        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i = 0;
        {
            if ((0U != this->__PVT__vregs.first(unnamedblk656__DOT__rg_))) {
                unnamedblk656__DOT__rg___Vfirst = 1U;
                while (((IData)(unnamedblk656__DOT__rg___Vfirst) 
                        || (0U != this->__PVT__vregs.next(unnamedblk656__DOT__rg_)))) {
                    unnamedblk656__DOT__rg___Vfirst = 0U;
                    unnamedblk656__DOT__unnamedblk657__DOT__rg 
                        = unnamedblk656__DOT__rg_;
                    VL_NULL_CHECK(unnamedblk656__DOT__unnamedblk657__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1526)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk656__DOT__unnamedblk657__DOT__fields);
                    unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i = 0U;
                    while (VL_LTS_III(32, unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i, unnamedblk656__DOT__unnamedblk657__DOT__fields.size())) {
                        if ((([&]() {
                                        VL_NULL_CHECK(unnamedblk656__DOT__unnamedblk657__DOT__fields.at(unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1528)
                              ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__190__Vfuncout);
                                    }(), __Vtask_get_name__190__Vfuncout) 
                             == name)) {
                            get_vfield_by_name__Vfuncrtn 
                                = unnamedblk656__DOT__unnamedblk657__DOT__fields.at(unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i);
                            goto __Vlabel0;
                        }
                        unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i 
                            = ((IData)(1U) + unnamedblk656__DOT__unnamedblk657__DOT__unnamedblk658__DOT__i);
                    }
                }
            }
            if ((0U != this->__PVT__blks.first(unnamedblk659__DOT__blk_))) {
                unnamedblk659__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk659__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk659__DOT__blk_)))) {
                    unnamedblk659__DOT__blk___Vfirst = 0U;
                    unnamedblk659__DOT__unnamedblk660__DOT__blk 
                        = unnamedblk659__DOT__blk_;
                    VL_NULL_CHECK(unnamedblk659__DOT__blk_, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1535)
                    ->__VnoInFunc_get_virtual_registers(vlSymsp, unnamedblk659__DOT__unnamedblk660__DOT__subvregs, 1U);
                    unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j, unnamedblk659__DOT__unnamedblk660__DOT__subvregs.size())) {
                        VL_NULL_CHECK(unnamedblk659__DOT__unnamedblk660__DOT__subvregs.at(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1539)
                    ->__VnoInFunc_get_fields(vlSymsp, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields);
                        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i = 0U;
                        while (VL_LTS_III(32, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i, unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.size())) {
                            if ((([&]() {
                                            VL_NULL_CHECK(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.at(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1541)
                                  ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__193__Vfuncout);
                                        }(), __Vtask_get_name__193__Vfuncout) 
                                 == name)) {
                                get_vfield_by_name__Vfuncrtn 
                                    = unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__fields.at(unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i);
                                goto __Vlabel0;
                            }
                            unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i 
                                = ((IData)(1U) + unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__unnamedblk662__DOT__unnamedblk663__DOT__i);
                        }
                        unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j 
                            = ((IData)(1U) + unnamedblk659__DOT__unnamedblk660__DOT__unnamedblk661__DOT__j);
                    }
                }
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__194__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__194__severity = 1U;
                            __Vfunc_uvm_report_enabled__194__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__195__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__195__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__196__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__196__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__194__verbosity, (IData)(__Vfunc_uvm_report_enabled__194__severity), __Vfunc_uvm_report_enabled__194__id, __Vtask_uvm_report_enabled__197__Vfuncout);
                            __Vfunc_uvm_report_enabled__194__Vfuncout 
                                = __Vtask_uvm_report_enabled__197__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__194__Vfuncout))) {
                __Vtask_uvm_report_warning__198__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__198__context_name = ""s;
                __Vtask_uvm_report_warning__198__line = 0x0000060bU;
                __Vtask_uvm_report_warning__198__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__198__verbosity = 0U;
                __Vtask_uvm_report_warning__198__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN(
                                                                       VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Unable to locate virtual field '"s, name), "' in block '"s), 
                                                                       ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__199__Vfuncout);
                                }(), __Vfunc_get_full_name__199__Vfuncout)), "'"s));
                __Vtask_uvm_report_warning__198__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__200__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__200__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__201__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__201__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__198__id, __Vtask_uvm_report_warning__198__message, __Vtask_uvm_report_warning__198__verbosity, __Vtask_uvm_report_warning__198__filename, __Vtask_uvm_report_warning__198__line, __Vtask_uvm_report_warning__198__context_name, (IData)(__Vtask_uvm_report_warning__198__report_enabled_checked));
            }
            get_vfield_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, IData/*31:0*/ &set_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_coverage\n"); );
        // Locals
        IData/*31:0*/ __Vtask_set_coverage__203__Vfuncout;
        __Vtask_set_coverage__203__Vfuncout = 0;
        IData/*31:0*/ __Vtask_set_coverage__204__Vfuncout;
        __Vtask_set_coverage__204__Vfuncout = 0;
        IData/*31:0*/ __Vtask_set_coverage__205__Vfuncout;
        __Vtask_set_coverage__205__Vfuncout = 0;
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk664__DOT__rg_;
        CData/*0:0*/ unnamedblk664__DOT__rg___Vfirst;
        unnamedblk664__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk664__DOT__unnamedblk665__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk666__DOT__mem_;
        CData/*0:0*/ unnamedblk666__DOT__mem___Vfirst;
        unnamedblk666__DOT__mem___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk666__DOT__unnamedblk667__DOT__mem;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk668__DOT__blk_;
        CData/*0:0*/ unnamedblk668__DOT__blk___Vfirst;
        unnamedblk668__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk668__DOT__unnamedblk669__DOT__blk;
        this->__PVT__cover_on = (this->__PVT__has_cover 
                                 & is_on);
        if ((0U != this->__PVT__regs.first(unnamedblk664__DOT__rg_))) {
            unnamedblk664__DOT__rg___Vfirst = 1U;
            while (((IData)(unnamedblk664__DOT__rg___Vfirst) 
                    || (0U != this->__PVT__regs.next(unnamedblk664__DOT__rg_)))) {
                unnamedblk664__DOT__rg___Vfirst = 0U;
                unnamedblk664__DOT__unnamedblk665__DOT__rg 
                    = unnamedblk664__DOT__rg_;
                VL_NULL_CHECK(unnamedblk664__DOT__unnamedblk665__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1566)
                    ->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__203__Vfuncout);
            }
        }
        if ((0U != this->__PVT__mems.first(unnamedblk666__DOT__mem_))) {
            unnamedblk666__DOT__mem___Vfirst = 1U;
            while (((IData)(unnamedblk666__DOT__mem___Vfirst) 
                    || (0U != this->__PVT__mems.next(unnamedblk666__DOT__mem_)))) {
                unnamedblk666__DOT__mem___Vfirst = 0U;
                unnamedblk666__DOT__unnamedblk667__DOT__mem 
                    = unnamedblk666__DOT__mem_;
                VL_NULL_CHECK(unnamedblk666__DOT__unnamedblk667__DOT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1571)
                    ->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__204__Vfuncout);
            }
        }
        if ((0U != this->__PVT__blks.first(unnamedblk668__DOT__blk_))) {
            unnamedblk668__DOT__blk___Vfirst = 1U;
            while (((IData)(unnamedblk668__DOT__blk___Vfirst) 
                    || (0U != this->__PVT__blks.next(unnamedblk668__DOT__blk_)))) {
                unnamedblk668__DOT__blk___Vfirst = 0U;
                unnamedblk668__DOT__unnamedblk669__DOT__blk 
                    = unnamedblk668__DOT__blk_;
                VL_NULL_CHECK(unnamedblk668__DOT__unnamedblk669__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1576)
                    ->__VnoInFunc_set_coverage(vlSymsp, is_on, __Vtask_set_coverage__205__Vfuncout);
            }
        }
        set_coverage__Vfuncrtn = this->__PVT__cover_on;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values(Varchitecture__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_sample_values\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk670__DOT__rg_;
        CData/*0:0*/ unnamedblk670__DOT__rg___Vfirst;
        unnamedblk670__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk670__DOT__unnamedblk671__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk672__DOT__blk_;
        CData/*0:0*/ unnamedblk672__DOT__blk___Vfirst;
        unnamedblk672__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk672__DOT__unnamedblk673__DOT__blk;
        if ((0U != this->__PVT__regs.first(unnamedblk670__DOT__rg_))) {
            unnamedblk670__DOT__rg___Vfirst = 1U;
            while (((IData)(unnamedblk670__DOT__rg___Vfirst) 
                    || (0U != this->__PVT__regs.next(unnamedblk670__DOT__rg_)))) {
                unnamedblk670__DOT__rg___Vfirst = 0U;
                unnamedblk670__DOT__unnamedblk671__DOT__rg 
                    = unnamedblk670__DOT__rg_;
                VL_NULL_CHECK(unnamedblk670__DOT__unnamedblk671__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1588)
                    ->__VnoInFunc_sample_values(vlSymsp);
            }
        }
        if ((0U != this->__PVT__blks.first(unnamedblk672__DOT__blk_))) {
            unnamedblk672__DOT__blk___Vfirst = 1U;
            while (((IData)(unnamedblk672__DOT__blk___Vfirst) 
                    || (0U != this->__PVT__blks.next(unnamedblk672__DOT__blk_)))) {
                unnamedblk672__DOT__blk___Vfirst = 0U;
                unnamedblk672__DOT__unnamedblk673__DOT__blk 
                    = unnamedblk672__DOT__blk_;
                VL_NULL_CHECK(unnamedblk672__DOT__unnamedblk673__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1593)
                    ->__VnoInFunc_sample_values(vlSymsp);
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX(Varchitecture__Syms* __restrict vlSymsp, QData/*63:0*/ addr, CData/*0:0*/ is_read, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_XsampleX\n"); );
        // Body
        this->__VnoInFunc_sample(vlSymsp, addr, (IData)(is_read), map);
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_build_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ models, IData/*31:0*/ &build_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_build_coverage\n"); );
        // Locals
        CData/*0:0*/ __Vtask_read_by_name__209__Vfuncout;
        __Vtask_read_by_name__209__Vfuncout = 0;
        IData/*31:0*/ __Vtask_read_by_name__209__val;
        __Vtask_read_by_name__209__val = 0;
        std::string __Vfunc_get_full_name__210__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        build_coverage__Vfuncrtn = 0U;
        __Vtask_read_by_name__209__val = build_coverage__Vfuncrtn;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz181__Vclpkg.__VnoInFunc_read_by_name(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("uvm_reg::"s, 
                                                                                ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__210__Vfuncout);
                        }(), __Vfunc_get_full_name__210__Vfuncout))), "include_coverage"s, __Vtask_read_by_name__209__val, 
                                                                                VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>{this}, __Vtask_read_by_name__209__Vfuncout);
        build_coverage__Vfuncrtn = __Vtask_read_by_name__209__val;
        build_coverage__Vfuncrtn = (build_coverage__Vfuncrtn 
                                    & models);
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ models) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_coverage\n"); );
        // Body
        this->__PVT__has_cover = (this->__PVT__has_cover 
                                  | models);
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ models, CData/*0:0*/ &has_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_coverage\n"); );
        // Body
        has_coverage__Vfuncrtn = ((this->__PVT__has_cover 
                                   & models) == models);
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_coverage(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ is_on, CData/*0:0*/ &get_coverage__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_coverage\n"); );
        // Locals
        CData/*0:0*/ __Vfunc_has_coverage__211__Vfuncout;
        __Vfunc_has_coverage__211__Vfuncout = 0;
        // Body
        {
            if ((1U & (~ ([&]() {
                                this->__VnoInFunc_has_coverage(vlSymsp, is_on, __Vfunc_has_coverage__211__Vfuncout);
                            }(), (IData)(__Vfunc_has_coverage__211__Vfuncout))))) {
                get_coverage__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
            get_coverage__Vfuncrtn = ((this->__PVT__cover_on 
                                       & is_on) == is_on);
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset(Varchitecture__Syms* __restrict vlSymsp, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_reset\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk674__DOT__rg_;
        CData/*0:0*/ unnamedblk674__DOT__rg___Vfirst;
        unnamedblk674__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk674__DOT__unnamedblk675__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk676__DOT__blk_;
        CData/*0:0*/ unnamedblk676__DOT__blk___Vfirst;
        unnamedblk676__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk676__DOT__unnamedblk677__DOT__blk;
        if ((0U != this->__PVT__regs.first(unnamedblk674__DOT__rg_))) {
            unnamedblk674__DOT__rg___Vfirst = 1U;
            while (((IData)(unnamedblk674__DOT__rg___Vfirst) 
                    || (0U != this->__PVT__regs.next(unnamedblk674__DOT__rg_)))) {
                unnamedblk674__DOT__rg___Vfirst = 0U;
                unnamedblk674__DOT__unnamedblk675__DOT__rg 
                    = unnamedblk674__DOT__rg_;
                VL_NULL_CHECK(unnamedblk674__DOT__unnamedblk675__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1653)
                    ->__VnoInFunc_reset(vlSymsp, kind);
            }
        }
        if ((0U != this->__PVT__blks.first(unnamedblk676__DOT__blk_))) {
            unnamedblk676__DOT__blk___Vfirst = 1U;
            while (((IData)(unnamedblk676__DOT__blk___Vfirst) 
                    || (0U != this->__PVT__blks.next(unnamedblk676__DOT__blk_)))) {
                unnamedblk676__DOT__blk___Vfirst = 0U;
                unnamedblk676__DOT__unnamedblk677__DOT__blk 
                    = unnamedblk676__DOT__blk_;
                VL_NULL_CHECK(unnamedblk676__DOT__unnamedblk677__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1658)
                    ->__VnoInFunc_reset(vlSymsp, kind);
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &needs_update__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_needs_update\n"); );
        // Locals
        CData/*0:0*/ __Vtask_needs_update__214__Vfuncout;
        __Vtask_needs_update__214__Vfuncout = 0;
        CData/*0:0*/ __Vtask_needs_update__215__Vfuncout;
        __Vtask_needs_update__215__Vfuncout = 0;
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk678__DOT__rg_;
        CData/*0:0*/ unnamedblk678__DOT__rg___Vfirst;
        unnamedblk678__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk678__DOT__unnamedblk679__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk680__DOT__blk_;
        CData/*0:0*/ unnamedblk680__DOT__blk___Vfirst;
        unnamedblk680__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk680__DOT__unnamedblk681__DOT__blk;
        {
            needs_update__Vfuncrtn = 0U;
            if ((0U != this->__PVT__regs.first(unnamedblk678__DOT__rg_))) {
                unnamedblk678__DOT__rg___Vfirst = 1U;
                while (((IData)(unnamedblk678__DOT__rg___Vfirst) 
                        || (0U != this->__PVT__regs.next(unnamedblk678__DOT__rg_)))) {
                    unnamedblk678__DOT__rg___Vfirst = 0U;
                    unnamedblk678__DOT__unnamedblk679__DOT__rg 
                        = unnamedblk678__DOT__rg_;
                    if (([&]() {
                                VL_NULL_CHECK(unnamedblk678__DOT__unnamedblk679__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1670)
                         ->__VnoInFunc_needs_update(vlSymsp, __Vtask_needs_update__214__Vfuncout);
                            }(), (IData)(__Vtask_needs_update__214__Vfuncout))) {
                        needs_update__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    }
                }
            }
            if ((0U != this->__PVT__blks.first(unnamedblk680__DOT__blk_))) {
                unnamedblk680__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk680__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk680__DOT__blk_)))) {
                    unnamedblk680__DOT__blk___Vfirst = 0U;
                    unnamedblk680__DOT__unnamedblk681__DOT__blk 
                        = unnamedblk680__DOT__blk_;
                    if (([&]() {
                                VL_NULL_CHECK(unnamedblk680__DOT__unnamedblk681__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1675)
                         ->__VnoInFunc_needs_update(vlSymsp, __Vtask_needs_update__215__Vfuncout);
                            }(), (IData)(__Vtask_needs_update__215__Vfuncout))) {
                        needs_update__Vfuncrtn = 1U;
                        goto __Vlabel0;
                    }
                }
            }
            __Vlabel0: ;
        }
    }

    VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_update\n"); );
        // Locals
        CData/*0:0*/ __Vfunc_needs_update__216__Vfuncout;
        __Vfunc_needs_update__216__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__217__Vfuncout;
        __Vfunc_uvm_report_enabled__217__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__217__verbosity;
        __Vfunc_uvm_report_enabled__217__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__217__severity;
        __Vfunc_uvm_report_enabled__217__severity = 0;
        std::string __Vfunc_uvm_report_enabled__217__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__218__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__219__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__220__Vfuncout;
        __Vtask_uvm_report_enabled__220__Vfuncout = 0;
        std::string __Vtask_uvm_report_info__221__id;
        std::string __Vtask_uvm_report_info__221__message;
        IData/*31:0*/ __Vtask_uvm_report_info__221__verbosity;
        __Vtask_uvm_report_info__221__verbosity = 0;
        std::string __Vtask_uvm_report_info__221__filename;
        IData/*31:0*/ __Vtask_uvm_report_info__221__line;
        __Vtask_uvm_report_info__221__line = 0;
        std::string __Vtask_uvm_report_info__221__context_name;
        CData/*0:0*/ __Vtask_uvm_report_info__221__report_enabled_checked;
        __Vtask_uvm_report_info__221__report_enabled_checked = 0;
        std::string __Vfunc_get_name__222__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__223__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__224__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__226__Vfuncout;
        __Vfunc_uvm_report_enabled__226__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__226__verbosity;
        __Vfunc_uvm_report_enabled__226__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__226__severity;
        __Vfunc_uvm_report_enabled__226__severity = 0;
        std::string __Vfunc_uvm_report_enabled__226__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__227__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__228__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__229__Vfuncout;
        __Vtask_uvm_report_enabled__229__Vfuncout = 0;
        std::string __Vtask_uvm_report_info__230__id;
        std::string __Vtask_uvm_report_info__230__message;
        IData/*31:0*/ __Vtask_uvm_report_info__230__verbosity;
        __Vtask_uvm_report_info__230__verbosity = 0;
        std::string __Vtask_uvm_report_info__230__filename;
        IData/*31:0*/ __Vtask_uvm_report_info__230__line;
        __Vtask_uvm_report_info__230__line = 0;
        std::string __Vtask_uvm_report_info__230__context_name;
        CData/*0:0*/ __Vtask_uvm_report_info__230__report_enabled_checked;
        __Vtask_uvm_report_info__230__report_enabled_checked = 0;
        std::string __Vfunc_get_name__231__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__232__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__233__Vfuncout;
        CData/*0:0*/ __Vtask_needs_update__235__Vfuncout;
        __Vtask_needs_update__235__Vfuncout = 0;
        IData/*31:0*/ __Vtask_update__236__status;
        __Vtask_update__236__status = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__237__Vfuncout;
        __Vfunc_uvm_report_enabled__237__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__237__verbosity;
        __Vfunc_uvm_report_enabled__237__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__237__severity;
        __Vfunc_uvm_report_enabled__237__severity = 0;
        std::string __Vfunc_uvm_report_enabled__237__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__238__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__239__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__240__Vfuncout;
        __Vtask_uvm_report_enabled__240__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__241__id;
        std::string __Vtask_uvm_report_error__241__message;
        IData/*31:0*/ __Vtask_uvm_report_error__241__verbosity;
        __Vtask_uvm_report_error__241__verbosity = 0;
        std::string __Vtask_uvm_report_error__241__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__241__line;
        __Vtask_uvm_report_error__241__line = 0;
        std::string __Vtask_uvm_report_error__241__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__241__report_enabled_checked;
        __Vtask_uvm_report_error__241__report_enabled_checked = 0;
        std::string __Vtask_get_full_name__242__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__243__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__244__Vfuncout;
        IData/*31:0*/ __Vtask_update__246__status;
        __Vtask_update__246__status = 0;
        std::string __Vtemp_1;
        std::string __Vtemp_2;
        std::string __Vtemp_3;
        std::string __Vtemp_4;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk682__DOT__rg_;
        CData/*0:0*/ unnamedblk682__DOT__rg___Vfirst;
        unnamedblk682__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk682__DOT__unnamedblk683__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk684__DOT__blk_;
        CData/*0:0*/ unnamedblk684__DOT__blk___Vfirst;
        unnamedblk684__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk684__DOT__unnamedblk685__DOT__blk;
        {
            status = 0U;
            if ((1U & (~ ([&]() {
                                this->__VnoInFunc_needs_update(vlSymsp, __Vfunc_needs_update__216__Vfuncout);
                            }(), (IData)(__Vfunc_needs_update__216__Vfuncout))))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__217__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__217__severity = 0U;
                                __Vfunc_uvm_report_enabled__217__verbosity = 0x0000012cU;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__218__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__218__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__219__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__219__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__217__verbosity, (IData)(__Vfunc_uvm_report_enabled__217__severity), __Vfunc_uvm_report_enabled__217__id, __Vtask_uvm_report_enabled__220__Vfuncout);
                                __Vfunc_uvm_report_enabled__217__Vfuncout 
                                    = __Vtask_uvm_report_enabled__220__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__217__Vfuncout))) {
                    __Vtask_uvm_report_info__221__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__221__context_name = ""s;
                    __Vtask_uvm_report_info__221__line = 0x0000069eU;
                    __Vtask_uvm_report_info__221__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_info__221__verbosity = 0x0000012cU;
                    __Vtemp_1 = ([&]() {
                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__222__Vfuncout);
                        }(), __Vfunc_get_name__222__Vfuncout);
                    __Vtask_uvm_report_info__221__message 
                        = VL_SFORMATF_N_NX("%@:%0d - RegModel block %@ does not need updating",0,
                                           -1,&(fname),
                                           32,lineno,
                                           -1,&(__Vtemp_1)) ;
                    __Vtask_uvm_report_info__221__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__223__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__223__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__224__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__224__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                    ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__221__id, __Vtask_uvm_report_info__221__message, __Vtask_uvm_report_info__221__verbosity, __Vtask_uvm_report_info__221__filename, __Vtask_uvm_report_info__221__line, __Vtask_uvm_report_info__221__context_name, (IData)(__Vtask_uvm_report_info__221__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__226__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__226__severity = 0U;
                            __Vfunc_uvm_report_enabled__226__verbosity = 0x0000012cU;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__227__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__227__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__228__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__228__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__226__verbosity, (IData)(__Vfunc_uvm_report_enabled__226__severity), __Vfunc_uvm_report_enabled__226__id, __Vtask_uvm_report_enabled__229__Vfuncout);
                            __Vfunc_uvm_report_enabled__226__Vfuncout 
                                = __Vtask_uvm_report_enabled__229__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__226__Vfuncout))) {
                __Vtask_uvm_report_info__230__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__230__context_name = ""s;
                __Vtask_uvm_report_info__230__line = 0x000006a3U;
                __Vtask_uvm_report_info__230__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_info__230__verbosity = 0x0000012cU;
                __Vtemp_2 = ([&]() {
                        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__231__Vfuncout);
                    }(), __Vfunc_get_name__231__Vfuncout);
                __Vtemp_3 = Varchitecture___024unit::__Venumtab_enum_name73
                    [(3U & path)];
                __Vtask_uvm_report_info__230__message 
                    = VL_SFORMATF_N_NX("%@:%0d - Updating model block %@ with %@ path",0,
                                       -1,&(fname),
                                       32,lineno,-1,
                                       &(__Vtemp_2),
                                       -1,&(__Vtemp_3)) ;
                __Vtask_uvm_report_info__230__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__232__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__232__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__233__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__233__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)
                    ->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__230__id, __Vtask_uvm_report_info__230__message, __Vtask_uvm_report_info__230__verbosity, __Vtask_uvm_report_info__230__filename, __Vtask_uvm_report_info__230__line, __Vtask_uvm_report_info__230__context_name, (IData)(__Vtask_uvm_report_info__230__report_enabled_checked));
            }
            if ((0U != this->__PVT__regs.first(unnamedblk682__DOT__rg_))) {
                unnamedblk682__DOT__rg___Vfirst = 1U;
                while (((IData)(unnamedblk682__DOT__rg___Vfirst) 
                        || (0U != this->__PVT__regs.next(unnamedblk682__DOT__rg_)))) {
                    unnamedblk682__DOT__rg___Vfirst = 0U;
                    unnamedblk682__DOT__unnamedblk683__DOT__rg 
                        = unnamedblk682__DOT__rg_;
                    if (([&]() {
                                VL_NULL_CHECK(unnamedblk682__DOT__unnamedblk683__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1703)
                         ->__VnoInFunc_needs_update(vlSymsp, __Vtask_needs_update__235__Vfuncout);
                            }(), (IData)(__Vtask_needs_update__235__Vfuncout))) {
                        co_await VL_NULL_CHECK(unnamedblk682__DOT__unnamedblk683__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1704)
                    ->__VnoInFunc_update(vlSymsp, __Vtask_update__236__status, path, VlNull{}, parent, prior, extension, ""s, 0U);
                        status = __Vtask_update__236__status;
                        if (((0U != status) & (2U != status))) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__237__id = "RegModel"s;
                                            __Vfunc_uvm_report_enabled__237__severity = 2U;
                                            __Vfunc_uvm_report_enabled__237__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__238__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__238__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__239__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__239__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__237__verbosity, (IData)(__Vfunc_uvm_report_enabled__237__severity), __Vfunc_uvm_report_enabled__237__id, __Vtask_uvm_report_enabled__240__Vfuncout);
                                            __Vfunc_uvm_report_enabled__237__Vfuncout 
                                                = __Vtask_uvm_report_enabled__240__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__237__Vfuncout))) {
                                __Vtask_uvm_report_error__241__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__241__context_name = ""s;
                                __Vtask_uvm_report_error__241__line = 0x000006abU;
                                __Vtask_uvm_report_error__241__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                                __Vtask_uvm_report_error__241__verbosity = 0U;
                                __Vtemp_4 = ([&]() {
                                        VL_NULL_CHECK(unnamedblk682__DOT__unnamedblk683__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1707)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__242__Vfuncout);
                                    }(), __Vtask_get_full_name__242__Vfuncout);
                                __Vtask_uvm_report_error__241__message 
                                    = VL_SFORMATF_N_NX("Register \"%@\" could not be updated",0,
                                                       -1,
                                                       &(__Vtemp_4)) ;
                                __Vtask_uvm_report_error__241__id = "RegModel"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__243__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__243__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__244__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__244__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__241__id, __Vtask_uvm_report_error__241__message, __Vtask_uvm_report_error__241__verbosity, __Vtask_uvm_report_error__241__filename, __Vtask_uvm_report_error__241__line, __Vtask_uvm_report_error__241__context_name, (IData)(__Vtask_uvm_report_error__241__report_enabled_checked));
                            }
                            goto __Vlabel0;
                        }
                    }
                }
            }
            if ((0U != this->__PVT__blks.first(unnamedblk684__DOT__blk_))) {
                unnamedblk684__DOT__blk___Vfirst = 1U;
                while (((IData)(unnamedblk684__DOT__blk___Vfirst) 
                        || (0U != this->__PVT__blks.next(unnamedblk684__DOT__blk_)))) {
                    unnamedblk684__DOT__blk___Vfirst = 0U;
                    unnamedblk684__DOT__unnamedblk685__DOT__blk 
                        = unnamedblk684__DOT__blk_;
                    co_await VL_NULL_CHECK(unnamedblk684__DOT__unnamedblk685__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1715)
                    ->__VnoInFunc_update(vlSymsp, __Vtask_update__246__status, path, parent, prior, extension, fname, lineno);
                    status = __Vtask_update__246__status;
                }
            }
            __Vlabel0: ;
        }
    }

    VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_mirror\n"); );
        // Locals
        IData/*31:0*/ __Vtask_mirror__247__status;
        __Vtask_mirror__247__status = 0;
        IData/*31:0*/ __Vtask_mirror__248__status;
        __Vtask_mirror__248__status = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk686__DOT__rg_;
        CData/*0:0*/ unnamedblk686__DOT__rg___Vfirst;
        unnamedblk686__DOT__rg___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk686__DOT__unnamedblk687__DOT__rg;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk688__DOT__blk_;
        CData/*0:0*/ unnamedblk688__DOT__blk___Vfirst;
        unnamedblk688__DOT__blk___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk688__DOT__unnamedblk689__DOT__blk;
        IData/*31:0*/ final_status;
        final_status = 0;
        final_status = 0U;
        if ((0U != this->__PVT__regs.first(unnamedblk686__DOT__rg_))) {
            unnamedblk686__DOT__rg___Vfirst = 1U;
            while (((IData)(unnamedblk686__DOT__rg___Vfirst) 
                    || (0U != this->__PVT__regs.next(unnamedblk686__DOT__rg_)))) {
                unnamedblk686__DOT__rg___Vfirst = 0U;
                unnamedblk686__DOT__unnamedblk687__DOT__rg 
                    = unnamedblk686__DOT__rg_;
                co_await VL_NULL_CHECK(unnamedblk686__DOT__unnamedblk687__DOT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1734)
                    ->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__247__status, check, path, VlNull{}, parent, prior, extension, fname, lineno);
                status = __Vtask_mirror__247__status;
                if (((0U != status) & (2U != status))) {
                    final_status = status;
                }
            }
        }
        if ((0U != this->__PVT__blks.first(unnamedblk688__DOT__blk_))) {
            unnamedblk688__DOT__blk___Vfirst = 1U;
            while (((IData)(unnamedblk688__DOT__blk___Vfirst) 
                    || (0U != this->__PVT__blks.next(unnamedblk688__DOT__blk_)))) {
                unnamedblk688__DOT__blk___Vfirst = 0U;
                unnamedblk688__DOT__unnamedblk689__DOT__blk 
                    = unnamedblk688__DOT__blk_;
                co_await VL_NULL_CHECK(unnamedblk688__DOT__unnamedblk689__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1744)
                    ->__VnoInFunc_mirror(vlSymsp, __Vtask_mirror__248__status, check, path, parent, prior, extension, fname, lineno);
                status = __Vtask_mirror__248__status;
                if (((0U != status) & (2U != status))) {
                    final_status = status;
                }
            }
        }
    }

    VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_reg_by_name(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_reg_by_name\n"); );
        // Locals
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> __Vfunc_get_reg_by_name__249__Vfuncout;
        IData/*31:0*/ __Vtask_write__250__status;
        __Vtask_write__250__status = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> rg;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_reg_by_name(vlSymsp, name, __Vfunc_get_reg_by_name__249__Vfuncout);
        rg = __Vfunc_get_reg_by_name__249__Vfuncout;
        if ((VlNull{} != rg)) {
            co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1772)
                    ->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__250__status, data, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_write__250__status;
        }
    }

    VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_reg_by_name(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_reg_by_name\n"); );
        // Locals
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> __Vfunc_get_reg_by_name__251__Vfuncout;
        IData/*31:0*/ __Vtask_read__252__status;
        __Vtask_read__252__status = 0;
        QData/*63:0*/ __Vtask_read__252__value;
        __Vtask_read__252__value = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> rg;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_reg_by_name(vlSymsp, name, __Vfunc_get_reg_by_name__251__Vfuncout);
        rg = __Vfunc_get_reg_by_name__251__Vfuncout;
        if ((VlNull{} != rg)) {
            co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1796)
                    ->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__252__status, __Vtask_read__252__value, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_read__252__status;
            data = __Vtask_read__252__value;
        }
    }

    VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_mem_by_name(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ data, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_write_mem_by_name\n"); );
        // Locals
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> __Vfunc_get_mem_by_name__253__Vfuncout;
        IData/*31:0*/ __Vtask_write__254__status;
        __Vtask_write__254__status = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> mem;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_mem_by_name(vlSymsp, name, __Vfunc_get_mem_by_name__253__Vfuncout);
        mem = __Vfunc_get_mem_by_name__253__Vfuncout;
        if ((VlNull{} != mem)) {
            co_await VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1820)
                    ->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__254__status, offset, data, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_write__254__status;
        }
    }

    VlCoroutine Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_mem_by_name(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status, std::string name, QData/*63:0*/ offset, QData/*63:0*/ &data, IData/*31:0*/ path, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_read_mem_by_name\n"); );
        // Locals
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> __Vfunc_get_mem_by_name__255__Vfuncout;
        IData/*31:0*/ __Vtask_read__256__status;
        __Vtask_read__256__status = 0;
        QData/*63:0*/ __Vtask_read__256__value;
        __Vtask_read__256__value = 0;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_KEEP_THIS;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> mem;
        this->__PVT__fname = fname;
        this->__PVT__lineno = lineno;
        status = 1U;
        this->__VnoInFunc_get_mem_by_name(vlSymsp, name, __Vfunc_get_mem_by_name__255__Vfuncout);
        mem = __Vfunc_get_mem_by_name__255__Vfuncout;
        if ((VlNull{} != mem)) {
            co_await VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1844)
                    ->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__256__status, offset, __Vtask_read__256__value, path, map, parent, prior, extension, ""s, 0U);
            status = __Vtask_read__256__status;
            data = __Vtask_read__256__value;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_readmemh(Varchitecture__Syms* __restrict vlSymsp, std::string filename) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_readmemh\n"); );
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_writememh(Varchitecture__Syms* __restrict vlSymsp, std::string filename) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_writememh\n"); );
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create_map(Varchitecture__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &create_map__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_create_map\n"); );
        // Locals
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> __Vfunc_create__257__Vfuncout;
        std::string __Vfunc_get_full_name__258__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi113__Vclpkg.__VnoInFunc_create(vlSymsp, name, VlNull{}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__258__Vfuncout);
                    }(), __Vfunc_get_full_name__258__Vfuncout)), __Vfunc_create__257__Vfuncout);
        map = __Vfunc_create__257__Vfuncout;
        VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1877)
                    ->__VnoInFunc_configure(vlSymsp, 
                                            VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>{this}, base_addr, n_bytes, endian, (IData)(byte_addressing));
        this->__VnoInFunc_add_map(vlSymsp, map);
        create_map__Vfuncrtn = map;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_map(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_map\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__261__Vfuncout;
        __Vfunc_uvm_report_enabled__261__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__261__verbosity;
        __Vfunc_uvm_report_enabled__261__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__261__severity;
        __Vfunc_uvm_report_enabled__261__severity = 0;
        std::string __Vfunc_uvm_report_enabled__261__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__262__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__263__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__264__Vfuncout;
        __Vtask_uvm_report_enabled__264__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__265__id;
        std::string __Vtask_uvm_report_error__265__message;
        IData/*31:0*/ __Vtask_uvm_report_error__265__verbosity;
        __Vtask_uvm_report_error__265__verbosity = 0;
        std::string __Vtask_uvm_report_error__265__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__265__line;
        __Vtask_uvm_report_error__265__line = 0;
        std::string __Vtask_uvm_report_error__265__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__265__report_enabled_checked;
        __Vtask_uvm_report_error__265__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__266__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__267__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__269__Vfuncout;
        __Vfunc_uvm_report_enabled__269__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__269__verbosity;
        __Vfunc_uvm_report_enabled__269__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__269__severity;
        __Vfunc_uvm_report_enabled__269__severity = 0;
        std::string __Vfunc_uvm_report_enabled__269__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__270__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__271__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__272__Vfuncout;
        __Vtask_uvm_report_enabled__272__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__273__id;
        std::string __Vtask_uvm_report_error__273__message;
        IData/*31:0*/ __Vtask_uvm_report_error__273__verbosity;
        __Vtask_uvm_report_error__273__verbosity = 0;
        std::string __Vtask_uvm_report_error__273__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__273__line;
        __Vtask_uvm_report_error__273__line = 0;
        std::string __Vtask_uvm_report_error__273__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__273__report_enabled_checked;
        __Vtask_uvm_report_error__273__report_enabled_checked = 0;
        std::string __Vtask_get_name__274__Vfuncout;
        std::string __Vfunc_get_full_name__275__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__276__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__277__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        {
            if (this->__PVT__locked) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__261__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__261__severity = 2U;
                                __Vfunc_uvm_report_enabled__261__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__262__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__262__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__263__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__263__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__261__verbosity, (IData)(__Vfunc_uvm_report_enabled__261__severity), __Vfunc_uvm_report_enabled__261__id, __Vtask_uvm_report_enabled__264__Vfuncout);
                                __Vfunc_uvm_report_enabled__261__Vfuncout 
                                    = __Vtask_uvm_report_enabled__264__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__261__Vfuncout))) {
                    __Vtask_uvm_report_error__265__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__265__context_name = ""s;
                    __Vtask_uvm_report_error__265__line = 0x00000762U;
                    __Vtask_uvm_report_error__265__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__265__verbosity = 0U;
                    __Vtask_uvm_report_error__265__message = "Cannot add map to locked model"s;
                    __Vtask_uvm_report_error__265__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__266__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__266__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__267__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__267__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__265__id, __Vtask_uvm_report_error__265__message, __Vtask_uvm_report_error__265__verbosity, __Vtask_uvm_report_error__265__filename, __Vtask_uvm_report_error__265__line, __Vtask_uvm_report_error__265__context_name, (IData)(__Vtask_uvm_report_error__265__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            if (this->__PVT__maps.exists(map)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__269__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__269__severity = 2U;
                                __Vfunc_uvm_report_enabled__269__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__270__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__270__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__271__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__271__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__269__verbosity, (IData)(__Vfunc_uvm_report_enabled__269__severity), __Vfunc_uvm_report_enabled__269__id, __Vtask_uvm_report_enabled__272__Vfuncout);
                                __Vfunc_uvm_report_enabled__269__Vfuncout 
                                    = __Vtask_uvm_report_enabled__272__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__269__Vfuncout))) {
                    __Vtask_uvm_report_error__273__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__273__context_name = ""s;
                    __Vtask_uvm_report_error__273__line = 0x00000768U;
                    __Vtask_uvm_report_error__273__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__273__verbosity = 0U;
                    __Vtask_uvm_report_error__273__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN(
                                                                           VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Map '"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1896)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__274__Vfuncout);
                                            }(), __Vtask_get_name__274__Vfuncout)), "' already exists in '"s), 
                                                                           ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__275__Vfuncout);
                                    }(), __Vfunc_get_full_name__275__Vfuncout)), "'"s));
                    __Vtask_uvm_report_error__273__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__276__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__276__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__277__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__277__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__273__id, __Vtask_uvm_report_error__273__message, __Vtask_uvm_report_error__273__verbosity, __Vtask_uvm_report_error__273__filename, __Vtask_uvm_report_error__273__line, __Vtask_uvm_report_error__273__context_name, (IData)(__Vtask_uvm_report_error__273__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            this->__PVT__maps.at(map) = 1U;
            if ((1U == this->__PVT__maps.size())) {
                this->__PVT__default_map = map;
            }
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_map_by_name(Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &get_map_by_name__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_map_by_name\n"); );
        // Locals
        std::string __Vtask_get_name__280__Vfuncout;
        std::string __Vtask_get_name__282__Vfuncout;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__283__Vfuncout;
        __Vfunc_uvm_report_enabled__283__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__283__verbosity;
        __Vfunc_uvm_report_enabled__283__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__283__severity;
        __Vfunc_uvm_report_enabled__283__severity = 0;
        std::string __Vfunc_uvm_report_enabled__283__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__284__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__285__Vfuncout;
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
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__288__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__289__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ unnamedblk690__DOT__i;
        unnamedblk690__DOT__i = 0;
        IData/*31:0*/ unnamedblk691__DOT__i;
        unnamedblk691__DOT__i = 0;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map>> unnamedblk691__DOT__unnamedblk692__DOT__submaps;
        IData/*31:0*/ unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j;
        unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j = 0;
        VlQueue<VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map>> maps;
        {
            this->__VnoInFunc_get_maps(vlSymsp, maps);
            unnamedblk690__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk690__DOT__i, maps.size())) {
                if ((([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk690__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1915)
                      ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__280__Vfuncout);
                            }(), __Vtask_get_name__280__Vfuncout) 
                     == name)) {
                    get_map_by_name__Vfuncrtn = maps.at(unnamedblk690__DOT__i);
                    goto __Vlabel0;
                }
                unnamedblk690__DOT__i = ((IData)(1U) 
                                         + unnamedblk690__DOT__i);
            }
            unnamedblk691__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk691__DOT__i, maps.size())) {
                VL_NULL_CHECK(maps.at(unnamedblk691__DOT__i), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1920)
                    ->__VnoInFunc_get_submaps(vlSymsp, unnamedblk691__DOT__unnamedblk692__DOT__submaps, 1U);
                unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j, unnamedblk691__DOT__unnamedblk692__DOT__submaps.size())) {
                    if ((([&]() {
                                    VL_NULL_CHECK(unnamedblk691__DOT__unnamedblk692__DOT__submaps.at(unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1923)
                          ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__282__Vfuncout);
                                }(), __Vtask_get_name__282__Vfuncout) 
                         == name)) {
                        get_map_by_name__Vfuncrtn = unnamedblk691__DOT__unnamedblk692__DOT__submaps.at(unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j);
                        goto __Vlabel0;
                    }
                    unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j 
                        = ((IData)(1U) + unnamedblk691__DOT__unnamedblk692__DOT__unnamedblk693__DOT__j);
                }
                unnamedblk691__DOT__i = ((IData)(1U) 
                                         + unnamedblk691__DOT__i);
            }
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
                __Vtask_uvm_report_warning__287__line = 0x00000788U;
                __Vtask_uvm_report_warning__287__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__287__verbosity = 0U;
                __Vtask_uvm_report_warning__287__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Map with name '"s, name), "' does not exist in block"s));
                __Vtask_uvm_report_warning__287__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__288__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__288__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__289__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__289__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__287__id, __Vtask_uvm_report_warning__287__message, __Vtask_uvm_report_warning__287__verbosity, __Vtask_uvm_report_warning__287__filename, __Vtask_uvm_report_warning__287__line, __Vtask_uvm_report_warning__287__context_name, (IData)(__Vtask_uvm_report_warning__287__report_enabled_checked));
            }
            get_map_by_name__Vfuncrtn = VlNull{};
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_map(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> map) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_map\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__291__Vfuncout;
        __Vfunc_uvm_report_enabled__291__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__291__verbosity;
        __Vfunc_uvm_report_enabled__291__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__291__severity;
        __Vfunc_uvm_report_enabled__291__severity = 0;
        std::string __Vfunc_uvm_report_enabled__291__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__292__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__293__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__294__Vfuncout;
        __Vtask_uvm_report_enabled__294__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__295__id;
        std::string __Vtask_uvm_report_warning__295__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__295__verbosity;
        __Vtask_uvm_report_warning__295__verbosity = 0;
        std::string __Vtask_uvm_report_warning__295__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__295__line;
        __Vtask_uvm_report_warning__295__line = 0;
        std::string __Vtask_uvm_report_warning__295__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__295__report_enabled_checked;
        __Vtask_uvm_report_warning__295__report_enabled_checked = 0;
        std::string __Vtask_get_full_name__296__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__297__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__298__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        if ((! this->__PVT__maps.exists(map))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__291__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__291__severity = 1U;
                            __Vfunc_uvm_report_enabled__291__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__292__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__292__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__293__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__293__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__291__verbosity, (IData)(__Vfunc_uvm_report_enabled__291__severity), __Vfunc_uvm_report_enabled__291__id, __Vtask_uvm_report_enabled__294__Vfuncout);
                            __Vfunc_uvm_report_enabled__291__Vfuncout 
                                = __Vtask_uvm_report_enabled__294__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__291__Vfuncout))) {
                __Vtask_uvm_report_warning__295__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__295__context_name = ""s;
                __Vtask_uvm_report_warning__295__line = 0x00000791U;
                __Vtask_uvm_report_warning__295__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__295__verbosity = 0U;
                __Vtask_uvm_report_warning__295__message 
                    = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                        VL_CONCATN_NNN("Map '"s, 
                                                                       ([&]() {
                                    VL_NULL_CHECK(map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1937)
                                                                        ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__296__Vfuncout);
                                }(), __Vtask_get_full_name__296__Vfuncout)), "' does not exist in block"s));
                __Vtask_uvm_report_warning__295__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__297__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__297__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__298__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__298__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__295__id, __Vtask_uvm_report_warning__295__message, __Vtask_uvm_report_warning__295__verbosity, __Vtask_uvm_report_warning__295__filename, __Vtask_uvm_report_warning__295__line, __Vtask_uvm_report_warning__295__context_name, (IData)(__Vtask_uvm_report_warning__295__report_enabled_checked));
            }
        }
        this->__PVT__default_map = map;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> &get_default_map__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_map\n"); );
        // Body
        get_default_map__Vfuncrtn = this->__PVT__default_map;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_door(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_default_door__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_door\n"); );
        // Locals
        IData/*31:0*/ __Vtask_get_default_door__300__Vfuncout;
        __Vtask_get_default_door__300__Vfuncout = 0;
        // Body
        {
            if ((3U != this->__PVT__default_path)) {
                get_default_door__Vfuncrtn = this->__PVT__default_path;
                goto __Vlabel0;
            }
            if ((VlNull{} != this->__PVT__parent)) {
                VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1962)
                    ->__VnoInFunc_get_default_door(vlSymsp, __Vtask_get_default_door__300__Vfuncout);
                get_default_door__Vfuncrtn = __Vtask_get_default_door__300__Vfuncout;
                goto __Vlabel0;
            }
            get_default_door__Vfuncrtn = 0U;
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_door(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ door) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_door\n"); );
        // Body
        this->__PVT__default_path = door;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_Xinit_address_mapsX(Varchitecture__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_Xinit_address_mapsX\n"); );
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk694__DOT__map_;
        CData/*0:0*/ unnamedblk694__DOT__map___Vfirst;
        unnamedblk694__DOT__map___Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk694__DOT__unnamedblk695__DOT__map;
        if ((0U != this->__PVT__maps.first(unnamedblk694__DOT__map_))) {
            unnamedblk694__DOT__map___Vfirst = 1U;
            while (((IData)(unnamedblk694__DOT__map___Vfirst) 
                    || (0U != this->__PVT__maps.next(unnamedblk694__DOT__map_)))) {
                unnamedblk694__DOT__map___Vfirst = 0U;
                unnamedblk694__DOT__unnamedblk695__DOT__map 
                    = unnamedblk694__DOT__map_;
                VL_NULL_CHECK(unnamedblk694__DOT__unnamedblk695__DOT__map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1981)
                    ->__VnoInFunc_Xinit_address_mapX(vlSymsp);
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_backdoor(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> bkdr, std::string fname, IData/*31:0*/ lineno) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_backdoor\n"); );
        // Locals
        CData/*0:0*/ __Vtask_has_update_threads__302__Vfuncout;
        __Vtask_has_update_threads__302__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__303__Vfuncout;
        __Vfunc_uvm_report_enabled__303__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__303__verbosity;
        __Vfunc_uvm_report_enabled__303__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__303__severity;
        __Vfunc_uvm_report_enabled__303__severity = 0;
        std::string __Vfunc_uvm_report_enabled__303__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__304__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__305__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__306__Vfuncout;
        __Vtask_uvm_report_enabled__306__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__307__id;
        std::string __Vtask_uvm_report_warning__307__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__307__verbosity;
        __Vtask_uvm_report_warning__307__verbosity = 0;
        std::string __Vtask_uvm_report_warning__307__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__307__line;
        __Vtask_uvm_report_warning__307__line = 0;
        std::string __Vtask_uvm_report_warning__307__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__307__report_enabled_checked;
        __Vtask_uvm_report_warning__307__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__308__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__309__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VL_NULL_CHECK(bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1996)
                    ->__PVT__fname = fname;
        VL_NULL_CHECK(bkdr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1997)
                    ->__PVT__lineno = lineno;
        if (((VlNull{} != this->__PVT__backdoor) && 
             ([&]() {
                        VL_NULL_CHECK(this->__PVT__backdoor, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 1999)
              ->__VnoInFunc_has_update_threads(vlSymsp, __Vtask_has_update_threads__302__Vfuncout);
                    }(), (IData)(__Vtask_has_update_threads__302__Vfuncout)))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__303__id = "RegModel"s;
                            __Vfunc_uvm_report_enabled__303__severity = 1U;
                            __Vfunc_uvm_report_enabled__303__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__304__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__304__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__305__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__305__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__303__verbosity, (IData)(__Vfunc_uvm_report_enabled__303__severity), __Vfunc_uvm_report_enabled__303__id, __Vtask_uvm_report_enabled__306__Vfuncout);
                            __Vfunc_uvm_report_enabled__303__Vfuncout 
                                = __Vtask_uvm_report_enabled__306__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__303__Vfuncout))) {
                __Vtask_uvm_report_warning__307__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__307__context_name = ""s;
                __Vtask_uvm_report_warning__307__line = 0x000007d0U;
                __Vtask_uvm_report_warning__307__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                __Vtask_uvm_report_warning__307__verbosity = 0U;
                __Vtask_uvm_report_warning__307__message = "Previous register backdoor still has update threads running. Backdoors with active mirroring should only be set before simulation starts."s;
                __Vtask_uvm_report_warning__307__id = "RegModel"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__308__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__308__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__309__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__309__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__307__id, __Vtask_uvm_report_warning__307__message, __Vtask_uvm_report_warning__307__verbosity, __Vtask_uvm_report_warning__307__filename, __Vtask_uvm_report_warning__307__line, __Vtask_uvm_report_warning__307__context_name, (IData)(__Vtask_uvm_report_warning__307__report_enabled_checked));
            }
        }
        this->__PVT__backdoor = bkdr;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ inherited, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> &get_backdoor__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_backdoor\n"); );
        // Locals
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> __Vfunc_get_parent__311__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__312__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> __Vtask_get_parent__313__Vfuncout;
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk696__DOT__blk;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_backdoor> unnamedblk696__DOT__unnamedblk697__DOT__bkdr;
        {
            if (inherited) {
                this->__VnoInFunc_get_parent(vlSymsp, __Vfunc_get_parent__311__Vfuncout);
                unnamedblk696__DOT__blk = __Vfunc_get_parent__311__Vfuncout;
                while ((VlNull{} != unnamedblk696__DOT__blk)) {
                    VL_NULL_CHECK(unnamedblk696__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2012)
                    ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__312__Vfuncout);
                    unnamedblk696__DOT__unnamedblk697__DOT__bkdr 
                        = __Vtask_get_backdoor__312__Vfuncout;
                    if ((VlNull{} != unnamedblk696__DOT__unnamedblk697__DOT__bkdr)) {
                        get_backdoor__Vfuncrtn = unnamedblk696__DOT__unnamedblk697__DOT__bkdr;
                        goto __Vlabel0;
                    }
                    VL_NULL_CHECK(unnamedblk696__DOT__blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2015)
                    ->__VnoInFunc_get_parent(vlSymsp, __Vtask_get_parent__313__Vfuncout);
                    unnamedblk696__DOT__blk = __Vtask_get_parent__313__Vfuncout;
                }
            }
            get_backdoor__Vfuncrtn = this->__PVT__backdoor;
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clear_hdl_path(Varchitecture__Syms* __restrict vlSymsp, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clear_hdl_path\n"); );
        // Locals
        std::string __Vfunc_get_default_hdl_path__315__Vfuncout;
        IData/*31:0*/ __Vtask_exists__316__Vfuncout;
        __Vtask_exists__316__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__317__Vfuncout;
        __Vfunc_uvm_report_enabled__317__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__317__verbosity;
        __Vfunc_uvm_report_enabled__317__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__317__severity;
        __Vfunc_uvm_report_enabled__317__severity = 0;
        std::string __Vfunc_uvm_report_enabled__317__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__318__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__319__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__320__Vfuncout;
        __Vtask_uvm_report_enabled__320__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__321__id;
        std::string __Vtask_uvm_report_warning__321__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__321__verbosity;
        __Vtask_uvm_report_warning__321__verbosity = 0;
        std::string __Vtask_uvm_report_warning__321__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__321__line;
        __Vtask_uvm_report_warning__321__line = 0;
        std::string __Vtask_uvm_report_warning__321__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__321__report_enabled_checked;
        __Vtask_uvm_report_warning__321__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__322__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__323__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        {
            if (("ALL"s == kind)) {
                this->__PVT__hdl_paths_pool = VL_NEW(Varchitecture_uvm_pkg__03a__03auvm_object_string_pool__Tz211, vlProcess, vlSymsp, "hdl_paths"s);
                goto __Vlabel0;
            }
            if ((""s == kind)) {
                this->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vfunc_get_default_hdl_path__315__Vfuncout);
                kind = __Vfunc_get_default_hdl_path__315__Vfuncout;
            }
            if ((1U & (~ (0U != ([&]() {
                                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2035)
                                 ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__316__Vfuncout);
                                }(), __Vtask_exists__316__Vfuncout))))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__317__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__317__severity = 1U;
                                __Vfunc_uvm_report_enabled__317__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__318__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__318__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__319__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__319__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__317__verbosity, (IData)(__Vfunc_uvm_report_enabled__317__severity), __Vfunc_uvm_report_enabled__317__id, __Vtask_uvm_report_enabled__320__Vfuncout);
                                __Vfunc_uvm_report_enabled__317__Vfuncout 
                                    = __Vtask_uvm_report_enabled__320__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__317__Vfuncout))) {
                    __Vtask_uvm_report_warning__321__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__321__context_name = ""s;
                    __Vtask_uvm_report_warning__321__line = 0x000007f4U;
                    __Vtask_uvm_report_warning__321__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_warning__321__verbosity = 0U;
                    __Vtask_uvm_report_warning__321__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Unknown HDL Abstraction '"s, kind), "'"s));
                    __Vtask_uvm_report_warning__321__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__322__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__322__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__323__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__323__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__321__id, __Vtask_uvm_report_warning__321__message, __Vtask_uvm_report_warning__321__verbosity, __Vtask_uvm_report_warning__321__filename, __Vtask_uvm_report_warning__321__line, __Vtask_uvm_report_warning__321__context_name, (IData)(__Vtask_uvm_report_warning__321__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2040)
                    ->__VnoInFunc_delete(vlSymsp, kind);
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_hdl_path(Varchitecture__Syms* __restrict vlSymsp, std::string path, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_add_hdl_path\n"); );
        // Locals
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz43> __Vtask_get__326__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz43> paths;
        VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2050)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__326__Vfuncout);
        paths = __Vtask_get__326__Vfuncout;
        VL_NULL_CHECK(paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2052)
                    ->__VnoInFunc_push_back(vlSymsp, path);
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path(Varchitecture__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &has_hdl_path__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_has_hdl_path\n"); );
        // Locals
        std::string __Vfunc_get_default_hdl_path__328__Vfuncout;
        IData/*31:0*/ __Vtask_exists__329__Vfuncout;
        __Vtask_exists__329__Vfuncout = 0;
        // Body
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vfunc_get_default_hdl_path__328__Vfuncout);
            kind = __Vfunc_get_default_hdl_path__328__Vfuncout;
        }
        has_hdl_path__Vfuncrtn = (1U & ([&]() {
                    VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2063)
                                        ->__VnoInFunc_exists(vlSymsp, kind, __Vtask_exists__329__Vfuncout);
                }(), __Vtask_exists__329__Vfuncout));
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_hdl_path(Varchitecture__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_hdl_path\n"); );
        // Locals
        std::string __Vfunc_get_default_hdl_path__330__Vfuncout;
        CData/*0:0*/ __Vfunc_has_hdl_path__331__Vfuncout;
        __Vfunc_has_hdl_path__331__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__332__Vfuncout;
        __Vfunc_uvm_report_enabled__332__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__332__verbosity;
        __Vfunc_uvm_report_enabled__332__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__332__severity;
        __Vfunc_uvm_report_enabled__332__severity = 0;
        std::string __Vfunc_uvm_report_enabled__332__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__333__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__334__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__335__Vfuncout;
        __Vtask_uvm_report_enabled__335__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__336__id;
        std::string __Vtask_uvm_report_error__336__message;
        IData/*31:0*/ __Vtask_uvm_report_error__336__verbosity;
        __Vtask_uvm_report_error__336__verbosity = 0;
        std::string __Vtask_uvm_report_error__336__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__336__line;
        __Vtask_uvm_report_error__336__line = 0;
        std::string __Vtask_uvm_report_error__336__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__336__report_enabled_checked;
        __Vtask_uvm_report_error__336__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__337__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__338__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz43> __Vtask_get__340__Vfuncout;
        IData/*31:0*/ __Vtask_size__341__Vfuncout;
        __Vtask_size__341__Vfuncout = 0;
        std::string __Vtask_get__342__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        IData/*31:0*/ unnamedblk698__DOT__i;
        unnamedblk698__DOT__i = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz43> hdl_paths;
        {
            if ((""s == kind)) {
                this->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vfunc_get_default_hdl_path__330__Vfuncout);
                kind = __Vfunc_get_default_hdl_path__330__Vfuncout;
            }
            if ((1U & (~ ([&]() {
                                this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__331__Vfuncout);
                            }(), (IData)(__Vfunc_has_hdl_path__331__Vfuncout))))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__332__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__332__severity = 2U;
                                __Vfunc_uvm_report_enabled__332__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__333__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__333__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__334__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__334__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__332__verbosity, (IData)(__Vfunc_uvm_report_enabled__332__severity), __Vfunc_uvm_report_enabled__332__id, __Vtask_uvm_report_enabled__335__Vfuncout);
                                __Vfunc_uvm_report_enabled__332__Vfuncout 
                                    = __Vtask_uvm_report_enabled__335__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__332__Vfuncout))) {
                    __Vtask_uvm_report_error__336__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__336__context_name = ""s;
                    __Vtask_uvm_report_error__336__line = 0x0000081dU;
                    __Vtask_uvm_report_error__336__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__336__verbosity = 0U;
                    __Vtask_uvm_report_error__336__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Block does not have hdl path defined for abstraction '"s, kind), "'"s));
                    __Vtask_uvm_report_error__336__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__337__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__337__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__338__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__338__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__336__id, __Vtask_uvm_report_error__336__message, __Vtask_uvm_report_error__336__verbosity, __Vtask_uvm_report_error__336__filename, __Vtask_uvm_report_error__336__line, __Vtask_uvm_report_error__336__context_name, (IData)(__Vtask_uvm_report_error__336__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2081)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__340__Vfuncout);
            hdl_paths = __Vtask_get__340__Vfuncout;
            unnamedblk698__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk698__DOT__i, 
                              ([&]() {
                            VL_NULL_CHECK(hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2083)
                               ->__VnoInFunc_size(vlSymsp, __Vtask_size__341__Vfuncout);
                        }(), __Vtask_size__341__Vfuncout))) {
                paths.push_back(([&]() {
                            VL_NULL_CHECK(hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2084)
                                 ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk698__DOT__i, __Vtask_get__342__Vfuncout);
                        }(), __Vtask_get__342__Vfuncout));
                unnamedblk698__DOT__i = ((IData)(1U) 
                                         + unnamedblk698__DOT__i);
            }
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlQueue<std::string> &paths, std::string kind, std::string separator) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_full_hdl_path\n"); );
        // Locals
        std::string __Vfunc_get_default_hdl_path__343__Vfuncout;
        CData/*0:0*/ __Vfunc_is_hdl_path_root__344__Vfuncout;
        __Vfunc_is_hdl_path_root__344__Vfuncout = 0;
        CData/*0:0*/ __Vfunc_has_hdl_path__345__Vfuncout;
        __Vfunc_has_hdl_path__345__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__346__Vfuncout;
        __Vfunc_uvm_report_enabled__346__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__346__verbosity;
        __Vfunc_uvm_report_enabled__346__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__346__severity;
        __Vfunc_uvm_report_enabled__346__severity = 0;
        std::string __Vfunc_uvm_report_enabled__346__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__347__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__348__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__349__Vfuncout;
        __Vtask_uvm_report_enabled__349__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__350__id;
        std::string __Vtask_uvm_report_error__350__message;
        IData/*31:0*/ __Vtask_uvm_report_error__350__verbosity;
        __Vtask_uvm_report_error__350__verbosity = 0;
        std::string __Vtask_uvm_report_error__350__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__350__line;
        __Vtask_uvm_report_error__350__line = 0;
        std::string __Vtask_uvm_report_error__350__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__350__report_enabled_checked;
        __Vtask_uvm_report_error__350__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__351__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__352__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz43> __Vtask_get__354__Vfuncout;
        IData/*31:0*/ __Vtask_size__356__Vfuncout;
        __Vtask_size__356__Vfuncout = 0;
        std::string __Vtask_get__357__Vfuncout;
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_queue__Tz43> unnamedblk699__DOT__hdl_paths;
        VlQueue<std::string> unnamedblk699__DOT__parent_paths;
        IData/*31:0*/ unnamedblk699__DOT__unnamedblk700__DOT__i;
        unnamedblk699__DOT__unnamedblk700__DOT__i = 0;
        std::string unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path;
        IData/*31:0*/ unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j;
        unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j = 0;
        {
            if ((""s == kind)) {
                this->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vfunc_get_default_hdl_path__343__Vfuncout);
                kind = __Vfunc_get_default_hdl_path__343__Vfuncout;
            }
            paths.clear();
            if (([&]() {
                        this->__VnoInFunc_is_hdl_path_root(vlSymsp, kind, __Vfunc_is_hdl_path_root__344__Vfuncout);
                    }(), (IData)(__Vfunc_is_hdl_path_root__344__Vfuncout))) {
                if ((""s != this->__PVT__root_hdl_paths
                     .at(kind))) {
                    paths.push_back(this->__PVT__root_hdl_paths
                                    .at(kind));
                }
                goto __Vlabel0;
            }
            if ((1U & (~ ([&]() {
                                this->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vfunc_has_hdl_path__345__Vfuncout);
                            }(), (IData)(__Vfunc_has_hdl_path__345__Vfuncout))))) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__346__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__346__severity = 2U;
                                __Vfunc_uvm_report_enabled__346__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__347__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__347__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__348__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__348__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__346__verbosity, (IData)(__Vfunc_uvm_report_enabled__346__severity), __Vfunc_uvm_report_enabled__346__id, __Vtask_uvm_report_enabled__349__Vfuncout);
                                __Vfunc_uvm_report_enabled__346__Vfuncout 
                                    = __Vtask_uvm_report_enabled__349__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__346__Vfuncout))) {
                    __Vtask_uvm_report_error__350__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__350__context_name = ""s;
                    __Vtask_uvm_report_error__350__line = 0x0000083aU;
                    __Vtask_uvm_report_error__350__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__350__verbosity = 0U;
                    __Vtask_uvm_report_error__350__message 
                        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                            VL_CONCATN_NNN("Block does not have hdl path defined for abstraction '"s, kind), "'"s));
                    __Vtask_uvm_report_error__350__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__351__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__351__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__352__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__352__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__350__id, __Vtask_uvm_report_error__350__message, __Vtask_uvm_report_error__350__verbosity, __Vtask_uvm_report_error__350__filename, __Vtask_uvm_report_error__350__line, __Vtask_uvm_report_error__350__context_name, (IData)(__Vtask_uvm_report_error__350__report_enabled_checked));
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(this->__PVT__hdl_paths_pool, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2111)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, kind, __Vtask_get__354__Vfuncout);
            unnamedblk699__DOT__hdl_paths = __Vtask_get__354__Vfuncout;
            if ((VlNull{} != this->__PVT__parent)) {
                VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2115)
                    ->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, unnamedblk699__DOT__parent_paths, kind, separator);
            }
            unnamedblk699__DOT__unnamedblk700__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk699__DOT__unnamedblk700__DOT__i, 
                              ([&]() {
                            VL_NULL_CHECK(unnamedblk699__DOT__hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2117)
                               ->__VnoInFunc_size(vlSymsp, __Vtask_size__356__Vfuncout);
                        }(), __Vtask_size__356__Vfuncout))) {
                {
                    VL_NULL_CHECK(unnamedblk699__DOT__hdl_paths, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2118)
                    ->__VnoInFunc_get(vlProcess, vlSymsp, unnamedblk699__DOT__unnamedblk700__DOT__i, __Vtask_get__357__Vfuncout);
                    unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path 
                        = __Vtask_get__357__Vfuncout;
                    if ((0U == unnamedblk699__DOT__parent_paths.size())) {
                        if ((""s != unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path)) {
                            paths.push_back(unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path);
                        }
                        goto __Vlabel1;
                    }
                    unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j = 0U;
                    while (VL_LTS_III(32, unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j, unnamedblk699__DOT__parent_paths.size())) {
                        if ((""s == unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path)) {
                            paths.push_back(unnamedblk699__DOT__parent_paths.at(unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j));
                        } else {
                            paths.push_back(VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk699__DOT__parent_paths.at(unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j), separator), unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__hdl_path));
                        }
                        unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j 
                            = ((IData)(1U) + unnamedblk699__DOT__unnamedblk700__DOT__unnamedblk701__DOT__unnamedblk702__DOT__j);
                    }
                    __Vlabel1: ;
                }
                unnamedblk699__DOT__unnamedblk700__DOT__i 
                    = ((IData)(1U) + unnamedblk699__DOT__unnamedblk700__DOT__i);
            }
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path(Varchitecture__Syms* __restrict vlSymsp, std::string &get_default_hdl_path__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_get_default_hdl_path\n"); );
        // Locals
        std::string __Vtask_get_default_hdl_path__358__Vfuncout;
        // Body
        {
            if (((""s == this->__PVT__default_hdl_path) 
                 & (VlNull{} != this->__PVT__parent))) {
                VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2143)
                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__358__Vfuncout);
                get_default_hdl_path__Vfuncrtn = __Vtask_get_default_hdl_path__358__Vfuncout;
                goto __Vlabel0;
            }
            get_default_hdl_path__Vfuncrtn = this->__PVT__default_hdl_path;
            __Vlabel0: ;
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_hdl_path(Varchitecture__Syms* __restrict vlSymsp, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_default_hdl_path\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__359__Vfuncout;
        __Vfunc_uvm_report_enabled__359__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__359__verbosity;
        __Vfunc_uvm_report_enabled__359__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__359__severity;
        __Vfunc_uvm_report_enabled__359__severity = 0;
        std::string __Vfunc_uvm_report_enabled__359__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__360__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__361__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__362__Vfuncout;
        __Vtask_uvm_report_enabled__362__Vfuncout = 0;
        std::string __Vtask_uvm_report_error__363__id;
        std::string __Vtask_uvm_report_error__363__message;
        IData/*31:0*/ __Vtask_uvm_report_error__363__verbosity;
        __Vtask_uvm_report_error__363__verbosity = 0;
        std::string __Vtask_uvm_report_error__363__filename;
        IData/*31:0*/ __Vtask_uvm_report_error__363__line;
        __Vtask_uvm_report_error__363__line = 0;
        std::string __Vtask_uvm_report_error__363__context_name;
        CData/*0:0*/ __Vtask_uvm_report_error__363__report_enabled_checked;
        __Vtask_uvm_report_error__363__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__364__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__365__Vfuncout;
        std::string __Vtask_get_default_hdl_path__367__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        if ((""s == kind)) {
            if ((VlNull{} == this->__PVT__parent)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__359__id = "RegModel"s;
                                __Vfunc_uvm_report_enabled__359__severity = 2U;
                                __Vfunc_uvm_report_enabled__359__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__360__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__360__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__361__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__361__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__359__verbosity, (IData)(__Vfunc_uvm_report_enabled__359__severity), __Vfunc_uvm_report_enabled__359__id, __Vtask_uvm_report_enabled__362__Vfuncout);
                                __Vfunc_uvm_report_enabled__359__Vfuncout 
                                    = __Vtask_uvm_report_enabled__362__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__359__Vfuncout))) {
                    __Vtask_uvm_report_error__363__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__363__context_name = ""s;
                    __Vtask_uvm_report_error__363__line = 0x0000086bU;
                    __Vtask_uvm_report_error__363__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
                    __Vtask_uvm_report_error__363__verbosity = 0U;
                    __Vtask_uvm_report_error__363__message = "Block has no parent. Must specify a valid HDL abstraction (kind)"s;
                    __Vtask_uvm_report_error__363__id = "RegModel"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__364__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__364__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__365__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__365__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)
                    ->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__363__id, __Vtask_uvm_report_error__363__message, __Vtask_uvm_report_error__363__verbosity, __Vtask_uvm_report_error__363__filename, __Vtask_uvm_report_error__363__line, __Vtask_uvm_report_error__363__context_name, (IData)(__Vtask_uvm_report_error__363__report_enabled_checked));
                }
            }
            VL_NULL_CHECK(this->__PVT__parent, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2157)
                    ->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vtask_get_default_hdl_path__367__Vfuncout);
            kind = __Vtask_get_default_hdl_path__367__Vfuncout;
        }
        this->__PVT__default_hdl_path = kind;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_hdl_path_root(Varchitecture__Syms* __restrict vlSymsp, std::string path, std::string kind) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_set_hdl_path_root\n"); );
        // Locals
        std::string __Vfunc_get_default_hdl_path__368__Vfuncout;
        // Body
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vfunc_get_default_hdl_path__368__Vfuncout);
            kind = __Vfunc_get_default_hdl_path__368__Vfuncout;
        }
        this->__PVT__root_hdl_paths.at(kind) = path;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root(Varchitecture__Syms* __restrict vlSymsp, std::string kind, CData/*0:0*/ &is_hdl_path_root__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_is_hdl_path_root\n"); );
        // Locals
        std::string __Vfunc_get_default_hdl_path__369__Vfuncout;
        // Body
        if ((""s == kind)) {
            this->__VnoInFunc_get_default_hdl_path(vlSymsp, __Vfunc_get_default_hdl_path__369__Vfuncout);
            kind = __Vfunc_get_default_hdl_path__369__Vfuncout;
        }
        is_hdl_path_root__Vfuncrtn = (1U & this->__PVT__root_hdl_paths.exists(kind));
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_print\n"); );
        // Locals
        std::string __Vtask_get_name__372__Vfuncout;
        std::string __Vtask_get_name__374__Vfuncout;
        std::string __Vtask_get_name__376__Vfuncout;
        std::string __Vtask_get_name__378__Vfuncout;
        std::string __Vtask_get_name__380__Vfuncout;
        // Body
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk703__DOT__i;
        CData/*0:0*/ unnamedblk703__DOT__i__Vfirst;
        unnamedblk703__DOT__i__Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block> unnamedblk703__DOT__unnamedblk704__DOT__b;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> unnamedblk703__DOT__unnamedblk704__DOT__obj;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk705__DOT__i;
        CData/*0:0*/ unnamedblk705__DOT__i__Vfirst;
        unnamedblk705__DOT__i__Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg> unnamedblk705__DOT__unnamedblk706__DOT__r;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> unnamedblk705__DOT__unnamedblk706__DOT__obj;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk707__DOT__i;
        CData/*0:0*/ unnamedblk707__DOT__i__Vfirst;
        unnamedblk707__DOT__i__Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_vreg> unnamedblk707__DOT__unnamedblk708__DOT__r;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> unnamedblk707__DOT__unnamedblk708__DOT__obj;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk709__DOT__i;
        CData/*0:0*/ unnamedblk709__DOT__i__Vfirst;
        unnamedblk709__DOT__i__Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_mem> unnamedblk709__DOT__unnamedblk710__DOT__m;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> unnamedblk709__DOT__unnamedblk710__DOT__obj;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk711__DOT__i;
        CData/*0:0*/ unnamedblk711__DOT__i__Vfirst;
        unnamedblk711__DOT__i__Vfirst = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_map> unnamedblk711__DOT__unnamedblk712__DOT__m;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> unnamedblk711__DOT__unnamedblk712__DOT__obj;
        Varchitecture_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
        if ((0U != this->__PVT__blks.first(unnamedblk703__DOT__i))) {
            unnamedblk703__DOT__i__Vfirst = 1U;
            while (((IData)(unnamedblk703__DOT__i__Vfirst) 
                    || (0U != this->__PVT__blks.next(unnamedblk703__DOT__i)))) {
                unnamedblk703__DOT__i__Vfirst = 0U;
                unnamedblk703__DOT__unnamedblk704__DOT__b 
                    = unnamedblk703__DOT__i;
                unnamedblk703__DOT__unnamedblk704__DOT__obj 
                    = unnamedblk703__DOT__unnamedblk704__DOT__b;
                VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2195)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                                VL_NULL_CHECK(unnamedblk703__DOT__unnamedblk704__DOT__obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2195)
                                                                   ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__372__Vfuncout);
                            }(), __Vtask_get_name__372__Vfuncout)), unnamedblk703__DOT__unnamedblk704__DOT__obj, 0x2eU);
            }
        }
        if ((0U != this->__PVT__regs.first(unnamedblk705__DOT__i))) {
            unnamedblk705__DOT__i__Vfirst = 1U;
            while (((IData)(unnamedblk705__DOT__i__Vfirst) 
                    || (0U != this->__PVT__regs.next(unnamedblk705__DOT__i)))) {
                unnamedblk705__DOT__i__Vfirst = 0U;
                unnamedblk705__DOT__unnamedblk706__DOT__r 
                    = unnamedblk705__DOT__i;
                unnamedblk705__DOT__unnamedblk706__DOT__obj 
                    = unnamedblk705__DOT__unnamedblk706__DOT__r;
                VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2201)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                                VL_NULL_CHECK(unnamedblk705__DOT__unnamedblk706__DOT__obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2201)
                                                                   ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__374__Vfuncout);
                            }(), __Vtask_get_name__374__Vfuncout)), unnamedblk705__DOT__unnamedblk706__DOT__obj, 0x2eU);
            }
        }
        if ((0U != this->__PVT__vregs.first(unnamedblk707__DOT__i))) {
            unnamedblk707__DOT__i__Vfirst = 1U;
            while (((IData)(unnamedblk707__DOT__i__Vfirst) 
                    || (0U != this->__PVT__vregs.next(unnamedblk707__DOT__i)))) {
                unnamedblk707__DOT__i__Vfirst = 0U;
                unnamedblk707__DOT__unnamedblk708__DOT__r 
                    = unnamedblk707__DOT__i;
                unnamedblk707__DOT__unnamedblk708__DOT__obj 
                    = unnamedblk707__DOT__unnamedblk708__DOT__r;
                VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2207)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                                VL_NULL_CHECK(unnamedblk707__DOT__unnamedblk708__DOT__obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2207)
                                                                   ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__376__Vfuncout);
                            }(), __Vtask_get_name__376__Vfuncout)), unnamedblk707__DOT__unnamedblk708__DOT__obj, 0x2eU);
            }
        }
        if ((0U != this->__PVT__mems.first(unnamedblk709__DOT__i))) {
            unnamedblk709__DOT__i__Vfirst = 1U;
            while (((IData)(unnamedblk709__DOT__i__Vfirst) 
                    || (0U != this->__PVT__mems.next(unnamedblk709__DOT__i)))) {
                unnamedblk709__DOT__i__Vfirst = 0U;
                unnamedblk709__DOT__unnamedblk710__DOT__m 
                    = unnamedblk709__DOT__i;
                unnamedblk709__DOT__unnamedblk710__DOT__obj 
                    = unnamedblk709__DOT__unnamedblk710__DOT__m;
                VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2213)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                                VL_NULL_CHECK(unnamedblk709__DOT__unnamedblk710__DOT__obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2213)
                                                                   ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__378__Vfuncout);
                            }(), __Vtask_get_name__378__Vfuncout)), unnamedblk709__DOT__unnamedblk710__DOT__obj, 0x2eU);
            }
        }
        if ((0U != this->__PVT__maps.first(unnamedblk711__DOT__i))) {
            unnamedblk711__DOT__i__Vfirst = 1U;
            while (((IData)(unnamedblk711__DOT__i__Vfirst) 
                    || (0U != this->__PVT__maps.next(unnamedblk711__DOT__i)))) {
                unnamedblk711__DOT__i__Vfirst = 0U;
                unnamedblk711__DOT__unnamedblk712__DOT__m 
                    = unnamedblk711__DOT__i;
                unnamedblk711__DOT__unnamedblk712__DOT__obj 
                    = unnamedblk711__DOT__unnamedblk712__DOT__m;
                VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2219)
                    ->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                                VL_NULL_CHECK(unnamedblk711__DOT__unnamedblk712__DOT__obj, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh", 2219)
                                                                   ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__380__Vfuncout);
                            }(), __Vtask_get_name__380__Vfuncout)), unnamedblk711__DOT__unnamedblk712__DOT__obj, 0x2eU);
            }
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_clone\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__381__Vfuncout;
        __Vfunc_uvm_report_enabled__381__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__381__verbosity;
        __Vfunc_uvm_report_enabled__381__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__381__severity;
        __Vfunc_uvm_report_enabled__381__severity = 0;
        std::string __Vfunc_uvm_report_enabled__381__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__382__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__383__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__384__Vfuncout;
        __Vtask_uvm_report_enabled__384__Vfuncout = 0;
        // Body
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__381__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__381__severity = 3U;
                        __Vfunc_uvm_report_enabled__381__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__382__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__382__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__383__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__383__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__381__verbosity, (IData)(__Vfunc_uvm_report_enabled__381__severity), __Vfunc_uvm_report_enabled__381__id, __Vtask_uvm_report_enabled__384__Vfuncout);
                        __Vfunc_uvm_report_enabled__381__Vfuncout 
                            = __Vtask_uvm_report_enabled__384__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__381__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel blocks cannot be cloned"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s, 0x000008b5U, ""s, 1U);
        }
        clone__Vfuncrtn = VlNull{};
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_copy\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__386__Vfuncout;
        __Vfunc_uvm_report_enabled__386__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__386__verbosity;
        __Vfunc_uvm_report_enabled__386__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__386__severity;
        __Vfunc_uvm_report_enabled__386__severity = 0;
        std::string __Vfunc_uvm_report_enabled__386__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__387__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__388__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__389__Vfuncout;
        __Vtask_uvm_report_enabled__389__Vfuncout = 0;
        // Body
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__386__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__386__severity = 3U;
                        __Vfunc_uvm_report_enabled__386__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__387__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__387__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__388__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__388__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__386__verbosity, (IData)(__Vfunc_uvm_report_enabled__386__severity), __Vfunc_uvm_report_enabled__386__id, __Vtask_uvm_report_enabled__389__Vfuncout);
                        __Vfunc_uvm_report_enabled__386__Vfuncout 
                            = __Vtask_uvm_report_enabled__389__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__386__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "RegModel"s, "RegModel blocks cannot be copied"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s, 0x000008bcU, ""s, 1U);
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_compare\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__391__Vfuncout;
        __Vfunc_uvm_report_enabled__391__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__391__verbosity;
        __Vfunc_uvm_report_enabled__391__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__391__severity;
        __Vfunc_uvm_report_enabled__391__severity = 0;
        std::string __Vfunc_uvm_report_enabled__391__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__392__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__393__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__394__Vfuncout;
        __Vtask_uvm_report_enabled__394__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__395__id;
        std::string __Vtask_uvm_report_warning__395__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__395__verbosity;
        __Vtask_uvm_report_warning__395__verbosity = 0;
        std::string __Vtask_uvm_report_warning__395__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__395__line;
        __Vtask_uvm_report_warning__395__line = 0;
        std::string __Vtask_uvm_report_warning__395__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__395__report_enabled_checked;
        __Vtask_uvm_report_warning__395__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__396__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__397__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__391__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__391__severity = 1U;
                        __Vfunc_uvm_report_enabled__391__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__392__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__392__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__393__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__393__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__391__verbosity, (IData)(__Vfunc_uvm_report_enabled__391__severity), __Vfunc_uvm_report_enabled__391__id, __Vtask_uvm_report_enabled__394__Vfuncout);
                        __Vfunc_uvm_report_enabled__391__Vfuncout 
                            = __Vtask_uvm_report_enabled__394__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__391__Vfuncout))) {
            __Vtask_uvm_report_warning__395__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__395__context_name = ""s;
            __Vtask_uvm_report_warning__395__line = 0x000008c4U;
            __Vtask_uvm_report_warning__395__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__395__verbosity = 0U;
            __Vtask_uvm_report_warning__395__message = "RegModel blocks cannot be compared"s;
            __Vtask_uvm_report_warning__395__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__396__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__396__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__397__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__397__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__395__id, __Vtask_uvm_report_warning__395__message, __Vtask_uvm_report_warning__395__verbosity, __Vtask_uvm_report_warning__395__filename, __Vtask_uvm_report_warning__395__line, __Vtask_uvm_report_warning__395__context_name, (IData)(__Vtask_uvm_report_warning__395__report_enabled_checked));
        }
        do_compare__Vfuncrtn = 0U;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_packer> packer) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_pack\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__399__Vfuncout;
        __Vfunc_uvm_report_enabled__399__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__399__verbosity;
        __Vfunc_uvm_report_enabled__399__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__399__severity;
        __Vfunc_uvm_report_enabled__399__severity = 0;
        std::string __Vfunc_uvm_report_enabled__399__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__400__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__401__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__402__Vfuncout;
        __Vtask_uvm_report_enabled__402__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__403__id;
        std::string __Vtask_uvm_report_warning__403__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__403__verbosity;
        __Vtask_uvm_report_warning__403__verbosity = 0;
        std::string __Vtask_uvm_report_warning__403__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__403__line;
        __Vtask_uvm_report_warning__403__line = 0;
        std::string __Vtask_uvm_report_warning__403__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__403__report_enabled_checked;
        __Vtask_uvm_report_warning__403__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__404__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__405__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__399__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__399__severity = 1U;
                        __Vfunc_uvm_report_enabled__399__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__400__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__400__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__401__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__401__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__399__verbosity, (IData)(__Vfunc_uvm_report_enabled__399__severity), __Vfunc_uvm_report_enabled__399__id, __Vtask_uvm_report_enabled__402__Vfuncout);
                        __Vfunc_uvm_report_enabled__399__Vfuncout 
                            = __Vtask_uvm_report_enabled__402__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__399__Vfuncout))) {
            __Vtask_uvm_report_warning__403__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__403__context_name = ""s;
            __Vtask_uvm_report_warning__403__line = 0x000008ccU;
            __Vtask_uvm_report_warning__403__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__403__verbosity = 0U;
            __Vtask_uvm_report_warning__403__message = "RegModel blocks cannot be packed"s;
            __Vtask_uvm_report_warning__403__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__404__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__404__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__405__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__405__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__403__id, __Vtask_uvm_report_warning__403__message, __Vtask_uvm_report_warning__403__verbosity, __Vtask_uvm_report_warning__403__filename, __Vtask_uvm_report_warning__403__line, __Vtask_uvm_report_warning__403__context_name, (IData)(__Vtask_uvm_report_warning__403__report_enabled_checked));
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_packer> packer) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_do_unpack\n"); );
        // Locals
        IData/*31:0*/ __Vfunc_uvm_report_enabled__407__Vfuncout;
        __Vfunc_uvm_report_enabled__407__Vfuncout = 0;
        IData/*31:0*/ __Vfunc_uvm_report_enabled__407__verbosity;
        __Vfunc_uvm_report_enabled__407__verbosity = 0;
        CData/*1:0*/ __Vfunc_uvm_report_enabled__407__severity;
        __Vfunc_uvm_report_enabled__407__severity = 0;
        std::string __Vfunc_uvm_report_enabled__407__id;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__408__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__409__Vfuncout;
        IData/*31:0*/ __Vtask_uvm_report_enabled__410__Vfuncout;
        __Vtask_uvm_report_enabled__410__Vfuncout = 0;
        std::string __Vtask_uvm_report_warning__411__id;
        std::string __Vtask_uvm_report_warning__411__message;
        IData/*31:0*/ __Vtask_uvm_report_warning__411__verbosity;
        __Vtask_uvm_report_warning__411__verbosity = 0;
        std::string __Vtask_uvm_report_warning__411__filename;
        IData/*31:0*/ __Vtask_uvm_report_warning__411__line;
        __Vtask_uvm_report_warning__411__line = 0;
        std::string __Vtask_uvm_report_warning__411__context_name;
        CData/*0:0*/ __Vtask_uvm_report_warning__411__report_enabled_checked;
        __Vtask_uvm_report_warning__411__report_enabled_checked = 0;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__412__Vfuncout;
        VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> __Vtask_get_root__413__Vfuncout;
        // Body
        VlProcessRef vlProcess = std::make_shared<VlProcess>();
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__407__id = "RegModel"s;
                        __Vfunc_uvm_report_enabled__407__severity = 1U;
                        __Vfunc_uvm_report_enabled__407__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__408__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__408__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__409__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__409__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__407__verbosity, (IData)(__Vfunc_uvm_report_enabled__407__severity), __Vfunc_uvm_report_enabled__407__id, __Vtask_uvm_report_enabled__410__Vfuncout);
                        __Vfunc_uvm_report_enabled__407__Vfuncout 
                            = __Vtask_uvm_report_enabled__410__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__407__Vfuncout))) {
            __Vtask_uvm_report_warning__411__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__411__context_name = ""s;
            __Vtask_uvm_report_warning__411__line = 0x000008d3U;
            __Vtask_uvm_report_warning__411__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_block.svh"s;
            __Vtask_uvm_report_warning__411__verbosity = 0U;
            __Vtask_uvm_report_warning__411__message = "RegModel blocks cannot be unpacked"s;
            __Vtask_uvm_report_warning__411__id = "RegModel"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__412__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__412__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__413__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__413__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)
                    ->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__411__id, __Vtask_uvm_report_warning__411__message, __Vtask_uvm_report_warning__411__verbosity, __Vtask_uvm_report_warning__411__filename, __Vtask_uvm_report_warning__411__line, __Vtask_uvm_report_warning__411__context_name, (IData)(__Vtask_uvm_report_warning__411__report_enabled_checked));
        }
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_convert2string\n"); );
        // Body
        std::string image;
        VlQueue<std::string> maps;
        VlQueue<std::string> blk_maps;
        CData/*0:0*/ single_map;
        single_map = 0;
        IData/*31:0*/ endian;
        endian = 0;
        std::string prefix;
        prefix = "  "s;
        convert2string__Vfuncrtn = image;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc_randomize\n"); );
        // Locals
        IData/*31:0*/ __Vfunc___Vbasic_randomize__416__Vfuncout;
        __Vfunc___Vbasic_randomize__416__Vfuncout = 0;
        // Body
        Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
        this->__VnoInFunc___Vsetup_constraints(vlSymsp);
        randomize__Vfuncrtn = Varchitecture_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
        randomize__Vfuncrtn = (randomize__Vfuncrtn 
                               & ([&]() {
                    this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__416__Vfuncout);
                }(), __Vfunc___Vbasic_randomize__416__Vfuncout));
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vbasic_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::__VnoInFunc___Vbasic_randomize\n"); );
        // Body
        __Vbasic_randomize__Vfuncrtn = 1U;
    }

    void Varchitecture_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::_ctor_var_reset\n"); );
        // Body
        (void)vlSymsp;  // Prevent unused variable warning
        __PVT__blks.atDefault() = 0;
        __PVT__regs.atDefault() = 0;
        __PVT__vregs.atDefault() = 0;
        __PVT__mems.atDefault() = 0;
        __PVT__maps.atDefault() = 0;
        __PVT__default_path = 0;
        __PVT__locked = 0;
        __PVT__has_cover = 0;
        __PVT__cover_on = 0;
        __PVT__lineno = 0;
    }

    std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_reg_block>& obj) {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::VL_TO_STRING\n"); );
        // Body
        return (obj ? obj->to_string() : "null");
    }

    std::string Varchitecture_uvm_pkg__03a__03auvm_reg_block::to_string() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::to_string\n"); );
        // Body
        return ("'{"s + to_string_middle() + "}");
    }

    std::string Varchitecture_uvm_pkg__03a__03auvm_reg_block::to_string_middle() const {
        VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_uvm_pkg__03a__03auvm_reg_block::to_string_middle\n"); );
        // Body
        std::string out;
        out += "parent:" + VL_TO_STRING(__PVT__parent);
        out += ", blks:" + VL_TO_STRING(__PVT__blks);
        out += ", regs:" + VL_TO_STRING(__PVT__regs);
        out += ", vregs:" + VL_TO_STRING(__PVT__vregs);
        out += ", mems:" + VL_TO_STRING(__PVT__mems);
        out += ", maps:" + VL_TO_STRING(__PVT__maps);
        out += ", default_path:" + VL_TO_STRING(__PVT__default_path);
        out += ", default_hdl_path:" + VL_TO_STRING(__PVT__default_hdl_path);
        out += ", backdoor:" + VL_TO_STRING(__PVT__backdoor);
        out += ", hdl_paths_pool:" + VL_TO_STRING(__PVT__hdl_paths_pool);
        out += ", root_hdl_paths:" + VL_TO_STRING(__PVT__root_hdl_paths);
        out += ", locked:" + VL_TO_STRING(__PVT__locked);
        out += ", has_cover:" + VL_TO_STRING(__PVT__has_cover);
        out += ", cover_on:" + VL_TO_STRING(__PVT__cover_on);
        out += ", fname:" + VL_TO_STRING(__PVT__fname);
        out += ", lineno:" + VL_TO_STRING(__PVT__lineno);
        out += ", m_uvm_lock_model_complete:" + VL_TO_STRING(__PVT__m_uvm_lock_model_complete);
        out += ", default_map:" + VL_TO_STRING(__PVT__default_map);
        out += ", "+ Varchitecture_uvm_pkg__03a__03auvm_object::to_string_middle();
        return (out);
    }
