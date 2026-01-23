// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrecorders_top.h for the primary calling header

#ifndef VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_
#define VERILATED_VRECORDERS_TOP_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vrecorders_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"
class Vrecorders_top_std__03a__03aprocess;
class Vrecorders_top_uvm_pkg__03a__03a__VDynScope_23;
class Vrecorders_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vrecorders_top_uvm_pkg__03a__03auvm_component;
class Vrecorders_top_uvm_pkg__03a__03auvm_component_proxy;
class Vrecorders_top_uvm_pkg__03a__03auvm_coreservice_t;
class Vrecorders_top_uvm_pkg__03a__03auvm_domain;
class Vrecorders_top_uvm_pkg__03a__03auvm_factory;
class Vrecorders_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vrecorders_top_uvm_pkg__03a__03auvm_phase;
class Vrecorders_top_uvm_pkg__03a__03auvm_printer;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_handler;
class Vrecorders_top_uvm_pkg__03a__03auvm_report_server;
class Vrecorders_top_uvm_pkg__03a__03auvm_root;
class Vrecorders_top_uvm_pkg__03a__03auvm_top_down_visitor_adapter_;
class Vrecorders_top_uvm_pkg__03a__03auvm_visitor_;


class Vrecorders_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrecorders_top_uvm_pkg__03a__03auvm_root__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_relnotes_done;
    CData/*0:0*/ __PVT__set_timeout__Vstatic__m_uvm_timeout_overridable;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vrecorders_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrecorders_top_uvm_pkg__03a__03auvm_root__Vclpkg();
    ~Vrecorders_top_uvm_pkg__03a__03auvm_root__Vclpkg();
    void ctor(Vrecorders_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vrecorders_top_uvm_pkg__03a__03auvm_root__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn);
    void __VnoInFunc_m_uvm_get_root(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root> &m_uvm_get_root__Vfuncrtn);
};

#include "Vrecorders_top_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vrecorders_top__Syms;

class Vrecorders_top_uvm_pkg__03a__03auvm_root : public Vrecorders_top_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__finish_on_completion;
    CData/*0:0*/ __PVT__enable_print_topology;
    CData/*0:0*/ __PVT__m_phase_all_done;
    QData/*63:0*/ __PVT__phase_timeout;
    VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__clp;
    virtual void __VnoInFunc___VBasicRand(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_die(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_find(Vrecorders_top__Syms* __restrict vlSymsp, std::string comp_match, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> &find__Vfuncrtn);
    void __VnoInFunc_find_all(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_get_enable_print_topology(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_enable_print_topology__Vfuncrtn);
    virtual void __VnoInFunc_get_finish_on_completion(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_finish_on_completion__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vrecorders_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_check_uvm_field_flag_size(Vrecorders_top__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_process_config(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string cfg, CData/*0:0*/ is_int);
    void __VnoInFunc_m_process_default_sequence(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string cfg);
    void __VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_m_process_type_override(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_phase_started(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_topology(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_randomize(Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_header(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_run_test(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, std::string test_name);
  private:
    VlCoroutine __VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, VlClassRef<Vrecorders_top_uvm_pkg__03a__03a__VDynScope_23> __VDynScope_run_test_0, VlClassRef<Vrecorders_top_std__03a__03aprocess> unnamedblk164__DOT____VforkParent);
  public:
    void __VnoInFunc_set_enable_print_topology(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
    virtual void __VnoInFunc_set_finish_on_completion(Vrecorders_top__Syms* __restrict vlSymsp, CData/*0:0*/ f);
    void __VnoInFunc_set_timeout(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp, QData/*63:0*/ timeout, CData/*0:0*/ overridable);
  private:
    void _ctor_var_reset(Vrecorders_top__Syms* __restrict vlSymsp);
  public:
    Vrecorders_top_uvm_pkg__03a__03auvm_root(VlProcessRef vlProcess, Vrecorders_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vrecorders_top_uvm_pkg__03a__03auvm_root();
};

std::string VL_TO_STRING(const VlClassRef<Vrecorders_top_uvm_pkg__03a__03auvm_root>& obj);

#endif  // guard
