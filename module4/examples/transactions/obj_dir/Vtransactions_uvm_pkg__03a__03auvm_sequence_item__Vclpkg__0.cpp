// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtransactions.h for the primary calling header

#include "Vtransactions__pch.h"

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item__Vclpkg::__VnoInFunc_get_type(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi4> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vtransactions_uvm_pkg__03a__03auvm_sequence_item__Vclpkg::__VnoInFunc_get_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi4> __Vfunc_get__0__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__0__Vfuncout);
    get_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

Vtransactions_uvm_pkg__03a__03auvm_sequence_item::Vtransactions_uvm_pkg__03a__03auvm_sequence_item(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string name)
    : Vtransactions_uvm_pkg__03a__03auvm_transaction(vlProcess, vlSymsp, name, VlNull{}) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_depth = 0xffffffffU;
    this->__PVT__m_sequence_id = 0xffffffffU;
    ;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_type_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_sequence_item"s;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_object_type(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_object_registry__pi4> __Vfunc_get__1__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi4__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__1__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__1__Vfuncout;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequence_id(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequence_id\n"); );
    // Body
    this->__PVT__m_sequence_id = id;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_id(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_sequence_id__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_id\n"); );
    // Body
    get_sequence_id__Vfuncrtn = this->__PVT__m_sequence_id;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_item_context(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent_seq, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_item_context\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequencer_base> __Vtask_get_sequencer__4__Vfuncout;
    IData/*31:0*/ __Vtask_get_depth__7__Vfuncout;
    __Vtask_get_depth__7__Vfuncout = 0;
    // Body
    this->__VnoInFunc_set_use_sequence_info(vlSymsp, 1U);
    if ((VlNull{} != parent_seq)) {
        this->__VnoInFunc_set_parent_sequence(vlSymsp, parent_seq);
    }
    if (((VlNull{} == sequencer) & (VlNull{} != this->__PVT__m_parent_sequence))) {
        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 121)->__VnoInFunc_get_sequencer(vlSymsp, __Vtask_get_sequencer__4__Vfuncout);
        sequencer = __Vtask_get_sequencer__4__Vfuncout;
    }
    this->__VnoInFunc_set_sequencer(vlSymsp, sequencer);
    if ((VlNull{} != this->__PVT__m_parent_sequence)) {
        this->__VnoInFunc_set_depth(vlSymsp, ((IData)(1U) 
                                              + ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 123)
                                                 ->__VnoInFunc_get_depth(vlSymsp, __Vtask_get_depth__7__Vfuncout);
                    }(), __Vtask_get_depth__7__Vfuncout)));
    }
    this->__VnoInFunc_reseed(vlProcess, vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_use_sequence_info(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_use_sequence_info\n"); );
    // Body
    this->__PVT__m_use_sequence_info = value;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_use_sequence_info(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &get_use_sequence_info__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_use_sequence_info\n"); );
    // Body
    get_use_sequence_info__Vfuncrtn = this->__PVT__m_use_sequence_info;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_id_info(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_id_info\n"); );
    // Locals
    std::string __Vfunc_get_full_name__10__Vfuncout;
    IData/*31:0*/ __Vtask_get_transaction_id__12__Vfuncout;
    __Vtask_get_transaction_id__12__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_sequence_id__14__Vfuncout;
    __Vtask_get_sequence_id__14__Vfuncout = 0;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    if ((VlNull{} == item)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(
                                                              ([&]() {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vfunc_get_full_name__10__Vfuncout);
                    }(), __Vfunc_get_full_name__10__Vfuncout)), "set_id_info called with null parameter"s, 0U, ""s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_set_transaction_id(vlSymsp, ([&]() {
                VL_NULL_CHECK(item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 163)
                                                   ->__VnoInFunc_get_transaction_id(vlSymsp, __Vtask_get_transaction_id__12__Vfuncout);
            }(), __Vtask_get_transaction_id__12__Vfuncout));
    this->__VnoInFunc_set_sequence_id(vlSymsp, ([&]() {
                VL_NULL_CHECK(item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 164)
                                                ->__VnoInFunc_get_sequence_id(vlSymsp, __Vtask_get_sequence_id__14__Vfuncout);
            }(), __Vtask_get_sequence_id__14__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequencer(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequencer_base> sequencer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_sequencer\n"); );
    // Body
    this->__PVT__m_sequencer = sequencer;
    this->__VnoInFunc_m_set_p_sequencer(vlSymsp);
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequencer(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequencer\n"); );
    // Body
    get_sequencer__Vfuncrtn = this->__PVT__m_sequencer;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_parent_sequence(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> parent) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_parent_sequence\n"); );
    // Body
    this->__PVT__m_parent_sequence = parent;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_parent_sequence(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> &get_parent_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_parent_sequence\n"); );
    // Body
    get_parent_sequence__Vfuncrtn = this->__PVT__m_parent_sequence;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_depth(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_set_depth\n"); );
    // Body
    this->__PVT__m_depth = value;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_depth(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &get_depth__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_depth\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_depth__16__Vfuncout;
    __Vtask_get_depth__16__Vfuncout = 0;
    // Body
    {
        if ((0xffffffffU != this->__PVT__m_depth)) {
            get_depth__Vfuncrtn = this->__PVT__m_depth;
            goto __Vlabel0;
        }
        this->__PVT__m_depth = ((VlNull{} == this->__PVT__m_parent_sequence)
                                 ? 1U : ((IData)(1U) 
                                         + ([&]() {
                        VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 246)
                                            ->__VnoInFunc_get_depth(vlSymsp, __Vtask_get_depth__16__Vfuncout);
                    }(), __Vtask_get_depth__16__Vfuncout)));
        get_depth__Vfuncrtn = this->__PVT__m_depth;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_is_item(Vtransactions__Syms* __restrict vlSymsp, CData/*0:0*/ &is_item__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_is_item\n"); );
    // Body
    is_item__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_full_name(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_full_name\n"); );
    // Locals
    std::string __Vtask_get_full_name__17__Vfuncout;
    std::string __Vtask_get_full_name__18__Vfuncout;
    std::string __Vfunc_get_name__19__Vfuncout;
    std::string __Vfunc_get_name__20__Vfuncout;
    // Body
    if ((VlNull{} != this->__PVT__m_parent_sequence)) {
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(([&]() {
                    VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 270)
                                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__17__Vfuncout);
                }(), __Vtask_get_full_name__17__Vfuncout), "."s);
    } else if ((VlNull{} != this->__PVT__m_sequencer)) {
        get_full_name__Vfuncrtn = VL_CONCATN_NNN(([&]() {
                    VL_NULL_CHECK(this->__PVT__m_sequencer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 272)
                                                  ->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__18__Vfuncout);
                }(), __Vtask_get_full_name__18__Vfuncout), "."s);
    }
    get_full_name__Vfuncrtn = ((""s != ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__19__Vfuncout);
                }(), __Vfunc_get_name__19__Vfuncout))
                                ? VL_CONCATN_NNN(get_full_name__Vfuncrtn, 
                                                 ([&]() {
                    this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__20__Vfuncout);
                }(), __Vfunc_get_name__20__Vfuncout))
                                : VL_CONCATN_NNN(get_full_name__Vfuncrtn, "_item"s));
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence_name(Vtransactions__Syms* __restrict vlSymsp, std::string &get_root_sequence_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence_name\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> __Vfunc_get_root_sequence__21__Vfuncout;
    std::string __Vtask_get_name__22__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> root_seq;
    this->__VnoInFunc_get_root_sequence(vlSymsp, __Vfunc_get_root_sequence__21__Vfuncout);
    root_seq = __Vfunc_get_root_sequence__21__Vfuncout;
    get_root_sequence_name__Vfuncrtn = ((VlNull{} == root_seq)
                                         ? ""s : ([&]() {
                VL_NULL_CHECK(root_seq, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 292)
                                                  ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__22__Vfuncout);
            }(), __Vtask_get_name__22__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence(Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> &get_root_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_root_sequence\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__23__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__24__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> root_seq_base;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> root_seq;
    {
        root_seq_base = VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item>{this};
        while (true) {
            if ((VlNull{} != ([&]() {
                            VL_NULL_CHECK(root_seq_base, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 315)
                              ->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__23__Vfuncout);
                        }(), __Vtask_get_parent_sequence__23__Vfuncout))) {
                VL_NULL_CHECK(root_seq_base, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 316)->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__24__Vfuncout);
                root_seq_base = __Vtask_get_parent_sequence__24__Vfuncout;
                if (VL_UNLIKELY(((! VL_CAST_DYNAMIC(root_seq_base, root_seq))))) {
                    VL_WRITEF_NX("[%0t] %%Error: uvm_sequence_item.svh:317: Assertion failed in %Nuvm_pkg.uvm_sequence_item.get_root_sequence: 'assert' failed.\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 317, "");
                }
            } else {
                get_root_sequence__Vfuncrtn = root_seq;
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_path(Vtransactions__Syms* __restrict vlSymsp, std::string &get_sequence_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_get_sequence_path\n"); );
    // Locals
    std::string __Vfunc_get_name__25__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__26__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_base> __Vtask_get_parent_sequence__27__Vfuncout;
    std::string __Vtask_get_name__28__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item> this_item;
    std::string seq_path;
    {
        this_item = VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item>{this};
        this->__VnoInFunc_get_name(vlSymsp, __Vfunc_get_name__25__Vfuncout);
        seq_path = __Vfunc_get_name__25__Vfuncout;
        while (true) {
            if ((VlNull{} != ([&]() {
                            VL_NULL_CHECK(this_item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 337)
                              ->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__26__Vfuncout);
                        }(), __Vtask_get_parent_sequence__26__Vfuncout))) {
                VL_NULL_CHECK(this_item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 338)->__VnoInFunc_get_parent_sequence(vlSymsp, __Vtask_get_parent_sequence__27__Vfuncout);
                this_item = __Vtask_get_parent_sequence__27__Vfuncout;
                seq_path = VL_CONCATN_NNN(VL_CONCATN_NNN(
                                                         ([&]() {
                                VL_NULL_CHECK(this_item, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 339)
                                                          ->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__28__Vfuncout);
                            }(), __Vtask_get_name__28__Vfuncout), "."s), seq_path);
            } else {
                get_sequence_path__Vfuncrtn = seq_path;
                goto __Vlabel0;
            }
        }
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_get_report_object(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_object> &uvm_get_report_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_get_report_object\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> __Vfunc_get__29__Vfuncout;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_root> __Vtask_get_root__30__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_coreservice_t> unnamedblk1__DOT__cs;
    if ((VlNull{} == this->__PVT__m_sequencer)) {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_coreservice_t__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__29__Vfuncout);
        unnamedblk1__DOT__cs = __Vfunc_get__29__Vfuncout;
        VL_NULL_CHECK(unnamedblk1__DOT__cs, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 361)->__VnoInFunc_get_root(vlProcess, vlSymsp, __Vtask_get_root__30__Vfuncout);
        uvm_get_report_object__Vfuncrtn = __Vtask_get_root__30__Vfuncout;
    } else {
        uvm_get_report_object__Vfuncrtn = this->__PVT__m_sequencer;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_enabled(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ verbosity, CData/*1:0*/ severity, std::string id, IData/*31:0*/ &uvm_report_enabled__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_enabled\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__31__Vfuncout;
    IData/*31:0*/ __Vtask_get_report_verbosity_level__32__Vfuncout;
    __Vtask_get_report_verbosity_level__32__Vfuncout = 0;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_object> l_report_object;
    {
        this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __Vfunc_uvm_get_report_object__31__Vfuncout);
        l_report_object = __Vfunc_uvm_get_report_object__31__Vfuncout;
        if (VL_LTS_III(32, ([&]() {
                        VL_NULL_CHECK(l_report_object, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 370)
                            ->__VnoInFunc_get_report_verbosity_level(vlProcess, vlSymsp, severity, id, __Vtask_get_report_verbosity_level__32__Vfuncout);
                    }(), __Vtask_get_report_verbosity_level__32__Vfuncout), verbosity)) {
            uvm_report_enabled__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        uvm_report_enabled__Vfuncrtn = 1U;
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, CData/*1:0*/ severity, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_report_enabled__33__Vfuncout;
    __Vfunc_uvm_report_enabled__33__Vfuncout = 0;
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_message> __Vfunc_new_report_message__34__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_message> l_report_message;
    {
        if ((1U & (~ (IData)(report_enabled_checked)))) {
            if ((1U & (~ (0U != ([&]() {
                                    this->__VnoInFunc_uvm_report_enabled(vlProcess, vlSymsp, verbosity, (IData)(severity), id, __Vfunc_uvm_report_enabled__33__Vfuncout);
                                }(), __Vfunc_uvm_report_enabled__33__Vfuncout))))) {
                goto __Vlabel0;
            }
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_report_message__Vclpkg.__VnoInFunc_new_report_message(vlProcess, vlSymsp, "uvm_report_message"s, __Vfunc_new_report_message__34__Vfuncout);
        l_report_message = __Vfunc_new_report_message__34__Vfuncout;
        VL_NULL_CHECK(l_report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 392)->__VnoInFunc_set_report_message(vlSymsp, severity, id, message, verbosity, filename, line, context_name);
        this->__VnoInFunc_uvm_process_report_message(vlProcess, vlSymsp, l_report_message);
        __Vlabel0: ;
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_info(Vtransactions__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_info\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 0U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_warning(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_warning\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 1U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_error(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_error\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 2U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_fatal(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line, std::string context_name, CData/*0:0*/ report_enabled_checked) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_report_fatal\n"); );
    // Body
    this->__VnoInFunc_uvm_report(vlProcess, vlSymsp, 3U, id, message, verbosity, filename, line, context_name, (IData)(report_enabled_checked));
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_process_report_message(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_message> report_message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_uvm_process_report_message\n"); );
    // Locals
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_object> __Vfunc_uvm_get_report_object__41__Vfuncout;
    std::string __Vtask_get_context__43__Vfuncout;
    std::string __Vfunc_get_sequence_path__45__Vfuncout;
    // Body
    VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_report_object> l_report_object;
    this->__VnoInFunc_uvm_get_report_object(vlProcess, vlSymsp, __Vfunc_uvm_get_report_object__41__Vfuncout);
    l_report_object = __Vfunc_uvm_get_report_object__41__Vfuncout;
    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 466)->__VnoInFunc_set_report_object(vlSymsp, l_report_object);
    if ((""s == ([&]() {
                    VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 467)
                 ->__VnoInFunc_get_context(vlSymsp, __Vtask_get_context__43__Vfuncout);
                }(), __Vtask_get_context__43__Vfuncout))) {
        VL_NULL_CHECK(report_message, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 468)->__VnoInFunc_set_context(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                ([&]() {
                        this->__VnoInFunc_get_sequence_path(vlSymsp, __Vfunc_get_sequence_path__45__Vfuncout);
                    }(), __Vfunc_get_sequence_path__45__Vfuncout)));
    }
    VL_NULL_CHECK(VL_NULL_CHECK(l_report_object, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 469)
                  ->__PVT__m_rh, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 469)->__VnoInFunc_process_report_message(vlProcess, vlSymsp, report_message);
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print(VlProcessRef vlProcess, Vtransactions__Syms* __restrict vlSymsp, VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_do_print\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_get_depth__47__Vfuncout;
    __Vfunc_get_depth__47__Vfuncout = 0;
    std::string __Vtask_get_name__50__Vfuncout;
    std::string __Vtask_get_full_name__51__Vfuncout;
    std::string __Vtask_get_full_name__54__Vfuncout;
    // Body
    std::string temp_str0;
    std::string temp_str1;
    IData/*31:0*/ depth;
    depth = 0;
    this->__VnoInFunc_get_depth(vlSymsp, __Vfunc_get_depth__47__Vfuncout);
    depth = __Vfunc_get_depth__47__Vfuncout;
    Vtransactions_uvm_pkg__03a__03auvm_transaction::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    if (((IData)(this->__PVT__print_sequence_info) 
         | (IData)(this->__PVT__m_use_sequence_info))) {
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 482)->__VnoInFunc_print_field_int(vlProcess, vlSymsp, "depth"s, 
                                                                                VL_EXTENDS_QI(64,32, depth), 0x00000020U, 0x02000000U, 0x2eU, "int"s);
        if ((VlNull{} != this->__PVT__m_parent_sequence)) {
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 484)->__VnoInFunc_get_name(vlSymsp, __Vtask_get_name__50__Vfuncout);
            temp_str0 = __Vtask_get_name__50__Vfuncout;
            VL_NULL_CHECK(this->__PVT__m_parent_sequence, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 485)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__51__Vfuncout);
            temp_str1 = __Vtask_get_full_name__51__Vfuncout;
        }
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 487)->__VnoInFunc_print_string(vlProcess, vlSymsp, "parent sequence (name)"s, temp_str0, 0x2eU);
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 488)->__VnoInFunc_print_string(vlProcess, vlSymsp, "parent sequence (full name)"s, temp_str1, 0x2eU);
        temp_str1 = ""s;
        if ((VlNull{} != this->__PVT__m_sequencer)) {
            VL_NULL_CHECK(this->__PVT__m_sequencer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 491)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __Vtask_get_full_name__54__Vfuncout);
            temp_str1 = __Vtask_get_full_name__54__Vfuncout;
        }
        VL_NULL_CHECK(printer, "/mnt/d/proj/designs/learn_uvm2017_sv_verilator/tools/uvm-2017/1800.2-2017-1.0/src/seq/uvm_sequence_item.svh", 493)->__VnoInFunc_print_string(vlProcess, vlSymsp, "sequencer"s, temp_str1, 0x2eU);
    }
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc_randomize\n"); );
    // Locals
    IData/*31:0*/ __Vfunc___Vbasic_randomize__57__Vfuncout;
    __Vfunc___Vbasic_randomize__57__Vfuncout = 0;
    // Body
    Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.clear();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vtransactions_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & ([&]() {
                this->__VnoInFunc___Vbasic_randomize(vlSymsp, __Vfunc___Vbasic_randomize__57__Vfuncout);
            }(), __Vfunc___Vbasic_randomize__57__Vfuncout));
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___Vbasic_randomize(Vtransactions__Syms* __restrict vlSymsp, IData/*31:0*/ &__Vbasic_randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::__VnoInFunc___Vbasic_randomize\n"); );
    // Body
    __Vbasic_randomize__Vfuncrtn = 1U;
}

void Vtransactions_uvm_pkg__03a__03auvm_sequence_item::_ctor_var_reset(Vtransactions__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_sequence_id = 0;
    __PVT__m_use_sequence_info = 0;
    __PVT__m_depth = 0;
    __PVT__print_sequence_info = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vtransactions_uvm_pkg__03a__03auvm_sequence_item>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_sequence_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vtransactions_uvm_pkg__03a__03auvm_sequence_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtransactions_uvm_pkg__03a__03auvm_sequence_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_sequence_id:" + VL_TO_STRING(__PVT__m_sequence_id);
    out += ", m_use_sequence_info:" + VL_TO_STRING(__PVT__m_use_sequence_info);
    out += ", m_depth:" + VL_TO_STRING(__PVT__m_depth);
    out += ", m_sequencer:" + VL_TO_STRING(__PVT__m_sequencer);
    out += ", m_parent_sequence:" + VL_TO_STRING(__PVT__m_parent_sequence);
    out += ", print_sequence_info:" + VL_TO_STRING(__PVT__print_sequence_info);
    out += ", "+ Vtransactions_uvm_pkg__03a__03auvm_transaction::to_string_middle();
    return (out);
}
