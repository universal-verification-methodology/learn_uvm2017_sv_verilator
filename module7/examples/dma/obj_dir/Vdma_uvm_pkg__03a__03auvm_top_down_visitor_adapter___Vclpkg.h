// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_TOP_DOWN_VISITOR_ADAPTER___VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_TOP_DOWN_VISITOR_ADAPTER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_structure_proxy_;
class Vdma_uvm_pkg__03a__03auvm_visitor_;
class Vdma_uvm_pkg__03a__03auvm_visitor_adapter__TBz65;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_visitor_adapter__TBz65__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_ : public Vdma_uvm_pkg__03a__03auvm_visitor_adapter__TBz65 {
  public:
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_accept(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> s, VlClassRef<Vdma_uvm_pkg__03a__03auvm_visitor_> v, VlClassRef<Vdma_uvm_pkg__03a__03auvm_structure_proxy_> p, CData/*0:0*/ invoke_begin_end);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_top_down_visitor_adapter_>& obj);

#endif  // guard
