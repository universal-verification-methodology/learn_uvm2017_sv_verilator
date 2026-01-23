// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vtransactions_uvm_pkg.h"
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_factory_override__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_factory_override__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_factory_override : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__replace;
    CData/*0:0*/ __PVT__selected;
    CData/*0:0*/ __PVT__has_wildcard;
    IData/*31:0*/ __PVT__used;
    Vtransactions_m_uvm_factory_type_pair_t__struct__0 __PVT__orig;
    Vtransactions_m_uvm_factory_type_pair_t__struct__0 __PVT__ovrd;
    std::string __PVT__full_inst_path;
    void __VnoInFunc_m_has_wildcard(Vtransactions__Syms* __restrict vlSymsp, std::string nm, CData/*0:0*/ &m_has_wildcard__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_factory_override(Vtransactions__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type, std::string ovrd_type_name, CData/*0:0*/ replace);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransactions_uvm_pkg__03a__03auvm_factory_override() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_factory_override>& obj);

#endif  // guard
