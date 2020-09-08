/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include "winsock2.h"
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ;
typedef struct tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ;
typedef struct tySequence__qwqHTkRvwhrRyENtudHQ7g tySequence__qwqHTkRvwhrRyENtudHQ7g;
typedef struct tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA;
typedef struct tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog;

/* section: NIM_merge_TYPES */
typedef NIM_CHAR tyArray__EWK8XzFKXCg2WflN3ijhqA[257];
typedef NIM_CHAR tyArray__4249al09aeC68W9cvqMnjIYOA[129];
typedef N_STDCALL_PTR(int, tyProc__As5z9bYt859cLKWaorPRgQYA) (NI16 wVersionRequired, WSADATA* WSData);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg;
typedef NU8 tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw;
typedef NU8 tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg;
typedef N_STDCALL_PTR(NI, tyProc__9aO2cP4IgwjXF8JfUR57CHQ) (int af, int typ, int protocol);
typedef N_STDCALL_PTR(int, tyProc__IQbFr9cLT9bipWCXYfwYwjOw) (NI s);
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
struct tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ {
int ai_flags;
int ai_family;
int ai_socktype;
int ai_protocol;
size_t ai_addrlen;
NCSTRING ai_canonname;
SOCKADDR* ai_addr;
tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ* ai_next;
};
typedef N_STDCALL_PTR(int, tyProc__MvjKU9c5nvs0N3IrS4vNgSw) (NCSTRING nodename, NCSTRING servname, tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ* hints, tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ** res);
struct tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ {
tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val;
NIM_BOOL has;
};
struct tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA {
NI32 tv_sec;
NI32 tv_usec;
};
typedef NI tyArray__SLBTEB08vk46ttuRaTxAYw[64];
struct tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog {
int fd_count;
tyArray__SLBTEB08vk46ttuRaTxAYw fd_array;
};
typedef N_STDCALL_PTR(int, tyProc__rWrG4X5lbcXQyLNkF9aNWhQ) (int nfds, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* readfds, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* writefds, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* exceptfds, tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA* timeout);
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NIM_CHAR tyArray__NSMq3FMCIrS8gSbyinBZ8w[14];

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__qwqHTkRvwhrRyENtudHQ7g {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NI, createNativeSocket__Ptlh848VlbDA9cpTjQee9bjg)(int domain, int sockType, int protocol, NIM_BOOL inheritable);
static N_INLINE(NIM_BOOL, setInheritable__gCWMvDdvc2ku1qH6ZhkzAAnativesockets)(NI s, NIM_BOOL inheritable);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setInheritable__avyDiy1HdQrfaD3Ql9b63EQ)(int f, NIM_BOOL inheritable);
N_LIB_PRIVATE N_NIMCALL(void, close__6NjvlIELQKVp8O4T8sBSUg)(NI socket_0);
N_LIB_PRIVATE N_NIMCALL(int, toInt__na0alpTcWAzTnn2v04w1CQ)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain);
N_LIB_PRIVATE N_NIMCALL(NI32, toU32__RbqzLrUZ5SHNjxdiDB0DWw)(NI64 x);
N_LIB_PRIVATE N_NIMCALL(int, toInt__AuveeRAdmuTXERHtCv4MPg)(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw typ);
N_LIB_PRIVATE N_NIMCALL(int, toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg p);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___RkX9btpg5sQIaP8yYXB6tbA)(NU64 x);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, some__gDZZCqU2e9asjnz7Ee0TNwwoptions)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val);
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, none__lifxITt9cocI1piX9abkoJ6woptions)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA, timeValFromMilliseconds__36pgRlkgGkKNYvyBgpC9azw)(NI timeout);
N_LIB_PRIVATE N_NIMCALL(void, createFdSet__RJdBj9bWg47H8mVaVGsGm9cA)(tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* fd, tySequence__qwqHTkRvwhrRyENtudHQ7g* s, NI* m);
N_LIB_PRIVATE N_NIMCALL(void, FD_ZERO__fc638nyQpO9cH1ijJnul9bcg)(tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* s);
N_LIB_PRIVATE N_NIMCALL(void, FD_SET__1WYTU33XIA9apfyIaLFoFkw)(NI socket_0, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* s);
N_LIB_PRIVATE N_NIMCALL(void, pruneSocketSet__5do79aiSU6N2cA3C3JEPpqw)(tySequence__qwqHTkRvwhrRyENtudHQ7g** s, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* fd);
N_LIB_PRIVATE N_NIMCALL(int, FD_ISSET__2ettf7Q5JTgZVmDLhx6ICQ)(NI socket_0, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* set);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, setLengthSeqV2)(TGenericSeq* s, TNimType* typ, NI newLen);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__Q79bEtFARvq0ekDNtvj3Vqg_;
N_LIB_PRIVATE TNimType NTI__NQT1bItGG2X9byGdrWX7ujw_;
N_LIB_PRIVATE TNimType NTI__dqJ1OqRGclxIMMdSLRzzXg_;
extern TNimType NTI__qwqHTkRvwhrRyENtudHQ7g_;

/* section: NIM_merge_VARS */
N_LIB_PRIVATE NI osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w;
N_LIB_PRIVATE WSADATA wsa__ClAT9bhT9cqG9adztamb5X9b2w;
extern tyProc__As5z9bYt859cLKWaorPRgQYA Dl_12798442_;
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
extern tyProc__9aO2cP4IgwjXF8JfUR57CHQ Dl_12798260_;
extern tyProc__IQbFr9cLT9bipWCXYfwYwjOw Dl_12798265_;
extern tyProc__MvjKU9c5nvs0N3IrS4vNgSw Dl_12798447_;
extern tyProc__rWrG4X5lbcXQyLNkF9aNWhQ Dl_12798336_;

/* section: NIM_merge_PROCS */
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
static N_INLINE(NIM_BOOL, setInheritable__gCWMvDdvc2ku1qH6ZhkzAAnativesockets)(NI s, NIM_BOOL inheritable) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = setInheritable__avyDiy1HdQrfaD3Ql9b63EQ(((int) (s)), inheritable);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__6NjvlIELQKVp8O4T8sBSUg)(NI socket_0) {
	int T1_;
	T1_ = (int)0;
	T1_ = Dl_12798265_(socket_0);
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(NI, createNativeSocket__Ptlh848VlbDA9cpTjQee9bjg)(int domain, int sockType, int protocol, NIM_BOOL inheritable) {
	NI result;
	int sockType_2;
{	result = (NI)0;
	sockType_2 = sockType;
	result = Dl_12798260_(domain, sockType_2, protocol);
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = setInheritable__gCWMvDdvc2ku1qH6ZhkzAAnativesockets(result, inheritable);
		if (!!(T3_)) goto LA4_;
		close__6NjvlIELQKVp8O4T8sBSUg(result);
		result = osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w;
		goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__na0alpTcWAzTnn2v04w1CQ)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain) {
	int result;
	result = (int)0;
	result = toU32__RbqzLrUZ5SHNjxdiDB0DWw(((NI64) (domain)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__AuveeRAdmuTXERHtCv4MPg)(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw typ) {
	int result;
	result = (int)0;
	result = ((int) (typ));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg p) {
	int result;
	result = (int)0;
	switch (p) {
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 18):
	{
		result = ((int) 0);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 21):
	{
		result = ((int) 1);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 6):
	{
		result = ((int) 6);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 17):
	{
		result = ((int) 17);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 19):
	{
		result = ((int) 41);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 22):
	{
		result = ((int) 58);
	}
	break;
	default:
	{
		result = ((int) (p));
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, createNativeSocket__n7HkrQGl6EXucCT9cZGSEqA)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol, NIM_BOOL inheritable) {
	NI result;
	int T1_;
	int T2_;
	int T3_;
	result = (NI)0;
	T1_ = (int)0;
	T1_ = toInt__na0alpTcWAzTnn2v04w1CQ(domain);
	T2_ = (int)0;
	T2_ = toInt__AuveeRAdmuTXERHtCv4MPg(sockType);
	T3_ = (int)0;
	T3_ = toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ(protocol);
	result = createNativeSocket__Ptlh848VlbDA9cpTjQee9bjg(T1_, T2_, T3_, inheritable);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw, toSockType__6alUTTXG6jHTyH82e9a1JDw)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {
	tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw result;
	result = (tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw)0;
	switch (protocol) {
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 6):
	{
		result = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 1);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 17):
	{
		result = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 2);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 18):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 19):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 20):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 21):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 22):
	{
		result = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3);
	}
	break;
	}
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
N_LIB_PRIVATE N_NIMCALL(tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ*, getAddrInfo__UtB9ajZlkqH09bHwAKX9aXxZA)(NimStringDesc* address, NU16 port, tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {
	tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ* result;
	tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ hints;
	NimStringDesc* socketPort;
	int gaiResult;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ*)0;
	nimZeroMem((void*)(&hints), sizeof(tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ));
	result = NIM_NIL;
	hints.ai_family = toInt__na0alpTcWAzTnn2v04w1CQ(domain);
	hints.ai_socktype = toInt__AuveeRAdmuTXERHtCv4MPg(sockType);
	hints.ai_protocol = toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ(protocol);
	{
		if (!(domain == ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 23))) goto LA3_;
		hints.ai_flags = ((int) 8);
	}
	LA3_: ;
	{
		if (!(sockType == ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3))) goto LA7_;
		socketPort = ((NimStringDesc*) NIM_NIL);
	}
	goto LA5_;
	LA7_: ;
	{
		socketPort = dollar___RkX9btpg5sQIaP8yYXB6tbA(port);
	}
	LA5_: ;
	gaiResult = Dl_12798447_(nimToCStringConv(address), nimToCStringConv(socketPort), (&hints), &result);
	{
		NI32 T14_;
		if (!!((gaiResult == ((NI32) 0)))) goto LA12_;
		T14_ = (NI32)0;
		T14_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T14_, ((NimStringDesc*) NIM_NIL));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA12_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, some__gDZZCqU2e9asjnz7Ee0TNwwoptions)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	result.has = NIM_TRUE;
	result.val = val;
	return result;
}
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, none__lifxITt9cocI1piX9abkoJ6woptions)(void) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, toKnownDomain__RQ9bFvLg4dpjf7aRPA8ID9bg)(int family) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	{
		if (!(family == ((NI32) 0))) goto LA3_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 0));
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(family == ((NI32) 2))) goto LA6_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 2));
	}
	goto LA1_;
	LA6_: ;
	{
		if (!(family == ((NI32) 23))) goto LA9_;
		result = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 23));
	}
	goto LA1_;
	LA9_: ;
	{
		result = none__lifxITt9cocI1piX9abkoJ6woptions();
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA, timeValFromMilliseconds__36pgRlkgGkKNYvyBgpC9azw)(NI timeout) {
	tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA));
	{
		NI seconds;
		if (!!((timeout == ((NI) -1)))) goto LA3_;
		seconds = (NI)(timeout / ((NI) 1000));
		result.tv_sec = ((NI32) (seconds));
		result.tv_usec = ((NI32) ((NI)((NI)(timeout - (NI)(seconds * ((NI) 1000))) * ((NI) 1000))));
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, createFdSet__RJdBj9bWg47H8mVaVGsGm9cA)(tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* fd, tySequence__qwqHTkRvwhrRyENtudHQ7g* s, NI* m) {
	FD_ZERO__fc638nyQpO9cH1ijJnul9bcg(fd);
	{
		NI* i;
		NI i_2;
		NI L;
		NI T2_;
		i = (NI*)0;
		i_2 = ((NI) 0);
		T2_ = (s ? s->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i_2 < L)) goto LA4;
				i = (&s->data[i_2]);
				(*m) = (((*m) >= (*i)) ? (*m) : (*i));
				FD_SET__1WYTU33XIA9apfyIaLFoFkw((*i), fd);
				i_2 += ((NI) 1);
			} LA4: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, pruneSocketSet__5do79aiSU6N2cA3C3JEPpqw)(tySequence__qwqHTkRvwhrRyENtudHQ7g** s, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* fd) {
	NI i;
	NI L;
	NI T1_;
	i = ((NI) 0);
	T1_ = ((*s) ? (*s)->Sup.len : 0);
	L = T1_;
	{
		while (1) {
			if (!(i < L)) goto LA3;
			{
				int T6_;
				T6_ = (int)0;
				T6_ = FD_ISSET__2ettf7Q5JTgZVmDLhx6ICQ((*s)->data[i], fd);
				if (!(T6_ == ((NI32) 0))) goto LA7_;
				(*s)->data[i] = (*s)->data[(NI)(L - ((NI) 1))];
				L -= ((NI) 1);
			}
			goto LA4_;
			LA7_: ;
			{
				i += ((NI) 1);
			}
			LA4_: ;
		} LA3: ;
	}
	(*s) = (tySequence__qwqHTkRvwhrRyENtudHQ7g*) setLengthSeqV2(&((*s))->Sup, (&NTI__qwqHTkRvwhrRyENtudHQ7g_), ((NI) (L)));
}
N_LIB_PRIVATE N_NIMCALL(NI, selectRead__9bIaBs2UCYYCy7M7lbU4JZA)(tySequence__qwqHTkRvwhrRyENtudHQ7g** readfds, NI timeout) {
	NI result;
	tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA tv;
	tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog rd;
	NI m;
	result = (NI)0;
	tv = timeValFromMilliseconds__36pgRlkgGkKNYvyBgpC9azw(timeout);
	nimZeroMem((void*)(&rd), sizeof(tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog));
	m = ((NI) 0);
	createFdSet__RJdBj9bWg47H8mVaVGsGm9cA((&rd), (*readfds), (&m));
	{
		int T5_;
		if (!!((timeout == ((NI) -1)))) goto LA3_;
		T5_ = (int)0;
		T5_ = Dl_12798336_(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, (&tv));
		result = ((NI) (T5_));
	}
	goto LA1_;
	LA3_: ;
	{
		int T7_;
		T7_ = (int)0;
		T7_ = Dl_12798336_(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (T7_));
	}
	LA1_: ;
	pruneSocketSet__5do79aiSU6N2cA3C3JEPpqw(readfds, (&rd));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_nativesocketsInit000)(void) {
{
NIM_BOOL* nimErr_;
nimErr_ = nimErrorFlag();
	osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w = INVALID_SOCKET;
	{
		int T3_;
		NI32 T6_;
		T3_ = (int)0;
		T3_ = Dl_12798442_(((NI16) 257), (&wsa__ClAT9bhT9cqG9adztamb5X9b2w));
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		T6_ = (NI32)0;
		T6_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T6_, ((NimStringDesc*) NIM_NIL));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	BeforeRet_: ;
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_nativesocketsDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2_4[4];
NI TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4;
static char* NIM_CONST TM__f9bP3LqjpgpB9cXL8Nnak7tQ_3[4] = {
"AF_UNSPEC", 
"AF_UNIX", 
"AF_INET", 
"AF_INET6"};
static TNimNode* TM__f9bP3LqjpgpB9cXL8Nnak7tQ_5_4[4];
NI TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7;
static char* NIM_CONST TM__f9bP3LqjpgpB9cXL8Nnak7tQ_6[4] = {
"SOCK_STREAM", 
"SOCK_DGRAM", 
"SOCK_RAW", 
"SOCK_SEQPACKET"};
static TNimNode* TM__f9bP3LqjpgpB9cXL8Nnak7tQ_8_7[7];
NI TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10;
static char* NIM_CONST TM__f9bP3LqjpgpB9cXL8Nnak7tQ_9[7] = {
"IPPROTO_TCP", 
"IPPROTO_UDP", 
"IPPROTO_IP", 
"IPPROTO_IPV6", 
"IPPROTO_RAW", 
"IPPROTO_ICMP", 
"IPPROTO_ICMPV6"};
static TNimNode TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[18];

/* section: NIM_merge_TYPE_INIT3 */
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.size = sizeof(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg);
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.align = NIM_ALIGNOF(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg);
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.kind = 14;
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.base = 0;
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.flags = 3;
for (TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4 = 0; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4 < 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4++) {
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0].kind = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0].offset = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0].name = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_3[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4];
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2_4[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4] = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_4+0];
}
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[0].offset = 0;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[1].offset = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[2].offset = 2;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[3].offset = 23;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4].len = 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4].kind = 2; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4].sons = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2_4[0];
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.node = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[4];
NTI__Q79bEtFARvq0ekDNtvj3Vqg_.flags = 1<<2;
NTI__NQT1bItGG2X9byGdrWX7ujw_.size = sizeof(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw);
NTI__NQT1bItGG2X9byGdrWX7ujw_.align = NIM_ALIGNOF(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw);
NTI__NQT1bItGG2X9byGdrWX7ujw_.kind = 14;
NTI__NQT1bItGG2X9byGdrWX7ujw_.base = 0;
NTI__NQT1bItGG2X9byGdrWX7ujw_.flags = 3;
for (TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7 = 0; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7 < 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7++) {
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5].kind = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5].offset = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5].name = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_6[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7];
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_5_4[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7] = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_7+5];
}
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[5].offset = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[6].offset = 2;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[7].offset = 3;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[8].offset = 5;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9].len = 4; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9].kind = 2; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9].sons = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_5_4[0];
NTI__NQT1bItGG2X9byGdrWX7ujw_.node = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[9];
NTI__NQT1bItGG2X9byGdrWX7ujw_.flags = 1<<2;
NTI__dqJ1OqRGclxIMMdSLRzzXg_.size = sizeof(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg);
NTI__dqJ1OqRGclxIMMdSLRzzXg_.align = NIM_ALIGNOF(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg);
NTI__dqJ1OqRGclxIMMdSLRzzXg_.kind = 14;
NTI__dqJ1OqRGclxIMMdSLRzzXg_.base = 0;
NTI__dqJ1OqRGclxIMMdSLRzzXg_.flags = 3;
for (TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10 = 0; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10 < 7; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10++) {
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10].kind = 1;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10].offset = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10].name = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_9[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10];
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_8_7[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10] = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[TM__f9bP3LqjpgpB9cXL8Nnak7tQ_10+10];
}
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[10].offset = 6;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[11].offset = 17;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[12].offset = 18;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[13].offset = 19;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[14].offset = 20;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[15].offset = 21;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[16].offset = 22;
TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17].len = 7; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17].kind = 2; TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17].sons = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_8_7[0];
NTI__dqJ1OqRGclxIMMdSLRzzXg_.node = &TM__f9bP3LqjpgpB9cXL8Nnak7tQ_0[17];
NTI__dqJ1OqRGclxIMMdSLRzzXg_.flags = 1<<2;
}

