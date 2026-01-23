// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REPORT_MESSAGE_INT_ELEMENT__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_UVM_PKG__03A__03AUVM_REPORT_MESSAGE_INT_ELEMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_uvm_pkg__03a__03auvm_printer;
class Vpools_top_uvm_pkg__03a__03auvm_recorder;
class Vpools_top_uvm_pkg__03a__03auvm_report_message_element_base;
class Vpools_top_uvm_pkg__03a__03auvm_report_message_int_element;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_uvm_pkg__03a__03auvm_report_message_int_element__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vpools_top_uvm_pkg__03a__03auvm_report_message_int_element__Vclpkg();
    ~Vpools_top_uvm_pkg__03a__03auvm_report_message_int_element__Vclpkg();
    void ctor(Vpools_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vpools_top_uvm_pkg__03a__03auvm_report_message_int_element__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vpools_top_uvm_pkg__03a__03auvm_report_message_element_base__Vclpkg.h"

class Vpools_top__Syms;

class Vpools_top_uvm_pkg__03a__03auvm_report_message_int_element : public Vpools_top_uvm_pkg__03a__03auvm_report_message_element_base {
  public:

    // DESIGN SPECIFIC STATE
    VlWide<128>/*4095:0*/ __PVT___val;
    IData/*31:0*/ __PVT___size;
    IData/*27:0*/ __PVT___radix;
    virtual void __VnoInFunc_do_clone(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message_element_base> &do_clone__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message_element_base> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_record(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_recorder> recorder);
    virtual void __VnoInFunc_get_value(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size, IData/*27:0*/ &radix, VlWide<128>/*4095:0*/ &get_value__Vfuncrtn);
    virtual void __VnoInFunc_set_value(Vpools_top__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*27:0*/ radix);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_uvm_pkg__03a__03auvm_report_message_int_element(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vpools_top_uvm_pkg__03a__03auvm_report_message_int_element();
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_uvm_pkg__03a__03auvm_report_message_int_element>& obj);

#endif  // guard
