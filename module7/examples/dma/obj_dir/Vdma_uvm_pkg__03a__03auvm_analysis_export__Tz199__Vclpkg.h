// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_ANALYSIS_EXPORT__TZ199__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_ANALYSIS_EXPORT__TZ199__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_component;
class Vdma_uvm_pkg__03a__03auvm_port_base__Tz276;
class Vdma_uvm_pkg__03a__03auvm_reg_item;
class Vdma_uvm_pkg__03a__03auvm_tlm_if_base__Tz199_TBz199;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vdma_uvm_pkg__03a__03auvm_port_base__Tz276__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199 : public Vdma_uvm_pkg__03a__03auvm_port_base__Tz276 {
  public:
    virtual void __VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_reg_item> t);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> parent);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_analysis_export__Tz199>& obj);

#endif  // guard
