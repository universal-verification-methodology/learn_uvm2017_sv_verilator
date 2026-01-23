// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_INDIRECT_FTDR_SEQ__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_REG_INDIRECT_FTDR_SEQ__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_reg;
class Vdma_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vdma_uvm_pkg__03a__03auvm_reg_item;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_reg_frontdoor__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq : public Vdma_uvm_pkg__03a__03auvm_reg_frontdoor {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_idx;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> __PVT__m_addr_reg;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> __PVT__m_data_reg;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> addr_reg, IData/*31:0*/ idx, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg> data_reg);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_indirect_ftdr_seq>& obj);

#endif  // guard
