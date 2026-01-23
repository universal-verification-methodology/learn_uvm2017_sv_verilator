// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_uvm_pkg__03a__03auvm_build_phase;
class Varchitecture_uvm_pkg__03a__03auvm_check_phase;
class Varchitecture_uvm_pkg__03a__03auvm_configure_phase;
class Varchitecture_uvm_pkg__03a__03auvm_connect_phase;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_domain;
class Varchitecture_uvm_pkg__03a__03auvm_end_of_elaboration_phase;
class Varchitecture_uvm_pkg__03a__03auvm_extract_phase;
class Varchitecture_uvm_pkg__03a__03auvm_final_phase;
class Varchitecture_uvm_pkg__03a__03auvm_main_phase;
class Varchitecture_uvm_pkg__03a__03auvm_phase;
class Varchitecture_uvm_pkg__03a__03auvm_post_configure_phase;
class Varchitecture_uvm_pkg__03a__03auvm_post_main_phase;
class Varchitecture_uvm_pkg__03a__03auvm_post_reset_phase;
class Varchitecture_uvm_pkg__03a__03auvm_post_shutdown_phase;
class Varchitecture_uvm_pkg__03a__03auvm_pre_configure_phase;
class Varchitecture_uvm_pkg__03a__03auvm_pre_main_phase;
class Varchitecture_uvm_pkg__03a__03auvm_pre_reset_phase;
class Varchitecture_uvm_pkg__03a__03auvm_pre_shutdown_phase;
class Varchitecture_uvm_pkg__03a__03auvm_report_phase;
class Varchitecture_uvm_pkg__03a__03auvm_reset_phase;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_run_phase;
class Varchitecture_uvm_pkg__03a__03auvm_shutdown_phase;
class Varchitecture_uvm_pkg__03a__03auvm_start_of_simulation_phase;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_domain__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain> __PVT__m_uvm_domain;
    VlAssocArray<std::string, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain>> __PVT__m_domains;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> __PVT__m_uvm_schedule;

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_domain__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_domain__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_domain__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> schedule);
    void __VnoInFunc_get_common_domain(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn);
    void __VnoInFunc_get_domains(Varchitecture__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain>> &domains);
    void __VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn);
    void __VnoInFunc_get_uvm_schedule(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn);
    void __VnoInFunc_jump_all(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_domain : public Varchitecture_uvm_pkg__03a__03auvm_phase {
  public:
    virtual void __VnoInFunc___VBasicRand(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Varchitecture__Syms* __restrict vlSymsp);
    void __VnoInFunc_jump(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_domain(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_domain();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_domain>& obj);

#endif  // guard
