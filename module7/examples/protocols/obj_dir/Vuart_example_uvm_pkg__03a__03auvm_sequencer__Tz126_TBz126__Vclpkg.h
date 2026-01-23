// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_SEQUENCER__TZ126_TBZ126__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_SEQUENCER__TZ126_TBZ126__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example___024unit__03a__03aUartTxn;
class Vuart_example_uvm_pkg__03a__03auvm_component;
class Vuart_example_uvm_pkg__03a__03auvm_component_registry__Tz140;
class Vuart_example_uvm_pkg__03a__03auvm_coreservice_t;
class Vuart_example_uvm_pkg__03a__03auvm_object_wrapper;
class Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz141;
class Vuart_example_uvm_pkg__03a__03auvm_root;
class Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70;
class Vuart_example_uvm_pkg__03a__03auvm_sequence_base;
class Vuart_example_uvm_pkg__03a__03auvm_sequence_request;
class Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126;
class Vuart_example_uvm_pkg__03a__03auvm_sequencer_param_base__pi67;
class Vuart_example_uvm_pkg__03a__03auvm_tlm_fifo__Tz126;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component_registry__Tz140> &get_type__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_sequencer_param_base__pi67__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126 : public Vuart_example_uvm_pkg__03a__03auvm_sequencer_param_base__pi67 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__sequence_item_requested;
    CData/*0:0*/ __PVT__get_next_item_called;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70> __PVT__seq_item_export;
    virtual void __VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuart_example__Syms* __restrict vlSymsp) {}
    VlCoroutine __VnoInFunc_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> &t);
    virtual void __VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_item_done(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> item);
    void __VnoInFunc_item_done_get_trigger_data(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> &item_done_get_trigger_data__Vfuncrtn);
    void __VnoInFunc_item_done_trigger(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> item);
    virtual void __VnoInFunc_m_find_number_driver_connections(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> &t);
    virtual void __VnoInFunc_put(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> t);
    virtual void __VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_stop_sequences(Vuart_example__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_try_next_item(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> &t);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126>& obj);

#endif  // guard
