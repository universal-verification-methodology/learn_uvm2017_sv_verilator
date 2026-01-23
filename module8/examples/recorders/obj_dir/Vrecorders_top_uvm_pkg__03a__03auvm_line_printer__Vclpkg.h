// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_LINE_PRINTER__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_LINE_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03am_uvm_printer_knobs;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_line_printer;
class Vrecorders_top_uvm_pkg__03a__03auvm_object;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi140;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_line_printer> __PVT__m_default_line_printer;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_line_printer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_registry__pi140> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_line_printer> printer);
    void __VnoInFunc_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_line_printer : public Vrecorders_top_uvm_pkg__03a__03auvm_tree_printer {
  public:
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_separators(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_separators__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_separators(Vrecorders_top__Syms* __restrict vlSymsp, std::string separators);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_line_printer(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_line_printer();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_line_printer>& obj);

#endif  // guard
