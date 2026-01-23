// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_tr_database;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg();
    ~Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__scope;
    std::string __PVT__stream_type_name;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tr_database> __PVT__db;
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03am_uvm_tr_stream_cfg>& obj);

#endif  // guard
