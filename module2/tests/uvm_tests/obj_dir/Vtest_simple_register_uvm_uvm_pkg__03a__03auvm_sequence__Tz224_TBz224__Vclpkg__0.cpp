// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_send_request(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_send_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> m_request;
    if ((VlNull{} == Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SSENDREQ"s, "Null m_sequencer reference"s, 0U, ""s, 0U, ""s, 0U);
    }
    if ((! VL_CAST_DYNAMIC(request, m_request))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SSENDREQ"s, "Failure to cast uvm_sequence_item to request"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence.svh", 83)->__VnoInFunc_send_request(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224>{this}, m_request, rerandomize);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_get_current_item(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> &get_current_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_get_current_item\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> __Vtask_get_current_item__5__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((! VL_CAST_DYNAMIC(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, this->__PVT__param_sequencer))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SGTCURR"s, "Failure to cast m_sequencer to the parameterized sequencer"s, 0U, ""s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__param_sequencer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence.svh", 102)->__VnoInFunc_get_current_item(vlSymsp, __Vtask_get_current_item__5__Vfuncout);
    get_current_item__Vfuncrtn = __Vtask_get_current_item__5__Vfuncout;
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_get_response(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> &response, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_get_response\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> __Vtask_get_base_response__6__response;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VL_KEEP_THIS;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> rsp;
    co_await this->__VnoInFunc_get_base_response(vlProcess, vlSymsp, __Vtask_get_base_response__6__response, transaction_id);
    rsp = __Vtask_get_base_response__6__response;
    if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(rsp, response))))) {
        VL_WRITEF_NX("[%0t] %%Error: uvm_sequence.svh:128: Assertion failed in %Nuvm_pkg.uvm_sequence__Tz224_TBz224.get_response: '$cast' failed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence.svh", 128, "");
    }
    co_return;}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_put_response(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> response_item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_put_response\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_item> response;
    if ((! VL_CAST_DYNAMIC(response_item, response))) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "PUTRSP"s, "Failure to cast response in put_response"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_put_base_response(vlProcess, vlSymsp, response_item);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_do_print\n"); );
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence.svh", 150)->__VnoInFunc_print_object(vlProcess, vlSymsp, "req"s, this->__PVT__req, 0x2eU);
    VL_NULL_CHECK(printer, "/home/yongfu/proj/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence.svh", 151)->__VnoInFunc_print_object(vlProcess, vlSymsp, "rsp"s, this->__PVT__rsp, 0x2eU);
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__13__Vfuncout;
    __Vfunc___VBasicRand__13__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__13__Vfuncout);
            }(), __Vfunc___VBasicRand__13__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc___VBasicRand(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence__Tz224_TBz224::to_string_middle\n"); );
    // Body
    std::string out;
    out += "param_sequencer:" + VL_TO_STRING(__PVT__param_sequencer);
    out += ", req:" + VL_TO_STRING(__PVT__req);
    out += ", rsp:" + VL_TO_STRING(__PVT__rsp);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base::to_string_middle();
    return (out);
}
