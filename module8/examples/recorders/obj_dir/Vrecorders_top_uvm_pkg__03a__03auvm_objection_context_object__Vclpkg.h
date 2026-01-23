// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_OBJECTION_CONTEXT_OBJECT__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_OBJECTION_CONTEXT_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_objection;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__count;
    std::string __PVT__description;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> __PVT__obj;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> __PVT__source_obj;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection> __PVT__objection;
    void __VnoInFunc_clear(Vrecorders_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object(Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_objection_context_object>& obj);

#endif  // guard
