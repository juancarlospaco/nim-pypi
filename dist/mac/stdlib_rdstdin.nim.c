/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <stdlib.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
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
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_NIMCALL(NCSTRING, linenoise)(NCSTRING prompt);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(int, linenoiseHistoryAdd)(NCSTRING line);

/* section: NIM_merge_DATA */
extern TNimType NTI__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTI__iLZrPn9anoh9ad1MmO0RczFw_;
STRING_LITERAL(TM__HzcnZIrOxozXVtp36BgK4A_2, "Linenoise returned nil", 22);

/* section: NIM_merge_PROCS */
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readLineFromStdin__KyHUIXCB8EViqg6NrrYj5g)(NimStringDesc* prompt) {
	NimStringDesc* result;
	NCSTRING buffer;
{	result = (NimStringDesc*)0;
	buffer = linenoise(nimToCStringConv(prompt));
	{
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T5_;
		if (!(buffer == 0)) goto LA3_;
		T5_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
		T5_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T5_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T5_).Sup.Sup.name = "IOError";
		(*T5_).Sup.Sup.message = copyString(((NimStringDesc*) &TM__HzcnZIrOxozXVtp36BgK4A_2));
		(*T5_).Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T5_, "IOError", "readLineFromStdin", "rdstdin.nim", 58);
		goto BeforeRet_;
	}
	LA3_: ;
	result = cstrToNimstr(buffer);
	{
		int T10_;
		if (!(((NI) 0) < (result ? result->Sup.len : 0))) goto LA8_;
		T10_ = (int)0;
		T10_ = linenoiseHistoryAdd(buffer);
	}
	LA8_: ;
	free(buffer);
	}BeforeRet_: ;
	return result;
}
