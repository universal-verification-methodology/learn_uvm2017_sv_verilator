// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_RESOURCE_DB_OPTIONS__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_RESOURCE_DB_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_cmdline_processor;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__tracing;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg(Vvirtual_sequences__Syms* symsp, const char* v__name);
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_init(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_is_tracing(Vvirtual_sequences__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn);
    void __VnoInFunc_turn_off_tracing(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_tracing(Vvirtual_sequences__Syms* __restrict vlSymsp);
};


class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_options : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_options(Vvirtual_sequences__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_options() {}
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_resource_db_options>& obj);

#endif  // guard
