// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrecorders_top.h for the primary calling header

#include "Vrecorders_top__pch.h"

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178__Vclpkg::__VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz218> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz218> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz218__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__Tz218> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz218__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178> tmp;
    tmp = ((""s == name) ? VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178, vlProcess, vlSymsp, "uvm_reg_sequence_inst"s)
            : VL_NEW(Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name)
    : Vrecorders_top_uvm_pkg__03a__03auvm_sequence_(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__parent_select = 0U;
    ;
}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_body(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__6__Vfuncout;
    __Vfunc_uvm_report_enabled__6__Vfuncout = 0;
    std::string __Vtask_get_full_name__8__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__9__Vfuncout;
    __Vfunc_uvm_report_enabled__9__Vfuncout = 0;
    std::string __Vtask_get_full_name__11__Vfuncout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__12__t;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> __Vtask_get__14__t;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> unnamedblk1__DOT__reg_item;
    if ((VlNull{} == Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "NO_SEQR"s, __Vfunc_uvm_report_enabled__4__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NO_SEQR"s, "Sequence executing as translation sequence, but is not associated with a sequencer (m_sequencer == null)"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x0000007fU, ""s, 1U);
        }
    }
    if ((VlNull{} == this->__PVT__reg_seqr)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 1U, "REG_XLATE_NO_SEQR"s, __Vfunc_uvm_report_enabled__6__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__6__Vfuncout))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "REG_XLATE_NO_SEQR"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Executing RegModel translation sequence on sequencer "s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 133)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__8__Vfuncout);
                                    }(), __Vtask_get_full_name__8__Vfuncout)), "' does not have an upstream sequencer defined. "s), "Execution of register items available only via direct calls to 'do_reg_item'"s)), 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000085U, ""s, 1U);
        }
        co_await VlForever{};
    }
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x00000064U, 0U, "REG_XLATE_SEQ_START"s, __Vfunc_uvm_report_enabled__9__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__9__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "REG_XLATE_SEQ_START"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN(
                                                                            VL_CONCATN_NNN("Starting RegModel translation sequence on sequencer "s, 
                                                                                ([&]() {
                                VL_NULL_CHECK(Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 138)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__11__Vfuncout);
                            }(), __Vtask_get_full_name__11__Vfuncout)), "'"s)), 0x00000064U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x0000008aU, ""s, 1U);
    }
    while (true) {
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 141)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__12__t);
        unnamedblk1__DOT__reg_item = __Vtask_peek__12__t;
        co_await this->__VnoInFunc_do_reg_item(vlProcess, vlSymsp, unnamedblk1__DOT__reg_item);
        co_await VL_NULL_CHECK(this->__PVT__reg_seqr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 143)->__VnoInFunc_get(vlProcess, vlSymsp, __Vtask_get__14__t);
        unnamedblk1__DOT__reg_item = __Vtask_get__14__t;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 
                                                144);
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_do_reg_item(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> rw) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_do_reg_item\n"); );
    // Locals
    std::string __Vtask_convert2string__15__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__16__Vfuncout;
    __Vfunc_uvm_report_enabled__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__18__Vfuncout;
    __Vfunc_uvm_report_enabled__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__20__Vfuncout;
    __Vfunc_uvm_report_enabled__20__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    std::string rws;
    VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 159)->__VnoInFunc_convert2string(vlProcess, vlSymsp, __Vtask_convert2string__15__Vfuncout);
    rws = __Vtask_convert2string__15__Vfuncout;
    if ((VlNull{} == Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/DO_ITEM/NULL"s, __Vfunc_uvm_report_enabled__16__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__16__Vfuncout))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: m_sequencer is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000a1U, ""s, 1U);
        }
    }
    if ((VlNull{} == this->__PVT__adapter)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 3U, "REG/DO_ITEM/NULL"s, __Vfunc_uvm_report_enabled__18__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__18__Vfuncout))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "REG/DO_ITEM/NULL"s, "do_reg_item: adapter handle is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000a3U, ""s, 1U);
        }
    }
    if ((0U != ([&]() {
                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0x0000012cU, 0U, "DO_RW_ACCESS"s, __Vfunc_uvm_report_enabled__20__Vfuncout);
                }(), __Vfunc_uvm_report_enabled__20__Vfuncout))) {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DO_RW_ACCESS"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Doing transaction: "s, rws)), 0x0000012cU, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000a5U, ""s, 1U);
    }
    if ((0U == this->__PVT__parent_select)) {
        this->__PVT__upstream_parent = VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 168)
            ->__PVT__parent;
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 169)->__PVT__parent 
            = VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this};
    }
    if ((1U == VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 172)
         ->__PVT__kind)) {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 173)
                               ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 173)->__VnoInFunc_do_bus_write(vlProcess, vlSymsp, rw, Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    } else {
        co_await VL_NULL_CHECK(VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 175)
                               ->__PVT__local_map, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 175)->__VnoInFunc_do_bus_read(vlProcess, vlSymsp, rw, Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__adapter);
    }
    if ((0U == this->__PVT__parent_select)) {
        VL_NULL_CHECK(rw, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 178)->__PVT__parent 
            = this->__PVT__upstream_parent;
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_write_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_write_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__Vfuncout;
    __Vfunc_uvm_report_enabled__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__26__status;
    __Vtask_write__26__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __Vfunc_uvm_report_enabled__24__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__24__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000d3U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 213)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__26__status, value, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__26__status;
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_read_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_read_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__27__Vfuncout;
    __Vfunc_uvm_report_enabled__27__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__29__status;
    __Vtask_read__29__status = 0;
    QData/*63:0*/ __Vtask_read__29__value;
    __Vtask_read__29__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __Vfunc_uvm_report_enabled__27__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__27__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000e5U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 231)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__29__status, __Vtask_read__29__value, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__29__status;
        value = __Vtask_read__29__value;
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_poke_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ value, std::string kind, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_poke_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__30__Vfuncout;
    __Vfunc_uvm_report_enabled__30__Vfuncout = 0;
    IData/*31:0*/ __Vtask_poke__32__status;
    __Vtask_poke__32__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __Vfunc_uvm_report_enabled__30__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__30__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x000000f6U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 248)->__VnoInFunc_poke(vlSymsp, __Vtask_poke__32__status, value, kind, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, extension, fname, lineno);
        status = __Vtask_poke__32__status;
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_peek_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, QData/*63:0*/ &value, std::string kind, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_peek_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__35__status;
    __Vtask_peek__35__status = 0;
    QData/*63:0*/ __Vtask_peek__35__value;
    __Vtask_peek__35__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __Vfunc_uvm_report_enabled__33__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__33__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000107U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 265)->__VnoInFunc_peek(vlSymsp, __Vtask_peek__35__status, __Vtask_peek__35__value, kind, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, extension, fname, lineno);
        status = __Vtask_peek__35__status;
        value = __Vtask_peek__35__value;
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_update_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_update_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__Vfuncout;
    __Vfunc_uvm_report_enabled__36__Vfuncout = 0;
    IData/*31:0*/ __Vtask_update__38__status;
    __Vtask_update__38__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __Vfunc_uvm_report_enabled__36__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__36__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000119U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 283)->__VnoInFunc_update(vlSymsp, __Vtask_update__38__status, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, prior, extension, fname, lineno);
        status = __Vtask_update__38__status;
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_mirror_reg(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg> rg, IData/*31:0*/ &status, IData/*31:0*/ check, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_mirror_reg\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__39__Vfuncout;
    __Vfunc_uvm_report_enabled__39__Vfuncout = 0;
    IData/*31:0*/ __Vtask_mirror__41__status;
    __Vtask_mirror__41__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == rg)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_REG"s, __Vfunc_uvm_report_enabled__39__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__39__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_REG"s, "Register argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x0000012cU, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(rg, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 302)->__VnoInFunc_mirror(vlProcess, vlSymsp, __Vtask_mirror__41__status, check, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, prior, extension, fname, lineno);
        status = __Vtask_mirror__41__status;
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_write_mem(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_write_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__42__Vfuncout;
    __Vfunc_uvm_report_enabled__42__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__44__status;
    __Vtask_write__44__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == mem)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __Vfunc_uvm_report_enabled__42__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__42__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000140U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 322)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__44__status, offset, value, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, prior, extension, fname, lineno);
        status = __Vtask_write__44__status;
    }
    co_return;}

VlCoroutine Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_read_mem(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_map> map, IData/*31:0*/ prior, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_read_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__Vfuncout;
    __Vfunc_uvm_report_enabled__45__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__47__status;
    __Vtask_read__47__status = 0;
    QData/*63:0*/ __Vtask_read__47__value;
    __Vtask_read__47__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == mem)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __Vfunc_uvm_report_enabled__45__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__45__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000153U, ""s, 1U);
        }
    } else {
        co_await VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 341)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__47__status, offset, __Vtask_read__47__value, path, map, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, prior, extension, fname, lineno);
        status = __Vtask_read__47__status;
        value = __Vtask_read__47__value;
    }
    co_return;}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_poke_mem(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, std::string kind, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_poke_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__48__Vfuncout;
    __Vfunc_uvm_report_enabled__48__Vfuncout = 0;
    IData/*31:0*/ __Vtask_poke__50__status;
    __Vtask_poke__50__status = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == mem)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __Vfunc_uvm_report_enabled__48__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__48__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000165U, ""s, 1U);
        }
    } else {
        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 359)->__VnoInFunc_poke(vlProcess, vlSymsp, __Vtask_poke__50__status, offset, value, kind, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, extension, fname, lineno);
        status = __Vtask_poke__50__status;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_peek_mem(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_mem> mem, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, std::string kind, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_peek_mem\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__51__Vfuncout;
    __Vfunc_uvm_report_enabled__51__Vfuncout = 0;
    IData/*31:0*/ __Vtask_peek__53__status;
    __Vtask_peek__53__status = 0;
    QData/*63:0*/ __Vtask_peek__53__value;
    __Vtask_peek__53__value = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == mem)) {
        if ((0U != ([&]() {
                        this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, 0U, 2U, "NO_MEM"s, __Vfunc_uvm_report_enabled__51__Vfuncout);
                    }(), __Vfunc_uvm_report_enabled__51__Vfuncout))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "NO_MEM"s, "Memory argument is null"s, 0U, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh"s, 0x00000177U, ""s, 1U);
        }
    } else {
        VL_NULL_CHECK(mem, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/uvm_reg_sequence.svh", 377)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__53__status, offset, __Vtask_peek__53__value, kind, 
                                                                                VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>{this}, extension, fname, lineno);
        status = __Vtask_peek__53__status;
        value = __Vtask_peek__53__value;
    }
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_put_response(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_put_response\n"); );
    // Body
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__56__Vfuncout;
    __Vfunc___VBasicRand__56__Vfuncout = 0;
    // Body
    Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vrecorders_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__56__Vfuncout);
            }(), __Vfunc___VBasicRand__56__Vfuncout));
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::_ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__parent_select = 0;
}

Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::~Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vrecorders_top_uvm_pkg__03a__03auvm_reg_sequence__Tz178::to_string_middle\n"); );
    // Body
    std::string out;
    out += "model:" + VL_TO_STRING(__PVT__model);
    out += ", adapter:" + VL_TO_STRING(__PVT__adapter);
    out += ", reg_seqr:" + VL_TO_STRING(__PVT__reg_seqr);
    out += ", parent_select:" + VL_TO_STRING(__PVT__parent_select);
    out += ", upstream_parent:" + VL_TO_STRING(__PVT__upstream_parent);
    out += ", "+ Vrecorders_top_uvm_pkg__03a__03auvm_sequence_::to_string_middle();
    return (out);
}
