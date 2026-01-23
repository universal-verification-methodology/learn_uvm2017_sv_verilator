// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma_uvm_pkg__03a__03auvm_sequence_base__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_object_registry__pi6> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_sequence_base__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_object_registry__pi6> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma_uvm_pkg__03a__03auvm_sequence_base__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_sequence_base"s;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_abstract_object_registry__pi6> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_abstract_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequence_base"s;
}

Vdma_uvm_pkg__03a__03auvm_sequence_base::Vdma_uvm_pkg__03a__03auvm_sequence_base(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name)
    : Vdma_uvm_pkg__03a__03auvm_sequence_item(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__response_queue_depth = 8U;
    this->__PVT__m_priority = 0xffffffffU;
    this->__PVT__m_next_transaction_id = 1U;
    ;
    this->__PVT__m_sequence_state = 1U;
    this->__PVT__m_wait_for_grant_semaphore = 0U;
    this->__VnoInFunc_m_init_phase_daps(vlProcess, vlSymsp, 1U);
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_randomize_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_randomize_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_randomize_enabled\n"); );
    // Body
    get_randomize_enabled__Vfuncrtn = (1U & (~ (IData)(this->__PVT__do_not_randomize)));
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_randomize_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_randomize_enabled\n"); );
    // Body
    this->__PVT__do_not_randomize = (1U & (~ (IData)(enable)));
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_item\n"); );
    // Body
    is_item__Vfuncrtn = 0U;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_state__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_sequence_state\n"); );
    // Body
    get_sequence_state__Vfuncrtn = this->__PVT__m_sequence_state;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_sequence_state(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ state_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_sequence_state\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h17f014ba__0;
    __Vtrigprevexpr_h17f014ba__0 = 0;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (0U != (this->__PVT__m_sequence_state 
                         & state_mask))))) {
        CData/*0:0*/ __VdynTrigger_h2e0fb5d1__0;
        __VdynTrigger_h2e0fb5d1__0 = 0;
        __VdynTrigger_h2e0fb5d1__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h2e0fb5d1__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (| (uvm_pkg::uvm_sequence_base.m_sequence_state & uvm_pkg::uvm_sequence_base.state_mask)))", 
                                                         "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                         244);
            __Vtrigprevexpr_h17f014ba__0 = (0U != (this->__PVT__m_sequence_state 
                                                   & state_mask));
            __VdynTrigger_h2e0fb5d1__0 = __Vtrigprevexpr_h17f014ba__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h2e0fb5d1__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (| (uvm_pkg::uvm_sequence_base.m_sequence_state & uvm_pkg::uvm_sequence_base.state_mask)))", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                     244);
    }
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_tr_handle(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_tr_handle\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_handle__3__Vfuncout;
    __Vtask_get_handle__3__Vfuncout = 0;
    // Body
    get_tr_handle__Vfuncrtn = ((VlNull{} != this->__PVT__m_tr_recorder)
                                ? ([&]() {
                VL_NULL_CHECK(this->__PVT__m_tr_recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 256)
                                   ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__3__Vfuncout);
            }(), __Vtask_get_handle__3__Vfuncout) : 0U);
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> parent_sequence, IData/*31:0*/ this_priority, CData/*0:0*/ call_pre_post) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start\n"); );
    // Locals
    std::string __Vfunc_get_full_name__6__Vfuncout;
    std::string __Vfunc_get_full_name__8__Vfuncout;
    IData/*31:0*/ __Vtask_get_priority__9__Vfuncout;
    __Vtask_get_priority__9__Vfuncout = 0;
    IData/*31:0*/ __Vtask_begin_tr__11__Vfuncout;
    __Vtask_begin_tr__11__Vfuncout = 0;
    std::string __Vfunc_get_name__12__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> __Vfunc_get_recorder_from_handle__13__Vfuncout;
    IData/*31:0*/ __Vtask_begin_tr__14__Vfuncout;
    __Vtask_begin_tr__14__Vfuncout = 0;
    std::string __Vfunc_get_root_sequence_name__15__Vfuncout;
    IData/*31:0*/ __Vtask_get_handle__16__Vfuncout;
    __Vtask_get_handle__16__Vfuncout = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_recorder> __Vfunc_get_recorder_from_handle__17__Vfuncout;
    IData/*31:0*/ __Vtask_m_register_sequence__19__Vfuncout;
    __Vtask_m_register_sequence__19__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_get_automatic_phase_objection__35__Vfuncout;
    __Vfunc_get_automatic_phase_objection__35__Vfuncout = 0;
    std::string __Vtemp_1;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__handle;
    unnamedblk1__DOT__handle = 0;
    CData/*0:0*/ old_automatic_phase_objection;
    old_automatic_phase_objection = 0;
    this->__VnoInFunc_set_item_context(vlProcess, vlSymsp, parent_sequence, sequencer);
    if ((1U & (~ (((1U == this->__PVT__m_sequence_state) 
                   | (0x00000080U == this->__PVT__m_sequence_state)) 
                  | (0x00000100U == this->__PVT__m_sequence_state))))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ_NOT_DONE"s, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_CONCATN_NNN(
                                                                             VL_CONCATN_NNN("Sequence "s, 
                                                                                ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__6__Vfuncout);
                            }(), __Vfunc_get_full_name__6__Vfuncout)), " already started"s)), 0U, ""s, 0U, ""s, 0U);
    }
    if ((VlNull{} != Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 304)->__PVT__children_array.at(
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}) = 1U;
    }
    if (VL_GTS_III(32, 0xffffffffU, this_priority)) {
        __Vtemp_1 = ([&]() {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__8__Vfuncout);
            }(), __Vfunc_get_full_name__8__Vfuncout);
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQPRI"s, VL_SFORMATF_N_NX("Sequence %@ start has illegal priority: %0d",0,
                                                                                -1,
                                                                                &(__Vtemp_1),
                                                                                32,
                                                                                this_priority) , 0U, ""s, 0U, ""s, 0U);
    }
    if (VL_GTS_III(32, 0U, this_priority)) {
        this_priority = ((VlNull{} == parent_sequence)
                          ? 0x00000064U : ([&]() {
                    VL_NULL_CHECK(parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 314)
                                           ->__VnoInFunc_get_priority(vlSymsp, __Vtask_get_priority__9__Vfuncout);
                }(), __Vtask_get_priority__9__Vfuncout));
    }
    this->__VnoInFunc_clear_response_queue(vlSymsp);
    this->__PVT__m_priority = this_priority;
    if ((VlNull{} != Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        if ((VlNull{} == Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence)) {
            VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 325)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__12__Vfuncout);
                        }(), __Vfunc_get_name__12__Vfuncout)), ""s, ""s, 0ULL, 0U, __Vtask_begin_tr__11__Vfuncout);
            unnamedblk1__DOT__handle = __Vtask_begin_tr__11__Vfuncout;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, unnamedblk1__DOT__handle, __Vfunc_get_recorder_from_handle__13__Vfuncout);
            this->__PVT__m_tr_recorder = __Vfunc_get_recorder_from_handle__13__Vfuncout;
        } else {
            VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 328)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            this->__VnoInFunc_get_root_sequence_name(vlSymsp, __Vfunc_get_root_sequence_name__15__Vfuncout);
                        }(), __Vfunc_get_root_sequence_name__15__Vfuncout)), ""s, ""s, 0ULL, 
                                                                                ((VlNull{} 
                                                                                == VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 329)
                                                                                ->__PVT__m_tr_recorder)
                                                                                 ? 0U
                                                                                 : 
                                                                                ([&]() {
                            VL_NULL_CHECK(VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 329)
                                          ->__PVT__m_tr_recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 329)
                                                                                ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__16__Vfuncout);
                        }(), __Vtask_get_handle__16__Vfuncout)), __Vtask_begin_tr__14__Vfuncout);
            unnamedblk1__DOT__handle = __Vtask_begin_tr__14__Vfuncout;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_recorder__Vclpkg.__VnoInFunc_get_recorder_from_handle(vlSymsp, unnamedblk1__DOT__handle, __Vfunc_get_recorder_from_handle__17__Vfuncout);
            this->__PVT__m_tr_recorder = __Vfunc_get_recorder_from_handle__17__Vfuncout;
        }
    }
    this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
    if ((VlNull{} != Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 339)->__VnoInFunc_m_register_sequence(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, __Vtask_m_register_sequence__19__Vfuncout);
    }
    this->__PVT__m_sequence_state = 2U;
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(1U, vlProcess);
    this->__VnoInFunc_start____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, call_pre_post, parent_sequence, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(vlProcess, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                  345);
    if ((VlNull{} != Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 404)->__VnoInFunc_end_tr(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, 0ULL, 1U);
    }
    if ((0x00000080U != this->__PVT__m_sequence_state)) {
        this->__VnoInFunc_clean_exit_sequence(vlProcess, vlSymsp);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            413);
    if (((VlNull{} != Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 415)
         ->__PVT__children_array.exists(VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}))) {
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 416)->__PVT__children_array.erase(
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __Vfunc_get_automatic_phase_objection__35__Vfuncout);
    old_automatic_phase_objection = __Vfunc_get_automatic_phase_objection__35__Vfuncout;
    this->__VnoInFunc_m_init_phase_daps(vlProcess, vlSymsp, 1U);
    this->__VnoInFunc_set_automatic_phase_objection(vlProcess, vlSymsp, old_automatic_phase_objection);
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &call_pre_post, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> &parent_sequence, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vdma_std__03a__03aprocess> __Vfunc_self__20__Vfuncout;
    CData/*0:0*/ __Vfunc_get_automatic_phase_objection__21__Vfuncout;
    __Vfunc_get_automatic_phase_objection__21__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_get_automatic_phase_objection__31__Vfuncout;
    __Vfunc_get_automatic_phase_objection__31__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__20__Vfuncout);
    this->__PVT__m_sequence_process = __Vfunc_self__20__Vfuncout;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            350);
    if (([&]() {
                this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __Vfunc_get_automatic_phase_objection__21__Vfuncout);
            }(), (IData)(__Vfunc_get_automatic_phase_objection__21__Vfuncout))) {
        this->__VnoInFunc_m_safe_raise_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
    }
    this->__VnoInFunc_pre_start(vlSymsp);
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 4U;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                362);
        this->__VnoInFunc_pre_body(vlSymsp);
    }
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 367)->__VnoInFunc_pre_do(vlSymsp, 0U);
        VL_NULL_CHECK(parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 368)->__VnoInFunc_mid_do(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    this->__PVT__m_sequence_state = 8U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            372);
    co_await this->__VnoInFunc_body(vlProcess, vlSymsp);
    this->__PVT__m_sequence_state = 0x00000040U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            376);
    if ((VlNull{} != parent_sequence)) {
        VL_NULL_CHECK(parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 379)->__VnoInFunc_post_do(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    if (call_pre_post) {
        this->__PVT__m_sequence_state = 0x00000010U;
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                384);
        this->__VnoInFunc_post_body(vlSymsp);
    }
    this->__PVT__m_sequence_state = 0x00000020U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            389);
    this->__VnoInFunc_post_start(vlSymsp);
    if (([&]() {
                this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __Vfunc_get_automatic_phase_objection__31__Vfuncout);
            }(), (IData)(__Vfunc_get_automatic_phase_objection__31__Vfuncout))) {
        this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
    }
    this->__PVT__m_sequence_state = 0x00000100U;
    co_await vlSymsp->TOP.__VdlySched.delay(0ULL, vlProcess, 
                                            "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                            398);
    __Vfork_1__sync.done("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                         346);
    vlProcess->state(VlProcess::FINISHED);
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clean_exit_sequence(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clean_exit_sequence\n"); );
    // Body
    IData/*31:0*/ unnamedblk2__DOT__seqrID;
    unnamedblk2__DOT__seqrID = 0;
    CData/*0:0*/ unnamedblk2__DOT__seqrID__Vfirst;
    unnamedblk2__DOT__seqrID__Vfirst = 0;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> unnamedblk2__DOT__unnamedblk3__DOT__s;
    if ((VlNull{} != Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 430)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    } else if ((0U != this->__PVT__m_sqr_seq_ids.first(unnamedblk2__DOT__seqrID))) {
        unnamedblk2__DOT__seqrID__Vfirst = 1U;
        while (((IData)(unnamedblk2__DOT__seqrID__Vfirst) 
                || (0U != this->__PVT__m_sqr_seq_ids.next(unnamedblk2__DOT__seqrID)))) {
            unnamedblk2__DOT__seqrID__Vfirst = 0U;
            unnamedblk2__DOT__unnamedblk3__DOT__s = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__all_sequencer_insts
                .at(unnamedblk2__DOT__seqrID);
            VL_NULL_CHECK(unnamedblk2__DOT__unnamedblk3__DOT__s, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 436)->__VnoInFunc_m_sequence_exiting(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
        }
    }
    this->__PVT__m_sqr_seq_ids.clear();
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_start(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_start\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_body(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_body\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ is_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_pre_do\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_mid_do\n"); );
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_body\n"); );
    // Body
    VL_KEEP_THIS;
    this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "uvm_sequence_base"s, "Body definition undefined"s, 0x000000c8U, ""s, 0U, ""s, 0U);
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> this_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_do\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_body(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_body\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_start(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_post_start\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_init_phase_daps(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ create) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_init_phase_daps\n"); );
    // Locals
    std::string __Vfunc_get_full_name__41__Vfuncout;
    std::string __Vfunc_get_full_name__42__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30> __Vfunc_create__43__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> __Vfunc_get_sequencer__44__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz13> __Vfunc_create__45__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> __Vfunc_get_sequencer__46__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    std::string apo_name;
    __Vtemp_1 = ([&]() {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__41__Vfuncout);
        }(), __Vfunc_get_full_name__41__Vfuncout);
    apo_name = VL_SFORMATF_N_NX("%@.automatic_phase_objection",0,
                                -1,&(__Vtemp_1)) ;
    std::string sp_name;
    __Vtemp_2 = ([&]() {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__42__Vfuncout);
        }(), __Vfunc_get_full_name__42__Vfuncout);
    sp_name = VL_SFORMATF_N_NX("%@.starting_phase",0,
                               -1,&(__Vtemp_2)) ;
    if (create) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz80__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, apo_name, 
                                                                                ([&]() {
                    this->__VnoInFunc_get_sequencer(vlSymsp, __Vfunc_get_sequencer__44__Vfuncout);
                }(), __Vfunc_get_sequencer__44__Vfuncout), ""s, __Vfunc_create__43__Vfuncout);
        this->__PVT__m_automatic_phase_objection_dap 
            = __Vfunc_create__43__Vfuncout;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__Tz81__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, sp_name, 
                                                                                ([&]() {
                    this->__VnoInFunc_get_sequencer(vlSymsp, __Vfunc_get_sequencer__46__Vfuncout);
                }(), __Vfunc_get_sequencer__46__Vfuncout), ""s, __Vfunc_create__45__Vfuncout);
        this->__PVT__m_starting_phase_dap = __Vfunc_create__45__Vfuncout;
    } else {
        VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 570)->__VnoInFunc_set_name(vlProcess, vlSymsp, apo_name);
        VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 571)->__VnoInFunc_set_name(vlProcess, vlSymsp, sp_name);
    }
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_starting_phase(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> &get_starting_phase__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_starting_phase\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> __Vtask_get__49__Vfuncout;
    // Body
    VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 591)->__VnoInFunc_get(vlSymsp, __Vtask_get__49__Vfuncout);
    get_starting_phase__Vfuncrtn = __Vtask_get__49__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_starting_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_starting_phase\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_starting_phase_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 597)->__VnoInFunc_set(vlProcess, vlSymsp, phase);
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_automatic_phase_objection(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_automatic_phase_objection\n"); );
    // Body
    VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 603)->__VnoInFunc_set(vlProcess, vlSymsp, value);
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_automatic_phase_objection(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_automatic_phase_objection__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_automatic_phase_objection\n"); );
    // Locals
    CData/*0:0*/ __Vtask_get__52__Vfuncout;
    __Vtask_get__52__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(this->__PVT__m_automatic_phase_objection_dap, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 609)->__VnoInFunc_get(vlSymsp, __Vtask_get__52__Vfuncout);
    get_automatic_phase_objection__Vfuncrtn = __Vtask_get__52__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_raise_starting_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_raise_starting_phase\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> __Vfunc_get_starting_phase__53__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> starting_phase;
    this->__VnoInFunc_get_starting_phase(vlSymsp, __Vfunc_get_starting_phase__53__Vfuncout);
    starting_phase = __Vfunc_get_starting_phase__53__Vfuncout;
    if ((VlNull{} != starting_phase)) {
        VL_NULL_CHECK(starting_phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 617)->__VnoInFunc_raise_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, description, count);
    }
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_drop_starting_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_safe_drop_starting_phase\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> __Vfunc_get_starting_phase__55__Vfuncout;
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> starting_phase;
    this->__VnoInFunc_get_starting_phase(vlSymsp, __Vfunc_get_starting_phase__55__Vfuncout);
    starting_phase = __Vfunc_get_starting_phase__55__Vfuncout;
    if ((VlNull{} != starting_phase)) {
        VL_NULL_CHECK(starting_phase, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 625)->__VnoInFunc_drop_objection(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, description, count);
    }
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_priority(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_priority\n"); );
    // Body
    this->__PVT__m_priority = value;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_priority\n"); );
    // Body
    get_priority__Vfuncrtn = this->__PVT__m_priority;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_relevant__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_relevant\n"); );
    // Body
    this->__PVT__is_rel_default = 1U;
    is_relevant__Vfuncrtn = 1U;
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_relevant\n"); );
    // Body
    VL_KEEP_THIS;
    VlAssignableEvent e;
    this->__PVT__wait_rel_default = 1U;
    if ((1U & (~ (IData)(this->__PVT__is_rel_default)))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RELMSM"s, "is_relevant() was implemented without defining wait_for_relevant()"s, 0U, ""s, 0U, ""s, 0U);
    }
    CData/*0:0*/ __VdynTrigger_hc3c24949__0;
    __VdynTrigger_hc3c24949__0 = 0;
    __VdynTrigger_hc3c24949__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_hc3c24949__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                     705);
        __VdynTrigger_hc3c24949__0 = e.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hc3c24949__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                     "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                     705);
        e.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] uvm_pkg::uvm_sequence_base.e)", 
                                                 "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                 705);
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_lock(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_lock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == sequencer)) {
        sequencer = Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer;
    }
    if ((VlNull{} == sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "LOCKSEQR"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 728)->__VnoInFunc_lock(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_grab(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_grab\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == sequencer)) {
        if ((VlNull{} == Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "GRAB"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
        }
        co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 749)->__VnoInFunc_grab(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    } else {
        co_await VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 752)->__VnoInFunc_grab(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_unlock(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_unlock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == sequencer)) {
        if ((VlNull{} == Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "UNLOCK"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 769)->__VnoInFunc_unlock(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    } else {
        VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 771)->__VnoInFunc_unlock(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_ungrab(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_ungrab\n"); );
    // Body
    this->__VnoInFunc_unlock(vlSymsp, sequencer);
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_blocked(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_blocked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_is_blocked\n"); );
    // Locals
    CData/*0:0*/ __Vtask_is_blocked__67__Vfuncout;
    __Vtask_is_blocked__67__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 799)->__VnoInFunc_is_blocked(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, __Vtask_is_blocked__67__Vfuncout);
    is_blocked__Vfuncrtn = __Vtask_is_blocked__67__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_has_lock(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &has_lock__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_has_lock\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_lock__68__Vfuncout;
    __Vtask_has_lock__68__Vfuncout = 0;
    // Body
    VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 813)->__VnoInFunc_has_lock(vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, __Vtask_has_lock__68__Vfuncout);
    has_lock__Vfuncrtn = __Vtask_has_lock__68__Vfuncout;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_kill\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_get_automatic_phase_objection__70__Vfuncout;
    __Vfunc_get_automatic_phase_objection__70__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_get_automatic_phase_objection__73__Vfuncout;
    __Vfunc_get_automatic_phase_objection__73__Vfuncout = 0;
    // Body
    {
        if ((VlNull{} != this->__PVT__m_sequence_process)) {
            if ((VlNull{} == Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
                this->__VnoInFunc_m_kill(vlProcess, vlSymsp);
                if (([&]() {
                            this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __Vfunc_get_automatic_phase_objection__70__Vfuncout);
                        }(), (IData)(__Vfunc_get_automatic_phase_objection__70__Vfuncout))) {
                    this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
                }
                goto __Vlabel0;
            }
            VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 844)->__VnoInFunc_kill_sequence(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
            if (([&]() {
                        this->__VnoInFunc_get_automatic_phase_objection(vlSymsp, __Vfunc_get_automatic_phase_objection__73__Vfuncout);
                    }(), (IData)(__Vfunc_get_automatic_phase_objection__73__Vfuncout))) {
                this->__VnoInFunc_m_safe_drop_starting_phase(vlProcess, vlSymsp, "automatic phase objection"s, 1U);
            }
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_kill(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_do_kill\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_kill\n"); );
    // Body
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> unnamedblk4__DOT__i;
    CData/*0:0*/ unnamedblk4__DOT__i__Vfirst;
    unnamedblk4__DOT__i__Vfirst = 0;
    this->__VnoInFunc_do_kill(vlSymsp);
    if ((0U != this->__PVT__children_array.first(unnamedblk4__DOT__i))) {
        unnamedblk4__DOT__i__Vfirst = 1U;
        while (((IData)(unnamedblk4__DOT__i__Vfirst) 
                || (0U != this->__PVT__children_array.next(unnamedblk4__DOT__i)))) {
            unnamedblk4__DOT__i__Vfirst = 0U;
            VL_NULL_CHECK(unnamedblk4__DOT__i, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 874)->__VnoInFunc_kill(vlProcess, vlSymsp);
        }
    }
    if ((VlNull{} != this->__PVT__m_sequence_process)) {
        VL_NULL_CHECK(this->__PVT__m_sequence_process, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 877)->__VnoInFunc_kill(vlSymsp);
        this->__PVT__m_sequence_process = VlNull{};
    }
    this->__PVT__m_sequence_state = 0x00000080U;
    if (((VlNull{} != Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence) 
         && VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 881)
         ->__PVT__children_array.exists(VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}))) {
        VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_parent_sequence, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 882)->__PVT__children_array.erase(
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this});
    }
    this->__VnoInFunc_clean_exit_sequence(vlProcess, vlSymsp);
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_item(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> type_var, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> l_sequencer, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> &create_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_create_item\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory> __Vtask_get_factory__80__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __Vtask_create_object_by_type__81__Vfuncout;
    std::string __Vfunc_get_full_name__82__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_coreservice_t> cs;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__79__Vfuncout);
    cs = __Vfunc_get__79__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_factory> factory;
    VL_NULL_CHECK(cs, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 902)->__VnoInFunc_get_factory(vlSymsp, __Vtask_get_factory__80__Vfuncout);
    factory = __Vtask_get_factory__80__Vfuncout;
    if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                VL_NULL_CHECK(factory, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 903)
                                         ->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, type_var, 
                                                                             VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__82__Vfuncout);
                                            }(), __Vfunc_get_full_name__82__Vfuncout)), name, __Vtask_create_object_by_type__81__Vfuncout);
                            }(), __Vtask_create_object_by_type__81__Vfuncout), create_item__Vfuncrtn))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_sequence_base.svh:903: Assertion failed in %Nuvm_pkg.uvm_sequence_base.create_item: '$cast' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 903, "");
    }
    VL_NULL_CHECK(create_item__Vfuncrtn, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 905)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, l_sequencer);
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_start_item\n"); );
    // Locals
    std::string __Vfunc_get_full_name__85__Vfuncout;
    CData/*0:0*/ __Vtask_is_item__86__Vfuncout;
    __Vtask_is_item__86__Vfuncout = 0;
    std::string __Vfunc_get_full_name__88__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__89__Vfuncout;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> __Vfunc_get_sequencer__90__Vfuncout;
    std::string __Vfunc_get_full_name__92__Vfuncout;
    IData/*31:0*/ __Vfunc_get_priority__94__Vfuncout;
    __Vfunc_get_priority__94__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_auto_item_recording_enabled__96__Vfuncout;
    __Vtask_is_auto_item_recording_enabled__96__Vfuncout = 0;
    IData/*31:0*/ __Vtask_begin_tr__97__Vfuncout;
    __Vtask_begin_tr__97__Vfuncout = 0;
    std::string __Vtask_get_root_sequence_name__98__Vfuncout;
    IData/*31:0*/ __Vtask_get_handle__99__Vfuncout;
    __Vtask_get_handle__99__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    {
        if ((VlNull{} == item)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NULLITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a null item from sequence '"s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__85__Vfuncout);
                                }(), __Vfunc_get_full_name__85__Vfuncout)), "'"s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 930)
                      ->__VnoInFunc_is_item(vlSymsp, __Vtask_is_item__86__Vfuncout);
                        }(), (IData)(__Vtask_is_item__86__Vfuncout))))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQNOTITM"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("attempting to start a sequence using start_item() from sequence '"s, 
                                                                                ([&]() {
                                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__88__Vfuncout);
                                }(), __Vfunc_get_full_name__88__Vfuncout)), "'. Use seq.start() instead."s)), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} == sequencer)) {
            VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 938)->__VnoInFunc_get_sequencer(vlSymsp, __Vtask_get_sequencer__89__Vfuncout);
            sequencer = __Vtask_get_sequencer__89__Vfuncout;
        }
        if ((VlNull{} == sequencer)) {
            this->__VnoInFunc_get_sequencer(vlSymsp, __Vfunc_get_sequencer__90__Vfuncout);
            sequencer = __Vfunc_get_sequencer__90__Vfuncout;
        }
        if ((VlNull{} == sequencer)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQ"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN("neither the item's sequencer nor dedicated sequencer has been supplied to start item in "s, 
                                                                                ([&]() {
                                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__92__Vfuncout);
                            }(), __Vfunc_get_full_name__92__Vfuncout))), 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 948)->__VnoInFunc_set_item_context(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, sequencer);
        if (VL_GTS_III(32, 0U, set_priority)) {
            this->__VnoInFunc_get_priority(vlSymsp, __Vfunc_get_priority__94__Vfuncout);
            set_priority = __Vfunc_get_priority__94__Vfuncout;
        }
        co_await VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 953)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, set_priority, 0U);
        if (([&]() {
                    VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 955)
             ->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __Vtask_is_auto_item_recording_enabled__96__Vfuncout);
                }(), (IData)(__Vtask_is_auto_item_recording_enabled__96__Vfuncout))) {
            VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 956)->__VnoInFunc_begin_tr(vlProcess, vlSymsp, item, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                            VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 956)
                                                                                ->__VnoInFunc_get_root_sequence_name(vlSymsp, __Vtask_get_root_sequence_name__98__Vfuncout);
                        }(), __Vtask_get_root_sequence_name__98__Vfuncout)), "Transactions"s, ""s, 0ULL, 
                                                                                ((VlNull{} 
                                                                                == this->__PVT__m_tr_recorder)
                                                                                 ? 0U
                                                                                 : 
                                                                                ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_tr_recorder, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 957)
                                                                                ->__VnoInFunc_get_handle(vlSymsp, __Vtask_get_handle__99__Vfuncout);
                        }(), __Vtask_get_handle__99__Vfuncout)), __Vtask_begin_tr__97__Vfuncout);
        }
        this->__VnoInFunc_pre_do(vlSymsp, 1U);
        __Vlabel0: ;
    }
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> item, IData/*31:0*/ set_priority) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_finish_item\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__101__Vfuncout;
    CData/*0:0*/ __Vtask_is_auto_item_recording_enabled__106__Vfuncout;
    __Vtask_is_auto_item_recording_enabled__106__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_base> sequencer;
    VL_NULL_CHECK(item, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 979)->__VnoInFunc_get_sequencer(vlSymsp, __Vtask_get_sequencer__101__Vfuncout);
    sequencer = __Vtask_get_sequencer__101__Vfuncout;
    if ((VlNull{} == sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "STRITM"s, "sequence_item has null sequencer"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_mid_do(vlSymsp, item);
    VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 986)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, item, 0U);
    co_await VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 987)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, 0xffffffffU);
    if (([&]() {
                VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 989)
         ->__VnoInFunc_is_auto_item_recording_enabled(vlSymsp, __Vtask_is_auto_item_recording_enabled__106__Vfuncout);
            }(), (IData)(__Vtask_is_auto_item_recording_enabled__106__Vfuncout))) {
        VL_NULL_CHECK(sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 990)->__VnoInFunc_end_tr(vlProcess, vlSymsp, item, 0ULL, 1U);
    }
    this->__VnoInFunc_post_do(vlSymsp, item);
    co_return;}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_grant\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITGRANT"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 1016)->__VnoInFunc_wait_for_grant(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, item_priority, (IData)(lock_request));
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_send_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SENDREQ"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 1032)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, request, rerandomize);
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_wait_for_item_done\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    if ((VlNull{} == Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "WAITITEMDONE"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    co_await VL_NULL_CHECK(Vdma_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 1054)->__VnoInFunc_wait_for_item_done(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>{this}, transaction_id);
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_use_response_handler(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ enable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_use_response_handler\n"); );
    // Body
    this->__PVT__m_use_response_handler = enable;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_response_handler__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_use_response_handler\n"); );
    // Body
    get_use_response_handler__Vfuncrtn = this->__PVT__m_use_response_handler;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_response_handler\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_error_report_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_error_report_enabled\n"); );
    // Body
    this->__PVT__response_queue_error_report_enabled 
        = value;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_error_report_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &get_response_queue_error_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_error_report_enabled\n"); );
    // Body
    get_response_queue_error_report_enabled__Vfuncrtn 
        = this->__PVT__response_queue_error_report_enabled;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_depth(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_set_response_queue_depth\n"); );
    // Body
    this->__PVT__response_queue_depth = value;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_depth(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_response_queue_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_response_queue_depth\n"); );
    // Body
    get_response_queue_depth__Vfuncrtn = this->__PVT__response_queue_depth;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_clear_response_queue\n"); );
    // Body
    this->__PVT__response_queue.clear();
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> response) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_base_response\n"); );
    // Locals
    std::string __Vfunc_get_full_name__116__Vfuncout;
    // Body
    {
        if (((0xffffffffU == this->__PVT__response_queue_depth) 
             | VL_LTS_III(32, this->__PVT__response_queue.size(), this->__PVT__response_queue_depth))) {
            this->__PVT__response_queue.push_back(response);
            goto __Vlabel0;
        }
        if (this->__PVT__response_queue_error_report_enabled) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__116__Vfuncout);
                        }(), __Vfunc_get_full_name__116__Vfuncout)), "Response queue overflow, response was dropped"s, 0U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_put_response\n"); );
    // Body
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

VlCoroutine Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_get_base_response\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hec55f96b__0;
    __Vtrigprevexpr_hec55f96b__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h677410df__0;
    __Vtrigprevexpr_h677410df__0 = 0;
    IData/*31:0*/ __Vtask_get_transaction_id__118__Vfuncout;
    __Vtask_get_transaction_id__118__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ queue_size;
    queue_size = 0;
    IData/*31:0*/ i;
    i = 0;
    {
        if ((0U == this->__PVT__response_queue.size())) {
            if ((0U == this->__PVT__response_queue.size())) {
                CData/*0:0*/ __VdynTrigger_h5d7bb9ca__0;
                __VdynTrigger_h5d7bb9ca__0 = 0;
                __VdynTrigger_h5d7bb9ca__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h5d7bb9ca__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                                 "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                                 1212);
                    __Vtrigprevexpr_h677410df__0 = 
                        (0U != this->__PVT__response_queue.size());
                    __VdynTrigger_h5d7bb9ca__0 = __Vtrigprevexpr_h677410df__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h5d7bb9ca__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (32'sh0 != uvm_pkg::uvm_sequence_base.response_queue.size()))", 
                                                             "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                             1212);
            }
        }
        if ((0xffffffffU == transaction_id)) {
            response = this->__PVT__response_queue.pop_front();
            goto __Vlabel0;
        }
        while (true) {
            queue_size = this->__PVT__response_queue.size();
            i = 0U;
            while (VL_LTS_III(32, i, queue_size)) {
                if ((([&]() {
                                VL_NULL_CHECK(this->__PVT__response_queue.at(i), "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 1222)
                      ->__VnoInFunc_get_transaction_id(vlSymsp, __Vtask_get_transaction_id__118__Vfuncout);
                            }(), __Vtask_get_transaction_id__118__Vfuncout) 
                     == transaction_id)) {
                    if (VL_UNLIKELY(((1U & (~ (0U != 
                                               ([&]() {
                                                    response 
                                                        = this->__PVT__response_queue.at(i);
                                                }(), 1U))))))) {
                        VL_WRITEF_NX("[%0t] %%Error: uvm_sequence_base.svh:1224: Assertion failed in %Nuvm_pkg.uvm_sequence_base.get_base_response: '$cast' failed.\n",0,
                                     64,VL_TIME_UNITED_Q(1000),
                                     -9,vlSymsp->name());
                        VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 1224, "");
                    }
                    this->__PVT__response_queue.erase(i);
                    goto __Vlabel0;
                }
                i = ((IData)(1U) + i);
            }
            if ((this->__PVT__response_queue.size() 
                 == queue_size)) {
                CData/*0:0*/ __VdynTrigger_h1a999e66__0;
                __VdynTrigger_h1a999e66__0 = 0;
                __VdynTrigger_h1a999e66__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h1a999e66__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                                 "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                                 1229);
                    __Vtrigprevexpr_hec55f96b__0 = 
                        (this->__PVT__response_queue.size() 
                         != queue_size);
                    __VdynTrigger_h1a999e66__0 = __Vtrigprevexpr_hec55f96b__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h1a999e66__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequence_base.response_queue.size() != uvm_pkg::uvm_sequence_base.queue_size))", 
                                                             "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_base.svh", 
                                                             1229);
            }
        }
        __Vlabel0: ;
    }
    co_return;}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, CData/*0:0*/ update_sequence_id, IData/*31:0*/ &m_get_sqr_sequence_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_get_sqr_sequence_id\n"); );
    // Body
    {
        if (this->__PVT__m_sqr_seq_ids.exists(sequencer_id)) {
            if (update_sequence_id) {
                this->__VnoInFunc_set_sequence_id(vlSymsp, this->__PVT__m_sqr_seq_ids
                                                  .at(sequencer_id));
            }
            m_get_sqr_sequence_id__Vfuncrtn = this->__PVT__m_sqr_seq_ids
                .at(sequencer_id);
            goto __Vlabel0;
        }
        if (update_sequence_id) {
            this->__VnoInFunc_set_sequence_id(vlSymsp, 0xffffffffU);
        }
        m_get_sqr_sequence_id__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ sequencer_id, IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_m_set_sqr_sequence_id\n"); );
    // Body
    this->__PVT__m_sqr_seq_ids.at(sequencer_id) = sequence_id;
    this->__VnoInFunc_set_sequence_id(vlSymsp, sequence_id);
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__123__Vfuncout;
    __Vfunc___VBasicRand__123__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__123__Vfuncout);
            }(), __Vfunc___VBasicRand__123__Vfuncout));
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_sequence_state = 0;
    __PVT__m_next_transaction_id = 0;
    __PVT__m_priority = 0;
    __PVT__m_wait_for_grant_semaphore = 0;
    __PVT__m_sqr_seq_ids.atDefault() = 0;
    __PVT__children_array.atDefault() = 0;
    __PVT__response_queue_depth = 0;
    __PVT__response_queue_error_report_enabled = 0;
    __PVT__do_not_randomize = 0;
    __PVT__m_use_response_handler = 0;
    __PVT__is_rel_default = 0;
    __PVT__wait_rel_default = 0;
}

Vdma_uvm_pkg__03a__03auvm_sequence_base::~Vdma_uvm_pkg__03a__03auvm_sequence_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma_uvm_pkg__03a__03auvm_sequence_base::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma_uvm_pkg__03a__03auvm_sequence_base::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vdma_uvm_pkg__03a__03auvm_sequence_base::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_sequence_state:" + VL_TO_STRING(__PVT__m_sequence_state);
    out += ", m_next_transaction_id:" + VL_TO_STRING(__PVT__m_next_transaction_id);
    out += ", m_priority:" + VL_TO_STRING(__PVT__m_priority);
    out += ", m_tr_recorder:" + VL_TO_STRING(__PVT__m_tr_recorder);
    out += ", m_wait_for_grant_semaphore:" + VL_TO_STRING(__PVT__m_wait_for_grant_semaphore);
    out += ", m_sqr_seq_ids:" + VL_TO_STRING(__PVT__m_sqr_seq_ids);
    out += ", children_array:" + VL_TO_STRING(__PVT__children_array);
    out += ", response_queue:" + VL_TO_STRING(__PVT__response_queue);
    out += ", response_queue_depth:" + VL_TO_STRING(__PVT__response_queue_depth);
    out += ", response_queue_error_report_enabled:" + VL_TO_STRING(__PVT__response_queue_error_report_enabled);
    out += ", do_not_randomize:" + VL_TO_STRING(__PVT__do_not_randomize);
    out += ", m_sequence_process:" + VL_TO_STRING(__PVT__m_sequence_process);
    out += ", m_use_response_handler:" + VL_TO_STRING(__PVT__m_use_response_handler);
    out += ", is_rel_default:" + VL_TO_STRING(__PVT__is_rel_default);
    out += ", wait_rel_default:" + VL_TO_STRING(__PVT__wait_rel_default);
    out += ", m_automatic_phase_objection_dap:" + VL_TO_STRING(__PVT__m_automatic_phase_objection_dap);
    out += ", m_starting_phase_dap:" + VL_TO_STRING(__PVT__m_starting_phase_dap);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_sequence_item::to_string_middle();
    return (out);
}
