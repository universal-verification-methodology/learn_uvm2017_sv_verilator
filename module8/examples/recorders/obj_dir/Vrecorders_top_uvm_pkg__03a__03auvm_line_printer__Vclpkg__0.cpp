// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi140> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi140> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi140__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_line_printer"s;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_set_default(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_line_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_set_default\n"); );
    // Body
    this->__PVT__m_default_line_printer = printer;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_get_default(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_line_printer> &get_default__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg::__VnoInFunc_get_default\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == this->__PVT__m_default_line_printer)) {
        this->__PVT__m_default_line_printer = VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_line_printer, vlProcess, vlSymsp, "uvm_default_line_printer"s);
    }
    get_default__Vfuncrtn = this->__PVT__m_default_line_printer;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi140> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi140__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_line_printer> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_line_printer, vlProcess, vlSymsp, ""s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_line_printer, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_line_printer"s;
}

Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::Vrecorders_top_uvm_pkg__03a__03auvm_line_printer(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer::__PVT__m_newline = " "s;
    this->__VnoInFunc_set_indent(vlSymsp, 0U);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_set_separators(Vrecorders_top__Syms* __restrict vlSymsp, std::string separators) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_set_separators\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03am_uvm_printer_knobs> __Vfunc_get_knobs__5__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__verbosity;
    __Vfunc_uvm_report_enabled__6__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__6__severity;
    __Vfunc_uvm_report_enabled__6__severity = 0;
    std::string __Vfunc_uvm_report_enabled__6__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__7__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__8__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__9__Vfuncout;
    __Vtask_uvm_report_enabled__9__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__10__id;
    std::string __Vtask_uvm_report_error__10__message;
    IData/*31:0*/ __Vtask_uvm_report_error__10__verbosity;
    __Vtask_uvm_report_error__10__verbosity = 0;
    std::string __Vtask_uvm_report_error__10__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__10__line;
    __Vtask_uvm_report_error__10__line = 0;
    std::string __Vtask_uvm_report_error__10__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__10__report_enabled_checked;
    __Vtask_uvm_report_error__10__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__12__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, __Vfunc_get_knobs__5__Vfuncout);
    _knobs = __Vfunc_get_knobs__5__Vfuncout;
    if (VL_GTS_III(32, 2U, VL_LEN_IN(separators))) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__6__id = "UVM/PRINT/SHORT_SEP"s;
                        __Vfunc_uvm_report_enabled__6__severity = 2U;
                        __Vfunc_uvm_report_enabled__6__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__7__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__7__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__8__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__8__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__6__verbosity, (IData)(__Vfunc_uvm_report_enabled__6__severity), __Vfunc_uvm_report_enabled__6__id, __Vtask_uvm_report_enabled__9__Vfuncout);
                        __Vfunc_uvm_report_enabled__6__Vfuncout 
                            = __Vtask_uvm_report_enabled__9__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
            __Vtask_uvm_report_error__10__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__10__context_name = ""s;
            __Vtask_uvm_report_error__10__line = 0x00000760U;
            __Vtask_uvm_report_error__10__filename = "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh"s;
            __Vtask_uvm_report_error__10__verbosity = 0U;
            __Vtask_uvm_report_error__10__message = VL_SFORMATF_N_NX("Bad call: set_separators(%@) (Argument must have at least 2 characters)",0,
                                                                     -1,
                                                                     &(separators)) ;
            __Vtask_uvm_report_error__10__id = "UVM/PRINT/SHORT_SEP"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__11__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__12__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__12__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__10__id, __Vtask_uvm_report_error__10__message, __Vtask_uvm_report_error__10__verbosity, __Vtask_uvm_report_error__10__filename, __Vtask_uvm_report_error__10__line, __Vtask_uvm_report_error__10__context_name, (IData)(__Vtask_uvm_report_error__10__report_enabled_checked));
        }
    }
    VL_NULL_CHECK(_knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1890)->__PVT__separator 
        = separators;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_separators(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_separators__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_get_separators\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03am_uvm_printer_knobs> __Vfunc_get_knobs__14__Vfuncout;
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03am_uvm_printer_knobs> _knobs;
    this->__VnoInFunc_get_knobs(vlSymsp, __Vfunc_get_knobs__14__Vfuncout);
    _knobs = __Vfunc_get_knobs__14__Vfuncout;
    get_separators__Vfuncrtn = VL_NULL_CHECK(_knobs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_printer.svh", 1894)
        ->__PVT__separator;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_flush(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_flush\n"); );
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer::__VnoInFunc_flush(vlProcess, vlSymsp);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__17__Vfuncout;
    __Vfunc___VBasicRand__17__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__17__Vfuncout);
            }(), __Vfunc___VBasicRand__17__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::~Vrecorders_top_uvm_pkg__03a__03auvm_line_printer() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_line_printer>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vrecorders_top_uvm_pkg__03a__03auvm_line_printer::to_string_middle\n"); );
    // Body
    std::string out;
    out += Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer::to_string_middle();
    return (out);
}
