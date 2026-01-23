// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_IMP__PI70__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_SEQ_ITEM_PULL_IMP__PI70__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma___024unit__03a__03aDmaTxn;
class Vdma_uvm_pkg__03a__03auvm_port_base__Tz141;
class Vdma_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_port_base__Tz141__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70 : public Vdma_uvm_pkg__03a__03auvm_port_base__Tz141 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126> __PVT__m_imp;
    void __VnoInFunc_disable_auto_item_recording(Vdma__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_get(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t);
    VlCoroutine __VnoInFunc_get_next_item(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_has_do_available(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    void __VnoInFunc_is_auto_item_recording_enabled(Vdma__Syms* __restrict vlSymsp, CData/*0:0*/ &is_auto_item_recording_enabled__Vfuncrtn);
    void __VnoInFunc_item_done(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t);
    VlCoroutine __VnoInFunc_peek(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t);
    void __VnoInFunc_put(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t);
    void __VnoInFunc_put_response(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> t);
    VlCoroutine __VnoInFunc_try_next_item(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma___024unit__03a__03aDmaTxn> &t);
    VlCoroutine __VnoInFunc_wait_for_sequences(Vdma__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126> imp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70>& obj);

#endif  // guard
