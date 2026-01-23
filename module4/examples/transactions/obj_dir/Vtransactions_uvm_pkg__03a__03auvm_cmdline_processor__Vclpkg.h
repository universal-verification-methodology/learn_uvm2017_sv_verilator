// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor;
class Vtransactions_uvm_pkg__03a__03auvm_report_object;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vtransactions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    ~Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    void ctor(Vtransactions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_inst(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor : public Vtransactions_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_argv;
    VlQueue<std::string> __PVT__m_plus_argv;
    VlQueue<std::string> __PVT__m_uvm_argv;
    virtual void __VnoInFunc___VBasicRand(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtransactions__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_arg_matches(Vtransactions__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &args, IData/*31:0*/ &get_arg_matches__Vfuncrtn);
    void __VnoInFunc_get_arg_value(Vtransactions__Syms* __restrict vlSymsp, std::string match, std::string &value, IData/*31:0*/ &get_arg_value__Vfuncrtn);
    void __VnoInFunc_get_arg_values(Vtransactions__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &values, IData/*31:0*/ &get_arg_values__Vfuncrtn);
    void __VnoInFunc_get_args(Vtransactions__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_plusargs(Vtransactions__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_tool_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_tool_name__Vfuncrtn);
    void __VnoInFunc_get_tool_version(Vtransactions__Syms* __restrict vlSymsp, std::string &get_tool_version__Vfuncrtn);
    void __VnoInFunc_get_uvm_args(Vtransactions__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_m_convert_verb(Vtransactions__Syms* __restrict vlSymsp, std::string verb_str, IData/*31:0*/ &verb_enum, CData/*0:0*/ &m_convert_verb__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor();
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_cmdline_processor>& obj);

#endif  // guard
