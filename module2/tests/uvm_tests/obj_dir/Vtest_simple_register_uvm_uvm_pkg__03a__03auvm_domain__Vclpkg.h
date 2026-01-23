// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_build_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_check_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_configure_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_connect_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_end_of_elaboration_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_extract_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_final_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_main_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_post_configure_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_post_main_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_post_reset_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_post_shutdown_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pre_configure_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pre_main_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pre_reset_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_pre_shutdown_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_report_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reset_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_run_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_shutdown_phase;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_start_of_simulation_phase;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain> __PVT__m_uvm_domain;
    VlAssocArray<std::string, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain>> __PVT__m_domains;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> __PVT__m_uvm_schedule;

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain__Vclpkg(Vtest_simple_register_uvm__Syms* symsp, const char* v__name);
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain__Vclpkg();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> schedule);
    void __VnoInFunc_get_common_domain(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn);
    void __VnoInFunc_get_domains(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain>> &domains);
    void __VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn);
    void __VnoInFunc_get_uvm_schedule(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn);
    void __VnoInFunc_jump_all(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase {
  public:
    virtual void __VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_jump(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_domain>& obj);

#endif  // guard
