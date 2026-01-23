// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_OBJECTION_CONTEXT_OBJECT__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_OBJECTION_CONTEXT_OBJECT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_objection;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_objection_context_object__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_objection_context_object : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__count;
    std::string __PVT__description;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __PVT__obj;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> __PVT__source_obj;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_objection> __PVT__objection;
    void __VnoInFunc_clear(Vdma__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_objection_context_object(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03auvm_objection_context_object() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_objection_context_object>& obj);

#endif  // guard
