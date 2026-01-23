// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtransaction_example__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtransaction_example::Vtransaction_example(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtransaction_example__Syms(contextp(), _vcname__, this)}
    , __PVT__transaction_pkg{vlSymsp->TOP.__PVT__transaction_pkg}
    , transaction_pkg__03a__03aTransaction__Vclpkg{vlSymsp->TOP.transaction_pkg__03a__03aTransaction__Vclpkg}
    , transaction_pkg__03a__03aReadTransaction__Vclpkg{vlSymsp->TOP.transaction_pkg__03a__03aReadTransaction__Vclpkg}
    , transaction_pkg__03a__03aWriteTransaction__Vclpkg{vlSymsp->TOP.transaction_pkg__03a__03aWriteTransaction__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtransaction_example::Vtransaction_example(const char* _vcname__)
    : Vtransaction_example(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtransaction_example::~Vtransaction_example() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtransaction_example___024root___eval_debug_assertions(Vtransaction_example___024root* vlSelf);
#endif  // VL_DEBUG
void Vtransaction_example___024root___eval_static(Vtransaction_example___024root* vlSelf);
void Vtransaction_example___024root___eval_initial(Vtransaction_example___024root* vlSelf);
void Vtransaction_example___024root___eval_settle(Vtransaction_example___024root* vlSelf);
void Vtransaction_example___024root___eval(Vtransaction_example___024root* vlSelf);

void Vtransaction_example::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtransaction_example::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtransaction_example___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtransaction_example___024root___eval_static(&(vlSymsp->TOP));
        Vtransaction_example___024root___eval_initial(&(vlSymsp->TOP));
        Vtransaction_example___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtransaction_example___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtransaction_example::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtransaction_example::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtransaction_example::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtransaction_example___024root___eval_final(Vtransaction_example___024root* vlSelf);

VL_ATTR_COLD void Vtransaction_example::final() {
    Vtransaction_example___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtransaction_example::hierName() const { return vlSymsp->name(); }
const char* Vtransaction_example::modelName() const { return "Vtransaction_example"; }
unsigned Vtransaction_example::threads() const { return 1; }
void Vtransaction_example::prepareClone() const { contextp()->prepareClone(); }
void Vtransaction_example::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtransaction_example::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtransaction_example___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtransaction_example___024root__trace_init_top(Vtransaction_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtransaction_example___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtransaction_example___024root*>(voidSelf);
    Vtransaction_example__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtransaction_example___024root__trace_decl_types(tracep);
    Vtransaction_example___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtransaction_example___024root__trace_register(Vtransaction_example___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtransaction_example::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtransaction_example::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtransaction_example___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
