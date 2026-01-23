// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175__Vclpkg::__VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component_registry__Tz243> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component_registry__Tz243> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz243__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component_registry__Tz243> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz243__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_item_done_get_trigger_data(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &item_done_get_trigger_data__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_item_done_get_trigger_data\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> __Vfunc_last_rsp__1__Vfuncout;
    // Body
    this->__VnoInFunc_last_rsp(vlSymsp, 0U, __Vfunc_last_rsp__1__Vfuncout);
    item_done_get_trigger_data__Vfuncrtn = __Vfunc_last_rsp__1__Vfuncout;
}

Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> parent)
    : Vtransactions_uvm_pkg__03a__03auvm_sequencer_param_base__pi130(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
    this->__PVT__seq_item_export = VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129, vlProcess, vlSymsp, "seq_item_export"s, 
                                          VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175>{this});
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_stop_sequences(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_stop_sequences\n"); );
    // Locals
    IData/*31:0*/ __Vtask_used__5__Vfuncout;
    __Vtask_used__5__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__6__id;
    std::string __Vtask_uvm_report_info__6__message;
    IData/*31:0*/ __Vtask_uvm_report_info__6__verbosity;
    __Vtask_uvm_report_info__6__verbosity = 0;
    std::string __Vtask_uvm_report_info__6__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__6__line;
    __Vtask_uvm_report_info__6__line = 0;
    std::string __Vtask_uvm_report_info__6__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__6__report_enabled_checked;
    __Vtask_uvm_report_info__6__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__7__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__9__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> t;
    Vtransactions_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(vlSymsp);
    this->__PVT__sequence_item_requested = 0U;
    this->__PVT__get_next_item_called = 0U;
    if ((0U != ([&]() {
                    VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_sequencer_param_base__pi130::__PVT__m_req_fifo, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 170)
                ->__VnoInFunc_used(vlSymsp, __Vtask_used__5__Vfuncout);
                }(), __Vtask_used__5__Vfuncout))) {
        __Vtask_uvm_report_info__6__report_enabled_checked = 0U;
        __Vtask_uvm_report_info__6__context_name = ""s;
        __Vtask_uvm_report_info__6__line = 0U;
        __Vtask_uvm_report_info__6__filename = ""s;
        __Vtask_uvm_report_info__6__verbosity = 0x000000c8U;
        __Vtask_uvm_report_info__6__message = "Sequences stopped.  Removing request from sequencer fifo"s;
        __Vtask_uvm_report_info__6__id = VL_CVT_PACK_STR_NN(
                                                            ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__7__Vfuncout);
                }(), __Vfunc_get_full_name__7__Vfuncout));
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__8__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__8__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__9__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__9__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__6__id, __Vtask_uvm_report_info__6__message, __Vtask_uvm_report_info__6__verbosity, __Vtask_uvm_report_info__6__filename, __Vtask_uvm_report_info__6__line, __Vtask_uvm_report_info__6__context_name, (IData)(__Vtask_uvm_report_info__6__report_enabled_checked));
        VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_sequencer_param_base__pi130::__PVT__m_req_fifo, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 172)->__VnoInFunc_flush(vlSymsp);
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequencer"s;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_m_find_number_driver_connections(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_m_find_number_driver_connections\n"); );
    // Body
    VlAssocArray<std::string, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz244>> provided_to_port_list;
    VL_NULL_CHECK(this->__PVT__seq_item_export, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 197)->__VnoInFunc_get_provided_to(vlSymsp, provided_to_port_list);
    m_find_number_driver_connections__Vfuncrtn = provided_to_port_list.size();
}

VlCoroutine Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_get_next_item(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_get_next_item\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__13__id;
    std::string __Vtask_uvm_report_error__13__message;
    IData/*31:0*/ __Vtask_uvm_report_error__13__verbosity;
    __Vtask_uvm_report_error__13__verbosity = 0;
    std::string __Vtask_uvm_report_error__13__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__13__line;
    __Vtask_uvm_report_error__13__line = 0;
    std::string __Vtask_uvm_report_error__13__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__13__report_enabled_checked;
    __Vtask_uvm_report_error__13__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__14__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__15__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__16__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__19__t;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> req_item;
    if (this->__PVT__get_next_item_called) {
        __Vtask_uvm_report_error__13__report_enabled_checked = 0U;
        __Vtask_uvm_report_error__13__context_name = ""s;
        __Vtask_uvm_report_error__13__line = 0U;
        __Vtask_uvm_report_error__13__filename = ""s;
        __Vtask_uvm_report_error__13__verbosity = 0U;
        __Vtask_uvm_report_error__13__message = "Get_next_item called twice without item_done or get in between"s;
        __Vtask_uvm_report_error__13__id = VL_CVT_PACK_STR_NN(
                                                              ([&]() {
                    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__14__Vfuncout);
                }(), __Vfunc_get_full_name__14__Vfuncout));
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__15__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
            = __Vfunc_get__15__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__16__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
            = __Vtask_get_root__16__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__13__id, __Vtask_uvm_report_error__13__message, __Vtask_uvm_report_error__13__verbosity, __Vtask_uvm_report_error__13__filename, __Vtask_uvm_report_error__13__line, __Vtask_uvm_report_error__13__context_name, (IData)(__Vtask_uvm_report_error__13__report_enabled_checked));
    }
    if ((1U & (~ (IData)(this->__PVT__sequence_item_requested)))) {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
    }
    this->__PVT__sequence_item_requested = 1U;
    this->__PVT__get_next_item_called = 1U;
    co_await VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_sequencer_param_base__pi130::__PVT__m_req_fifo, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 222)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__19__t);
    t = __Vtask_peek__19__t;
}

VlCoroutine Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_try_next_item(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_try_next_item\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__20__id;
    std::string __Vtask_uvm_report_error__20__message;
    IData/*31:0*/ __Vtask_uvm_report_error__20__verbosity;
    __Vtask_uvm_report_error__20__verbosity = 0;
    std::string __Vtask_uvm_report_error__20__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__20__line;
    __Vtask_uvm_report_error__20__line = 0;
    std::string __Vtask_uvm_report_error__20__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__20__report_enabled_checked;
    __Vtask_uvm_report_error__20__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__21__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
    IData/*31:0*/ __Vfunc_m_choose_next_request__26__Vfuncout;
    __Vfunc_m_choose_next_request__26__Vfuncout = 0;
    CData/*0:0*/ __Vtask_try_peek__30__Vfuncout;
    __Vtask_try_peek__30__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_peek__30__t;
    std::string __Vtask_uvm_report_error__31__id;
    std::string __Vtask_uvm_report_error__31__message;
    IData/*31:0*/ __Vtask_uvm_report_error__31__verbosity;
    __Vtask_uvm_report_error__31__verbosity = 0;
    std::string __Vtask_uvm_report_error__31__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__31__line;
    __Vtask_uvm_report_error__31__line = 0;
    std::string __Vtask_uvm_report_error__31__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__31__report_enabled_checked;
    __Vtask_uvm_report_error__31__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__32__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    IData/*31:0*/ selected_sequence;
    selected_sequence = 0;
    QData/*63:0*/ arb_time;
    arb_time = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> seq;
    {
        if (this->__PVT__get_next_item_called) {
            __Vtask_uvm_report_error__20__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__20__context_name = ""s;
            __Vtask_uvm_report_error__20__line = 0U;
            __Vtask_uvm_report_error__20__filename = ""s;
            __Vtask_uvm_report_error__20__verbosity = 0U;
            __Vtask_uvm_report_error__20__message = "get_next_item/try_next_item called twice without item_done or get in between"s;
            __Vtask_uvm_report_error__20__id = VL_CVT_PACK_STR_NN(
                                                                  ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__21__Vfuncout);
                    }(), __Vfunc_get_full_name__21__Vfuncout));
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__22__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__23__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__20__id, __Vtask_uvm_report_error__20__message, __Vtask_uvm_report_error__20__verbosity, __Vtask_uvm_report_error__20__filename, __Vtask_uvm_report_error__20__line, __Vtask_uvm_report_error__20__context_name, (IData)(__Vtask_uvm_report_error__20__report_enabled_checked));
            goto __Vlabel0;
        }
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, __Vfunc_m_choose_next_request__26__Vfuncout);
        selected_sequence = __Vfunc_m_choose_next_request__26__Vfuncout;
        if ((0xffffffffU == selected_sequence)) {
            t = VlNull{};
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.at(selected_sequence), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 253)
                                                      ->__PVT__request_id);
        seq = VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.at(selected_sequence), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 254)
            ->__PVT__sequence_ptr;
        Vtransactions_uvm_pkg__03a__03auvm_sequencer_base::__PVT__arb_sequence_q.erase(selected_sequence);
        this->__VnoInFunc_m_update_lists(vlSymsp);
        this->__PVT__sequence_item_requested = 1U;
        this->__PVT__get_next_item_called = 1U;
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_sequencer_param_base__pi130::__PVT__m_req_fifo, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 264)
                      ->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__30__t, __Vtask_try_peek__30__Vfuncout);
                            t = __Vtask_try_peek__30__t;
                        }(), (IData)(__Vtask_try_peek__30__Vfuncout))))) {
            __Vtask_uvm_report_error__31__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__31__context_name = ""s;
            __Vtask_uvm_report_error__31__line = 0U;
            __Vtask_uvm_report_error__31__filename = ""s;
            __Vtask_uvm_report_error__31__verbosity = 0U;
            __Vtask_uvm_report_error__31__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("try_next_item: the selected sequence '"s, 
                                                                                ([&]() {
                                        VL_NULL_CHECK(seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 266)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__32__Vfuncout);
                                    }(), __Vtask_get_full_name__32__Vfuncout)), "' did not produce an item within an NBA delay. "s), "Sequences should not consume time between calls to start_item and finish_item. "s), "Returning null item."s));
            __Vtask_uvm_report_error__31__id = "TRY_NEXT_BLOCKED"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__33__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__34__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__31__id, __Vtask_uvm_report_error__31__message, __Vtask_uvm_report_error__31__verbosity, __Vtask_uvm_report_error__31__filename, __Vtask_uvm_report_error__31__line, __Vtask_uvm_report_error__31__context_name, (IData)(__Vtask_uvm_report_error__31__report_enabled_checked));
        }
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_item_done(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_item_done\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_get__36__Vfuncout;
    __Vtask_try_get__36__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> __Vtask_try_get__36__t;
    IData/*31:0*/ __Vtask_get_sequence_id__37__Vfuncout;
    __Vtask_get_sequence_id__37__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_transaction_id__38__Vfuncout;
    __Vtask_get_transaction_id__38__Vfuncout = 0;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> t;
    this->__PVT__sequence_item_requested = 0U;
    this->__PVT__get_next_item_called = 0U;
    if (([&]() {
                VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_sequencer_param_base__pi130::__PVT__m_req_fifo, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 283)
         ->__VnoInFunc_try_get(vlProcess, vlSymsp, __Vtask_try_get__36__t, __Vtask_try_get__36__Vfuncout);
                t = __Vtask_try_get__36__t;
            }(), (IData)(__Vtask_try_get__36__Vfuncout))) {
        VL_NULL_CHECK(t, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 287)->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__37__Vfuncout);
        Vtransactions_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_sequence_id 
            = __Vtask_get_sequence_id__37__Vfuncout;
        VL_NULL_CHECK(t, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 288)->__VnoInFunc_get_transaction_id(vlSymsp, __Vtask_get_transaction_id__38__Vfuncout);
        Vtransactions_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_wait_for_item_transaction_id 
            = __Vtask_get_transaction_id__38__Vfuncout;
    } else {
        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "SQRBADITMDN"s, "Item_done() called with no outstanding requests. Each call to item_done() must be paired with a previous call to get_next_item()."s, 0U, ""s, 0U, ""s, 0U);
    }
    if ((VlNull{} != item)) {
        VL_NULL_CHECK(this->__PVT__seq_item_export, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 292)->__VnoInFunc_put_response(vlProcess, vlSymsp, item);
    }
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_put(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_put\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
}

VlCoroutine Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_get(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__44__t;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__sequence_item_requested)))) {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
    }
    this->__PVT__sequence_item_requested = 1U;
    co_await VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_sequencer_param_base__pi130::__PVT__m_req_fifo, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 316)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__44__t);
    t = __Vtask_peek__44__t;
    this->__VnoInFunc_item_done(vlProcess, vlSymsp, VlNull{});
}

VlCoroutine Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_peek(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> &t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_peek\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> __Vtask_peek__47__t;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__sequence_item_requested)))) {
        co_await this->__VnoInFunc_m_select_sequence(vlProcess, vlSymsp);
    }
    this->__PVT__sequence_item_requested = 1U;
    co_await VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_sequencer_param_base__pi130::__PVT__m_req_fifo, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer.svh", 333)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__47__t);
    t = __Vtask_peek__47__t;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_item_done_trigger(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_item_done_trigger\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_item_done(vlProcess, vlSymsp, item);
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__50__Vfuncout;
    __Vfunc___Vbasic_randomize__50__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__50__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__50__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc___Vbasic_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__sequence_item_requested = 0;
    __PVT__get_next_item_called = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtransactions_uvm_pkg__03a__03auvm_sequencer__Tz175_TBz175::to_string_middle\n"); );
    // Body
    std::string out;
    out += "sequence_item_requested:" + VL_TO_STRING(__PVT__sequence_item_requested);
    out += ", get_next_item_called:" + VL_TO_STRING(__PVT__get_next_item_called);
    out += ", seq_item_export:" + VL_TO_STRING(__PVT__seq_item_export);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_sequencer_param_base__pi130::to_string_middle();
    return (out);
}
