// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclock_gen__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vclock_gen::Vclock_gen(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclock_gen__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vclock_gen::Vclock_gen(const char* _vcname__)
    : Vclock_gen(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclock_gen::~Vclock_gen() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vclock_gen___024root___eval_debug_assertions(Vclock_gen___024root* vlSelf);
#endif  // VL_DEBUG
void Vclock_gen___024root___eval_static(Vclock_gen___024root* vlSelf);
void Vclock_gen___024root___eval_initial(Vclock_gen___024root* vlSelf);
void Vclock_gen___024root___eval_settle(Vclock_gen___024root* vlSelf);
void Vclock_gen___024root___eval(Vclock_gen___024root* vlSelf);

void Vclock_gen::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclock_gen::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclock_gen___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vclock_gen___024root___eval_static(&(vlSymsp->TOP));
        Vclock_gen___024root___eval_initial(&(vlSymsp->TOP));
        Vclock_gen___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vclock_gen___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vclock_gen::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vclock_gen::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vclock_gen::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vclock_gen___024root___eval_final(Vclock_gen___024root* vlSelf);

VL_ATTR_COLD void Vclock_gen::final() {
    Vclock_gen___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclock_gen::hierName() const { return vlSymsp->name(); }
const char* Vclock_gen::modelName() const { return "Vclock_gen"; }
unsigned Vclock_gen::threads() const { return 1; }
void Vclock_gen::prepareClone() const { contextp()->prepareClone(); }
void Vclock_gen::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vclock_gen::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vclock_gen___024root__trace_decl_types(VerilatedVcd* tracep);

void Vclock_gen___024root__trace_init_top(Vclock_gen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vclock_gen___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclock_gen___024root*>(voidSelf);
    Vclock_gen__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vclock_gen___024root__trace_decl_types(tracep);
    Vclock_gen___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vclock_gen___024root__trace_register(Vclock_gen___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vclock_gen::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vclock_gen::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vclock_gen___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
