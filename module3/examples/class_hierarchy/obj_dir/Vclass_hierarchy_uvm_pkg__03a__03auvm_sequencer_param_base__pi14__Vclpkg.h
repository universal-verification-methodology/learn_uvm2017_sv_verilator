// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI14__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI14__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy___024unit__03a__03aMyTransaction;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz1;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_imp__Tz1_TBz147;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_phase;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_printer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi41;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_base;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo__Tz1;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14 : public Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_base {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_num_last_reqs;
    IData/*31:0*/ __PVT__num_last_items;
    IData/*31:0*/ __PVT__m_num_last_rsps;
    IData/*31:0*/ __PVT__m_num_reqs_sent;
    IData/*31:0*/ __PVT__m_num_rsps_received;
    VlQueue<VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction>> __PVT__m_last_req_buffer;
    VlQueue<VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction>> __PVT__m_last_rsp_buffer;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi41> __PVT__sqr_rsp_analysis_fifo;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_analysis_export__Tz1> __PVT__rsp_export;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_tlm_fifo__Tz1> __PVT__m_req_fifo;
    virtual void __VnoInFunc___VBasicRand(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_current_item(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &get_current_item__Vfuncrtn);
    void __VnoInFunc_get_num_last_reqs(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_reqs__Vfuncrtn);
    void __VnoInFunc_get_num_last_rsps(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_rsps__Vfuncrtn);
    void __VnoInFunc_get_num_reqs_sent(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_reqs_sent__Vfuncrtn);
    void __VnoInFunc_get_num_rsps_received(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_rsps_received__Vfuncrtn);
    void __VnoInFunc_last_req(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &last_req__Vfuncrtn);
    void __VnoInFunc_last_rsp(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> &last_rsp__Vfuncrtn);
    void __VnoInFunc_m_last_req_push_front(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> item);
    void __VnoInFunc_m_last_rsp_push_front(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> item);
    void __VnoInFunc_put_response(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy___024unit__03a__03aMyTransaction> t);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_num_last_reqs(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    void __VnoInFunc_set_num_last_rsps(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ max);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14();
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_sequencer_param_base__pi14>& obj);

#endif  // guard
