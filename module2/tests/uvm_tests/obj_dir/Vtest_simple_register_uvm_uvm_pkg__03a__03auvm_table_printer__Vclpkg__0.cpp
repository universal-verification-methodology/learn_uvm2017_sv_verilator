// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi171> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi171> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi171__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_table_printer"s;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_set_default(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    this->__PVT__m_default_table_printer = printer;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_default(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    if ((VlNull{} == this->__PVT__m_default_table_printer)) {
        this->__PVT__m_default_table_printer = VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, "uvm_default_table_printer"s);
    }
    get_default__Vfuncrtn = this->__PVT__m_default_table_printer;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi171> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi171__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_table_printer"s;
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_max_value = 5U;
    this->__PVT__m_max_size = 4U;
    this->__PVT__m_max_type = 4U;
    this->__PVT__m_max_name = 4U;
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_pop_element(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_pop_element\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer_element> __Vfunc_get_top_element__4__Vfuncout;
    IData/*31:0*/ __Vfunc_m_get_stack_size__5__Vfuncout;
    __Vfunc_m_get_stack_size__5__Vfuncout = 0;
    std::string __Vtask_get_element_name__6__Vfuncout;
    std::string __Vtask_get_element_type_name__7__Vfuncout;
    std::string __Vtask_get_element_size__8__Vfuncout;
    std::string __Vtask_get_element_value__9__Vfuncout;
    IData/*31:0*/ __Vfunc_get_indent__10__Vfuncout;
    __Vfunc_get_indent__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_indent__11__Vfuncout;
    __Vfunc_get_indent__11__Vfuncout = 0;
    // Body
    IData/*31:0*/ name_len;
    name_len = 0;
    IData/*31:0*/ level;
    level = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer_element> popped;
    std::string name_str;
    std::string type_name_str;
    std::string size_str;
    std::string value_str;
    this->__VnoInFunc_get_top_element(vlSymsp, __Vfunc_get_top_element__4__Vfuncout);
    popped = __Vfunc_get_top_element__4__Vfuncout;
    level = (([&]() {
                this->__VnoInFunc_m_get_stack_size(vlSymsp, __Vfunc_m_get_stack_size__5__Vfuncout);
            }(), __Vfunc_m_get_stack_size__5__Vfuncout) 
             - (IData)(1U));
    VL_NULL_CHECK(popped, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1489)->__VnoInFunc_get_element_name(vlSymsp, __Vtask_get_element_name__6__Vfuncout);
    name_str = __Vtask_get_element_name__6__Vfuncout;
    VL_NULL_CHECK(popped, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1490)->__VnoInFunc_get_element_type_name(vlSymsp, __Vtask_get_element_type_name__7__Vfuncout);
    type_name_str = __Vtask_get_element_type_name__7__Vfuncout;
    VL_NULL_CHECK(popped, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1491)->__VnoInFunc_get_element_size(vlSymsp, __Vtask_get_element_size__8__Vfuncout);
    size_str = __Vtask_get_element_size__8__Vfuncout;
    VL_NULL_CHECK(popped, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1492)->__VnoInFunc_get_element_value(vlSymsp, __Vtask_get_element_value__9__Vfuncout);
    value_str = __Vtask_get_element_value__9__Vfuncout;
    if (VL_GTS_III(32, (VL_LEN_IN(name_str) + VL_MULS_III(32, 
                                                          ([&]() {
                            this->__VnoInFunc_get_indent(vlSymsp, __Vfunc_get_indent__10__Vfuncout);
                        }(), __Vfunc_get_indent__10__Vfuncout), level)), this->__PVT__m_max_name)) {
        this->__PVT__m_max_name = (VL_LEN_IN(name_str) 
                                   + VL_MULS_III(32, 
                                                 ([&]() {
                        this->__VnoInFunc_get_indent(vlSymsp, __Vfunc_get_indent__11__Vfuncout);
                    }(), __Vfunc_get_indent__11__Vfuncout), level));
    }
    if (VL_GTS_III(32, VL_LEN_IN(type_name_str), this->__PVT__m_max_type)) {
        this->__PVT__m_max_type = VL_LEN_IN(type_name_str);
    }
    if (VL_GTS_III(32, VL_LEN_IN(size_str), this->__PVT__m_max_size)) {
        this->__PVT__m_max_size = VL_LEN_IN(size_str);
    }
    if (VL_GTS_III(32, VL_LEN_IN(value_str), this->__PVT__m_max_value)) {
        this->__PVT__m_max_value = VL_LEN_IN(value_str);
    }
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer::__VnoInFunc_pop_element(vlSymsp);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_emit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__Vfuncout;
    __Vfunc_uvm_report_enabled__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__13__verbosity;
    __Vfunc_uvm_report_enabled__13__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__13__severity;
    __Vfunc_uvm_report_enabled__13__severity = 0;
    std::string __Vfunc_uvm_report_enabled__13__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__14__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__15__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__18__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__19__Vfuncout;
    std::string __Vfunc_get_line_prefix__21__Vfuncout;
    CData/*0:0*/ __Vfunc_get_name_enabled__22__Vfuncout;
    __Vfunc_get_name_enabled__22__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_get_type_name_enabled__23__Vfuncout;
    __Vfunc_get_type_name_enabled__23__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_get_size_enabled__24__Vfuncout;
    __Vfunc_get_size_enabled__24__Vfuncout = 0;
    std::string __Vfunc_m_emit_element__25__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer_element> __Vfunc_get_bottom_element__26__Vfuncout;
    std::string __Vfunc_get_line_prefix__27__Vfuncout;
    // Body
    VlUnpacked<IData/*31:0*/, 5> unnamedblk44__DOT__q;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        unnamedblk44__DOT__q[__Vi0] = 0;
    }
    IData/*31:0*/ unnamedblk44__DOT__m;
    unnamedblk44__DOT__m = 0;
    VlQueue<IData/*31:0*/> unnamedblk44__DOT__qq;
    unnamedblk44__DOT__qq.atDefault() = 0;
    std::string unnamedblk45__DOT__header;
    std::string unnamedblk45__DOT__dash_id;
    std::string unnamedblk45__DOT__dash_typ;
    std::string unnamedblk45__DOT__dash_sz;
    std::string unnamedblk45__DOT__head_id;
    std::string unnamedblk45__DOT__head_typ;
    std::string unnamedblk45__DOT__head_sz;
    std::string s;
    std::string user_format;
    std::string dashes;
    std::string linefeed;
    if (Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed) {
        Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed = 0U;
    } else if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__13__id = "UVM/PRINT/NO_FLUSH"s;
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
        __Vtask_uvm_report_error__17__line = 0x000005ecU;
        __Vtask_uvm_report_error__17__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
        __Vtask_uvm_report_error__17__verbosity = 0U;
        __Vtask_uvm_report_error__17__message = "printer emit() method called twice without intervening uvm_printer::flush()"s;
        __Vtask_uvm_report_error__17__id = "UVM/PRINT/NO_FLUSH"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__18__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__18__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__19__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__19__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__17__id, __Vtask_uvm_report_error__17__message, __Vtask_uvm_report_error__17__verbosity, __Vtask_uvm_report_error__17__filename, __Vtask_uvm_report_error__17__line, __Vtask_uvm_report_error__17__context_name, (IData)(__Vtask_uvm_report_error__17__report_enabled_checked));
    }
    linefeed = VL_CONCATN_NNN("\n"s, ([&]() {
                this->__VnoInFunc_get_line_prefix(vlSymsp, __Vfunc_get_line_prefix__21__Vfuncout);
            }(), __Vfunc_get_line_prefix__21__Vfuncout));
    unnamedblk44__DOT__q[0U] = this->__PVT__m_max_name;
    unnamedblk44__DOT__q[1U] = this->__PVT__m_max_type;
    unnamedblk44__DOT__q[2U] = this->__PVT__m_max_size;
    unnamedblk44__DOT__q[3U] = this->__PVT__m_max_value;
    unnamedblk44__DOT__q[4U] = 0x00000064U;
    unnamedblk44__DOT__qq = unnamedblk44__DOT__q.max();
    unnamedblk44__DOT__m = unnamedblk44__DOT__qq.at(0U);
    if (VL_LTS_III(32, VL_LEN_IN(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash), unnamedblk44__DOT__m)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash 
            = VL_REPLICATEN_NNI("-"s, unnamedblk44__DOT__m);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space 
            = VL_REPLICATEN_NNI(" "s, unnamedblk44__DOT__m);
    }
    if (([&]() {
                this->__VnoInFunc_get_name_enabled(vlSymsp, __Vfunc_get_name_enabled__22__Vfuncout);
            }(), (IData)(__Vfunc_get_name_enabled__22__Vfuncout))) {
        dashes = VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,
                             ((IData)(2U) + this->__PVT__m_max_name));
        unnamedblk45__DOT__header = VL_CONCATN_NNN("Name"s, 
                                                   VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                               (this->__PVT__m_max_name 
                                                                - (IData)(2U))));
    }
    if (([&]() {
                this->__VnoInFunc_get_type_name_enabled(vlSymsp, __Vfunc_get_type_name_enabled__23__Vfuncout);
            }(), (IData)(__Vfunc_get_type_name_enabled__23__Vfuncout))) {
        dashes = VL_CONCATN_NNN(dashes, VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,
                                                    ((IData)(2U) 
                                                     + this->__PVT__m_max_type)));
        unnamedblk45__DOT__header = VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(unnamedblk45__DOT__header, "Type"s), 
                                                   VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                               (this->__PVT__m_max_type 
                                                                - (IData)(2U))));
    }
    if (([&]() {
                this->__VnoInFunc_get_size_enabled(vlSymsp, __Vfunc_get_size_enabled__24__Vfuncout);
            }(), (IData)(__Vfunc_get_size_enabled__24__Vfuncout))) {
        dashes = VL_CONCATN_NNN(dashes, VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,
                                                    ((IData)(2U) 
                                                     + this->__PVT__m_max_size)));
        unnamedblk45__DOT__header = VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(unnamedblk45__DOT__header, "Size"s), 
                                                   VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                               (this->__PVT__m_max_size 
                                                                - (IData)(2U))));
    }
    dashes = VL_CONCATN_NNN(VL_CONCATN_NNN(dashes, 
                                           VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__emit__Vstatic__dash,1U,this->__PVT__m_max_value)), linefeed);
    unnamedblk45__DOT__header = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(unnamedblk45__DOT__header, "Value"s), 
                                                              VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                                          (this->__PVT__m_max_value 
                                                                           - (IData)(5U)))), linefeed);
    s = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(s, dashes), unnamedblk45__DOT__header), dashes);
    s = VL_CONCATN_NNN(s, ([&]() {
                this->__VnoInFunc_m_emit_element(vlSymsp, 
                                                 ([&]() {
                            this->__VnoInFunc_get_bottom_element(vlSymsp, __Vfunc_get_bottom_element__26__Vfuncout);
                        }(), __Vfunc_get_bottom_element__26__Vfuncout), 0U, __Vfunc_m_emit_element__25__Vfuncout);
            }(), __Vfunc_m_emit_element__25__Vfuncout));
    s = VL_CONCATN_NNN(s, dashes);
    emit__Vfuncrtn = VL_CONCATN_NNN(([&]() {
                this->__VnoInFunc_get_line_prefix(vlSymsp, __Vfunc_get_line_prefix__27__Vfuncout);
            }(), __Vfunc_get_line_prefix__27__Vfuncout), s);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_m_emit_element(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer_element> element, IData/*31:0*/ level, std::string &m_emit_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_m_emit_element\n"); );
    // Locals
    std::string __Vfunc_get_line_prefix__28__Vfuncout;
    std::string __Vtask_get_element_name__29__Vfuncout;
    std::string __Vtask_get_element_value__30__Vfuncout;
    std::string __Vtask_get_element_type_name__31__Vfuncout;
    std::string __Vtask_get_element_size__32__Vfuncout;
    CData/*0:0*/ __Vfunc_get_name_enabled__33__Vfuncout;
    __Vfunc_get_name_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_indent__34__Vfuncout;
    __Vfunc_get_indent__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_indent__35__Vfuncout;
    __Vfunc_get_indent__35__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_get_type_name_enabled__36__Vfuncout;
    __Vfunc_get_type_name_enabled__36__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_get_size_enabled__37__Vfuncout;
    __Vfunc_get_size_enabled__37__Vfuncout = 0;
    std::string __Vfunc_m_emit_element__39__Vfuncout;
    // Body
    std::string unnamedblk46__DOT__row_str;
    std::string unnamedblk46__DOT__name_str;
    std::string unnamedblk46__DOT__value_str;
    std::string unnamedblk46__DOT__type_name_str;
    std::string unnamedblk46__DOT__size_str;
    IData/*31:0*/ unnamedblk47__DOT__i;
    unnamedblk47__DOT__i = 0;
    std::string result;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer_element>> element_children;
    std::string linefeed;
    linefeed = VL_CONCATN_NNN("\n"s, ([&]() {
                this->__VnoInFunc_get_line_prefix(vlSymsp, __Vfunc_get_line_prefix__28__Vfuncout);
            }(), __Vfunc_get_line_prefix__28__Vfuncout));
    VL_NULL_CHECK(element, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1614)->__VnoInFunc_get_element_name(vlSymsp, __Vtask_get_element_name__29__Vfuncout);
    unnamedblk46__DOT__name_str = __Vtask_get_element_name__29__Vfuncout;
    VL_NULL_CHECK(element, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1615)->__VnoInFunc_get_element_value(vlSymsp, __Vtask_get_element_value__30__Vfuncout);
    unnamedblk46__DOT__value_str = __Vtask_get_element_value__30__Vfuncout;
    VL_NULL_CHECK(element, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1616)->__VnoInFunc_get_element_type_name(vlSymsp, __Vtask_get_element_type_name__31__Vfuncout);
    unnamedblk46__DOT__type_name_str = __Vtask_get_element_type_name__31__Vfuncout;
    VL_NULL_CHECK(element, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1617)->__VnoInFunc_get_element_size(vlSymsp, __Vtask_get_element_size__32__Vfuncout);
    unnamedblk46__DOT__size_str = __Vtask_get_element_size__32__Vfuncout;
    if (([&]() {
                this->__VnoInFunc_get_name_enabled(vlSymsp, __Vfunc_get_name_enabled__33__Vfuncout);
            }(), (IData)(__Vfunc_get_name_enabled__33__Vfuncout))) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(result, 
                                                              VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                                          (level 
                                                                           * 
                                                                           ([&]() {
                                    this->__VnoInFunc_get_indent(vlSymsp, __Vfunc_get_indent__34__Vfuncout);
                                }(), __Vfunc_get_indent__34__Vfuncout)))), unnamedblk46__DOT__name_str), 
                                VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                            ((IData)(2U) 
                                             + ((this->__PVT__m_max_name 
                                                 - 
                                                 VL_LEN_IN(unnamedblk46__DOT__name_str)) 
                                                - (level 
                                                   * 
                                                   ([&]() {
                                    this->__VnoInFunc_get_indent(vlSymsp, __Vfunc_get_indent__35__Vfuncout);
                                }(), __Vfunc_get_indent__35__Vfuncout))))));
    }
    if (([&]() {
                this->__VnoInFunc_get_type_name_enabled(vlSymsp, __Vfunc_get_type_name_enabled__36__Vfuncout);
            }(), (IData)(__Vfunc_get_type_name_enabled__36__Vfuncout))) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk46__DOT__type_name_str), 
                                VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                            ((IData)(2U) 
                                             + (this->__PVT__m_max_type 
                                                - VL_LEN_IN(unnamedblk46__DOT__type_name_str)))));
    }
    if (([&]() {
                this->__VnoInFunc_get_size_enabled(vlSymsp, __Vfunc_get_size_enabled__37__Vfuncout);
            }(), (IData)(__Vfunc_get_size_enabled__37__Vfuncout))) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk46__DOT__size_str), 
                                VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                            ((IData)(2U) 
                                             + (this->__PVT__m_max_size 
                                                - VL_LEN_IN(unnamedblk46__DOT__size_str)))));
    }
    result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                          VL_CONCATN_NNN(result, unnamedblk46__DOT__row_str), unnamedblk46__DOT__value_str), 
                                           VL_SUBSTR_N(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_space,1U,
                                                       (this->__PVT__m_max_value 
                                                        - 
                                                        VL_LEN_IN(unnamedblk46__DOT__value_str)))), linefeed);
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_table_printer__Vclpkg.__PVT__m_emit_element__Vstatic__proxy, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1627)->__VnoInFunc_get_immediate_children(vlSymsp, element, element_children);
    unnamedblk47__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk47__DOT__i, element_children.size())) {
        result = VL_CONCATN_NNN(result, ([&]() {
                    this->__VnoInFunc_m_emit_element(vlSymsp, element_children.at(unnamedblk47__DOT__i), 
                                                     ((IData)(1U) 
                                                      + level), __Vfunc_m_emit_element__39__Vfuncout);
                }(), __Vfunc_m_emit_element__39__Vfuncout));
        unnamedblk47__DOT__i = ((IData)(1U) + unnamedblk47__DOT__i);
    }
    m_emit_element__Vfuncrtn = result;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_set_indent(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ indent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_set_indent\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_printer_knobs> __Vfunc_get_knobs__40__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, __Vfunc_get_knobs__40__Vfuncout);
    _knobs = __Vfunc_get_knobs__40__Vfuncout;
    VL_NULL_CHECK(_knobs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1818)->__PVT__indent 
        = indent;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_indent(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_indent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_get_indent\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_printer_knobs> __Vfunc_get_knobs__41__Vfuncout;
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, __Vfunc_get_knobs__41__Vfuncout);
    _knobs = __Vfunc_get_knobs__41__Vfuncout;
    get_indent__Vfuncrtn = VL_NULL_CHECK(_knobs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1822)
        ->__PVT__indent;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_flush\n"); );
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush(vlProcess, vlSymsp);
    this->__PVT__m_max_name = 4U;
    this->__PVT__m_max_type = 4U;
    this->__PVT__m_max_size = 4U;
    this->__PVT__m_max_value = 5U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__44__Vfuncout;
    __Vfunc___Vbasic_randomize__44__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__44__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__44__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_max_name = 0;
    __PVT__m_max_type = 0;
    __PVT__m_max_size = 0;
    __PVT__m_max_value = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_table_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_max_name:" + VL_TO_STRING(__PVT__m_max_name);
    out += ", m_max_type:" + VL_TO_STRING(__PVT__m_max_type);
    out += ", m_max_size:" + VL_TO_STRING(__PVT__m_max_size);
    out += ", m_max_value:" + VL_TO_STRING(__PVT__m_max_value);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer::to_string_middle();
    return (out);
}
