#include "../script_pointers.h"
#include "../../registers.h"
#include "../../../stdafx.h"
#include "../../../ida_macros.h"

__int64 __fastcall sub_8B85C8(_DWORD *a1)
{
	__int64 result; // r3

	GameCall<int>(0x9F2F68, 0xd9fe1c)(a1, 20580LL);
	// since the model hash is just reading the projectile ID model hash, 0x00D4D6D8, we don't need to make a new custom script_pointers
	// this is taken from freedom's front melee sword retain
	result = (unsigned int)0xcdf220; 
	*a1 = (unsigned int)0xcdf220;
	return result;
}

__int64 sub_9F0EF8(_DWORD * v894)
{
	// need to manually change the TOC, 0xd9fe1c
	asm("addis %r2, %r2, 1");
	asm("addi %r2, %r2, -0x44");
	return sub_8B85C8((_DWORD *)v894);
}

void bound_doc_grab_shoot_hasei_sword_remain()
{
	_DWORD *v2 = (_DWORD*)temp_registers[3];
	char v2017[4];
	int v894;
	int result;

	v2017[0] = -1;
	v2017[1] = 0;
	v894 = GameCall<int>(0x9EE338, 0xd8fe60)(17664LL, 128LL, v2017);
	result = sub_9F0EF8((_DWORD *)v894);
	// Restore TOC
	asm("addis %r2, %r2, -1");
	asm("addi %r2, %r2, 0x44");
	*v2 = v894;

	// set return
	temp_registers[3] = result;
}