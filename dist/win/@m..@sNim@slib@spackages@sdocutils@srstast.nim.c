/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__sawZST1Esj3o7EY9ayWwGPw tySequence__sawZST1Esj3o7EY9ayWwGPw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q;
typedef struct tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg;
typedef struct tySequence__MlAD6nAPq9bHKla9cWiIZP0g tySequence__MlAD6nAPq9bHKla9cWiIZP0g;
typedef struct tySequence__oLpBKXzW3hF9aCVMo5EymfQ tySequence__oLpBKXzW3hF9aCVMo5EymfQ;
typedef struct tyTuple__jq7X5k7hWG0tdTZTDkiyGQ tyTuple__jq7X5k7hWG0tdTZTDkiyGQ;
typedef struct tyTuple__awOivLjlO76sGdHY7nQUjQ tyTuple__awOivLjlO76sGdHY7nQUjQ;

/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_RstNodeKind__Q1jM9a8f0MKlvbLZpipB3qg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg {
tyEnum_RstNodeKind__Q1jM9a8f0MKlvbLZpipB3qg kind;
NimStringDesc* text;
NI level;
tySequence__sawZST1Esj3o7EY9ayWwGPw* sons;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NU8 tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg;
struct tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg {
tySequence__MlAD6nAPq9bHKla9cWiIZP0g* data;
NI counter;
NI first;
NI last;
};
struct tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q {
tyEnum_JsonNodeKind__RUngo7nCHe6O8aBGIcrhtg kind;
union{
struct {NimStringDesc* str;
} _kind_1;
struct {NI64 num;
} _kind_2;
struct {NF fnum;
} _kind_3;
struct {NIM_BOOL bval;
} _kind_4;
struct {tyObject_OrderedTable__ZZvSdVkA2s2sIyifu4cpkg fields;
} _kind_6;
struct {tySequence__oLpBKXzW3hF9aCVMo5EymfQ* elems;
} _kind_7;
};
};
struct tyTuple__jq7X5k7hWG0tdTZTDkiyGQ {
NimStringDesc* Field0;
tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* Field1;
};
typedef tyTuple__jq7X5k7hWG0tdTZTDkiyGQ tyArray__rnBfBeuXQMeTae3dUyC1Bw[2];
struct tyTuple__awOivLjlO76sGdHY7nQUjQ {
NI Field0;
NI Field1;
NimStringDesc* Field2;
tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* Field3;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sawZST1Esj3o7EY9ayWwGPw {
  TGenericSeq Sup;
  tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* data[SEQ_DECL_SIZE];
};
struct tySequence__oLpBKXzW3hF9aCVMo5EymfQ {
  TGenericSeq Sup;
  tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* data[SEQ_DECL_SIZE];
};
struct tySequence__MlAD6nAPq9bHKla9cWiIZP0g {
  TGenericSeq Sup;
  tyTuple__awOivLjlO76sGdHY7nQUjQ data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__sawZST1Esj3o7EY9ayWwGPw)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__eiDrOE3AS6QEbCsY2gtdWQ)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*, newRstNode__9bXoUUqG5jV9cUn3dHohLAXA)(tyEnum_RstNodeKind__Q1jM9a8f0MKlvbLZpipB3qg kind);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*, newRstNode__1jaf6GW9cTGFKmVxMM1pg9aA)(tyEnum_RstNodeKind__Q1jM9a8f0MKlvbLZpipB3qg kind, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, add__6h6IpXf2O9aeD4hz9aJicc2A)(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* father, tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* son);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, pretty__6ucoq7dFiVhOGmHlWNWbTg)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* node, NI indent);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, renderRstToJsonNode__NRgl6l2Yz4XcG3K00PzI3Q)(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* node);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, percent___HoVDUa0lAOcINNYBrrSTiA)(tyTuple__jq7X5k7hWG0tdTZTDkiyGQ* keyVals, NI keyValsLen_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, percent___19ag6cl4fMjxytc9arHmLIbw)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, percent___kuRQ9bONMtpC9bToqIhX9cETA)(NI64 n);
N_LIB_PRIVATE N_NIMCALL(void, add__dO3MQSMpDh4RGT3IbIah7w)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* obj, NimStringDesc* key, tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* val);
N_LIB_PRIVATE N_NIMCALL(tySequence__oLpBKXzW3hF9aCVMo5EymfQ*, newSeq__zjIk49c8jSPWj0Hihg28OTw)(NI len);
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, percent___DjeV1LtBmZAE5eqEPNcN6A)(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q** elements, NI elementsLen_0);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__CjRS2xrmuD58kdGedE3yyg_;
N_LIB_PRIVATE TNimType NTI__Q1jM9a8f0MKlvbLZpipB3qg_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE TNimType NTI__sawZST1Esj3o7EY9ayWwGPw_;
N_LIB_PRIVATE TNimType NTI__eiDrOE3AS6QEbCsY2gtdWQ_;
STRING_LITERAL(TM__MI3pYf9cgAsIrjZXIlQqHnQ_6, "kind", 4);
STRING_LITERAL(TM__MI3pYf9cgAsIrjZXIlQqHnQ_7, "level", 5);
STRING_LITERAL(TM__MI3pYf9cgAsIrjZXIlQqHnQ_8, "text", 4);
STRING_LITERAL(TM__MI3pYf9cgAsIrjZXIlQqHnQ_9, "sons", 4);

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tySequence__sawZST1Esj3o7EY9ayWwGPw)(void* p, NI op) {
	tySequence__sawZST1Esj3o7EY9ayWwGPw* a;
	NI T1_;
	a = (tySequence__sawZST1Esj3o7EY9ayWwGPw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_NIMCALL(void, Marker_tyRef__eiDrOE3AS6QEbCsY2gtdWQ)(void* p, NI op) {
	tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* a;
	a = (tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*)p;
	nimGCvisit((void*)(*a).text, op);
	nimGCvisit((void*)(*a).sons, op);
}
N_LIB_PRIVATE N_NIMCALL(NI, len__bM2v46TeKfDIrVkegSIy9ag)(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*, newRstNode__9bXoUUqG5jV9cUn3dHohLAXA)(tyEnum_RstNodeKind__Q1jM9a8f0MKlvbLZpipB3qg kind) {
	tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* result;
	result = (tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*)0;
	result = (tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*) newObj((&NTI__eiDrOE3AS6QEbCsY2gtdWQ_), sizeof(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg));
	(*result).sons = NIM_NIL;
	(*result).kind = kind;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*, newRstNode__1jaf6GW9cTGFKmVxMM1pg9aA)(tyEnum_RstNodeKind__Q1jM9a8f0MKlvbLZpipB3qg kind, NimStringDesc* s) {
	tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* result;
	result = (tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*)0;
	result = newRstNode__9bXoUUqG5jV9cUn3dHohLAXA(kind);
	(*result).text = copyString(s);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, add__6h6IpXf2O9aeD4hz9aJicc2A)(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* father, tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* son) {
	NI T1_;
	(*father).sons = (tySequence__sawZST1Esj3o7EY9ayWwGPw*) incrSeqV3((TGenericSeq*)((*father).sons), (&NTI__sawZST1Esj3o7EY9ayWwGPw_));
	T1_ = (*father).sons->Sup.len++;
	(*father).sons->data[T1_] = son;
}
N_LIB_PRIVATE N_NIMCALL(void, add__LfzNpI2Kb4J8icovXV69apg)(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* father, NimStringDesc* s) {
	tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* T1_;
	NI T2_;
	T1_ = (tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*)0;
	T1_ = newRstNode__1jaf6GW9cTGFKmVxMM1pg9aA(((tyEnum_RstNodeKind__Q1jM9a8f0MKlvbLZpipB3qg) 64), s);
	(*father).sons = (tySequence__sawZST1Esj3o7EY9ayWwGPw*) incrSeqV3((TGenericSeq*)((*father).sons), (&NTI__sawZST1Esj3o7EY9ayWwGPw_));
	T2_ = (*father).sons->Sup.len++;
	(*father).sons->data[T2_] = T1_;
}
N_LIB_PRIVATE N_NIMCALL(void, addIfNotNil__6h6IpXf2O9aeD4hz9aJicc2A_2)(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* father, tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* son) {
	{
		if (!!((son == NIM_NIL))) goto LA3_;
		add__6h6IpXf2O9aeD4hz9aJicc2A(father, son);
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*, lastSon__0dL43t7uo9b9ast8lG3CHj1A)(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* n) {
	tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* result;
	NI T1_;
	result = (tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = (*n).sons->data[(NI)(T1_ - ((NI) 1))];
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*, renderRstToJsonNode__NRgl6l2Yz4XcG3K00PzI3Q)(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* node) {
	tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* result;
	tyArray__rnBfBeuXQMeTae3dUyC1Bw T1_;
	result = (tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*)0;
	nimZeroMem((void*)T1_, sizeof(tyArray__rnBfBeuXQMeTae3dUyC1Bw));
	T1_[0].Field0 = copyString(((NimStringDesc*) &TM__MI3pYf9cgAsIrjZXIlQqHnQ_6));
	T1_[0].Field1 = percent___19ag6cl4fMjxytc9arHmLIbw(reprEnum((NI)(*node).kind, (&NTI__Q1jM9a8f0MKlvbLZpipB3qg_)));
	T1_[1].Field0 = copyString(((NimStringDesc*) &TM__MI3pYf9cgAsIrjZXIlQqHnQ_7));
	T1_[1].Field1 = percent___kuRQ9bONMtpC9bToqIhX9cETA(((NI64) ((*node).level)));
	result = percent___HoVDUa0lAOcINNYBrrSTiA(T1_, 2);
	{
		tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* T6_;
		if (!(((NI) 0) < ((*node).text ? (*node).text->Sup.len : 0))) goto LA4_;
		T6_ = (tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*)0;
		T6_ = percent___19ag6cl4fMjxytc9arHmLIbw((*node).text);
		add__dO3MQSMpDh4RGT3IbIah7w(result, ((NimStringDesc*) &TM__MI3pYf9cgAsIrjZXIlQqHnQ_8), T6_);
	}
	LA4_: ;
	{
		NI T9_;
		tySequence__oLpBKXzW3hF9aCVMo5EymfQ* accm;
		NI T12_;
		tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* T17_;
		T9_ = ((*node).sons ? (*node).sons->Sup.len : 0);
		if (!(((NI) 0) < T9_)) goto LA10_;
		T12_ = ((*node).sons ? (*node).sons->Sup.len : 0);
		accm = newSeq__zjIk49c8jSPWj0Hihg28OTw(((NI) (T12_)));
		{
			NI i;
			tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* son;
			NI i_2;
			NI L;
			NI T14_;
			i = (NI)0;
			son = (tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*)0;
			i_2 = ((NI) 0);
			T14_ = ((*node).sons ? (*node).sons->Sup.len : 0);
			L = T14_;
			{
				while (1) {
					if (!(i_2 < L)) goto LA16;
					i = i_2;
					son = (*node).sons->data[i_2];
					accm->data[i] = renderRstToJsonNode__NRgl6l2Yz4XcG3K00PzI3Q(son);
					i_2 += ((NI) 1);
				} LA16: ;
			}
		}
		T17_ = (tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*)0;
		T17_ = percent___DjeV1LtBmZAE5eqEPNcN6A(accm->data, (accm ? accm->Sup.len : 0));
		add__dO3MQSMpDh4RGT3IbIah7w(result, ((NimStringDesc*) &TM__MI3pYf9cgAsIrjZXIlQqHnQ_9), T17_);
	}
	LA10_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, renderRstToJson__hjDGEupF7Wn5wh7cPW0URQ)(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg* node) {
	NimStringDesc* result;
	tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q* T1_;
	result = (NimStringDesc*)0;
	T1_ = (tyObject_JsonNodeObj__df9bshXB7C9cTiWPIOtX3j1Q*)0;
	T1_ = renderRstToJsonNode__NRgl6l2Yz4XcG3K00PzI3Q(node);
	result = pretty__6ucoq7dFiVhOGmHlWNWbTg(T1_, ((NI) 2));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, docutils_rstastDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__MI3pYf9cgAsIrjZXIlQqHnQ_2_4[4];
static TNimNode* TM__MI3pYf9cgAsIrjZXIlQqHnQ_3_65[65];
NI TM__MI3pYf9cgAsIrjZXIlQqHnQ_5;
static char* NIM_CONST TM__MI3pYf9cgAsIrjZXIlQqHnQ_4[65] = {
"rnInner", 
"rnHeadline", 
"rnOverline", 
"rnTransition", 
"rnParagraph", 
"rnBulletList", 
"rnBulletItem", 
"rnEnumList", 
"rnEnumItem", 
"rnDefList", 
"rnDefItem", 
"rnDefName", 
"rnDefBody", 
"rnFieldList", 
"rnField", 
"rnFieldName", 
"rnFieldBody", 
"rnOptionList", 
"rnOptionListItem", 
"rnOptionGroup", 
"rnOption", 
"rnOptionString", 
"rnOptionArgument", 
"rnDescription", 
"rnLiteralBlock", 
"rnQuotedLiteralBlock", 
"rnLineBlock", 
"rnLineBlockItem", 
"rnBlockQuote", 
"rnTable", 
"rnGridTable", 
"rnTableRow", 
"rnTableHeaderCell", 
"rnTableDataCell", 
"rnLabel", 
"rnFootnote", 
"rnCitation", 
"rnStandaloneHyperlink", 
"rnHyperlink", 
"rnRef", 
"rnDirective", 
"rnDirArg", 
"rnRaw", 
"rnTitle", 
"rnContents", 
"rnImage", 
"rnFigure", 
"rnCodeBlock", 
"rnRawHtml", 
"rnRawLatex", 
"rnContainer", 
"rnIndex", 
"rnSubstitutionDef", 
"rnGeneralRole", 
"rnSub", 
"rnSup", 
"rnIdx", 
"rnEmphasis", 
"rnStrongEmphasis", 
"rnTripleEmphasis", 
"rnInterpretedText", 
"rnInlineLiteral", 
"rnSubstitutionReferences", 
"rnSmiley", 
"rnLeaf"};
static TNimNode TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[71];

/* section: NIM_merge_TYPE_INIT3 */
NTI__CjRS2xrmuD58kdGedE3yyg_.size = sizeof(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg);
NTI__CjRS2xrmuD58kdGedE3yyg_.align = NIM_ALIGNOF(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg);
NTI__CjRS2xrmuD58kdGedE3yyg_.kind = 18;
NTI__CjRS2xrmuD58kdGedE3yyg_.base = 0;
NTI__CjRS2xrmuD58kdGedE3yyg_.flags = 2;
TM__MI3pYf9cgAsIrjZXIlQqHnQ_2_4[0] = &TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[1];
NTI__Q1jM9a8f0MKlvbLZpipB3qg_.size = sizeof(tyEnum_RstNodeKind__Q1jM9a8f0MKlvbLZpipB3qg);
NTI__Q1jM9a8f0MKlvbLZpipB3qg_.align = NIM_ALIGNOF(tyEnum_RstNodeKind__Q1jM9a8f0MKlvbLZpipB3qg);
NTI__Q1jM9a8f0MKlvbLZpipB3qg_.kind = 14;
NTI__Q1jM9a8f0MKlvbLZpipB3qg_.base = 0;
NTI__Q1jM9a8f0MKlvbLZpipB3qg_.flags = 3;
for (TM__MI3pYf9cgAsIrjZXIlQqHnQ_5 = 0; TM__MI3pYf9cgAsIrjZXIlQqHnQ_5 < 65; TM__MI3pYf9cgAsIrjZXIlQqHnQ_5++) {
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[TM__MI3pYf9cgAsIrjZXIlQqHnQ_5+2].kind = 1;
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[TM__MI3pYf9cgAsIrjZXIlQqHnQ_5+2].offset = TM__MI3pYf9cgAsIrjZXIlQqHnQ_5;
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[TM__MI3pYf9cgAsIrjZXIlQqHnQ_5+2].name = TM__MI3pYf9cgAsIrjZXIlQqHnQ_4[TM__MI3pYf9cgAsIrjZXIlQqHnQ_5];
TM__MI3pYf9cgAsIrjZXIlQqHnQ_3_65[TM__MI3pYf9cgAsIrjZXIlQqHnQ_5] = &TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[TM__MI3pYf9cgAsIrjZXIlQqHnQ_5+2];
}
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[67].len = 65; TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[67].kind = 2; TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[67].sons = &TM__MI3pYf9cgAsIrjZXIlQqHnQ_3_65[0];
NTI__Q1jM9a8f0MKlvbLZpipB3qg_.node = &TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[67];
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[1].kind = 1;
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[1].offset = offsetof(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg, kind);
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[1].typ = (&NTI__Q1jM9a8f0MKlvbLZpipB3qg_);
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[1].name = "kind";
TM__MI3pYf9cgAsIrjZXIlQqHnQ_2_4[1] = &TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[68];
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[68].kind = 1;
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[68].offset = offsetof(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg, text);
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[68].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[68].name = "text";
TM__MI3pYf9cgAsIrjZXIlQqHnQ_2_4[2] = &TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[69];
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[69].kind = 1;
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[69].offset = offsetof(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg, level);
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[69].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[69].name = "level";
TM__MI3pYf9cgAsIrjZXIlQqHnQ_2_4[3] = &TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[70];
NTI__sawZST1Esj3o7EY9ayWwGPw_.size = sizeof(tySequence__sawZST1Esj3o7EY9ayWwGPw*);
NTI__sawZST1Esj3o7EY9ayWwGPw_.align = NIM_ALIGNOF(tySequence__sawZST1Esj3o7EY9ayWwGPw*);
NTI__sawZST1Esj3o7EY9ayWwGPw_.kind = 24;
NTI__sawZST1Esj3o7EY9ayWwGPw_.base = (&NTI__eiDrOE3AS6QEbCsY2gtdWQ_);
NTI__sawZST1Esj3o7EY9ayWwGPw_.flags = 2;
NTI__sawZST1Esj3o7EY9ayWwGPw_.marker = Marker_tySequence__sawZST1Esj3o7EY9ayWwGPw;
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[70].kind = 1;
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[70].offset = offsetof(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg, sons);
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[70].typ = (&NTI__sawZST1Esj3o7EY9ayWwGPw_);
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[70].name = "sons";
TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[0].len = 4; TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[0].kind = 2; TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[0].sons = &TM__MI3pYf9cgAsIrjZXIlQqHnQ_2_4[0];
NTI__CjRS2xrmuD58kdGedE3yyg_.node = &TM__MI3pYf9cgAsIrjZXIlQqHnQ_0[0];
NTI__eiDrOE3AS6QEbCsY2gtdWQ_.size = sizeof(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*);
NTI__eiDrOE3AS6QEbCsY2gtdWQ_.align = NIM_ALIGNOF(tyObject_RstNode__CjRS2xrmuD58kdGedE3yyg*);
NTI__eiDrOE3AS6QEbCsY2gtdWQ_.kind = 22;
NTI__eiDrOE3AS6QEbCsY2gtdWQ_.base = (&NTI__CjRS2xrmuD58kdGedE3yyg_);
NTI__eiDrOE3AS6QEbCsY2gtdWQ_.flags = 2;
NTI__eiDrOE3AS6QEbCsY2gtdWQ_.marker = Marker_tyRef__eiDrOE3AS6QEbCsY2gtdWQ;
}

