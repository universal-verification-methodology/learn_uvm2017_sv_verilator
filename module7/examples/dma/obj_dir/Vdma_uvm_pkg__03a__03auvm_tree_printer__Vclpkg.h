// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_TREE_PRINTER__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_TREE_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03am_uvm_printer_knobs;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_object;
class Vdma_uvm_pkg__03a__03auvm_object_registry__pi8;
class Vdma_uvm_pkg__03a__03auvm_object_wrapper;
class Vdma_uvm_pkg__03a__03auvm_printer;
class Vdma_uvm_pkg__03a__03auvm_printer_element;
class Vdma_uvm_pkg__03a__03auvm_printer_element_proxy;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_tree_printer;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_tree_printer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_tree_printer> __PVT__m_default_tree_printer;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element_proxy> __PVT__m_emit_element__Vstatic__proxy;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_tree_printer__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_tree_printer__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_tree_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tree_printer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_registry__pi8> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_tree_printer> printer);
    void __VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vdma_uvm_pkg__03a__03auvm_printer__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_tree_printer : public Vdma_uvm_pkg__03a__03auvm_printer {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_newline;
    std::string __PVT__m_linefeed;
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_indent(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &get_indent__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_separators(Vdma__Syms* __restrict vlSymsp, std::string &get_separators__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_emit_element(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_printer_element> element, IData/*31:0*/ level, std::string &m_emit_element__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_indent(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ indent);
    virtual void __VnoInFunc_set_separators(Vdma__Syms* __restrict vlSymsp, std::string separators);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_tree_printer(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_tree_printer();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_tree_printer>& obj);

#endif  // guard
