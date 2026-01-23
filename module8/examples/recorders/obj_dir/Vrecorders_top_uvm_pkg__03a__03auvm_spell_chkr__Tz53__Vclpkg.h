// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ53__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ53__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_spell_chkr__Tz53__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__max;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_spell_chkr__Tz53__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_spell_chkr__Tz53__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_spell_chkr__Tz53__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_queue__Tz20>> &strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn);
    void __VnoInFunc_levenshtein_distance(Vrecorders_top__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn);
    void __VnoInFunc_minimum(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn);
};


class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_spell_chkr__Tz53 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_spell_chkr__Tz53(Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vrecorders_top_uvm_pkg__03a__03auvm_spell_chkr__Tz53() {}
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_spell_chkr__Tz53>& obj);

#endif  // guard
