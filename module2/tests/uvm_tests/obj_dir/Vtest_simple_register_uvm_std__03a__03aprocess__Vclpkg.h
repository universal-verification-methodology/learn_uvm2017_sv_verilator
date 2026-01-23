// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_simple_register_uvm.h for the primary calling header

#ifndef VERILATED_VTEST_SIMPLE_REGISTER_UVM_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VTEST_SIMPLE_REGISTER_UVM_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtest_simple_register_uvm_std__03a__03aprocess;


class Vtest_simple_register_uvm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest_simple_register_uvm_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtest_simple_register_uvm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_simple_register_uvm_std__03a__03aprocess__Vclpkg(Vtest_simple_register_uvm__Syms* symsp, const char* v__name);
    ~Vtest_simple_register_uvm_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(Vtest_simple_register_uvm_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vtest_simple_register_uvm__Syms;

class Vtest_simple_register_uvm_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr_h1426c6b2__0;
    VlProcessRef __PVT__m_process;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    VlCoroutine __VnoInFunc_await(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_srandom(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
    void __VnoInFunc_status(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
  public:
    Vtest_simple_register_uvm_std__03a__03aprocess(Vtest_simple_register_uvm__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtest_simple_register_uvm_std__03a__03aprocess() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess>& obj);


//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:193:21

template<> template<>
inline bool VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess>::operator==(const VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess>::operator!=(const VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess>::operator<(const VlClassRef<Vtest_simple_register_uvm_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
