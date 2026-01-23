// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_get_name_constraint(Vdma__Syms* __restrict vlSymsp, std::string &get_name_constraint__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_get_name_constraint\n"); );
    // Body
    get_name_constraint__Vfuncrtn = "/^[][[:alnum:](){}_:-]([][[:alnum:](){} _:-]*[][[:alnum:](){}_:-])?$/"s;
}

void Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_visit(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> node) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_visit\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_uvm_is_match__0__Vfuncout;
    __Vfunc_uvm_is_match__0__Vfuncout = 0;
    std::string __Vfunc_uvm_is_match__0__expr;
    std::string __Vfunc_uvm_is_match__0__str;
    std::string __Vtask_get_name__1__Vfuncout;
    std::string __Vfunc_get_name_constraint__2__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__3__Vfuncout;
    std::string __Vfunc_uvm_glob_to_re__3__glob;
    IData/*31:0*/ __Vfunc_uvm_re_match__4__Vfuncout;
    __Vfunc_uvm_re_match__4__Vfuncout = 0;
    std::string __Vfunc_uvm_re_match__4__re;
    std::string __Vfunc_uvm_re_match__4__str;
    IData/*31:0*/ __Vfunc_uvm_re_match__4____Vincrement1;
    __Vfunc_uvm_re_match__4____Vincrement1 = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__Vfuncout;
    __Vfunc_uvm_report_enabled__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__5__verbosity;
    __Vfunc_uvm_report_enabled__5__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__5__severity;
    __Vfunc_uvm_report_enabled__5__severity = 0;
    std::string __Vfunc_uvm_report_enabled__5__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__8__Vfuncout;
    __Vtask_uvm_report_enabled__8__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__9__id;
    std::string __Vtask_uvm_report_warning__9__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__9__verbosity;
    __Vtask_uvm_report_warning__9__verbosity = 0;
    std::string __Vtask_uvm_report_warning__9__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__9__line;
    __Vtask_uvm_report_warning__9__line = 0;
    std::string __Vtask_uvm_report_warning__9__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__9__report_enabled_checked;
    __Vtask_uvm_report_warning__9__report_enabled_checked = 0;
    std::string __Vtask_get_name__10__Vfuncout;
    std::string __Vtask_get_full_name__11__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    if ((this->__PVT___root != node)) {
        if ((1U & (~ ([&]() {
                            __Vfunc_uvm_is_match__0__str 
                                = VL_CVT_PACK_STR_NN(
                                                     ([&]() {
                                        VL_NULL_CHECK(node, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh", 273)
                                                      ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__1__Vfuncout);
                                    }(), __Vtask_get_name__1__Vfuncout));
                            __Vfunc_uvm_is_match__0__expr 
                                = VL_CVT_PACK_STR_NN(
                                                     ([&]() {
                                        this->__VnoInFunc_get_name_constraint(vlSymsp, __Vfunc_get_name_constraint__2__Vfuncout);
                                    }(), __Vfunc_get_name_constraint__2__Vfuncout));
                            __Vfunc_uvm_glob_to_re__3__glob 
                                = __Vfunc_uvm_is_match__0__expr;
                            __Vfunc_uvm_glob_to_re__3__Vfuncout 
                                = __Vfunc_uvm_glob_to_re__3__glob;
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
                                = __Vfunc_uvm_glob_to_re__3__Vfuncout;
                            __Vfunc_uvm_is_match__0__Vfuncout 
                                = (0U == ([&]() {
                                        __Vfunc_uvm_re_match__4__str 
                                            = __Vfunc_uvm_is_match__0__str;
                                        __Vfunc_uvm_re_match__4__re 
                                            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s;
                                        {
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es = 0U;
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss = 0U;
                                            if ((0U 
                                                 == 
                                                 VL_LEN_IN(__Vfunc_uvm_re_match__4__re))) {
                                                __Vfunc_uvm_re_match__4__Vfuncout = 0U;
                                                goto __Vlabel0;
                                            }
                                            if ((0x5eU 
                                                 == 
                                                 VL_GETC_N(__Vfunc_uvm_re_match__4__re,0U))) {
                                                __Vfunc_uvm_re_match__4__re 
                                                    = 
                                                    VL_SUBSTR_N(__Vfunc_uvm_re_match__4__re,1U,
                                                                (VL_LEN_IN(__Vfunc_uvm_re_match__4__re) 
                                                                 - (IData)(1U)));
                                            }
                                            while (
                                                   ((vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                     != 
                                                     VL_LEN_IN(__Vfunc_uvm_re_match__4__str)) 
                                                    & (0x2aU 
                                                       != 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                if (
                                                    ((VL_GETC_N(__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                      != 
                                                      VL_GETC_N(__Vfunc_uvm_re_match__4__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                     & (0x3fU 
                                                        != 
                                                        VL_GETC_N(__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    __Vfunc_uvm_re_match__4__Vfuncout = 1U;
                                                    goto __Vlabel0;
                                                }
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                            }
                                            while (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                    != 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__4__str))) {
                                                if (
                                                    (0x2aU 
                                                     == 
                                                     VL_GETC_N(__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    if (
                                                        (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                         == 
                                                         VL_LEN_IN(__Vfunc_uvm_re_match__4__re))) {
                                                        __Vfunc_uvm_re_match__4__Vfuncout = 0U;
                                                        goto __Vlabel0;
                                                    }
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else if (
                                                           ((VL_GETC_N(__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e) 
                                                             == 
                                                             VL_GETC_N(__Vfunc_uvm_re_match__4__str,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s)) 
                                                            | (0x3fU 
                                                               == 
                                                               VL_GETC_N(__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s);
                                                } else {
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__es;
                                                    __Vfunc_uvm_re_match__4____Vincrement1 
                                                        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss;
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss 
                                                        = 
                                                        ((IData)(1U) 
                                                         + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__ss);
                                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__s 
                                                        = __Vfunc_uvm_re_match__4____Vincrement1;
                                                }
                                            }
                                            while (
                                                   (VL_LTS_III(32, vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e, 
                                                               VL_LEN_IN(__Vfunc_uvm_re_match__4__re)) 
                                                    & (0x2aU 
                                                       == 
                                                       VL_GETC_N(__Vfunc_uvm_re_match__4__re,vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e)))) {
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    = 
                                                    ((IData)(1U) 
                                                     + vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e);
                                            }
                                            __Vfunc_uvm_re_match__4__Vfuncout 
                                                = (
                                                   (vlSymsp->TOP__uvm_pkg.__PVT__uvm_re_match__Vstatic__e 
                                                    == 
                                                    VL_LEN_IN(__Vfunc_uvm_re_match__4__re))
                                                    ? 0U
                                                    : 1U);
                                            __Vlabel0: ;
                                        }
                                    }(), __Vfunc_uvm_re_match__4__Vfuncout));
                        }(), (IData)(__Vfunc_uvm_is_match__0__Vfuncout))))) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__5__id = "UVM/COMP/NAME"s;
                            __Vfunc_uvm_report_enabled__5__severity = 1U;
                            __Vfunc_uvm_report_enabled__5__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__6__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__7__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__5__verbosity, (IData)(__Vfunc_uvm_report_enabled__5__severity), __Vfunc_uvm_report_enabled__5__id, __Vtask_uvm_report_enabled__8__Vfuncout);
                            __Vfunc_uvm_report_enabled__5__Vfuncout 
                                = __Vtask_uvm_report_enabled__8__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__5__Vfuncout))) {
                __Vtask_uvm_report_warning__9__report_enabled_checked = 1U;
                __Vtask_uvm_report_warning__9__context_name = ""s;
                __Vtask_uvm_report_warning__9__line = 0x00000112U;
                __Vtask_uvm_report_warning__9__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh"s;
                __Vtask_uvm_report_warning__9__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(node, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh", 274)
                             ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__10__Vfuncout);
                    }(), __Vtask_get_name__10__Vfuncout);
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(node, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh", 274)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
                    }(), __Vtask_get_full_name__11__Vfuncout);
                __Vtask_uvm_report_warning__9__message 
                    = VL_SFORMATF_N_NX("the name \"%@\" of the component \"%@\" violates the uvm component name constraints",0,
                                       -1,&(__Vtemp_1),
                                       -1,&(__Vtemp_2)) ;
                __Vtask_uvm_report_warning__9__id = "UVM/COMP/NAME"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                    = __Vfunc_get__12__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                    = __Vtask_get_root__13__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__9__id, __Vtask_uvm_report_warning__9__message, __Vtask_uvm_report_warning__9__verbosity, __Vtask_uvm_report_warning__9__filename, __Vtask_uvm_report_warning__9__line, __Vtask_uvm_report_warning__9__context_name, (IData)(__Vtask_uvm_report_warning__9__report_enabled_checked));
            }
        }
    }
}

Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_visitor_(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_begin_v(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_begin_v\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__Vfuncout;
    __Vfunc_uvm_report_enabled__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__verbosity;
    __Vfunc_uvm_report_enabled__18__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__18__severity;
    __Vfunc_uvm_report_enabled__18__severity = 0;
    std::string __Vfunc_uvm_report_enabled__18__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__21__Vfuncout;
    __Vtask_uvm_report_enabled__21__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__22__id;
    std::string __Vtask_uvm_report_info__22__message;
    IData/*31:0*/ __Vtask_uvm_report_info__22__verbosity;
    __Vtask_uvm_report_info__22__verbosity = 0;
    std::string __Vtask_uvm_report_info__22__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__22__line;
    __Vtask_uvm_report_info__22__line = 0;
    std::string __Vtask_uvm_report_info__22__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__22__report_enabled_checked;
    __Vtask_uvm_report_info__22__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__23__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__24__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
    cs = __Vfunc_get__16__Vfuncout;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh", 286)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
    this->__PVT___root = __Vtask_get_root__17__Vfuncout;
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__18__id = "UVM/COMP/NAMECHECK"s;
                    __Vfunc_uvm_report_enabled__18__severity = 0U;
                    __Vfunc_uvm_report_enabled__18__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__18__verbosity, (IData)(__Vfunc_uvm_report_enabled__18__severity), __Vfunc_uvm_report_enabled__18__id, __Vtask_uvm_report_enabled__21__Vfuncout);
                    __Vfunc_uvm_report_enabled__18__Vfuncout 
                        = __Vtask_uvm_report_enabled__21__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__18__Vfuncout))) {
        __Vtask_uvm_report_info__22__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__22__context_name = ""s;
        __Vtask_uvm_report_info__22__line = 0x00000121U;
        __Vtask_uvm_report_info__22__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_traversal.svh"s;
        __Vtask_uvm_report_info__22__verbosity = 0U;
        __Vtask_uvm_report_info__22__message = "This implementation of the component name checks requires DPI to be enabled"s;
        __Vtask_uvm_report_info__22__id = "UVM/COMP/NAMECHECK"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__23__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__23__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__24__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__24__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__22__id, __Vtask_uvm_report_info__22__message, __Vtask_uvm_report_info__22__verbosity, __Vtask_uvm_report_info__22__filename, __Vtask_uvm_report_info__22__line, __Vtask_uvm_report_info__22__context_name, (IData)(__Vtask_uvm_report_info__22__report_enabled_checked));
    }
}

void Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__27__Vfuncout;
    __Vfunc___VBasicRand__27__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__27__Vfuncout);
            }(), __Vfunc___VBasicRand__27__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::~Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_component_name_check_visitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "_root:" + VL_TO_STRING(__PVT___root);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_visitor_::to_string_middle();
    return (out);
}
