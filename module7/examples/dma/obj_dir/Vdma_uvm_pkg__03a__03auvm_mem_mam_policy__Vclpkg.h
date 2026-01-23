// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_MEM_MAM_POLICY__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_MEM_MAM_POLICY__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_mem_region;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_mem_mam_policy__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_mem_mam_policy : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__len;
    QData/*63:0*/ __PVT__start_offset;
    QData/*63:0*/ __PVT__min_offset;
    QData/*63:0*/ __PVT__max_offset;
    VlRandomizer __PVT__constraint;
    VlQueue<VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint(Vdma__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_mem_mam_policy(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03auvm_mem_mam_policy() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_mem_mam_policy>& obj);

#endif  // guard
