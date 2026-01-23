// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vvirtual_sequences_uvm_pkg.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__replace;
    CData/*0:0*/ __PVT__selected;
    CData/*0:0*/ __PVT__has_wildcard;
    IData/*31:0*/ __PVT__used;
    Vvirtual_sequences_m_uvm_factory_type_pair_t__struct__0 __PVT__orig;
    Vvirtual_sequences_m_uvm_factory_type_pair_t__struct__0 __PVT__ovrd;
    std::string __PVT__full_inst_path;
    void __VnoInFunc_m_has_wildcard(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string nm, CData/*0:0*/ &m_has_wildcard__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override(Vvirtual_sequences__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type, std::string ovrd_type_name, CData/*0:0*/ replace);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override() {}
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_factory_override>& obj);

#endif  // guard
