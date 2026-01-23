// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_SEQUENCE_PROCESS_WRAPPER__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_SEQUENCE_PROCESS_WRAPPER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_std__03a__03aprocess;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> __PVT__pid;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_base> __PVT__seq;
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_sequence_process_wrapper>& obj);

#endif  // guard
