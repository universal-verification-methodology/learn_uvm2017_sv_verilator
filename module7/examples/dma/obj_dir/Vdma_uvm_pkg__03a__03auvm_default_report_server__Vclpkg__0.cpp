// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_default_report_server"s;
}

Vdma_uvm_pkg__03a__03auvm_default_report_server::Vdma_uvm_pkg__03a__03auvm_default_report_server(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_report_server(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__show_terminator = 0U;
    this->__PVT__show_verbosity = 0U;
    this->__PVT__record_all_messages = 0U;
    this->__PVT__enable_report_id_count_summary = 1U;
    this->__PVT__max_quit_overridable = 1U;
    ;
    this->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, 0U, 1U);
    this->__VnoInFunc_reset_quit_count(vlSymsp);
    this->__VnoInFunc_reset_severity_counts(vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    VlWide<128>/*4095:0*/ __Vtemp_2;
    VlWide<128>/*4095:0*/ __Vtemp_3;
    std::string __Vtemp_4;
    VlWide<128>/*4095:0*/ __Vtemp_5;
    VlWide<128>/*4095:0*/ __Vtemp_6;
    VlWide<128>/*4095:0*/ __Vtemp_7;
    VlWide<128>/*4095:0*/ __Vtemp_8;
    VlWide<128>/*4095:0*/ __Vtemp_9;
    VlWide<128>/*4095:0*/ __Vtemp_10;
    // Body
    CData/*1:0*/ l_severity_count_index;
    l_severity_count_index = 0;
    std::string l_id_count_index;
    VL_EXTENDS_WI(4096,32, __Vtemp_1, this->__PVT__m_quit_count);
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 338)->__VnoInFunc_print_field(vlProcess, vlSymsp, "quit_count"s, __Vtemp_1, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    VL_EXTENDS_WI(4096,32, __Vtemp_2, this->__PVT__m_max_quit_count);
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 340)->__VnoInFunc_print_field(vlProcess, vlSymsp, "max_quit_count"s, __Vtemp_2, 0x00000020U, 0x02000000U, 0x2eU, "int"s);
    __Vtemp_3[0U] = this->__PVT__max_quit_overridable;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_3[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 342)->__VnoInFunc_print_field(vlProcess, vlSymsp, "max_quit_overridable"s, __Vtemp_3, 1U, 0x01000000U, 0x2eU, "bit"s);
    if ((0U != this->__PVT__m_severity_count.first(l_severity_count_index))) {
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 346)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "severity_count"s, this->__PVT__m_severity_count.size(), "severity counts"s, 0x2eU);
        do {
            __Vtemp_4 = Vdma___024unit::__Venumtab_enum_name9
                [l_severity_count_index];
            VL_EXTENDS_WI(4096,32, __Vtemp_5, this->__PVT__m_severity_count
                          .at((IData)(l_severity_count_index)));
            VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 348)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(__Vtemp_4)) , __Vtemp_5, 0x00000020U, 0x02000000U, 0x2eU, ""s);
        } while ((0U != this->__PVT__m_severity_count.next(l_severity_count_index)));
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 351)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    if ((0U != this->__PVT__m_id_count.first(l_id_count_index))) {
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 355)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "id_count"s, this->__PVT__m_id_count.size(), "id counts"s, 0x2eU);
        do {
            VL_EXTENDS_WI(4096,32, __Vtemp_6, this->__PVT__m_id_count
                          .at(l_id_count_index));
            VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 357)->__VnoInFunc_print_field(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%@]",0,
                                                                                -1,
                                                                                &(l_id_count_index)) , __Vtemp_6, 0x00000020U, 0x02000000U, 0x2eU, ""s);
        } while ((0U != this->__PVT__m_id_count.next(l_id_count_index)));
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 360)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
    }
    __Vtemp_7[0U] = this->__PVT__enable_report_id_count_summary;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 1U;
    while ((__Vilp2 <= 0x0000007fU)) {
        __Vtemp_7[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 363)->__VnoInFunc_print_field(vlProcess, vlSymsp, "enable_report_id_count_summary"s, __Vtemp_7, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_8[0U] = this->__PVT__record_all_messages;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 1U;
    while ((__Vilp3 <= 0x0000007fU)) {
        __Vtemp_8[__Vilp3] = 0U;
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 365)->__VnoInFunc_print_field(vlProcess, vlSymsp, "record_all_messages"s, __Vtemp_8, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_9[0U] = this->__PVT__show_verbosity;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 1U;
    while ((__Vilp4 <= 0x0000007fU)) {
        __Vtemp_9[__Vilp4] = 0U;
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 367)->__VnoInFunc_print_field(vlProcess, vlSymsp, "show_verbosity"s, __Vtemp_9, 1U, 0x01000000U, 0x2eU, "bit"s);
    __Vtemp_10[0U] = this->__PVT__show_terminator;
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 1U;
    while ((__Vilp5 <= 0x0000007fU)) {
        __Vtemp_10[__Vilp5] = 0U;
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 369)->__VnoInFunc_print_field(vlProcess, vlSymsp, "show_terminator"s, __Vtemp_10, 1U, 0x01000000U, 0x2eU, "bit"s);
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_max_quit_count(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_max_quit_count\n"); );
    // Body
    get_max_quit_count__Vfuncrtn = this->__PVT__m_max_quit_count;
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_max_quit_count(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ count, CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_max_quit_count\n"); );
    // Locals
    std::string __Vtask_uvm_report_info__17__id;
    std::string __Vtask_uvm_report_info__17__message;
    IData/*31:0*/ __Vtask_uvm_report_info__17__verbosity;
    __Vtask_uvm_report_info__17__verbosity = 0;
    std::string __Vtask_uvm_report_info__17__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__17__line;
    __Vtask_uvm_report_info__17__line = 0;
    std::string __Vtask_uvm_report_info__17__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__17__report_enabled_checked;
    __Vtask_uvm_report_info__17__report_enabled_checked = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    // Body
    {
        if ((1U & (~ (IData)(this->__PVT__max_quit_overridable)))) {
            __Vtask_uvm_report_info__17__report_enabled_checked = 0U;
            __Vtask_uvm_report_info__17__context_name = ""s;
            __Vtask_uvm_report_info__17__line = 0U;
            __Vtask_uvm_report_info__17__filename = ""s;
            __Vtask_uvm_report_info__17__verbosity = 0U;
            __Vtask_uvm_report_info__17__message = VL_SFORMATF_N_NX("The max quit count setting of %0d is not overridable to %0d due to a previous setting.",0,
                                                                    32,
                                                                    this->__PVT__m_max_quit_count,
                                                                    32,
                                                                    count) ;
            __Vtask_uvm_report_info__17__id = "NOMAXQUITOVR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__18__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__19__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__17__id, __Vtask_uvm_report_info__17__message, __Vtask_uvm_report_info__17__verbosity, __Vtask_uvm_report_info__17__filename, __Vtask_uvm_report_info__17__line, __Vtask_uvm_report_info__17__context_name, (IData)(__Vtask_uvm_report_info__17__report_enabled_checked));
            goto __Vlabel0;
        }
        this->__PVT__max_quit_overridable = overridable;
        this->__PVT__m_max_quit_count = (VL_GTS_III(32, 0U, count)
                                          ? 0U : count);
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_quit_count(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_quit_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_quit_count\n"); );
    // Body
    get_quit_count__Vfuncrtn = this->__PVT__m_quit_count;
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_quit_count(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ quit_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = (VL_GTS_III(32, 0U, quit_count)
                                  ? 0U : quit_count);
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_quit_count(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = ((IData)(1U) + this->__PVT__m_quit_count);
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_quit_count(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_quit_count\n"); );
    // Body
    this->__PVT__m_quit_count = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_is_quit_count_reached(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_quit_count_reached__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_is_quit_count_reached\n"); );
    // Body
    is_quit_count_reached__Vfuncrtn = VL_GTES_III(32, this->__PVT__m_quit_count, this->__PVT__m_max_quit_count);
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_count(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ &get_severity_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_count\n"); );
    // Body
    get_severity_count__Vfuncrtn = this->__PVT__m_severity_count
        .at((IData)(severity));
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_severity_count(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_severity_count\n"); );
    // Body
    this->__PVT__m_severity_count.at((IData)(severity)) 
        = (VL_GTS_III(32, 0U, count) ? 0U : count);
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_severity_count(Vdma__Syms* __restrict vlSymsp, CData/*1:0*/ severity) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_severity_count\n"); );
    // Locals
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((IData)(1U) + this->__PVT__m_severity_count
                 .at((IData)(severity)));
    this->__PVT__m_severity_count.at((IData)(severity)) 
        = __Vtemp_1;
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_severity_counts(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_reset_severity_counts\n"); );
    // Body
    CData/*1:0*/ s;
    s = 0;
    s = 0U;
    {
        while (true) {
            this->__PVT__m_severity_count.at((IData)(s)) = 0U;
            if ((3U == (IData)(s))) {
                goto __Vlabel0;
            }
            s = Vdma___024unit::__Venumtab_enum_next9
                [s];
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_count(Vdma__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ &get_id_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_count\n"); );
    // Body
    {
        if (this->__PVT__m_id_count.exists(id)) {
            get_id_count__Vfuncrtn = this->__PVT__m_id_count
                .at(id);
            goto __Vlabel0;
        }
        get_id_count__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_id_count(Vdma__Syms* __restrict vlSymsp, std::string id, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_id_count\n"); );
    // Body
    this->__PVT__m_id_count.at(id) = (VL_GTS_III(32, 0U, count)
                                       ? 0U : count);
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_id_count(Vdma__Syms* __restrict vlSymsp, std::string id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_incr_id_count\n"); );
    // Locals
    IData/*31:0*/ __Vtemp_1;
    // Body
    if (this->__PVT__m_id_count.exists(id)) {
        __Vtemp_1 = ((IData)(1U) + this->__PVT__m_id_count
                     .at(id));
        this->__PVT__m_id_count.at(id) = __Vtemp_1;
    } else {
        this->__PVT__m_id_count.at(id) = 1U;
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_message_database(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> database) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_set_message_database\n"); );
    // Body
    this->__PVT__m_message_db = database;
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_message_database(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> &get_message_database__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_message_database\n"); );
    // Body
    get_message_database__Vfuncrtn = this->__PVT__m_message_db;
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_set(Vdma__Syms* __restrict vlSymsp, VlQueue<CData/*1:0*/> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_severity_set\n"); );
    // Body
    CData/*1:0*/ unnamedblk1__DOT__idx;
    unnamedblk1__DOT__idx = 0;
    CData/*0:0*/ unnamedblk1__DOT__idx__Vfirst;
    unnamedblk1__DOT__idx__Vfirst = 0;
    if ((0U != this->__PVT__m_severity_count.first(unnamedblk1__DOT__idx))) {
        unnamedblk1__DOT__idx__Vfirst = 1U;
        while (((IData)(unnamedblk1__DOT__idx__Vfirst) 
                || (0U != this->__PVT__m_severity_count.next(unnamedblk1__DOT__idx)))) {
            unnamedblk1__DOT__idx__Vfirst = 0U;
            q.push_back(unnamedblk1__DOT__idx);
        }
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_set(Vdma__Syms* __restrict vlSymsp, VlQueue<std::string> &q) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_get_id_set\n"); );
    // Body
    std::string unnamedblk2__DOT__idx;
    CData/*0:0*/ unnamedblk2__DOT__idx__Vfirst;
    unnamedblk2__DOT__idx__Vfirst = 0;
    if ((0U != this->__PVT__m_id_count.first(unnamedblk2__DOT__idx))) {
        unnamedblk2__DOT__idx__Vfirst = 1U;
        while (((IData)(unnamedblk2__DOT__idx__Vfirst) 
                || (0U != this->__PVT__m_id_count.next(unnamedblk2__DOT__idx)))) {
            unnamedblk2__DOT__idx__Vfirst = 0U;
            q.push_back(unnamedblk2__DOT__idx);
        }
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_f_display(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ file, std::string str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_f_display\n"); );
    // Body
    if ((0U == file)) {
        VL_WRITEF_NX("%@\n",0,-1,&(str));
    } else {
        VL_FWRITEF_NX(file,"%@\n",0,-1,&(str));
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report_message(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_process_report_message\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> __Vtask_get_report_handler__21__Vfuncout;
    VlClassRef<Vdma_std__03a__03aprocess> __Vfunc_self__22__Vfuncout;
    IData/*31:0*/ __Vfunc_process_all_report_catchers__24__Vfuncout;
    __Vfunc_process_all_report_catchers__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_action__25__Vfuncout;
    __Vtask_get_action__25__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__26__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> __Vtask_get_report_server__27__Vfuncout;
    IData/*31:0*/ __Vtask_get_action__28__Vfuncout;
    __Vtask_get_action__28__Vfuncout = 0;
    std::string __Vtask_compose_report_message__29__Vfuncout;
    // Body
    std::string unnamedblk3__DOT__m;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk3__DOT__cs;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_server> unnamedblk3__DOT__svr;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> l_report_handler;
    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 564)->__VnoInFunc_get_report_handler(vlSymsp, __Vtask_get_report_handler__21__Vfuncout);
    l_report_handler = __Vtask_get_report_handler__21__Vfuncout;
    VlClassRef<Vdma_std__03a__03aprocess> p;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__22__Vfuncout);
    p = __Vfunc_self__22__Vfuncout;
    CData/*0:0*/ report_ok;
    report_ok = 0;
    report_ok = 1U;
    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 569)->__VnoInFunc_set_report_server(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_default_report_server>{this});
    if (report_ok) {
        report_ok = (1U & ([&]() {
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_process_all_report_catchers(vlProcess, vlSymsp, report_message, __Vfunc_process_all_report_catchers__24__Vfuncout);
                }(), __Vfunc_process_all_report_catchers__24__Vfuncout));
    }
    if ((0U == ([&]() {
                    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 574)
                ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__25__Vfuncout);
                }(), __Vtask_get_action__25__Vfuncout))) {
        report_ok = 0U;
    }
    if (report_ok) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__26__Vfuncout);
        unnamedblk3__DOT__cs = __Vfunc_get__26__Vfuncout;
        VL_NULL_CHECK(unnamedblk3__DOT__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 581)->__VnoInFunc_get_report_server(vlProcess, vlSymsp, __Vtask_get_report_server__27__Vfuncout);
        unnamedblk3__DOT__svr = __Vtask_get_report_server__27__Vfuncout;
        if ((0U != (3U & ([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 584)
                          ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__28__Vfuncout);
                        }(), __Vtask_get_action__28__Vfuncout)))) {
            VL_NULL_CHECK(unnamedblk3__DOT__svr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 585)->__VnoInFunc_compose_report_message(vlProcess, vlSymsp, report_message, ""s, __Vtask_compose_report_message__29__Vfuncout);
            unnamedblk3__DOT__m = __Vtask_compose_report_message__29__Vfuncout;
        }
        VL_NULL_CHECK(unnamedblk3__DOT__svr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 587)->__VnoInFunc_execute_report_message(vlProcess, vlSymsp, report_message, unnamedblk3__DOT__m);
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_execute_report_message(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> report_message, std::string composed_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_execute_report_message\n"); );
    // Locals
    VlClassRef<Vdma_std__03a__03aprocess> __Vfunc_self__31__Vfuncout;
    CData/*1:0*/ __Vtask_get_severity__33__Vfuncout;
    __Vtask_get_severity__33__Vfuncout = 0;
    std::string __Vtask_get_id__35__Vfuncout;
    IData/*31:0*/ __Vtask_get_action__37__Vfuncout;
    __Vtask_get_action__37__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_action__38__Vfuncout;
    __Vtask_get_action__38__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_object> __Vtask_get_report_object__39__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> __Vtask_get_report_handler__40__Vfuncout;
    std::string __Vtask_get_name__41__Vfuncout;
    std::string __Vtask_get_name__42__Vfuncout;
    std::string __Vtask_get_name__43__Vfuncout;
    std::string __Vtask_get_name__44__Vfuncout;
    std::string __Vtask_get_name__45__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> __Vfunc_get_message_database__46__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__47__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> __Vtask_get_default_tr_database__48__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> __Vtask_open_stream__49__Vfuncout;
    std::string __Vtask_get_name__50__Vfuncout;
    std::string __Vtask_get_name__51__Vfuncout;
    std::string __Vtask_get_name__52__Vfuncout;
    std::string __Vtask_get_name__53__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> __Vtask_open_recorder__54__Vfuncout;
    std::string __Vtask_get_name__55__Vfuncout;
    std::string __Vtask_get_type_name__56__Vfuncout;
    IData/*31:0*/ __Vtask_get_action__59__Vfuncout;
    __Vtask_get_action__59__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_action__60__Vfuncout;
    __Vtask_get_action__60__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_file__61__Vfuncout;
    __Vtask_get_file__61__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_file__62__Vfuncout;
    __Vtask_get_file__62__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_file__63__Vfuncout;
    __Vtask_get_file__63__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_file__64__Vfuncout;
    __Vtask_get_file__64__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_file__65__Vfuncout;
    __Vtask_get_file__65__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_action__67__Vfuncout;
    __Vtask_get_action__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_max_quit_count__68__Vfuncout;
    __Vfunc_get_max_quit_count__68__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_is_quit_count_reached__70__Vfuncout;
    __Vfunc_is_quit_count_reached__70__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_action__72__Vfuncout;
    __Vtask_get_action__72__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_action__73__Vfuncout;
    __Vtask_get_action__73__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__74__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__75__Vfuncout;
    IData/*31:0*/ __Vtask_get_action__77__Vfuncout;
    __Vtask_get_action__77__Vfuncout = 0;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_stream> unnamedblk4__DOT__stream;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_object> unnamedblk4__DOT__ro;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> unnamedblk4__DOT__rh;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> unnamedblk4__DOT__unnamedblk5__DOT__db;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> unnamedblk4__DOT__unnamedblk7__DOT__recorder;
    IData/*31:0*/ unnamedblk8__DOT__tmp_file;
    unnamedblk8__DOT__tmp_file = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> unnamedblk9__DOT__l_root;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk9__DOT__cs;
    VlClassRef<Vdma_std__03a__03aprocess> p;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__31__Vfuncout);
    p = __Vfunc_self__31__Vfuncout;
    this->__VnoInFunc_incr_severity_count(vlSymsp, 
                                          ([&]() {
                VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 610)
                                           ->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__33__Vfuncout);
            }(), (IData)(__Vtask_get_severity__33__Vfuncout)));
    this->__VnoInFunc_incr_id_count(vlSymsp, VL_CVT_PACK_STR_NN(
                                                                ([&]() {
                    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 611)
                                                                 ->__VnoInFunc_get_id(vlSymsp, __Vtask_get_id__35__Vfuncout);
                }(), __Vtask_get_id__35__Vfuncout)));
    if (this->__PVT__record_all_messages) {
        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 614)->__VnoInFunc_set_action(vlSymsp, 
                                                                                (0x00000040U 
                                                                                | ([&]() {
                        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 614)
                                                                                ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__37__Vfuncout);
                    }(), __Vtask_get_action__37__Vfuncout)));
    }
    if ((0U != (0x00000040U & ([&]() {
                        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 617)
                               ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__38__Vfuncout);
                    }(), __Vtask_get_action__38__Vfuncout)))) {
        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 619)->__VnoInFunc_get_report_object(vlSymsp, __Vtask_get_report_object__39__Vfuncout);
        unnamedblk4__DOT__ro = __Vtask_get_report_object__39__Vfuncout;
        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 620)->__VnoInFunc_get_report_handler(vlSymsp, __Vtask_get_report_handler__40__Vfuncout);
        unnamedblk4__DOT__rh = __Vtask_get_report_handler__40__Vfuncout;
        if ((this->__PVT__m_streams.exists(([&]() {
                            VL_NULL_CHECK(unnamedblk4__DOT__ro, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 623)
                                            ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__41__Vfuncout);
                        }(), __Vtask_get_name__41__Vfuncout)) 
             && this->__PVT__m_streams.at(([&]() {
                            VL_NULL_CHECK(unnamedblk4__DOT__ro, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 623)
                                           ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__42__Vfuncout);
                        }(), __Vtask_get_name__42__Vfuncout)).exists(
                                                                     ([&]() {
                            VL_NULL_CHECK(unnamedblk4__DOT__rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 623)
                                                                      ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__43__Vfuncout);
                        }(), __Vtask_get_name__43__Vfuncout)))) {
            unnamedblk4__DOT__stream = this->__PVT__m_streams
                .at(([&]() {
                        VL_NULL_CHECK(unnamedblk4__DOT__ro, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 624)
                     ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__44__Vfuncout);
                    }(), __Vtask_get_name__44__Vfuncout))
                .at(([&]() {
                        VL_NULL_CHECK(unnamedblk4__DOT__rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 624)
                     ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__45__Vfuncout);
                    }(), __Vtask_get_name__45__Vfuncout));
        }
        if ((VlNull{} == unnamedblk4__DOT__stream)) {
            this->__VnoInFunc_get_message_database(vlSymsp, __Vfunc_get_message_database__46__Vfuncout);
            unnamedblk4__DOT__unnamedblk5__DOT__db 
                = __Vfunc_get_message_database__46__Vfuncout;
            if ((VlNull{} == unnamedblk4__DOT__unnamedblk5__DOT__db)) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__47__Vfuncout);
                unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs 
                    = __Vfunc_get__47__Vfuncout;
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 636)->__VnoInFunc_get_default_tr_database(vlProcess, vlSymsp, __Vtask_get_default_tr_database__48__Vfuncout);
                unnamedblk4__DOT__unnamedblk5__DOT__db 
                    = __Vtask_get_default_tr_database__48__Vfuncout;
            }
            if ((VlNull{} != unnamedblk4__DOT__unnamedblk5__DOT__db)) {
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk5__DOT__db, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 640)->__VnoInFunc_open_stream(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                VL_NULL_CHECK(unnamedblk4__DOT__ro, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 640)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__50__Vfuncout);
                            }(), __Vtask_get_name__50__Vfuncout)), 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                VL_NULL_CHECK(unnamedblk4__DOT__rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 640)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__51__Vfuncout);
                            }(), __Vtask_get_name__51__Vfuncout)), "MESSAGES"s, __Vtask_open_stream__49__Vfuncout);
                unnamedblk4__DOT__stream = __Vtask_open_stream__49__Vfuncout;
                this->__PVT__m_streams.at(([&]() {
                            VL_NULL_CHECK(unnamedblk4__DOT__ro, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 642)
                                           ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__52__Vfuncout);
                        }(), __Vtask_get_name__52__Vfuncout)).at(
                                                                 ([&]() {
                            VL_NULL_CHECK(unnamedblk4__DOT__rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 642)
                                                                  ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__53__Vfuncout);
                        }(), __Vtask_get_name__53__Vfuncout)) 
                    = unnamedblk4__DOT__stream;
            }
        }
        if ((VlNull{} != unnamedblk4__DOT__stream)) {
            VL_NULL_CHECK(unnamedblk4__DOT__stream, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 646)->__VnoInFunc_open_recorder(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 646)
                                                                                ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__55__Vfuncout);
                        }(), __Vtask_get_name__55__Vfuncout)), 0ULL, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 646)
                                                                                ->__VnoInFunc_get_type_name(vlSymsp, __Vtask_get_type_name__56__Vfuncout);
                        }(), __Vtask_get_type_name__56__Vfuncout)), __Vtask_open_recorder__54__Vfuncout);
            unnamedblk4__DOT__unnamedblk7__DOT__recorder 
                = __Vtask_open_recorder__54__Vfuncout;
            if ((VlNull{} != unnamedblk4__DOT__unnamedblk7__DOT__recorder)) {
                VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 648)->__VnoInFunc_record(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk7__DOT__recorder);
                VL_NULL_CHECK(unnamedblk4__DOT__unnamedblk7__DOT__recorder, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 649)->__VnoInFunc_free(vlProcess, vlSymsp, 0ULL);
            }
        }
    }
    if (VL_UNLIKELY(((0U != (1U & ([&]() {
                                VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 655)
                                   ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__59__Vfuncout);
                            }(), __Vtask_get_action__59__Vfuncout)))))) {
        VL_WRITEF_NX("%@\n",0,-1,&(composed_message));
    }
    if ((0U != (2U & ([&]() {
                        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 662)
                      ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__60__Vfuncout);
                    }(), __Vtask_get_action__60__Vfuncout)))) {
        if (((0U == ([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 663)
                     ->__VnoInFunc_get_file(vlSymsp, __Vtask_get_file__61__Vfuncout);
                        }(), __Vtask_get_file__61__Vfuncout)) 
             || (0x80000001U != ([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 664)
                                 ->__VnoInFunc_get_file(vlSymsp, __Vtask_get_file__62__Vfuncout);
                        }(), __Vtask_get_file__62__Vfuncout)))) {
            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 665)->__VnoInFunc_get_file(vlSymsp, __Vtask_get_file__63__Vfuncout);
            unnamedblk8__DOT__tmp_file = __Vtask_get_file__63__Vfuncout;
            if ((0U == (0x80000000U & ([&]() {
                                VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 666)
                                       ->__VnoInFunc_get_file(vlSymsp, __Vtask_get_file__64__Vfuncout);
                            }(), __Vtask_get_file__64__Vfuncout)))) {
                unnamedblk8__DOT__tmp_file = (0xfffffffeU 
                                              & ([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 667)
                                                 ->__VnoInFunc_get_file(vlSymsp, __Vtask_get_file__65__Vfuncout);
                        }(), __Vtask_get_file__65__Vfuncout));
            }
            this->__VnoInFunc_f_display(vlSymsp, unnamedblk8__DOT__tmp_file, composed_message);
        }
    }
    if ((0U != (4U & ([&]() {
                        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 673)
                      ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__67__Vfuncout);
                    }(), __Vtask_get_action__67__Vfuncout)))) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_get_max_quit_count(vlSymsp, __Vfunc_get_max_quit_count__68__Vfuncout);
                    }(), __Vfunc_get_max_quit_count__68__Vfuncout))) {
            this->__VnoInFunc_incr_quit_count(vlSymsp);
            if (([&]() {
                        this->__VnoInFunc_is_quit_count_reached(vlSymsp, __Vfunc_is_quit_count_reached__70__Vfuncout);
                    }(), (IData)(__Vfunc_is_quit_count_reached__70__Vfuncout))) {
                VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 678)->__VnoInFunc_set_action(vlSymsp, 
                                                                                (8U 
                                                                                | ([&]() {
                                VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 678)
                                                                                ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__72__Vfuncout);
                            }(), __Vtask_get_action__72__Vfuncout)));
            }
        }
    }
    if ((0U != (8U & ([&]() {
                        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 684)
                      ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__73__Vfuncout);
                    }(), __Vtask_get_action__73__Vfuncout)))) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__74__Vfuncout);
        unnamedblk9__DOT__cs = __Vfunc_get__74__Vfuncout;
        VL_NULL_CHECK(unnamedblk9__DOT__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 688)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__75__Vfuncout);
        unnamedblk9__DOT__l_root = __Vtask_get_root__75__Vfuncout;
        VL_NULL_CHECK(unnamedblk9__DOT__l_root, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 689)->__VnoInFunc_die(vlProcess, vlSymsp);
    }
    if (VL_UNLIKELY(((0U != (0x00000020U & ([&]() {
                                VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 693)
                                            ->__VnoInFunc_get_action(vlSymsp, __Vtask_get_action__77__Vfuncout);
                            }(), __Vtask_get_action__77__Vfuncout)))))) {
        VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 694, "");
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_report_message(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message> report_message, std::string report_object_name, std::string &compose_report_message__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_compose_report_message\n"); );
    // Locals
    CData/*1:0*/ __Vtask_get_severity__78__Vfuncout;
    __Vtask_get_severity__78__Vfuncout = 0;
    std::string __Vtask_get_filename__79__Vfuncout;
    IData/*31:0*/ __Vtask_get_line__80__Vfuncout;
    __Vtask_get_line__80__Vfuncout = 0;
    std::string __Vtask_get_filename__81__Vfuncout;
    std::string __Vtask_get_context__82__Vfuncout;
    std::string __Vtask_get_context__83__Vfuncout;
    IData/*31:0*/ __Vtask_get_verbosity__84__Vfuncout;
    __Vtask_get_verbosity__84__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_verbosity__85__Vfuncout;
    __Vtask_get_verbosity__85__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_verbosity__86__Vfuncout;
    __Vtask_get_verbosity__86__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message_element_container> __Vtask_get_element_container__87__Vfuncout;
    IData/*31:0*/ __Vtask_size__88__Vfuncout;
    __Vtask_size__88__Vfuncout = 0;
    std::string __Vtask_get_message__89__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> __Vfunc_get_default__90__Vfuncout;
    std::string __Vtask_get_line_prefix__91__Vfuncout;
    std::string __Vtask_get_message__93__Vfuncout;
    std::string __Vtask_sprint__94__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> __Vtask_get_report_handler__96__Vfuncout;
    std::string __Vtask_get_full_name__97__Vfuncout;
    std::string __Vtask_get_id__98__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> unnamedblk10__DOT__uvm_default_printer;
    std::string sev_string;
    CData/*1:0*/ l_severity;
    l_severity = 0;
    IData/*31:0*/ l_verbosity;
    l_verbosity = 0;
    std::string filename_line_string;
    std::string time_str;
    std::string line_str;
    std::string context_str;
    std::string verbosity_str;
    std::string terminator_str;
    std::string msg_body_str;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_message_element_container> el_container;
    std::string prefix;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_report_handler> l_report_handler;
    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 782)->__VnoInFunc_get_severity(vlSymsp, __Vtask_get_severity__78__Vfuncout);
    l_severity = __Vtask_get_severity__78__Vfuncout;
    sev_string = Vdma___024unit::__Venumtab_enum_name9
        [l_severity];
    if ((""s != ([&]() {
                    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 785)
                 ->__VnoInFunc_get_filename(vlSymsp, __Vtask_get_filename__79__Vfuncout);
                }(), __Vtask_get_filename__79__Vfuncout))) {
        line_str = VL_SFORMATF_N_NX("%0d",0,32,([&]() {
                        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 786)
                                                ->__VnoInFunc_get_line(vlSymsp, __Vtask_get_line__80__Vfuncout);
                    }(), __Vtask_get_line__80__Vfuncout)) ;
        filename_line_string = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                             VL_CONCATN_NNN(
                                                                            ([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 787)
                                                                             ->__VnoInFunc_get_filename(vlSymsp, __Vtask_get_filename__81__Vfuncout);
                        }(), __Vtask_get_filename__81__Vfuncout), "("s), line_str), ") "s);
    }
    VL_SFORMAT_NX(64,time_str,"%0t",0,64,VL_TIME_UNITED_Q(1000),
                  -9);
    if ((""s != ([&]() {
                    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 793)
                 ->__VnoInFunc_get_context(vlSymsp, __Vtask_get_context__82__Vfuncout);
                }(), __Vtask_get_context__82__Vfuncout))) {
        context_str = VL_CONCATN_NNN("@@"s, ([&]() {
                    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 794)
                                             ->__VnoInFunc_get_context(vlSymsp, __Vtask_get_context__83__Vfuncout);
                }(), __Vtask_get_context__83__Vfuncout));
    }
    if (this->__PVT__show_verbosity) {
        if ((0U != (Vdma___024unit::__Venumtab_enum_valid13
                    .at(([&]() {
                                VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 797)
                         ->__VnoInFunc_get_verbosity(vlSymsp, __Vtask_get_verbosity__84__Vfuncout);
                            }(), __Vtask_get_verbosity__84__Vfuncout))
                     ? ([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 797)
                        ->__VnoInFunc_get_verbosity(vlSymsp, __Vtask_get_verbosity__85__Vfuncout);
                            l_verbosity = __Vtask_get_verbosity__85__Vfuncout;
                        }(), 1U) : 0U))) {
            verbosity_str = Vdma___024unit::__Venumtab_enum_name13
                .at(l_verbosity);
        } else {
            verbosity_str = VL_SFORMATF_N_NX("%0d",0,
                                             32,([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 800)
                                                 ->__VnoInFunc_get_verbosity(vlSymsp, __Vtask_get_verbosity__86__Vfuncout);
                        }(), __Vtask_get_verbosity__86__Vfuncout)) ;
        }
        verbosity_str = VL_CONCATN_NNN(VL_CONCATN_NNN("("s, verbosity_str), ")"s);
    }
    if (this->__PVT__show_terminator) {
        terminator_str = VL_CONCATN_NNN(" -"s, sev_string);
    }
    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 807)->__VnoInFunc_get_element_container(vlSymsp, __Vtask_get_element_container__87__Vfuncout);
    el_container = __Vtask_get_element_container__87__Vfuncout;
    if ((0U == ([&]() {
                    VL_NULL_CHECK(el_container, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 808)
                ->__VnoInFunc_size(vlSymsp, __Vtask_size__88__Vfuncout);
                }(), __Vtask_size__88__Vfuncout))) {
        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 809)->__VnoInFunc_get_message(vlSymsp, __Vtask_get_message__89__Vfuncout);
        msg_body_str = __Vtask_get_message__89__Vfuncout;
    } else {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_printer__Vclpkg.__VnoInFunc_get_default(vlProcess, vlSymsp, __Vfunc_get_default__90__Vfuncout);
        unnamedblk10__DOT__uvm_default_printer = __Vfunc_get_default__90__Vfuncout;
        VL_NULL_CHECK(unnamedblk10__DOT__uvm_default_printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 812)->__VnoInFunc_get_line_prefix(vlSymsp, __Vtask_get_line_prefix__91__Vfuncout);
        prefix = __Vtask_get_line_prefix__91__Vfuncout;
        VL_NULL_CHECK(unnamedblk10__DOT__uvm_default_printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 813)->__VnoInFunc_set_line_prefix(vlSymsp, " +"s);
        msg_body_str = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                     ([&]() {
                        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 814)
                                                      ->__VnoInFunc_get_message(vlSymsp, __Vtask_get_message__93__Vfuncout);
                    }(), __Vtask_get_message__93__Vfuncout), "\n"s), 
                                      ([&]() {
                    VL_NULL_CHECK(el_container, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 814)
                                       ->__VnoInFunc_sprint(vlProcess, vlSymsp, VlNull{}, __Vtask_sprint__94__Vfuncout);
                }(), __Vtask_sprint__94__Vfuncout));
        VL_NULL_CHECK(unnamedblk10__DOT__uvm_default_printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 815)->__VnoInFunc_set_line_prefix(vlSymsp, prefix);
    }
    if ((""s == report_object_name)) {
        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 819)->__VnoInFunc_get_report_handler(vlSymsp, __Vtask_get_report_handler__96__Vfuncout);
        l_report_handler = __Vtask_get_report_handler__96__Vfuncout;
        VL_NULL_CHECK(l_report_handler, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 820)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__97__Vfuncout);
        report_object_name = __Vtask_get_full_name__97__Vfuncout;
    }
    compose_report_message__Vfuncrtn = VL_CONCATN_NNN(
                                                      VL_CONCATN_NNN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(sev_string, verbosity_str), " "s), filename_line_string), "@ "s), time_str), ": "s), report_object_name), context_str), " ["s), 
                                                                                ([&]() {
                            VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh", 825)
                                                                                ->__VnoInFunc_get_id(vlSymsp, __Vtask_get_id__98__Vfuncout);
                        }(), __Vtask_get_id__98__Vfuncout)), "] "s), msg_body_str), terminator_str);
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_report_summarize(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_report_summarize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__100__Vfuncout;
    __Vfunc_uvm_report_enabled__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__100__verbosity;
    __Vfunc_uvm_report_enabled__100__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__100__severity;
    __Vfunc_uvm_report_enabled__100__severity = 0;
    std::string __Vfunc_uvm_report_enabled__100__id;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__103__Vfuncout;
    __Vtask_uvm_report_enabled__103__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__104__id;
    std::string __Vtask_uvm_report_info__104__message;
    IData/*31:0*/ __Vtask_uvm_report_info__104__verbosity;
    __Vtask_uvm_report_info__104__verbosity = 0;
    std::string __Vtask_uvm_report_info__104__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__104__line;
    __Vtask_uvm_report_info__104__line = 0;
    std::string __Vtask_uvm_report_info__104__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__104__report_enabled_checked;
    __Vtask_uvm_report_info__104__report_enabled_checked = 0;
    std::string __Vfunc_m_uvm_string_queue_join__105__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
    std::string __Vtemp_1;
    // Body
    CData/*1:0*/ unnamedblk11__DOT__s;
    unnamedblk11__DOT__s = 0;
    CData/*0:0*/ unnamedblk11__DOT__s__Vfirst;
    unnamedblk11__DOT__s__Vfirst = 0;
    std::string unnamedblk12__DOT__id;
    CData/*0:0*/ unnamedblk12__DOT__id__Vfirst;
    unnamedblk12__DOT__id__Vfirst = 0;
    std::string id;
    std::string name;
    std::string output_str;
    VlQueue<std::string> q;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_report_catcher__Vclpkg.__VnoInFunc_summarize(vlProcess, vlSymsp);
    q.push_back("\n--- UVM Report Summary ---\n\n"s);
    if ((0U != this->__PVT__m_max_quit_count)) {
        if (VL_GTES_III(32, this->__PVT__m_quit_count, this->__PVT__m_max_quit_count)) {
            q.push_back("Quit count reached!\n"s);
        }
        q.push_back(VL_SFORMATF_N_NX("Quit count : %5d of %5d\n",0,
                                     32,this->__PVT__m_quit_count,
                                     32,this->__PVT__m_max_quit_count) );
    }
    q.push_back("** Report counts by severity\n"s);
    if ((0U != this->__PVT__m_severity_count.first(unnamedblk11__DOT__s))) {
        unnamedblk11__DOT__s__Vfirst = 1U;
        while (((IData)(unnamedblk11__DOT__s__Vfirst) 
                || (0U != this->__PVT__m_severity_count.next(unnamedblk11__DOT__s)))) {
            unnamedblk11__DOT__s__Vfirst = 0U;
            __Vtemp_1 = Vdma___024unit::__Venumtab_enum_name9
                [unnamedblk11__DOT__s];
            q.push_back(VL_SFORMATF_N_NX("%@ :%5d\n",0,
                                         -1,&(__Vtemp_1),
                                         32,this->__PVT__m_severity_count
                                         .at((IData)(unnamedblk11__DOT__s))) );
        }
    }
    if (this->__PVT__enable_report_id_count_summary) {
        q.push_back("** Report counts by id\n"s);
        if ((0U != this->__PVT__m_id_count.first(unnamedblk12__DOT__id))) {
            unnamedblk12__DOT__id__Vfirst = 1U;
            while (((IData)(unnamedblk12__DOT__id__Vfirst) 
                    || (0U != this->__PVT__m_id_count.next(unnamedblk12__DOT__id)))) {
                unnamedblk12__DOT__id__Vfirst = 0U;
                q.push_back(VL_SFORMATF_N_NX("[%@] %5d\n",0,
                                             -1,&(unnamedblk12__DOT__id),
                                             32,this->__PVT__m_id_count
                                             .at(unnamedblk12__DOT__id)) );
            }
        }
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__100__id = "UVM/REPORT/SERVER"s;
                    __Vfunc_uvm_report_enabled__100__severity = 0U;
                    __Vfunc_uvm_report_enabled__100__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__101__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__102__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__100__verbosity, (IData)(__Vfunc_uvm_report_enabled__100__severity), __Vfunc_uvm_report_enabled__100__id, __Vtask_uvm_report_enabled__103__Vfuncout);
                    __Vfunc_uvm_report_enabled__100__Vfuncout 
                        = __Vtask_uvm_report_enabled__103__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__100__Vfuncout))) {
        __Vtask_uvm_report_info__104__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__104__context_name = ""s;
        __Vtask_uvm_report_info__104__line = 0x00000360U;
        __Vtask_uvm_report_info__104__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_report_server.svh"s;
        __Vtask_uvm_report_info__104__verbosity = 0U;
        __Vtask_uvm_report_info__104__message = VL_CVT_PACK_STR_NN(
                                                                   ([&]() {
                    __Vfunc_m_uvm_string_queue_join__105__Vfuncout 
                        = VL_CVT_PACK_STR_ND(q);
                }(), __Vfunc_m_uvm_string_queue_join__105__Vfuncout));
        __Vtask_uvm_report_info__104__id = "UVM/REPORT/SERVER"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__106__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__106__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__107__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__107__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__104__id, __Vtask_uvm_report_info__104__message, __Vtask_uvm_report_info__104__verbosity, __Vtask_uvm_report_info__104__filename, __Vtask_uvm_report_info__104__line, __Vtask_uvm_report_info__104__context_name, (IData)(__Vtask_uvm_report_info__104__report_enabled_checked));
    }
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__110__Vfuncout;
    __Vfunc___Vbasic_randomize__110__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__110__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__110__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_default_report_server::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_quit_count = 0;
    __PVT__m_max_quit_count = 0;
    __PVT__max_quit_overridable = 0;
    __PVT__m_severity_count.atDefault() = 0;
    __PVT__m_id_count.atDefault() = 0;
    __PVT__enable_report_id_count_summary = 0;
    __PVT__record_all_messages = 0;
    __PVT__show_verbosity = 0;
    __PVT__show_terminator = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_default_report_server>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_default_report_server::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_default_report_server::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_default_report_server::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_quit_count:" + VL_TO_STRING(__PVT__m_quit_count);
    out += ", m_max_quit_count:" + VL_TO_STRING(__PVT__m_max_quit_count);
    out += ", max_quit_overridable:" + VL_TO_STRING(__PVT__max_quit_overridable);
    out += ", m_severity_count:" + VL_TO_STRING(__PVT__m_severity_count);
    out += ", m_id_count:" + VL_TO_STRING(__PVT__m_id_count);
    out += ", m_message_db:" + VL_TO_STRING(__PVT__m_message_db);
    out += ", m_streams:" + VL_TO_STRING(__PVT__m_streams);
    out += ", enable_report_id_count_summary:" + VL_TO_STRING(__PVT__enable_report_id_count_summary);
    out += ", record_all_messages:" + VL_TO_STRING(__PVT__record_all_messages);
    out += ", show_verbosity:" + VL_TO_STRING(__PVT__show_verbosity);
    out += ", show_terminator:" + VL_TO_STRING(__PVT__show_terminator);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_report_server::to_string_middle();
    return (out);
}
