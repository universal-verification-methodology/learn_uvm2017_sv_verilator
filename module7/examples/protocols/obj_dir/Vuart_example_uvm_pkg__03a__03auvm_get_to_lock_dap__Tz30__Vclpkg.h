// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_example.h for the primary calling header

#ifndef VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_GET_TO_LOCK_DAP__TZ30__VCLPKG_H_
#define VERILATED_VUART_EXAMPLE_UVM_PKG__03A__03AUVM_GET_TO_LOCK_DAP__TZ30__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vuart_example_uvm_pkg__03a__03auvm_coreservice_t;
class Vuart_example_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30;
class Vuart_example_uvm_pkg__03a__03auvm_object;
class Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz80;
class Vuart_example_uvm_pkg__03a__03auvm_object_wrapper;
class Vuart_example_uvm_pkg__03a__03auvm_packer;
class Vuart_example_uvm_pkg__03a__03auvm_printer;
class Vuart_example_uvm_pkg__03a__03auvm_root;
class Vuart_example_uvm_pkg__03a__03auvm_set_get_dap_base__Tz30;


class Vuart_example__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_example_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuart_example__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuart_example_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30__Vclpkg(Vuart_example__Syms* symsp, const char* v__name);
    ~Vuart_example_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30__Vclpkg();
    VL_UNCOPYABLE(Vuart_example_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__Tz80> &get_type__Vfuncrtn);
};

#include "Vuart_example_uvm_pkg__03a__03auvm_set_get_dap_base__Tz30__Vclpkg.h"

class Vuart_example__Syms;

class Vuart_example_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30 : public Vuart_example_uvm_pkg__03a__03auvm_set_get_dap_base__Tz30 {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_value;
    CData/*0:0*/ __PVT__m_locked;
    virtual void __VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vuart_example__Syms* __restrict vlSymsp) {}
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_pack(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_do_unpack(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_packer> packer);
    virtual void __VnoInFunc_get(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &get__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_set(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ value);
    virtual void __VnoInFunc_try_get(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ &value, CData/*0:0*/ &try_get__Vfuncrtn);
    virtual void __VnoInFunc_try_set(Vuart_example__Syms* __restrict vlSymsp, CData/*0:0*/ value, CData/*0:0*/ &try_set__Vfuncrtn);
  private:
    void _ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp);
  public:
    Vuart_example_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name);
    std::string to_string() const;
    std::string to_string_middle() const;
    virtual ~Vuart_example_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30() {}
};

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_get_to_lock_dap__Tz30>& obj);

#endif  // guard
