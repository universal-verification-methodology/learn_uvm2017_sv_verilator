// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_SEQUENCE_PROCESS_WRAPPER__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_SEQUENCE_PROCESS_WRAPPER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_std__03a__03aprocess;
class Vpools_top_uvm_pkg__03a__03auvm_sequence_base;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_sequence_process_wrapper : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top_std__03a__03aprocess> __PVT__pid;
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_base> __PVT__seq;
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_sequence_process_wrapper(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpools_top_uvm_pkg__03a__03auvm_sequence_process_wrapper() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_sequence_process_wrapper>& obj);

#endif  // guard
