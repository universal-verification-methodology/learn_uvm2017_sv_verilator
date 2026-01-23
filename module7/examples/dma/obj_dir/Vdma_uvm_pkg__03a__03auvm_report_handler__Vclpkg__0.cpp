// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi4> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_report_handler"s;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_format_action(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ action, std::string &format_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_report_handler__Vclpkg::__VnoInFunc_format_action\n"); );
    // Body
    std::string s;
    if ((0U == action)) {
        s = "NO ACTION"s;
    } else {
        s = ""s;
        if ((0U != (1U & action))) {
            s = VL_CONCATN_NNN(s, "DISPLAY "s);
        }
        if ((0U != (2U & action))) {
            s = VL_CONCATN_NNN(s, "LOG "s);
        }
        if ((0U != (0x00000040U & action))) {
            s = VL_CONCATN_NNN(s, "RM_RECORD "s);
        }
        if ((0U != (4U & action))) {
            s = VL_CONCATN_NNN(s, "COUNT "s);
        }
        if ((0U != (0x00000010U & action))) {
            s = VL_CONCATN_NNN(s, "CALL_HOOK "s);
        }
        if ((0U != (8U & action))) {
            s = VL_CONCATN_NNN(s, "EXIT "s);
        }
        if ((0U != (0x00000020U & action))) {
            s = VL_CONCATN_NNN(s, "STOP "s);
        }
    }
    format_action__Vfuncrtn = s;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> tmp;
    tmp = ((""s == name) ? VL_NEW(Vdma_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, "uvm_report_handler"s)
            : VL_NEW(Vdma_uvm_pkg__03a__03auvm_report_handler, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_report_handler"s;
}

Vdma_uvm_pkg__03a__03auvm_report_handler::Vdma_uvm_pkg__03a__03auvm_report_handler(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_object(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__VnoInFunc_initialize(vlProcess, vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_do_print\n"); );
    // Locals
    IData/*31:0*/ __Vtask_first__7__Vfuncout;
    __Vtask_first__7__Vfuncout = 0;
    IData/*31:0*/ __Vtask_num__9__Vfuncout;
    __Vtask_num__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__10__Vfuncout;
    __Vtask_get__10__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__13__Vfuncout;
    __Vtask_next__13__Vfuncout = 0;
    IData/*31:0*/ __Vtask_num__15__Vfuncout;
    __Vtask_num__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__17__Vfuncout;
    __Vtask_first__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__18__Vfuncout;
    __Vtask_get__18__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__21__Vfuncout;
    __Vtask_next__21__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__23__Vfuncout;
    __Vtask_first__23__Vfuncout = 0;
    IData/*31:0*/ __Vtask_num__25__Vfuncout;
    __Vtask_num__25__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__26__Vfuncout;
    __Vtask_get__26__Vfuncout = 0;
    std::string __Vfunc_format_action__28__Vfuncout;
    IData/*31:0*/ __Vtask_next__29__Vfuncout;
    __Vtask_next__29__Vfuncout = 0;
    std::string __Vfunc_format_action__33__Vfuncout;
    IData/*31:0*/ __Vtask_num__35__Vfuncout;
    __Vtask_num__35__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__37__Vfuncout;
    __Vtask_first__37__Vfuncout = 0;
    std::string __Vfunc_format_action__39__Vfuncout;
    IData/*31:0*/ __Vtask_get__40__Vfuncout;
    __Vtask_get__40__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__41__Vfuncout;
    __Vtask_next__41__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__43__Vfuncout;
    __Vtask_first__43__Vfuncout = 0;
    IData/*31:0*/ __Vtask_num__45__Vfuncout;
    __Vtask_num__45__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get__46__Vfuncout;
    __Vtask_get__46__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__48__Vfuncout;
    __Vtask_next__48__Vfuncout = 0;
    IData/*31:0*/ __Vtask_num__50__Vfuncout;
    __Vtask_num__50__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__52__Vfuncout;
    __Vtask_first__52__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get__53__Vfuncout;
    __Vtask_get__53__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__55__Vfuncout;
    __Vtask_next__55__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__58__Vfuncout;
    __Vtask_first__58__Vfuncout = 0;
    IData/*31:0*/ __Vtask_num__60__Vfuncout;
    __Vtask_num__60__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__62__Vfuncout;
    __Vtask_get__62__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__63__Vfuncout;
    __Vtask_next__63__Vfuncout = 0;
    IData/*31:0*/ __Vtask_num__68__Vfuncout;
    __Vtask_num__68__Vfuncout = 0;
    IData/*31:0*/ __Vtask_first__70__Vfuncout;
    __Vtask_first__70__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__72__Vfuncout;
    __Vtask_get__72__Vfuncout = 0;
    IData/*31:0*/ __Vtask_next__73__Vfuncout;
    __Vtask_next__73__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_8;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    std::string __Vtemp_10;
    VlWide<128>/*4095:0*/ __Vtemp_11;
    std::string __Vtemp_12;
    VlWide<128>/*4095:0*/ __Vtemp_13;
    // Body
    std::string unnamedblk1__DOT__l_str;
    IData/*31:0*/ unnamedblk2__DOT___total_cnt;
    unnamedblk2__DOT___total_cnt = 0;
    CData/*1:0*/ unnamedblk2__DOT__unnamedblk3__DOT__l_severity;
    unnamedblk2__DOT__unnamedblk3__DOT__l_severity = 0;
    CData/*0:0*/ unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst;
    unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary;
    std::string unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str;
    IData/*31:0*/ unnamedblk6__DOT___total_cnt;
    unnamedblk6__DOT___total_cnt = 0;
    CData/*1:0*/ unnamedblk6__DOT__unnamedblk7__DOT__l_severity;
    unnamedblk6__DOT__unnamedblk7__DOT__l_severity = 0;
    CData/*0:0*/ unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst;
    unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary;
    CData/*1:0*/ unnamedblk9__DOT__l_severity_new;
    unnamedblk9__DOT__l_severity_new = 0;
    IData/*31:0*/ unnamedblk10__DOT___total_cnt;
    unnamedblk10__DOT___total_cnt = 0;
    std::string unnamedblk10__DOT__unnamedblk11__DOT__idx;
    CData/*0:0*/ unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst;
    unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary;
    CData/*1:0*/ unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev;
    unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev = 0;
    IData/*31:0*/ unnamedblk14__DOT___total_cnt;
    unnamedblk14__DOT___total_cnt = 0;
    CData/*1:0*/ unnamedblk14__DOT__unnamedblk15__DOT__l_severity;
    unnamedblk14__DOT__unnamedblk15__DOT__l_severity = 0;
    CData/*0:0*/ unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst;
    unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary;
    IData/*31:0*/ l_verbosity;
    l_verbosity = 0;
    CData/*1:0*/ l_severity;
    l_severity = 0;
    std::string idx;
    IData/*31:0*/ l_int;
    l_int = 0;
    if ((0U != (Vdma___024unit::__Venumtab_enum_valid25
                .at(this->__PVT__m_max_verbosity_level)
                 ? ([&]() {
                        l_verbosity = this->__PVT__m_max_verbosity_level;
                    }(), 1U) : 0U))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 132)->__VnoInFunc_print_generic(vlProcess, vlSymsp, "max_verbosity_level"s, "uvm_verbosity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vdma___024unit::__Venumtab_enum_name25
                                                                                .at(l_verbosity)), 0x2eU);
    } else {
        VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__m_max_verbosity_level);
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 135)->__VnoInFunc_print_field(vlProcess, vlSymsp, "max_verbosity_level"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    }
    if ((0U != ([&]() {
                    VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 139)
                ->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__7__Vfuncout);
                }(), __Vtask_first__7__Vfuncout))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 140)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_verbosities"s, 
                                                                                ([&]() {
                    VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 140)
                                                                                ->__VnoInFunc_num(vlSymsp, __Vtask_num__9__Vfuncout);
                }(), __Vtask_num__9__Vfuncout), "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 143)->__VnoInFunc_get(vlSymsp, idx, __Vtask_get__10__Vfuncout);
            l_int = __Vtask_get__10__Vfuncout;
            if ((0U != (Vdma___024unit::__Venumtab_enum_valid25
                        .at(l_int) ? ([&]() {
                                l_verbosity = l_int;
                            }(), 1U) : 0U))) {
                VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 145)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(idx)) , "uvm_verbosity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vdma___024unit::__Venumtab_enum_name25
                                                                                .at(l_verbosity)), 0x2eU);
            } else {
                unnamedblk1__DOT__l_str = VL_SFORMATF_N_NX("%0d",0,
                                                           32,
                                                           l_int) ;
                VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 150)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(idx)) , "int"s, 0x00000020U, unnamedblk1__DOT__l_str, 0x2eU);
            }
        } while ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 153)
                         ->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__13__Vfuncout);
                    }(), __Vtask_next__13__Vfuncout)));
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 154)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_id_verbosities.size())) {
        if ((0U != this->__PVT__severity_id_verbosities.first(unnamedblk2__DOT__unnamedblk3__DOT__l_severity))) {
            unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst = 1U;
            while (((IData)(unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst) 
                    || (0U != this->__PVT__severity_id_verbosities.next(unnamedblk2__DOT__unnamedblk3__DOT__l_severity)))) {
                unnamedblk2__DOT__unnamedblk3__DOT__l_severity__Vfirst = 0U;
                unnamedblk2__DOT___total_cnt = (unnamedblk2__DOT___total_cnt 
                                                + ([&]() {
                            VL_NULL_CHECK(this->__PVT__severity_id_verbosities
                                          .at(unnamedblk2__DOT__unnamedblk3__DOT__l_severity), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 161)
                                                   ->__VnoInFunc_num(vlSymsp, __Vtask_num__15__Vfuncout);
                        }(), __Vtask_num__15__Vfuncout));
            }
        }
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 162)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_id_verbosities"s, unnamedblk2__DOT___total_cnt, "array"s, 0x2eU);
        if ((0U != this->__PVT__severity_id_verbosities.first(l_severity))) {
            do {
                unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary 
                    = this->__PVT__severity_id_verbosities
                    .at(l_severity);
                if ((0U != ([&]() {
                                VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 167)
                            ->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__17__Vfuncout);
                            }(), __Vtask_first__17__Vfuncout))) {
                    do {
                        VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 169)->__VnoInFunc_get(vlSymsp, idx, __Vtask_get__18__Vfuncout);
                        l_int = __Vtask_get__18__Vfuncout;
                        if ((0U != (Vdma___024unit::__Venumtab_enum_valid25
                                    .at(l_int) ? ([&]() {
                                            l_verbosity 
                                                = l_int;
                                        }(), 1U) : 0U))) {
                            __Vtemp_2 = Vdma___024unit::__Venumtab_enum_name21
                                [l_severity];
                            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 171)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_2),
                                                                                -1,
                                                                                &(idx)) , "uvm_verbosity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(Vdma___024unit::__Venumtab_enum_name25
                                                                                .at(l_verbosity)), 0x2eU);
                        } else {
                            unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str 
                                = VL_SFORMATF_N_NX("%0d",0,
                                                   32,
                                                   l_int) ;
                            __Vtemp_3 = Vdma___024unit::__Venumtab_enum_name21
                                [l_severity];
                            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 176)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_3),
                                                                                -1,
                                                                                &(idx)) , "int"s, 0x00000020U, unnamedblk2__DOT__unnamedblk4__DOT__unnamedblk5__DOT__l_str, 0x2eU);
                        }
                    } while ((0U != ([&]() {
                                    VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk4__DOT__id_v_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 179)
                                     ->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__21__Vfuncout);
                                }(), __Vtask_next__21__Vfuncout)));
                }
            } while ((0U != this->__PVT__severity_id_verbosities.next(l_severity)));
        }
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 182)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != ([&]() {
                    VL_NULL_CHECK(this->__PVT__id_actions, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 186)
                ->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__23__Vfuncout);
                }(), __Vtask_first__23__Vfuncout))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 187)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_actions"s, 
                                                                                ([&]() {
                    VL_NULL_CHECK(this->__PVT__id_actions, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 187)
                                                                                ->__VnoInFunc_num(vlSymsp, __Vtask_num__25__Vfuncout);
                }(), __Vtask_num__25__Vfuncout), "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 190)->__VnoInFunc_get(vlSymsp, idx, __Vtask_get__26__Vfuncout);
            l_int = __Vtask_get__26__Vfuncout;
            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 191)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(idx)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, l_int, __Vfunc_format_action__28__Vfuncout);
                        }(), __Vfunc_format_action__28__Vfuncout)), 0x2eU);
        } while ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__id_actions, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 193)
                         ->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__29__Vfuncout);
                    }(), __Vtask_next__29__Vfuncout)));
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 194)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_actions.first(l_severity))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 199)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_actions"s, 4U, "array"s, 0x2eU);
        do {
            __Vtemp_4 = Vdma___024unit::__Venumtab_enum_name21
                [l_severity];
            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 201)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_4)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, this->__PVT__severity_actions
                                                                                .at((IData)(l_severity)), __Vfunc_format_action__33__Vfuncout);
                        }(), __Vfunc_format_action__33__Vfuncout)), 0x2eU);
        } while ((0U != this->__PVT__severity_actions.next(l_severity)));
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 204)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_id_actions.size())) {
        if ((0U != this->__PVT__severity_id_actions.first(unnamedblk6__DOT__unnamedblk7__DOT__l_severity))) {
            unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst = 1U;
            while (((IData)(unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst) 
                    || (0U != this->__PVT__severity_id_actions.next(unnamedblk6__DOT__unnamedblk7__DOT__l_severity)))) {
                unnamedblk6__DOT__unnamedblk7__DOT__l_severity__Vfirst = 0U;
                unnamedblk6__DOT___total_cnt = (unnamedblk6__DOT___total_cnt 
                                                + ([&]() {
                            VL_NULL_CHECK(this->__PVT__severity_id_actions
                                          .at(unnamedblk6__DOT__unnamedblk7__DOT__l_severity), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 211)
                                                   ->__VnoInFunc_num(vlSymsp, __Vtask_num__35__Vfuncout);
                        }(), __Vtask_num__35__Vfuncout));
            }
        }
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 212)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_id_actions"s, unnamedblk6__DOT___total_cnt, "array"s, 0x2eU);
        if ((0U != this->__PVT__severity_id_actions.first(l_severity))) {
            do {
                unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary 
                    = this->__PVT__severity_id_actions
                    .at(l_severity);
                if ((0U != ([&]() {
                                VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 217)
                            ->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__37__Vfuncout);
                            }(), __Vtask_first__37__Vfuncout))) {
                    do {
                        __Vtemp_5 = Vdma___024unit::__Venumtab_enum_name21
                            [l_severity];
                        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 219)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_5),
                                                                                -1,
                                                                                &(idx)) , "uvm_action"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_handler__Vclpkg.__VnoInFunc_format_action(vlSymsp, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 220)
                                                                                ->__VnoInFunc_get(vlSymsp, idx, __Vtask_get__40__Vfuncout);
                                                }(), __Vtask_get__40__Vfuncout), __Vfunc_format_action__39__Vfuncout);
                                    }(), __Vfunc_format_action__39__Vfuncout)), 0x2eU);
                    } while ((0U != ([&]() {
                                    VL_NULL_CHECK(unnamedblk6__DOT__unnamedblk8__DOT__id_a_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 221)
                                     ->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__41__Vfuncout);
                                }(), __Vtask_next__41__Vfuncout)));
                }
            } while ((0U != this->__PVT__severity_id_actions.next(l_severity)));
        }
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 224)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != ([&]() {
                    VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 228)
                ->__VnoInFunc_first(vlSymsp, l_severity, __Vtask_first__43__Vfuncout);
                }(), __Vtask_first__43__Vfuncout))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 229)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "sev_overrides"s, 
                                                                                ([&]() {
                    VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 229)
                                                                                ->__VnoInFunc_num(vlSymsp, __Vtask_num__45__Vfuncout);
                }(), __Vtask_num__45__Vfuncout), "uvm_pool"s, 0x2eU);
        do {
            VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 232)->__VnoInFunc_get(vlSymsp, l_severity, __Vtask_get__46__Vfuncout);
            unnamedblk9__DOT__l_severity_new = __Vtask_get__46__Vfuncout;
            __Vtemp_6 = Vdma___024unit::__Venumtab_enum_name21
                [l_severity];
            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 233)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_6)) , "uvm_severity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                Vdma___024unit::__Venumtab_enum_name21
                                                                                [unnamedblk9__DOT__l_severity_new]), 0x2eU);
        } while ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 235)
                         ->__VnoInFunc_next(vlSymsp, l_severity, __Vtask_next__48__Vfuncout);
                    }(), __Vtask_next__48__Vfuncout)));
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 236)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__sev_id_overrides.size())) {
        if ((0U != this->__PVT__sev_id_overrides.first(unnamedblk10__DOT__unnamedblk11__DOT__idx))) {
            unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst = 1U;
            while (((IData)(unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst) 
                    || (0U != this->__PVT__sev_id_overrides.next(unnamedblk10__DOT__unnamedblk11__DOT__idx)))) {
                unnamedblk10__DOT__unnamedblk11__DOT__idx__Vfirst = 0U;
                unnamedblk10__DOT___total_cnt = (unnamedblk10__DOT___total_cnt 
                                                 + 
                                                 ([&]() {
                            VL_NULL_CHECK(this->__PVT__sev_id_overrides
                                          .at(unnamedblk10__DOT__unnamedblk11__DOT__idx), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 243)
                                                  ->__VnoInFunc_num(vlSymsp, __Vtask_num__50__Vfuncout);
                        }(), __Vtask_num__50__Vfuncout));
            }
        }
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 244)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "sev_id_overrides"s, unnamedblk10__DOT___total_cnt, "array"s, 0x2eU);
        if ((0U != this->__PVT__sev_id_overrides.first(idx))) {
            do {
                unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary 
                    = this->__PVT__sev_id_overrides
                    .at(idx);
                if ((0U != ([&]() {
                                VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 249)
                            ->__VnoInFunc_first(vlSymsp, l_severity, __Vtask_first__52__Vfuncout);
                            }(), __Vtask_first__52__Vfuncout))) {
                    do {
                        VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 251)->__VnoInFunc_get(vlSymsp, l_severity, __Vtask_get__53__Vfuncout);
                        unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev 
                            = __Vtask_get__53__Vfuncout;
                        __Vtemp_7 = Vdma___024unit::__Venumtab_enum_name21
                            [l_severity];
                        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 252)->__VnoInFunc_print_generic(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_7),
                                                                                -1,
                                                                                &(idx)) , "uvm_severity"s, 0x00000020U, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                Vdma___024unit::__Venumtab_enum_name21
                                                                                [unnamedblk10__DOT__unnamedblk12__DOT__unnamedblk13__DOT__new_sev]), 0x2eU);
                    } while ((0U != ([&]() {
                                    VL_NULL_CHECK(unnamedblk10__DOT__unnamedblk12__DOT__sev_o_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 254)
                                     ->__VnoInFunc_next(vlSymsp, l_severity, __Vtask_next__55__Vfuncout);
                                }(), __Vtask_next__55__Vfuncout)));
                }
            } while ((0U != this->__PVT__sev_id_overrides.next(idx)));
        }
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 257)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    VL_EXTENDS_WI(4096,32, __Vtemp_8, this->__PVT__default_file_handle);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 261)->__VnoInFunc_print_field(vlProcess, vlSymsp, "default_file_handle"s, __Vtemp_8, 0x00000020U, 0x07000000U, 0x2eU, "int"s);
    if ((0U != ([&]() {
                    VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 265)
                ->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__58__Vfuncout);
                }(), __Vtask_first__58__Vfuncout))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 266)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_file_handles"s, 
                                                                                ([&]() {
                    VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 266)
                                                                                ->__VnoInFunc_num(vlSymsp, __Vtask_num__60__Vfuncout);
                }(), __Vtask_num__60__Vfuncout), "uvm_pool"s, 0x2eU);
        do {
            VL_EXTENDS_WI(4096,32, __Vtemp_9, ([&]() {
                        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 269)
                                               ->__VnoInFunc_get(vlSymsp, idx, __Vtask_get__62__Vfuncout);
                    }(), __Vtask_get__62__Vfuncout));
            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 269)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(idx)) , __Vtemp_9, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
        } while ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 271)
                         ->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__63__Vfuncout);
                    }(), __Vtask_next__63__Vfuncout)));
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 272)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_file_handles.first(l_severity))) {
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 277)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_file_handles"s, 4U, "array"s, 0x2eU);
        do {
            __Vtemp_10 = Vdma___024unit::__Venumtab_enum_name21
                [l_severity];
            VL_EXTENDS_WI(4096,32, __Vtemp_11, this->__PVT__severity_file_handles
                          .at((IData)(l_severity)));
            VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 279)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_10)) , __Vtemp_11, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
        } while ((0U != this->__PVT__severity_file_handles.next(l_severity)));
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 282)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__severity_id_file_handles.size())) {
        if ((0U != this->__PVT__severity_id_file_handles.first(unnamedblk14__DOT__unnamedblk15__DOT__l_severity))) {
            unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst = 1U;
            while (((IData)(unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst) 
                    || (0U != this->__PVT__severity_id_file_handles.next(unnamedblk14__DOT__unnamedblk15__DOT__l_severity)))) {
                unnamedblk14__DOT__unnamedblk15__DOT__l_severity__Vfirst = 0U;
                unnamedblk14__DOT___total_cnt = (unnamedblk14__DOT___total_cnt 
                                                 + 
                                                 ([&]() {
                            VL_NULL_CHECK(this->__PVT__severity_id_file_handles
                                          .at(unnamedblk14__DOT__unnamedblk15__DOT__l_severity), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 289)
                                                  ->__VnoInFunc_num(vlSymsp, __Vtask_num__68__Vfuncout);
                        }(), __Vtask_num__68__Vfuncout));
            }
        }
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 290)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_id_file_handles"s, unnamedblk14__DOT___total_cnt, "array"s, 0x2eU);
        if ((0U != this->__PVT__severity_id_file_handles.first(l_severity))) {
            do {
                unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary 
                    = this->__PVT__severity_id_file_handles
                    .at(l_severity);
                if ((0U != ([&]() {
                                VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 295)
                            ->__VnoInFunc_first(vlSymsp, idx, __Vtask_first__70__Vfuncout);
                            }(), __Vtask_first__70__Vfuncout))) {
                    do {
                        __Vtemp_12 = Vdma___024unit::__Venumtab_enum_name21
                            [l_severity];
                        VL_EXTENDS_WI(4096,32, __Vtemp_13, 
                                      ([&]() {
                                    VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 298)
                                       ->__VnoInFunc_get(vlSymsp, idx, __Vtask_get__72__Vfuncout);
                                }(), __Vtask_get__72__Vfuncout));
                        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 297)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@:%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_12),
                                                                                -1,
                                                                                &(idx)) , __Vtemp_13, 0x00000020U, 0x07000000U, 0x2eU, "UVM_FILE"s);
                    } while ((0U != ([&]() {
                                    VL_NULL_CHECK(unnamedblk14__DOT__unnamedblk16__DOT__id_f_ary, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 299)
                                     ->__VnoInFunc_next(vlSymsp, idx, __Vtask_next__73__Vfuncout);
                                }(), __Vtask_next__73__Vfuncout)));
                }
            } while ((0U != this->__PVT__severity_id_file_handles.next(l_severity)));
        }
        VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 302)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_process_report_message(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_process_report_message\n"); );
    // Locals
    VlClassRef<Vdma_std__03a__03aprocess> __Vfunc_self__75__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> __Vfunc_get_server__76__Vfuncout;
    std::string __Vtask_get_id__77__Vfuncout;
    CData/*1:0*/ __Vtask_get_severity__78__Vfuncout;
    __Vtask_get_severity__78__Vfuncout = 0;
    IData/*31:0*/ __Vtask_exists__79__Vfuncout;
    __Vtask_exists__79__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get__80__Vfuncout;
    __Vtask_get__80__Vfuncout = 0;
    IData/*31:0*/ __Vtask_exists__82__Vfuncout;
    __Vtask_exists__82__Vfuncout = 0;
    CData/*1:0*/ __Vtask_get__83__Vfuncout;
    __Vtask_get__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_file_handle__86__Vfuncout;
    __Vfunc_get_file_handle__86__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_action__89__Vfuncout;
    __Vfunc_get_action__89__Vfuncout = 0;
    // Body
    VlClassRef<Vdma_std__03a__03aprocess> p;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__75__Vfuncout);
    p = __Vfunc_self__75__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> srvr;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_server__Vclpkg.__VnoInFunc_get_server(vlProcess, vlSymsp, __Vfunc_get_server__76__Vfuncout);
    srvr = __Vfunc_get_server__76__Vfuncout;
    std::string id;
    VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 322)->__VnoInFunc_get_id(vlSymsp, __Vtask_get_id__77__Vfuncout);
    id = __Vtask_get_id__77__Vfuncout;
    CData/*1:0*/ severity;
    severity = 0;
    VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 323)->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__78__Vfuncout);
    severity = __Vtask_get_severity__78__Vfuncout;
    if (this->__PVT__sev_id_overrides.exists(id)) {
        if ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__sev_id_overrides
                                      .at(id), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 328)
                    ->__VnoInFunc_exists(vlSymsp, severity, __Vtask_exists__79__Vfuncout);
                    }(), __Vtask_exists__79__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__sev_id_overrides
                          .at(id), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 329)->__VnoInFunc_get(vlSymsp, severity, __Vtask_get__80__Vfuncout);
            severity = __Vtask_get__80__Vfuncout;
            VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 330)->__VnoInFunc_set_severity(vlSymsp, severity);
        }
    } else if ((0U != ([&]() {
                    VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 334)
                       ->__VnoInFunc_exists(vlSymsp, severity, __Vtask_exists__82__Vfuncout);
                }(), __Vtask_exists__82__Vfuncout))) {
        VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 335)->__VnoInFunc_get(vlSymsp, severity, __Vtask_get__83__Vfuncout);
        severity = __Vtask_get__83__Vfuncout;
        VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 336)->__VnoInFunc_set_severity(vlSymsp, severity);
    }
    VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 339)->__VnoInFunc_set_file(vlSymsp, 
                                                                                ([&]() {
                this->__VnoInFunc_get_file_handle(vlSymsp, severity, id, __Vfunc_get_file_handle__86__Vfuncout);
            }(), __Vfunc_get_file_handle__86__Vfuncout));
    VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 340)->__VnoInFunc_set_report_handler(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler>{this});
    VL_NULL_CHECK(report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 341)->__VnoInFunc_set_action(vlSymsp, 
                                                                                ([&]() {
                this->__VnoInFunc_get_action(vlSymsp, severity, id, __Vfunc_get_action__89__Vfuncout);
            }(), __Vfunc_get_action__89__Vfuncout));
    VL_NULL_CHECK(srvr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 342)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_initialize\n"); );
    // Body
    this->__VnoInFunc_set_default_file(vlSymsp, 0U);
    this->__PVT__m_max_verbosity_level = 0x000000c8U;
    this->__PVT__id_actions = VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    this->__PVT__id_verbosities = VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    this->__PVT__id_file_handles = VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    this->__PVT__sev_overrides = VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, ""s);
    this->__VnoInFunc_set_severity_action(vlSymsp, 0U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 1U, 1U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 2U, 5U);
    this->__VnoInFunc_set_severity_action(vlSymsp, 3U, 9U);
    this->__VnoInFunc_set_severity_file(vlSymsp, 0U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 1U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 2U, this->__PVT__default_file_handle);
    this->__VnoInFunc_set_severity_file(vlSymsp, 3U, this->__PVT__default_file_handle);
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_severity_id_file__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_severity_id_file\n"); );
    // Locals
    IData/*31:0*/ __Vtask_exists__104__Vfuncout;
    __Vtask_exists__104__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__105__Vfuncout;
    __Vtask_get__105__Vfuncout = 0;
    IData/*31:0*/ __Vtask_exists__106__Vfuncout;
    __Vtask_exists__106__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__107__Vfuncout;
    __Vtask_get__107__Vfuncout = 0;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> array;
    {
        if (this->__PVT__severity_id_file_handles.exists(severity)) {
            array = this->__PVT__severity_id_file_handles
                .at(severity);
            if ((0U != ([&]() {
                            VL_NULL_CHECK(array, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 414)
                        ->__VnoInFunc_exists(vlSymsp, id, __Vtask_exists__104__Vfuncout);
                        }(), __Vtask_exists__104__Vfuncout))) {
                VL_NULL_CHECK(array, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 415)->__VnoInFunc_get(vlSymsp, id, __Vtask_get__105__Vfuncout);
                get_severity_id_file__Vfuncrtn = __Vtask_get__105__Vfuncout;
                goto __Vlabel0;
            }
        }
        if ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 419)
                    ->__VnoInFunc_exists(vlSymsp, id, __Vtask_exists__106__Vfuncout);
                    }(), __Vtask_exists__106__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 420)->__VnoInFunc_get(vlSymsp, id, __Vtask_get__107__Vfuncout);
            get_severity_id_file__Vfuncrtn = __Vtask_get__107__Vfuncout;
            goto __Vlabel0;
        }
        if (this->__PVT__severity_file_handles.exists(severity)) {
            get_severity_id_file__Vfuncrtn = this->__PVT__severity_file_handles
                .at((IData)(severity));
            goto __Vlabel0;
        }
        get_severity_id_file__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity_level) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_verbosity_level\n"); );
    // Body
    this->__PVT__m_max_verbosity_level = verbosity_level;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_verbosity_level__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_verbosity_level\n"); );
    // Locals
    IData/*31:0*/ __Vtask_exists__108__Vfuncout;
    __Vtask_exists__108__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__109__Vfuncout;
    __Vtask_get__109__Vfuncout = 0;
    IData/*31:0*/ __Vtask_exists__110__Vfuncout;
    __Vtask_exists__110__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__111__Vfuncout;
    __Vtask_get__111__Vfuncout = 0;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> array;
    {
        if (this->__PVT__severity_id_verbosities.exists(severity)) {
            array = this->__PVT__severity_id_verbosities
                .at(severity);
            if ((0U != ([&]() {
                            VL_NULL_CHECK(array, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 454)
                        ->__VnoInFunc_exists(vlSymsp, id, __Vtask_exists__108__Vfuncout);
                        }(), __Vtask_exists__108__Vfuncout))) {
                VL_NULL_CHECK(array, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 455)->__VnoInFunc_get(vlSymsp, id, __Vtask_get__109__Vfuncout);
                get_verbosity_level__Vfuncrtn = __Vtask_get__109__Vfuncout;
                goto __Vlabel0;
            }
        }
        if ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 459)
                    ->__VnoInFunc_exists(vlSymsp, id, __Vtask_exists__110__Vfuncout);
                    }(), __Vtask_exists__110__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 460)->__VnoInFunc_get(vlSymsp, id, __Vtask_get__111__Vfuncout);
            get_verbosity_level__Vfuncrtn = __Vtask_get__111__Vfuncout;
            goto __Vlabel0;
        }
        get_verbosity_level__Vfuncrtn = this->__PVT__m_max_verbosity_level;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_action__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_action\n"); );
    // Locals
    IData/*31:0*/ __Vtask_exists__112__Vfuncout;
    __Vtask_exists__112__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__113__Vfuncout;
    __Vtask_get__113__Vfuncout = 0;
    IData/*31:0*/ __Vtask_exists__114__Vfuncout;
    __Vtask_exists__114__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__115__Vfuncout;
    __Vtask_get__115__Vfuncout = 0;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22> array;
    {
        if (this->__PVT__severity_id_actions.exists(severity)) {
            array = this->__PVT__severity_id_actions
                .at(severity);
            if ((0U != ([&]() {
                            VL_NULL_CHECK(array, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 483)
                        ->__VnoInFunc_exists(vlSymsp, id, __Vtask_exists__112__Vfuncout);
                        }(), __Vtask_exists__112__Vfuncout))) {
                VL_NULL_CHECK(array, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 484)->__VnoInFunc_get(vlSymsp, id, __Vtask_get__113__Vfuncout);
                get_action__Vfuncrtn = __Vtask_get__113__Vfuncout;
                goto __Vlabel0;
            }
        }
        if ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__id_actions, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 487)
                    ->__VnoInFunc_exists(vlSymsp, id, __Vtask_exists__114__Vfuncout);
                    }(), __Vtask_exists__114__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__id_actions, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 488)->__VnoInFunc_get(vlSymsp, id, __Vtask_get__115__Vfuncout);
            get_action__Vfuncrtn = __Vtask_get__115__Vfuncout;
            goto __Vlabel0;
        }
        get_action__Vfuncrtn = this->__PVT__severity_actions
            .at((IData)(severity));
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &get_file_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_get_file_handle\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_severity_id_file__116__Vfuncout;
    __Vfunc_get_severity_id_file__116__Vfuncout = 0;
    IData/*31:0*/ __Vtask_exists__117__Vfuncout;
    __Vtask_exists__117__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get__118__Vfuncout;
    __Vtask_get__118__Vfuncout = 0;
    // Body
    IData/*31:0*/ file;
    file = 0;
    {
        this->__VnoInFunc_get_severity_id_file(vlSymsp, severity, id, __Vfunc_get_severity_id_file__116__Vfuncout);
        file = __Vfunc_get_severity_id_file__116__Vfuncout;
        if ((0U != file)) {
            get_file_handle__Vfuncrtn = file;
            goto __Vlabel0;
        }
        if ((0U != ([&]() {
                        VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 512)
                    ->__VnoInFunc_exists(vlSymsp, id, __Vtask_exists__117__Vfuncout);
                    }(), __Vtask_exists__117__Vfuncout))) {
            VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 513)->__VnoInFunc_get(vlSymsp, id, __Vtask_get__118__Vfuncout);
            file = __Vtask_get__118__Vfuncout;
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            }
        }
        if (this->__PVT__severity_file_handles.exists(severity)) {
            file = this->__PVT__severity_file_handles
                .at((IData)(severity));
            if ((0U != file)) {
                get_file_handle__Vfuncrtn = file;
                goto __Vlabel0;
            }
        }
        get_file_handle__Vfuncrtn = this->__PVT__default_file_handle;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_action\n"); );
    // Body
    this->__PVT__severity_actions.at((IData)(severity)) 
        = action;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action(Vdma__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_action\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_actions, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 544)->__VnoInFunc_add(vlSymsp, id, action);
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ action) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_action\n"); );
    // Body
    if ((! this->__PVT__severity_id_actions.exists(severity))) {
        this->__PVT__severity_id_actions.at(severity) 
            = VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    }
    VL_NULL_CHECK(this->__PVT__severity_id_actions.at(severity), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 553)->__VnoInFunc_add(vlSymsp, id, action);
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity(Vdma__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_verbosity\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_verbosities, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 558)->__VnoInFunc_add(vlSymsp, id, verbosity);
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_verbosity(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ verbosity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_verbosity\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((! this->__PVT__severity_id_verbosities.exists(severity))) {
        this->__PVT__severity_id_verbosities.at(severity) 
            = VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    }
    VL_NULL_CHECK(this->__PVT__severity_id_verbosities
                  .at(severity), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 567)->__VnoInFunc_add(vlSymsp, id, verbosity);
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_default_file\n"); );
    // Body
    this->__PVT__default_file_handle = file;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_file\n"); );
    // Body
    this->__PVT__severity_file_handles.at((IData)(severity)) 
        = file;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file(Vdma__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_id_file\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__id_file_handles, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 589)->__VnoInFunc_add(vlSymsp, id, file);
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_file(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_file\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((! this->__PVT__severity_id_file_handles.exists(severity))) {
        this->__PVT__severity_id_file_handles.at(severity) 
            = VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz2_TBz22, vlProcess, vlSymsp, ""s);
    }
    VL_NULL_CHECK(this->__PVT__severity_id_file_handles
                  .at(severity), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 597)->__VnoInFunc_add(vlSymsp, id, file);
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_override\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__sev_overrides, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 603)->__VnoInFunc_add(vlSymsp, cur_severity, (IData)(new_severity));
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ cur_severity, std::string id, CData/*1:0*/ new_severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_set_severity_id_override\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_pool__Tz23_TBz23> arr;
    if ((! this->__PVT__sev_id_overrides.exists(id))) {
        this->__PVT__sev_id_overrides.at(id) = VL_NEW(Vdma_uvm_pkg__03a__03auvm_pool__Tz23_TBz23, vlProcess, vlSymsp, ""s);
    }
    VL_NULL_CHECK(this->__PVT__sev_id_overrides.at(id), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 616)->__VnoInFunc_add(vlSymsp, cur_severity, (IData)(new_severity));
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string name, std::string id, std::string message, IData/*31:0*/ verbosity_level, std::string filename, IData/*31:0*/ line, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_object> client) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_report\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__131__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__Vfuncout;
    __Vfunc_uvm_report_enabled__132__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__verbosity;
    __Vfunc_uvm_report_enabled__132__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__132__severity;
    __Vfunc_uvm_report_enabled__132__severity = 0;
    std::string __Vfunc_uvm_report_enabled__132__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__135__Vfuncout;
    __Vtask_uvm_report_enabled__135__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__136__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> __Vfunc_new_report_message__137__Vfuncout;
    IData/*31:0*/ __Vfunc_get_action__141__Vfuncout;
    __Vfunc_get_action__141__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    CData/*0:0*/ l_report_enabled;
    l_report_enabled = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> l_report_message;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> cs;
    {
        l_report_enabled = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__131__Vfuncout);
        cs = __Vfunc_get__131__Vfuncout;
        if ((1U & (~ (0U != ([&]() {
                                __Vfunc_uvm_report_enabled__132__id 
                                    = id;
                                __Vfunc_uvm_report_enabled__132__severity = 0U;
                                __Vfunc_uvm_report_enabled__132__verbosity 
                                    = verbosity_level;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__133__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__133__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                             ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__134__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                             ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__132__verbosity, (IData)(__Vfunc_uvm_report_enabled__132__severity), __Vfunc_uvm_report_enabled__132__id, __Vtask_uvm_report_enabled__135__Vfuncout);
                                __Vfunc_uvm_report_enabled__132__Vfuncout 
                                    = __Vtask_uvm_report_enabled__135__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__132__Vfuncout))))) {
            goto __Vlabel0;
        }
        if ((VlNull{} == client)) {
            VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 645)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__136__Vfuncout);
            client = __Vtask_get_root__136__Vfuncout;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, __Vfunc_new_report_message__137__Vfuncout);
        l_report_message = __Vfunc_new_report_message__137__Vfuncout;
        VL_NULL_CHECK(l_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 648)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity_level, filename, line, name);
        VL_NULL_CHECK(l_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 650)->__VnoInFunc_set_report_object(vlSymsp, client);
        VL_NULL_CHECK(l_report_message, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_handler.svh", 651)->__VnoInFunc_set_action(vlSymsp, 
                                                                                ([&]() {
                    this->__VnoInFunc_get_action(vlSymsp, severity, id, __Vfunc_get_action__141__Vfuncout);
                }(), __Vfunc_get_action__141__Vfuncout));
        this->__VnoInFunc_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__144__Vfuncout;
    __Vfunc___VBasicRand__144__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__144__Vfuncout);
            }(), __Vfunc___VBasicRand__144__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_max_verbosity_level = 0;
    __PVT__severity_actions.atDefault() = 0;
    __PVT__default_file_handle = 0;
    __PVT__severity_file_handles.atDefault() = 0;
}

Vdma_uvm_pkg__03a__03auvm_report_handler::~Vdma_uvm_pkg__03a__03auvm_report_handler() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_report_handler::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_report_handler::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_report_handler::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_max_verbosity_level:" + VL_TO_STRING(__PVT__m_max_verbosity_level);
    out += ", id_verbosities:" + VL_TO_STRING(__PVT__id_verbosities);
    out += ", severity_id_verbosities:" + VL_TO_STRING(__PVT__severity_id_verbosities);
    out += ", id_actions:" + VL_TO_STRING(__PVT__id_actions);
    out += ", severity_actions:" + VL_TO_STRING(__PVT__severity_actions);
    out += ", severity_id_actions:" + VL_TO_STRING(__PVT__severity_id_actions);
    out += ", sev_overrides:" + VL_TO_STRING(__PVT__sev_overrides);
    out += ", sev_id_overrides:" + VL_TO_STRING(__PVT__sev_id_overrides);
    out += ", default_file_handle:" + VL_TO_STRING(__PVT__default_file_handle);
    out += ", id_file_handles:" + VL_TO_STRING(__PVT__id_file_handles);
    out += ", severity_file_handles:" + VL_TO_STRING(__PVT__severity_file_handles);
    out += ", severity_id_file_handles:" + VL_TO_STRING(__PVT__severity_id_file_handles);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_object::to_string_middle();
    return (out);
}
