// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_example.h for the primary calling header

#include "Vuart_example__pch.h"

void Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi179> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi179> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi179__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_mem_shared_access_seq"s;
}

void Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type(Vuart_example__Syms* __restrict vlSymsp, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object_registry__pi179> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi179__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq, vlProcess, vlSymsp, "uvm_mem_shared_access_seq"s)
            : VL_NEW(Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name(Vuart_example__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_mem_shared_access_seq"s;
}

Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp, std::string name)
    : Vuart_example_uvm_pkg__03a__03auvm_reg_sequence__Tz307(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
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
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__14__Vfuncout;
    std::string __Vtask_get_full_name__15__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__16__Vfuncout;
    std::string __Vtask_get_full_name__17__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__18__Vfuncout;
    std::string __Vtask_get_full_name__19__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_maps__20__Vfuncout;
    __Vtask_get_n_maps__20__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__22__Vfuncout;
    std::string __Vtask_get_access__23__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__Vfuncout;
    __Vfunc_uvm_report_enabled__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__24__verbosity;
    __Vfunc_uvm_report_enabled__24__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__24__severity;
    __Vfunc_uvm_report_enabled__24__severity = 0;
    std::string __Vfunc_uvm_report_enabled__24__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__25__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__26__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__27__Vfuncout;
    __Vtask_uvm_report_enabled__27__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__28__id;
    std::string __Vtask_uvm_report_warning__28__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__verbosity;
    __Vtask_uvm_report_warning__28__verbosity = 0;
    std::string __Vtask_uvm_report_warning__28__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__28__line;
    __Vtask_uvm_report_warning__28__line = 0;
    std::string __Vtask_uvm_report_warning__28__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__28__report_enabled_checked;
    __Vtask_uvm_report_warning__28__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__29__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__30__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__31__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__verbosity;
    __Vfunc_uvm_report_enabled__33__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__33__severity;
    __Vfunc_uvm_report_enabled__33__severity = 0;
    std::string __Vfunc_uvm_report_enabled__33__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__34__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__35__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__36__Vfuncout;
    __Vtask_uvm_report_enabled__36__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__37__id;
    std::string __Vtask_uvm_report_info__37__message;
    IData/*31:0*/ __Vtask_uvm_report_info__37__verbosity;
    __Vtask_uvm_report_info__37__verbosity = 0;
    std::string __Vtask_uvm_report_info__37__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__37__line;
    __Vtask_uvm_report_info__37__line = 0;
    std::string __Vtask_uvm_report_info__37__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__37__report_enabled_checked;
    __Vtask_uvm_report_info__37__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__38__Vfuncout;
    std::string __Vtask_get_full_name__39__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__40__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__41__Vfuncout;
    QData/*63:0*/ __Vtask_get_size__43__Vfuncout;
    __Vtask_get_size__43__Vfuncout = 0;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_backdoor> __Vtask_get_backdoor__44__Vfuncout;
    IData/*31:0*/ __Vtask_peek__45__status;
    __Vtask_peek__45__status = 0;
    QData/*63:0*/ __Vtask_peek__45__value;
    __Vtask_peek__45__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__46__Vfuncout;
    __Vfunc_uvm_report_enabled__46__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__46__verbosity;
    __Vfunc_uvm_report_enabled__46__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__46__severity;
    __Vfunc_uvm_report_enabled__46__severity = 0;
    std::string __Vfunc_uvm_report_enabled__46__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__47__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__48__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__49__Vfuncout;
    __Vtask_uvm_report_enabled__49__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__50__id;
    std::string __Vtask_uvm_report_error__50__message;
    IData/*31:0*/ __Vtask_uvm_report_error__50__verbosity;
    __Vtask_uvm_report_error__50__verbosity = 0;
    std::string __Vtask_uvm_report_error__50__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__50__line;
    __Vtask_uvm_report_error__50__line = 0;
    std::string __Vtask_uvm_report_error__50__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__50__report_enabled_checked;
    __Vtask_uvm_report_error__50__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__51__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    IData/*31:0*/ __Vtask_read__55__status;
    __Vtask_read__55__status = 0;
    QData/*63:0*/ __Vtask_read__55__value;
    __Vtask_read__55__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__56__Vfuncout;
    __Vfunc_uvm_report_enabled__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__56__verbosity;
    __Vfunc_uvm_report_enabled__56__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__56__severity;
    __Vfunc_uvm_report_enabled__56__severity = 0;
    std::string __Vfunc_uvm_report_enabled__56__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__57__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__58__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__59__Vfuncout;
    __Vtask_uvm_report_enabled__59__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__60__id;
    std::string __Vtask_uvm_report_error__60__message;
    IData/*31:0*/ __Vtask_uvm_report_error__60__verbosity;
    __Vtask_uvm_report_error__60__verbosity = 0;
    std::string __Vtask_uvm_report_error__60__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__60__line;
    __Vtask_uvm_report_error__60__line = 0;
    std::string __Vtask_uvm_report_error__60__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__60__report_enabled_checked;
    __Vtask_uvm_report_error__60__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__61__Vfuncout;
    std::string __Vtask_get_full_name__62__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__63__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__64__Vfuncout;
    IData/*31:0*/ __Vtask_write__66__status;
    __Vtask_write__66__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__Vfuncout;
    __Vfunc_uvm_report_enabled__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__verbosity;
    __Vfunc_uvm_report_enabled__67__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__67__severity;
    __Vfunc_uvm_report_enabled__67__severity = 0;
    std::string __Vfunc_uvm_report_enabled__67__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__70__Vfuncout;
    __Vtask_uvm_report_enabled__70__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__71__id;
    std::string __Vtask_uvm_report_error__71__message;
    IData/*31:0*/ __Vtask_uvm_report_error__71__verbosity;
    __Vtask_uvm_report_error__71__verbosity = 0;
    std::string __Vtask_uvm_report_error__71__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__71__line;
    __Vtask_uvm_report_error__71__line = 0;
    std::string __Vtask_uvm_report_error__71__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__71__report_enabled_checked;
    __Vtask_uvm_report_error__71__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__72__Vfuncout;
    std::string __Vtask_get_full_name__73__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__74__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__75__Vfuncout;
    IData/*31:0*/ __Vtask_read__77__status;
    __Vtask_read__77__status = 0;
    QData/*63:0*/ __Vtask_read__77__value;
    __Vtask_read__77__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__Vfuncout;
    __Vfunc_uvm_report_enabled__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    std::string __Vfunc_uvm_report_enabled__78__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__81__Vfuncout;
    __Vtask_uvm_report_enabled__81__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__82__id;
    std::string __Vtask_uvm_report_error__82__message;
    IData/*31:0*/ __Vtask_uvm_report_error__82__verbosity;
    __Vtask_uvm_report_error__82__verbosity = 0;
    std::string __Vtask_uvm_report_error__82__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__82__line;
    __Vtask_uvm_report_error__82__line = 0;
    std::string __Vtask_uvm_report_error__82__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__82__report_enabled_checked;
    __Vtask_uvm_report_error__82__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__83__Vfuncout;
    std::string __Vtask_get_full_name__84__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__85__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__86__Vfuncout;
    std::string __Vtask_get_access__88__Vfuncout;
    std::string __Vtask_get_access__89__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_bits__90__Vfuncout;
    __Vtask_get_n_bits__90__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__91__Vfuncout;
    __Vfunc_uvm_report_enabled__91__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__91__verbosity;
    __Vfunc_uvm_report_enabled__91__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__91__severity;
    __Vfunc_uvm_report_enabled__91__severity = 0;
    std::string __Vfunc_uvm_report_enabled__91__id;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__92__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__93__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__94__Vfuncout;
    __Vtask_uvm_report_enabled__94__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__95__id;
    std::string __Vtask_uvm_report_error__95__message;
    IData/*31:0*/ __Vtask_uvm_report_error__95__verbosity;
    __Vtask_uvm_report_error__95__verbosity = 0;
    std::string __Vtask_uvm_report_error__95__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__95__line;
    __Vtask_uvm_report_error__95__line = 0;
    std::string __Vtask_uvm_report_error__95__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__95__report_enabled_checked;
    __Vtask_uvm_report_error__95__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__96__Vfuncout;
    std::string __Vtask_get_full_name__97__Vfuncout;
    std::string __Vtask_get_full_name__98__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__99__Vfuncout;
    VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_root> __Vtask_get_root__100__Vfuncout;
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
    std::string __Vtemp_17;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__j;
    unnamedblk1__DOT__j = 0;
    std::string unnamedblk1__DOT__unnamedblk2__DOT__right;
    IData/*31:0*/ unnamedblk3__DOT__j;
    unnamedblk3__DOT__j = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__offset;
    unnamedblk3__DOT__unnamedblk4__DOT__offset = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0;
    IData/*31:0*/ read_from;
    read_from = 0;
    VlQueue<VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        if ((VlNull{} == this->__PVT__mem)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__4__id = "uvm_mem_shared_access_seq"s;
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
                __Vtask_uvm_report_error__8__line = 0x000000e6U;
                __Vtask_uvm_report_error__8__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                __Vtask_uvm_report_error__8__verbosity = 0U;
                __Vtask_uvm_report_error__8__message = "No memory specified to run sequence on"s;
                __Vtask_uvm_report_error__8__id = "uvm_mem_shared_access_seq"s;
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
        if (((((VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 235)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                                                    }(), __Vtask_get_full_name__13__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__12__Vfuncout);
                                }(), __Vfunc_get_by_name__12__Vfuncout)) 
               || (VlNull{} != ([&]() {
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 237)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__15__Vfuncout);
                                                    }(), __Vtask_get_full_name__15__Vfuncout))), "NO_MEM_TESTS"s, 0U, __Vfunc_get_by_name__14__Vfuncout);
                                }(), __Vfunc_get_by_name__14__Vfuncout))) 
              || (VlNull{} != ([&]() {
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 239)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__17__Vfuncout);
                                                }(), __Vtask_get_full_name__17__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__16__Vfuncout);
                            }(), __Vfunc_get_by_name__16__Vfuncout))) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 241)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__19__Vfuncout);
                                            }(), __Vtask_get_full_name__19__Vfuncout))), "NO_MEM_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__18__Vfuncout);
                        }(), __Vfunc_get_by_name__18__Vfuncout)))) {
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 2U, ([&]() {
                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 246)
                                ->__VnoInFunc_get_n_maps(vlSymsp, __Vtask_get_n_maps__20__Vfuncout);
                    }(), __Vtask_get_n_maps__20__Vfuncout))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 247)->__VnoInFunc_get_maps(vlSymsp, maps);
        read_from = 0xffffffffU;
        if ((VlNull{} == ([&]() {
                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 252)
                          ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__22__Vfuncout);
                    }(), __Vtask_get_backdoor__22__Vfuncout))) {
            {
                unnamedblk1__DOT__j = 0U;
                while (VL_LTS_III(32, unnamedblk1__DOT__j, maps.size())) {
                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 255)->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk1__DOT__j), __Vtask_get_access__23__Vfuncout);
                    unnamedblk1__DOT__unnamedblk2__DOT__right 
                        = __Vtask_get_access__23__Vfuncout;
                    if ((("RW"s == unnamedblk1__DOT__unnamedblk2__DOT__right) 
                         | ("RO"s == unnamedblk1__DOT__unnamedblk2__DOT__right))) {
                        read_from = unnamedblk1__DOT__j;
                        goto __Vlabel1;
                    }
                    unnamedblk1__DOT__j = ((IData)(1U) 
                                           + unnamedblk1__DOT__j);
                }
                __Vlabel1: ;
            }
            if (VL_GTS_III(32, 0U, read_from)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__24__id = "uvm_mem_shared_access_seq"s;
                                __Vfunc_uvm_report_enabled__24__severity = 1U;
                                __Vfunc_uvm_report_enabled__24__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__25__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__25__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__26__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__26__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__24__verbosity, (IData)(__Vfunc_uvm_report_enabled__24__severity), __Vfunc_uvm_report_enabled__24__id, __Vtask_uvm_report_enabled__27__Vfuncout);
                                __Vfunc_uvm_report_enabled__24__Vfuncout 
                                    = __Vtask_uvm_report_enabled__27__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__24__Vfuncout))) {
                    __Vtask_uvm_report_warning__28__report_enabled_checked = 1U;
                    __Vtask_uvm_report_warning__28__context_name = ""s;
                    __Vtask_uvm_report_warning__28__line = 0x00000107U;
                    __Vtask_uvm_report_warning__28__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                    __Vtask_uvm_report_warning__28__verbosity = 0U;
                    __Vtemp_1 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 263)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__29__Vfuncout);
                        }(), __Vtask_get_full_name__29__Vfuncout);
                    __Vtask_uvm_report_warning__28__message 
                        = VL_SFORMATF_N_NX("Memory \"%@\" cannot be read from any maps or backdoor. Shared access not verified.",0,
                                           -1,&(__Vtemp_1)) ;
                    __Vtask_uvm_report_warning__28__id = "uvm_mem_shared_access_seq"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__30__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                        = __Vfunc_get__30__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__31__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                        = __Vtask_get_root__31__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__28__id, __Vtask_uvm_report_warning__28__message, __Vtask_uvm_report_warning__28__verbosity, __Vtask_uvm_report_warning__28__filename, __Vtask_uvm_report_warning__28__line, __Vtask_uvm_report_warning__28__context_name, (IData)(__Vtask_uvm_report_warning__28__report_enabled_checked));
                }
                goto __Vlabel0;
            }
        }
        unnamedblk3__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__j, maps.size())) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__33__id = "uvm_mem_shared_access_seq"s;
                            __Vfunc_uvm_report_enabled__33__severity = 0U;
                            __Vfunc_uvm_report_enabled__33__verbosity = 0x00000064U;
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
                __Vtask_uvm_report_info__37__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__37__context_name = ""s;
                __Vtask_uvm_report_info__37__line = 0x00000110U;
                __Vtask_uvm_report_info__37__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                __Vtask_uvm_report_info__37__verbosity = 0x00000064U;
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 272)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__38__Vfuncout);
                    }(), __Vtask_get_full_name__38__Vfuncout);
                __Vtemp_3 = ([&]() {
                        VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 272)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__39__Vfuncout);
                    }(), __Vtask_get_full_name__39__Vfuncout);
                __Vtask_uvm_report_info__37__message 
                    = VL_SFORMATF_N_NX("Writing shared memory \"%@\" via map \"%@\".",0,
                                       -1,&(__Vtemp_2),
                                       -1,&(__Vtemp_3)) ;
                __Vtask_uvm_report_info__37__id = "uvm_mem_shared_access_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__40__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__40__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__41__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__41__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__37__id, __Vtask_uvm_report_info__37__message, __Vtask_uvm_report_info__37__verbosity, __Vtask_uvm_report_info__37__filename, __Vtask_uvm_report_info__37__line, __Vtask_uvm_report_info__37__context_name, (IData)(__Vtask_uvm_report_info__37__report_enabled_checked));
            }
            unnamedblk3__DOT__unnamedblk4__DOT__offset = 0U;
            while (((QData)((IData)(unnamedblk3__DOT__unnamedblk4__DOT__offset)) 
                    < ([&]() {
                            VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 275)
                       ->__VnoInFunc_get_size(vlSymsp, __Vtask_get_size__43__Vfuncout);
                        }(), __Vtask_get_size__43__Vfuncout))) {
                if ((VlNull{} != ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 280)
                                  ->__VnoInFunc_get_backdoor(vlSymsp, 1U, __Vtask_get_backdoor__44__Vfuncout);
                            }(), __Vtask_get_backdoor__44__Vfuncout))) {
                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 281)->__VnoInFunc_peek(vlProcess, vlSymsp, __Vtask_peek__45__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), __Vtask_peek__45__value, ""s, VlNull{}, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                        = __Vtask_peek__45__status;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev 
                        = __Vtask_peek__45__value;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__46__id = "uvm_mem_shared_access_seq"s;
                                        __Vfunc_uvm_report_enabled__46__severity = 2U;
                                        __Vfunc_uvm_report_enabled__46__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__47__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__47__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__48__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__48__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__46__verbosity, (IData)(__Vfunc_uvm_report_enabled__46__severity), __Vfunc_uvm_report_enabled__46__id, __Vtask_uvm_report_enabled__49__Vfuncout);
                                        __Vfunc_uvm_report_enabled__46__Vfuncout 
                                            = __Vtask_uvm_report_enabled__49__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__46__Vfuncout))) {
                            __Vtask_uvm_report_error__50__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__50__context_name = ""s;
                            __Vtask_uvm_report_error__50__line = 0x0000011cU;
                            __Vtask_uvm_report_error__50__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                            __Vtask_uvm_report_error__50__verbosity = 0U;
                            __Vtemp_4 = Vuart_example___024unit::__Venumtab_enum_name71
                                [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                            __Vtemp_5 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 284)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__51__Vfuncout);
                                }(), __Vtask_get_full_name__51__Vfuncout);
                            __Vtask_uvm_report_error__50__message 
                                = VL_SFORMATF_N_NX("Status was %@ when reading initial value of \"%@\"[%0d] through backdoor.",0,
                                                   -1,
                                                   &(__Vtemp_4),
                                                   -1,
                                                   &(__Vtemp_5),
                                                   32,
                                                   unnamedblk3__DOT__unnamedblk4__DOT__offset) ;
                            __Vtask_uvm_report_error__50__id = "uvm_mem_shared_access_seq"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__52__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__53__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__50__id, __Vtask_uvm_report_error__50__message, __Vtask_uvm_report_error__50__verbosity, __Vtask_uvm_report_error__50__filename, __Vtask_uvm_report_error__50__line, __Vtask_uvm_report_error__50__context_name, (IData)(__Vtask_uvm_report_error__50__report_enabled_checked));
                        }
                    }
                } else {
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 288)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__55__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), __Vtask_read__55__value, 0U, maps.at(read_from), 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                        = __Vtask_read__55__status;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev 
                        = __Vtask_read__55__value;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__56__id = "uvm_mem_shared_access_seq"s;
                                        __Vfunc_uvm_report_enabled__56__severity = 2U;
                                        __Vfunc_uvm_report_enabled__56__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__57__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__57__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__58__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__58__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__56__verbosity, (IData)(__Vfunc_uvm_report_enabled__56__severity), __Vfunc_uvm_report_enabled__56__id, __Vtask_uvm_report_enabled__59__Vfuncout);
                                        __Vfunc_uvm_report_enabled__56__Vfuncout 
                                            = __Vtask_uvm_report_enabled__59__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__56__Vfuncout))) {
                            __Vtask_uvm_report_error__60__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__60__context_name = ""s;
                            __Vtask_uvm_report_error__60__line = 0x00000124U;
                            __Vtask_uvm_report_error__60__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                            __Vtask_uvm_report_error__60__verbosity = 0U;
                            __Vtemp_6 = Vuart_example___024unit::__Venumtab_enum_name71
                                [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                            __Vtemp_7 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 292)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__61__Vfuncout);
                                }(), __Vtask_get_full_name__61__Vfuncout);
                            __Vtemp_8 = ([&]() {
                                    VL_NULL_CHECK(maps.at(read_from), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 292)
                                         ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__62__Vfuncout);
                                }(), __Vtask_get_full_name__62__Vfuncout);
                            __Vtask_uvm_report_error__60__message 
                                = VL_SFORMATF_N_NX("Status was %@ when reading initial value of \"%@\"[%0d] through map \"%@\".",0,
                                                   -1,
                                                   &(__Vtemp_6),
                                                   -1,
                                                   &(__Vtemp_7),
                                                   32,
                                                   unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                   -1,
                                                   &(__Vtemp_8)) ;
                            __Vtask_uvm_report_error__60__id = "uvm_mem_shared_access_seq"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__63__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__63__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__64__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__64__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__60__id, __Vtask_uvm_report_error__60__message, __Vtask_uvm_report_error__60__verbosity, __Vtask_uvm_report_error__60__filename, __Vtask_uvm_report_error__60__line, __Vtask_uvm_report_error__60__context_name, (IData)(__Vtask_uvm_report_error__60__report_enabled_checked));
                        }
                    }
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v 
                    = VL_RANDOM_Q();
                co_await VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 300)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__66__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v, 0U, maps.at(unnamedblk3__DOT__j), 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                    = __Vtask_write__66__status;
                if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__67__id = "uvm_mem_shared_access_seq"s;
                                    __Vfunc_uvm_report_enabled__67__severity = 2U;
                                    __Vfunc_uvm_report_enabled__67__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__68__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__68__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__69__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__69__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__67__verbosity, (IData)(__Vfunc_uvm_report_enabled__67__severity), __Vfunc_uvm_report_enabled__67__id, __Vtask_uvm_report_enabled__70__Vfuncout);
                                    __Vfunc_uvm_report_enabled__67__Vfuncout 
                                        = __Vtask_uvm_report_enabled__70__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__67__Vfuncout))) {
                        __Vtask_uvm_report_error__71__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__71__context_name = ""s;
                        __Vtask_uvm_report_error__71__line = 0x0000012fU;
                        __Vtask_uvm_report_error__71__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                        __Vtask_uvm_report_error__71__verbosity = 0U;
                        __Vtemp_9 = Vuart_example___024unit::__Venumtab_enum_name71
                            [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                        __Vtemp_10 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 303)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__72__Vfuncout);
                            }(), __Vtask_get_full_name__72__Vfuncout);
                        __Vtemp_11 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 303)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__73__Vfuncout);
                            }(), __Vtask_get_full_name__73__Vfuncout);
                        __Vtask_uvm_report_error__71__message 
                            = VL_SFORMATF_N_NX("Status was %@ when writing \"%@\"[%0d] through map \"%@\".",0,
                                               -1,&(__Vtemp_9),
                                               -1,&(__Vtemp_10),
                                               32,unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                               -1,&(__Vtemp_11)) ;
                        __Vtask_uvm_report_error__71__id = "uvm_mem_shared_access_seq"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__74__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__74__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__75__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__75__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__71__id, __Vtask_uvm_report_error__71__message, __Vtask_uvm_report_error__71__verbosity, __Vtask_uvm_report_error__71__filename, __Vtask_uvm_report_error__71__line, __Vtask_uvm_report_error__71__context_name, (IData)(__Vtask_uvm_report_error__71__report_enabled_checked));
                    }
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k = 0U;
                while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k, maps.size())) {
                    co_await VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 310)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__77__status, 
                                                                                VL_EXTENDS_QI(64,32, unnamedblk3__DOT__unnamedblk4__DOT__offset), __Vtask_read__77__value, 0U, maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), 
                                                                                VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status 
                        = __Vtask_read__77__status;
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual 
                        = __Vtask_read__77__value;
                    if ((0U != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__78__id = "uvm_mem_shared_access_seq"s;
                                        __Vfunc_uvm_report_enabled__78__severity = 2U;
                                        __Vfunc_uvm_report_enabled__78__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__79__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__79__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__80__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__80__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__78__verbosity, (IData)(__Vfunc_uvm_report_enabled__78__severity), __Vfunc_uvm_report_enabled__78__id, __Vtask_uvm_report_enabled__81__Vfuncout);
                                        __Vfunc_uvm_report_enabled__78__Vfuncout 
                                            = __Vtask_uvm_report_enabled__81__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__78__Vfuncout))) {
                            __Vtask_uvm_report_error__82__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__82__context_name = ""s;
                            __Vtask_uvm_report_error__82__line = 0x00000139U;
                            __Vtask_uvm_report_error__82__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                            __Vtask_uvm_report_error__82__verbosity = 0U;
                            __Vtemp_12 = Vuart_example___024unit::__Venumtab_enum_name71
                                [(3U & unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__status)];
                            __Vtemp_13 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 313)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__83__Vfuncout);
                                }(), __Vtask_get_full_name__83__Vfuncout);
                            __Vtemp_14 = ([&]() {
                                    VL_NULL_CHECK(maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 313)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__84__Vfuncout);
                                }(), __Vtask_get_full_name__84__Vfuncout);
                            __Vtask_uvm_report_error__82__message 
                                = VL_SFORMATF_N_NX("Status was %@ when reading %@[%0d] through map \"%@\".",0,
                                                   -1,
                                                   &(__Vtemp_12),
                                                   -1,
                                                   &(__Vtemp_13),
                                                   32,
                                                   unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                   -1,
                                                   &(__Vtemp_14)) ;
                            __Vtask_uvm_report_error__82__id = "uvm_mem_shared_access_seq"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__85__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__85__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__86__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__86__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__82__id, __Vtask_uvm_report_error__82__message, __Vtask_uvm_report_error__82__verbosity, __Vtask_uvm_report_error__82__filename, __Vtask_uvm_report_error__82__line, __Vtask_uvm_report_error__82__context_name, (IData)(__Vtask_uvm_report_error__82__report_enabled_checked));
                        }
                    }
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                        = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v;
                    if (("RO"s == ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 318)
                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__j), __Vtask_get_access__88__Vfuncout);
                                }(), __Vtask_get_access__88__Vfuncout))) {
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                            = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev;
                    }
                    if (("WO"s == ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 321)
                                   ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), __Vtask_get_access__89__Vfuncout);
                                }(), __Vtask_get_access__89__Vfuncout))) {
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp = 0ULL;
                    }
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                        = (unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp 
                           & (VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                            ([&]() {
                                        VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 325)
                                             ->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__90__Vfuncout);
                                    }(), __Vtask_get_n_bits__90__Vfuncout)) 
                              - 1ULL));
                    if ((unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual 
                         != unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp)) {
                        if ((0U != ([&]() {
                                        __Vfunc_uvm_report_enabled__91__id = "uvm_mem_shared_access_seq"s;
                                        __Vfunc_uvm_report_enabled__91__severity = 2U;
                                        __Vfunc_uvm_report_enabled__91__verbosity = 0U;
                                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__92__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                            = __Vfunc_get__92__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__93__Vfuncout);
                                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                            = __Vtask_get_root__93__Vfuncout;
                                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__91__verbosity, (IData)(__Vfunc_uvm_report_enabled__91__severity), __Vfunc_uvm_report_enabled__91__id, __Vtask_uvm_report_enabled__94__Vfuncout);
                                        __Vfunc_uvm_report_enabled__91__Vfuncout 
                                            = __Vtask_uvm_report_enabled__94__Vfuncout;
                                    }(), __Vfunc_uvm_report_enabled__91__Vfuncout))) {
                            __Vtask_uvm_report_error__95__report_enabled_checked = 1U;
                            __Vtask_uvm_report_error__95__context_name = ""s;
                            __Vtask_uvm_report_error__95__line = 0x00000149U;
                            __Vtask_uvm_report_error__95__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                            __Vtask_uvm_report_error__95__verbosity = 0U;
                            __Vtemp_15 = ([&]() {
                                    VL_NULL_CHECK(this->__PVT__mem, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 329)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__96__Vfuncout);
                                }(), __Vtask_get_full_name__96__Vfuncout);
                            __Vtemp_16 = ([&]() {
                                    VL_NULL_CHECK(maps.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 329)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__97__Vfuncout);
                                }(), __Vtask_get_full_name__97__Vfuncout);
                            __Vtemp_17 = ([&]() {
                                    VL_NULL_CHECK(maps.at(unnamedblk3__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 329)
                                          ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__98__Vfuncout);
                                }(), __Vtask_get_full_name__98__Vfuncout);
                            __Vtask_uvm_report_error__95__message 
                                = VL_SFORMATF_N_NX("%@[%0d] through map \"%@\" is 'h%x instead of 'h%x after writing 'h%x via map \"%@\" over 'h%x.",0,
                                                   -1,
                                                   &(__Vtemp_15),
                                                   32,
                                                   unnamedblk3__DOT__unnamedblk4__DOT__offset,
                                                   -1,
                                                   &(__Vtemp_16),
                                                   64,
                                                   unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__actual,
                                                   64,
                                                   unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk7__DOT__exp,
                                                   64,
                                                   unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__v,
                                                   -1,
                                                   &(__Vtemp_17),
                                                   64,
                                                   unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__prev) ;
                            __Vtask_uvm_report_error__95__id = "uvm_mem_shared_access_seq"s;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__99__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                                = __Vfunc_get__99__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__100__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                                = __Vtask_get_root__100__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__95__id, __Vtask_uvm_report_error__95__message, __Vtask_uvm_report_error__95__verbosity, __Vtask_uvm_report_error__95__filename, __Vtask_uvm_report_error__95__line, __Vtask_uvm_report_error__95__context_name, (IData)(__Vtask_uvm_report_error__95__report_enabled_checked));
                        }
                    }
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k 
                        = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__k);
                }
                unnamedblk3__DOT__unnamedblk4__DOT__offset 
                    = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__offset);
            }
            unnamedblk3__DOT__j = ((IData)(1U) + unnamedblk3__DOT__j);
        }
        __Vlabel0: ;
    }
}

void Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__103__Vfuncout;
    __Vfunc___Vbasic_randomize__103__Vfuncout = 0;
    // Body
    Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vuart_example_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__103__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__103__Vfuncout));
}

void Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vbasic_randomize(Vuart_example__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset(Vuart_example__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vuart_example_uvm_pkg__03a__03auvm_mem_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mem:" + VL_TO_STRING(__PVT__mem);
    out += ", "+ Vuart_example_uvm_pkg__03a__03auvm_reg_sequence__Tz307::to_string_middle();
    return (out);
}
