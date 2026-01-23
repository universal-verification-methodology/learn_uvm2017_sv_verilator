// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI70__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI70__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_export__Tz126;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_imp__Tz126_TBz178;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_item;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi84;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_base;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_param_base__pi70;
class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_fifo__Tz126;


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_param_base__pi70__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_param_base__pi70__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_param_base__pi70__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_param_base__pi70__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.h"

class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_param_base__pi70 : public Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_base {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_num_last_reqs;
    IData/*31:0*/ __PVT__num_last_items;
    IData/*31:0*/ __PVT__m_num_last_rsps;
    IData/*31:0*/ __PVT__m_num_reqs_sent;
    IData/*31:0*/ __PVT__m_num_rsps_received;
    VlQueue<VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction>> __PVT__m_last_req_buffer;
    VlQueue<VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction>> __PVT__m_last_rsp_buffer;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi84> __PVT__sqr_rsp_analysis_fifo;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_analysis_export__Tz126> __PVT__rsp_export;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_tlm_fifo__Tz126> __PVT__m_req_fifo;
    virtual void __VnoInFunc___VBasicRand(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_current_item(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &get_current_item__Vfuncrtn);
    void __VnoInFunc_get_num_last_reqs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_reqs__Vfuncrtn);
    void __VnoInFunc_get_num_last_rsps(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_rsps__Vfuncrtn);
    void __VnoInFunc_get_num_reqs_sent(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_reqs_sent__Vfuncrtn);
    void __VnoInFunc_get_num_rsps_received(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_rsps_received__Vfuncrtn);
    void __VnoInFunc_last_req(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &last_req__Vfuncrtn);
    void __VnoInFunc_last_rsp(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> &last_rsp__Vfuncrtn);
    void __VnoInFunc_m_last_req_push_front(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> item);
    void __VnoInFunc_m_last_rsp_push_front(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> item);
    void __VnoInFunc_put_response(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm___024unit__03a__03aAndGateTransaction> t);
    virtual void __VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_num_last_reqs(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    void __VnoInFunc_set_num_last_rsps(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ max);
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_param_base__pi70(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_param_base__pi70();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_sequencer_param_base__pi70>& obj);

#endif  // guard
