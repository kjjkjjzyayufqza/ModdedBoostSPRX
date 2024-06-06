#include "registers.h"

int temp_registers[32]; // This location is dynamic.
float temp_float_registers[32]; // This location is dynamic.
unsigned int temp_r1_pointer[4]; // This location is dynamic.

void get_temp_registers_pointer()
{
	int* temp_registers_pointer = (int*)temp_registers; // stores in r3 and store in r1 
}

void get_temp_float_registers_pointer()
{
	int* temp_float_registers_pointer = (int*)temp_float_registers; // stores in r3 and store in r1 
}

void save_registers()
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

	/* OLD
	// This is assuming r17 is not used.
	// https://www.cs.uaf.edu/2010/fall/cs301/lecture/12_01_PowerPC.html
	asm("mr %r17, %r3"); // The pointer to the arrays will be stored on r3, so we need to store the value of r3 to r17 for temp storage.
	get_temp_registers_pointer();  // Branch to get_temp_registers_pointer, which will override the r3 with the pointer.

	// r3 will now have the pointer to the temp_registers_pointer 
	asm("stw %r17, 0xc(%r3)"); // store the original value of r3 (which is now stored in r17) to the array. 

	asm("mr %r17, %r3"); // transfer the pointer to r17

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

	asm("mr %r17, %r3"); // transfer the pointer to r17

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
	*/
}

unsigned int* get_temp_r1_register_pointer()
{
	return temp_r1_pointer; // replaces r3 with the temp r1 pointer
}

unsigned int get_r1()
{
	// use the small data area to store the original r17 value, and store the r3 value on r17
	asm("stw %r17, 0x1000(%r13)");
	asm("mr %r17, %r3");
	
	get_temp_r1_register_pointer();  // branch to get_temp_r1_register_pointer, which will override the r3 with the pointer

	asm("stw %r1, 0x0(%r3)"); // write r1 pointer to the temp_r1_pointer memory region
	asm("mr %r3, %r17"); // restore the original r3 value
	asm("lwz %r17, 0x1000(%r13)"); // load the original r17 value from the small data area

	return temp_r1_pointer[0] + 0x70; // return the stored r1 pointer, with an offset of 0x80 to offset the initial r1 offset that's done when entering this function
}

void retrieve_registers()
{
	asm("stw %r17, 0x1000(%r13)");

	// Float registers
	get_temp_float_registers_pointer();  // Branch to get_temp_registers_pointer, which will override the r3 with the pointer.

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

	/* OLD
	// Float registers
	get_temp_float_registers_pointer();  // Branch to get_temp_registers_pointer, which will override the r3 with the pointer.

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

	asm("li %r17, 0"); // hopefully r17 will always be 0.
	*/
}