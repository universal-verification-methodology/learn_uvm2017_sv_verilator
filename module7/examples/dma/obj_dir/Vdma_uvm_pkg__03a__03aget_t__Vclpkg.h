// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AGET_T__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AGET_T__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_resource_base;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03aget_t__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03aget_t__Vclpkg();
    ~Vdma_uvm_pkg__03a__03aget_t__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03aget_t__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03aget_t : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    QData/*63:0*/ __PVT__t;
    std::string __PVT__name;
    std::string __PVT__scope;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_resource_base> __PVT__rsrc;
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03aget_t(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03aget_t() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03aget_t>& obj);

#endif  // guard
