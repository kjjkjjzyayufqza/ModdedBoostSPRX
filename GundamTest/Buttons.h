#include <cell/pad.h>
#include <time.h>
#include <sys\spu_thread.h>
#define LEFT (1 << 7)       // 0x00000000 10000000 OR 00 80
#define DOWN (1 << 6)       // 0x00000000 01000000 OR 00 40
#define RIGHT (1 << 5)      // 0x00000000 00100000 OR 00 20
#define UP (1 << 4)         // 0x00000000 00010000 OR 00 10
#define START (1 << 3)      // 0x00000000 00001000 OR 00 08
#define R3 (1 << 2)         // 0x00000000 00000100 OR 00 04
#define L3 (1 << 1)         // 0x00000000 00000010 OR 00 02
#define SELECT (1 << 0)     // 0x00000000 00000001 OR 00 01
#define SQUARE (1 << 15)    // 0x10000000 00000000 OR 80 00
#define CROSS (1 << 14)		// 0x01000000 00000000 OR 40 00
#define CIRCLE (1 << 13)	// 0x00100000 00000000 OR 20 00
#define TRIANGLE (1 << 12)	// 0x00010000 00000000 OR 10 00
#define R1 (1 << 11)		// 0x00001000 00000000 OR 08 00
#define L1 (1 << 10)		// 0x00000100 00000000 OR 04 00
#define R2 (1 << 9)			// 0x00000010 00000000 OR 02 00
#define L2 (1 << 8)			// 0x00000001 00000000 OR 01 00
//must include Buttons.h in Prx.cpp

CellPadData PadData;

bool KeyPressed(int key)
{
	cellPadGetData(0, &PadData);
	_Uint32t _key = (PadData.button[3] << 8) + PadData.button[2];
	return ((_key == key) & 1);
}
int Key()
{
	cellPadGetData(0, &PadData);
	_Uint32t _key = (PadData.button[3] << 8) + PadData.button[2];
	return _key;
}