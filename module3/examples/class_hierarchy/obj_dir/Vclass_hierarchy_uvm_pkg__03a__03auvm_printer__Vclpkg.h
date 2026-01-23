// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclass_hierarchy.h for the primary calling header

#ifndef VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_
#define VERILATED_VCLASS_HIERARCHY_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vclass_hierarchy_uvm_pkg__03a__03am_uvm_printer_knobs;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_abstract_object_registry__pi21;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_component;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_coreservice_t;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_field_op;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_policy;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_printer;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_printer_element;
class Vclass_hierarchy_uvm_pkg__03a__03auvm_root;


class Vclass_hierarchy__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vclass_hierarchy_uvm_pkg__03a__03auvm_printer__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vclass_hierarchy__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclass_hierarchy_uvm_pkg__03a__03auvm_printer__Vclpkg(Vclass_hierarchy__Syms* symsp, const char* v__name);
    ~Vclass_hierarchy_uvm_pkg__03a__03auvm_printer__Vclpkg();
    VL_UNCOPYABLE(Vclass_hierarchy_uvm_pkg__03a__03auvm_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_default(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> &get_default__Vfuncrtn);
    void __VnoInFunc_get_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_abstract_object_registry__pi21> &get_type__Vfuncrtn);
    void __VnoInFunc_set_default(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vclass_hierarchy_uvm_pkg__03a__03auvm_policy__Vclpkg.h"

class Vclass_hierarchy__Syms;

class Vclass_hierarchy_uvm_pkg__03a__03auvm_printer : public Vclass_hierarchy_uvm_pkg__03a__03auvm_policy {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_flushed;
    VlAssocArray<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object>, VlAssocArray<IData/*27:0*/, IData/*31:0*/>> __PVT__m_recur_states;
    std::string __PVT__m_string;
    VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03am_uvm_printer_knobs> __PVT__knobs;
    VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer_element>> __PVT__m_element_stack;
    VlQueue<VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer_element>> __PVT__m_recycled_elements;
    virtual void __VnoInFunc___Vbasic_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vclass_hierarchy__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
    virtual void __VnoInFunc_flush(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_begin_elements(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_begin_elements__Vfuncrtn);
    virtual void __VnoInFunc_get_bottom_element(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer_element> &get_bottom_element__Vfuncrtn);
    virtual void __VnoInFunc_get_default_radix(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*27:0*/ &get_default_radix__Vfuncrtn);
    virtual void __VnoInFunc_get_end_elements(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_end_elements__Vfuncrtn);
    virtual void __VnoInFunc_get_file(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_file__Vfuncrtn);
    virtual void __VnoInFunc_get_id_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &get_id_enabled__Vfuncrtn);
    void __VnoInFunc_get_knobs(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03am_uvm_printer_knobs> &get_knobs__Vfuncrtn);
    virtual void __VnoInFunc_get_line_prefix(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_line_prefix__Vfuncrtn);
    virtual void __VnoInFunc_get_max_depth(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &get_max_depth__Vfuncrtn);
    virtual void __VnoInFunc_get_name_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &get_name_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_radix_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &get_radix_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_radix_string(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*27:0*/ radix, std::string &get_radix_string__Vfuncrtn);
    virtual void __VnoInFunc_get_recursion_policy(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*27:0*/ &get_recursion_policy__Vfuncrtn);
    virtual void __VnoInFunc_get_root_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &get_root_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_size_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &get_size_enabled__Vfuncrtn);
    virtual void __VnoInFunc_get_top_element(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer_element> &get_top_element__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &get_type_name_enabled__Vfuncrtn);
    void __VnoInFunc_get_unused_element(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer_element> &get_unused_element__Vfuncrtn);
    void __VnoInFunc_index_string(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string name, std::string &index_string__Vfuncrtn);
    void __VnoInFunc_istop(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ &istop__Vfuncrtn);
    void __VnoInFunc_m_get_stack_size(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &m_get_stack_size__Vfuncrtn);
    virtual void __VnoInFunc_object_printed(Vclass_hierarchy__Syms* __restrict vlSymsp, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> value, IData/*27:0*/ recursion, IData/*31:0*/ &object_printed__Vfuncrtn);
    virtual void __VnoInFunc_pop_element(Vclass_hierarchy__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_print_array_footer(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ size);
    virtual void __VnoInFunc_print_array_header(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, std::string arraytype, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_array_range(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ min, IData/*31:0*/ max);
    virtual void __VnoInFunc_print_field(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_field_int(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_generic(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, std::string type_name, IData/*31:0*/ size, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_generic_element(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, std::string type_name, std::string size, std::string value);
    virtual void __VnoInFunc_print_object(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_object_header(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_real(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, double value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_string(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_time(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_push_element(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name, std::string type_name, std::string size, std::string value);
    virtual void __VnoInFunc_randomize(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set_begin_elements(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ elements);
    virtual void __VnoInFunc_set_default_radix(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*27:0*/ radix);
    virtual void __VnoInFunc_set_end_elements(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ elements);
    virtual void __VnoInFunc_set_file(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ fl);
    virtual void __VnoInFunc_set_id_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_line_prefix(Vclass_hierarchy__Syms* __restrict vlSymsp, std::string prefix);
    virtual void __VnoInFunc_set_max_depth(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*31:0*/ depth);
    virtual void __VnoInFunc_set_name_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_radix_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_radix_string(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*27:0*/ radix, std::string prefix);
    virtual void __VnoInFunc_set_recursion_policy(Vclass_hierarchy__Syms* __restrict vlSymsp, IData/*27:0*/ policy);
    virtual void __VnoInFunc_set_root_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_size_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
    virtual void __VnoInFunc_set_type_name_enabled(Vclass_hierarchy__Syms* __restrict vlSymsp, CData/*0:0*/ enabled);
  private:
    void _ctor_var_reset(Vclass_hierarchy__Syms* __restrict vlSymsp);
  public:
    Vclass_hierarchy_uvm_pkg__03a__03auvm_printer(VlProcessRef vlProcess, Vclass_hierarchy__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vclass_hierarchy_uvm_pkg__03a__03auvm_printer() {}
};

std::string VL_TO_STRING(const VlClassRef<Vclass_hierarchy_uvm_pkg__03a__03auvm_printer>& obj);

#endif  // guard
