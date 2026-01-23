// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI148__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI148__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199;
class Vdma_uvm_pkg__03a__03auvm_analysis_imp__Tz199_TBz274;
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_phase;
class Vdma_uvm_pkg__03a__03auvm_printer;
class Vdma_uvm_pkg__03a__03auvm_reg_item;
class Vdma_uvm_pkg__03a__03auvm_sequence_base;
class Vdma_uvm_pkg__03a__03auvm_sequence_item;
class Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153;
class Vdma_uvm_pkg__03a__03auvm_sequencer_base;
class Vdma_uvm_pkg__03a__03auvm_sequencer_param_base__pi148;
class Vdma_uvm_pkg__03a__03auvm_tlm_fifo__Tz199;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_sequencer_param_base__pi148__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_sequencer_param_base__pi148__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_sequencer_param_base__pi148__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_sequencer_param_base__pi148__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_sequencer_param_base__pi148 : public Vdma_uvm_pkg__03a__03auvm_sequencer_base {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_num_last_reqs;
    IData/*31:0*/ __PVT__num_last_items;
    IData/*31:0*/ __PVT__m_num_last_rsps;
    IData/*31:0*/ __PVT__m_num_reqs_sent;
    IData/*31:0*/ __PVT__m_num_rsps_received;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item>> __PVT__m_last_req_buffer;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item>> __PVT__m_last_rsp_buffer;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi153> __PVT__sqr_rsp_analysis_fifo;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199> __PVT__rsp_export;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tlm_fifo__Tz199> __PVT__m_req_fifo;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_current_item(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> &get_current_item__Vfuncrtn);
    void __VnoInFunc_get_num_last_reqs(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_reqs__Vfuncrtn);
    void __VnoInFunc_get_num_last_rsps(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_rsps__Vfuncrtn);
    void __VnoInFunc_get_num_reqs_sent(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_reqs_sent__Vfuncrtn);
    void __VnoInFunc_get_num_rsps_received(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_rsps_received__Vfuncrtn);
    void __VnoInFunc_last_req(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> &last_req__Vfuncrtn);
    void __VnoInFunc_last_rsp(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> &last_rsp__Vfuncrtn);
    void __VnoInFunc_m_last_req_push_front(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> item);
    void __VnoInFunc_m_last_rsp_push_front(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> item);
    void __VnoInFunc_put_response(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> t);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_num_last_reqs(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    void __VnoInFunc_set_num_last_rsps(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ max);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_sequencer_param_base__pi148(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_sequencer_param_base__pi148();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer_param_base__pi148>& obj);

#endif  // guard
