// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_LINE_PRINTER__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_LINE_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03am_uvm_printer_knobs;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_line_printer;
class Varchitecture_uvm_pkg__03a__03auvm_object;
class Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi168;
class Varchitecture_uvm_pkg__03a__03auvm_object_wrapper;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_tree_printer;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_line_printer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_line_printer> __PVT__m_default_line_printer;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_line_printer__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_line_printer__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_line_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_line_printer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_registry__pi168> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_line_printer> printer);
    void __VnoInFunc_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_tree_printer__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_line_printer : public Varchitecture_uvm_pkg__03a__03auvm_tree_printer {
  public:
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_object_type(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_separators(Varchitecture__Syms* __restrict vlSymsp, std::string &get_separators__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_separators(Varchitecture__Syms* __restrict vlSymsp, std::string separators);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_line_printer(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_line_printer();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_line_printer>& obj);

#endif  // guard
