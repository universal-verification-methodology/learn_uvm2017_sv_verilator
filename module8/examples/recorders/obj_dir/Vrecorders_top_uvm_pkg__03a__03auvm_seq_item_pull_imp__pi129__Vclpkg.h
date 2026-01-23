// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_IMP__PI129__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_IMP__PI129__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz243;
class Vrecorders_top_uvm_pkg__03a__03auvm_reg_item;
class Vrecorders_top_uvm_pkg__03a__03auvm_sequencer__Tz174_TBz174;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz243__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129 : public Vrecorders_top_uvm_pkg__03a__03auvm_port_base__Tz243 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer__Tz174_TBz174> __PVT__m_imp;
    void __VnoInFunc_disable_auto_item_recording(Vrecorders_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t);
    VlCoroutine __VnoInFunc_get_next_item(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_do_available(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_is_auto_item_recording_enabled(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    void __VnoInFunc_item_done(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> t);
    VlCoroutine __VnoInFunc_peek(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t);
    void __VnoInFunc_put(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> t);
    void __VnoInFunc_put_response(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> t);
    VlCoroutine __VnoInFunc_try_next_item(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_reg_item> &t);
    VlCoroutine __VnoInFunc_wait_for_sequences(Vrecorders_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_sequencer__Tz174_TBz174> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi129>& obj);

#endif  // guard
