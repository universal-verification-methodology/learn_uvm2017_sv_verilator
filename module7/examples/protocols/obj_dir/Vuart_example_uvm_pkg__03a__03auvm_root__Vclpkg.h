// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_ROOT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg.h"
class Vuart_example_std__03a__03aprocess;
class Vuart_example_uvm_pkg__03a__03a__VDynScope_41;
class Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor;
class Vuart_example_uvm_pkg__03a__03auvm_component;
class Vuart_example_uvm_pkg__03a__03auvm_component_proxy;
class Vuart_example_uvm_pkg__03a__03auvm_coreservice_t;
class Vuart_example_uvm_pkg__03a__03auvm_domain;
class Vuart_example_uvm_pkg__03a__03auvm_factory;
class Vuart_example_uvm_pkg__03a__03auvm_object_wrapper;
class Vuart_example_uvm_pkg__03a__03auvm_phase;
class Vuart_example_uvm_pkg__03a__03auvm_printer;
class Vuart_example_uvm_pkg__03a__03auvm_report_handler;
class Vuart_example_uvm_pkg__03a__03auvm_report_server;
class Vuart_example_uvm_pkg__03a__03auvm_root;
class Vuart_example_uvm_pkg__03a__03auvm_top_down_visitor_adapter_;
class Vuart_example_uvm_pkg__03a__03auvm_visitor_;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_root__Vclpkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_relnotes_done;
    CData/*0:0*/ __PVT__set_timeout__Vstatic__m_uvm_timeout_overridable;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_root__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_root__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_root__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn);
    void __VnoInFunc_m_uvm_get_root(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> &m_uvm_get_root__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_component__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_root : public Vuart_example_uvm_pkg__03a__03auvm_component {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__finish_on_completion;
    CData/*0:0*/ __PVT__enable_print_topology;
    CData/*0:0*/ __PVT__m_phase_all_done;
    QData/*63:0*/ __PVT__phase_timeout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__clp;
    virtual void __VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuart_example__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_die(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_end_of_elaboration_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_find(Vuart_example__Syms* __restrict vlSymsp, std::string comp_match, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> &find__Vfuncrtn);
    void __VnoInFunc_find_all(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_get_enable_print_topology(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &get_enable_print_topology__Vfuncrtn);
    virtual void __VnoInFunc_get_finish_on_completion(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &get_finish_on_completion__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_m_add_child(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn);
    void __VnoInFunc_m_check_uvm_field_flag_size(Vuart_example__Syms* __restrict vlSymsp) {}
    void __VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    void __VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_component> comp);
    void __VnoInFunc_m_process_config(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string cfg, CData/*0:0*/ is_int);
    void __VnoInFunc_m_process_default_sequence(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string cfg);
    void __VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_m_process_type_override(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string ovr);
    void __VnoInFunc_phase_started(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_print_topology(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_report_header(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ file);
    virtual VlCoroutine __VnoInFunc_run_phase(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_phase> phase);
    virtual VlCoroutine __VnoInFunc_run_test(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string test_name);
  private:
    VlCoroutine __VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03a__VDynScope_41> __VDynScope_run_test_0);
  public:
    void __VnoInFunc_set_enable_print_topology(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
    virtual void __VnoInFunc_set_finish_on_completion(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ f);
    void __VnoInFunc_set_timeout(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, QData/*63:0*/ timeout, CData/*0:0*/ overridable);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_root(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_root() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root>& obj);

#endif  // guard
