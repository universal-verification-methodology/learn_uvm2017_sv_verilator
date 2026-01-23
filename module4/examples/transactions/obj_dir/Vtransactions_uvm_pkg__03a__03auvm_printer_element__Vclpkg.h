// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_PRINTER_ELEMENT__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_PRINTER_ELEMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_printer_element;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_printer_element__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_printer_element__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_printer_element__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_printer_element__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_printer_element : public Vtransactions_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__m_name;
    std::string __PVT__m_type_name;
    std::string __PVT__m_size;
    std::string __PVT__m_value;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer_element>> __PVT__m_children;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_add_child(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer_element> child);
    void __VnoInFunc_clear_children(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_children(Vtransactions__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer_element>> &children, CData/*0:0*/ recurse);
    virtual void __VnoInFunc_get_element_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_element_name__Vfuncrtn);
    virtual void __VnoInFunc_get_element_size(Vtransactions__Syms* __restrict vlSymsp, std::string &get_element_size__Vfuncrtn);
    virtual void __VnoInFunc_get_element_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_element_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_element_value(Vtransactions__Syms* __restrict vlSymsp, std::string &get_element_value__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(Vtransactions__Syms* __restrict vlSymsp, std::string element_name, std::string element_type_name, std::string element_size, std::string element_value);
    virtual void __VnoInFunc_set_element_name(Vtransactions__Syms* __restrict vlSymsp, std::string element_name);
    virtual void __VnoInFunc_set_element_size(Vtransactions__Syms* __restrict vlSymsp, std::string element_size);
    virtual void __VnoInFunc_set_element_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string element_type_name);
    virtual void __VnoInFunc_set_element_value(Vtransactions__Syms* __restrict vlSymsp, std::string element_value);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_printer_element(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_printer_element();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer_element>& obj);

#endif  // guard
