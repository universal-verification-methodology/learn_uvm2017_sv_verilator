// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03am_uvm_printer_knobs;
class Vtransactions_uvm_pkg__03a__03auvm_abstract_object_registry__pi10;
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_coreservice_t;
class Vtransactions_uvm_pkg__03a__03auvm_field_op;
class Vtransactions_uvm_pkg__03a__03auvm_object;
class Vtransactions_uvm_pkg__03a__03auvm_object_wrapper;
class Vtransactions_uvm_pkg__03a__03auvm_policy;
class Vtransactions_uvm_pkg__03a__03auvm_printer;
class Vtransactions_uvm_pkg__03a__03auvm_printer_element;
class Vtransactions_uvm_pkg__03a__03auvm_root;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_printer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_printer__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_printer__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_abstract_object_registry__pi10> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_printer : public Vtransactions_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_flushed;
    VlAssocArray<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object>, VlAssocArray<IData/*27:0*/, IData/*31:0*/>> __PVT__m_recur_states;
    std::string __PVT__m_string;
    VlClassRef<Vtransactions_uvm_pkg__03a__03am_uvm_printer_knobs> __PVT__knobs;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer_element>> __PVT__m_element_stack;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer_element>> __PVT__m_recycled_elements;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_begin_elements(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_begin_elements__Vfuncrtn);
    virtual void __VnoInFunc_get_bottom_element(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer_element> &get_bottom_element__Vfuncrtn);
    virtual void __VnoInFunc_get_default_radix(Vtransactions__Syms* __restrict vlSymsp, IData/*27:0*/ &get_default_radix__Vfuncrtn);
    virtual void __VnoInFunc_get_end_elements(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_end_elements__Vfuncrtn);
    virtual void __VnoInFunc_get_file(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn);
    virtual void __VnoInFunc_get_id_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &get_id_enabled__Vfuncrtn);
    void __VnoInFunc_get_knobs(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03am_uvm_printer_knobs> &get_knobs__Vfuncrtn);
    virtual void __VnoInFunc_get_line_prefix(Vtransactions__Syms* __restrict vlSymsp, std::string &get_line_prefix__Vfuncrtn);
    virtual void __VnoInFunc_get_max_depth(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_depth__Vfuncrtn);
    virtual void __VnoInFunc_get_name_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &get_name_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_radix_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &get_radix_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_radix_string(Vtransactions__Syms* __restrict vlSymsp, IData/*27:0*/ radix, std::string &get_radix_string__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vtransactions__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_root_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &get_root_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_size_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &get_size_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_top_element(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer_element> &get_top_element__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &get_type_name_enabled__Vfuncrtn);
    void __VnoInFunc_get_unused_element(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer_element> &get_unused_element__Vfuncrtn);
    void __VnoInFunc_index_string(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string name, std::string &index_string__Vfuncrtn);
    void __VnoInFunc_istop(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &istop__Vfuncrtn);
    void __VnoInFunc_m_get_stack_size(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_stack_size__Vfuncrtn);
    virtual void __VnoInFunc_object_printed(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> value, IData/*27:0*/ recursion, IData/*31:0*/ &object_printed__Vfuncrtn);
    virtual void __VnoInFunc_pop_element(Vtransactions__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_print_array_footer(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ size);
    virtual void __VnoInFunc_print_array_header(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, std::string arraytype, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_array_range(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ min, IData/*31:0*/ max);
    virtual void __VnoInFunc_print_field(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_field_int(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_generic(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, std::string type_name, IData/*31:0*/ size, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_generic_element(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, std::string type_name, std::string size, std::string value);
    virtual void __VnoInFunc_print_object(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_object_header(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_real(Vtransactions__Syms* __restrict vlSymsp, std::string name, double value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_string(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_time(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_push_element(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, std::string type_name, std::string size, std::string value);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_begin_elements(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ elements);
    virtual void __VnoInFunc_set_default_radix(Vtransactions__Syms* __restrict vlSymsp, IData/*27:0*/ radix);
    virtual void __VnoInFunc_set_end_elements(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ elements);
    virtual void __VnoInFunc_set_file(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ fl);
    virtual void __VnoInFunc_set_id_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_line_prefix(Vtransactions__Syms* __restrict vlSymsp, std::string prefix);
    virtual void __VnoInFunc_set_max_depth(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ depth);
    virtual void __VnoInFunc_set_name_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_radix_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_radix_string(Vtransactions__Syms* __restrict vlSymsp, IData/*27:0*/ radix, std::string prefix);
    virtual void __VnoInFunc_set_recursion_policy(Vtransactions__Syms* __restrict vlSymsp, IData/*27:0*/ policy);
    virtual void __VnoInFunc_set_root_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_size_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_type_name_enabled(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_printer(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_printer();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer>& obj);

#endif  // guard
