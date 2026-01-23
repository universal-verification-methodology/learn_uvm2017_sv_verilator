// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_TYPEID__TZ26__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_TYPEID__TZ26__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26;
class Vtransactions_uvm_pkg__03a__03auvm_typeid_base;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26> __PVT__m_b_inst;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26> &get__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_typeid_base__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26 : public Vtransactions_uvm_pkg__03a__03auvm_typeid_base {
  public:
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26(Vtransactions__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_typeid__Tz26>& obj);

#endif  // guard
