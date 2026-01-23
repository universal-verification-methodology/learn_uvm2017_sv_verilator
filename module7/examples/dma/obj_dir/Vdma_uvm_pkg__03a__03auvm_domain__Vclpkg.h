// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdma.h for the primary calling header

#ifndef VERILATED_VDMA_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_
#define VERILATED_VDMA_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vdma_uvm_pkg__03a__03auvm_build_phase;
class Vdma_uvm_pkg__03a__03auvm_check_phase;
class Vdma_uvm_pkg__03a__03auvm_configure_phase;
class Vdma_uvm_pkg__03a__03auvm_connect_phase;
class Vdma_uvm_pkg__03a__03auvm_coreservice_t;
class Vdma_uvm_pkg__03a__03auvm_domain;
class Vdma_uvm_pkg__03a__03auvm_end_of_elaboration_phase;
class Vdma_uvm_pkg__03a__03auvm_extract_phase;
class Vdma_uvm_pkg__03a__03auvm_final_phase;
class Vdma_uvm_pkg__03a__03auvm_main_phase;
class Vdma_uvm_pkg__03a__03auvm_phase;
class Vdma_uvm_pkg__03a__03auvm_post_configure_phase;
class Vdma_uvm_pkg__03a__03auvm_post_main_phase;
class Vdma_uvm_pkg__03a__03auvm_post_reset_phase;
class Vdma_uvm_pkg__03a__03auvm_post_shutdown_phase;
class Vdma_uvm_pkg__03a__03auvm_pre_configure_phase;
class Vdma_uvm_pkg__03a__03auvm_pre_main_phase;
class Vdma_uvm_pkg__03a__03auvm_pre_reset_phase;
class Vdma_uvm_pkg__03a__03auvm_pre_shutdown_phase;
class Vdma_uvm_pkg__03a__03auvm_report_phase;
class Vdma_uvm_pkg__03a__03auvm_reset_phase;
class Vdma_uvm_pkg__03a__03auvm_root;
class Vdma_uvm_pkg__03a__03auvm_run_phase;
class Vdma_uvm_pkg__03a__03auvm_shutdown_phase;
class Vdma_uvm_pkg__03a__03auvm_start_of_simulation_phase;


class Vdma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdma_uvm_pkg__03a__03auvm_domain__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain> __PVT__m_uvm_domain;
    VlAssocArray<std::string, VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain>> __PVT__m_domains;
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> __PVT__m_uvm_schedule;

    // INTERNAL VARIABLES
    Vdma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdma_uvm_pkg__03a__03auvm_domain__Vclpkg();
    ~Vdma_uvm_pkg__03a__03auvm_domain__Vclpkg();
    void ctor(Vdma__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vdma_uvm_pkg__03a__03auvm_domain__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> schedule);
    void __VnoInFunc_get_common_domain(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn);
    void __VnoInFunc_get_domains(Vdma__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain>> &domains);
    void __VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn);
    void __VnoInFunc_get_uvm_schedule(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn);
    void __VnoInFunc_jump_all(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
};

#include "Vdma_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vdma__Syms;

class Vdma_uvm_pkg__03a__03auvm_domain : public Vdma_uvm_pkg__03a__03auvm_phase {
  public:
    virtual void __VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp);
    void __VnoInFunc_jump(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vdma__Syms* __restrict vlSymsp);
  public:
    Vdma_uvm_pkg__03a__03auvm_domain(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vdma_uvm_pkg__03a__03auvm_domain();
};

std::string VL_TO_STRING(const VlClassRef<Vdma_uvm_pkg__03a__03auvm_domain>& obj);

#endif  // guard
