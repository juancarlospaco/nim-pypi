/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
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

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__gpGJG5CoQzE64skFd9bPG7A)(NimStringDesc* msg);
static N_INLINE(void, sysFatal__3MqFiUWEqQBXOyOla7Oh4gassertions)(NimStringDesc* message);
static N_INLINE(void, sysFatal__WPk17CEGHHshE9cIMbjK32wassertions)(NimStringDesc* message, NimStringDesc* arg);
N_LIB_PRIVATE N_NIMCALL(void, writeStackTrace__amVlU9ajqZ06ujoesRBHcDg_2)(void);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(void, rawWrite)(FILE* f, NCSTRING s);
static N_INLINE(NI, nimCStrLen)(NCSTRING a);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__h1bPSEm4o1Lcq1L2w1tzIQ_2, "Error: unhandled exception: ", 28);
STRING_LITERAL(TM__h1bPSEm4o1Lcq1L2w1tzIQ_3, " [", 2);
STRING_LITERAL(TM__h1bPSEm4o1Lcq1L2w1tzIQ_4, "AssertionDefect", 15);
STRING_LITERAL(TM__h1bPSEm4o1Lcq1L2w1tzIQ_5, "]\012", 2);

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
static N_INLINE(NI, nimCStrLen)(NCSTRING a) {
	NI result;
	size_t T1_;
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = strlen(a);
	result = ((NI) (T1_));
	return result;
}
static N_INLINE(void, rawWrite)(FILE* f, NCSTRING s) {
	void* T1_;
	int T2_;
	int T3_;
	T1_ = (void*)0;
	T1_ = ((void*) (s));
	T2_ = (int)0;
	T2_ = fwrite(T1_, ((size_t) 1), ((size_t) ((s ? nimCStrLen(s) : 0))), f);
	(void)(T2_);
	T3_ = (int)0;
	T3_ = fflush(f);
	(void)(T3_);
}
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
static N_INLINE(void, sysFatal__WPk17CEGHHshE9cIMbjK32wassertions)(NimStringDesc* message, NimStringDesc* arg) {
	NimStringDesc* buf;
	writeStackTrace__amVlU9ajqZ06ujoesRBHcDg_2();
	buf = rawNewString(((NI) 200));
	buf = resizeString(buf, 28);
appendString(buf, ((NimStringDesc*) &TM__h1bPSEm4o1Lcq1L2w1tzIQ_2));
	buf = resizeString(buf, (message ? message->Sup.len : 0) + 0);
appendString(buf, message);
	buf = resizeString(buf, (arg ? arg->Sup.len : 0) + 0);
appendString(buf, arg);
	buf = resizeString(buf, 2);
appendString(buf, ((NimStringDesc*) &TM__h1bPSEm4o1Lcq1L2w1tzIQ_3));
	buf = resizeString(buf, 15);
appendString(buf, ((NimStringDesc*) &TM__h1bPSEm4o1Lcq1L2w1tzIQ_4));
	buf = resizeString(buf, 2);
appendString(buf, ((NimStringDesc*) &TM__h1bPSEm4o1Lcq1L2w1tzIQ_5));
	rawWrite(stderr, nimToCStringConv(buf));
	exit(((NI) 1));
}
static N_INLINE(void, sysFatal__3MqFiUWEqQBXOyOla7Oh4gassertions)(NimStringDesc* message) {
	sysFatal__WPk17CEGHHshE9cIMbjK32wassertions(message, ((NimStringDesc*) NIM_NIL));
}
N_LIB_PRIVATE N_NOINLINE(void, raiseAssert__gpGJG5CoQzE64skFd9bPG7A)(NimStringDesc* msg) {
	sysFatal__3MqFiUWEqQBXOyOla7Oh4gassertions(msg);
}
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg) {
	raiseAssert__gpGJG5CoQzE64skFd9bPG7A(msg);
}
