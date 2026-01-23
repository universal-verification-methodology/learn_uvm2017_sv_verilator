// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Varchitecture_uvm_pkg.h"
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_factory_override__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_factory_override__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_factory_override : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__replace;
    CData/*0:0*/ __PVT__selected;
    CData/*0:0*/ __PVT__has_wildcard;
    IData/*31:0*/ __PVT__used;
    Varchitecture_m_uvm_factory_type_pair_t__struct__0 __PVT__orig;
    Varchitecture_m_uvm_factory_type_pair_t__struct__0 __PVT__ovrd;
    std::string __PVT__full_inst_path;
    void __VnoInFunc_m_has_wildcard(Varchitecture__Syms* __restrict vlSymsp, std::string nm, CData/*0:0*/ &m_has_wildcard__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_factory_override(Varchitecture__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type, std::string ovrd_type_name, CData/*0:0*/ replace);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_uvm_pkg__03a__03auvm_factory_override() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_factory_override>& obj);

#endif  // guard
