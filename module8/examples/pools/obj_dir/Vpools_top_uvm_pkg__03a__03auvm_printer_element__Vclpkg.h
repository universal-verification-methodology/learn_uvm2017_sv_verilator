// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_PRINTER_ELEMENT__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_PRINTER_ELEMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_object;
class Vpools_top_uvm_pkg__03a__03auvm_printer_element;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_printer_element__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_printer_element__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_printer_element__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_printer_element__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_printer_element : public Vpools_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_name;
    std::string __PVT__m_type_name;
    std::string __PVT__m_size;
    std::string __PVT__m_value;
    VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element>> __PVT__m_children;
    virtual void __VnoInFunc___VBasicRand(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_child(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element> child);
    void __VnoInFunc_clear_children(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_children(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element>> &children, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_get_element_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_element_name__Vfuncrtn);
    virtual void __VnoInFunc_get_element_size(Vpools_top__Syms* __restrict vlSymsp, std::string &get_element_size__Vfuncrtn);
    virtual void __VnoInFunc_get_element_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string &get_element_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_element_value(Vpools_top__Syms* __restrict vlSymsp, std::string &get_element_value__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(Vpools_top__Syms* __restrict vlSymsp, std::string element_name, std::string element_type_name, std::string element_size, std::string element_value);
    virtual void __VnoInFunc_set_element_name(Vpools_top__Syms* __restrict vlSymsp, std::string element_name);
    virtual void __VnoInFunc_set_element_size(Vpools_top__Syms* __restrict vlSymsp, std::string element_size);
    virtual void __VnoInFunc_set_element_type_name(Vpools_top__Syms* __restrict vlSymsp, std::string element_type_name);
    virtual void __VnoInFunc_set_element_value(Vpools_top__Syms* __restrict vlSymsp, std::string element_value);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_printer_element(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_printer_element();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer_element>& obj);

#endif  // guard
