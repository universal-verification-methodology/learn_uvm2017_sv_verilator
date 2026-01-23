// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA___024UNIT__03A__03ADMAENV__VCLPKG_H_
#define VERILATED_VDMA___024UNIT__03A__03ADMAENV__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma___024unit__03a__03aDmaDriver;
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_component_registry__pi63;
class Vdma_uvm_pkg__03a__03auvm_env;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_phase;
class Vdma_uvm_pkg__03a__03auvm_seq_item_pull_imp__pi70;
class Vdma_uvm_pkg__03a__03auvm_seq_item_pull_port__pi69;
class Vdma_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma___024unit__03a__03aDmaEnv__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdma___024unit__03a__03aDmaEnv__Vclpkg(Vdma__Syms* symsp, const char* v__name);
    ~Vdma___024unit__03a__03aDmaEnv__Vclpkg();
    VL_UNCOPYABLE(Vdma___024unit__03a__03aDmaEnv__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi63> &get_type__Vfuncrtn);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_env__Vclpkg.h"

class Vdma__Syms;

class Vdma___024unit__03a__03aDmaEnv : public Vdma_uvm_pkg__03a__03auvm_env {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126> __PVT__seqr;
    VlClassRef<Vdma___024unit__03a__03aDmaDriver> __PVT__drv;
    virtual void __VnoInFunc___Vbasic_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma___024unit__03a__03aDmaEnv(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> p);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma___024unit__03a__03aDmaEnv() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaEnv>& obj);

#endif  // guard
