// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_OBJECT_REGISTRY__PI117__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_UVM_PKG__03A__03AUVM_OBJECT_REGISTRY__PI117__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map;
class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_registry_common__pi139;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117> __PVT__get__Vstatic__m_inst;

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117__Vclpkg();
    ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117__Vclpkg();
    void ctor(Vtest_simple_register_uvm__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_create(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map> &create__Vfuncrtn);
    void __VnoInFunc_get(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117> &get__Vfuncrtn);
    void __VnoInFunc_set_inst_override(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_component> parent);
    void __VnoInFunc_set_type_alias(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string alias_name, CData/*0:0*/ &set_type_alias__Vfuncrtn);
    void __VnoInFunc_set_type_override(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
    void __VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn);
};

#include "Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg.h"

class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117 : public Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper {
  public:
    virtual void __VnoInFunc_create_object(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_initialize(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117();
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi117>& obj);

#endif  // guard
