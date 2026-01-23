// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vrecorders_top_uvm_pkg__03a__03auvm_build_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_check_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_configure_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_connect_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_domain;
class Vrecorders_top_uvm_pkg__03a__03auvm_end_of_elaboration_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_extract_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_final_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_main_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_post_configure_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_post_main_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_post_reset_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_post_shutdown_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_pre_configure_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_pre_main_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_pre_reset_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_pre_shutdown_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_reset_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_run_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_shutdown_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_start_of_simulation_phase;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_domain__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_domain> __PVT__m_uvm_domain;
    VlAssocArray<std::string, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_domain>> __PVT__m_domains;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> __PVT__m_uvm_schedule;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_domain__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_domain__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_domain__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> schedule);
    void __VnoInFunc_get_common_domain(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn);
    void __VnoInFunc_get_domains(Vrecorders_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_domain>> &domains);
    void __VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn);
    void __VnoInFunc_get_uvm_schedule(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn);
    void __VnoInFunc_jump_all(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_domain : public Vrecorders_top_uvm_pkg__03a__03auvm_phase {
  public:
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_jump(Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_domain(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_domain();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_domain>& obj);

#endif  // guard
