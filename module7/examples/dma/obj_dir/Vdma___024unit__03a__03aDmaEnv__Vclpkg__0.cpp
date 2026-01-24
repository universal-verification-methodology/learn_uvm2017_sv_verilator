// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdma.h for the primary calling header

#include "Vdma__pch.h"

void Vdma___024unit__03a__03aDmaEnv__Vclpkg::__VnoInFunc_get_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi63> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaEnv__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi63> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaEnv__Vclpkg::__VnoInFunc_type_name(Vdma__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vdma___024unit__03a__03aDmaEnv__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "DmaEnv"s;
}

void Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_get_object_type(Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_component_registry__pi63> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi63__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_get_type_name(Vdma__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "DmaEnv"s;
}

Vdma___024unit__03a__03aDmaEnv::Vdma___024unit__03a__03aDmaEnv(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, std::string n, VlClassRef<Vdma_uvm_pkg__03a__03auvm_component> p)
    : Vdma_uvm_pkg__03a__03auvm_env(vlProcess, vlSymsp, n, p) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

void Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_build_phase\n"); );
    // Locals
    VlClassRef<Vdma_uvm_pkg__03a__03auvm_sequencer__Tz126_TBz126> __Vfunc_create__3__Vfuncout;
    VlClassRef<Vdma___024unit__03a__03aDmaDriver> __Vfunc_create__4__Vfuncout;
    // Body
    Vdma_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__Tz140__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "seqr"s, 
                                                                                VlClassRef<Vdma___024unit__03a__03aDmaEnv>{this}, ""s, __Vfunc_create__3__Vfuncout);
    this->__PVT__seqr = __Vfunc_create__3__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_component_registry__pi62__Vclpkg.__VnoInFunc_create(vlProcess, vlSymsp, "drv"s, 
                                                                                VlClassRef<Vdma___024unit__03a__03aDmaEnv>{this}, ""s, __Vfunc_create__4__Vfuncout);
    this->__PVT__drv = __Vfunc_create__4__Vfuncout;
}

void Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_connect_phase(VlProcessRef vlProcess, Vdma__Syms* __restrict vlSymsp, VlClassRef<Vdma_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_connect_phase\n"); );
    // Body
    Vdma_uvm_pkg__03a__03auvm_component::__VnoInFunc_connect_phase(vlProcess, vlSymsp, phase);
    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__drv, "dma.sv", 221)
                  ->__PVT__seq_item_port, "dma.sv", 221)->__VnoInFunc_connect(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__seqr, "dma.sv", 221)
                                                                              ->__PVT__seq_item_export);
}

void Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_randomize(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___VBasicRand__8__Vfuncout;
    __Vfunc___VBasicRand__8__Vfuncout = 0;
    // Body
    Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vdma_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___VBasicRand(vlSymsp, __Vfunc___VBasicRand__8__Vfuncout);
            }(), __Vfunc___VBasicRand__8__Vfuncout));
}

void Vdma___024unit__03a__03aDmaEnv::__VnoInFunc___Vsetup_constraints(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vdma___024unit__03a__03aDmaEnv::__VnoInFunc___VBasicRand(Vdma__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vdma___024unit__03a__03aDmaEnv::_ctor_var_reset(Vdma__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vdma___024unit__03a__03aDmaEnv::~Vdma___024unit__03a__03aDmaEnv() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vdma___024unit__03a__03aDmaEnv>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vdma___024unit__03a__03aDmaEnv::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vdma___024unit__03a__03aDmaEnv::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vdma___024unit__03a__03aDmaEnv::to_string_middle\n"); );
    // Body
    std::string out;
    out += "seqr:" + VL_TO_STRING(__PVT__seqr);
    out += ", drv:" + VL_TO_STRING(__PVT__drv);
    out += ", "+ Vdma_uvm_pkg__03a__03auvm_env::to_string_middle();
    return (out);
}
