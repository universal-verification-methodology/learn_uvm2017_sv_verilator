// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_LINK_BASE__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_LINK_BASE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_object;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_link_base__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_link_base__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_link_base__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_link_base__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_link_base : public Vdma_uvm_pkg__03a__03auvm_object {
  public:
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_do_get_lhs(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &do_get_lhs__Vfuncrtn);
    virtual void __VnoInFunc_do_get_rhs(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &do_get_rhs__Vfuncrtn);
    virtual void __VnoInFunc_do_set_lhs(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> lhs);
    virtual void __VnoInFunc_do_set_rhs(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_get_lhs(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &get_lhs__Vfuncrtn);
    void __VnoInFunc_get_rhs(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &get_rhs__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_set(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_set_lhs(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> lhs);
    void __VnoInFunc_set_rhs(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> rhs);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_link_base(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_link_base();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_link_base>& obj);

#endif  // guard
