// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_SEQUENCE___VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_SEQUENCE___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_printer;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_base;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_item;
class Varchitecture_uvm_pkg__03a__03auvm_sequencer_base;
class Varchitecture_uvm_pkg__03a__03auvm_sequencer_param_base_;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_sequence___Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_sequence___Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_sequence___Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_sequence___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_sequence_base__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_sequence_ : public Varchitecture_uvm_pkg__03a__03auvm_sequence_base {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequencer_param_base_> __PVT__param_sequencer;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> __PVT__req;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> __PVT__rsp;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_do_print(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_current_item(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> &get_current_item__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_get_response(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> &response, IData/*31:0*/ transaction_id);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> response_item);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_send_request(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> request, CData/*0:0*/ rerandomize);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_sequence_(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_sequence_();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_>& obj);

#endif  // guard
