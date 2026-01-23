// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_SEQUENCE__TZ1_TBZ1__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_SEQUENCE__TZ1_TBZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences___024unit__03a__03aVirtualTransaction;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_printer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_base;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_param_base__pi7;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1 : public Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_base {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequencer_param_base__pi7> __PVT__param_sequencer;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> __PVT__req;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> __PVT__rsp;
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_current_item(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &get_current_item__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get_response(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> &response, IData/*31:0*/ transaction_id);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> response_item);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_send_request(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_sequence__Tz1_TBz1>& obj);

#endif  // guard
