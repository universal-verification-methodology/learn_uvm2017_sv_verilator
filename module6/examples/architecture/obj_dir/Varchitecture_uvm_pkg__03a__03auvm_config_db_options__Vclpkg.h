// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_cmdline_processor;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_config_db_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__tracing;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_config_db_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_init(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_is_tracing(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn);
    void __VnoInFunc_turn_off_tracing(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_tracing(Varchitecture__Syms* __restrict vlSymsp);
};


class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_config_db_options : public virtual VlClass {
  public:
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_config_db_options(Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Varchitecture_uvm_pkg__03a__03auvm_config_db_options() {}
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_config_db_options>& obj);

#endif  // guard
