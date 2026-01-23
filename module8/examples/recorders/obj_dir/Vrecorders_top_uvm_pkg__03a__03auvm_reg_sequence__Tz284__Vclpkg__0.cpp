// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz328> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz328> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz328__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz328> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz328__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284, vlProcess, vlSymsp, "uvm_reg_sequence_inst"s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_sequence__Tz174_TBz174(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__parent_select = 0U;
    ;
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_body(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
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
    std::string __Vtask_uvm_report_warning__13__id;
    std::string __Vtask_uvm_report_warning__13__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__13__verbosity;
    __Vtask_uvm_report_warning__13__verbosity = 0;
    std::string __Vtask_uvm_report_warning__13__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__13__line;
    __Vtask_uvm_report_warning__13__line = 0;
    std::string __Vtask_uvm_report_warning__13__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__13__report_enabled_checked;
    __Vtask_uvm_report_warning__13__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__14__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__Vfuncout;
    __Vfunc_uvm_report_enabled__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__verbosity;
    __Vfunc_uvm_report_enabled__18__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__18__severity;
    __Vfunc_uvm_report_enabled__18__severity = 0;
    std::string __Vfunc_uvm_report_enabled__18__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__19__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__20__Vfuncout;
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
    std::string __Vtask_get_full_name__23__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__24__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__25__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__27__t;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__29__t;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> unnamedblk1__DOT__reg_item;
    if ((VlNull{} == Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__4__id = "NO_SEQR"s;
                        __Vfunc_uvm_report_enabled__4__severity = 3U;
                        __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__5__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__6__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                        __Vfunc_uvm_report_enabled__4__Vfuncout 
                            = __Vtask_uvm_report_enabled__7__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "NO_SEQR"s, "Sequence executing as translation sequence, but is not associated with a sequencer (m_sequencer == null)"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x0000007fU, ""s, 1U);
        }
    }
    if ((VlNull{} == this->__PVT__reg_seqr)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__9__id = "REG_XLATE_NO_SEQR"s;
                        __Vfunc_uvm_report_enabled__9__severity = 1U;
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
            __Vtask_uvm_report_warning__13__report_enabled_checked = 1U;
            __Vtask_uvm_report_warning__13__context_name = ""s;
            __Vtask_uvm_report_warning__13__line = 0x00000085U;
            __Vtask_uvm_report_warning__13__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_warning__13__verbosity = 0U;
            __Vtask_uvm_report_warning__13__message 
                = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(
                                                    VL_CONCATN_NNN(
                                                                   VL_CONCATN_NNN("Executing RegModel translation sequence on sequencer "s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 133)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__14__Vfuncout);
                                }(), __Vtask_get_full_name__14__Vfuncout)), "' does not have an upstream sequencer defined. "s), "Execution of register items available only via direct calls to 'do_reg_item'"s));
            __Vtask_uvm_report_warning__13__id = "REG_XLATE_NO_SEQR"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                = __Vfunc_get__15__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vtask_get_root__16__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__13__id, __Vtask_uvm_report_warning__13__message, __Vtask_uvm_report_warning__13__verbosity, __Vtask_uvm_report_warning__13__filename, __Vtask_uvm_report_warning__13__line, __Vtask_uvm_report_warning__13__context_name, (IData)(__Vtask_uvm_report_warning__13__report_enabled_checked));
        }
        co_await VlForever{};
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__18__id = "REG_XLATE_SEQ_START"s;
                    __Vfunc_uvm_report_enabled__18__severity = 0U;
                    __Vfunc_uvm_report_enabled__18__verbosity = 0x00000064U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__19__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__19__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__20__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__20__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__18__verbosity, (IData)(__Vfunc_uvm_report_enabled__18__severity), __Vfunc_uvm_report_enabled__18__id, __Vtask_uvm_report_enabled__21__Vfuncout);
                    __Vfunc_uvm_report_enabled__18__Vfuncout 
                        = __Vtask_uvm_report_enabled__21__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__18__Vfuncout))) {
        __Vtask_uvm_report_info__22__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__22__context_name = ""s;
        __Vtask_uvm_report_info__22__line = 0x0000008aU;
        __Vtask_uvm_report_info__22__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
        __Vtask_uvm_report_info__22__verbosity = 0x00000064U;
        __Vtask_uvm_report_info__22__message = VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Starting RegModel translation sequence on sequencer "s, 
                                                                                ([&]() {
                            VL_NULL_CHECK(Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 138)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__23__Vfuncout);
                        }(), __Vtask_get_full_name__23__Vfuncout)), "'"s));
        __Vtask_uvm_report_info__22__id = "REG_XLATE_SEQ_START"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__24__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__24__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__25__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__25__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__22__id, __Vtask_uvm_report_info__22__message, __Vtask_uvm_report_info__22__verbosity, __Vtask_uvm_report_info__22__filename, __Vtask_uvm_report_info__22__line, __Vtask_uvm_report_info__22__context_name, (IData)(__Vtask_uvm_report_info__22__report_enabled_checked));
    }
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 141)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__27__t);
        unnamedblk1__DOT__reg_item = __Vtask_peek__27__t;
        co_await this->__VnoInFunc_do_reg_item(vlProcess, vlSymsp, unnamedblk1__DOT__reg_item);
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 143)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__29__t);
        unnamedblk1__DOT__reg_item = __Vtask_get__29__t;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 
                                                144);
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_do_reg_item(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_do_reg_item\n"); );
    // Locals
    std::string __Vtask_convert2string__30__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__Vfuncout;
    __Vfunc_uvm_report_enabled__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__31__verbosity;
    __Vfunc_uvm_report_enabled__31__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__31__severity;
    __Vfunc_uvm_report_enabled__31__severity = 0;
    std::string __Vfunc_uvm_report_enabled__31__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__32__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__33__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__34__Vfuncout;
    __Vtask_uvm_report_enabled__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__Vfuncout;
    __Vfunc_uvm_report_enabled__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__verbosity;
    __Vfunc_uvm_report_enabled__36__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__36__severity;
    __Vfunc_uvm_report_enabled__36__severity = 0;
    std::string __Vfunc_uvm_report_enabled__36__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__39__Vfuncout;
    __Vtask_uvm_report_enabled__39__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__Vfuncout;
    __Vfunc_uvm_report_enabled__41__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__41__verbosity;
    __Vfunc_uvm_report_enabled__41__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__41__severity;
    __Vfunc_uvm_report_enabled__41__severity = 0;
    std::string __Vfunc_uvm_report_enabled__41__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__42__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__43__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__44__Vfuncout;
    __Vtask_uvm_report_enabled__44__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__45__id;
    std::string __Vtask_uvm_report_info__45__message;
    IData/*31:0*/ __Vtask_uvm_report_info__45__verbosity;
    __Vtask_uvm_report_info__45__verbosity = 0;
    std::string __Vtask_uvm_report_info__45__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__45__line;
    __Vtask_uvm_report_info__45__line = 0;
    std::string __Vtask_uvm_report_info__45__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__45__report_enabled_checked;
    __Vtask_uvm_report_info__45__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    // Body
    VL_KEEP_THIS;
    std::string rws;
    VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 159)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__30__Vfuncout);
    rws = __Vtask_convert2string__30__Vfuncout;
    if ((VlNull{} == Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__31__id = "REG/DO_ITEM/NULL"s;
                        __Vfunc_uvm_report_enabled__31__severity = 3U;
                        __Vfunc_uvm_report_enabled__31__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__32__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__32__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__33__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__33__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__31__verbosity, (IData)(__Vfunc_uvm_report_enabled__31__severity), __Vfunc_uvm_report_enabled__31__id, __Vtask_uvm_report_enabled__34__Vfuncout);
                        __Vfunc_uvm_report_enabled__31__Vfuncout 
                            = __Vtask_uvm_report_enabled__34__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__31__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: m_sequencer is null"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000a1U, ""s, 1U);
        }
    }
    if ((VlNull{} == this->__PVT__adapter)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__36__id = "REG/DO_ITEM/NULL"s;
                        __Vfunc_uvm_report_enabled__36__severity = 3U;
                        __Vfunc_uvm_report_enabled__36__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__37__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__38__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__36__verbosity, (IData)(__Vfunc_uvm_report_enabled__36__severity), __Vfunc_uvm_report_enabled__36__id, __Vtask_uvm_report_enabled__39__Vfuncout);
                        __Vfunc_uvm_report_enabled__36__Vfuncout 
                            = __Vtask_uvm_report_enabled__39__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__36__Vfuncout))) {
            vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: adapter handle is null"s, 0U, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000a3U, ""s, 1U);
        }
    }
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__41__id = "DO_RW_ACCESS"s;
                    __Vfunc_uvm_report_enabled__41__severity = 0U;
                    __Vfunc_uvm_report_enabled__41__verbosity = 0x0000012cU;
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
        __Vtask_uvm_report_info__45__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__45__context_name = ""s;
        __Vtask_uvm_report_info__45__line = 0x000000a5U;
        __Vtask_uvm_report_info__45__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
        __Vtask_uvm_report_info__45__verbosity = 0x0000012cU;
        __Vtask_uvm_report_info__45__message = VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN("Doing transaction: "s, rws));
        __Vtask_uvm_report_info__45__id = "DO_RW_ACCESS"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__46__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__47__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__45__id, __Vtask_uvm_report_info__45__message, __Vtask_uvm_report_info__45__verbosity, __Vtask_uvm_report_info__45__filename, __Vtask_uvm_report_info__45__line, __Vtask_uvm_report_info__45__context_name, (IData)(__Vtask_uvm_report_info__45__report_enabled_checked));
    }
    if ((0U == this->__PVT__parent_select)) {
        this->__PVT__upstream_parent = VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 168)
            ->__PVT__parent;
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 169)->__PVT__parent 
            = VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this};
    }
    if ((1U == VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 172)
         ->__PVT__kind)) {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 173)
                               ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 173)->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    } else {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 175)
                               ->__PVT__local_map, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 175)->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    }
    if ((0U == this->__PVT__parent_select)) {
        VL_NULL_CHECK(rw, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 178)->__PVT__parent 
            = this->__PVT__upstream_parent;
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_write_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_write_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__Vfuncout;
    __Vfunc_uvm_report_enabled__51__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__verbosity;
    __Vfunc_uvm_report_enabled__51__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__51__severity;
    __Vfunc_uvm_report_enabled__51__severity = 0;
    std::string __Vfunc_uvm_report_enabled__51__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__54__Vfuncout;
    __Vtask_uvm_report_enabled__54__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__55__id;
    std::string __Vtask_uvm_report_error__55__message;
    IData/*31:0*/ __Vtask_uvm_report_error__55__verbosity;
    __Vtask_uvm_report_error__55__verbosity = 0;
    std::string __Vtask_uvm_report_error__55__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__55__line;
    __Vtask_uvm_report_error__55__line = 0;
    std::string __Vtask_uvm_report_error__55__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__55__report_enabled_checked;
    __Vtask_uvm_report_error__55__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__56__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__57__Vfuncout;
    IData/*31:0*/ __Vtask_write__59__status;
    __Vtask_write__59__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__51__id = "NO_REG"s;
                        __Vfunc_uvm_report_enabled__51__severity = 2U;
                        __Vfunc_uvm_report_enabled__51__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__52__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__53__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__51__verbosity, (IData)(__Vfunc_uvm_report_enabled__51__severity), __Vfunc_uvm_report_enabled__51__id, __Vtask_uvm_report_enabled__54__Vfuncout);
                        __Vfunc_uvm_report_enabled__51__Vfuncout 
                            = __Vtask_uvm_report_enabled__54__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__51__Vfuncout))) {
            __Vtask_uvm_report_error__55__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__55__context_name = ""s;
            __Vtask_uvm_report_error__55__line = 0x000000d3U;
            __Vtask_uvm_report_error__55__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__55__verbosity = 0U;
            __Vtask_uvm_report_error__55__message = "Register argument is null"s;
            __Vtask_uvm_report_error__55__id = "NO_REG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__56__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__56__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__57__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__57__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__55__id, __Vtask_uvm_report_error__55__message, __Vtask_uvm_report_error__55__verbosity, __Vtask_uvm_report_error__55__filename, __Vtask_uvm_report_error__55__line, __Vtask_uvm_report_error__55__context_name, (IData)(__Vtask_uvm_report_error__55__report_enabled_checked));
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 213)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__59__status, value, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__59__status;
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_read_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_read_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__Vfuncout;
    __Vfunc_uvm_report_enabled__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__60__verbosity;
    __Vfunc_uvm_report_enabled__60__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__60__severity;
    __Vfunc_uvm_report_enabled__60__severity = 0;
    std::string __Vfunc_uvm_report_enabled__60__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__61__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__62__Vfuncout;
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
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__65__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__66__Vfuncout;
    IData/*31:0*/ __Vtask_read__68__status;
    __Vtask_read__68__status = 0;
    QData/*63:0*/ __Vtask_read__68__value;
    __Vtask_read__68__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__60__id = "NO_REG"s;
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
            __Vtask_uvm_report_error__64__line = 0x000000e5U;
            __Vtask_uvm_report_error__64__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__64__verbosity = 0U;
            __Vtask_uvm_report_error__64__message = "Register argument is null"s;
            __Vtask_uvm_report_error__64__id = "NO_REG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__65__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__65__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__66__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__66__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__64__id, __Vtask_uvm_report_error__64__message, __Vtask_uvm_report_error__64__verbosity, __Vtask_uvm_report_error__64__filename, __Vtask_uvm_report_error__64__line, __Vtask_uvm_report_error__64__context_name, (IData)(__Vtask_uvm_report_error__64__report_enabled_checked));
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 231)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__68__status, __Vtask_read__68__value, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__68__status;
        value = __Vtask_read__68__value;
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_poke_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_poke_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__69__Vfuncout;
    __Vfunc_uvm_report_enabled__69__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__69__verbosity;
    __Vfunc_uvm_report_enabled__69__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__69__severity;
    __Vfunc_uvm_report_enabled__69__severity = 0;
    std::string __Vfunc_uvm_report_enabled__69__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__70__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__71__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__72__Vfuncout;
    __Vtask_uvm_report_enabled__72__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__73__id;
    std::string __Vtask_uvm_report_error__73__message;
    IData/*31:0*/ __Vtask_uvm_report_error__73__verbosity;
    __Vtask_uvm_report_error__73__verbosity = 0;
    std::string __Vtask_uvm_report_error__73__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__73__line;
    __Vtask_uvm_report_error__73__line = 0;
    std::string __Vtask_uvm_report_error__73__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__73__report_enabled_checked;
    __Vtask_uvm_report_error__73__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__74__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__75__Vfuncout;
    IData/*31:0*/ __Vtask_poke__77__status;
    __Vtask_poke__77__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__69__id = "NO_REG"s;
                        __Vfunc_uvm_report_enabled__69__severity = 2U;
                        __Vfunc_uvm_report_enabled__69__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__70__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__70__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__71__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__71__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__69__verbosity, (IData)(__Vfunc_uvm_report_enabled__69__severity), __Vfunc_uvm_report_enabled__69__id, __Vtask_uvm_report_enabled__72__Vfuncout);
                        __Vfunc_uvm_report_enabled__69__Vfuncout 
                            = __Vtask_uvm_report_enabled__72__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__69__Vfuncout))) {
            __Vtask_uvm_report_error__73__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__73__context_name = ""s;
            __Vtask_uvm_report_error__73__line = 0x000000f6U;
            __Vtask_uvm_report_error__73__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__73__verbosity = 0U;
            __Vtask_uvm_report_error__73__message = "Register argument is null"s;
            __Vtask_uvm_report_error__73__id = "NO_REG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__74__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__74__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__75__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__75__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__73__id, __Vtask_uvm_report_error__73__message, __Vtask_uvm_report_error__73__verbosity, __Vtask_uvm_report_error__73__filename, __Vtask_uvm_report_error__73__line, __Vtask_uvm_report_error__73__context_name, (IData)(__Vtask_uvm_report_error__73__report_enabled_checked));
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 248)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__77__status, value, kind, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, extension, fname, lineno);
        status = __Vtask_poke__77__status;
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_peek_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_peek_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__Vfuncout;
    __Vfunc_uvm_report_enabled__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    std::string __Vfunc_uvm_report_enabled__78__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__81__Vfuncout;
    __Vtask_uvm_report_enabled__81__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__82__id;
    std::string __Vtask_uvm_report_error__82__message;
    IData/*31:0*/ __Vtask_uvm_report_error__82__verbosity;
    __Vtask_uvm_report_error__82__verbosity = 0;
    std::string __Vtask_uvm_report_error__82__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__82__line;
    __Vtask_uvm_report_error__82__line = 0;
    std::string __Vtask_uvm_report_error__82__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__82__report_enabled_checked;
    __Vtask_uvm_report_error__82__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
    IData/*31:0*/ __Vtask_peek__86__status;
    __Vtask_peek__86__status = 0;
    QData/*63:0*/ __Vtask_peek__86__value;
    __Vtask_peek__86__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__78__id = "NO_REG"s;
                        __Vfunc_uvm_report_enabled__78__severity = 2U;
                        __Vfunc_uvm_report_enabled__78__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__79__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__79__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__80__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__78__verbosity, (IData)(__Vfunc_uvm_report_enabled__78__severity), __Vfunc_uvm_report_enabled__78__id, __Vtask_uvm_report_enabled__81__Vfuncout);
                        __Vfunc_uvm_report_enabled__78__Vfuncout 
                            = __Vtask_uvm_report_enabled__81__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__78__Vfuncout))) {
            __Vtask_uvm_report_error__82__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__82__context_name = ""s;
            __Vtask_uvm_report_error__82__line = 0x00000107U;
            __Vtask_uvm_report_error__82__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__82__verbosity = 0U;
            __Vtask_uvm_report_error__82__message = "Register argument is null"s;
            __Vtask_uvm_report_error__82__id = "NO_REG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__83__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__84__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__82__id, __Vtask_uvm_report_error__82__message, __Vtask_uvm_report_error__82__verbosity, __Vtask_uvm_report_error__82__filename, __Vtask_uvm_report_error__82__line, __Vtask_uvm_report_error__82__context_name, (IData)(__Vtask_uvm_report_error__82__report_enabled_checked));
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 265)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__86__status, __Vtask_peek__86__value, kind, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, extension, fname, lineno);
        status = __Vtask_peek__86__status;
        value = __Vtask_peek__86__value;
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_update_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_update_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__87__Vfuncout;
    __Vfunc_uvm_report_enabled__87__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__87__verbosity;
    __Vfunc_uvm_report_enabled__87__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__87__severity;
    __Vfunc_uvm_report_enabled__87__severity = 0;
    std::string __Vfunc_uvm_report_enabled__87__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__88__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__89__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__90__Vfuncout;
    __Vtask_uvm_report_enabled__90__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__91__id;
    std::string __Vtask_uvm_report_error__91__message;
    IData/*31:0*/ __Vtask_uvm_report_error__91__verbosity;
    __Vtask_uvm_report_error__91__verbosity = 0;
    std::string __Vtask_uvm_report_error__91__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__91__line;
    __Vtask_uvm_report_error__91__line = 0;
    std::string __Vtask_uvm_report_error__91__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__91__report_enabled_checked;
    __Vtask_uvm_report_error__91__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    IData/*31:0*/ __Vtask_update__95__status;
    __Vtask_update__95__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__87__id = "NO_REG"s;
                        __Vfunc_uvm_report_enabled__87__severity = 2U;
                        __Vfunc_uvm_report_enabled__87__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__88__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__88__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__89__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__89__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__87__verbosity, (IData)(__Vfunc_uvm_report_enabled__87__severity), __Vfunc_uvm_report_enabled__87__id, __Vtask_uvm_report_enabled__90__Vfuncout);
                        __Vfunc_uvm_report_enabled__87__Vfuncout 
                            = __Vtask_uvm_report_enabled__90__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__87__Vfuncout))) {
            __Vtask_uvm_report_error__91__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__91__context_name = ""s;
            __Vtask_uvm_report_error__91__line = 0x00000119U;
            __Vtask_uvm_report_error__91__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__91__verbosity = 0U;
            __Vtask_uvm_report_error__91__message = "Register argument is null"s;
            __Vtask_uvm_report_error__91__id = "NO_REG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__92__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__93__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__91__id, __Vtask_uvm_report_error__91__message, __Vtask_uvm_report_error__91__verbosity, __Vtask_uvm_report_error__91__filename, __Vtask_uvm_report_error__91__line, __Vtask_uvm_report_error__91__context_name, (IData)(__Vtask_uvm_report_error__91__report_enabled_checked));
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 283)->__VnoInFunc_update(vlSymsp, __Vtask_update__95__status, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, prior, extension, fname, lineno);
        status = __Vtask_update__95__status;
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_mirror_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_mirror_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__96__Vfuncout;
    __Vfunc_uvm_report_enabled__96__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__96__verbosity;
    __Vfunc_uvm_report_enabled__96__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__96__severity;
    __Vfunc_uvm_report_enabled__96__severity = 0;
    std::string __Vfunc_uvm_report_enabled__96__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__97__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__98__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__99__Vfuncout;
    __Vtask_uvm_report_enabled__99__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__100__id;
    std::string __Vtask_uvm_report_error__100__message;
    IData/*31:0*/ __Vtask_uvm_report_error__100__verbosity;
    __Vtask_uvm_report_error__100__verbosity = 0;
    std::string __Vtask_uvm_report_error__100__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__100__line;
    __Vtask_uvm_report_error__100__line = 0;
    std::string __Vtask_uvm_report_error__100__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__100__report_enabled_checked;
    __Vtask_uvm_report_error__100__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__101__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__102__Vfuncout;
    IData/*31:0*/ __Vtask_mirror__104__status;
    __Vtask_mirror__104__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__96__id = "NO_REG"s;
                        __Vfunc_uvm_report_enabled__96__severity = 2U;
                        __Vfunc_uvm_report_enabled__96__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__97__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__97__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__98__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__98__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__96__verbosity, (IData)(__Vfunc_uvm_report_enabled__96__severity), __Vfunc_uvm_report_enabled__96__id, __Vtask_uvm_report_enabled__99__Vfuncout);
                        __Vfunc_uvm_report_enabled__96__Vfuncout 
                            = __Vtask_uvm_report_enabled__99__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__96__Vfuncout))) {
            __Vtask_uvm_report_error__100__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__100__context_name = ""s;
            __Vtask_uvm_report_error__100__line = 0x0000012cU;
            __Vtask_uvm_report_error__100__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__100__verbosity = 0U;
            __Vtask_uvm_report_error__100__message = "Register argument is null"s;
            __Vtask_uvm_report_error__100__id = "NO_REG"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__101__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__101__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__102__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__102__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__100__id, __Vtask_uvm_report_error__100__message, __Vtask_uvm_report_error__100__verbosity, __Vtask_uvm_report_error__100__filename, __Vtask_uvm_report_error__100__line, __Vtask_uvm_report_error__100__context_name, (IData)(__Vtask_uvm_report_error__100__report_enabled_checked));
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 302)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__104__status, check, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, prior, extension, fname, lineno);
        status = __Vtask_mirror__104__status;
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_write_mem(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_write_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__105__Vfuncout;
    __Vfunc_uvm_report_enabled__105__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__105__verbosity;
    __Vfunc_uvm_report_enabled__105__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__105__severity;
    __Vfunc_uvm_report_enabled__105__severity = 0;
    std::string __Vfunc_uvm_report_enabled__105__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__106__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__107__Vfuncout;
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
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__110__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__111__Vfuncout;
    IData/*31:0*/ __Vtask_write__113__status;
    __Vtask_write__113__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == mem)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__105__id = "NO_MEM"s;
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
            __Vtask_uvm_report_error__109__line = 0x00000140U;
            __Vtask_uvm_report_error__109__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__109__verbosity = 0U;
            __Vtask_uvm_report_error__109__message = "Memory argument is null"s;
            __Vtask_uvm_report_error__109__id = "NO_MEM"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__110__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__110__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__111__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__111__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__109__id, __Vtask_uvm_report_error__109__message, __Vtask_uvm_report_error__109__verbosity, __Vtask_uvm_report_error__109__filename, __Vtask_uvm_report_error__109__line, __Vtask_uvm_report_error__109__context_name, (IData)(__Vtask_uvm_report_error__109__report_enabled_checked));
        }
    } else {
        co_await VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 322)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__113__status, offset, value, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__113__status;
    }
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_read_mem(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_read_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__114__Vfuncout;
    __Vfunc_uvm_report_enabled__114__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__114__verbosity;
    __Vfunc_uvm_report_enabled__114__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__114__severity;
    __Vfunc_uvm_report_enabled__114__severity = 0;
    std::string __Vfunc_uvm_report_enabled__114__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__115__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__116__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__117__Vfuncout;
    __Vtask_uvm_report_enabled__117__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__118__id;
    std::string __Vtask_uvm_report_error__118__message;
    IData/*31:0*/ __Vtask_uvm_report_error__118__verbosity;
    __Vtask_uvm_report_error__118__verbosity = 0;
    std::string __Vtask_uvm_report_error__118__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__118__line;
    __Vtask_uvm_report_error__118__line = 0;
    std::string __Vtask_uvm_report_error__118__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__118__report_enabled_checked;
    __Vtask_uvm_report_error__118__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__119__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__120__Vfuncout;
    IData/*31:0*/ __Vtask_read__122__status;
    __Vtask_read__122__status = 0;
    QData/*63:0*/ __Vtask_read__122__value;
    __Vtask_read__122__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == mem)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__114__id = "NO_MEM"s;
                        __Vfunc_uvm_report_enabled__114__severity = 2U;
                        __Vfunc_uvm_report_enabled__114__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__115__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__115__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__116__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__116__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__114__verbosity, (IData)(__Vfunc_uvm_report_enabled__114__severity), __Vfunc_uvm_report_enabled__114__id, __Vtask_uvm_report_enabled__117__Vfuncout);
                        __Vfunc_uvm_report_enabled__114__Vfuncout 
                            = __Vtask_uvm_report_enabled__117__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__114__Vfuncout))) {
            __Vtask_uvm_report_error__118__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__118__context_name = ""s;
            __Vtask_uvm_report_error__118__line = 0x00000153U;
            __Vtask_uvm_report_error__118__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__118__verbosity = 0U;
            __Vtask_uvm_report_error__118__message = "Memory argument is null"s;
            __Vtask_uvm_report_error__118__id = "NO_MEM"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__119__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__119__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__120__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__120__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__118__id, __Vtask_uvm_report_error__118__message, __Vtask_uvm_report_error__118__verbosity, __Vtask_uvm_report_error__118__filename, __Vtask_uvm_report_error__118__line, __Vtask_uvm_report_error__118__context_name, (IData)(__Vtask_uvm_report_error__118__report_enabled_checked));
        }
    } else {
        co_await VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 341)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__122__status, offset, __Vtask_read__122__value, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__122__status;
        value = __Vtask_read__122__value;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_poke_mem(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_poke_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__123__Vfuncout;
    __Vfunc_uvm_report_enabled__123__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__123__verbosity;
    __Vfunc_uvm_report_enabled__123__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__123__severity;
    __Vfunc_uvm_report_enabled__123__severity = 0;
    std::string __Vfunc_uvm_report_enabled__123__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__124__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__125__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__126__Vfuncout;
    __Vtask_uvm_report_enabled__126__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__127__id;
    std::string __Vtask_uvm_report_error__127__message;
    IData/*31:0*/ __Vtask_uvm_report_error__127__verbosity;
    __Vtask_uvm_report_error__127__verbosity = 0;
    std::string __Vtask_uvm_report_error__127__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__127__line;
    __Vtask_uvm_report_error__127__line = 0;
    std::string __Vtask_uvm_report_error__127__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__127__report_enabled_checked;
    __Vtask_uvm_report_error__127__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__128__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__129__Vfuncout;
    IData/*31:0*/ __Vtask_poke__131__status;
    __Vtask_poke__131__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == mem)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__123__id = "NO_MEM"s;
                        __Vfunc_uvm_report_enabled__123__severity = 2U;
                        __Vfunc_uvm_report_enabled__123__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__124__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__124__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__125__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__125__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__123__verbosity, (IData)(__Vfunc_uvm_report_enabled__123__severity), __Vfunc_uvm_report_enabled__123__id, __Vtask_uvm_report_enabled__126__Vfuncout);
                        __Vfunc_uvm_report_enabled__123__Vfuncout 
                            = __Vtask_uvm_report_enabled__126__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__123__Vfuncout))) {
            __Vtask_uvm_report_error__127__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__127__context_name = ""s;
            __Vtask_uvm_report_error__127__line = 0x00000165U;
            __Vtask_uvm_report_error__127__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__127__verbosity = 0U;
            __Vtask_uvm_report_error__127__message = "Memory argument is null"s;
            __Vtask_uvm_report_error__127__id = "NO_MEM"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__128__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__128__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__129__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__129__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__127__id, __Vtask_uvm_report_error__127__message, __Vtask_uvm_report_error__127__verbosity, __Vtask_uvm_report_error__127__filename, __Vtask_uvm_report_error__127__line, __Vtask_uvm_report_error__127__context_name, (IData)(__Vtask_uvm_report_error__127__report_enabled_checked));
        }
    } else {
        VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 359)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__131__status, offset, value, kind, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, extension, fname, lineno);
        status = __Vtask_poke__131__status;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_peek_mem(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_peek_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__Vfuncout;
    __Vfunc_uvm_report_enabled__132__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__132__verbosity;
    __Vfunc_uvm_report_enabled__132__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__132__severity;
    __Vfunc_uvm_report_enabled__132__severity = 0;
    std::string __Vfunc_uvm_report_enabled__132__id;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__135__Vfuncout;
    __Vtask_uvm_report_enabled__135__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__136__id;
    std::string __Vtask_uvm_report_error__136__message;
    IData/*31:0*/ __Vtask_uvm_report_error__136__verbosity;
    __Vtask_uvm_report_error__136__verbosity = 0;
    std::string __Vtask_uvm_report_error__136__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__136__line;
    __Vtask_uvm_report_error__136__line = 0;
    std::string __Vtask_uvm_report_error__136__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__136__report_enabled_checked;
    __Vtask_uvm_report_error__136__report_enabled_checked = 0;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__137__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __Vtask_get_root__138__Vfuncout;
    IData/*31:0*/ __Vtask_peek__140__status;
    __Vtask_peek__140__status = 0;
    QData/*63:0*/ __Vtask_peek__140__value;
    __Vtask_peek__140__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == mem)) {
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__132__id = "NO_MEM"s;
                        __Vfunc_uvm_report_enabled__132__severity = 2U;
                        __Vfunc_uvm_report_enabled__132__verbosity = 0U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__133__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__133__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__134__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__132__verbosity, (IData)(__Vfunc_uvm_report_enabled__132__severity), __Vfunc_uvm_report_enabled__132__id, __Vtask_uvm_report_enabled__135__Vfuncout);
                        __Vfunc_uvm_report_enabled__132__Vfuncout 
                            = __Vtask_uvm_report_enabled__135__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__132__Vfuncout))) {
            __Vtask_uvm_report_error__136__report_enabled_checked = 1U;
            __Vtask_uvm_report_error__136__context_name = ""s;
            __Vtask_uvm_report_error__136__line = 0x00000177U;
            __Vtask_uvm_report_error__136__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s;
            __Vtask_uvm_report_error__136__verbosity = 0U;
            __Vtask_uvm_report_error__136__message = "Memory argument is null"s;
            __Vtask_uvm_report_error__136__id = "NO_MEM"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__137__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__137__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__138__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__138__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__136__id, __Vtask_uvm_report_error__136__message, __Vtask_uvm_report_error__136__verbosity, __Vtask_uvm_report_error__136__filename, __Vtask_uvm_report_error__136__line, __Vtask_uvm_report_error__136__context_name, (IData)(__Vtask_uvm_report_error__136__report_enabled_checked));
        }
    } else {
        VL_NULL_CHECK(mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 377)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__140__status, offset, __Vtask_peek__140__value, kind, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>{this}, extension, fname, lineno);
        status = __Vtask_peek__140__status;
        value = __Vtask_peek__140__value;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_put_response(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_put_response\n"); );
    // Body
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__143__Vfuncout;
    __Vfunc___Vbasic_randomize__143__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__143__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__143__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc___Vbasic_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__parent_select = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz284::to_string_middle\n"); );
    // Body
    std::string out;
    out += "model:" + VL_TO_STRING(__PVT__model);
    out += ", adapter:" + VL_TO_STRING(__PVT__adapter);
    out += ", reg_seqr:" + VL_TO_STRING(__PVT__reg_seqr);
    out += ", parent_select:" + VL_TO_STRING(__PVT__parent_select);
    out += ", upstream_parent:" + VL_TO_STRING(__PVT__upstream_parent);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_sequence__Tz174_TBz174::to_string_middle();
    return (out);
}
