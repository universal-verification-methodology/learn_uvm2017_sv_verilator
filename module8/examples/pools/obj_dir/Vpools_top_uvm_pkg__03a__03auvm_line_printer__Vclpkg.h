// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_LINE_PRINTER__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_LINE_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03am_uvm_printer_knobs;
class Vpools_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vpools_top_uvm_pkg__03a__03auvm_line_printer;
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi138;
class Vpools_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vpools_top_uvm_pkg__03a__03auvm_root;
class Vpools_top_uvm_pkg__03a__03auvm_tree_printer;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_line_printer> __PVT__m_default_line_printer;

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_line_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_line_printer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_registry__pi138> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_line_printer> printer);
    void __VnoInFunc_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_tree_printer__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_line_printer : public Vpools_top_uvm_pkg__03a__03auvm_tree_printer {
  public:
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_separators(Vpools_top__Syms* __restrict vlSymsp, std::string &get_separators__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_separators(Vpools_top__Syms* __restrict vlSymsp, std::string separators);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_line_printer(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_line_printer();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_line_printer>& obj);

#endif  // guard
