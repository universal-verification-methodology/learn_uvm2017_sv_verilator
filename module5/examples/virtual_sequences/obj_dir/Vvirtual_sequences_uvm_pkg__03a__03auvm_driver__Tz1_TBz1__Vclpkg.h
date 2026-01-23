// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_DRIVER__TZ1_TBZ1__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_DRIVER__TZ1_TBZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences___024unit__03a__03aVirtualTransaction;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_port__Tz1;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__Tz34;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_port__pi14;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component_registry__Tz34> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1 : public Vvirtual_sequences_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_port__pi14> __PVT__seq_item_port;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_seq_item_pull_port__pi14> __PVT__seq_item_prod_if;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_analysis_port__Tz1> __PVT__rsp_port;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> __PVT__req;
    VlClassRef<Vvirtual_sequences___024unit__03a__03aVirtualTransaction> __PVT__rsp;
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_driver__Tz1_TBz1>& obj);

#endif  // guard
