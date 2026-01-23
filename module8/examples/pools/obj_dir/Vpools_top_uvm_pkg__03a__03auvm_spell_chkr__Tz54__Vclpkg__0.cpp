// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54__Vclpkg::__VnoInFunc_check(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_queue__Tz19>> &strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54__Vclpkg::__VnoInFunc_check\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_levenshtein_distance__0__Vfuncout;
    __Vfunc_levenshtein_distance__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__Vfuncout;
    __Vfunc_uvm_report_enabled__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__1__verbosity;
    __Vfunc_uvm_report_enabled__1__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__1__severity;
    __Vfunc_uvm_report_enabled__1__severity = 0;
    std::string __Vfunc_uvm_report_enabled__1__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__2__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__3__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__4__Vfuncout;
    __Vtask_uvm_report_enabled__4__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__5__id;
    std::string __Vtask_uvm_report_info__5__message;
    IData/*31:0*/ __Vtask_uvm_report_info__5__verbosity;
    __Vtask_uvm_report_info__5__verbosity = 0;
    std::string __Vtask_uvm_report_info__5__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__5__line;
    __Vtask_uvm_report_info__5__line = 0;
    std::string __Vtask_uvm_report_info__5__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__5__report_enabled_checked;
    __Vtask_uvm_report_info__5__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__6__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__7__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__verbosity;
    __Vfunc_uvm_report_enabled__9__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__9__severity;
    __Vfunc_uvm_report_enabled__9__severity = 0;
    std::string __Vfunc_uvm_report_enabled__9__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__11__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__12__Vfuncout;
    __Vtask_uvm_report_enabled__12__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__13__id;
    std::string __Vtask_uvm_report_info__13__message;
    IData/*31:0*/ __Vtask_uvm_report_info__13__verbosity;
    __Vtask_uvm_report_info__13__verbosity = 0;
    std::string __Vtask_uvm_report_info__13__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__13__line;
    __Vtask_uvm_report_info__13__line = 0;
    std::string __Vtask_uvm_report_info__13__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__13__report_enabled_checked;
    __Vtask_uvm_report_info__13__report_enabled_checked = 0;
    std::string __Vfunc_m_uvm_string_queue_join__14__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    std::string __Vtemp_1;
    // Body
    std::string unnamedblk1__DOT__key;
    CData/*0:0*/ unnamedblk1__DOT__key__Vfirst;
    unnamedblk1__DOT__key__Vfirst = 0;
    VlQueue<std::string> unnamedblk2__DOT__q;
    IData/*31:0*/ unnamedblk2__DOT__unnamedblk3__DOT__i;
    unnamedblk2__DOT__unnamedblk3__DOT__i = 0;
    std::string key;
    IData/*31:0*/ distance;
    distance = 0;
    IData/*31:0*/ min;
    min = 0;
    VlQueue<std::string> min_key;
    {
        if (strtab.exists(s)) {
            check__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        min = 0xffffffffU;
        if ((0U != strtab.first(unnamedblk1__DOT__key))) {
            unnamedblk1__DOT__key__Vfirst = 1U;
            while (((IData)(unnamedblk1__DOT__key__Vfirst) 
                    || (0U != strtab.next(unnamedblk1__DOT__key)))) {
                unnamedblk1__DOT__key__Vfirst = 0U;
                {
                    this->__VnoInFunc_levenshtein_distance(vlSymsp, unnamedblk1__DOT__key, s, __Vfunc_levenshtein_distance__0__Vfuncout);
                    distance = __Vfunc_levenshtein_distance__0__Vfuncout;
                    if (VL_GTS_III(32, 0U, distance)) {
                        goto __Vlabel1;
                    }
                    if ((distance < min)) {
                        min = distance;
                        min_key.clear();
                        min_key.push_back(unnamedblk1__DOT__key);
                        goto __Vlabel1;
                    }
                    if ((distance == min)) {
                        min_key.push_back(unnamedblk1__DOT__key);
                    }
                    __Vlabel1: ;
                }
            }
        }
        if ((0xffffffffU == min)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__1__id = "UVM/CONFIGDB/SPELLCHK"s;
                            __Vfunc_uvm_report_enabled__1__severity = 0U;
                            __Vfunc_uvm_report_enabled__1__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__2__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__2__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__3__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__3__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__1__verbosity, (IData)(__Vfunc_uvm_report_enabled__1__severity), __Vfunc_uvm_report_enabled__1__id, __Vtask_uvm_report_enabled__4__Vfuncout);
                            __Vfunc_uvm_report_enabled__1__Vfuncout 
                                = __Vtask_uvm_report_enabled__4__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__1__Vfuncout))) {
                __Vtask_uvm_report_info__5__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__5__context_name = ""s;
                __Vtask_uvm_report_info__5__line = 0x0000006eU;
                __Vtask_uvm_report_info__5__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_spell_chkr.svh"s;
                __Vtask_uvm_report_info__5__verbosity = 0U;
                __Vtask_uvm_report_info__5__message 
                    = VL_SFORMATF_N_NX("%@ not located, no alternatives to suggest",0,
                                       -1,&(s)) ;
                __Vtask_uvm_report_info__5__id = "UVM/CONFIGDB/SPELLCHK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__6__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__6__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__7__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__7__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__5__id, __Vtask_uvm_report_info__5__message, __Vtask_uvm_report_info__5__verbosity, __Vtask_uvm_report_info__5__filename, __Vtask_uvm_report_info__5__line, __Vtask_uvm_report_info__5__context_name, (IData)(__Vtask_uvm_report_info__5__report_enabled_checked));
            }
        } else {
            unnamedblk2__DOT__unnamedblk3__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__unnamedblk3__DOT__i, min_key.size())) {
                unnamedblk2__DOT__q.push_back(min_key.at(unnamedblk2__DOT__unnamedblk3__DOT__i));
                unnamedblk2__DOT__q.push_back("|"s);
                unnamedblk2__DOT__unnamedblk3__DOT__i 
                    = ((IData)(1U) + unnamedblk2__DOT__unnamedblk3__DOT__i);
            }
            if ((0U != unnamedblk2__DOT__q.size())) {
                (void)unnamedblk2__DOT__q.pop_back();
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__9__id = "UVM/CONFIGDB/SPELLCHK"s;
                            __Vfunc_uvm_report_enabled__9__severity = 0U;
                            __Vfunc_uvm_report_enabled__9__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__10__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__11__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__11__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__9__verbosity, (IData)(__Vfunc_uvm_report_enabled__9__severity), __Vfunc_uvm_report_enabled__9__id, __Vtask_uvm_report_enabled__12__Vfuncout);
                            __Vfunc_uvm_report_enabled__9__Vfuncout 
                                = __Vtask_uvm_report_enabled__12__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
                __Vtask_uvm_report_info__13__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__13__context_name = ""s;
                __Vtask_uvm_report_info__13__line = 0x0000007cU;
                __Vtask_uvm_report_info__13__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_spell_chkr.svh"s;
                __Vtask_uvm_report_info__13__verbosity = 0U;
                __Vtemp_1 = ([&]() {
                        __Vfunc_m_uvm_string_queue_join__14__Vfuncout 
                            = VL_CVT_PACK_STR_ND(unnamedblk2__DOT__q);
                    }(), __Vfunc_m_uvm_string_queue_join__14__Vfuncout);
                __Vtask_uvm_report_info__13__message 
                    = VL_SFORMATF_N_NX("%@ not located, did you mean %@",0,
                                       -1,&(s),-1,&(__Vtemp_1)) ;
                __Vtask_uvm_report_info__13__id = "UVM/CONFIGDB/SPELLCHK"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__15__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__16__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__13__id, __Vtask_uvm_report_info__13__message, __Vtask_uvm_report_info__13__verbosity, __Vtask_uvm_report_info__13__filename, __Vtask_uvm_report_info__13__line, __Vtask_uvm_report_info__13__context_name, (IData)(__Vtask_uvm_report_info__13__report_enabled_checked));
            }
        }
        check__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54__Vclpkg::__VnoInFunc_levenshtein_distance(Vpools_top__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54__Vclpkg::__VnoInFunc_levenshtein_distance\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_minimum__18__Vfuncout;
    __Vfunc_minimum__18__Vfuncout = 0;
    // Body
    IData/*31:0*/ k;
    k = 0;
    IData/*31:0*/ i;
    i = 0;
    IData/*31:0*/ j;
    j = 0;
    IData/*31:0*/ n;
    n = 0;
    IData/*31:0*/ m;
    m = 0;
    IData/*31:0*/ cost;
    cost = 0;
    IData/*31:0*/ distance;
    distance = 0;
    VlQueue<IData/*31:0*/> d;
    d.atDefault() = 0;
    {
        n = ((IData)(1U) + VL_LEN_IN(s));
        m = ((IData)(1U) + VL_LEN_IN(t));
        if (((1U == n) | (1U == m))) {
            levenshtein_distance__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        d.renew(VL_MULS_III(32, m, n));
        k = 0U;
        while (VL_LTS_III(32, k, n)) {
            d.atWrite(k) = k;
            k = ((IData)(1U) + k);
        }
        k = 0U;
        while (VL_LTS_III(32, k, m)) {
            d.atWrite((k * n)) = k;
            k = ((IData)(1U) + k);
        }
        i = 1U;
        while (VL_LTS_III(32, i, n)) {
            j = 1U;
            while (VL_LTS_III(32, j, m)) {
                cost = (VL_GETC_N(s,(i - (IData)(1U))) 
                        != VL_GETC_N(t,(j - (IData)(1U))));
                this->__VnoInFunc_minimum(vlSymsp, 
                                          ((IData)(1U) 
                                           + d.at((
                                                   ((j 
                                                     - (IData)(1U)) 
                                                    * n) 
                                                   + i))), 
                                          ((IData)(1U) 
                                           + d.at((
                                                   ((j 
                                                     * n) 
                                                    + i) 
                                                   - (IData)(1U)))), 
                                          (d.at((((
                                                   (j 
                                                    - (IData)(1U)) 
                                                   * n) 
                                                  + i) 
                                                 - (IData)(1U))) 
                                           + cost), __Vfunc_minimum__18__Vfuncout);
                d.atWrite(((j * n) + i)) = __Vfunc_minimum__18__Vfuncout;
                j = ((IData)(1U) + j);
            }
            i = ((IData)(1U) + i);
        }
        distance = d.at(((n * m) - (IData)(1U)));
        levenshtein_distance__Vfuncrtn = distance;
        __Vlabel0: ;
    }
}

void Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54__Vclpkg::__VnoInFunc_minimum(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54__Vclpkg::__VnoInFunc_minimum\n"); );
    // Body
    IData/*31:0*/ min;
    min = 0;
    min = a;
    if (VL_LTS_III(32, b, min)) {
        min = b;
    }
    if (VL_LTS_III(32, c, min)) {
        min = c;
    }
    minimum__Vfuncrtn = min;
}

Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54::Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vpools_top_uvm_pkg__03a__03auvm_spell_chkr__Tz54::to_string_middle\n"); );
    // Body
    std::string out;
    return (out);
}
