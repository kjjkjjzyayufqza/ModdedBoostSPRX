// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cellstatus.h>
#include <sys/prx.h>
#include <cell/sysmodule.h>
#include <sys/process.h>
#include <cfloat>
#include <sys/ppu_thread.h>
#include <sys/syscall.h>
#include <sys/tty.h>
#include <ppu_intrinsics.h>
#include <ctype.h>
#include <sys/tty.h>
#include <sys/timer.h>
#include <fastmath.h>
#include <cell/pad.h>
#include <sysutil\sysutil_msgdialog.h>
#include <sys\sys_time.h>
#include <time.h>

#pragma hdrstop

extern "C" int _sys_printf(const char * fmt, ...);
extern "C" int _sys_sprintf(char * buffer, const char * format, ...);
extern "C" int _sys_snprintf(char * buffer, size_t size, const char * format, ...);


#define printf _sys_printf

inline int32_t write_process(void* destination, const void* source, size_t size)
{
	system_call_4(905, (uint64_t)sys_process_getpid(), (uint64_t)destination, (uint64_t)size, (uint64_t)source);
	return_to_user_prog(int32_t);
}

struct opd_t {
	uint32_t sub, toc;
};

struct opd_s
{
	int Sub;
	int Toc;
	opd_s() { this->Sub = this->Toc = __builtin_get_toc(); }
	opd_s(int sub) { this->Sub = sub, this->Toc = __builtin_get_toc(); }
	opd_s(int sub, int toc) {
		this->Sub = sub,
			this->Toc = toc;
	}
};

template <typename T>
T(*GameCall(unsigned int address, unsigned int TOC))(...) {
	int opd[2] = { address, TOC };
	T(*func)(...) = (T(*)(...))&opd;
	return func;
}

template<typename R, typename... Args>
R invoke(uint64_t address, Args... arg)
{
	return ((R(*)(...))&opd_s(address))(arg...);
}

inline void write_protected_memory(int address, int value)
{
	if (*(int*)address != value)
	{
		//printf("Protected Memory write at %d at %d", value, address);
		*(int*)address = value;
	}
}

inline void hookPatch(int address, int destination) {
	int FuncBytes[4];
	destination = *(int*)destination;
	FuncBytes[0] = 0x3D600000 + ((destination >> 16) & 0xFFFF);
	if (destination & 0x8000) FuncBytes[0] += 1;
	FuncBytes[1] = 0x396B0000 + (destination & 0xFFFF);
	FuncBytes[2] = 0x7D6903A6;
	FuncBytes[3] = 0x4E800420;
	printf("Hooking func at: %p\n", address);
	write_process((void*)address, FuncBytes, 4 * 4);
}


inline void hookFunction(int address, int stub, int destination) {
	stub = *(int*)stub;
	int BranchtoAddress = address + (4 * 4);
	int StubData[8];
	StubData[0] = 0x3D600000 + ((BranchtoAddress >> 16) & 0xFFFF);
	if (BranchtoAddress & 0x8000) StubData[0] += 1;
	StubData[1] = 0x396B0000 + (BranchtoAddress & 0xFFFF);
	StubData[2] = 0x7D6903A6;
	std::memcpy(&StubData[3], (void*)address, 4 * 4);
	StubData[7] = 0x4E800420;
	std::memcpy((void*)stub, StubData, 8 * 4);
	hookPatch(address, destination);
}

inline void sleep(usecond_t sec) {
	sys_timer_usleep(sec * 1000);
}
inline void createremotethread(void(*entry)(uint64_t), int priority, int stacksize, const char * name, sys_ppu_thread_t & id) {
	if (!sys_ppu_thread_create(&id, entry, 0, priority, stacksize, 0, name))
		printf("remote thread '%s' has been created\n", name);
}
/// std rebuilds
inline void * std::memcpy(void * address, const void * data, size_t size) { system_call_4(905, (uint64_t)sys_process_getpid(), (uint64_t)address, size, (uint64_t)data);	__dcbst(address);	__sync(); __isync(); return_to_user_prog(void*); }
//inline void std::nop(int32_t address) {
//	*(int*)(address) = 0x60000000;
//}

inline void * std::malloc(size_t size) { sys_addr_t l_uiAddr;	size = ((size + 65536) / 65536) * 65536;	sys_memory_allocate(size, SYS_MEMORY_PAGE_SIZE_64K, &l_uiAddr);	return (void*)l_uiAddr; }
inline void std::free(void * ptr) { sys_memory_free((sys_addr_t)ptr); }
inline void * operator new(size_t s){
	void * ptr = malloc(s);
	printf("OPERATOR NEW CALLED NEW PTR : %x\n", ptr);
	if (!ptr)
		printf("ERROR: FAILED TO ALLOCATE NEW PTR\n");
	return ptr;
}

