// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor;
class Varchitecture_uvm_pkg__03a__03auvm_report_object;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__m_inst;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_inst(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor : public Varchitecture_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_argv;
    VlQueue<std::string> __PVT__m_plus_argv;
    VlQueue<std::string> __PVT__m_uvm_argv;
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_arg_matches(Varchitecture__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &args, IData/*31:0*/ &get_arg_matches__Vfuncrtn);
    void __VnoInFunc_get_arg_value(Varchitecture__Syms* __restrict vlSymsp, std::string match, std::string &value, IData/*31:0*/ &get_arg_value__Vfuncrtn);
    void __VnoInFunc_get_arg_values(Varchitecture__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &values, IData/*31:0*/ &get_arg_values__Vfuncrtn);
    void __VnoInFunc_get_args(Varchitecture__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_plusargs(Varchitecture__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_tool_name(Varchitecture__Syms* __restrict vlSymsp, std::string &get_tool_name__Vfuncrtn);
    void __VnoInFunc_get_tool_version(Varchitecture__Syms* __restrict vlSymsp, std::string &get_tool_version__Vfuncrtn);
    void __VnoInFunc_get_uvm_args(Varchitecture__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_m_convert_verb(Varchitecture__Syms* __restrict vlSymsp, std::string verb_str, IData/*31:0*/ &verb_enum, CData/*0:0*/ &m_convert_verb__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor>& obj);

#endif  // guard
