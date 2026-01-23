// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_PORT__PI106__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_PORT__PI106__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106 : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_port_base__Tz203 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__print_enabled;
    void __VnoInFunc_disable_auto_item_recording(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> &t);
    VlCoroutine __VnoInFunc_get_next_item(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> &t);
    virtual void __VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_do_available(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_is_auto_item_recording_enabled(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    void __VnoInFunc_item_done(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> t);
    VlCoroutine __VnoInFunc_peek(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> &t);
    void __VnoInFunc_put(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> t);
    void __VnoInFunc_put_response(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> t);
    VlCoroutine __VnoInFunc_try_next_item(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_item> &t);
    VlCoroutine __VnoInFunc_wait_for_sequences(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent, IData/*31:0*/ min_size, IData/*31:0*/ max_size);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_seq_item_pull_port__pi106>& obj);

#endif  // guard
