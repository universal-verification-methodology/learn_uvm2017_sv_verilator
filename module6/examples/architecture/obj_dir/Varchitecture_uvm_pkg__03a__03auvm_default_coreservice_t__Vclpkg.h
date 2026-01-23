// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Varchitecture.h for the primary calling header

#ifndef VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_DEFAULT_CORESERVICE_T__VCLPKG_H_
#define VERILATED_VARCHITECTURE_UVM_PKG__03A__03AUVM_DEFAULT_CORESERVICE_T__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Varchitecture_std__03a__03aprocess;
class Varchitecture_uvm_pkg__03a__03auvm_comparer;
class Varchitecture_uvm_pkg__03a__03auvm_component_name_check_visitor;
class Varchitecture_uvm_pkg__03a__03auvm_copier;
class Varchitecture_uvm_pkg__03a__03auvm_coreservice_t;
class Varchitecture_uvm_pkg__03a__03auvm_default_factory;
class Varchitecture_uvm_pkg__03a__03auvm_default_report_server;
class Varchitecture_uvm_pkg__03a__03auvm_factory;
class Varchitecture_uvm_pkg__03a__03auvm_packer;
class Varchitecture_uvm_pkg__03a__03auvm_printer;
class Varchitecture_uvm_pkg__03a__03auvm_report_server;
class Varchitecture_uvm_pkg__03a__03auvm_resource_pool;
class Varchitecture_uvm_pkg__03a__03auvm_root;
class Varchitecture_uvm_pkg__03a__03auvm_table_printer;
class Varchitecture_uvm_pkg__03a__03auvm_text_tr_database;
class Varchitecture_uvm_pkg__03a__03auvm_tr_database;
class Varchitecture_uvm_pkg__03a__03auvm_visitor_;


class Varchitecture__Syms;

class alignas(VL_CACHE_LINE_BYTES) Varchitecture_uvm_pkg__03a__03auvm_default_coreservice_t__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Varchitecture__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Varchitecture_uvm_pkg__03a__03auvm_default_coreservice_t__Vclpkg();
    ~Varchitecture_uvm_pkg__03a__03auvm_default_coreservice_t__Vclpkg();
    void ctor(Varchitecture__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Varchitecture_uvm_pkg__03a__03auvm_default_coreservice_t__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Varchitecture_uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.h"

class Varchitecture__Syms;

class Varchitecture_uvm_pkg__03a__03auvm_default_coreservice_t : public Varchitecture_uvm_pkg__03a__03auvm_coreservice_t {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_use_uvm_seeding;
    IData/*31:0*/ __PVT__m_default_max_ready_to_end_iters;
    IData/*31:0*/ __PVT__m_default_precedence;
    IData/*31:0*/ __PVT__m_uvm_global_seed;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_factory> __PVT__factory;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> __PVT__tr_database;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_server> __PVT__report_server;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_visitor_> __PVT___visitor;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> __PVT__m_printer;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_packer> __PVT__m_packer;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_comparer> __PVT__m_comparer;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_pool> __PVT__m_rp;
    VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_copier> __PVT__m_copier;
    virtual void __VnoInFunc_get_component_visitor(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_visitor_> &get_component_visitor__Vfuncrtn);
    virtual void __VnoInFunc_get_default_comparer(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_comparer> &get_default_comparer__Vfuncrtn);
    virtual void __VnoInFunc_get_default_copier(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_copier> &get_default_copier__Vfuncrtn);
    virtual void __VnoInFunc_get_default_packer(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_packer> &get_default_packer__Vfuncrtn);
    virtual void __VnoInFunc_get_default_printer(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> &get_default_printer__Vfuncrtn);
    virtual void __VnoInFunc_get_default_tr_database(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> &get_default_tr_database__Vfuncrtn);
    virtual void __VnoInFunc_get_factory(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_factory> &get_factory__Vfuncrtn);
    virtual void __VnoInFunc_get_global_seed(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_global_seed__Vfuncrtn);
    virtual void __VnoInFunc_get_phase_max_ready_to_end(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_phase_max_ready_to_end__Vfuncrtn);
    virtual void __VnoInFunc_get_report_server(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_server> &get_report_server__Vfuncrtn);
    virtual void __VnoInFunc_get_resource_pool(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_pool> &get_resource_pool__Vfuncrtn);
    virtual void __VnoInFunc_get_resource_pool_default_precedence(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &get_resource_pool_default_precedence__Vfuncrtn);
    virtual void __VnoInFunc_get_root(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_root> &get_root__Vfuncrtn);
    virtual void __VnoInFunc_get_uvm_seeding(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ &get_uvm_seeding__Vfuncrtn);
    virtual void __VnoInFunc_set_component_visitor(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_visitor_> v);
    virtual void __VnoInFunc_set_default_comparer(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_comparer> comparer);
    virtual void __VnoInFunc_set_default_copier(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_copier> copier);
    virtual void __VnoInFunc_set_default_packer(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_set_default_printer(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_set_default_tr_database(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_tr_database> db);
    virtual void __VnoInFunc_set_factory(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_factory> f);
    virtual void __VnoInFunc_set_phase_max_ready_to_end(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    virtual void __VnoInFunc_set_report_server(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_report_server> server);
    virtual void __VnoInFunc_set_resource_pool(Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_resource_pool> pool);
    virtual void __VnoInFunc_set_resource_pool_default_precedence(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ precedence);
    virtual void __VnoInFunc_set_uvm_seeding(Varchitecture__Syms* __restrict vlSymsp, CData/*0:0*/ enable);
  private:
    void _ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp);
  public:
    Varchitecture_uvm_pkg__03a__03auvm_default_coreservice_t(Varchitecture__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Varchitecture_uvm_pkg__03a__03auvm_default_coreservice_t();
};

std::string VL_TO_STRING(const VlClassRef<Varchitecture_uvm_pkg__03a__03auvm_default_coreservice_t>& obj);

#endif  // guard
