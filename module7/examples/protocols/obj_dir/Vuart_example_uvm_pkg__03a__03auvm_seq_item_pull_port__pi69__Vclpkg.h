// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_PORT__PI69__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_PORT__PI69__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example___024unit__03a__03aUartTxn;
class Vuart_example_uvm_pkg__03a__03auvm_component;
class Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz141;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz141__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69 : public Vuart_example_uvm_pkg__03a__03auvm_port_base__Tz141 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_enabled;
    void __VnoInFunc_disable_auto_item_recording(Vuart_example__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> &t);
    VlCoroutine __VnoInFunc_get_next_item(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> &t);
    virtual void __VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_do_available(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_is_auto_item_recording_enabled(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    void __VnoInFunc_item_done(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> t);
    VlCoroutine __VnoInFunc_peek(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> &t);
    void __VnoInFunc_put(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> t);
    void __VnoInFunc_put_response(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> t);
    VlCoroutine __VnoInFunc_try_next_item(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example___024unit__03a__03aUartTxn> &t);
    VlCoroutine __VnoInFunc_wait_for_sequences(Vuart_example__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69>& obj);

#endif  // guard
