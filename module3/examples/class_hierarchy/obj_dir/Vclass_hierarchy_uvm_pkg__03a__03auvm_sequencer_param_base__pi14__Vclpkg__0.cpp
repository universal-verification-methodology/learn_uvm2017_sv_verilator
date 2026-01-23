// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclass_hierarchy.h for the primary calling header

#include "Vclass_hierarchy__pch.h"

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_current_item(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &get_current_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_current_item\n"); );
    // Locals
    CData/*0:0*/ __Vtask_try_peek__0__Vfuncout;
    __Vtask_try_peek__0__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> __Vtask_try_peek__0__t;
    // Body
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> t;
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 90)
                      ->__VnoInFunc_try_peek(vlSymsp, __Vtask_try_peek__0__t, __Vtask_try_peek__0__Vfuncout);
                            t = __Vtask_try_peek__0__t;
                        }(), (IData)(__Vtask_try_peek__0__Vfuncout))))) {
            get_current_item__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        get_current_item__Vfuncrtn = t;
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_last_req(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &last_req__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_last_req\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((n > this->__PVT__m_num_last_reqs)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, VL_SFORMATF_N_NX("Invalid last access (%0#), the max history is %0d",0,
                                                                                32,
                                                                                n,
                                                                                32,
                                                                                this->__PVT__m_num_last_reqs) , 0x000000c8U, ""s, 0U, ""s, 0U);
            last_req__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((n == this->__PVT__m_last_req_buffer.size())) {
            last_req__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        last_req__Vfuncrtn = this->__PVT__m_last_req_buffer.at(n);
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_last_rsp(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &last_rsp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_last_rsp\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    {
        if ((n > this->__PVT__m_num_last_rsps)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, VL_SFORMATF_N_NX("Invalid last access (%0#), the max history is %0d",0,
                                                                                32,
                                                                                n,
                                                                                32,
                                                                                this->__PVT__m_num_last_rsps) , 0x000000c8U, ""s, 0U, ""s, 0U);
            last_rsp__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((n == this->__PVT__m_last_rsp_buffer.size())) {
            last_rsp__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        last_rsp__Vfuncrtn = this->__PVT__m_last_rsp_buffer.at(n);
        __Vlabel0: ;
    }
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent)
    : Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_base(vlProcess, vlSymsp, name, parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_num_last_rsps = 1U;
    this->__PVT__num_last_items = this->__PVT__m_num_last_reqs;
    this->__PVT__m_num_last_reqs = 1U;
    ;
    this->__PVT__rsp_export = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz1, vlProcess, vlSymsp, "rsp_export"s, 
                                     VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14>{this});
    this->__PVT__sqr_rsp_analysis_fifo = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi41, vlProcess, vlSymsp, "sqr_rsp_analysis_fifo"s, 
                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14>{this});
    VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 237)->__PVT__print_enabled = 0U;
    this->__PVT__m_req_fifo = VL_NEW(Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo__Tz1, vlProcess, vlSymsp, "req_fifo"s, 
                                     VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14>{this}, 1U);
    VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 239)->__PVT__print_enabled = 0U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_do_print(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_do_print\n"); );
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 248)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_last_reqs"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__m_num_last_reqs), 0x00000020U, 0x02000000U, 0x2eU, ""s);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 249)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "num_last_rsps"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__m_num_last_rsps), 0x00000020U, 0x02000000U, 0x2eU, ""s);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_connect_phase\n"); );
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(this->__PVT__rsp_export, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 258)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 258)
                                                                                ->__PVT__analysis_export);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_build_phase\n"); );
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(this->__PVT__sqr_rsp_analysis_fifo, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 267)->__PVT__sequencer_ptr 
        = VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14>{this};
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_send_request(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_send_request\n"); );
    // Locals
    IData/*31:0*/ __Vtask_randomize__15__Vfuncout;
    __Vtask_randomize__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_transaction_id__17__Vfuncout;
    __Vtask_get_transaction_id__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_m_get_sqr_sequence_id__22__Vfuncout;
    __Vtask_m_get_sqr_sequence_id__22__Vfuncout = 0;
    CData/*0:0*/ __Vtask_try_put__24__Vfuncout;
    __Vtask_try_put__24__Vfuncout = 0;
    // Body
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> param_t;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SNDREQ"s, "Send request sequence_ptr is null"s, 0U, ""s, 0U, ""s, 0U);
    }
    if (VL_GTS_III(32, 1U, VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 283)
                   ->__PVT__m_wait_for_grant_semaphore)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SNDREQ"s, "Send request called without wait_for_grant"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 286)->__PVT__m_wait_for_grant_semaphore 
        = (VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 286)
           ->__PVT__m_wait_for_grant_semaphore - (IData)(1U));
    if (VL_CAST_DYNAMIC(t, param_t)) {
        if (rerandomize) {
            if ((1U & (~ (0U != ([&]() {
                                    VL_NULL_CHECK(param_t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 290)
                                 ->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__15__Vfuncout);
                                }(), __Vtask_randomize__15__Vfuncout))))) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SQRSNDREQ"s, "Failed to rerandomize sequence item in send_request"s, 0x000000c8U, ""s, 0U, ""s, 0U);
            }
        }
        if ((0xffffffffU == ([&]() {
                        VL_NULL_CHECK(param_t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 294)
                             ->__VnoInFunc_get_transaction_id(vlSymsp, __Vtask_get_transaction_id__17__Vfuncout);
                    }(), __Vtask_get_transaction_id__17__Vfuncout))) {
            __Vincrement1 = VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 295)
                ->__PVT__m_next_transaction_id;
            VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 295)->__PVT__m_next_transaction_id 
                = ((IData)(1U) + VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 295)
                   ->__PVT__m_next_transaction_id);
            VL_NULL_CHECK(param_t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 295)->__VnoInFunc_set_transaction_id(vlSymsp, __Vincrement1);
        }
        this->__VnoInFunc_m_last_req_push_front(vlSymsp, param_t);
    } else {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRSNDREQCAST"s, "send_request failed to cast sequence item"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(param_t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 302)->__VnoInFunc_set_sequence_id(vlSymsp, 
                                                                                ([&]() {
                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 302)
                                                                                ->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_base::__PVT__m_sequencer_id, 1U, __Vtask_m_get_sqr_sequence_id__22__Vfuncout);
            }(), __Vtask_m_get_sqr_sequence_id__22__Vfuncout));
    VL_NULL_CHECK(t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 303)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14>{this});
    if ((1U & (~ ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_req_fifo, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 304)
                  ->__VnoInFunc_try_put(vlProcess, vlSymsp, param_t, __Vtask_try_put__24__Vfuncout);
                    }(), (IData)(__Vtask_try_put__24__Vfuncout))))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRSNDREQGNI"s, "Concurrent calls to get_next_item() not supported. Consider using a semaphore to ensure that concurrent processes take turns in the driver"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__PVT__m_num_reqs_sent = ((IData)(1U) + this->__PVT__m_num_reqs_sent);
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_put_response(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_put_response\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_sequence_id__29__Vfuncout;
    __Vtask_get_sequence_id__29__Vfuncout = 0;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> __Vfunc_m_find_sequence__31__Vfuncout;
    IData/*31:0*/ __Vtask_get_sequence_id__32__Vfuncout;
    __Vtask_get_sequence_id__32__Vfuncout = 0;
    CData/*0:0*/ __Vtask_get_use_response_handler__33__Vfuncout;
    __Vtask_get_use_response_handler__33__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_sequence_id__37__Vfuncout;
    __Vtask_get_sequence_id__37__Vfuncout = 0;
    // Body
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr;
    {
        if ((VlNull{} == t)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRPUT"s, "Driver put a null response"s, 0U, ""s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_m_last_rsp_push_front(vlSymsp, t);
        this->__PVT__m_num_rsps_received = ((IData)(1U) 
                                            + this->__PVT__m_num_rsps_received);
        if ((0xffffffffU == ([&]() {
                        VL_NULL_CHECK(t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 328)
                             ->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__29__Vfuncout);
                    }(), __Vtask_get_sequence_id__29__Vfuncout))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SQRPUT"s, "Driver put a response with null sequence_id"s, 0U, ""s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_m_find_sequence(vlSymsp, 
                                          ([&]() {
                    VL_NULL_CHECK(t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 335)
                                           ->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__32__Vfuncout);
                }(), __Vtask_get_sequence_id__32__Vfuncout), __Vfunc_m_find_sequence__31__Vfuncout);
        sequence_ptr = __Vfunc_m_find_sequence__31__Vfuncout;
        if ((VlNull{} != sequence_ptr)) {
            if (([&]() {
                        VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 339)
                 ->__VnoInFunc_get_use_response_handler(vlSymsp, __Vtask_get_use_response_handler__33__Vfuncout);
                    }(), (IData)(__Vtask_get_use_response_handler__33__Vfuncout))) {
                VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 340)->__VnoInFunc_response_handler(vlSymsp, t);
                goto __Vlabel0;
            }
            VL_NULL_CHECK(sequence_ptr, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 344)->__VnoInFunc_put_response(vlProcess, vlSymsp, t);
        } else {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "Sequencer"s, VL_SFORMATF_N_NX("Dropping response for sequence %0d, sequence not found.  Probable cause: sequence exited or has been killed",0,
                                                                                32,
                                                                                ([&]() {
                                VL_NULL_CHECK(t, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequencer_param_base.svh", 349)
                                                                                ->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__37__Vfuncout);
                            }(), __Vtask_get_sequence_id__37__Vfuncout)) , 0x000000c8U, ""s, 0U, ""s, 0U);
        }
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_analysis_write(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_analysis_write\n"); );
    // Body
    VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> response;
    if ((! VL_CAST_DYNAMIC(t, response))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "ANALWRT"s, "Failure to cast analysis port write item"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_put_response(vlProcess, vlSymsp, response);
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_num_reqs_sent(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_reqs_sent__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_num_reqs_sent\n"); );
    // Body
    get_num_reqs_sent__Vfuncrtn = this->__PVT__m_num_reqs_sent;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_num_rsps_received(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_rsps_received__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_num_rsps_received\n"); );
    // Body
    get_num_rsps_received__Vfuncrtn = this->__PVT__m_num_rsps_received;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_set_num_last_reqs(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_set_num_last_reqs\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0x00000400U < max)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, "Invalid last size; 1024 is the maximum and will be used"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        max = 0x00000400U;
    }
    while (((0U != this->__PVT__m_last_req_buffer.size()) 
            & (this->__PVT__m_last_req_buffer.size() 
               > max))) {
        (void)this->__PVT__m_last_req_buffer.pop_back();
    }
    this->__PVT__m_num_last_reqs = max;
    this->__PVT__num_last_items = max;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_num_last_reqs(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_reqs__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_num_last_reqs\n"); );
    // Body
    get_num_last_reqs__Vfuncrtn = this->__PVT__m_num_last_reqs;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_m_last_req_push_front(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_m_last_req_push_front\n"); );
    // Body
    {
        if ((1U & (~ (0U != this->__PVT__m_num_last_reqs)))) {
            goto __Vlabel0;
        }
        if ((this->__PVT__m_last_req_buffer.size() 
             == this->__PVT__m_num_last_reqs)) {
            (void)this->__PVT__m_last_req_buffer.pop_back();
        }
        this->__PVT__m_last_req_buffer.push_front(item);
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_set_num_last_rsps(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ max) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_set_num_last_rsps\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((0x00000400U < max)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "HSTOB"s, "Invalid last size; 1024 is the maximum and will be used"s, 0x000000c8U, ""s, 0U, ""s, 0U);
        max = 0x00000400U;
    }
    while (((0U != this->__PVT__m_last_rsp_buffer.size()) 
            & (this->__PVT__m_last_rsp_buffer.size() 
               > max))) {
        (void)this->__PVT__m_last_rsp_buffer.pop_back();
    }
    this->__PVT__m_num_last_rsps = max;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_num_last_rsps(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_rsps__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_get_num_last_rsps\n"); );
    // Body
    get_num_last_rsps__Vfuncrtn = this->__PVT__m_num_last_rsps;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_m_last_rsp_push_front(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_m_last_rsp_push_front\n"); );
    // Body
    {
        if ((1U & (~ (0U != this->__PVT__m_num_last_rsps)))) {
            goto __Vlabel0;
        }
        if ((this->__PVT__m_last_rsp_buffer.size() 
             == this->__PVT__m_num_last_rsps)) {
            (void)this->__PVT__m_last_rsp_buffer.pop_back();
        }
        this->__PVT__m_last_rsp_buffer.push_front(item);
        __Vlabel0: ;
    }
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__43__Vfuncout;
    __Vfunc___VBasicRand__43__Vfuncout = 0;
    // Body
    Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vclass_hierarchy_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__43__Vfuncout);
            }(), __Vfunc___VBasicRand__43__Vfuncout));
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::_ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_num_last_reqs = 0;
    __PVT__num_last_items = 0;
    __PVT__m_num_last_rsps = 0;
    __PVT__m_num_reqs_sent = 0;
    __PVT__m_num_rsps_received = 0;
}

Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::~Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_last_req_buffer:" + VL_TO_STRING(__PVT__m_last_req_buffer);
    out += ", m_last_rsp_buffer:" + VL_TO_STRING(__PVT__m_last_rsp_buffer);
    out += ", m_num_last_reqs:" + VL_TO_STRING(__PVT__m_num_last_reqs);
    out += ", num_last_items:" + VL_TO_STRING(__PVT__num_last_items);
    out += ", m_num_last_rsps:" + VL_TO_STRING(__PVT__m_num_last_rsps);
    out += ", m_num_reqs_sent:" + VL_TO_STRING(__PVT__m_num_reqs_sent);
    out += ", m_num_rsps_received:" + VL_TO_STRING(__PVT__m_num_rsps_received);
    out += ", sqr_rsp_analysis_fifo:" + VL_TO_STRING(__PVT__sqr_rsp_analysis_fifo);
    out += ", rsp_export:" + VL_TO_STRING(__PVT__rsp_export);
    out += ", m_req_fifo:" + VL_TO_STRING(__PVT__m_req_fifo);
    out += ", "+ Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_base::to_string_middle();
    return (out);
}
