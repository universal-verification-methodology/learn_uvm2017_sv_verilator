// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AM_UVM_SQR_SEQ_BASE__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AM_UVM_SQR_SEQ_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_sequence_base;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03am_uvm_sqr_seq_base__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03am_uvm_sqr_seq_base__Vclpkg();
    ~Vdma_uvm_pkg__03a__03am_uvm_sqr_seq_base__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03am_uvm_sqr_seq_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_sequence_base__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03am_uvm_sqr_seq_base : public Vdma_uvm_pkg__03a__03auvm_sequence_base {
  public:
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03am_uvm_sqr_seq_base(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03am_uvm_sqr_seq_base();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03am_uvm_sqr_seq_base>& obj);

#endif  // guard
