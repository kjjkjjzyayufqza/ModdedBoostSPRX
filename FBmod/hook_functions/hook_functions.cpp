#include "stdafx.h"
#include "hook_functions.h"
#include "projectile_system/projectile_system.h"
#include "burst_system/general_Burst_Damage_Check_hook.h"
#include "burst_system/burst_Increment_Check_hook.h"
#include "burst_system/get_non_Full_Burst_Boost_Increase_Percentage_hook.h"
#include "burst_system/get_Full_Burst_Boost_Increase_Percentage_hook.h"
#include "burst_system/read_Burst_Damage_Multiplier_hook.h"
#include "ammo_system/ammoEnumReadInject.h"
#include "unit_initializations.h"
#include "registers.h"
#include "bypass_BLJS10250_patch_size_limit_hack.h"
#include "new_type_script_sys_74_hook.h"
#include "unit_initializations/unit_initializations.h"

void main_hook_func();

void hook()
{
	// Constants:
	set_constant_non_full_Burst_Boost_Recover_Percentage();
	set_constant_full_Burst_Boost_Recover_Percentage();

	init_custom_projectile_id();
	init_custom_initialization_unit_id();

	// TOC for 0x9EDE98 d7ff30 - not used, too hard to use.
	// hookPatch(0x009EDE98, (int)Projectile_ID_Check);

	// Writing the main_hook_func function pointer to a read/writeable location
	// The theory is that we make any instruction that we want to hook go through main_hook_func, and from there we branch to userland code.
	// TODO use define to define a hook point instead of hard coding the address here.
	// This EBOOT region should be r/w capable
	write_protected_memory(0xc56020, *(int*)main_hook_func); // write the main func pointer to this location
	//write_protected_memory(0xc56024, (int)temp_registers); // debug

	//printf("get_hook_func_pointers_pointer: %p \n", *(int*)get_temp_registers_pointer);

	// The old way of doing it by just ignoring the value of r17 is not correct, so we have to find a way to store it
	// Unfortunately storing it anywhere in arbitary memory will need registry changes, so the best we can do is to find a sacrificial register
	// Hence, we need to find a way to store the value of original sacrificial register r17's value on somewhere without changing anything in registry values
	// Fortunately, r13 is Small Data Area, which .sdata files uses (mostly unused?)
	// This is always a valid pointer to throw garbage in, provided we need to have luck that the compiler does not use this section at all.
	// To minimize problem, a 0x1000 offset is added to the pointer so that it is far enough to maybe not cause problems.
	// This is not a perfect solution, but is way better than ignoring the values on r17.
	// http://refspecs.linux-foundation.org/elf/elfspec_ppc.pdf
	// https://reverseengineering.stackexchange.com/questions/21944/powerpc-toc-and-sda
	// https://devblogs.microsoft.com/oldnewthing/20180817-00/?p=99515
	// http://www.csit-sun.pub.ro/~cpop/Documentatie_SMP/Motorola_PowerPC/PowerPc/GenInfo/pemch2.pdf
	// https://www.ibm.com/docs/en/aix/7.1?topic=overview-register-usage-conventions
	write_protected_memory(0xc18d00, 0x922D1000); // stw %r17, 0x1000(%r13)
	// read pointer from 0xc56020 and bctr to main_hook_func
	write_protected_memory(0xc18d04, 0x3E2000C5); // lis r17, 0x00c5
	write_protected_memory(0xc18d08, 0x62316020); // ori r17, r17, 0x6000
	write_protected_memory(0xc18d0c, 0x82310000); // lwz r17, 0(r17)
	write_protected_memory(0xc18d10, 0x7e2903a6); // mtctr r17
	// restore the r17 register original value
	write_protected_memory(0xc18d14, 0x822D1000); // lwz %r17, 0x1000(%r13)
	write_protected_memory(0xc18d18, 0x4E800420); // bctr

	// Add any future hook points here:
	// You can get the jump opcode from IDA, just bl to 0xc18d00 will do the trick
	// For hooking into burst gauge increment
	write_protected_memory(0x57a9f4, 0x4869E30D); // bl 0xc18d00

	// For hooking into 0x57aa1c, overrides the check on EX Burst increment writing, for the case of Cross Burst Fighting Burst.
	write_protected_memory(0x57aa1c, 0x4869E2E5); // bl 0xc18d00

	// For hooking into boost increment on burst
	write_protected_memory(0x57b848, 0x4869D4B9); // bl 0xc18d00
	write_protected_memory(0x57bec0, 0x4869CE41); // bl 0xc18d00

	// For hooking into burst multipliers
	write_protected_memory(0x613de0, 0x48604F21); // bl 0xc18d00

	// For hooking into projectile ID checks
	//write_protected_memory(0x7c6a18, 0x484522E9); // bl 0xc18d00
	write_protected_memory(0x74cf34, 0x484CBDCD); // bl 0xc18d00

	// For hooking into ammo data read enum (5 ammo change)
	//write_protected_memory(0x128650, 0x48AF06B1); // bl 0xc18d00

	// Temporary fix for sys_22(0x5, to account for only max 4 ammmo in the game
	write_protected_memory(0x65785c, 0x485C14A5); // bl 0xc18d00
	
	// Unit Initializations
	write_protected_memory(0x4ca0f8, 0x4874EC09); // bl 0xc18d00

	write_protected_memory(0xedc78, 0x48B2B089); // bl 0xc18d00

	// new_type_script_sys_74_hook
	write_protected_memory(0x660470, 0x485B8891); // bl 0xc18d00

	// ModeIndexWrite
	write_protected_memory(0x660428, 0x485B88d9); // bl 0xc18d00

	printf("burst_Increment_Check_hook: %d \n", *(int*)burst_Increment_Check_hook);
	printf("general_Burst_Check_hook: %d \n", *(int*)general_Burst_Check_hook);
	printf("get_non_Full_Burst_Boost_Increase_Percentage_hook: %d \n", *(int*)get_non_Full_Burst_Boost_Increase_Percentage_hook);
	printf("get_Full_Burst_Boost_Increase_Percentage_hook: %d \n", *(int*)get_Full_Burst_Boost_Increase_Percentage_hook);
	printf("read_Burst_Damage_Multiplier_hook: %d \n", *(int*)read_Burst_Damage_Multiplier_hook);
	printf("projectile_ID_Check_hook: %d \n", *(int*)projectile_id_check_hook);
	printf("unit_initializations: %d \n", *(int*)sub_4DDFF4);
	printf("ModeIndexChange: %d \n", *(int*)ModeIndexChange);
	printf("Hooks Loaded\n");
}

// Add any future jump points here
// r0 is the return point, aka the address after the hook instruction
void jump()
{
	// we retrieve r0 from temp_registers, and check the linkage address.
	int r0 = temp_registers[0];
	switch (r0)
	{
		case 0x57AA20:
			burst_Increment_Check_hook();
			break;
		case 0x57a9f8:
			// Original instruction copies r28 to r3
			temp_registers[3] = temp_registers[28];
			general_Burst_Check_hook();
			break;
		case 0x57bec4:
			get_non_Full_Burst_Boost_Increase_Percentage_hook();
			break;
		case 0x57B84C:
			get_Full_Burst_Boost_Increase_Percentage_hook();
			break;
		case 0x613de4:
			//printf("r12: %d", temp_registers[9]);
			//printf("r12: %d", temp_registers[12]);
			//printf("r12: %d", temp_registers[22]);
			read_Burst_Damage_Multiplier_hook();
			break;
		case 0x74cf38:
			bool is_custom_projectile = false;

			for (int i = 0; i < 5000; i++){
				if (custom_projectile_id[i] == temp_registers[4]){
					is_custom_projectile = true;
					break;
				}
			}

			if (is_custom_projectile)
			{
				temp_registers[2] == 0xd8fe60;
				int r14 = temp_registers[14];
				int r15 = temp_registers[15];
				int r16 = temp_registers[16];
				int r17 = temp_registers[17];
				int r18 = temp_registers[18];
				int r19 = temp_registers[19];
				int r20 = temp_registers[20];
				int r21 = temp_registers[21];
				int r22 = temp_registers[22];
				int r23 = temp_registers[23];
				int r24 = temp_registers[24];
				int r25 = temp_registers[25];
				int r26 = temp_registers[26];
				int r27 = temp_registers[27];
				int r28 = temp_registers[28];
				int r29 = temp_registers[29];
				int r30 = temp_registers[30];
				int r31 = temp_registers[31];
				double f31 = temp_float_registers[31];

				/*
				int r14 = temp_registers[14];
				int r31 = temp_registers[31];
				int r24 = temp_registers[24];
				int r25 = temp_registers[25];
				int r26 = temp_registers[26];
				int r27 = temp_registers[27];
				int r28 = temp_registers[28];
				int r29 = temp_registers[29];
				double f31 = temp_float_registers[31];
				*/

				temp_registers[31] = temp_registers[3];
				projectile_id_check_hook(); // return temp_registers[3] should be handled by the func inside
				// 11e1ed8

				/*
				temp_registers[31] = r31;
				temp_registers[24] = r24;
				temp_registers[25] = r25;
				temp_registers[26] = r26;
				temp_registers[27] = r27;
				temp_registers[28] = r28;
				temp_registers[29] = r29;
				*/

				temp_registers[14] = r14;
				temp_registers[15] = r15;
				temp_registers[16] = r16;
				temp_registers[17] = r17;
				temp_registers[18] = r18;
				temp_registers[19] = r19;
				temp_registers[20] = r20;
				temp_registers[21] = r21;
				temp_registers[22] = r22;
				temp_registers[23] = r23;
				temp_registers[24] = r24;
				temp_registers[25] = r25;
				temp_registers[26] = r26;
				temp_registers[27] = r27;
				temp_registers[28] = r28;
				temp_registers[29] = r29;
				temp_registers[30] = r30;
				temp_registers[31] = r31;

				temp_float_registers[31] = f31;
			}
			else
			{
				// 11e1ad4
				temp_registers[3] = GameCall<int>(0x9ede98, 0xd7ff30)((_DWORD)temp_registers[3], temp_registers[4]);
			}
			break;
			/*
		case 0x7c6a1c: // 11e1d10
			// Original write
			//*(int*)(temp_registers[1] + 0xd60) = temp_registers[29];
			projectile_ID_Check_hook();

			// make cr7 to have the original value in case the cr is changed.
			//get_temp_registers_pointer();  // Branch to get_temp_registers_pointer, which will override the r3 with the pointer.
			// r3 will now have the pointer to the temp_registers_pointer 
			//asm("mr %r17, %r3"); // transfer the pointer to r17
			//asm("lwz %r18, 0x10(%r17)");
			//asm("cmpwi %cr7, %r18, 0x477C");

			break;
			*/

		case 0x128654: // Ammo read (change to 5 max)
			//int r5 = *(int*)(temp_registers[23] + 0x1c);
			int r31 = temp_registers[31];
			ammo_read_fifth_enum();
			temp_registers[29] = -0x4160;
			temp_registers[27] = 0;
			//temp_registers[5] = r5;
			temp_registers[31] = r31 + 0x4; // The code hard coded the offset, and since we added a new slot we need to add a 0x4 offset.
			break;

		case 0x657860: // temporary sys_22(0x5 fix
			int ammo_index = temp_registers[8];
			if (ammo_index >= 5)
			{
				// r6 stores the arguments int32
				// to change the first arg, we need to write it manually.
				*(int*)(temp_registers[6]) = 0x4;
				temp_registers[8] = 4;
			}
			// Original opcode
			temp_registers[29] = temp_registers[4];
			break;
		case 0x4ca0fc:
			bool is_custom_unit_id = false;

			const int unit_id = *reinterpret_cast<int*>(temp_registers[3]);
			for (int i = 0; i < 500; i++){
				if (custom_initialization_unit_id[i] == unit_id){
					is_custom_unit_id = true;
					break;
				}
			}
		
			if (is_custom_unit_id)
			{
				retrieve_registers();
				initialize_unit(temp_registers[3], unit_id);
			}
			else
			{
				retrieve_registers();
				temp_registers[3] = GameCall<int>(0x4DDFF4, 0xd6ff70)(LODWORD(temp_registers[3]));
			}

			//temp_registers[3] = GameCall<int>(0x4DDFF4, 0xd6ff70)(LODWORD(temp_registers[3]));
			save_registers();
			break;
		case 0xedc7c:
			// For BLJS10250, if the combined update psarc exceeds 3.2gb, it will cause the game to not run since it thinks the game data is corrupted
			// The culprit is somehow the header file of the EXFB.psarc file inside the dev_hdd0/game/BLJS10250DATA/USRDIR is not properly populated if the patch file size is too big
			// This causes pointers passed into sub_9e5dc8 to be not properly populated, at instruction 0xedc84, thus returning a -1 r3
			// This will lead to 0xeddb0, where the r3 is set to 0 and returned to 0xede60 where a check of r3 is done
			// If r3 is 0, it will go to 0xee054 to call sub_51853c where it gives the cell Data Error.
			// Hence, we just need to populate the address with the fixed EXFB.psarc header, and it will skip this check.
			temp_registers[3] = temp_registers[29];
			bypass_EXFB_psarc_check_hack();
			break;
		case 0x660474:
			temp_registers[3] = temp_registers[31];
			no_boost_index_change();
			break;
		case 0x66042c:
			ModeIndexChange();
			temp_registers[6] = temp_registers[7] + temp_registers[11];
			break;
		default:
			break;
	}
}

void main_hook_func()
{
	// This is the func that stores all of the jump pointers.
	// Instead of assigning a dynamic branch location, this func position is always 0x11e0030
	// Thus hooking this function is enough for most cases, and we deal with the target location here.

	// We need to store all of the registers to a temp location, so that we can retrieve them when branching back.
	// This is assuming r17 is not used. (Depreceated)
	// https://www.cs.uaf.edu/2010/fall/cs301/lecture/12_01_PowerPC.html

	// The old way of doing it by just ignoring the value of r17 is not correct, so we have to find a way to store it
	// Unfortunately storing it anywhere in arbitary memory will need registry changes, so the best we can do is to find a sacrificial register
	// Hence, we need to find a way to store the value of original sacrificial register r17's value on somewhere without changing anything in registry values
	// Fortunately, r13 is Small Data Area, which .sdata files uses (mostly unused?)
	// This is always a valid pointer to throw garbage in, provided we need to have luck that the compiler does not use this section at all.
	// To minimize problem, a 0x1000 offset is added to the pointer so that it is far enough to maybe not cause problems.
	// This is not a perfect solution, but is way better than ignoring the values on r17.
	// http://refspecs.linux-foundation.org/elf/elfspec_ppc.pdf
	// https://reverseengineering.stackexchange.com/questions/21944/powerpc-toc-and-sda
	// https://devblogs.microsoft.com/oldnewthing/20180817-00/?p=99515
	// http://www.csit-sun.pub.ro/~cpop/Documentatie_SMP/Motorola_PowerPC/PowerPc/GenInfo/pemch2.pdf
	// https://www.ibm.com/docs/en/aix/7.1?topic=overview-register-usage-conventions
	asm("stw %r17, 0x1000(%r13)");

	asm("mr %r17, %r3"); // The pointer to the arrays will be stored on r3, so we need to store the value of r3 to r17 for temp storage.
	get_temp_registers_pointer();  // Branch to get_temp_registers_pointer, which will override the r3 with the pointer.

	// r3 will now have the pointer to the temp_registers_pointer 
	asm("stw %r17, 0xc(%r3)"); // store the original value of r3 (which is now stored in r17) to the array. 

	asm("mr %r17, %r3"); // transfer the pointer to r17

	asm("stw %r0, 0(%r17)");
	asm("stw %r1, 0x4(%r17)");
	asm("stw %r2, 0x8(%r17)");
	asm("stw %r4, 0x10(%r17)");
	asm("stw %r5, 0x14(%r17)");
	asm("stw %r6, 0x18(%r17)");
	asm("stw %r7, 0x1c(%r17)");
	asm("stw %r8, 0x20(%r17)");
	asm("stw %r9, 0x24(%r17)");
	asm("stw %r10, 0x28(%r17)");
	asm("stw %r11, 0x2c(%r17)");
	asm("stw %r12, 0x30(%r17)");
	asm("stw %r13, 0x34(%r17)");
	asm("stw %r14, 0x38(%r17)");
	asm("stw %r15, 0x3c(%r17)");
	asm("stw %r16, 0x40(%r17)");
	//asm("st %r17, 0x44(%r17)");
	asm("stw %r18, 0x48(%r17)");
	asm("stw %r19, 0x4c(%r17)");
	asm("stw %r20, 0x50(%r17)");
	asm("stw %r21, 0x54(%r17)");
	asm("stw %r22, 0x58(%r17)");
	asm("stw %r23, 0x5c(%r17)");
	asm("stw %r24, 0x60(%r17)");
	asm("stw %r25, 0x64(%r17)");
	asm("stw %r26, 0x68(%r17)");
	asm("stw %r27, 0x6c(%r17)");
	asm("stw %r28, 0x70(%r17)");
	asm("stw %r29, 0x74(%r17)");
	asm("stw %r30, 0x78(%r17)");
	asm("stw %r31, 0x7c(%r17)");

	get_temp_float_registers_pointer();  // Branch to get_temp_float_registers_pointer, which will override the r3 with the pointer.

	asm("mr %r17, %r3"); // transfer the get_temp_float_registers_pointer form r3 to r17 

	asm("stfs %f0, 0(%r17)");
	asm("stfs %f1, 0x4(%r17)");
	asm("stfs %f2, 0x8(%r17)");
	asm("stfs %f4, 0x10(%r17)");
	asm("stfs %f5, 0x14(%r17)");
	asm("stfs %f6, 0x18(%r17)");
	asm("stfs %f7, 0x1c(%r17)");
	asm("stfs %f8, 0x20(%r17)");
	asm("stfs %f9, 0x24(%r17)");
	asm("stfs %f10, 0x28(%r17)");
	asm("stfs %f11, 0x2c(%r17)");
	asm("stfs %f12, 0x30(%r17)");
	asm("stfs %f13, 0x34(%r17)");
	asm("stfs %f14, 0x38(%r17)");
	asm("stfs %f15, 0x3c(%r17)");
	asm("stfs %f16, 0x40(%r17)");
	asm("stfs %f17, 0x44(%r17)");
	asm("stfs %f18, 0x48(%r17)");
	asm("stfs %f19, 0x4c(%r17)");
	asm("stfs %f20, 0x50(%r17)");
	asm("stfs %f21, 0x54(%r17)");
	asm("stfs %f22, 0x58(%r17)");
	asm("stfs %f23, 0x5c(%r17)");
	asm("stfs %f24, 0x60(%r17)");
	asm("stfs %f25, 0x64(%r17)");
	asm("stfs %f26, 0x68(%r17)");
	asm("stfs %f27, 0x6c(%r17)");
	asm("stfs %f28, 0x70(%r17)");
	asm("stfs %f29, 0x74(%r17)");
	asm("stfs %f30, 0x78(%r17)");
	asm("stfs %f31, 0x7c(%r17)");

	// write the actual r17
	// transfer the location of the array to r18
	asm("mr %r18, %r17");

	// load the r17 from the small data area and store it
	asm("lwz %r17, 0x1000(%r13)");
	asm("stw %r17, 0x44(%r18)");

	// ------------------------------------ FREE LALALAND ---------------------------------------------

	// jump logic 
	jump();

	/*
	unsigned int main_unit_memory_region_pointer = temp_registers[20];
	printf("Main mem region: %p \n", main_unit_memory_region_pointer);

	int boost = *(int*)(main_unit_memory_region_pointer + 0x998);
	printf("boost: %p \n", boost);
	*/

	// Float registers
	get_temp_float_registers_pointer();  // Branch to get_temp_registers_pointer, which will override the r3 with the pointer.

	asm("stw %r17, 0x1000(%r13)");

	asm("mr %r17, %r3"); // transfer the pointer to r17

	// Load the registers with their original values (or modified) before branching back.
	asm("lfs %f0, 0(%r17)");
	asm("lfs %f1, 0x4(%r17)");
	asm("lfs %f2, 0x8(%r17)");
	asm("lfs %f3, 0xc(%r17)");
	asm("lfs %f4, 0x10(%r17)");
	asm("lfs %f5, 0x14(%r17)");
	asm("lfs %f6, 0x18(%r17)");
	asm("lfs %f7, 0x1c(%r17)");
	asm("lfs %f8, 0x20(%r17)");
	asm("lfs %f9, 0x24(%r17)");
	asm("lfs %f10, 0x28(%r17)");
	asm("lfs %f11, 0x2c(%r17)");
	asm("lfs %f12, 0x30(%r17)");
	asm("lfs %f13, 0x34(%r17)");
	asm("lfs %f14, 0x38(%r17)");
	asm("lfs %f15, 0x3c(%r17)");
	asm("lfs %f16, 0x40(%r17)");
	asm("lfs %f17, 0x44(%r17)");
	asm("lfs %f18, 0x48(%r17)");
	asm("lfs %f19, 0x4c(%r17)");
	asm("lfs %f20, 0x50(%r17)");
	asm("lfs %f21, 0x54(%r17)");
	asm("lfs %f22, 0x58(%r17)");
	asm("lfs %f23, 0x5c(%r17)");
	asm("lfs %f24, 0x60(%r17)");
	asm("lfs %f25, 0x64(%r17)");
	asm("lfs %f26, 0x68(%r17)");
	asm("lfs %f27, 0x6c(%r17)");
	asm("lfs %f28, 0x70(%r17)");
	asm("lfs %f29, 0x74(%r17)");
	asm("lfs %f30, 0x78(%r17)");
	asm("lfs %f31, 0x7c(%r17)");


	// Normal Registers
	get_temp_registers_pointer();  // Branch to get_temp_registers_pointer, which will override the r3 with the pointer.

	asm("mr %r17, %r3"); // transfer the pointer to r17

	// Load the registers with their original values (or modified) before branching back.
	asm("lwz %r0, 0(%r17)");
	asm("lwz %r1, 0x4(%r17)");
	asm("lwz %r2, 0x8(%r17)");
	asm("lwz %r3, 0xc(%r17)");
	asm("lwz %r4, 0x10(%r17)");
	asm("lwz %r5, 0x14(%r17)");
	asm("lwz %r6, 0x18(%r17)");
	asm("lwz %r7, 0x1c(%r17)");
	asm("lwz %r8, 0x20(%r17)");
	asm("lwz %r9, 0x24(%r17)");
	asm("lwz %r10, 0x28(%r17)");
	asm("lwz %r11, 0x2c(%r17)");
	asm("lwz %r12, 0x30(%r17)");
	asm("lwz %r13, 0x34(%r17)");
	asm("lwz %r14, 0x38(%r17)");
	asm("lwz %r15, 0x3c(%r17)");
	asm("lwz %r16, 0x40(%r17)");
	asm("lwz %r18, 0x48(%r17)");
	asm("lwz %r19, 0x4c(%r17)");
	asm("lwz %r20, 0x50(%r17)");
	asm("lwz %r21, 0x54(%r17)");
	asm("lwz %r22, 0x58(%r17)");
	asm("lwz %r23, 0x5c(%r17)");
	asm("lwz %r24, 0x60(%r17)");
	asm("lwz %r25, 0x64(%r17)");
	asm("lwz %r26, 0x68(%r17)");
	asm("lwz %r27, 0x6c(%r17)");
	asm("lwz %r28, 0x70(%r17)");
	asm("lwz %r29, 0x74(%r17)");
	asm("lwz %r30, 0x78(%r17)");
	asm("lwz %r31, 0x7c(%r17)");

	// load the r17 from the small data area
	asm("lwz %r17, 0x1000(%r13)");

	//asm("li %r17, 0"); // hopefully r17 will always be 0.
}
















/*

void testNewHook(int r3, int r4, int r5, int r6, int r7, int r8, int r9) {
if (r3) {
printf("Pointer | %p\nWeapon index 0x%X\n", r3, r4);
}
//ProjectileIDCheck_f(r3, r4, r5, r6, r7, r8, r9);
}




void ProjectileIDCheck(
unsigned int r3,
unsigned int r4,
unsigned int r5,
unsigned int r6,
unsigned int r7,
unsigned int r8,
unsigned int r9,
unsigned int r10,
unsigned int r11,
unsigned int r12,
unsigned int r13,
unsigned int r14,
unsigned int r15,
unsigned int r16,
unsigned int r17,
unsigned int r18,
unsigned int r19,
unsigned int r20,
unsigned int r21,
unsigned int r22,
unsigned int r23,
unsigned int r24,
unsigned int r25,
unsigned int r26,
unsigned int r27,
unsigned int r28,
unsigned int r29,
unsigned int r30,
unsigned int r31
)
{
GameCall<int>(0x007C69E4, 0xd8fe60)(
r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31
//f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31
);
}

void Projectile_ID_Check(
unsigned int r3,
unsigned int r4,
unsigned int r5,
unsigned int r6,
unsigned int r7,
unsigned int r8,
unsigned int r9,
unsigned int r13
/*
float f1,
float f2,
float f3,
float f4,
float f5,
float f6,
float f7,
float f8,
float f9,
float f10,
float f11,
float f12,
float f13,
float f14,
float f15,
float f16,
float f17,
float f18,
float f19,
float f20,
float f21,
float f22,
float f23,
float f24,
float f25,
float f26,
float f27,
float f28,
float f29,
float f30,
float f31

)
{
	unsigned int r10;
	unsigned int r11;
	unsigned int r12;
	unsigned int r14;
	unsigned int r15;
	unsigned int r16;
	unsigned int r17;
	unsigned int r18;
	unsigned int r19;
	unsigned int r20;
	unsigned int r21;
	unsigned int r22;
	unsigned int r23;
	unsigned int r24;
	unsigned int r25;
	unsigned int r26;
	unsigned int r27;
	unsigned int r28;
	unsigned int r29;
	unsigned int r30;
	unsigned int r31;

	printf("It's working! :D %p\n", *(int*)Projectile_ID_Check);
	//printf("redirectFunc:  %p\n", *(int*)get_hook_func_pointers_pointer);
	//printf("burst_Increment_Check_hook:  %p\n", *(int*)burst_Increment_Check_hook);
	//printf("temp_registers:  %p\n", (int*)temp_registers);

	printf("r3: %p\n", r3);
	printf("r4: %p\n", r4);
	printf("r5: %p\n", r5);
	printf("r6: %p\n", r6);
	printf("r7: %p\n", r7);
	printf("r8: %p\n", r8);
	printf("r9: %p\n", r9);
	printf("r13: %p\n", r13);

	r10 = 0;
	r11 = 0;
	r12 = 0;
	r14 = 0;
	r15 = 0;
	r16 = 0;
	r17 = 0;
	r18 = 0;
	r19 = 0;
	r20 = 0;
	r21 = 0x41804000; // Constant??
	r22 = 0x40;
	r23 = *(int*)(r5 + 0x94); // The projectile hash
	r24 = 0;
	r25 = 0x1;
	r26 = 0;
	r27 = 0x1;
	r28 = 0;
	r29 = r5 + 0x60;
	r30 = r3 - 0x90;
	r31 = *(int*)(r5 + 0x9C); // The unit base memory region pointer (you can find in 0x40091000) e.g. 41EB0000

	printf("r10: %p\n", r10);
	printf("r11: %p\n", r11);
	printf("r12: %p\n", r12);
	printf("r14: %p\n", r14);
	printf("r15: %p\n", r15);
	printf("r16: %p\n", r16);
	printf("r17: %p\n", r17);
	printf("r18: %p\n", r18);
	printf("r19: %p\n", r19);
	printf("r20: %p\n", r20);
	printf("r21: %p\n", r21);
	printf("r22: %p\n", r22);
	printf("r23: %p\n", r23);
	printf("r24: %p\n", r24);
	printf("r25: %p\n", r25);
	printf("r26: %p\n", r26);
	printf("r27: %p\n", r27);
	printf("r28: %p\n", r28);
	printf("r29: %p\n", r29);
	printf("r30: %p\n", r30);
	printf("r31: %p\n", r31);
	/*
	unsigned int f1d = (unsigned int)f1;
	unsigned int f2d = (unsigned int)f2;
	unsigned int f3d = (unsigned int)f3;
	unsigned int f4d = (unsigned int)f4;
	unsigned int f5d = (unsigned int)f5;
	unsigned int f6d = (unsigned int)f6;
	unsigned int f7d = (unsigned int)f7;
	unsigned int f8d = (unsigned int)f8;
	unsigned int f9d = (unsigned int)f9;
	unsigned int f10d = (unsigned int)f10;
	unsigned int f11d = (unsigned int)f11;
	printf("f1: %p\n", f1d);
	printf("f2: %p\n", f2d);
	printf("f3: %p\n", f3d);
	printf("f4: %p\n", f4d);
	printf("f5: %p\n", f5d);
	printf("f6: %p\n", f6d);
	printf("f7: %p\n", f7d);
	printf("f8: %p\n", f8d);
	printf("f9: %p\n", f9d);
	printf("f10: %p\n", f10d);
	

	ProjectileIDCheck(
		r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
	//f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20, f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31
}
*/




/*
void StuffStub(...) { __nop; }
void Stuff(int r3) { //0x9EC388
int Func[4] = { 0xF8410028, 0x3C42FFFE, 0x38420208, 0x4B738448 };
//int tewt = ((r3 + 0x4) + 0x74);
//int newtewt = (tewt / 2);
int CharStruct = r3 + 4;
*(int*)(CharStruct + 0x74) = 0x532;
printf("It's working! :D %p\n", &Stuff);
write_process(&Stuff, Func, size_t(Func));
// alright!
}

//0x0074CF34
///Need to re-write to jump where we want


void Projectile_ID_Check_Stub(int r1, int r2, int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10);
uint32_t* Projectile_ID_Check_Stub_2;
void thing() {
uint32_t origData[4];
origData[0] = 0xF8410028;
origData[1] = 0x3C420001;
origData[2] = 0x3842FF30;
origData[3] = 0x4BDD8B40; //0x4BDD8B40
memcpy((void*)&Projectile_ID_Check_Stub_2, origData, 0x10);
}

*/


// Get back to the original func
//printf("Stub1: %p\n", *(int*)Projectile_ID_Check_Stub);
//printf("Stub2: %p\n", *(int*)Projectile_ID_Check_Stub_2);
//int size = *(int*)Projectile_ID_Check_Stub - *(int*)Projectile_ID_Check;
//int address = *(int*)Projectile_ID_Check + size - (4 * 4);
//printf("Size: %p\n", size);


//thing();


//printf("Hooking func at: %p\n", address);


//address = *(int*)Projectile_ID_Check_Stub;
//int FuncBytes[4];
//int destination = 0x7C69E4;
//FuncBytes[0] = 0x3D600000 + ((destination >> 16) & 0xFFFF);
//if (destination & 0x8000) FuncBytes[0] += 1;
//FuncBytes[1] = 0x396B0000 + (destination & 0xFFFF);
//FuncBytes[2] = 0x7D6903A6;
//FuncBytes[3] = 0x4E800420;

//printf("Hooking func at: %p\n", address);
//write_process((void*)address, FuncBytes, 4 * 4);
//
////invoke<float>(0x7C69E4, r1, r2, r3, r4, r5,r6, r7, r8, r9, r10);
//Projectile_ID_Check_Stub(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10);

//write_process((void*)address, Func, 4 * 4);


/*
// We need to store all of the registers to a temp location.

// https://www.cs.uaf.edu/2010/fall/cs301/lecture/12_01_PowerPC.html
asm("mr %r17, %r3"); // The pointer to the array will be stored on r3, so we can store the value of r3 to r17 for temp storage.
get_temp_registers_pointer();  // Branch to get_temp_registers_pointer, which will override the r3 with the pointer.
//asm("bl 0x11e0000");

// r3 will now have the pointer to the temp_registers_pointer
asm("stw %r17, 0xc(%r3)"); // store the original value of r3 (which is now stored in r17) to the array.

asm("mr %r17, %r3"); // transfer the pointer to r17

asm("stw %r0, 0(%r17)");
asm("stw %r1, 0x4(%r17)");
asm("stw %r2, 0x8(%r17)");
asm("stw %r4, 0x10(%r17)");
asm("stw %r5, 0x14(%r17)");
asm("stw %r6, 0x18(%r17)");
asm("stw %r7, 0x1c(%r17)");
asm("stw %r8, 0x20(%r17)");
asm("stw %r9, 0x24(%r17)");
asm("stw %r10, 0x28(%r17)");
asm("stw %r11, 0x2c(%r17)");
asm("stw %r12, 0x30(%r17)");
asm("stw %r13, 0x34(%r17)");
asm("stw %r14, 0x38(%r17)");
asm("stw %r15, 0x3c(%r17)");
asm("stw %r16, 0x40(%r17)");
//asm("st %r17, 0x44(%r17)");
asm("stw %r18, 0x48(%r17)");
asm("stw %r19, 0x4c(%r17)");
asm("stw %r20, 0x50(%r17)");
asm("stw %r21, 0x54(%r17)");
asm("stw %r22, 0x58(%r17)");
asm("stw %r23, 0x5c(%r17)");
asm("stw %r24, 0x60(%r17)");
asm("stw %r25, 0x64(%r17)");
asm("stw %r26, 0x68(%r17)");
asm("stw %r27, 0x6c(%r17)");
asm("stw %r28, 0x70(%r17)");
asm("stw %r29, 0x74(%r17)");
asm("stw %r30, 0x78(%r17)");
asm("stw %r31, 0x7c(%r17)");
*/


/*
// Get the redirect func location
asm("mr %r17, %r3"); // The pointer to the array will be stored on r3, so we can store the value of r3 to r17 for temp storage.
get_temp_registers_pointer();
//asm("bl 0x11e0000"); // Branch to get_temp_registers_pointer, which will override the r3 with the pointer.

// r3 will now have the pointer to the temp_registers_pointer
asm("stw %r17, 0xc(%r3)"); // store the original value of r3 (which is now stored in r17) to the array.

asm("mr %r17, %r3"); // transfer the pointer to r17

/*
asm("lis %r17, 0x011f");
asm("ori %r17, %r17, 0x00f0");

asm("lwz %r0, 0(%r17)");
asm("lwz %r1, 0x4(%r17)");
asm("lwz %r2, 0x8(%r17)");
asm("lwz %r3, 0xc(%r17)");
asm("lwz %r4, 0x10(%r17)");
asm("lwz %r5, 0x14(%r17)");
asm("lwz %r6, 0x18(%r17)");
asm("lwz %r7, 0x1c(%r17)");
asm("lwz %r8, 0x20(%r17)");
asm("lwz %r9, 0x24(%r17)");
asm("lwz %r10, 0x28(%r17)");
asm("lwz %r11, 0x2c(%r17)");
asm("lwz %r12, 0x30(%r17)");
asm("lwz %r13, 0x34(%r17)");
asm("lwz %r14, 0x38(%r17)");
asm("lwz %r15, 0x3c(%r17)");
asm("lwz %r16, 0x40(%r17)");
asm("lwz %r18, 0x48(%r17)");
asm("lwz %r19, 0x4c(%r17)");
asm("lwz %r20, 0x50(%r17)");
asm("lwz %r21, 0x54(%r17)");
asm("lwz %r22, 0x58(%r17)");
asm("lwz %r23, 0x5c(%r17)");
asm("lwz %r24, 0x60(%r17)");
asm("lwz %r25, 0x64(%r17)");
asm("lwz %r26, 0x68(%r17)");
asm("lwz %r27, 0x6c(%r17)");
asm("lwz %r28, 0x70(%r17)");
asm("lwz %r29, 0x74(%r17)");
asm("lwz %r30, 0x78(%r17)");
asm("lwz %r31, 0x7c(%r17)");
asm("li %r17, 0");
*/