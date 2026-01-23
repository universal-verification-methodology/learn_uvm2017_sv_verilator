// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpools_top.h for the primary calling header

#ifndef VERILATED_VPOOLS_TOP_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VPOOLS_TOP_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vpools_top_std__03a__03aprocess;


class Vpools_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpools_top_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vpools_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpools_top_std__03a__03aprocess__Vclpkg(Vpools_top__Syms* symsp, const char* v__name);
    ~Vpools_top_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(Vpools_top_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vpools_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vpools_top_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vpools_top__Syms* __restrict vlSymsp, VlClassRef<Vpools_top_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vpools_top__Syms;

class Vpools_top_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr_h1426c6b2__0;
    VlProcessRef __PVT__m_process;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    VlCoroutine __VnoInFunc_await(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vpools_top__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vpools_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vpools_top__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_srandom(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
    void __VnoInFunc_status(Vpools_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vpools_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vpools_top__Syms* __restrict vlSymsp);
  public:
    Vpools_top_std__03a__03aprocess(Vpools_top__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vpools_top_std__03a__03aprocess() {}
};

std::string VL_TO_STRING(const VlClassRef<Vpools_top_std__03a__03aprocess>& obj);


//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:193:21

template<> template<>
inline bool VlClassRef<Vpools_top_std__03a__03aprocess>::operator==(const VlClassRef<Vpools_top_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vpools_top_std__03a__03aprocess>::operator!=(const VlClassRef<Vpools_top_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vpools_top_std__03a__03aprocess>::operator<(const VlClassRef<Vpools_top_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
