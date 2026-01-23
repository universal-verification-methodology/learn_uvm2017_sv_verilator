// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_std__03a__03aprocess__Vclpkg::__VnoInFunc_self(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_std__03a__03aprocess> &self__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_std__03a__03aprocess__Vclpkg::__VnoInFunc_self\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_std__03a__03aprocess> p;
    p = VL_NEW(Vtest_and_gate_uvm_std__03a__03aprocess, vlSymsp);

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:144:7
    VL_NULL_CHECK(p, "/usr/local/share/verilator/include/verilated_std.sv", 144)->__PVT__m_process = vlProcess;
    self__Vfuncrtn = p;
}

void Vtest_and_gate_uvm_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtest_and_gate_uvm_std__03a__03aprocess>> &processQueue) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_std__03a__03aprocess__Vclpkg::__VnoInFunc_killQueue\n"); );
    // Body
    while (VL_LTS_III(32, 0U, processQueue.size())) {
        VL_NULL_CHECK(processQueue.pop_back(), "/usr/local/share/verilator/include/verilated_std.sv", 184)->__VnoInFunc_kill(vlSymsp);
    }
}

void Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_set_status(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_set_status\n"); );
    // Body

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:151:7
    this->__PVT__m_process->state(s);
}

void Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_status(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_status\n"); );
    // Body
    status__Vfuncrtn = 
// $cpure expression at /usr/local/share/verilator/include/verilated_std.sv:157:21
this->__PVT__m_process->state()
    ;
}

void Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_kill(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_kill\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 4U);
}

void Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_suspend(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_suspend\n"); );
    // Body
    VL_WRITEF_NX("[%0t] %%Error: verilated_std.sv:168: Assertion failed in %Nstd.process.suspend: std::process::suspend() not supported\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("/usr/local/share/verilator/include/verilated_std.sv", 168, "");
}

void Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_resume(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_resume\n"); );
    // Body
    this->__VnoInFunc_set_status(vlSymsp, 1U);
}

VlCoroutine Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_await(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_await\n"); );
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

void Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_get_randstate(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_get_randstate\n"); );
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

void Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_set_randstate(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_set_randstate\n"); );
    // Body

// $c statement at /usr/local/share/verilator/include/verilated_std.sv:237:7
    this->__PVT__m_process->randstate(s);
}

Vtest_and_gate_uvm_std__03a__03aprocess::Vtest_and_gate_uvm_std__03a__03aprocess(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
}

void Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_srandom(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ seed) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::__VnoInFunc_srandom\n"); );
    // Body
    __Vm_rng.srandom(seed);
}

void Vtest_and_gate_uvm_std__03a__03aprocess::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_std__03a__03aprocess>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_std__03a__03aprocess::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_std__03a__03aprocess::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_std__03a__03aprocess::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_process:" + VL_TO_STRING(__PVT__m_process);
    return (out);
}
