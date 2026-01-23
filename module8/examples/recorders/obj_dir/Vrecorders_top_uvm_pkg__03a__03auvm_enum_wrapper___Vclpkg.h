// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_ENUM_WRAPPER___VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<std::string, CData/*0:0*/> __PVT__map;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg(Vrecorders_top__Syms* symsp, const char* v__name);
    ~Vrecorders_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_enum_wrapper___Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_from_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string name, CData/*0:0*/ &value, CData/*0:0*/ &from_name__Vfuncrtn);
    void __VnoInFunc_m_init_map(Vrecorders_top__Syms* __restrict vlSymsp);
};


class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_enum_wrapper_ : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_enum_wrapper_(Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vrecorders_top_uvm_pkg__03a__03auvm_enum_wrapper_() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_enum_wrapper_>& obj);

#endif  // guard
