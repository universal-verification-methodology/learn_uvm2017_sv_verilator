// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ73__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_SPELL_CHKR__TZ73__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz22;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_spell_chkr__Tz73__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__max;

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_spell_chkr__Tz73__Vclpkg();
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_spell_chkr__Tz73__Vclpkg();
    void ctor(Vclass_hierarchy__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_spell_chkr__Tz73__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_check(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_queue__Tz22>> &strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn);
    void __VnoInFunc_levenshtein_distance(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn);
    void __VnoInFunc_minimum(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn);
};


class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_spell_chkr__Tz73 : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_spell_chkr__Tz73(Vclass_hierarchy__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_spell_chkr__Tz73() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_spell_chkr__Tz73>& obj);

#endif  // guard
