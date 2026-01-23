// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi165> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi165> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi165__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq__Vclpkg::__VnoInFunc_type_name\n"); );
    // Body
    type_name__Vfuncrtn = "uvm_reg_mem_hdl_paths_seq"s;
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi165> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi165__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_create\n"); );
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> tmp;
    tmp = ((""s == name) ? VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq, vlProcess, vlSymsp, "uvm_reg_mem_hdl_paths_seq"s)
            : VL_NEW(Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq, vlProcess, vlSymsp, name));
    create__Vfuncrtn = tmp;
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_reg_mem_hdl_paths_seq"s;
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_execute_op(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_field_op> op) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_execute_op\n"); );
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_execute_op(vlProcess, vlSymsp, op);
    this->__VnoInFunc____05Fm_uvm_execute_field_op(vlProcess, vlSymsp, op);
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_execute_field_op(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_field_op> ___05Flocal_op___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc____05Fm_uvm_execute_field_op\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> __Vtask_get_rhs__5__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> __Vtask_get_rhs__6__Vfuncout;
    std::string __Vtask_get_name__7__Vfuncout;
    IData/*27:0*/ __Vtask_get_op_type__8__Vfuncout;
    __Vtask_get_op_type__8__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__9__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__10__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__11__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__12__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_policy> __Vtask_get_policy__13__Vfuncout;
    IData/*31:0*/ __Vtask_get_threshold__14__Vfuncout;
    __Vtask_get_threshold__14__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_result__15__Vfuncout;
    __Vtask_get_result__15__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__16__Vfuncout;
    __Vtask_get_threshold__16__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__17__Vfuncout;
    __Vtask_get_threshold__17__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_result__18__Vfuncout;
    __Vtask_get_result__18__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__19__Vfuncout;
    __Vtask_get_threshold__19__Vfuncout = 0;
    CData/*0:0*/ __Vtask_compare_field_int__20__Vfuncout;
    __Vtask_compare_field_int__20__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__21__Vfuncout;
    __Vtask_get_threshold__21__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_result__22__Vfuncout;
    __Vtask_get_result__22__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__23__Vfuncout;
    __Vtask_get_threshold__23__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__24__Vfuncout;
    __Vtask_get_threshold__24__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_result__25__Vfuncout;
    __Vtask_get_result__25__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_threshold__26__Vfuncout;
    __Vtask_get_threshold__26__Vfuncout = 0;
    CData/*0:0*/ __Vtask_compare_string__27__Vfuncout;
    __Vtask_compare_string__27__Vfuncout = 0;
    QData/*63:0*/ __Vtask_unpack_field_int__30__Vfuncout;
    __Vtask_unpack_field_int__30__Vfuncout = 0;
    std::string __Vtask_unpack_string__31__Vfuncout;
    CData/*0:0*/ __Vtask_is_open__32__Vfuncout;
    __Vtask_is_open__32__Vfuncout = 0;
    CData/*0:0*/ __Vtask_use_record_attribute__33__Vfuncout;
    __Vtask_use_record_attribute__33__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_open__36__Vfuncout;
    __Vtask_is_open__36__Vfuncout = 0;
    CData/*0:0*/ __Vtask_use_record_attribute__37__Vfuncout;
    __Vtask_use_record_attribute__37__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_open__40__Vfuncout;
    __Vtask_is_open__40__Vfuncout = 0;
    CData/*0:0*/ __Vtask_use_record_attribute__41__Vfuncout;
    __Vtask_use_record_attribute__41__Vfuncout = 0;
    CData/*0:0*/ __Vtask_is_open__44__Vfuncout;
    __Vtask_is_open__44__Vfuncout = 0;
    CData/*0:0*/ __Vtask_use_record_attribute__45__Vfuncout;
    __Vtask_use_record_attribute__45__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_max_depth__49__Vfuncout;
    __Vtask_get_max_depth__49__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_active_object_depth__50__Vfuncout;
    __Vtask_get_active_object_depth__50__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_max_depth__51__Vfuncout;
    __Vtask_get_max_depth__51__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_begin_elements__52__Vfuncout;
    __Vtask_get_begin_elements__52__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_end_elements__53__Vfuncout;
    __Vtask_get_end_elements__53__Vfuncout = 0;
    QData/*63:0*/ __Vtask_read__59__Vfuncout;
    __Vtask_read__59__Vfuncout = 0;
    VlWide<128>/*4095:0*/ __Vtask_read__60__Vfuncout;
    VL_ZERO_W(4096, __Vtask_read__60__Vfuncout);
    IData/*31:0*/ __Vtask_read__61__Vfuncout;
    __Vtask_read__61__Vfuncout = 0;
    IData/*31:0*/ __Vtask_read__62__Vfuncout;
    __Vtask_read__62__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__63__Vfuncout;
    __Vfunc_uvm_report_enabled__63__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__63__verbosity;
    __Vfunc_uvm_report_enabled__63__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__63__severity;
    __Vfunc_uvm_report_enabled__63__severity = 0;
    std::string __Vfunc_uvm_report_enabled__63__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__64__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__65__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__66__Vfuncout;
    __Vtask_uvm_report_enabled__66__Vfuncout = 0;
    std::string __Vtask_uvm_report_warning__67__id;
    std::string __Vtask_uvm_report_warning__67__message;
    IData/*31:0*/ __Vtask_uvm_report_warning__67__verbosity;
    __Vtask_uvm_report_warning__67__verbosity = 0;
    std::string __Vtask_uvm_report_warning__67__filename;
    IData/*31:0*/ __Vtask_uvm_report_warning__67__line;
    __Vtask_uvm_report_warning__67__line = 0;
    std::string __Vtask_uvm_report_warning__67__context_name;
    CData/*0:0*/ __Vtask_uvm_report_warning__67__report_enabled_checked;
    __Vtask_uvm_report_warning__67__report_enabled_checked = 0;
    std::string __Vfunc_get_full_name__68__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__69__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__70__Vfuncout;
    std::string __Vtask_read__72__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    // Body
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__sz___05F;
    unnamedblk4__DOT__sz___05F = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk5__DOT__i;
    unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk6__DOT__i;
    unnamedblk4__DOT__unnamedblk6__DOT__i = 0;
    std::string unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk8__DOT__i;
    unnamedblk4__DOT__unnamedblk8__DOT__i = 0;
    std::string unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F;
    IData/*31:0*/ unnamedblk4__DOT__unnamedblk10__DOT__i;
    unnamedblk4__DOT__unnamedblk10__DOT__i = 0;
    std::string unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F;
    IData/*31:0*/ unnamedblk12__DOT_____05Ftmp_max;
    unnamedblk12__DOT_____05Ftmp_max = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements;
    unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements;
    unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index;
    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr;
    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr = 0;
    IData/*31:0*/ unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index;
    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz23> unnamedblk17__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz21> unnamedblk18__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_> unnamedblk19__DOT_____05Ftmp_rsrc___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz24> unnamedblk20__DOT_____05Ftmp_rsrc___05F;
    std::string unnamedblk21__DOT__local_name___05F;
    std::string unnamedblk21__DOT__unnamedblk22__DOT__local_index_str___05F;
    IData/*31:0*/ unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F;
    unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F = 0;
    IData/*31:0*/ unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F;
    unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F = 0;
    std::string unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource__Tz50> unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT_____05Ftmp_rsrc___05F;
    IData/*27:0*/ local_op_type___05F;
    local_op_type___05F = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq> local_rhs___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_resource_base> local_rsrc___05F;
    std::string local_rsrc_name___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object> local_obj___05F;
    CData/*0:0*/ local_success___05F;
    local_success___05F = 0;
    IData/*31:0*/ local_size___05F;
    local_size___05F = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> ___05Flocal_printer___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_comparer> ___05Flocal_comparer___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_recorder> ___05Flocal_recorder___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_packer> ___05Flocal_packer___05F;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_copier> ___05Flocal_copier___05F;
    {
        if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                    VL_NULL_CHECK(___05Flocal_op___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                             ->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __Vtask_get_rhs__5__Vfuncout);
                                }(), __Vtask_get_rhs__5__Vfuncout), local_rhs___05F))))) {
            VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
        }
        if ((VL_CAST_DYNAMIC(([&]() {
                            VL_NULL_CHECK(___05Flocal_op___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                              ->__VnoInFunc_get_rhs(vlProcess, vlSymsp, __Vtask_get_rhs__6__Vfuncout);
                        }(), __Vtask_get_rhs__6__Vfuncout), local_rsrc___05F) 
             && (VlNull{} != local_rsrc___05F))) {
            VL_NULL_CHECK(local_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__7__Vfuncout);
            local_rsrc_name___05F = __Vtask_get_name__7__Vfuncout;
        }
        VL_NULL_CHECK(___05Flocal_op___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)->__VnoInFunc_get_op_type(vlProcess, vlSymsp, __Vtask_get_op_type__8__Vfuncout);
        local_op_type___05F = __Vtask_get_op_type__8__Vfuncout;
        if ((0x00000010U == local_op_type___05F)) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__9__Vfuncout);
                                    }(), __Vtask_get_policy__9__Vfuncout), ___05Flocal_printer___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if ((4U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__10__Vfuncout);
                                    }(), __Vtask_get_policy__10__Vfuncout), ___05Flocal_comparer___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if ((0x00000040U == local_op_type___05F)) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__11__Vfuncout);
                                    }(), __Vtask_get_policy__11__Vfuncout), ___05Flocal_recorder___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if (((0x00000100U == local_op_type___05F) 
                    || (0x00000400U == local_op_type___05F))) {
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__12__Vfuncout);
                                    }(), __Vtask_get_policy__12__Vfuncout), ___05Flocal_packer___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if ((1U == local_op_type___05F)) {
            if ((VlNull{} == local_rhs___05F)) {
                goto __Vlabel0;
            }
            if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(([&]() {
                                        VL_NULL_CHECK(___05Flocal_op___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58)
                                                 ->__VnoInFunc_get_policy(vlProcess, vlSymsp, __Vtask_get_policy__13__Vfuncout);
                                    }(), __Vtask_get_policy__13__Vfuncout), ___05Flocal_copier___05F))))) {
                VL_WRITEF_NX("[%0t] %%Error: uvm_reg_mem_hdl_paths_seq.svh:58: Assertion failed in %Nuvm_pkg.uvm_reg_mem_hdl_paths_seq.__m_uvm_execute_field_op: 'assert' failed.\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 58, "");
            }
        } else if ((0x00000800U == local_op_type___05F)) {
            if ((VlNull{} == local_rsrc___05F)) {
                goto __Vlabel0;
            }
        } else {
            goto __Vlabel0;
        }
        if ((1U == local_op_type___05F)) {
            this->__PVT__abstractions = VL_NULL_CHECK(local_rhs___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                ->__PVT__abstractions;
        } else if ((4U == local_op_type___05F)) {
            if (((1U & (~ (0U != ([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                  ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__14__Vfuncout);
                                    }(), __Vtask_get_threshold__14__Vfuncout)))) 
                 || (([&]() {
                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                      ->__VnoInFunc_get_result(vlSymsp, __Vtask_get_result__15__Vfuncout);
                            }(), __Vtask_get_result__15__Vfuncout) 
                     < ([&]() {
                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                        ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__16__Vfuncout);
                            }(), __Vtask_get_threshold__16__Vfuncout)))) {
                if ((this->__PVT__abstractions != VL_NULL_CHECK(local_rhs___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                     ->__PVT__abstractions)) {
                    if (((1U & (~ (0U != ([&]() {
                                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                          ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__17__Vfuncout);
                                            }(), __Vtask_get_threshold__17__Vfuncout)))) 
                         || (([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                              ->__VnoInFunc_get_result(vlSymsp, __Vtask_get_result__18__Vfuncout);
                                    }(), __Vtask_get_result__18__Vfuncout) 
                             < ([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__19__Vfuncout);
                                    }(), __Vtask_get_threshold__19__Vfuncout)))) {
                        if ((this->__PVT__abstractions.size() 
                             != VL_NULL_CHECK(local_rhs___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__PVT__abstractions.size())) {
                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_compare_field_int(vlProcess, vlSymsp, "abstractions.size()"s, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__abstractions.size()), 
                                                                                VL_EXTENDS_QI(64,32, VL_NULL_CHECK(local_rhs___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                                                ->__PVT__abstractions.size()), 0x00000020U, 0x02000000U, __Vtask_compare_field_int__20__Vfuncout);
                        }
                    }
                    if (((1U & (~ (0U != ([&]() {
                                                VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                          ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__21__Vfuncout);
                                            }(), __Vtask_get_threshold__21__Vfuncout)))) 
                         || (([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                              ->__VnoInFunc_get_result(vlSymsp, __Vtask_get_result__22__Vfuncout);
                                    }(), __Vtask_get_result__22__Vfuncout) 
                             < ([&]() {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__23__Vfuncout);
                                    }(), __Vtask_get_threshold__23__Vfuncout)))) {
                        if ((this->__PVT__abstractions 
                             != VL_NULL_CHECK(local_rhs___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__PVT__abstractions)) {
                            unnamedblk1__DOT__i = 0U;
                            while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__abstractions.size())) {
                                if (((1U & (~ (0U != 
                                               ([&]() {
                                                            VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__24__Vfuncout);
                                                        }(), __Vtask_get_threshold__24__Vfuncout)))) 
                                     || (([&]() {
                                                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                          ->__VnoInFunc_get_result(vlSymsp, __Vtask_get_result__25__Vfuncout);
                                                }(), __Vtask_get_result__25__Vfuncout) 
                                         < ([&]() {
                                                    VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                            ->__VnoInFunc_get_threshold(vlSymsp, __Vtask_get_threshold__26__Vfuncout);
                                                }(), __Vtask_get_threshold__26__Vfuncout)))) {
                                    if ((this->__PVT__abstractions.at(unnamedblk1__DOT__i) 
                                         != VL_NULL_CHECK(local_rhs___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                         ->__PVT__abstractions.at(unnamedblk1__DOT__i))) {
                                        VL_NULL_CHECK(___05Flocal_comparer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_compare_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                                                                32,
                                                                                unnamedblk1__DOT__i) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk1__DOT__i)), 
                                                                                VL_CVT_PACK_STR_NN(VL_NULL_CHECK(local_rhs___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                                                ->__PVT__abstractions.at(unnamedblk1__DOT__i)), __Vtask_compare_string__27__Vfuncout);
                                    }
                                }
                                unnamedblk1__DOT__i 
                                    = ((IData)(1U) 
                                       + unnamedblk1__DOT__i);
                            }
                        }
                    }
                }
            }
        } else if ((0x00000100U == local_op_type___05F)) {
            VL_NULL_CHECK(___05Flocal_packer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_pack_field_int(vlSymsp, 
                                                                                VL_EXTENDS_QI(64,32, this->__PVT__abstractions.size()), 0x00000020U);
            unnamedblk2__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__abstractions.size())) {
                VL_NULL_CHECK(___05Flocal_packer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_pack_string(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk2__DOT__i)));
                unnamedblk2__DOT__i = ((IData)(1U) 
                                       + unnamedblk2__DOT__i);
            }
        } else if ((0x00000400U == local_op_type___05F)) {
            local_size___05F = (IData)(([&]() {
                        VL_NULL_CHECK(___05Flocal_packer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                        ->__VnoInFunc_unpack_field_int(vlProcess, vlSymsp, 0x00000020U, __Vtask_unpack_field_int__30__Vfuncout);
                    }(), __Vtask_unpack_field_int__30__Vfuncout));
            if (VL_GTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                this->__PVT__abstractions = this->__PVT__abstractions.slice(0U, 
                                                                            (local_size___05F 
                                                                             - (IData)(1U)));
            } else {
                while (VL_LTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                    this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(local_size___05F));
                }
            }
            unnamedblk3__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__abstractions.size())) {
                VL_NULL_CHECK(___05Flocal_packer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_unpack_string(vlProcess, vlSymsp, __Vtask_unpack_string__31__Vfuncout);
                this->__PVT__abstractions.atWriteAppend(unnamedblk3__DOT__i) 
                    = __Vtask_unpack_string__31__Vfuncout;
                unnamedblk3__DOT__i = ((IData)(1U) 
                                       + unnamedblk3__DOT__i);
            }
        } else if ((0x00000040U == local_op_type___05F)) {
            unnamedblk4__DOT__unnamedblk5__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk5__DOT__i, this->__PVT__abstractions.size())) {
                unnamedblk4__DOT__sz___05F = unnamedblk4__DOT__unnamedblk5__DOT__i;
                unnamedblk4__DOT__unnamedblk5__DOT__i 
                    = ((IData)(1U) + unnamedblk4__DOT__unnamedblk5__DOT__i);
            }
            if ((0U == unnamedblk4__DOT__sz___05F)) {
                if (((VlNull{} != ___05Flocal_recorder___05F) 
                     && ([&]() {
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                         ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__32__Vfuncout);
                            }(), (IData)(__Vtask_is_open__32__Vfuncout)))) {
                    if (([&]() {
                                VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                         ->__VnoInFunc_use_record_attribute(vlSymsp, __Vtask_use_record_attribute__33__Vfuncout);
                            }(), (IData)(__Vtask_use_record_attribute__33__Vfuncout))) {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, "abstractions"s, "          0"s, ""s);
                    } else {
                        VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_field_int(vlProcess, vlSymsp, "abstractions"s, 0ULL, 0x00000020U, 0x02000000U);
                    }
                }
            } else if (VL_GTS_III(32, 0x0000000aU, unnamedblk4__DOT__sz___05F)) {
                unnamedblk4__DOT__unnamedblk6__DOT__i = 0U;
                while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk6__DOT__i, this->__PVT__abstractions.size())) {
                    unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F 
                        = VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                           32,unnamedblk4__DOT__unnamedblk6__DOT__i) ;
                    if (((VlNull{} != ___05Flocal_recorder___05F) 
                         && ([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__36__Vfuncout);
                                }(), (IData)(__Vtask_is_open__36__Vfuncout)))) {
                        if (([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_use_record_attribute(vlSymsp, __Vtask_use_record_attribute__37__Vfuncout);
                                }(), (IData)(__Vtask_use_record_attribute__37__Vfuncout))) {
                            __Vtemp_1 = this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk6__DOT__i);
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F, VL_SFORMATF_N_NX("\"%@\"",0,
                                                                                -1,
                                                                                &(__Vtemp_1)) , ""s);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk6__DOT__unnamedblk7__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk6__DOT__i)));
                        }
                    }
                    unnamedblk4__DOT__unnamedblk6__DOT__i 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk6__DOT__i);
                }
            } else {
                unnamedblk4__DOT__unnamedblk8__DOT__i = 0U;
                while (VL_GTS_III(32, 5U, unnamedblk4__DOT__unnamedblk8__DOT__i)) {
                    unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F 
                        = VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                           32,unnamedblk4__DOT__unnamedblk8__DOT__i) ;
                    if (((VlNull{} != ___05Flocal_recorder___05F) 
                         && ([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__40__Vfuncout);
                                }(), (IData)(__Vtask_is_open__40__Vfuncout)))) {
                        if (([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_use_record_attribute(vlSymsp, __Vtask_use_record_attribute__41__Vfuncout);
                                }(), (IData)(__Vtask_use_record_attribute__41__Vfuncout))) {
                            __Vtemp_2 = this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk8__DOT__i);
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F, VL_SFORMATF_N_NX("\"%@\"",0,
                                                                                -1,
                                                                                &(__Vtemp_2)) , ""s);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk8__DOT__unnamedblk9__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk8__DOT__i)));
                        }
                    }
                    unnamedblk4__DOT__unnamedblk8__DOT__i 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk8__DOT__i);
                }
                unnamedblk4__DOT__unnamedblk10__DOT__i 
                    = (unnamedblk4__DOT__sz___05F - (IData)(5U));
                while (VL_LTS_III(32, unnamedblk4__DOT__unnamedblk10__DOT__i, unnamedblk4__DOT__sz___05F)) {
                    unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F 
                        = VL_SFORMATF_N_NX("abstractions[%0d]",0,
                                           32,unnamedblk4__DOT__unnamedblk10__DOT__i) ;
                    if (((VlNull{} != ___05Flocal_recorder___05F) 
                         && ([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_is_open(vlSymsp, __Vtask_is_open__44__Vfuncout);
                                }(), (IData)(__Vtask_is_open__44__Vfuncout)))) {
                        if (([&]() {
                                    VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                             ->__VnoInFunc_use_record_attribute(vlSymsp, __Vtask_use_record_attribute__45__Vfuncout);
                                }(), (IData)(__Vtask_use_record_attribute__45__Vfuncout))) {
                            __Vtemp_3 = this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk10__DOT__i);
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_generic(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F, VL_SFORMATF_N_NX("\"%@\"",0,
                                                                                -1,
                                                                                &(__Vtemp_3)) , ""s);
                        } else {
                            VL_NULL_CHECK(___05Flocal_recorder___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_record_string(vlProcess, vlSymsp, unnamedblk4__DOT__unnamedblk10__DOT__unnamedblk11__DOT__nm___05F, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk4__DOT__unnamedblk10__DOT__i)));
                        }
                    }
                    unnamedblk4__DOT__unnamedblk10__DOT__i 
                        = ((IData)(1U) + unnamedblk4__DOT__unnamedblk10__DOT__i);
                }
            }
        } else if ((0x00000010U == local_op_type___05F)) {
            unnamedblk12__DOT_____05Ftmp_max = ((IData)(1U) 
                                                + (this->__PVT__abstractions.size() 
                                                   - (IData)(1U)));
            VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_array_header(vlProcess, vlSymsp, "abstractions"s, unnamedblk12__DOT_____05Ftmp_max, "queue(string)"s, 0x2eU);
            if (((0xffffffffU == ([&]() {
                                VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                  ->__VnoInFunc_get_max_depth(vlSymsp, __Vtask_get_max_depth__49__Vfuncout);
                            }(), __Vtask_get_max_depth__49__Vfuncout)) 
                 || (([&]() {
                                VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                      ->__VnoInFunc_get_active_object_depth(vlSymsp, __Vtask_get_active_object_depth__50__Vfuncout);
                            }(), __Vtask_get_active_object_depth__50__Vfuncout) 
                     < ((IData)(1U) + ([&]() {
                                    VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                       ->__VnoInFunc_get_max_depth(vlSymsp, __Vtask_get_max_depth__51__Vfuncout);
                                }(), __Vtask_get_max_depth__51__Vfuncout))))) {
                VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_begin_elements(vlSymsp, __Vtask_get_begin_elements__52__Vfuncout);
                unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements 
                    = __Vtask_get_begin_elements__52__Vfuncout;
                VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_get_end_elements(vlSymsp, __Vtask_get_end_elements__53__Vfuncout);
                unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements 
                    = __Vtask_get_end_elements__53__Vfuncout;
                if (((0xffffffffU == unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements) 
                     | (0xffffffffU == unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements))) {
                    unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index = 0U;
                    while (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index, this->__PVT__abstractions.size())) {
                        VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index)), 0x2eU);
                        unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index 
                            = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk14__DOT_____05Ftmp_index);
                    }
                } else {
                    {
                        unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index = 0U;
                        while (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index, this->__PVT__abstractions.size())) {
                            if (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements)) {
                                VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index)), 0x2eU);
                            } else {
                                goto __Vlabel1;
                            }
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr);
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index 
                                = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT__unnamedblk16__DOT_____05Ftmp_index);
                        }
                        __Vlabel1: ;
                    }
                    if (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT_____05Ftmp_max)) {
                        if (VL_GTS_III(32, (unnamedblk12__DOT_____05Ftmp_max 
                                            - unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements), unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr)) {
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = (unnamedblk12__DOT_____05Ftmp_max 
                                   - unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_end_elements);
                        }
                        if (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements)) {
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements;
                        } else {
                            VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_array_range(vlProcess, vlSymsp, unnamedblk12__DOT__unnamedblk13__DOT_____05Ftmp_begin_elements, 
                                                                                (unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                                                                - (IData)(1U)));
                        }
                        while (VL_LTS_III(32, unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr, unnamedblk12__DOT_____05Ftmp_max)) {
                            VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_string(vlProcess, vlSymsp, VL_SFORMATF_N_NX("[%0d]",0,
                                                                                32,
                                                                                unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr) , 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr)), 0x2eU);
                            unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr 
                                = ((IData)(1U) + unnamedblk12__DOT__unnamedblk13__DOT__unnamedblk15__DOT_____05Ftmp_curr);
                        }
                    }
                }
            }
            VL_NULL_CHECK(___05Flocal_printer___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_print_array_footer(vlSymsp, unnamedblk12__DOT_____05Ftmp_max);
        } else if ((0x00000800U == local_op_type___05F)) {
            if (("abstractions"s == local_rsrc_name___05F)) {
                local_success___05F = (1U & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk17__DOT_____05Ftmp_rsrc___05F));
                if (local_success___05F) {
                    local_size___05F = (IData)(([&]() {
                                VL_NULL_CHECK(unnamedblk17__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                   VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__59__Vfuncout);
                            }(), __Vtask_read__59__Vfuncout));
                }
                if ((1U & (~ (IData)(local_success___05F)))) {
                    local_success___05F = (1U & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk18__DOT_____05Ftmp_rsrc___05F));
                    if (local_success___05F) {
                        local_size___05F = VL_SEL_IWII(4096, 
                                                       ([&]() {
                                    VL_NULL_CHECK(unnamedblk18__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)
                                                        ->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                           VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__60__Vfuncout);
                                }(), __Vtask_read__60__Vfuncout), 0U, 32);
                    }
                }
                if ((1U & (~ (IData)(local_success___05F)))) {
                    local_success___05F = (1U & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk19__DOT_____05Ftmp_rsrc___05F));
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk19__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__61__Vfuncout);
                        local_size___05F = __Vtask_read__61__Vfuncout;
                    }
                }
                if ((1U & (~ (IData)(local_success___05F)))) {
                    local_success___05F = (1U & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk20__DOT_____05Ftmp_rsrc___05F));
                    if (local_success___05F) {
                        VL_NULL_CHECK(unnamedblk20__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__62__Vfuncout);
                        local_size___05F = __Vtask_read__62__Vfuncout;
                    }
                }
                if (local_success___05F) {
                    if (VL_GTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                        this->__PVT__abstractions = this->__PVT__abstractions.slice(0U, 
                                                                                (local_size___05F 
                                                                                - (IData)(1U)));
                    } else {
                        while (VL_LTS_III(32, this->__PVT__abstractions.size(), local_size___05F)) {
                            this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(local_size___05F));
                        }
                    }
                }
            } else {
                unnamedblk21__DOT__local_name___05F = "abstractions["s;
                if ((((0U != VL_LEN_IN(local_rsrc_name___05F)) 
                      & (0x5dU == VL_GETC_N(local_rsrc_name___05F,
                                            (VL_LEN_IN(local_rsrc_name___05F) 
                                             - (IData)(1U))))) 
                     & (VL_SUBSTR_N(local_rsrc_name___05F,0U,
                                    (VL_LEN_IN(unnamedblk21__DOT__local_name___05F) 
                                     - (IData)(1U))) 
                        == unnamedblk21__DOT__local_name___05F))) {
                    unnamedblk21__DOT__unnamedblk22__DOT__local_index_str___05F 
                        = VL_SUBSTR_N(local_rsrc_name___05F,
                                      VL_LEN_IN(unnamedblk21__DOT__local_name___05F),
                                      (VL_LEN_IN(local_rsrc_name___05F) 
                                       - (IData)(2U)));
                    unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F 
                        = VL_SSCANF_INNX(64,unnamedblk21__DOT__unnamedblk22__DOT__local_index_str___05F,"%#",0,
                                         32,&(unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F)) ;
                    if (VL_LTS_III(32, 0U, unnamedblk21__DOT__unnamedblk22__DOT__local_code___05F)) {
                        if (VL_GTS_III(32, 0U, unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F)) {
                            if ((0U != ([&]() {
                                            __Vfunc_uvm_report_enabled__63__id = "UVM/FIELDS/QDA_IDX"s;
                                            __Vfunc_uvm_report_enabled__63__severity = 1U;
                                            __Vfunc_uvm_report_enabled__63__verbosity = 0U;
                                            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__64__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                                = __Vfunc_get__64__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                        ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__65__Vfuncout);
                                            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                                = __Vtask_get_root__65__Vfuncout;
                                            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                        ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__63__verbosity, (IData)(__Vfunc_uvm_report_enabled__63__severity), __Vfunc_uvm_report_enabled__63__id, __Vtask_uvm_report_enabled__66__Vfuncout);
                                            __Vfunc_uvm_report_enabled__63__Vfuncout 
                                                = __Vtask_uvm_report_enabled__66__Vfuncout;
                                        }(), __Vfunc_uvm_report_enabled__63__Vfuncout))) {
                                __Vtask_uvm_report_warning__67__report_enabled_checked = 1U;
                                __Vtask_uvm_report_warning__67__context_name = ""s;
                                __Vtask_uvm_report_warning__67__line = 0x0000003bU;
                                __Vtask_uvm_report_warning__67__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s;
                                __Vtask_uvm_report_warning__67__verbosity = 0U;
                                __Vtemp_4 = ([&]() {
                                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__68__Vfuncout);
                                    }(), __Vfunc_get_full_name__68__Vfuncout);
                                __Vtask_uvm_report_warning__67__message 
                                    = VL_SFORMATF_N_NX("Index '%0d' is not valid for field '%@.abstractions' of size '%0d'",0,
                                                       32,
                                                       unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F,
                                                       -1,
                                                       &(__Vtemp_4),
                                                       32,
                                                       this->__PVT__abstractions.size()) ;
                                __Vtask_uvm_report_warning__67__id = "UVM/FIELDS/QDA_IDX"s;
                                vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__69__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs 
                                    = __Vfunc_get__69__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 155)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__70__Vfuncout);
                                vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                                    = __Vtask_get_root__70__Vfuncout;
                                VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 156)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, __Vtask_uvm_report_warning__67__id, __Vtask_uvm_report_warning__67__message, __Vtask_uvm_report_warning__67__verbosity, __Vtask_uvm_report_warning__67__filename, __Vtask_uvm_report_warning__67__line, __Vtask_uvm_report_warning__67__context_name, (IData)(__Vtask_uvm_report_warning__67__report_enabled_checked));
                            }
                        } else {
                            local_success___05F = (1U 
                                                   & VL_CAST_DYNAMIC(local_rsrc___05F, unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT_____05Ftmp_rsrc___05F));
                            if (local_success___05F) {
                                VL_NULL_CHECK(unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__unnamedblk24__DOT_____05Ftmp_rsrc___05F, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 59)->__VnoInFunc_read(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>{this}, __Vtask_read__72__Vfuncout);
                                unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F 
                                    = __Vtask_read__72__Vfuncout;
                            }
                            if (local_success___05F) {
                                if (VL_GTES_III(32, unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F, this->__PVT__abstractions.size())) {
                                    if (VL_GTS_III(32, this->__PVT__abstractions.size(), 
                                                   ((IData)(1U) 
                                                    + unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F))) {
                                        this->__PVT__abstractions 
                                            = this->__PVT__abstractions.slice(0U, unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F);
                                    } else {
                                        while (VL_LTS_III(32, this->__PVT__abstractions.size(), 
                                                          ((IData)(1U) 
                                                           + unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F))) {
                                            this->__PVT__abstractions.push_back(this->__PVT__abstractions.at(
                                                                                ((IData)(1U) 
                                                                                + unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F)));
                                        }
                                    }
                                }
                                this->__PVT__abstractions.atWriteAppend(unnamedblk21__DOT__unnamedblk22__DOT__local_index___05F) 
                                    = unnamedblk21__DOT__unnamedblk22__DOT__unnamedblk23__DOT__tmp_string___05F;
                            }
                        }
                    }
                }
            }
        }
        __Vlabel0: ;
    }
}

Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_reg_sequence__Tz285(vlProcess, vlSymsp, name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    ;
}

VlCoroutine Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_body\n"); );
    // Locals
    std::string __Vtask_uvm_report_error__74__id;
    std::string __Vtask_uvm_report_error__74__message;
    IData/*31:0*/ __Vtask_uvm_report_error__74__verbosity;
    __Vtask_uvm_report_error__74__verbosity = 0;
    std::string __Vtask_uvm_report_error__74__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__74__line;
    __Vtask_uvm_report_error__74__line = 0;
    std::string __Vtask_uvm_report_error__74__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__74__report_enabled_checked;
    __Vtask_uvm_report_error__74__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__75__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__76__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__Vfuncout;
    __Vfunc_uvm_report_enabled__78__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__78__verbosity;
    __Vfunc_uvm_report_enabled__78__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__78__severity;
    __Vfunc_uvm_report_enabled__78__severity = 0;
    std::string __Vfunc_uvm_report_enabled__78__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__79__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__80__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__81__Vfuncout;
    __Vtask_uvm_report_enabled__81__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__82__id;
    std::string __Vtask_uvm_report_info__82__message;
    IData/*31:0*/ __Vtask_uvm_report_info__82__verbosity;
    __Vtask_uvm_report_info__82__verbosity = 0;
    std::string __Vtask_uvm_report_info__82__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__82__line;
    __Vtask_uvm_report_info__82__line = 0;
    std::string __Vtask_uvm_report_info__82__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__82__report_enabled_checked;
    __Vtask_uvm_report_info__82__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__83__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__84__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__85__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__89__Vfuncout;
    __Vfunc_uvm_report_enabled__89__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__89__verbosity;
    __Vfunc_uvm_report_enabled__89__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__89__severity;
    __Vfunc_uvm_report_enabled__89__severity = 0;
    std::string __Vfunc_uvm_report_enabled__89__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__90__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__91__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__92__Vfuncout;
    __Vtask_uvm_report_enabled__92__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__93__id;
    std::string __Vtask_uvm_report_info__93__message;
    IData/*31:0*/ __Vtask_uvm_report_info__93__verbosity;
    __Vtask_uvm_report_info__93__verbosity = 0;
    std::string __Vtask_uvm_report_info__93__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__93__line;
    __Vtask_uvm_report_info__93__line = 0;
    std::string __Vtask_uvm_report_info__93__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__93__report_enabled_checked;
    __Vtask_uvm_report_info__93__report_enabled_checked = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__94__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__95__Vfuncout;
    // Body
    VL_KEEP_THIS;
    IData/*31:0*/ unnamedblk25__DOT__i;
    unnamedblk25__DOT__i = 0;
    {
        if ((VlNull{} == Vtransactions_uvm_pkg__03a__03auvm_reg_sequence__Tz285::__PVT__model)) {
            __Vtask_uvm_report_error__74__report_enabled_checked = 0U;
            __Vtask_uvm_report_error__74__context_name = ""s;
            __Vtask_uvm_report_error__74__line = 0U;
            __Vtask_uvm_report_error__74__filename = ""s;
            __Vtask_uvm_report_error__74__verbosity = 0U;
            __Vtask_uvm_report_error__74__message = "Register model handle is null"s;
            __Vtask_uvm_report_error__74__id = "uvm_reg_mem_hdl_paths_seq"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__75__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                = __Vfunc_get__75__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__76__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                = __Vtask_get_root__76__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__74__id, __Vtask_uvm_report_error__74__message, __Vtask_uvm_report_error__74__verbosity, __Vtask_uvm_report_error__74__filename, __Vtask_uvm_report_error__74__line, __Vtask_uvm_report_error__74__context_name, (IData)(__Vtask_uvm_report_error__74__report_enabled_checked));
            goto __Vlabel0;
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__78__id = "uvm_reg_mem_hdl_paths_seq"s;
                        __Vfunc_uvm_report_enabled__78__severity = 0U;
                        __Vfunc_uvm_report_enabled__78__verbosity = 0x00000064U;
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
            __Vtask_uvm_report_info__82__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__82__context_name = ""s;
            __Vtask_uvm_report_info__82__line = 0x0000004cU;
            __Vtask_uvm_report_info__82__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s;
            __Vtask_uvm_report_info__82__verbosity = 0x00000064U;
            __Vtask_uvm_report_info__82__message = 
                VL_CVT_PACK_STR_NN(VL_CONCATN_NNN("checking HDL paths for all registers/memories in "s, 
                                                  ([&]() {
                            VL_NULL_CHECK(Vtransactions_uvm_pkg__03a__03auvm_reg_sequence__Tz285::__PVT__model, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 76)
                                                   ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__83__Vfuncout);
                        }(), __Vtask_get_full_name__83__Vfuncout)));
            __Vtask_uvm_report_info__82__id = "uvm_reg_mem_hdl_paths_seq"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__84__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__84__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__85__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__85__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__82__id, __Vtask_uvm_report_info__82__message, __Vtask_uvm_report_info__82__verbosity, __Vtask_uvm_report_info__82__filename, __Vtask_uvm_report_info__82__line, __Vtask_uvm_report_info__82__context_name, (IData)(__Vtask_uvm_report_info__82__report_enabled_checked));
        }
        if ((0U == this->__PVT__abstractions.size())) {
            this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtransactions_uvm_pkg__03a__03auvm_reg_sequence__Tz285::__PVT__model, ""s);
        } else {
            unnamedblk25__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk25__DOT__i, this->__PVT__abstractions.size())) {
                this->__VnoInFunc_do_block(vlProcess, vlSymsp, Vtransactions_uvm_pkg__03a__03auvm_reg_sequence__Tz285::__PVT__model, 
                                           VL_CVT_PACK_STR_NN(this->__PVT__abstractions.at(unnamedblk25__DOT__i)));
                unnamedblk25__DOT__i = ((IData)(1U) 
                                        + unnamedblk25__DOT__i);
            }
        }
        if ((0U != ([&]() {
                        __Vfunc_uvm_report_enabled__89__id = "uvm_reg_mem_hdl_paths_seq"s;
                        __Vfunc_uvm_report_enabled__89__severity = 0U;
                        __Vfunc_uvm_report_enabled__89__verbosity = 0x00000064U;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__90__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                            = __Vfunc_get__90__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                    ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__91__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                            = __Vtask_get_root__91__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                    ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__89__verbosity, (IData)(__Vfunc_uvm_report_enabled__89__severity), __Vfunc_uvm_report_enabled__89__id, __Vtask_uvm_report_enabled__92__Vfuncout);
                        __Vfunc_uvm_report_enabled__89__Vfuncout 
                            = __Vtask_uvm_report_enabled__92__Vfuncout;
                    }(), __Vfunc_uvm_report_enabled__89__Vfuncout))) {
            __Vtask_uvm_report_info__93__report_enabled_checked = 1U;
            __Vtask_uvm_report_info__93__context_name = ""s;
            __Vtask_uvm_report_info__93__line = 0x00000055U;
            __Vtask_uvm_report_info__93__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s;
            __Vtask_uvm_report_info__93__verbosity = 0x00000064U;
            __Vtask_uvm_report_info__93__message = "HDL path validation completed "s;
            __Vtask_uvm_report_info__93__id = "uvm_reg_mem_hdl_paths_seq"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__94__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
                = __Vfunc_get__94__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__95__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
                = __Vtask_get_root__95__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__93__id, __Vtask_uvm_report_info__93__message, __Vtask_uvm_report_info__93__verbosity, __Vtask_uvm_report_info__93__filename, __Vtask_uvm_report_info__93__line, __Vtask_uvm_report_info__93__context_name, (IData)(__Vtask_uvm_report_info__93__report_enabled_checked));
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> blk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_reset_blk\n"); );
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block> blk, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_do_block\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__97__Vfuncout;
    __Vfunc_uvm_report_enabled__97__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__97__verbosity;
    __Vfunc_uvm_report_enabled__97__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__97__severity;
    __Vfunc_uvm_report_enabled__97__severity = 0;
    std::string __Vfunc_uvm_report_enabled__97__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__98__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__99__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__100__Vfuncout;
    __Vtask_uvm_report_enabled__100__Vfuncout = 0;
    std::string __Vtask_uvm_report_info__101__id;
    std::string __Vtask_uvm_report_info__101__message;
    IData/*31:0*/ __Vtask_uvm_report_info__101__verbosity;
    __Vtask_uvm_report_info__101__verbosity = 0;
    std::string __Vtask_uvm_report_info__101__filename;
    IData/*31:0*/ __Vtask_uvm_report_info__101__line;
    __Vtask_uvm_report_info__101__line = 0;
    std::string __Vtask_uvm_report_info__101__context_name;
    CData/*0:0*/ __Vtask_uvm_report_info__101__report_enabled_checked;
    __Vtask_uvm_report_info__101__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__102__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__103__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__104__Vfuncout;
    // Body
    IData/*31:0*/ unnamedblk26__DOT__i;
    unnamedblk26__DOT__i = 0;
    IData/*31:0*/ unnamedblk27__DOT__i;
    unnamedblk27__DOT__i = 0;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_block>> unnamedblk28__DOT__blks;
    IData/*31:0*/ unnamedblk28__DOT__unnamedblk29__DOT__i;
    unnamedblk28__DOT__unnamedblk29__DOT__i = 0;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg>> regs;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem>> mems;
    if ((0U != ([&]() {
                    __Vfunc_uvm_report_enabled__97__id = "uvm_reg_mem_hdl_paths_seq"s;
                    __Vfunc_uvm_report_enabled__97__severity = 0U;
                    __Vfunc_uvm_report_enabled__97__verbosity = 0x000000c8U;
                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__98__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                        = __Vfunc_get__98__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__99__Vfuncout);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                        = __Vtask_get_root__99__Vfuncout;
                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__97__verbosity, (IData)(__Vfunc_uvm_report_enabled__97__severity), __Vfunc_uvm_report_enabled__97__id, __Vtask_uvm_report_enabled__100__Vfuncout);
                    __Vfunc_uvm_report_enabled__97__Vfuncout 
                        = __Vtask_uvm_report_enabled__100__Vfuncout;
                }(), __Vfunc_uvm_report_enabled__97__Vfuncout))) {
        __Vtask_uvm_report_info__101__report_enabled_checked = 1U;
        __Vtask_uvm_report_info__101__context_name = ""s;
        __Vtask_uvm_report_info__101__line = 0x00000068U;
        __Vtask_uvm_report_info__101__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s;
        __Vtask_uvm_report_info__101__verbosity = 0x000000c8U;
        __Vtask_uvm_report_info__101__message = VL_CVT_PACK_STR_NN(
                                                                   VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Validating HDL paths in "s, 
                                                                                ([&]() {
                                    VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 104)
                                                                                ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__102__Vfuncout);
                                }(), __Vtask_get_full_name__102__Vfuncout)), " for "s), 
                                                                                ((""s 
                                                                                == kind)
                                                                                 ? "default"s
                                                                                 : kind)), " design abstraction"s));
        __Vtask_uvm_report_info__101__id = "uvm_reg_mem_hdl_paths_seq"s;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__103__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs 
            = __Vfunc_get__103__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 136)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__104__Vfuncout);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top 
            = __Vtask_get_root__104__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_info__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 137)->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, __Vtask_uvm_report_info__101__id, __Vtask_uvm_report_info__101__message, __Vtask_uvm_report_info__101__verbosity, __Vtask_uvm_report_info__101__filename, __Vtask_uvm_report_info__101__line, __Vtask_uvm_report_info__101__context_name, (IData)(__Vtask_uvm_report_info__101__report_enabled_checked));
    }
    VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 107)->__VnoInFunc_get_registers(vlSymsp, regs, 0U);
    unnamedblk26__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk26__DOT__i, regs.size())) {
        this->__VnoInFunc_check_reg(vlProcess, vlSymsp, regs.at(unnamedblk26__DOT__i), kind);
        unnamedblk26__DOT__i = ((IData)(1U) + unnamedblk26__DOT__i);
    }
    VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 111)->__VnoInFunc_get_memories(vlSymsp, mems, 0U);
    unnamedblk27__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk27__DOT__i, mems.size())) {
        this->__VnoInFunc_check_mem(vlProcess, vlSymsp, mems.at(unnamedblk27__DOT__i), kind);
        unnamedblk27__DOT__i = ((IData)(1U) + unnamedblk27__DOT__i);
    }
    VL_NULL_CHECK(blk, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 118)->__VnoInFunc_get_blocks(vlSymsp, unnamedblk28__DOT__blks, 1U);
    unnamedblk28__DOT__unnamedblk29__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk28__DOT__unnamedblk29__DOT__i, unnamedblk28__DOT__blks.size())) {
        this->__VnoInFunc_do_block(vlProcess, vlSymsp, unnamedblk28__DOT__blks.at(unnamedblk28__DOT__unnamedblk29__DOT__i), kind);
        unnamedblk28__DOT__unnamedblk29__DOT__i = ((IData)(1U) 
                                                   + unnamedblk28__DOT__unnamedblk29__DOT__i);
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg> r, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_reg\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_hdl_path__112__Vfuncout;
    __Vtask_has_hdl_path__112__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_read__114__Vfuncout;
    __Vfunc_uvm_hdl_read__114__Vfuncout = 0;
    VlWide<32>/*1023:0*/ __Vfunc_uvm_hdl_read__114__value;
    VL_ZERO_W(1024, __Vfunc_uvm_hdl_read__114__value);
    IData/*31:0*/ __Vfunc_uvm_report_enabled__116__Vfuncout;
    __Vfunc_uvm_report_enabled__116__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__116__verbosity;
    __Vfunc_uvm_report_enabled__116__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__116__severity;
    __Vfunc_uvm_report_enabled__116__severity = 0;
    std::string __Vfunc_uvm_report_enabled__116__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__117__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__118__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__119__Vfuncout;
    __Vtask_uvm_report_enabled__119__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__120__id;
    std::string __Vtask_uvm_report_error__120__message;
    IData/*31:0*/ __Vtask_uvm_report_error__120__verbosity;
    __Vtask_uvm_report_error__120__verbosity = 0;
    std::string __Vtask_uvm_report_error__120__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__120__line;
    __Vtask_uvm_report_error__120__line = 0;
    std::string __Vtask_uvm_report_error__120__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__120__report_enabled_checked;
    __Vtask_uvm_report_error__120__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__121__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__122__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__123__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_hdl_check_path__125__Vfuncout;
    __Vfunc_uvm_hdl_check_path__125__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__127__Vfuncout;
    __Vfunc_uvm_report_enabled__127__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__127__verbosity;
    __Vfunc_uvm_report_enabled__127__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__127__severity;
    __Vfunc_uvm_report_enabled__127__severity = 0;
    std::string __Vfunc_uvm_report_enabled__127__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__128__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__129__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__130__Vfuncout;
    __Vtask_uvm_report_enabled__130__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__131__id;
    std::string __Vtask_uvm_report_error__131__message;
    IData/*31:0*/ __Vtask_uvm_report_error__131__verbosity;
    __Vtask_uvm_report_error__131__verbosity = 0;
    std::string __Vtask_uvm_report_error__131__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__131__line;
    __Vtask_uvm_report_error__131__line = 0;
    std::string __Vtask_uvm_report_error__131__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__131__report_enabled_checked;
    __Vtask_uvm_report_error__131__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__132__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__133__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__134__Vfuncout;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    IData/*31:0*/ unnamedblk30__DOT__p;
    unnamedblk30__DOT__p = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk30__DOT__unnamedblk31__DOT__path;
    IData/*31:0*/ unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j;
    unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j = 0;
    std::string unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_;
    QData/*63:0*/ unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__d;
    unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__d = 0;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(r, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 131)
                      ->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vtask_has_hdl_path__112__Vfuncout);
                        }(), (IData)(__Vtask_has_hdl_path__112__Vfuncout))))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(r, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 134)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        }
        unnamedblk30__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk30__DOT__p, paths.size())) {
            unnamedblk30__DOT__unnamedblk31__DOT__path 
                = paths.at(unnamedblk30__DOT__p);
            unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j, VL_NULL_CHECK(unnamedblk30__DOT__unnamedblk31__DOT__path, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 139)
                              ->__PVT__slices.size())) {
                unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk30__DOT__unnamedblk31__DOT__path, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 140)
                    ->__PVT__slices.at(unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j)
                    .__PVT__path;
                if ((1U & (~ (0U != ([&]() {
                                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_READ"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                        __Vfunc_uvm_hdl_read__114__Vfuncout = 0U;
                                        unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__d 
                                            = (((QData)((IData)(
                                                                __Vfunc_uvm_hdl_read__114__value[1U])) 
                                                << 0x00000020U) 
                                               | (QData)((IData)(
                                                                 __Vfunc_uvm_hdl_read__114__value[0U])));
                                    }(), __Vfunc_uvm_hdl_read__114__Vfuncout))))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__116__id = "uvm_reg_mem_hdl_paths_seq"s;
                                    __Vfunc_uvm_report_enabled__116__severity = 2U;
                                    __Vfunc_uvm_report_enabled__116__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__117__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__117__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__118__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__118__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__116__verbosity, (IData)(__Vfunc_uvm_report_enabled__116__severity), __Vfunc_uvm_report_enabled__116__id, __Vtask_uvm_report_enabled__119__Vfuncout);
                                    __Vfunc_uvm_report_enabled__116__Vfuncout 
                                        = __Vtask_uvm_report_enabled__119__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__116__Vfuncout))) {
                        __Vtask_uvm_report_error__120__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__120__context_name = ""s;
                        __Vtask_uvm_report_error__120__line = 0x00000091U;
                        __Vtask_uvm_report_error__120__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s;
                        __Vtask_uvm_report_error__120__verbosity = 0U;
                        __Vtemp_1 = ([&]() {
                                VL_NULL_CHECK(r, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 145)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__121__Vfuncout);
                            }(), __Vtask_get_full_name__121__Vfuncout);
                        __Vtask_uvm_report_error__120__message 
                            = VL_SFORMATF_N_NX("HDL path \"%@\" for register \"%@\" is not readable",0,
                                               -1,&(unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_),
                                               -1,&(__Vtemp_1)) ;
                        __Vtask_uvm_report_error__120__id = "uvm_reg_mem_hdl_paths_seq"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__122__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__122__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__123__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__123__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__120__id, __Vtask_uvm_report_error__120__message, __Vtask_uvm_report_error__120__verbosity, __Vtask_uvm_report_error__120__filename, __Vtask_uvm_report_error__120__line, __Vtask_uvm_report_error__120__context_name, (IData)(__Vtask_uvm_report_error__120__report_enabled_checked));
                    }
                }
                if ((1U & (~ (0U != ([&]() {
                                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_CHECK_PATH"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                        __Vfunc_uvm_hdl_check_path__125__Vfuncout = 0U;
                                    }(), __Vfunc_uvm_hdl_check_path__125__Vfuncout))))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__127__id = "uvm_reg_mem_hdl_paths_seq"s;
                                    __Vfunc_uvm_report_enabled__127__severity = 2U;
                                    __Vfunc_uvm_report_enabled__127__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__128__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__128__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__129__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__129__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__127__verbosity, (IData)(__Vfunc_uvm_report_enabled__127__severity), __Vfunc_uvm_report_enabled__127__id, __Vtask_uvm_report_enabled__130__Vfuncout);
                                    __Vfunc_uvm_report_enabled__127__Vfuncout 
                                        = __Vtask_uvm_report_enabled__130__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__127__Vfuncout))) {
                        __Vtask_uvm_report_error__131__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__131__context_name = ""s;
                        __Vtask_uvm_report_error__131__line = 0x00000095U;
                        __Vtask_uvm_report_error__131__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s;
                        __Vtask_uvm_report_error__131__verbosity = 0U;
                        __Vtemp_2 = ([&]() {
                                VL_NULL_CHECK(r, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 149)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__132__Vfuncout);
                            }(), __Vtask_get_full_name__132__Vfuncout);
                        __Vtask_uvm_report_error__131__message 
                            = VL_SFORMATF_N_NX("HDL path \"%@\" for register \"%@\" is not accessible",0,
                                               -1,&(unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__unnamedblk33__DOT__p_),
                                               -1,&(__Vtemp_2)) ;
                        __Vtask_uvm_report_error__131__id = "uvm_reg_mem_hdl_paths_seq"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__133__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__133__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__134__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__134__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__131__id, __Vtask_uvm_report_error__131__message, __Vtask_uvm_report_error__131__verbosity, __Vtask_uvm_report_error__131__filename, __Vtask_uvm_report_error__131__line, __Vtask_uvm_report_error__131__context_name, (IData)(__Vtask_uvm_report_error__131__report_enabled_checked));
                    }
                }
                unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j 
                    = ((IData)(1U) + unnamedblk30__DOT__unnamedblk31__DOT__unnamedblk32__DOT__j);
            }
            unnamedblk30__DOT__p = ((IData)(1U) + unnamedblk30__DOT__p);
        }
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_mem> m, std::string kind) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_check_mem\n"); );
    // Locals
    CData/*0:0*/ __Vtask_has_hdl_path__136__Vfuncout;
    __Vtask_has_hdl_path__136__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_hdl_check_path__138__Vfuncout;
    __Vfunc_uvm_hdl_check_path__138__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__140__Vfuncout;
    __Vfunc_uvm_report_enabled__140__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_report_enabled__140__verbosity;
    __Vfunc_uvm_report_enabled__140__verbosity = 0;
    CData/*1:0*/ __Vfunc_uvm_report_enabled__140__severity;
    __Vfunc_uvm_report_enabled__140__severity = 0;
    std::string __Vfunc_uvm_report_enabled__140__id;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__141__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__142__Vfuncout;
    IData/*31:0*/ __Vtask_uvm_report_enabled__143__Vfuncout;
    __Vtask_uvm_report_enabled__143__Vfuncout = 0;
    std::string __Vtask_uvm_report_error__144__id;
    std::string __Vtask_uvm_report_error__144__message;
    IData/*31:0*/ __Vtask_uvm_report_error__144__verbosity;
    __Vtask_uvm_report_error__144__verbosity = 0;
    std::string __Vtask_uvm_report_error__144__filename;
    IData/*31:0*/ __Vtask_uvm_report_error__144__line;
    __Vtask_uvm_report_error__144__line = 0;
    std::string __Vtask_uvm_report_error__144__context_name;
    CData/*0:0*/ __Vtask_uvm_report_error__144__report_enabled_checked;
    __Vtask_uvm_report_error__144__report_enabled_checked = 0;
    std::string __Vtask_get_full_name__145__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__146__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__147__Vfuncout;
    std::string __Vtemp_1;
    // Body
    IData/*31:0*/ unnamedblk34__DOT__p;
    unnamedblk34__DOT__p = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat> unnamedblk34__DOT__unnamedblk35__DOT__path;
    IData/*31:0*/ unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j;
    unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j = 0;
    std::string unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__p_;
    VlQueue<VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_hdl_path_concat>> paths;
    {
        if ((1U & (~ ([&]() {
                            VL_NULL_CHECK(m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 160)
                      ->__VnoInFunc_has_hdl_path(vlSymsp, kind, __Vtask_has_hdl_path__136__Vfuncout);
                        }(), (IData)(__Vtask_has_hdl_path__136__Vfuncout))))) {
            goto __Vlabel0;
        }
        VL_NULL_CHECK(m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 163)->__VnoInFunc_get_full_hdl_path(vlProcess, vlSymsp, paths, kind, "."s);
        if ((0U == paths.size())) {
            goto __Vlabel0;
        }
        unnamedblk34__DOT__p = 0U;
        while (VL_LTS_III(32, unnamedblk34__DOT__p, paths.size())) {
            unnamedblk34__DOT__unnamedblk35__DOT__path 
                = paths.at(unnamedblk34__DOT__p);
            unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j = 0U;
            while (VL_LTS_III(32, unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j, VL_NULL_CHECK(unnamedblk34__DOT__unnamedblk35__DOT__path, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 168)
                              ->__PVT__slices.size())) {
                unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__p_ 
                    = VL_NULL_CHECK(unnamedblk34__DOT__unnamedblk35__DOT__path, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 170)
                    ->__PVT__slices.at(unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j)
                    .__PVT__path;
                if ((1U & (~ (0U != ([&]() {
                                        vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_report_fatal_TOP__uvm_pkg(vlProcess, vlSymsp, "UVM_HDL_CHECK_PATH"s, "uvm_hdl DPI routines are compiled off. Recompile without +define+UVM_HDL_NO_DPI"s, 0U, ""s, 0U, ""s, 0U);
                                        __Vfunc_uvm_hdl_check_path__138__Vfuncout = 0U;
                                    }(), __Vfunc_uvm_hdl_check_path__138__Vfuncout))))) {
                    if ((0U != ([&]() {
                                    __Vfunc_uvm_report_enabled__140__id = "uvm_reg_mem_hdl_paths_seq"s;
                                    __Vfunc_uvm_report_enabled__140__severity = 2U;
                                    __Vfunc_uvm_report_enabled__140__verbosity = 0U;
                                    vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__141__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs 
                                        = __Vfunc_get__141__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 89)
                                ->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__142__Vfuncout);
                                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top 
                                        = __Vtask_get_root__142__Vfuncout;
                                    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_enabled__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 90)
                                ->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, __Vfunc_uvm_report_enabled__140__verbosity, (IData)(__Vfunc_uvm_report_enabled__140__severity), __Vfunc_uvm_report_enabled__140__id, __Vtask_uvm_report_enabled__143__Vfuncout);
                                    __Vfunc_uvm_report_enabled__140__Vfuncout 
                                        = __Vtask_uvm_report_enabled__143__Vfuncout;
                                }(), __Vfunc_uvm_report_enabled__140__Vfuncout))) {
                        __Vtask_uvm_report_error__144__report_enabled_checked = 1U;
                        __Vtask_uvm_report_error__144__context_name = ""s;
                        __Vtask_uvm_report_error__144__line = 0x000000aeU;
                        __Vtask_uvm_report_error__144__filename = "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh"s;
                        __Vtask_uvm_report_error__144__verbosity = 0U;
                        __Vtemp_1 = ([&]() {
                                VL_NULL_CHECK(m, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/reg/sequences/uvm_reg_mem_hdl_paths_seq.svh", 174)
                                     ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__145__Vfuncout);
                            }(), __Vtask_get_full_name__145__Vfuncout);
                        __Vtask_uvm_report_error__144__message 
                            = VL_SFORMATF_N_NX("HDL path \"%@\" for memory \"%@\" is not accessible",0,
                                               -1,&(unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__unnamedblk37__DOT__p_),
                                               -1,&(__Vtemp_1)) ;
                        __Vtask_uvm_report_error__144__id = "uvm_reg_mem_hdl_paths_seq"s;
                        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__146__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs 
                            = __Vfunc_get__146__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 174)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__147__Vfuncout);
                        vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top 
                            = __Vtask_get_root__147__Vfuncout;
                        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_error__Vstatic__top, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/base/uvm_globals.svh", 175)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, __Vtask_uvm_report_error__144__id, __Vtask_uvm_report_error__144__message, __Vtask_uvm_report_error__144__verbosity, __Vtask_uvm_report_error__144__filename, __Vtask_uvm_report_error__144__line, __Vtask_uvm_report_error__144__context_name, (IData)(__Vtask_uvm_report_error__144__report_enabled_checked));
                    }
                }
                unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j 
                    = ((IData)(1U) + unnamedblk34__DOT__unnamedblk35__DOT__unnamedblk36__DOT__j);
            }
            unnamedblk34__DOT__p = ((IData)(1U) + unnamedblk34__DOT__p);
        }
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__150__Vfuncout;
    __Vfunc___Vbasic_randomize__150__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__150__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__150__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vbasic_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_reg_mem_hdl_paths_seq::to_string_middle\n"); );
    // Body
    std::string out;
    out += "abstractions:" + VL_TO_STRING(__PVT__abstractions);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_reg_sequence__Tz285::to_string_middle();
    return (out);
}
