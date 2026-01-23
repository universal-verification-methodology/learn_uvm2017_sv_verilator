// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_TRANSACTION__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_TRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_event_;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz24;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_parent_child_link;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_printer;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_recorder;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_tr_database;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_tr_stream;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_transaction;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_transaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_transaction__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_transaction__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_transaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_transaction : public Vvirtual_sequences_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_transaction_id;
    QData/*63:0*/ __PVT__begin_time;
    QData/*63:0*/ __PVT__end_time;
    QData/*63:0*/ __PVT__accept_time;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz24> __PVT__events;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> __PVT__initiator;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tr_stream> __PVT__stream_handle;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_recorder> __PVT__tr_recorder;
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_accept_tr(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ accept_time);
    void __VnoInFunc_begin_child_tr(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &begin_child_tr__Vfuncrtn);
    void __VnoInFunc_begin_tr(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ &begin_tr__Vfuncrtn);
    void __VnoInFunc_disable_recording(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_accept_tr(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_begin_tr(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_end_tr(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_recorder> recorder);
    void __VnoInFunc_enable_recording(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_tr_stream> stream);
    void __VnoInFunc_end_tr(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ end_time, CData/*0:0*/ free_handle);
    void __VnoInFunc_get_accept_time(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ &get_accept_time__Vfuncrtn);
    void __VnoInFunc_get_begin_time(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ &get_begin_time__Vfuncrtn);
    void __VnoInFunc_get_end_time(Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_time__Vfuncrtn);
    void __VnoInFunc_get_event_pool(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_string_pool__Tz24> &get_event_pool__Vfuncrtn);
    void __VnoInFunc_get_initiator(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> &get_initiator__Vfuncrtn);
    void __VnoInFunc_get_tr_handle(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_tr_handle__Vfuncrtn);
    void __VnoInFunc_get_transaction_id(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &get_transaction_id__Vfuncrtn);
    void __VnoInFunc_is_active(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_active__Vfuncrtn);
    void __VnoInFunc_is_recording_enabled(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_recording_enabled__Vfuncrtn);
    void __VnoInFunc_m_begin_tr(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, QData/*63:0*/ begin_time, IData/*31:0*/ parent_handle, IData/*31:0*/ &m_begin_tr__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set_initiator(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> initiator);
    void __VnoInFunc_set_transaction_id(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ id);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_transaction(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> initiator);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_transaction();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_transaction>& obj);

#endif  // guard
