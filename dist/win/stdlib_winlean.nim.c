/* Generated by Nim Compiler v1.3.7 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include "winsock2.h"
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
typedef struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg tyObject_GUID__J2WQBMgezjwf6Trblkflgg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw;
typedef struct tyObject_OVERLAPPED__9ayhTq9cybD7eA9aZA09akSNXg tyObject_OVERLAPPED__9ayhTq9cybD7eA9aZA09akSNXg;
typedef struct tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw;
typedef struct tyObject_STARTUPINFO__WGlpKvY9cdd69bAwMQMNLYoQ tyObject_STARTUPINFO__WGlpKvY9cdd69bAwMQMNLYoQ;
typedef struct tyObject_PROCESS_INFORMATION__rpgAdaffN9b79bo2kEQiFsMg tyObject_PROCESS_INFORMATION__rpgAdaffN9b79bo2kEQiFsMg;
typedef struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA;
typedef struct tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ;
typedef struct tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog;
typedef struct tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA;

/* section: NIM_merge_TYPES */
typedef NI8 tyArray__9cWG514ToTTjfTPLhXXV0IQ[8];
struct tyObject_GUID__J2WQBMgezjwf6Trblkflgg {
NI32 D1;
NI16 D2;
NI16 D3;
tyArray__9cWG514ToTTjfTPLhXXV0IQ D4;
};
typedef N_STDCALL_PTR(NCSTRING, tyProc__5ctyytqoGFQ0BA1imFGbVw) (int family, void* paddr, NCSTRING pStringBuffer, NI32 stringBufSize);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI32, tyProc__LGDJfXC77WFm4ami8tbVyg) (NI handle, NI16* buf, NI32 size);
typedef N_STDCALL_PTR(void, tyProc__9bc9cLDdaqTE6n5J78feKRYg) (tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw* lpSystemTimeAsFileTime);
struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw {
NI32 dwLowDateTime;
NI32 dwHighDateTime;
};
typedef N_STDCALL_PTR(NI32, tyProc__9cfAa2qMwRsugQ9bZaJfhIcQ) (NI16* lpExistingFileName, NI16* lpNewFileName, NI32 flags);
typedef N_STDCALL_PTR(NI32, tyProc__aO673xGTLLxou7P7GxoCXA) (NI32 dwFlags, void* lpSource, NI32 dwMessageId, NI32 dwLanguageId, void* lpBuffer, NI32 nSize, void* arguments);
typedef N_STDCALL_PTR(void, tyProc__im9buRnIvptJfzdASYMEbBA) (void* p);
typedef N_STDCALL_PTR(NI32, tyProc__9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(int, tyProc__As5z9bYt859cLKWaorPRgQYA) (NI16 wVersionRequired, WSADATA* WSData);
typedef N_STDCALL_PTR(NI, tyProc__9aO2cP4IgwjXF8JfUR57CHQ) (int af, int typ, int protocol);
typedef N_STDCALL_PTR(int, tyProc__IQbFr9cLT9bipWCXYfwYwjOw) (NI s);
typedef N_STDCALL_PTR(void, tyProc__X0Q3cs1Ai9bfe54O0LJQ1fQ) (NI32 para1, NI32 para2, tyObject_OVERLAPPED__9ayhTq9cybD7eA9aZA09akSNXg* para3);
typedef N_STDCALL_PTR(int, tyProc__m8OtNuKklv1X2vQjXQkzSA) (NI s, NI32 dwIoControlCode, void* lpvInBuffer, NI32 cbInBuffer, void* lpvOutBuffer, NI32 cbOutBuffer, NI32* lpcbBytesReturned, tyObject_OVERLAPPED__9ayhTq9cybD7eA9aZA09akSNXg* lpOverlapped, tyProc__X0Q3cs1Ai9bfe54O0LJQ1fQ lpCompletionRoutine);
typedef N_STDCALL_PTR(NI32, tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) (NI16* lpFileName);
typedef N_STDCALL_PTR(NI16*, tyProc__dQrdVesp1gLEVufnwKAlGA) (void);
typedef N_STDCALL_PTR(NI32, tyProc__C5kM33gEhlSKPXwfDNHofQ) (NI* hReadPipe, NI* hWritePipe, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpPipeAttributes, NI32 nSize);
typedef N_STDCALL_PTR(NI32, tyProc__mBVOPXmpGfUrrbA9a5K9cMbQ) (NI hObject, NI32 dwMask, NI32 dwFlags);
typedef N_STDCALL_PTR(NI, tyProc__ox3t5iM0vxm1voo9c2CrxLQ) (NI16* lpName, NI32 dwOpenMode, NI32 dwPipeMode, NI32 nMaxInstances, NI32 nOutBufferSize, NI32 nInBufferSize, NI32 nDefaultTimeOut, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpSecurityAttributes);
typedef N_STDCALL_PTR(NI, tyProc__A2Q4AG9aesAd2D8S5BP4y2g) (NI16* lpFileName, NI32 dwDesiredAccess, NI32 dwShareMode, void* lpSecurityAttributes, NI32 dwCreationDisposition, NI32 dwFlagsAndAttributes, NI hTemplateFile);
typedef N_STDCALL_PTR(NI, tyProc__uryidYWkntM7ddjZSyxvyQ) (void);
typedef N_STDCALL_PTR(NI32, tyProc__oew1DfaGl5XhHmnBK0HYXQ) (NI hSourceProcessHandle, NI hSourceHandle, NI hTargetProcessHandle, NI* lpTargetHandle, NI32 dwDesiredAccess, NI32 bInheritHandle, NI32 dwOptions);
typedef N_STDCALL_PTR(NI32, tyProc__P13srMBg9b3d3yEV9aW4NCoA) (NI hObject);
typedef N_STDCALL_PTR(NI, tyProc__zP2zGemcuVRvOUE82f9a0Pw) (NI32 nStdHandle);
typedef N_STDCALL_PTR(NI32, tyProc__hHrNIgHA5HNxhRfMx6QeWg) (NI16* lpApplicationName, NI16* lpCommandLine, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpProcessAttributes, tyObject_SECURITY_ATTRIBUTES__P4HW9ceaevTBZ5O3kGC8yyw* lpThreadAttributes, NI32 bInheritHandles, NI32 dwCreationFlags, NI16* lpEnvironment, NI16* lpCurrentDirectory, tyObject_STARTUPINFO__WGlpKvY9cdd69bAwMQMNLYoQ* lpStartupInfo, tyObject_PROCESS_INFORMATION__rpgAdaffN9b79bo2kEQiFsMg* lpProcessInformation);
typedef N_STDCALL_PTR(NI32, tyProc__9ajZYMGL5GqiRFqiCC367oA) (NI hFile, void* buffer, NI32 nNumberOfBytesToRead, NI32* lpNumberOfBytesRead, void* lpOverlapped);
typedef N_STDCALL_PTR(NI32, tyProc__FprzxJFfqQdWyyGxiUsmeQ) (NI hHandle, NI32 dwMilliseconds);
typedef N_STDCALL_PTR(NI32, tyProc__KxeGXN001TReCr89ca9c5bng) (NI hProcess, NI32* lpExitCode);
typedef N_STDCALL_PTR(NI32, tyProc__KHeEdNTR0xu6nVKzb2dFPw) (NI16* lpName, NI16* lpValue);
typedef N_STDCALL_PTR(NI, tyProc__lLim4ugM6CVjiaTaa7eXVA) (NI16* lpFileName, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef NI16 tyArray__EKfNt9b8uxndgFbu2Ky3XAQ[260];
typedef NI16 tyArray__Get9cpRTS5VjGKP6CDsI9bYA[14];
struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA {
NI32 dwFileAttributes;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftCreationTime;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftLastAccessTime;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftLastWriteTime;
NI32 nFileSizeHigh;
NI32 nFileSizeLow;
NI32 dwReserved0;
NI32 dwReserved1;
tyArray__EKfNt9b8uxndgFbu2Ky3XAQ cFileName;
tyArray__Get9cpRTS5VjGKP6CDsI9bYA cAlternateFileName;
};
typedef N_STDCALL_PTR(void, tyProc__ofoySXaAAlxxs9bQS9a1etlg) (NI hFindFile);
typedef N_STDCALL_PTR(int, tyProc__MvjKU9c5nvs0N3IrS4vNgSw) (NCSTRING nodename, NCSTRING servname, tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ* hints, tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ** res);
typedef N_STDCALL_PTR(void, tyProc__IV3cwg4tBg3JP8ITSKt7oQ) (tyObject_AddrInfo__C9ahX3gj0cVjII4vjiaSHBQ* ai);
typedef N_STDCALL_PTR(int, tyProc__T129bsPZ4FvuSF4rGFSBKkg) (NI s, SOCKADDR* name, unsigned int namelen);
typedef N_STDCALL_PTR(int, tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w) (NI s, void* buf, int len, int flags);
typedef NI tyArray__SLBTEB08vk46ttuRaTxAYw[64];
struct tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog {
int fd_count;
tyArray__SLBTEB08vk46ttuRaTxAYw fd_array;
};
typedef N_STDCALL_PTR(int, tyProc__rWrG4X5lbcXQyLNkF9aNWhQ) (int nfds, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* readfds, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* writefds, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* exceptfds, tyObject_Timeval__9boMTr1l3P8e1j9aAjdqsQtA* timeout);
typedef N_STDCALL_PTR(NIM_BOOL, tyProc__8Py1tJvU9bm83KdBcpIBjeQ) (NI s, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* set);
typedef N_STDCALL_PTR(NI32, tyProc__upTK7viB3ItEbrKv1N4qcg) (NI32 nBufferLength, NI16* lpBuffer);
typedef N_STDCALL_PTR(NI32, tyProc__HH5OcpN6GzcD9cRu6eeMBGw) (NI16* lpFileName, NI32 dwFileAttributes);
typedef N_STDCALL_PTR(NI32, tyProc__jwEWAkul5J6p6K0UfXa1tw) (NI hFindFile, tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef N_STDCALL_PTR(NI32, tyProc__OOyWBIidJm2ts1p9ci5TMxQ) (NI16* pathName, void* security);
typedef N_STDCALL_PTR(NI, tyProc__zKRRdAZhB37HYjlJgTxZRg) (NI hwnd, NI16* lpOperation, NI16* lpFile, NI16* lpParameters, NI16* lpDirectory, NI32 nShowCmd);
typedef NIM_CHAR tyArray__EWK8XzFKXCg2WflN3ijhqA[257];
typedef NIM_CHAR tyArray__4249al09aeC68W9cvqMnjIYOA[129];
typedef NIM_CHAR tyArray__NSMq3FMCIrS8gSbyinBZ8w[14];

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void*, loadLib__Yq5XYz2ycX5V5B9bUM4Uyiw)(NimStringDesc* path, NIM_BOOL globalSymbols);
N_LIB_PRIVATE N_NIMCALL(void*, symAddr__ALH9bdNwXEzg7MPq4PA9csvw)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(NI64, ze64__Ym9bDMq70VeyLEG9cy2hJAlw)(NI32 x);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_2, "Ws2_32.dll", 10);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_5, "kernel32", 8);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_6, "kernel32", 8);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_21, "Ws2_32.dll", 10);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_98, "shell32.dll", 11);
STRING_LITERAL(TM__k6kyf4Co79a84IkK9blFuQVA_99, "shell32.dll", 11);

/* section: NIM_merge_VARS */
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_CONNECTEX__YmR9c9crObjjK9ckt1ygsPQKg = {((NI32) 631375801), ((NI16) -8717), ((NI16) 18016), {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_ACCEPTEX__pwoOiDuyZgHBOLaI2GSBpg = {((NI32) -1254720015), ((NI16) -13396), ((NI16) 4559), {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
}
;
N_LIB_PRIVATE tyObject_GUID__J2WQBMgezjwf6Trblkflgg WSAID_GETACCEPTEXSOCKADDRS__rSjtFMq7pCHQR2EQvcKbDg = {((NI32) -1254720014), ((NI16) -13396), ((NI16) 4559), {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
}
;
N_LIB_PRIVATE tyProc__5ctyytqoGFQ0BA1imFGbVw inet_ntop_real__FVXn9aJ5AOo23ScDsZUc9aZw = NIM_NIL;
N_LIB_PRIVATE void* ws2__hGspZUrVrEMpO9aP9c3dJQPQ;
static void* TM__k6kyf4Co79a84IkK9blFuQVA_3;
tyProc__LGDJfXC77WFm4ami8tbVyg Dl_12827022_;
tyProc__9bc9cLDdaqTE6n5J78feKRYg Dl_12827860_;
tyProc__9cfAa2qMwRsugQ9bZaJfhIcQ Dl_12827640_;
tyProc__aO673xGTLLxou7P7GxoCXA Dl_12826835_;
tyProc__im9buRnIvptJfzdASYMEbBA Dl_12827001_;
tyProc__9bXer9a4ps9aSGctILcxWReVw Dl_12826830_;
static void* TM__k6kyf4Co79a84IkK9blFuQVA_19;
tyProc__As5z9bYt859cLKWaorPRgQYA Dl_12828465_;
tyProc__9aO2cP4IgwjXF8JfUR57CHQ Dl_12828283_;
tyProc__IQbFr9cLT9bipWCXYfwYwjOw Dl_12828288_;
tyProc__m8OtNuKklv1X2vQjXQkzSA Dl_12830067_;
tyProc__2Dt6vzy4xOVEtn3qjtrTDQ Dl_12827624_;
tyProc__dQrdVesp1gLEVufnwKAlGA Dl_12827650_;
tyProc__dQrdVesp1gLEVufnwKAlGA Dl_12827645_;
tyProc__2Dt6vzy4xOVEtn3qjtrTDQ Dl_12827647_;
tyProc__C5kM33gEhlSKPXwfDNHofQ Dl_12826562_;
tyProc__mBVOPXmpGfUrrbA9a5K9cMbQ Dl_12828581_;
tyProc__ox3t5iM0vxm1voo9c2CrxLQ Dl_12826570_;
tyProc__A2Q4AG9aesAd2D8S5BP4y2g Dl_12828588_;
tyProc__uryidYWkntM7ddjZSyxvyQ Dl_12828586_;
tyProc__oew1DfaGl5XhHmnBK0HYXQ Dl_12828566_;
tyProc__P13srMBg9b3d3yEV9aW4NCoA Dl_12826543_;
tyProc__zP2zGemcuVRvOUE82f9a0Pw Dl_12826820_;
tyProc__hHrNIgHA5HNxhRfMx6QeWg Dl_12826592_;
tyProc__9ajZYMGL5GqiRFqiCC367oA Dl_12826546_;
tyProc__9ajZYMGL5GqiRFqiCC367oA Dl_12826554_;
tyProc__FprzxJFfqQdWyyGxiUsmeQ Dl_12826807_;
tyProc__KxeGXN001TReCr89ca9c5bng Dl_12826815_;
tyProc__KHeEdNTR0xu6nVKzb2dFPw Dl_12827018_;
tyProc__lLim4ugM6CVjiaTaa7eXVA Dl_12827456_;
tyProc__ofoySXaAAlxxs9bQS9a1etlg Dl_12827614_;
tyProc__MvjKU9c5nvs0N3IrS4vNgSw Dl_12828470_;
tyProc__IV3cwg4tBg3JP8ITSKt7oQ Dl_12828479_;
tyProc__T129bsPZ4FvuSF4rGFSBKkg Dl_12828304_;
tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w Dl_12828368_;
tyProc__rWrG4X5lbcXQyLNkF9aNWhQ Dl_12828359_;
tyProc__8Py1tJvU9bm83KdBcpIBjeQ Dl_12828400_;
tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w Dl_12828343_;
tyProc__upTK7viB3ItEbrKv1N4qcg Dl_12827004_;
tyProc__2Dt6vzy4xOVEtn3qjtrTDQ Dl_12828597_;
tyProc__HH5OcpN6GzcD9cRu6eeMBGw Dl_12827627_;
tyProc__jwEWAkul5J6p6K0UfXa1tw Dl_12827461_;
tyProc__OOyWBIidJm2ts1p9ci5TMxQ Dl_12827011_;
tyProc__2Dt6vzy4xOVEtn3qjtrTDQ Dl_12827008_;
static void* TM__k6kyf4Co79a84IkK9blFuQVA_96;
tyProc__zKRRdAZhB37HYjlJgTxZRg Dl_12827867_;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(NI64, rdFileTime__DfLqBYlqX7ZqK7NeVOk8ew)(tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw f) {
	NI64 result;
	NI64 T1_;
	NI64 T2_;
	result = (NI64)0;
	T1_ = (NI64)0;
	T1_ = ze64__Ym9bDMq70VeyLEG9cy2hJAlw(f.dwLowDateTime);
	T2_ = (NI64)0;
	T2_ = ze64__Ym9bDMq70VeyLEG9cy2hJAlw(f.dwHighDateTime);
	result = (NI64)(T1_ | (NI64)((NU64)(T2_) << (NU64)(((NI) 32))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, rdFileSize__K9a4TDWuOfvg9cCJzFh9c9cB9bQ)(tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* f) {
	NI64 result;
	NI64 T1_;
	NI64 T2_;
	result = (NI64)0;
	T1_ = (NI64)0;
	T1_ = ze64__Ym9bDMq70VeyLEG9cy2hJAlw((*f).nFileSizeLow);
	T2_ = (NI64)0;
	T2_ = ze64__Ym9bDMq70VeyLEG9cy2hJAlw((*f).nFileSizeHigh);
	result = (NI64)(T1_ | (NI64)((NU64)(T2_) << (NU64)(((NI) 32))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, FD_ZERO__fc638nyQpO9cH1ijJnul9bcg)(tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* s) {
	(*s).fd_count = ((int) 0);
}
N_LIB_PRIVATE N_NIMCALL(void, FD_SET__1WYTU33XIA9apfyIaLFoFkw)(NI socket_0, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* s) {
	{
		if (!((*s).fd_count < ((NI32) 64))) goto LA3_;
		(*s).fd_array[(((NI) ((*s).fd_count)))- 0] = socket_0;
		(*s).fd_count += ((NI) 1);
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(int, FD_ISSET__2ettf7Q5JTgZVmDLhx6ICQ)(NI socket_0, tyObject_TFdSet__lYo1mv6gU9aT1ZE1etM9ceog* set) {
	int result;
	result = (int)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = Dl_12828400_(socket_0, set);
		if (!T3_) goto LA4_;
		result = ((NI32) 1);
	}
	goto LA1_;
	LA4_: ;
	{
		result = ((NI32) 0);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_winleanInit000)(void) {
{
	ws2__hGspZUrVrEMpO9aP9c3dJQPQ = loadLib__Yq5XYz2ycX5V5B9bUM4Uyiw(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_2), NIM_FALSE);
	{
		void* T5_;
		if (!!((ws2__hGspZUrVrEMpO9aP9c3dJQPQ == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = symAddr__ALH9bdNwXEzg7MPq4PA9csvw(ws2__hGspZUrVrEMpO9aP9c3dJQPQ, "inet_ntop");
		inet_ntop_real__FVXn9aJ5AOo23ScDsZUc9aZw = ((tyProc__5ctyytqoGFQ0BA1imFGbVw) (T5_));
	}
	LA3_: ;
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_winleanDatInit000)(void) {

/* section: NIM_merge_DYNLIB_INIT */
if (!((TM__k6kyf4Co79a84IkK9blFuQVA_3 = nimLoadLibrary(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_5)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_6));
	Dl_12827022_ = (tyProc__LGDJfXC77WFm4ami8tbVyg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetModuleFileNameW");
	Dl_12827860_ = (tyProc__9bc9cLDdaqTE6n5J78feKRYg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetSystemTimeAsFileTime");
	Dl_12827640_ = (tyProc__9cfAa2qMwRsugQ9bZaJfhIcQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "MoveFileExW");
	Dl_12826835_ = (tyProc__aO673xGTLLxou7P7GxoCXA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "FormatMessageW");
	Dl_12827001_ = (tyProc__im9buRnIvptJfzdASYMEbBA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "LocalFree");
	Dl_12826830_ = (tyProc__9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetLastError");
if (!((TM__k6kyf4Co79a84IkK9blFuQVA_19 = nimLoadLibrary(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_21)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_2));
	Dl_12828465_ = (tyProc__As5z9bYt859cLKWaorPRgQYA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "WSAStartup");
	Dl_12828283_ = (tyProc__9aO2cP4IgwjXF8JfUR57CHQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "socket");
	Dl_12828288_ = (tyProc__IQbFr9cLT9bipWCXYfwYwjOw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "closesocket");
	Dl_12830067_ = (tyProc__m8OtNuKklv1X2vQjXQkzSA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "WSAIoctl");
	Dl_12827624_ = (tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetFileAttributesW");
	Dl_12827650_ = (tyProc__dQrdVesp1gLEVufnwKAlGA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetCommandLineW");
	Dl_12827645_ = (tyProc__dQrdVesp1gLEVufnwKAlGA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetEnvironmentStringsW");
	Dl_12827647_ = (tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "FreeEnvironmentStringsW");
	Dl_12826562_ = (tyProc__C5kM33gEhlSKPXwfDNHofQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "CreatePipe");
	Dl_12828581_ = (tyProc__mBVOPXmpGfUrrbA9a5K9cMbQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "SetHandleInformation");
	Dl_12826570_ = (tyProc__ox3t5iM0vxm1voo9c2CrxLQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "CreateNamedPipeW");
	Dl_12828588_ = (tyProc__A2Q4AG9aesAd2D8S5BP4y2g) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "CreateFileW");
	Dl_12828586_ = (tyProc__uryidYWkntM7ddjZSyxvyQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetCurrentProcess");
	Dl_12828566_ = (tyProc__oew1DfaGl5XhHmnBK0HYXQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "DuplicateHandle");
	Dl_12826543_ = (tyProc__P13srMBg9b3d3yEV9aW4NCoA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "CloseHandle");
	Dl_12826820_ = (tyProc__zP2zGemcuVRvOUE82f9a0Pw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetStdHandle");
	Dl_12826592_ = (tyProc__hHrNIgHA5HNxhRfMx6QeWg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "CreateProcessW");
	Dl_12826546_ = (tyProc__9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "ReadFile");
	Dl_12826554_ = (tyProc__9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "WriteFile");
	Dl_12826807_ = (tyProc__FprzxJFfqQdWyyGxiUsmeQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "WaitForSingleObject");
	Dl_12826815_ = (tyProc__KxeGXN001TReCr89ca9c5bng) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetExitCodeProcess");
	Dl_12827018_ = (tyProc__KHeEdNTR0xu6nVKzb2dFPw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "SetEnvironmentVariableW");
	Dl_12827456_ = (tyProc__lLim4ugM6CVjiaTaa7eXVA) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "FindFirstFileW");
	Dl_12827614_ = (tyProc__ofoySXaAAlxxs9bQS9a1etlg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "FindClose");
	Dl_12828470_ = (tyProc__MvjKU9c5nvs0N3IrS4vNgSw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "getaddrinfo");
	Dl_12828479_ = (tyProc__IV3cwg4tBg3JP8ITSKt7oQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "freeaddrinfo");
	Dl_12828304_ = (tyProc__T129bsPZ4FvuSF4rGFSBKkg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "connect");
	Dl_12828368_ = (tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "send");
	Dl_12828359_ = (tyProc__rWrG4X5lbcXQyLNkF9aNWhQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "select");
	Dl_12828400_ = (tyProc__8Py1tJvU9bm83KdBcpIBjeQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "__WSAFDIsSet");
	Dl_12828343_ = (tyProc__4YBDaTH9b4xNNXSV9ahdJZ8w) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_19, "recv");
	Dl_12827004_ = (tyProc__upTK7viB3ItEbrKv1N4qcg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "GetCurrentDirectoryW");
	Dl_12828597_ = (tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "DeleteFileW");
	Dl_12827627_ = (tyProc__HH5OcpN6GzcD9cRu6eeMBGw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "SetFileAttributesW");
	Dl_12827461_ = (tyProc__jwEWAkul5J6p6K0UfXa1tw) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "FindNextFileW");
	Dl_12827011_ = (tyProc__OOyWBIidJm2ts1p9ci5TMxQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "CreateDirectoryW");
	Dl_12827008_ = (tyProc__2Dt6vzy4xOVEtn3qjtrTDQ) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_3, "SetCurrentDirectoryW");
if (!((TM__k6kyf4Co79a84IkK9blFuQVA_96 = nimLoadLibrary(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_98)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__k6kyf4Co79a84IkK9blFuQVA_99));
	Dl_12827867_ = (tyProc__zKRRdAZhB37HYjlJgTxZRg) nimGetProcAddr(TM__k6kyf4Co79a84IkK9blFuQVA_96, "ShellExecuteW");
}

