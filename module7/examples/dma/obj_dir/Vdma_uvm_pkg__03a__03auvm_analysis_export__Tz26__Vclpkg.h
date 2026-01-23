// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_ANALYSIS_EXPORT__TZ26__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_ANALYSIS_EXPORT__TZ26__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_port_base__Tz223;
class Vdma_uvm_pkg__03a__03auvm_sequence_item;
class Vdma_uvm_pkg__03a__03auvm_tlm_if_base__Tz26_TBz26;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz26__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_port_base__Tz223__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz26 : public Vdma_uvm_pkg__03a__03auvm_port_base__Tz223 {
  public:
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz26(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz26();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz26>& obj);

#endif  // guard
