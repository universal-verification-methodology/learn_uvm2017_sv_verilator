// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_tr_database;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__scope;
    std::string __PVT__stream_type_name;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_tr_database> __PVT__db;
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg(Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vrecorders_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03am_uvm_tr_stream_cfg>& obj);

#endif  // guard
