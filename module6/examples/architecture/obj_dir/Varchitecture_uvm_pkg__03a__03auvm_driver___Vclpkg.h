// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_DRIVER___VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_DRIVER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_analysis_port__Tz19;
class Varchitecture_uvm_pkg__03a__03auvm_component;
class Varchitecture_uvm_pkg__03a__03auvm_component_registry__Tz196;
class Varchitecture_uvm_pkg__03a__03auvm_driver_;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_phase;
class Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_port__pi102;
class Varchitecture_uvm_pkg__03a__03auvm_sequence_item;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_driver___Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_driver___Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_driver___Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_driver___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component_registry__Tz196> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_driver_ : public Varchitecture_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_port__pi102> __PVT__seq_item_port;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_seq_item_pull_port__pi102> __PVT__seq_item_prod_if;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_analysis_port__Tz19> __PVT__rsp_port;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> __PVT__req;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_sequence_item> __PVT__rsp;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_driver_(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_driver_();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_driver_>& obj);

#endif  // guard
