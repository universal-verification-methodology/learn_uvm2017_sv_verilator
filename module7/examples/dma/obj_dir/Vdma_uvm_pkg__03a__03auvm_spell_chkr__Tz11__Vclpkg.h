// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ11__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ11__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_queue__Tz5;
class Vdma_uvm_pkg__03a__03auvm_root;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__max;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_spell_chkr__Tz11__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vdma_uvm_pkg__03a__03auvm_queue__Tz5>> &strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn);
    void __VnoInFunc_levenshtein_distance(Vdma__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn);
    void __VnoInFunc_minimum(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn);
};


class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_spell_chkr__Tz11 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_spell_chkr__Tz11(Vdma__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vdma_uvm_pkg__03a__03auvm_spell_chkr__Tz11() {}
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_spell_chkr__Tz11>& obj);

#endif  // guard
