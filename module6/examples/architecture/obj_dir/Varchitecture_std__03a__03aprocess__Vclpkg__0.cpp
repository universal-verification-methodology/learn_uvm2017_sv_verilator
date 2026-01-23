// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Varchitecture.h for the primary calling header

#include "Varchitecture__pch.h"

void Varchitecture_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, Varchitecture__Syms* __restrict vlSymsp, VlClassRef<Varchitecture_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlClassRef<Varchitecture_std__03a__03aprocess> p;
    p = VL_NEW(Varchitecture_std__03a__03aprocess, vlSymsp);

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:144:7
    VL_NULL_CHECK(p, "/usr/local/share/verilator/include/verilated_std.sv", 144)->__PVT__m_process = vlProcess;
    self__Vfuncrtn = p;
}

void Varchitecture_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue(Varchitecture__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Varchitecture_std__03a__03aprocess>> &processQueue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Varchitecture_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue\n"); );
    // Body
    while (VL_LTS_III(32, 0U, processQueue.size())) {
        VL_NULL_CHECK(processQueue.pop_back(), "/usr/local/share/verilator/include/verilated_std.sv", 184)->__VnoInFunc_kill(vlSymsp);
    }
}

void Varchitecture_std__03a__03aprocess::__VnoInFunc_set_status(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:151:7
    this->__PVT__m_process->state(s);
}

void Varchitecture_std__03a__03aprocess::__VnoInFunc_status(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 
// $cpure expression at /usr/local/share/verilator/include/verilated_std.sv:157:21
this->__PVT__m_process->state()
    ;
}

void Varchitecture_std__03a__03aprocess::__VnoInFunc_kill(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
}

void Varchitecture_std__03a__03aprocess::__VnoInFunc_suspend(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:168: Assertion failed in %Nstd.process.suspend: std::process::suspend() not supported\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("/usr/local/share/verilator/include/verilated_std.sv", 168, "");
}

void Varchitecture_std__03a__03aprocess::__VnoInFunc_resume(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
}

VlCoroutine Varchitecture_std__03a__03aprocess::__VnoInFunc_await(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::__VnoInFunc_await\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hd56de7d7__0;
    __Vtrigprevexpr_hd56de7d7__0 = 0;
    IData/*31:0*/ __Vfunc_status__2__Vfuncout;
    __Vfunc_status__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_status__3__Vfuncout;
    __Vfunc_status__3__Vfuncout = 0;
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ ((0U == ([&]() {
                                this->__VnoInFunc_status(vlSymsp, __Vfunc_status__2__Vfuncout);
                            }(), __Vfunc_status__2__Vfuncout)) 
                  | (4U == ([&]() {
                                this->__VnoInFunc_status(vlSymsp, __Vfunc_status__3__Vfuncout);
                            }(), __Vfunc_status__3__Vfuncout)))))) {
        CData/*0:0*/ __VdynTrigger_hef9194f2__0;
        __VdynTrigger_hef9194f2__0 = 0;
        __VdynTrigger_hef9194f2__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hef9194f2__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] ((32'h0 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__2__Vfuncout); , ); ) | (32'h4 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__3__Vfuncout); , ); )))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         177);
            __Vtrigprevexpr_hd56de7d7__0 = ((0U == 
                                             ([&]() {
                            this->__VnoInFunc_status(vlSymsp, __Vfunc_status__2__Vfuncout);
                        }(), __Vfunc_status__2__Vfuncout)) 
                                            | (4U == 
                                               ([&]() {
                            this->__VnoInFunc_status(vlSymsp, __Vfunc_status__3__Vfuncout);
                        }(), __Vfunc_status__3__Vfuncout)));
            __VdynTrigger_hef9194f2__0 = __Vtrigprevexpr_hd56de7d7__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hef9194f2__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] ((32'h0 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__2__Vfuncout); , ); ) | (32'h4 == $_EXPRSTMT( // Function: status __VnoInFunc_status(std::process.__Vfunc_status__3__Vfuncout); , ); )))", 
                                                     "/usr/local/share/verilator/include/verilated_std.sv", 
                                                     177);
    }
    co_return;}

void Varchitecture_std__03a__03aprocess::__VnoInFunc_get_randstate(Varchitecture__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
    // Body
    std::string s;
    s = VL_CVT_PACK_STR_NI(
// $c expression at /usr/local/share/verilator/include/verilated_std.sv:230:26
0
    );

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:232:7
    s = this->__PVT__m_process->randstate();
    get_randstate__Vfuncrtn = s;
}

void Varchitecture_std__03a__03aprocess::__VnoInFunc_set_randstate(Varchitecture__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:237:7
    this->__PVT__m_process->randstate(s);
}

Varchitecture_std__03a__03aprocess::Varchitecture_std__03a__03aprocess(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Varchitecture_std__03a__03aprocess::__VnoInFunc_srandom(Varchitecture__Syms* __restrict vlSymsp, IData/*31:0*/ seed) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::__VnoInFunc_srandom\n"); );
    // Body
    __Vm_rng.srandom(seed);
}

void Varchitecture_std__03a__03aprocess::_ctor_var_reset(Varchitecture__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Varchitecture_std__03a__03aprocess>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Varchitecture_std__03a__03aprocess::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Varchitecture_std__03a__03aprocess::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Varchitecture_std__03a__03aprocess::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_process:" + VL_TO_STRING(__PVT__m_process);
    return (out);
}
