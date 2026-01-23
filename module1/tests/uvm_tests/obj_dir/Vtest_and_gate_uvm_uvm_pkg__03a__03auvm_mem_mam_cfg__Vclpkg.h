// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_and_gate_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_MEM_MAM_CFG__VCLPKG_H_
#define VERILATED_VTEST_AND_GATE_UVM_UVM_PKG__03A__03AUVM_MEM_MAM_CFG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtest_and_gate_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtest_and_gate_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg__Vclpkg();
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg__Vclpkg();
    void ctor(Vtest_and_gate_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtest_and_gate_uvm__Syms;

class Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__n_bytes;
    IData/*31:0*/ __PVT__mode;
    IData/*31:0*/ __PVT__locality;
    QData/*63:0*/ __PVT__start_offset;
    QData/*63:0*/ __PVT__end_offset;
    VlRandomizer __PVT__constraint;
  private:
    void _ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg(Vtest_and_gate_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_mam_cfg>& obj);

#endif  // guard
