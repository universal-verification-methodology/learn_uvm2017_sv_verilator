// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AM_UVM_TR_STREAM_CFG__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_tr_database;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03am_uvm_tr_stream_cfg__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03am_uvm_tr_stream_cfg : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__scope;
    std::string __PVT__stream_type_name;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_tr_database> __PVT__db;
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03am_uvm_tr_stream_cfg(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_uvm_pkg__03a__03am_uvm_tr_stream_cfg() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03am_uvm_tr_stream_cfg>& obj);

#endif  // guard
