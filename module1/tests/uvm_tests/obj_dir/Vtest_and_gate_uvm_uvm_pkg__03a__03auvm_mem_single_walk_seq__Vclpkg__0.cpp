// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_and_gate_uvm.h for the primary calling header

#include "Vtest_and_gate_uvm__pch.h"

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_get_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi182> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi182> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi182__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_mem_single_walk_seq"s;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_object_type(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object_registry__pi182> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi182__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq, vlProcess, vlSymsp, "uvm_mem_walk_seq"s)
            : VL_NEW(Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_type_name(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_single_walk_seq"s;
}

Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__7__Vfuncout;
    __Vtask_uvm_report_enabled__7__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__8__id;
    std::string __Vtask_uvm_report_error__8__message;
    IData/*31:0*/ __Vtask_uvm_report_error__8__verbosity;
    __Vtask_uvm_report_error__8__verbosity = 0;
    std::string __Vtask_uvm_report_error__8__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__8__line;
    __Vtask_uvm_report_error__8__line = 0;
    std::string __Vtask_uvm_report_error__8__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__8__report_enabled_checked;
    __Vtask_uvm_report_error__8__report_enabled_checked = 0;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__14__Vfuncout;
    std::string __Vtask_get_full_name__15__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__16__Vfuncout;
    std::string __Vtask_get_full_name__17__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__18__Vfuncout;
    __Vtask_get_n_bits__18__Vfuncout = 0;
    std::string __Vtask_get_access__20__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__Vfuncout;
    __Vfunc_uvm_report_enabled__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__21__verbosity;
    __Vfunc_uvm_report_enabled__21__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__21__severity;
    __Vfunc_uvm_report_enabled__21__severity = 0;
    std::string __Vfunc_uvm_report_enabled__21__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__22__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__23__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__24__Vfuncout;
    __Vtask_uvm_report_enabled__24__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__25__id;
    std::string __Vtask_uvm_report_info__25__message;
    IData/*31:0*/ __Vtask_uvm_report_info__25__verbosity;
    __Vtask_uvm_report_info__25__verbosity = 0;
    std::string __Vtask_uvm_report_info__25__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__25__line;
    __Vtask_uvm_report_info__25__line = 0;
    std::string __Vtask_uvm_report_info__25__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__25__report_enabled_checked;
    __Vtask_uvm_report_info__25__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__26__Vfuncout;
    std::string __Vtask_get_full_name__27__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__28__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__29__Vfuncout;
    QData/*63:0*/ __Vtask_get_size__31__Vfuncout;
    __Vtask_get_size__31__Vfuncout = 0;
    IData/*31:0*/ __Vtask_write__32__status;
    __Vtask_write__32__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    std::string __Vfunc_uvm_report_enabled__33__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__36__Vfuncout;
    __Vtask_uvm_report_enabled__36__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__37__id;
    std::string __Vtask_uvm_report_error__37__message;
    IData/*31:0*/ __Vtask_uvm_report_error__37__verbosity;
    __Vtask_uvm_report_error__37__verbosity = 0;
    std::string __Vtask_uvm_report_error__37__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__37__line;
    __Vtask_uvm_report_error__37__line = 0;
    std::string __Vtask_uvm_report_error__37__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__37__report_enabled_checked;
    __Vtask_uvm_report_error__37__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__38__Vfuncout;
    std::string __Vtask_get_full_name__39__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__40__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__41__Vfuncout;
    IData/*31:0*/ __Vtask_read__43__status;
    __Vtask_read__43__status = 0;
    QData/*63:0*/ __Vtask_read__43__value;
    __Vtask_read__43__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44__Vfuncout;
    __Vfunc_uvm_report_enabled__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__44__verbosity;
    __Vfunc_uvm_report_enabled__44__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__44__severity;
    __Vfunc_uvm_report_enabled__44__severity = 0;
    std::string __Vfunc_uvm_report_enabled__44__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__45__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__46__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__47__Vfuncout;
    __Vtask_uvm_report_enabled__47__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__48__id;
    std::string __Vtask_uvm_report_error__48__message;
    IData/*31:0*/ __Vtask_uvm_report_error__48__verbosity;
    __Vtask_uvm_report_error__48__verbosity = 0;
    std::string __Vtask_uvm_report_error__48__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__48__line;
    __Vtask_uvm_report_error__48__line = 0;
    std::string __Vtask_uvm_report_error__48__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__48__report_enabled_checked;
    __Vtask_uvm_report_error__48__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__49__Vfuncout;
    std::string __Vtask_get_full_name__50__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__51__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__52__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__54__Vfuncout;
    __Vfunc_uvm_report_enabled__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__54__verbosity;
    __Vfunc_uvm_report_enabled__54__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__54__severity;
    __Vfunc_uvm_report_enabled__54__severity = 0;
    std::string __Vfunc_uvm_report_enabled__54__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__55__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__56__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__57__Vfuncout;
    __Vtask_uvm_report_enabled__57__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__58__id;
    std::string __Vtask_uvm_report_error__58__message;
    IData/*31:0*/ __Vtask_uvm_report_error__58__verbosity;
    __Vtask_uvm_report_error__58__verbosity = 0;
    std::string __Vtask_uvm_report_error__58__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__58__line;
    __Vtask_uvm_report_error__58__line = 0;
    std::string __Vtask_uvm_report_error__58__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__58__report_enabled_checked;
    __Vtask_uvm_report_error__58__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__59__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__60__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__61__Vfuncout;
    IData/*31:0*/ __Vtask_write__63__status;
    __Vtask_write__63__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__64__Vfuncout;
    __Vfunc_uvm_report_enabled__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__64__verbosity;
    __Vfunc_uvm_report_enabled__64__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__64__severity;
    __Vfunc_uvm_report_enabled__64__severity = 0;
    std::string __Vfunc_uvm_report_enabled__64__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__65__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__66__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__67__Vfuncout;
    __Vtask_uvm_report_enabled__67__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__68__id;
    std::string __Vtask_uvm_report_error__68__message;
    IData/*31:0*/ __Vtask_uvm_report_error__68__verbosity;
    __Vtask_uvm_report_error__68__verbosity = 0;
    std::string __Vtask_uvm_report_error__68__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__68__line;
    __Vtask_uvm_report_error__68__line = 0;
    std::string __Vtask_uvm_report_error__68__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__68__report_enabled_checked;
    __Vtask_uvm_report_error__68__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__69__Vfuncout;
    std::string __Vtask_get_full_name__70__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__71__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__72__Vfuncout;
    QData/*63:0*/ __Vtask_get_size__74__Vfuncout;
    __Vtask_get_size__74__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__75__status;
    __Vtask_read__75__status = 0;
    QData/*63:0*/ __Vtask_read__75__value;
    __Vtask_read__75__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__76__Vfuncout;
    __Vfunc_uvm_report_enabled__76__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__76__verbosity;
    __Vfunc_uvm_report_enabled__76__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__76__severity;
    __Vfunc_uvm_report_enabled__76__severity = 0;
    std::string __Vfunc_uvm_report_enabled__76__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__77__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__78__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__79__Vfuncout;
    __Vtask_uvm_report_enabled__79__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__80__id;
    std::string __Vtask_uvm_report_error__80__message;
    IData/*31:0*/ __Vtask_uvm_report_error__80__verbosity;
    __Vtask_uvm_report_error__80__verbosity = 0;
    std::string __Vtask_uvm_report_error__80__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__80__line;
    __Vtask_uvm_report_error__80__line = 0;
    std::string __Vtask_uvm_report_error__80__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__80__report_enabled_checked;
    __Vtask_uvm_report_error__80__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__81__Vfuncout;
    std::string __Vtask_get_full_name__82__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__83__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__84__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__86__Vfuncout;
    __Vfunc_uvm_report_enabled__86__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__86__verbosity;
    __Vfunc_uvm_report_enabled__86__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__86__severity;
    __Vfunc_uvm_report_enabled__86__severity = 0;
    std::string __Vfunc_uvm_report_enabled__86__id;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__87__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__88__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__89__Vfuncout;
    __Vtask_uvm_report_enabled__89__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__90__id;
    std::string __Vtask_uvm_report_error__90__message;
    IData/*31:0*/ __Vtask_uvm_report_error__90__verbosity;
    __Vtask_uvm_report_error__90__verbosity = 0;
    std::string __Vtask_uvm_report_error__90__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__90__line;
    __Vtask_uvm_report_error__90__line = 0;
    std::string __Vtask_uvm_report_error__90__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__90__report_enabled_checked;
    __Vtask_uvm_report_error__90__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__91__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    std::string __Vtemp_9;
    std::string __Vtemp_10;
    std::string __Vtemp_11;
    std::string __Vtemp_12;
    std::string __Vtemp_13;
    std::string __Vtemp_14;
    std::string __Vtemp_15;
    std::string __Vtemp_16;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__j;
    unnamedblk1__DOT__j = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__status;
    unnamedblk1__DOT__unnamedblk2__DOT__status = 0;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__val;
    unnamedblk1__DOT__unnamedblk2__DOT__val = 0;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__exp;
    unnamedblk1__DOT__unnamedblk2__DOT__exp = 0;
    QData/*63:0*/ unnamedblk1__DOT__unnamedblk2__DOT__v;
    unnamedblk1__DOT__unnamedblk2__DOT__v = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0;
    VlQueue<VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_map>> maps;
    IData/*31:0*/ n_bits;
    n_bits = 0;
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__4__id = "uvm_mem_walk_seq"s;
                            __Vfunc_uvm_report_enabled__4__severity = 2U;
                            __Vfunc_uvm_report_enabled__4__verbosity = 0U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__5__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__5__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__6__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__6__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__4__verbosity, (IData)(__Vfunc_uvm_report_enabled__4__severity), __Vfunc_uvm_report_enabled__4__id, __Vtask_uvm_report_enabled__7__Vfuncout);
                            __Vfunc_uvm_report_enabled__4__Vfuncout 
                                = __Vtask_uvm_report_enabled__7__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__4__Vfuncout))) {
                __Vtask_uvm_report_error__8__report_enabled_checked = 1U;
                __Vtask_uvm_report_error__8__context_name = ""s;
                __Vtask_uvm_report_error__8__line = 0x00000061U;
                __Vtask_uvm_report_error__8__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s;
                __Vtask_uvm_report_error__8__verbosity = 0U;
                __Vtask_uvm_report_error__8__message = "No memory specified to run sequence on"s;
                __Vtask_uvm_report_error__8__id = "uvm_mem_walk_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                    = __Vfunc_get__9__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__10__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                    = __Vtask_get_root__10__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__8__id, __Vtask_uvm_report_error__8__message, __Vtask_uvm_report_error__8__verbosity, __Vtask_uvm_report_error__8__filename, __Vtask_uvm_report_error__8__line, __Vtask_uvm_report_error__8__context_name, (IData)(__Vtask_uvm_report_error__8__report_enabled_checked));
            }
            goto __Vlabel0;
        }
        if ((((VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 102)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                                                }(), __Vtask_get_full_name__13__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__12__Vfuncout);
                            }(), __Vfunc_get_by_name__12__Vfuncout)) 
              || (VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 104)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__15__Vfuncout);
                                                }(), __Vtask_get_full_name__15__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__14__Vfuncout);
                            }(), __Vfunc_get_by_name__14__Vfuncout))) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 106)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__17__Vfuncout);
                                            }(), __Vtask_get_full_name__17__Vfuncout))), "NO_MEM_WALK_TEST"s, 0U, __Vfunc_get_by_name__16__Vfuncout);
                        }(), __Vfunc_get_by_name__16__Vfuncout)))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 110)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__18__Vfuncout);
        n_bits = __Vtask_get_n_bits__18__Vfuncout;
        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 113)->__VnoInFunc_get_maps(vlSymsp, maps);
        unnamedblk1__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
            {
                if (("RW"s != ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 121)
                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), __Vtask_get_access__20__Vfuncout);
                            }(), __Vtask_get_access__20__Vfuncout))) {
                    goto __Vlabel1;
                }
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__21__id = "uvm_mem_walk_seq"s;
                                __Vfunc_uvm_report_enabled__21__severity = 0U;
                                __Vfunc_uvm_report_enabled__21__verbosity = 0x00000064U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__22__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__22__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__23__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__23__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__21__verbosity, (IData)(__Vfunc_uvm_report_enabled__21__severity), __Vfunc_uvm_report_enabled__21__id, __Vtask_uvm_report_enabled__24__Vfuncout);
                                __Vfunc_uvm_report_enabled__21__Vfuncout 
                                    = __Vtask_uvm_report_enabled__24__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__21__Vfuncout))) {
                    __Vtask_uvm_report_info__25__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__25__context_name = ""s;
                    __Vtask_uvm_report_info__25__line = 0x0000007cU;
                    __Vtask_uvm_report_info__25__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s;
                    __Vtask_uvm_report_info__25__verbosity = 0x00000064U;
                    __Vtemp_1 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 124)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__26__Vfuncout);
                        }(), __Vtask_get_full_name__26__Vfuncout);
                    __Vtemp_2 = ([&]() {
                            VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 124)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__27__Vfuncout);
                        }(), __Vtask_get_full_name__27__Vfuncout);
                    __Vtask_uvm_report_info__25__message 
                        = VL_SFORMATF_N_NX("Walking memory %@ in map \"%@\"...",0,
                                           -1,&(__Vtemp_1),
                                           -1,&(__Vtemp_2)) ;
                    __Vtask_uvm_report_info__25__id = "uvm_mem_walk_seq"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__28__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__28__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__29__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__29__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__25__id, __Vtask_uvm_report_info__25__message, __Vtask_uvm_report_info__25__verbosity, __Vtask_uvm_report_info__25__filename, __Vtask_uvm_report_info__25__line, __Vtask_uvm_report_info__25__context_name, (IData)(__Vtask_uvm_report_info__25__report_enabled_checked));
                }
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k = 0U;
                while (((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                        < ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 131)
                           ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__31__Vfuncout);
                            }(), __Vtask_get_size__31__Vfuncout))) {
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 132)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__32__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), 
                                                                                (~ 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)), 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk1__DOT__unnamedblk2__DOT__status 
                        = __Vtask_write__32__status;
                    if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__33__id = "uvm_mem_walk_seq"s;
                                        __Vfunc_uvm_report_enabled__33__severity = 2U;
                                        __Vfunc_uvm_report_enabled__33__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__34__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__34__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__35__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__35__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__33__verbosity, (IData)(__Vfunc_uvm_report_enabled__33__severity), __Vfunc_uvm_report_enabled__33__id, __Vtask_uvm_report_enabled__36__Vfuncout);
                                        __Vfunc_uvm_report_enabled__33__Vfuncout 
                                            = __Vtask_uvm_report_enabled__36__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__33__Vfuncout))) {
                            __Vtask_uvm_report_error__37__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__37__context_name = ""s;
                            __Vtask_uvm_report_error__37__line = 0x00000088U;
                            __Vtask_uvm_report_error__37__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s;
                            __Vtask_uvm_report_error__37__verbosity = 0U;
                            __Vtemp_3 = Vtest_and_gate_uvm___024unit::__Venumtab_enum_name71
                                [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                            __Vtemp_4 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 136)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__38__Vfuncout);
                                }(), __Vtask_get_full_name__38__Vfuncout);
                            __Vtemp_5 = ([&]() {
                                    VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 136)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__39__Vfuncout);
                                }(), __Vtask_get_full_name__39__Vfuncout);
                            __Vtask_uvm_report_error__37__message 
                                = VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d]\" through map \"%@\".",0,
                                                   -1,
                                                   &(__Vtemp_3),
                                                   -1,
                                                   &(__Vtemp_4),
                                                   32,
                                                   unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                   -1,
                                                   &(__Vtemp_5)) ;
                            __Vtask_uvm_report_error__37__id = "uvm_mem_walk_seq"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__40__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__40__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__41__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__41__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__37__id, __Vtask_uvm_report_error__37__message, __Vtask_uvm_report_error__37__verbosity, __Vtask_uvm_report_error__37__filename, __Vtask_uvm_report_error__37__line, __Vtask_uvm_report_error__37__context_name, (IData)(__Vtask_uvm_report_error__37__report_enabled_checked));
                        }
                    }
                    if (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) {
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 140)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__43__status, 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) 
                                                                                - 1ULL), __Vtask_read__43__value, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_read__43__status;
                        unnamedblk1__DOT__unnamedblk2__DOT__val 
                            = __Vtask_read__43__value;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__44__id = "uvm_mem_walk_seq"s;
                                            __Vfunc_uvm_report_enabled__44__severity = 2U;
                                            __Vfunc_uvm_report_enabled__44__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__45__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__45__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__46__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__46__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__44__verbosity, (IData)(__Vfunc_uvm_report_enabled__44__severity), __Vfunc_uvm_report_enabled__44__id, __Vtask_uvm_report_enabled__47__Vfuncout);
                                            __Vfunc_uvm_report_enabled__44__Vfuncout 
                                                = __Vtask_uvm_report_enabled__47__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__44__Vfuncout))) {
                                __Vtask_uvm_report_error__48__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__48__context_name = ""s;
                                __Vtask_uvm_report_error__48__line = 0x0000008fU;
                                __Vtask_uvm_report_error__48__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s;
                                __Vtask_uvm_report_error__48__verbosity = 0U;
                                __Vtemp_6 = Vtest_and_gate_uvm___024unit::__Venumtab_enum_name71
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                __Vtemp_7 = ([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 143)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__49__Vfuncout);
                                    }(), __Vtask_get_full_name__49__Vfuncout);
                                __Vtemp_8 = ([&]() {
                                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 143)
                                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__50__Vfuncout);
                                    }(), __Vtask_get_full_name__50__Vfuncout);
                                __Vtask_uvm_report_error__48__message 
                                    = VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through map \"%@\".",0,
                                                       -1,
                                                       &(__Vtemp_6),
                                                       -1,
                                                       &(__Vtemp_7),
                                                       32,
                                                       unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                       -1,
                                                       &(__Vtemp_8)) ;
                                __Vtask_uvm_report_error__48__id = "uvm_mem_walk_seq"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__51__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__51__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__52__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__52__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__48__id, __Vtask_uvm_report_error__48__message, __Vtask_uvm_report_error__48__verbosity, __Vtask_uvm_report_error__48__filename, __Vtask_uvm_report_error__48__line, __Vtask_uvm_report_error__48__context_name, (IData)(__Vtask_uvm_report_error__48__report_enabled_checked));
                            }
                        } else {
                            unnamedblk1__DOT__unnamedblk2__DOT__exp 
                                = ((~ ((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                                       - 1ULL)) & (
                                                   VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                                                   - 1ULL));
                            if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                                 != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                                if ((0U != ([&]() {
                                                __Vfunc_uvm_report_enabled__54__id = "uvm_mem_walk_seq"s;
                                                __Vfunc_uvm_report_enabled__54__severity = 2U;
                                                __Vfunc_uvm_report_enabled__54__verbosity = 0U;
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__55__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                    = __Vfunc_get__55__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__56__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                    = __Vtask_get_root__56__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__54__verbosity, (IData)(__Vfunc_uvm_report_enabled__54__severity), __Vfunc_uvm_report_enabled__54__id, __Vtask_uvm_report_enabled__57__Vfuncout);
                                                __Vfunc_uvm_report_enabled__54__Vfuncout 
                                                    = __Vtask_uvm_report_enabled__57__Vfuncout;
                                            }(), __Vfunc_uvm_report_enabled__54__Vfuncout))) {
                                    __Vtask_uvm_report_error__58__report_enabled_checked = 1U;
                                    __Vtask_uvm_report_error__58__context_name = ""s;
                                    __Vtask_uvm_report_error__58__line = 0x00000095U;
                                    __Vtask_uvm_report_error__58__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s;
                                    __Vtask_uvm_report_error__58__verbosity = 0U;
                                    __Vtemp_9 = ([&]() {
                                            VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 149)
                                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__59__Vfuncout);
                                        }(), __Vtask_get_full_name__59__Vfuncout);
                                    __Vtask_uvm_report_error__58__message 
                                        = VL_SFORMATF_N_NX("\"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                           -1,
                                                           &(__Vtemp_9),
                                                           32,
                                                           (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                                                            - (IData)(1U)),
                                                           64,
                                                           unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                           64,
                                                           unnamedblk1__DOT__unnamedblk2__DOT__exp) ;
                                    __Vtask_uvm_report_error__58__id = "uvm_mem_walk_seq"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__60__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                        = __Vfunc_get__60__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__61__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                        = __Vtask_get_root__61__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__58__id, __Vtask_uvm_report_error__58__message, __Vtask_uvm_report_error__58__verbosity, __Vtask_uvm_report_error__58__filename, __Vtask_uvm_report_error__58__line, __Vtask_uvm_report_error__58__context_name, (IData)(__Vtask_uvm_report_error__58__report_enabled_checked));
                                }
                            }
                        }
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 154)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__63__status, 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) 
                                                                                - 1ULL), 
                                                                                (VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k) 
                                                                                - 1ULL), 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_write__63__status;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__64__id = "uvm_mem_walk_seq"s;
                                            __Vfunc_uvm_report_enabled__64__severity = 2U;
                                            __Vfunc_uvm_report_enabled__64__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__65__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__65__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__66__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__66__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__64__verbosity, (IData)(__Vfunc_uvm_report_enabled__64__severity), __Vfunc_uvm_report_enabled__64__id, __Vtask_uvm_report_enabled__67__Vfuncout);
                                            __Vfunc_uvm_report_enabled__64__Vfuncout 
                                                = __Vtask_uvm_report_enabled__67__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__64__Vfuncout))) {
                                __Vtask_uvm_report_error__68__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__68__context_name = ""s;
                                __Vtask_uvm_report_error__68__line = 0x0000009dU;
                                __Vtask_uvm_report_error__68__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s;
                                __Vtask_uvm_report_error__68__verbosity = 0U;
                                __Vtemp_10 = Vtest_and_gate_uvm___024unit::__Venumtab_enum_name71
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                __Vtemp_11 = ([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 157)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__69__Vfuncout);
                                    }(), __Vtask_get_full_name__69__Vfuncout);
                                __Vtemp_12 = ([&]() {
                                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 157)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__70__Vfuncout);
                                    }(), __Vtask_get_full_name__70__Vfuncout);
                                __Vtask_uvm_report_error__68__message 
                                    = VL_SFORMATF_N_NX("Status was %@ when writing \"%@[%0d]\" through map \"%@\".",0,
                                                       -1,
                                                       &(__Vtemp_10),
                                                       -1,
                                                       &(__Vtemp_11),
                                                       32,
                                                       (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                                                        - (IData)(1U)),
                                                       -1,
                                                       &(__Vtemp_12)) ;
                                __Vtask_uvm_report_error__68__id = "uvm_mem_walk_seq"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__71__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__71__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__72__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__72__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__68__id, __Vtask_uvm_report_error__68__message, __Vtask_uvm_report_error__68__verbosity, __Vtask_uvm_report_error__68__filename, __Vtask_uvm_report_error__68__line, __Vtask_uvm_report_error__68__context_name, (IData)(__Vtask_uvm_report_error__68__report_enabled_checked));
                            }
                        }
                    }
                    if (((QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k)) 
                         == (([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 161)
                              ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__74__Vfuncout);
                                    }(), __Vtask_get_size__74__Vfuncout) 
                             - 1ULL))) {
                        co_await VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 162)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__75__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k), __Vtask_read__75__value, 0U, maps.at(unnamedblk1__DOT__j), 
                                                                                VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                        unnamedblk1__DOT__unnamedblk2__DOT__status 
                            = __Vtask_read__75__status;
                        unnamedblk1__DOT__unnamedblk2__DOT__val 
                            = __Vtask_read__75__value;
                        if ((0U != unnamedblk1__DOT__unnamedblk2__DOT__status)) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__76__id = "uvm_mem_walk_seq"s;
                                            __Vfunc_uvm_report_enabled__76__severity = 2U;
                                            __Vfunc_uvm_report_enabled__76__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__77__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__77__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__78__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__78__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__76__verbosity, (IData)(__Vfunc_uvm_report_enabled__76__severity), __Vfunc_uvm_report_enabled__76__id, __Vtask_uvm_report_enabled__79__Vfuncout);
                                            __Vfunc_uvm_report_enabled__76__Vfuncout 
                                                = __Vtask_uvm_report_enabled__79__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__76__Vfuncout))) {
                                __Vtask_uvm_report_error__80__report_enabled_checked = 1U;
                                __Vtask_uvm_report_error__80__context_name = ""s;
                                __Vtask_uvm_report_error__80__line = 0x000000a5U;
                                __Vtask_uvm_report_error__80__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s;
                                __Vtask_uvm_report_error__80__verbosity = 0U;
                                __Vtemp_13 = Vtest_and_gate_uvm___024unit::__Venumtab_enum_name71
                                    [(3U & unnamedblk1__DOT__unnamedblk2__DOT__status)];
                                __Vtemp_14 = ([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 165)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__81__Vfuncout);
                                    }(), __Vtask_get_full_name__81__Vfuncout);
                                __Vtemp_15 = ([&]() {
                                        VL_NULL_CHECK(maps.at(unnamedblk1__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 165)
                                              ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__82__Vfuncout);
                                    }(), __Vtask_get_full_name__82__Vfuncout);
                                __Vtask_uvm_report_error__80__message 
                                    = VL_SFORMATF_N_NX("Status was %@ when reading \"%@[%0d]\" through map \"%@\".",0,
                                                       -1,
                                                       &(__Vtemp_13),
                                                       -1,
                                                       &(__Vtemp_14),
                                                       32,
                                                       unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                       -1,
                                                       &(__Vtemp_15)) ;
                                __Vtask_uvm_report_error__80__id = "uvm_mem_walk_seq"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__83__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                    = __Vfunc_get__83__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__84__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                    = __Vtask_get_root__84__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__80__id, __Vtask_uvm_report_error__80__message, __Vtask_uvm_report_error__80__verbosity, __Vtask_uvm_report_error__80__filename, __Vtask_uvm_report_error__80__line, __Vtask_uvm_report_error__80__context_name, (IData)(__Vtask_uvm_report_error__80__report_enabled_checked));
                            }
                        } else {
                            unnamedblk1__DOT__unnamedblk2__DOT__exp 
                                = ((~ (QData)((IData)(unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k))) 
                                   & (VL_SHIFTL_QQI(64,64,32, 1ULL, n_bits) 
                                      - 1ULL));
                            if ((unnamedblk1__DOT__unnamedblk2__DOT__val 
                                 != unnamedblk1__DOT__unnamedblk2__DOT__exp)) {
                                if ((0U != ([&]() {
                                                __Vfunc_uvm_report_enabled__86__id = "uvm_mem_walk_seq"s;
                                                __Vfunc_uvm_report_enabled__86__severity = 2U;
                                                __Vfunc_uvm_report_enabled__86__verbosity = 0U;
                                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__87__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                    = __Vfunc_get__87__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__88__Vfuncout);
                                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                    = __Vtask_get_root__88__Vfuncout;
                                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__86__verbosity, (IData)(__Vfunc_uvm_report_enabled__86__severity), __Vfunc_uvm_report_enabled__86__id, __Vtask_uvm_report_enabled__89__Vfuncout);
                                                __Vfunc_uvm_report_enabled__86__Vfuncout 
                                                    = __Vtask_uvm_report_enabled__89__Vfuncout;
                                            }(), __Vfunc_uvm_report_enabled__86__Vfuncout))) {
                                    __Vtask_uvm_report_error__90__report_enabled_checked = 1U;
                                    __Vtask_uvm_report_error__90__context_name = ""s;
                                    __Vtask_uvm_report_error__90__line = 0x000000abU;
                                    __Vtask_uvm_report_error__90__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh"s;
                                    __Vtask_uvm_report_error__90__verbosity = 0U;
                                    __Vtemp_16 = ([&]() {
                                            VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_mem_walk_seq.svh", 171)
                                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__91__Vfuncout);
                                        }(), __Vtask_get_full_name__91__Vfuncout);
                                    __Vtask_uvm_report_error__90__message 
                                        = VL_SFORMATF_N_NX("\"%@[%0d]\" read back as 'h%x instead of 'h%x.",0,
                                                           -1,
                                                           &(__Vtemp_16),
                                                           32,
                                                           unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k,
                                                           64,
                                                           unnamedblk1__DOT__unnamedblk2__DOT__val,
                                                           64,
                                                           unnamedblk1__DOT__unnamedblk2__DOT__exp) ;
                                    __Vtask_uvm_report_error__90__id = "uvm_mem_walk_seq"s;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                        = __Vfunc_get__92__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                        = __Vtask_get_root__93__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__90__id, __Vtask_uvm_report_error__90__message, __Vtask_uvm_report_error__90__verbosity, __Vtask_uvm_report_error__90__filename, __Vtask_uvm_report_error__90__line, __Vtask_uvm_report_error__90__context_name, (IData)(__Vtask_uvm_report_error__90__report_enabled_checked));
                                }
                            }
                        }
                    }
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__k);
                }
                __Vlabel1: ;
            }
            unnamedblk1__DOT__j = ((IData)(1U) + unnamedblk1__DOT__j);
        }
        __Vlabel0: ;
    }
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__96__Vfuncout;
    __Vfunc___Vbasic_randomize__96__Vfuncout = 0;
    // Body
    Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__96__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__96__Vfuncout));
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___Vbasic_randomize(Vtest_and_gate_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::_ctor_var_reset(Vtest_and_gate_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_mem_single_walk_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", "+ Vtest_and_gate_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323::to_string_middle();
    return (out);
}
