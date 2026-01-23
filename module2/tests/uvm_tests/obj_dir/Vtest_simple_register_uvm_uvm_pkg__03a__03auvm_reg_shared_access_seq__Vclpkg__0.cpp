// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_simple_register_uvm.h for the primary calling header

#include "Vtest_simple_register_uvm__pch.h"

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_get_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi189> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi189> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi189__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_shared_access_seq"s;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object_registry__pi189> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi189__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq, vlProcess, vlSymsp, "uvm_reg_shared_access_seq"s)
            : VL_NEW(Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_shared_access_seq"s;
}

Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp, std::string name)
    : Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__Vfuncout;
    __Vfunc_uvm_report_enabled__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__4__verbosity;
    __Vfunc_uvm_report_enabled__4__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__4__severity;
    __Vfunc_uvm_report_enabled__4__severity = 0;
    std::string __Vfunc_uvm_report_enabled__4__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__5__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__6__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__10__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__12__Vfuncout;
    std::string __Vtask_get_full_name__13__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_resource__Tz30> __Vfunc_get_by_name__14__Vfuncout;
    std::string __Vtask_get_full_name__15__Vfuncout;
    IData/*31:0*/ __Vtask_get_n_maps__16__Vfuncout;
    __Vtask_get_n_maps__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__19__Vfuncout;
    __Vtask_get_lsb_pos__19__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__20__Vfuncout;
    __Vtask_get_n_bits__20__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_known_access__21__Vfuncout;
    __Vtask_is_known_access__21__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_lsb_pos__22__Vfuncout;
    __Vtask_get_lsb_pos__22__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_n_bits__23__Vfuncout;
    __Vtask_get_n_bits__23__Vfuncout = 0;
    std::string __Vtask_get_access__24__Vfuncout;
    QData/*63:0*/ __Vtask_get__25__Vfuncout;
    __Vtask_get__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__Vfuncout;
    __Vfunc_uvm_report_enabled__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__26__verbosity;
    __Vfunc_uvm_report_enabled__26__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__26__severity;
    __Vfunc_uvm_report_enabled__26__severity = 0;
    std::string __Vfunc_uvm_report_enabled__26__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__27__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__28__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__29__Vfuncout;
    __Vtask_uvm_report_enabled__29__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__30__id;
    std::string __Vtask_uvm_report_info__30__message;
    IData/*31:0*/ __Vtask_uvm_report_info__30__verbosity;
    __Vtask_uvm_report_info__30__verbosity = 0;
    std::string __Vtask_uvm_report_info__30__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__30__line;
    __Vtask_uvm_report_info__30__line = 0;
    std::string __Vtask_uvm_report_info__30__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__30__report_enabled_checked;
    __Vtask_uvm_report_info__30__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__31__Vfuncout;
    std::string __Vtask_get_full_name__32__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__33__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__34__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__Vfuncout;
    __Vfunc_uvm_report_enabled__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__36__verbosity;
    __Vfunc_uvm_report_enabled__36__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__36__severity;
    __Vfunc_uvm_report_enabled__36__severity = 0;
    std::string __Vfunc_uvm_report_enabled__36__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__37__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__38__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__39__Vfuncout;
    __Vtask_uvm_report_enabled__39__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__40__id;
    std::string __Vtask_uvm_report_info__40__message;
    IData/*31:0*/ __Vtask_uvm_report_info__40__verbosity;
    __Vtask_uvm_report_info__40__verbosity = 0;
    std::string __Vtask_uvm_report_info__40__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__40__line;
    __Vtask_uvm_report_info__40__line = 0;
    std::string __Vtask_uvm_report_info__40__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__40__report_enabled_checked;
    __Vtask_uvm_report_info__40__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__41__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__42__Vfuncout;
    IData/*31:0*/ __Vtask_write__44__status;
    __Vtask_write__44__status = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__Vfuncout;
    __Vfunc_uvm_report_enabled__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__45__verbosity;
    __Vfunc_uvm_report_enabled__45__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__45__severity;
    __Vfunc_uvm_report_enabled__45__severity = 0;
    std::string __Vfunc_uvm_report_enabled__45__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__46__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__47__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__48__Vfuncout;
    __Vtask_uvm_report_enabled__48__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__49__id;
    std::string __Vtask_uvm_report_error__49__message;
    IData/*31:0*/ __Vtask_uvm_report_error__49__verbosity;
    __Vtask_uvm_report_error__49__verbosity = 0;
    std::string __Vtask_uvm_report_error__49__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__49__line;
    __Vtask_uvm_report_error__49__line = 0;
    std::string __Vtask_uvm_report_error__49__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__49__report_enabled_checked;
    __Vtask_uvm_report_error__49__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__50__Vfuncout;
    std::string __Vtask_get_full_name__51__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__52__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__53__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__55__Vfuncout;
    __Vfunc_uvm_report_enabled__55__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__55__verbosity;
    __Vfunc_uvm_report_enabled__55__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__55__severity;
    __Vfunc_uvm_report_enabled__55__severity = 0;
    std::string __Vfunc_uvm_report_enabled__55__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__56__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__57__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__58__Vfuncout;
    __Vtask_uvm_report_enabled__58__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__59__id;
    std::string __Vtask_uvm_report_info__59__message;
    IData/*31:0*/ __Vtask_uvm_report_info__59__verbosity;
    __Vtask_uvm_report_info__59__verbosity = 0;
    std::string __Vtask_uvm_report_info__59__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__59__line;
    __Vtask_uvm_report_info__59__line = 0;
    std::string __Vtask_uvm_report_info__59__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__59__report_enabled_checked;
    __Vtask_uvm_report_info__59__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__60__Vfuncout;
    std::string __Vtask_get_full_name__61__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__62__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__63__Vfuncout;
    QData/*63:0*/ __Vtask_get__65__Vfuncout;
    __Vtask_get__65__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__66__status;
    __Vtask_read__66__status = 0;
    QData/*63:0*/ __Vtask_read__66__value;
    __Vtask_read__66__value = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__Vfuncout;
    __Vfunc_uvm_report_enabled__67__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__67__verbosity;
    __Vfunc_uvm_report_enabled__67__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__67__severity;
    __Vfunc_uvm_report_enabled__67__severity = 0;
    std::string __Vfunc_uvm_report_enabled__67__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__68__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__69__Vfuncout;
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
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__74__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__75__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__77__Vfuncout;
    __Vfunc_uvm_report_enabled__77__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__77__verbosity;
    __Vfunc_uvm_report_enabled__77__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__77__severity;
    __Vfunc_uvm_report_enabled__77__severity = 0;
    std::string __Vfunc_uvm_report_enabled__77__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__78__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__79__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__80__Vfuncout;
    __Vtask_uvm_report_enabled__80__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__81__id;
    std::string __Vtask_uvm_report_info__81__message;
    IData/*31:0*/ __Vtask_uvm_report_info__81__verbosity;
    __Vtask_uvm_report_info__81__verbosity = 0;
    std::string __Vtask_uvm_report_info__81__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__81__line;
    __Vtask_uvm_report_info__81__line = 0;
    std::string __Vtask_uvm_report_info__81__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__81__report_enabled_checked;
    __Vtask_uvm_report_info__81__report_enabled_checked = 0;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__82__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__83__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__Vfuncout;
    __Vfunc_uvm_report_enabled__85__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__85__verbosity;
    __Vfunc_uvm_report_enabled__85__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__85__severity;
    __Vfunc_uvm_report_enabled__85__severity = 0;
    std::string __Vfunc_uvm_report_enabled__85__id;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__86__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__87__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__88__Vfuncout;
    __Vtask_uvm_report_enabled__88__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__89__id;
    std::string __Vtask_uvm_report_error__89__message;
    IData/*31:0*/ __Vtask_uvm_report_error__89__verbosity;
    __Vtask_uvm_report_error__89__verbosity = 0;
    std::string __Vtask_uvm_report_error__89__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__89__line;
    __Vtask_uvm_report_error__89__line = 0;
    std::string __Vtask_uvm_report_error__89__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__89__report_enabled_checked;
    __Vtask_uvm_report_error__89__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__90__Vfuncout;
    std::string __Vtask_get_full_name__91__Vfuncout;
    std::string __Vtask_get_full_name__92__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__93__Vfuncout;
    VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_root> __Vtask_get_root__94__Vfuncout;
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
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk1__DOT__k;
    unnamedblk1__DOT__k = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__lsb;
    unnamedblk1__DOT__unnamedblk2__DOT__lsb = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__w;
    unnamedblk1__DOT__unnamedblk2__DOT__w = 0;
    IData/*31:0*/ unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk3__DOT__j;
    unnamedblk3__DOT__j = 0;
    QData/*63:0*/ unnamedblk3__DOT__unnamedblk4__DOT__wo;
    unnamedblk3__DOT__unnamedblk4__DOT__wo = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w = 0;
    IData/*31:0*/ unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ unnamedblk7__DOT__j;
    unnamedblk7__DOT__j = 0;
    IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__status;
    unnamedblk7__DOT__unnamedblk8__DOT__status = 0;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__prev;
    unnamedblk7__DOT__unnamedblk8__DOT__prev = 0;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__v;
    unnamedblk7__DOT__unnamedblk8__DOT__v = 0;
    IData/*31:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k = 0;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual = 0;
    QData/*63:0*/ unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp;
    unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp = 0;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    QData/*63:0*/ other_mask;
    other_mask = 0;
    VlQueue<QData/*63:0*/> wo_mask;
    wo_mask.atDefault() = 0;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_field>> fields;
    VlQueue<VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_map>> maps;
    {
        if ((VlNull{} == this->__PVT__rg)) {
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__4__id = "uvm_reg_shared_access_seq"s;
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
                __Vtask_uvm_report_error__8__line = 0x00000052U;
                __Vtask_uvm_report_error__8__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                __Vtask_uvm_report_error__8__verbosity = 0U;
                __Vtask_uvm_report_error__8__message = "No register specified to run sequence on"s;
                __Vtask_uvm_report_error__8__id = "uvm_reg_shared_access_seq"s;
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
        if (((VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 87)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__13__Vfuncout);
                                            }(), __Vtask_get_full_name__13__Vfuncout))), "NO_REG_TESTS"s, 0U, __Vfunc_get_by_name__12__Vfuncout);
                        }(), __Vfunc_get_by_name__12__Vfuncout)) 
             || (VlNull{} != ([&]() {
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_db__Tz30__Vclpkg.__VnoInFunc_get_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN("REG::"s, 
                                                                                ([&]() {
                                                VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 89)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__15__Vfuncout);
                                            }(), __Vtask_get_full_name__15__Vfuncout))), "NO_REG_SHARED_ACCESS_TEST"s, 0U, __Vfunc_get_by_name__14__Vfuncout);
                        }(), __Vfunc_get_by_name__14__Vfuncout)))) {
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 2U, ([&]() {
                        VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 94)
                                ->__VnoInFunc_get_n_maps(vlSymsp, __Vtask_get_n_maps__16__Vfuncout);
                    }(), __Vtask_get_n_maps__16__Vfuncout))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 95)->__VnoInFunc_get_maps(vlSymsp, maps);
        VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 98)->__VnoInFunc_get_fields(vlSymsp, fields);
        other_mask = 0ULL;
        unnamedblk1__DOT__k = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__k, fields.size())) {
            VL_NULL_CHECK(fields.at(unnamedblk1__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 105)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__19__Vfuncout);
            unnamedblk1__DOT__unnamedblk2__DOT__lsb 
                = __Vtask_get_lsb_pos__19__Vfuncout;
            VL_NULL_CHECK(fields.at(unnamedblk1__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 106)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__20__Vfuncout);
            unnamedblk1__DOT__unnamedblk2__DOT__w = __Vtask_get_n_bits__20__Vfuncout;
            if ((1U & (~ ([&]() {
                                VL_NULL_CHECK(fields.at(unnamedblk1__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 108)
                          ->__VnoInFunc_is_known_access(vlProcess, vlSymsp, maps.at(0U), __Vtask_is_known_access__21__Vfuncout);
                            }(), (IData)(__Vtask_is_known_access__21__Vfuncout))))) {
                unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = unnamedblk1__DOT__unnamedblk2__DOT__w;
                while (VL_LTS_III(32, 0U, unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                    __Vincrement1 = unnamedblk1__DOT__unnamedblk2__DOT__lsb;
                    unnamedblk1__DOT__unnamedblk2__DOT__lsb 
                        = ((IData)(1U) + unnamedblk1__DOT__unnamedblk2__DOT__lsb);
                    other_mask = (other_mask | ((QData)((IData)(1U)) 
                                                << 
                                                (0x0000003fU 
                                                 & __Vincrement1)));
                    unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 
                        = (unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk1_1__DOT____Vrepeat0 
                           - (IData)(1U));
                }
            }
            unnamedblk1__DOT__k = ((IData)(1U) + unnamedblk1__DOT__k);
        }
        unnamedblk3__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk3__DOT__j, maps.size())) {
            unnamedblk3__DOT__unnamedblk4__DOT__wo = 0ULL;
            unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k, fields.size())) {
                VL_NULL_CHECK(fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 124)->__VnoInFunc_get_lsb_pos(vlSymsp, __Vtask_get_lsb_pos__22__Vfuncout);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb 
                    = __Vtask_get_lsb_pos__22__Vfuncout;
                VL_NULL_CHECK(fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 125)->__VnoInFunc_get_n_bits(vlSymsp, __Vtask_get_n_bits__23__Vfuncout);
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w 
                    = __Vtask_get_n_bits__23__Vfuncout;
                if (("WO"s == ([&]() {
                                VL_NULL_CHECK(fields.at(unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 127)
                               ->__VnoInFunc_get_access(vlProcess, vlSymsp, maps.at(unnamedblk3__DOT__j), __Vtask_get_access__24__Vfuncout);
                            }(), __Vtask_get_access__24__Vfuncout))) {
                    unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 
                        = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w;
                    while (VL_LTS_III(32, 0U, unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
                        __Vincrement2 = unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb;
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb 
                            = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__lsb);
                        unnamedblk3__DOT__unnamedblk4__DOT__wo 
                            = (unnamedblk3__DOT__unnamedblk4__DOT__wo 
                               | ((QData)((IData)(1U)) 
                                  << (0x0000003fU & __Vincrement2)));
                        unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 
                            = (unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__unnamedblk1_2__DOT____Vrepeat1 
                               - (IData)(1U));
                    }
                }
                unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k 
                    = ((IData)(1U) + unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k);
            }
            wo_mask.atWriteAppend(unnamedblk3__DOT__j) 
                = unnamedblk3__DOT__unnamedblk4__DOT__wo;
            unnamedblk3__DOT__j = ((IData)(1U) + unnamedblk3__DOT__j);
        }
        unnamedblk7__DOT__j = 0U;
        while (VL_LTS_III(32, unnamedblk7__DOT__j, maps.size())) {
            VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 142)->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__25__Vfuncout);
            unnamedblk7__DOT__unnamedblk8__DOT__prev 
                = __Vtask_get__25__Vfuncout;
            unnamedblk7__DOT__unnamedblk8__DOT__v = 
                ((VL_RANDOM_Q() & (~ other_mask)) | 
                 (unnamedblk7__DOT__unnamedblk8__DOT__prev 
                  & other_mask));
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__26__id = "uvm_reg_shared_access_seq"s;
                            __Vfunc_uvm_report_enabled__26__severity = 0U;
                            __Vfunc_uvm_report_enabled__26__verbosity = 0x00000064U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__27__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__27__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__28__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__28__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__26__verbosity, (IData)(__Vfunc_uvm_report_enabled__26__severity), __Vfunc_uvm_report_enabled__26__id, __Vtask_uvm_report_enabled__29__Vfuncout);
                            __Vfunc_uvm_report_enabled__26__Vfuncout 
                                = __Vtask_uvm_report_enabled__29__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__26__Vfuncout))) {
                __Vtask_uvm_report_info__30__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__30__context_name = ""s;
                __Vtask_uvm_report_info__30__line = 0x00000094U;
                __Vtask_uvm_report_info__30__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                __Vtask_uvm_report_info__30__verbosity = 0x00000064U;
                __Vtemp_1 = ([&]() {
                        VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 148)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__31__Vfuncout);
                    }(), __Vtask_get_full_name__31__Vfuncout);
                __Vtemp_2 = ([&]() {
                        VL_NULL_CHECK(maps.at(unnamedblk7__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 148)
                             ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__32__Vfuncout);
                    }(), __Vtask_get_full_name__32__Vfuncout);
                __Vtask_uvm_report_info__30__message 
                    = VL_SFORMATF_N_NX("Writing register %@ via map \"%@\"...",0,
                                       -1,&(__Vtemp_1),
                                       -1,&(__Vtemp_2)) ;
                __Vtask_uvm_report_info__30__id = "uvm_reg_shared_access_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__33__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__33__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__34__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__34__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__30__id, __Vtask_uvm_report_info__30__message, __Vtask_uvm_report_info__30__verbosity, __Vtask_uvm_report_info__30__filename, __Vtask_uvm_report_info__30__line, __Vtask_uvm_report_info__30__context_name, (IData)(__Vtask_uvm_report_info__30__report_enabled_checked));
            }
            if ((0U != ([&]() {
                            __Vfunc_uvm_report_enabled__36__id = "uvm_reg_shared_access_seq"s;
                            __Vfunc_uvm_report_enabled__36__severity = 0U;
                            __Vfunc_uvm_report_enabled__36__verbosity = 0x000001f4U;
                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__37__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                = __Vfunc_get__37__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__38__Vfuncout);
                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                = __Vtask_get_root__38__Vfuncout;
                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__36__verbosity, (IData)(__Vfunc_uvm_report_enabled__36__severity), __Vfunc_uvm_report_enabled__36__id, __Vtask_uvm_report_enabled__39__Vfuncout);
                            __Vfunc_uvm_report_enabled__36__Vfuncout 
                                = __Vtask_uvm_report_enabled__39__Vfuncout;
                        }(), __Vfunc_uvm_report_enabled__36__Vfuncout))) {
                __Vtask_uvm_report_info__40__report_enabled_checked = 1U;
                __Vtask_uvm_report_info__40__context_name = ""s;
                __Vtask_uvm_report_info__40__line = 0x00000096U;
                __Vtask_uvm_report_info__40__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                __Vtask_uvm_report_info__40__verbosity = 0x000001f4U;
                __Vtask_uvm_report_info__40__message 
                    = VL_SFORMATF_N_NX("Writing 'h%x over 'h%x",0,
                                       64,unnamedblk7__DOT__unnamedblk8__DOT__v,
                                       64,unnamedblk7__DOT__unnamedblk8__DOT__prev) ;
                __Vtask_uvm_report_info__40__id = "uvm_reg_shared_access_seq"s;
                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__41__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                    = __Vfunc_get__41__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__42__Vfuncout);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                    = __Vtask_get_root__42__Vfuncout;
                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__40__id, __Vtask_uvm_report_info__40__message, __Vtask_uvm_report_info__40__verbosity, __Vtask_uvm_report_info__40__filename, __Vtask_uvm_report_info__40__line, __Vtask_uvm_report_info__40__context_name, (IData)(__Vtask_uvm_report_info__40__report_enabled_checked));
            }
            co_await VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 152)->__VnoInFunc_write(vlProcess, vlSymsp, __Vtask_write__44__status, unnamedblk7__DOT__unnamedblk8__DOT__v, 0U, maps.at(unnamedblk7__DOT__j), 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
            unnamedblk7__DOT__unnamedblk8__DOT__status 
                = __Vtask_write__44__status;
            if ((0U != unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__45__id = "uvm_reg_shared_access_seq"s;
                                __Vfunc_uvm_report_enabled__45__severity = 2U;
                                __Vfunc_uvm_report_enabled__45__verbosity = 0U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__46__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__46__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__47__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__47__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__45__verbosity, (IData)(__Vfunc_uvm_report_enabled__45__severity), __Vfunc_uvm_report_enabled__45__id, __Vtask_uvm_report_enabled__48__Vfuncout);
                                __Vfunc_uvm_report_enabled__45__Vfuncout 
                                    = __Vtask_uvm_report_enabled__48__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__45__Vfuncout))) {
                    __Vtask_uvm_report_error__49__report_enabled_checked = 1U;
                    __Vtask_uvm_report_error__49__context_name = ""s;
                    __Vtask_uvm_report_error__49__line = 0x0000009bU;
                    __Vtask_uvm_report_error__49__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                    __Vtask_uvm_report_error__49__verbosity = 0U;
                    __Vtemp_3 = Vtest_simple_register_uvm___024unit::__Venumtab_enum_name71
                        [(3U & unnamedblk7__DOT__unnamedblk8__DOT__status)];
                    __Vtemp_4 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 155)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__50__Vfuncout);
                        }(), __Vtask_get_full_name__50__Vfuncout);
                    __Vtemp_5 = ([&]() {
                            VL_NULL_CHECK(maps.at(unnamedblk7__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 155)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__51__Vfuncout);
                        }(), __Vtask_get_full_name__51__Vfuncout);
                    __Vtask_uvm_report_error__49__message 
                        = VL_SFORMATF_N_NX("Status was %@ when writing register \"%@\" through map \"%@\".",0,
                                           -1,&(__Vtemp_3),
                                           -1,&(__Vtemp_4),
                                           -1,&(__Vtemp_5)) ;
                    __Vtask_uvm_report_error__49__id = "uvm_reg_shared_access_seq"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__52__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                        = __Vfunc_get__52__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__53__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                        = __Vtask_get_root__53__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__49__id, __Vtask_uvm_report_error__49__message, __Vtask_uvm_report_error__49__verbosity, __Vtask_uvm_report_error__49__filename, __Vtask_uvm_report_error__49__line, __Vtask_uvm_report_error__49__context_name, (IData)(__Vtask_uvm_report_error__49__report_enabled_checked));
                }
            }
            unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k = 0U;
            while (VL_LTS_III(32, unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k, maps.size())) {
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__55__id = "uvm_reg_shared_access_seq"s;
                                __Vfunc_uvm_report_enabled__55__severity = 0U;
                                __Vfunc_uvm_report_enabled__55__verbosity = 0x00000064U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__56__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__56__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__57__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__57__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__55__verbosity, (IData)(__Vfunc_uvm_report_enabled__55__severity), __Vfunc_uvm_report_enabled__55__id, __Vtask_uvm_report_enabled__58__Vfuncout);
                                __Vfunc_uvm_report_enabled__55__Vfuncout 
                                    = __Vtask_uvm_report_enabled__58__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__55__Vfuncout))) {
                    __Vtask_uvm_report_info__59__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__59__context_name = ""s;
                    __Vtask_uvm_report_info__59__line = 0x000000a2U;
                    __Vtask_uvm_report_info__59__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                    __Vtask_uvm_report_info__59__verbosity = 0x00000064U;
                    __Vtemp_6 = ([&]() {
                            VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 162)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__60__Vfuncout);
                        }(), __Vtask_get_full_name__60__Vfuncout);
                    __Vtemp_7 = ([&]() {
                            VL_NULL_CHECK(maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 162)
                                 ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__61__Vfuncout);
                        }(), __Vtask_get_full_name__61__Vfuncout);
                    __Vtask_uvm_report_info__59__message 
                        = VL_SFORMATF_N_NX("Reading register %@ via map \"%@\"...",0,
                                           -1,&(__Vtemp_6),
                                           -1,&(__Vtemp_7)) ;
                    __Vtask_uvm_report_info__59__id = "uvm_reg_shared_access_seq"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__62__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__62__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__63__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__63__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__59__id, __Vtask_uvm_report_info__59__message, __Vtask_uvm_report_info__59__verbosity, __Vtask_uvm_report_info__59__filename, __Vtask_uvm_report_info__59__line, __Vtask_uvm_report_info__59__context_name, (IData)(__Vtask_uvm_report_info__59__report_enabled_checked));
                }
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp 
                    = (([&]() {
                            VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 165)
                        ->__VnoInFunc_get(vlProcess, vlSymsp, ""s, 0U, __Vtask_get__65__Vfuncout);
                        }(), __Vtask_get__65__Vfuncout) 
                       & (~ wo_mask.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k)));
                co_await VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 167)->__VnoInFunc_read(vlProcess, vlSymsp, __Vtask_read__66__status, __Vtask_read__66__value, 0U, maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), 
                                                                                VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq>{this}, 0xffffffffU, VlNull{}, ""s, 0U);
                unnamedblk7__DOT__unnamedblk8__DOT__status 
                    = __Vtask_read__66__status;
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual 
                    = __Vtask_read__66__value;
                if ((0U != unnamedblk7__DOT__unnamedblk8__DOT__status)) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__67__id = "uvm_reg_shared_access_seq"s;
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
                        __Vtask_uvm_report_error__71__line = 0x000000aaU;
                        __Vtask_uvm_report_error__71__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                        __Vtask_uvm_report_error__71__verbosity = 0U;
                        __Vtemp_8 = Vtest_simple_register_uvm___024unit::__Venumtab_enum_name71
                            [(3U & unnamedblk7__DOT__unnamedblk8__DOT__status)];
                        __Vtemp_9 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 170)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__72__Vfuncout);
                            }(), __Vtask_get_full_name__72__Vfuncout);
                        __Vtemp_10 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 170)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__73__Vfuncout);
                            }(), __Vtask_get_full_name__73__Vfuncout);
                        __Vtask_uvm_report_error__71__message 
                            = VL_SFORMATF_N_NX("Status was %@ when reading register \"%@\" through map \"%@\".",0,
                                               -1,&(__Vtemp_8),
                                               -1,&(__Vtemp_9),
                                               -1,&(__Vtemp_10)) ;
                        __Vtask_uvm_report_error__71__id = "uvm_reg_shared_access_seq"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__74__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__74__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__75__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__75__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__71__id, __Vtask_uvm_report_error__71__message, __Vtask_uvm_report_error__71__verbosity, __Vtask_uvm_report_error__71__filename, __Vtask_uvm_report_error__71__line, __Vtask_uvm_report_error__71__context_name, (IData)(__Vtask_uvm_report_error__71__report_enabled_checked));
                    }
                }
                if ((0U != ([&]() {
                                __Vfunc_uvm_report_enabled__77__id = "uvm_reg_shared_access_seq"s;
                                __Vfunc_uvm_report_enabled__77__severity = 0U;
                                __Vfunc_uvm_report_enabled__77__verbosity = 0x000001f4U;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__78__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                    = __Vfunc_get__78__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                            ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__79__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                    = __Vtask_get_root__79__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                            ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__77__verbosity, (IData)(__Vfunc_uvm_report_enabled__77__severity), __Vfunc_uvm_report_enabled__77__id, __Vtask_uvm_report_enabled__80__Vfuncout);
                                __Vfunc_uvm_report_enabled__77__Vfuncout 
                                    = __Vtask_uvm_report_enabled__80__Vfuncout;
                            }(), __Vfunc_uvm_report_enabled__77__Vfuncout))) {
                    __Vtask_uvm_report_info__81__report_enabled_checked = 1U;
                    __Vtask_uvm_report_info__81__context_name = ""s;
                    __Vtask_uvm_report_info__81__line = 0x000000aeU;
                    __Vtask_uvm_report_info__81__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                    __Vtask_uvm_report_info__81__verbosity = 0x000001f4U;
                    __Vtask_uvm_report_info__81__message 
                        = VL_SFORMATF_N_NX("Read 'h%x, expecting 'h%x",0,
                                           64,unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual,
                                           64,unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp) ;
                    __Vtask_uvm_report_info__81__id = "uvm_reg_shared_access_seq"s;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__82__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                        = __Vfunc_get__82__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__83__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                        = __Vtask_get_root__83__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__81__id, __Vtask_uvm_report_info__81__message, __Vtask_uvm_report_info__81__verbosity, __Vtask_uvm_report_info__81__filename, __Vtask_uvm_report_info__81__line, __Vtask_uvm_report_info__81__context_name, (IData)(__Vtask_uvm_report_info__81__report_enabled_checked));
                }
                if ((unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual 
                     != unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp)) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__85__id = "uvm_reg_shared_access_seq"s;
                                    __Vfunc_uvm_report_enabled__85__severity = 2U;
                                    __Vfunc_uvm_report_enabled__85__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__86__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__86__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__87__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__87__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__85__verbosity, (IData)(__Vfunc_uvm_report_enabled__85__severity), __Vfunc_uvm_report_enabled__85__id, __Vtask_uvm_report_enabled__88__Vfuncout);
                                    __Vfunc_uvm_report_enabled__85__Vfuncout 
                                        = __Vtask_uvm_report_enabled__88__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__85__Vfuncout))) {
                        __Vtask_uvm_report_error__89__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__89__context_name = ""s;
                        __Vtask_uvm_report_error__89__line = 0x000000b3U;
                        __Vtask_uvm_report_error__89__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh"s;
                        __Vtask_uvm_report_error__89__verbosity = 0U;
                        __Vtemp_11 = ([&]() {
                                VL_NULL_CHECK(this->__PVT__rg, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 179)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__90__Vfuncout);
                            }(), __Vtask_get_full_name__90__Vfuncout);
                        __Vtemp_12 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 179)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__91__Vfuncout);
                            }(), __Vtask_get_full_name__91__Vfuncout);
                        __Vtemp_13 = ([&]() {
                                VL_NULL_CHECK(maps.at(unnamedblk7__DOT__j), "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_shared_access_seq.svh", 179)
                                      ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__92__Vfuncout);
                            }(), __Vtask_get_full_name__92__Vfuncout);
                        __Vtask_uvm_report_error__89__message 
                            = VL_SFORMATF_N_NX("Register \"%@\" through map \"%@\" is 'h%x instead of 'h%x after writing 'h%x via map \"%@\" over 'h%x.",0,
                                               -1,&(__Vtemp_11),
                                               -1,&(__Vtemp_12),
                                               64,unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__actual,
                                               64,unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__unnamedblk10__DOT__exp,
                                               64,unnamedblk7__DOT__unnamedblk8__DOT__v,
                                               -1,&(__Vtemp_13),
                                               64,unnamedblk7__DOT__unnamedblk8__DOT__prev) ;
                        __Vtask_uvm_report_error__89__id = "uvm_reg_shared_access_seq"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__93__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__93__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__94__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__94__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__89__id, __Vtask_uvm_report_error__89__message, __Vtask_uvm_report_error__89__verbosity, __Vtask_uvm_report_error__89__filename, __Vtask_uvm_report_error__89__line, __Vtask_uvm_report_error__89__context_name, (IData)(__Vtask_uvm_report_error__89__report_enabled_checked));
                    }
                }
                unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k 
                    = ((IData)(1U) + unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__k);
            }
            unnamedblk7__DOT__j = ((IData)(1U) + unnamedblk7__DOT__j);
        }
        __Vlabel0: ;
    }
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__97__Vfuncout;
    __Vfunc___Vbasic_randomize__97__Vfuncout = 0;
    // Body
    Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__97__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__97__Vfuncout));
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vbasic_randomize(Vtest_simple_register_uvm__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset(Vtest_simple_register_uvm__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_shared_access_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "rg:" + VL_TO_STRING(__PVT__rg);
    out += ", "+ Vtest_simple_register_uvm_uvm_pkg__03a__03auvm_reg_sequence__Tz323::to_string_middle();
    return (out);
}
