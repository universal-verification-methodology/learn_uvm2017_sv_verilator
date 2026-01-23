// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpools_top.h for the primary calling header

#include "Vpools_top__pch.h"

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi20> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi20> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi20__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_tree_printer"s;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_set_default(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tree_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    this->__PVT__m_default_tree_printer = printer;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_get_default(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tree_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vpools_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_default_tree_printer)) {
        this->__PVT__m_default_tree_printer = VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, "uvm_default_tree_printer"s);
    }
    get_default__Vfuncrtn = this->__PVT__m_default_tree_printer;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi20> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi20__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tree_printer> tmp;
    tmp = ((""s == name) ? VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vpools_top_uvm_pkg__03a__03auvm_tree_printer, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_tree_printer"s;
}

Vpools_top_uvm_pkg__03a__03auvm_tree_printer::Vpools_top_uvm_pkg__03a__03auvm_tree_printer(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name)
    : Vpools_top_uvm_pkg__03a__03auvm_printer(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_newline = "\n"s;
    ;
    this->__VnoInFunc_set_size_enabled(vlSymsp, 0U);
    this->__VnoInFunc_set_type_name_enabled(vlSymsp, 0U);
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_indent(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ indent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_indent\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs> __Vfunc_get_knobs__6__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, __Vfunc_get_knobs__6__Vfuncout);
    _knobs = __Vfunc_get_knobs__6__Vfuncout;
    VL_NULL_CHECK(_knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1656)->__PVT__indent 
        = indent;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_indent(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_indent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_indent\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs> __Vfunc_get_knobs__7__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, __Vfunc_get_knobs__7__Vfuncout);
    _knobs = __Vfunc_get_knobs__7__Vfuncout;
    get_indent__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1660)
        ->__PVT__indent;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_separators(Vpools_top__Syms* __restrict vlSymsp, std::string separators) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_set_separators\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs> __Vfunc_get_knobs__8__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, __Vfunc_get_knobs__8__Vfuncout);
    _knobs = __Vfunc_get_knobs__8__Vfuncout;
    VL_NULL_CHECK(_knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1665)->__PVT__separator 
        = separators;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_separators(Vpools_top__Syms* __restrict vlSymsp, std::string &get_separators__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_get_separators\n"); );
    // Locals
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs> __Vfunc_get_knobs__9__Vfuncout;
    // Body
    VlClassRef<Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, __Vfunc_get_knobs__9__Vfuncout);
    _knobs = __Vfunc_get_knobs__9__Vfuncout;
    get_separators__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1669)
        ->__PVT__separator;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_flush\n"); );
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_printer::__VnoInFunc_flush(vlProcess, vlSymsp);
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_emit\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__Vfuncout;
    __Vfunc_uvm_report_enabled__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__11__verbosity;
    __Vfunc_uvm_report_enabled__11__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__11__severity;
    __Vfunc_uvm_report_enabled__11__severity = 0;
    std::string __Vfunc_uvm_report_enabled__11__id;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__13__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__14__Vfuncout;
    __Vtask_uvm_report_enabled__14__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__15__id;
    std::string __Vtask_uvm_report_error__15__message;
    IData/*31:0*/ __Vtask_uvm_report_error__15__verbosity;
    __Vtask_uvm_report_error__15__verbosity = 0;
    std::string __Vtask_uvm_report_error__15__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__15__line;
    __Vtask_uvm_report_error__15__line = 0;
    std::string __Vtask_uvm_report_error__15__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__15__report_enabled_checked;
    __Vtask_uvm_report_error__15__report_enabled_checked = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__16__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__17__Vfuncout;
    std::string __Vfunc_get_line_prefix__19__Vfuncout;
    std::string __Vfunc_get_line_prefix__20__Vfuncout;
    std::string __Vfunc_m_emit_element__21__Vfuncout;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element> __Vfunc_get_bottom_element__22__Vfuncout;
    // Body
    std::string s;
    std::string user_format;
    IData/*31:0*/ level;
    level = 0;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element> element;
    if (Vpools_top_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed) {
        Vpools_top_uvm_pkg__03a__03auvm_printer::__PVT__m_flushed = 0U;
    } else if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__11__id = "UVM/PRINT/NO_FLUSH"s;
                    __Vfunc_uvm_report_enabled__11__severity = 2U;
                    __Vfunc_uvm_report_enabled__11__verbosity = 0U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__12__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                       ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__13__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__13__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                       ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__11__verbosity, (IData)(__Vfunc_uvm_report_enabled__11__severity), __Vfunc_uvm_report_enabled__11__id, __Vtask_uvm_report_enabled__14__Vfuncout);
                    __Vfunc_uvm_report_enabled__11__Vfuncout 
                        = __Vtask_uvm_report_enabled__14__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__11__Vfuncout))) {
        __Vtask_uvm_report_error__15__report_enabled_checked = 1U;
        __Vtask_uvm_report_error__15__context_name = ""s;
        __Vtask_uvm_report_error__15__line = 0x00000699U;
        __Vtask_uvm_report_error__15__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
        __Vtask_uvm_report_error__15__verbosity = 0U;
        __Vtask_uvm_report_error__15__message = "printer emit() method called twice without intervening uvm_printer::flush()"s;
        __Vtask_uvm_report_error__15__id = "UVM/PRINT/NO_FLUSH"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__16__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__16__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__17__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__17__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__15__id, __Vtask_uvm_report_error__15__message, __Vtask_uvm_report_error__15__verbosity, __Vtask_uvm_report_error__15__filename, __Vtask_uvm_report_error__15__line, __Vtask_uvm_report_error__15__context_name, (IData)(__Vtask_uvm_report_error__15__report_enabled_checked));
    }
    this->__VnoInFunc_get_line_prefix(vlSymsp, __Vfunc_get_line_prefix__19__Vfuncout);
    s = __Vfunc_get_line_prefix__19__Vfuncout;
    this->__PVT__m_linefeed = (((""s == this->__PVT__m_newline) 
                                | (" "s == this->__PVT__m_newline))
                                ? this->__PVT__m_newline
                                : VL_CONCATN_NNN(this->__PVT__m_newline, 
                                                 ([&]() {
                    this->__VnoInFunc_get_line_prefix(vlSymsp, __Vfunc_get_line_prefix__20__Vfuncout);
                }(), __Vfunc_get_line_prefix__20__Vfuncout)));
    s = VL_CONCATN_NNN(s, ([&]() {
                this->__VnoInFunc_m_emit_element(vlSymsp, 
                                                 ([&]() {
                            this->__VnoInFunc_get_bottom_element(vlSymsp, __Vfunc_get_bottom_element__22__Vfuncout);
                        }(), __Vfunc_get_bottom_element__22__Vfuncout), 0U, __Vfunc_m_emit_element__21__Vfuncout);
            }(), __Vfunc_m_emit_element__21__Vfuncout));
    if (((""s == this->__PVT__m_newline) | (" "s == this->__PVT__m_newline))) {
        s = VL_CONCATN_NNN(s, "\n"s);
    }
    emit__Vfuncrtn = s;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_m_emit_element(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element> element, IData/*31:0*/ level, std::string &m_emit_element__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_m_emit_element\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_indent__23__Vfuncout;
    __Vfunc_get_indent__23__Vfuncout = 0;
    std::string __Vfunc_get_separators__24__Vfuncout;
    CData/*0:0*/ __Vfunc_get_name_enabled__26__Vfuncout;
    __Vfunc_get_name_enabled__26__Vfuncout = 0;
    std::string __Vtask_get_element_name__27__Vfuncout;
    std::string __Vtask_get_element_name__28__Vfuncout;
    std::string __Vtask_get_element_name__29__Vfuncout;
    std::string __Vtask_get_element_value__30__Vfuncout;
    std::string __Vtask_get_element_type_name__31__Vfuncout;
    CData/*0:0*/ __Vfunc_get_type_name_enabled__32__Vfuncout;
    __Vfunc_get_type_name_enabled__32__Vfuncout = 0;
    std::string __Vtask_get_element_type_name__33__Vfuncout;
    std::string __Vtask_get_element_type_name__34__Vfuncout;
    std::string __Vtask_get_element_type_name__35__Vfuncout;
    std::string __Vtask_get_element_type_name__36__Vfuncout;
    CData/*0:0*/ __Vfunc_get_size_enabled__37__Vfuncout;
    __Vfunc_get_size_enabled__37__Vfuncout = 0;
    std::string __Vtask_get_element_size__38__Vfuncout;
    std::string __Vtask_get_element_size__39__Vfuncout;
    std::string __Vtask_get_element_size__40__Vfuncout;
    std::string __Vfunc_m_emit_element__41__Vfuncout;
    // Body
    std::string unnamedblk48__DOT__indent_str;
    std::string unnamedblk48__DOT__separators;
    std::string unnamedblk48__DOT__value_str;
    IData/*31:0*/ unnamedblk48__DOT__unnamedblk49__DOT__i;
    unnamedblk48__DOT__unnamedblk49__DOT__i = 0;
    std::string result;
    std::string space;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element>> element_children;
    space = "                                                                                                   "s;
    unnamedblk48__DOT__indent_str = VL_SUBSTR_N(space,1U,
                                                (level 
                                                 * 
                                                 ([&]() {
                    this->__VnoInFunc_get_indent(vlSymsp, __Vfunc_get_indent__23__Vfuncout);
                }(), __Vfunc_get_indent__23__Vfuncout)));
    this->__VnoInFunc_get_separators(vlSymsp, __Vfunc_get_separators__24__Vfuncout);
    unnamedblk48__DOT__separators = __Vfunc_get_separators__24__Vfuncout;
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_tree_printer__Vclpkg.__PVT__m_emit_element__Vstatic__proxy, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1751)->__VnoInFunc_get_immediate_children(vlSymsp, element, element_children);
    if (([&]() {
                this->__VnoInFunc_get_name_enabled(vlSymsp, __Vfunc_get_name_enabled__26__Vfuncout);
            }(), (IData)(__Vfunc_get_name_enabled__26__Vfuncout))) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk48__DOT__indent_str), 
                                ([&]() {
                    VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1755)
                                 ->__VnoInFunc_get_element_name(vlSymsp, __Vtask_get_element_name__27__Vfuncout);
                }(), __Vtask_get_element_name__27__Vfuncout));
        if (((""s != ([&]() {
                            VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1756)
                      ->__VnoInFunc_get_element_name(vlSymsp, __Vtask_get_element_name__28__Vfuncout);
                        }(), __Vtask_get_element_name__28__Vfuncout)) 
             && ("..."s != ([&]() {
                            VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1756)
                            ->__VnoInFunc_get_element_name(vlSymsp, __Vtask_get_element_name__29__Vfuncout);
                        }(), __Vtask_get_element_name__29__Vfuncout)))) {
            result = VL_CONCATN_NNN(result, ": "s);
        }
    }
    VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1761)->__VnoInFunc_get_element_value(vlSymsp, __Vtask_get_element_value__30__Vfuncout);
    unnamedblk48__DOT__value_str = __Vtask_get_element_value__30__Vfuncout;
    if ((VL_LTS_III(32, 0U, VL_LEN_IN(unnamedblk48__DOT__value_str)) 
         & (0x40U == VL_GETC_N(unnamedblk48__DOT__value_str,0U)))) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                              VL_CONCATN_NNN(result, "("s), 
                                                              ([&]() {
                            VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1763)
                                                               ->__VnoInFunc_get_element_type_name(vlSymsp, __Vtask_get_element_type_name__31__Vfuncout);
                        }(), __Vtask_get_element_type_name__31__Vfuncout)), unnamedblk48__DOT__value_str), ") "s);
    } else if ((([&]() {
                    this->__VnoInFunc_get_type_name_enabled(vlSymsp, __Vfunc_get_type_name_enabled__32__Vfuncout);
                }(), (IData)(__Vfunc_get_type_name_enabled__32__Vfuncout)) 
                && (((""s != ([&]() {
                                VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1766)
                              ->__VnoInFunc_get_element_type_name(vlSymsp, __Vtask_get_element_type_name__33__Vfuncout);
                            }(), __Vtask_get_element_type_name__33__Vfuncout)) 
                     || ("-"s != ([&]() {
                                VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1767)
                                  ->__VnoInFunc_get_element_type_name(vlSymsp, __Vtask_get_element_type_name__34__Vfuncout);
                            }(), __Vtask_get_element_type_name__34__Vfuncout))) 
                    || ("..."s != ([&]() {
                            VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1768)
                                   ->__VnoInFunc_get_element_type_name(vlSymsp, __Vtask_get_element_type_name__35__Vfuncout);
                        }(), __Vtask_get_element_type_name__35__Vfuncout))))) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(result, "("s), 
                                               ([&]() {
                        VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1769)
                                                ->__VnoInFunc_get_element_type_name(vlSymsp, __Vtask_get_element_type_name__36__Vfuncout);
                    }(), __Vtask_get_element_type_name__36__Vfuncout)), ") "s);
    }
    if (([&]() {
                this->__VnoInFunc_get_size_enabled(vlSymsp, __Vfunc_get_size_enabled__37__Vfuncout);
            }(), (IData)(__Vfunc_get_size_enabled__37__Vfuncout))) {
        if (((""s != ([&]() {
                            VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1773)
                      ->__VnoInFunc_get_element_size(vlSymsp, __Vtask_get_element_size__38__Vfuncout);
                        }(), __Vtask_get_element_size__38__Vfuncout)) 
             || ("-"s != ([&]() {
                            VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1773)
                          ->__VnoInFunc_get_element_size(vlSymsp, __Vtask_get_element_size__39__Vfuncout);
                        }(), __Vtask_get_element_size__39__Vfuncout)))) {
            result = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                   VL_CONCATN_NNN(result, "("s), 
                                                   ([&]() {
                            VL_NULL_CHECK(element, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1774)
                                                    ->__VnoInFunc_get_element_size(vlSymsp, __Vtask_get_element_size__40__Vfuncout);
                        }(), __Vtask_get_element_size__40__Vfuncout)), ") "s);
        }
    }
    unnamedblk48__DOT__unnamedblk49__DOT__i = 0U;
    result = (VL_LTS_III(32, 0U, element_children.size())
               ? VL_CONCATN_NNN(VL_CONCATN_NNN(result, 
                                               VL_CVT_PACK_STR_NI(
                                                                  VL_GETC_N(unnamedblk48__DOT__separators,0U))), this->__PVT__m_linefeed)
               : VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk48__DOT__value_str), " "s), this->__PVT__m_linefeed));
    while (VL_LTS_III(32, unnamedblk48__DOT__unnamedblk49__DOT__i, element_children.size())) {
        result = VL_CONCATN_NNN(result, ([&]() {
                    this->__VnoInFunc_m_emit_element(vlSymsp, element_children.at(unnamedblk48__DOT__unnamedblk49__DOT__i), 
                                                     ((IData)(1U) 
                                                      + level), __Vfunc_m_emit_element__41__Vfuncout);
                }(), __Vfunc_m_emit_element__41__Vfuncout));
        unnamedblk48__DOT__unnamedblk49__DOT__i = ((IData)(1U) 
                                                   + unnamedblk48__DOT__unnamedblk49__DOT__i);
    }
    if (VL_LTS_III(32, 0U, element_children.size())) {
        result = VL_CONCATN_NNN(VL_CONCATN_NNN(VL_CONCATN_NNN(result, unnamedblk48__DOT__indent_str), 
                                               VL_CVT_PACK_STR_NI(
                                                                  VL_GETC_N(unnamedblk48__DOT__separators,1U))), this->__PVT__m_linefeed);
    }
    m_emit_element__Vfuncrtn = result;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__43__Vfuncout;
    __Vfunc___VBasicRand__43__Vfuncout = 0;
    // Body
    Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vpools_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__43__Vfuncout);
            }(), __Vfunc___VBasicRand__43__Vfuncout));
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vpools_top_uvm_pkg__03a__03auvm_tree_printer::_ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vpools_top_uvm_pkg__03a__03auvm_tree_printer::~Vpools_top_uvm_pkg__03a__03auvm_tree_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_tree_printer>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_tree_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vpools_top_uvm_pkg__03a__03auvm_tree_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vpools_top_uvm_pkg__03a__03auvm_tree_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_newline:" + VL_TO_STRING(__PVT__m_newline);
    out += ", m_linefeed:" + VL_TO_STRING(__PVT__m_linefeed);
    out += ", "+ Vpools_top_uvm_pkg__03a__03auvm_printer::to_string_middle();
    return (out);
}
