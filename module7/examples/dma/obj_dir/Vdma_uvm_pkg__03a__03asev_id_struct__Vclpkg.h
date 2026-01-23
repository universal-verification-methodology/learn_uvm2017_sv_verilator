// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03ASEV_ID_STRUCT__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03ASEV_ID_STRUCT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03asev_id_struct__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03asev_id_struct__Vclpkg();
    ~Vdma_uvm_pkg__03a__03asev_id_struct__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03asev_id_struct__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03asev_id_struct : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__sev_specified;
    CData/*0:0*/ __PVT__id_specified;
    CData/*1:0*/ __PVT__sev;
    CData/*0:0*/ __PVT__is_on;
    std::string __PVT__id;
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03asev_id_struct(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03asev_id_struct() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03asev_id_struct>& obj);

#endif  // guard
