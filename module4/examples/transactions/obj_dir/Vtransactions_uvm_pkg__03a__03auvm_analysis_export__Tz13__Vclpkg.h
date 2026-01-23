// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransactions.h for the primary calling header

#ifndef VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_ANALYSIS_EXPORT__TZ13__VCLPKG_H_
#define VERILATED_VTRANSACTIONS_UVM_PKG__03A__03AUVM_ANALYSIS_EXPORT__TZ13__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransactions_uvm_pkg__03a__03auvm_component;
class Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz199;
class Vtransactions_uvm_pkg__03a__03auvm_sequence_item;
class Vtransactions_uvm_pkg__03a__03auvm_tlm_if_base__Tz13_TBz13;


class Vtransactions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransactions_uvm_pkg__03a__03auvm_analysis_export__Tz13__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtransactions__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtransactions_uvm_pkg__03a__03auvm_analysis_export__Tz13__Vclpkg(Vtransactions__Syms* symsp, const char* v__name);
    ~Vtransactions_uvm_pkg__03a__03auvm_analysis_export__Tz13__Vclpkg();
    VL_UNCOPYABLE(Vtransactions_uvm_pkg__03a__03auvm_analysis_export__Tz13__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz199__Vclpkg.h"

class Vtransactions__Syms;

class Vtransactions_uvm_pkg__03a__03auvm_analysis_export__Tz13 : public Vtransactions_uvm_pkg__03a__03auvm_port_base__Tz199 {
  public:
    virtual void __VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp);
  public:
    Vtransactions_uvm_pkg__03a__03auvm_analysis_export__Tz13(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtransactions_uvm_pkg__03a__03auvm_analysis_export__Tz13() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_analysis_export__Tz13>& obj);

#endif  // guard
