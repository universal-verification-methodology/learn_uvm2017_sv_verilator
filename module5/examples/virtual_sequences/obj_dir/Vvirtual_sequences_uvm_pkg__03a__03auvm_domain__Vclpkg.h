// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_sequences.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_
#define VERILATED_VVIRTUAL_SEQUENCES_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vvirtual_sequences_uvm_pkg__03a__03auvm_build_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_check_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_configure_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_connect_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_coreservice_t;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_domain;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_end_of_elaboration_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_extract_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_final_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_main_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_post_configure_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_post_main_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_post_reset_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_post_shutdown_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_pre_configure_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_pre_main_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_pre_reset_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_pre_shutdown_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_report_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_reset_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_root;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_run_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_shutdown_phase;
class Vvirtual_sequences_uvm_pkg__03a__03auvm_start_of_simulation_phase;


class Vvirtual_sequences__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_sequences_uvm_pkg__03a__03auvm_domain__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_domain> __PVT__m_uvm_domain;
    VlAssocArray<std::string, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_domain>> __PVT__m_domains;
    VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> __PVT__m_uvm_schedule;

    // INTERNAL VARIABLES
    Vvirtual_sequences__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvirtual_sequences_uvm_pkg__03a__03auvm_domain__Vclpkg();
    ~Vvirtual_sequences_uvm_pkg__03a__03auvm_domain__Vclpkg();
    void ctor(Vvirtual_sequences__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vvirtual_sequences_uvm_pkg__03a__03auvm_domain__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> schedule);
    void __VnoInFunc_get_common_domain(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn);
    void __VnoInFunc_get_domains(Vvirtual_sequences__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_domain>> &domains);
    void __VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn);
    void __VnoInFunc_get_uvm_schedule(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn);
    void __VnoInFunc_jump_all(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase);
};

#include "Vvirtual_sequences_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vvirtual_sequences__Syms;

class Vvirtual_sequences_uvm_pkg__03a__03auvm_domain : public Vvirtual_sequences_uvm_pkg__03a__03auvm_phase {
  public:
    virtual void __VnoInFunc___VBasicRand(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vvirtual_sequences__Syms* __restrict vlSymsp);
    void __VnoInFunc_jump(Vvirtual_sequences__Syms* __restrict vlSymsp, VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(Vvirtual_sequences__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vvirtual_sequences__Syms* __restrict vlSymsp);
  public:
    Vvirtual_sequences_uvm_pkg__03a__03auvm_domain(VlProcessRef vlProcess, Vvirtual_sequences__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vvirtual_sequences_uvm_pkg__03a__03auvm_domain();
};

std::string VL_TO_STRING(const VlClassRef<Vvirtual_sequences_uvm_pkg__03a__03auvm_domain>& obj);

#endif  // guard
