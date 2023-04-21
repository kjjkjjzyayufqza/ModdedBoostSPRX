#include "projectile_system.h"
#include "script_pointers.h"
#include "stdafx.h"
#include "unit_projectiles/Hyaku_Shiki.h"
#include "unit_projectiles/Bael.h"
#include "unit_projectiles/Exia.h"
#include "unit_projectiles/Reborns.h"
#include "unit_projectiles/Infinite_Justice.h"
#include "unit_projectiles/Bound_Doc.h"
#include "unit_projectiles/Quanta_Full_Saber.h"
#include "unit_projectiles/Montero.h"
#include "unit_projectiles/Barbatos_Lupus_Rex.h"
#include "unit_projectiles/Barbatos_Lupus.h"
#include "unit_projectiles/Barbatos.h"
#include "unit_projectiles/Raider_Gundam.h"
#include "unit_projectiles/Tallgeese_III.h"
#include "unit_projectiles/Lacus_Infinite_Justice.h"
#include "unit_projectiles/Nu_HWS.h"
#include "unit_projectiles/Perfect_Strike.h"
#include "unit_projectiles/Excellia.h"
#include "unit_projectiles/Dark_Hound.h"
#include "unit_projectiles/Heine_Destiny.h"
#include "../registers.h"
#include "unit_projectiles/test.h"
#include "unit_projectiles/Zabanya.cpp"

int MBON_Added_Unit_ID[5000];
int custom_projectile_ID[5000];

void projectile_ID_Check_hook()
{
	int projectile_ID = temp_registers[4];

	switch (projectile_ID)
	{
		case 0x8c0: // Hyaku Shiki's rick dom assist spawn
			hyaku_shiki_rick_dias_spawn();
			break;
		case 0x3746: // Exia EX Attack despawn
			exia_EX_Attack_despawn();
			break;
		case 0x3750: // Exia EX Attack despawn
			exia_EX_Attack_no_hit_despawn();
			break;
		case 0x3764:
			exia_dagger_throw_spawn();
			break;
		case 0x530c: // Infinite Justice EX Attack despawn
			infinite_justice_EX_Attack_despawn();
			break;
		case 0x5140:
			perfect_strike_boomerang_spawn();
			break;
		case 0x33964:
			heine_destiny_boomerang_spawn();
			break;
		case 0x3396e:
			heine_destiny_sword_throw_spawn();
			break;
		case 0x50C30:
			dark_hound_sword_throw_spawn();
			break;
		case 0x50C3A:
			dark_hound_boomerang_spawn();
			break;
		case 0x77b3c: // Bael's CSa
			bael_CSa();
			break;
		case 0x77b46: // BC 2N derive, the stab
			bael_2BC();
			break;
		case 0x77b50: // BC 2N derive, the explosion
			bael_2BC_2();
			break;
		case 0xa05460:
			bound_doc_grab_shoot_hasei_sword_remain();
			break;
		case 0x4205e:
			quanta_full_saber_sword_throw_spawn_2();
			break;
		case 0x42068:
			quanta_full_saber_sword_throw_spawn();
			break;
		case 0x42072:
			quanta_full_saber_arrow_wave_beam_spawn();
			break;
		case 0x53214:
			excellia_boomerang_spawn();
			break;
		case 0x66a94:
			montero_JAVELIN_MADA_ARU_spawn();
			break;
		case 0x66a9e:
			montero_EX_Burst_Javelin_spawn();
			break;
		case 0x66abc:
			montero_wave_beam_spawn();
			break;
		case 0x66ad0:
			montero_G_Self_gerobi_shoot_spawn(); //montero_G_Self_shoot_melee_assist_spawn();
			break;
		case 0x66ac6:
			montero_G_Self_gerobi_shoot_spawn();
			break;
		case 0x77bc8:
			barbatos_lupus_rex_tomahawk_throw_spawn();
			break;
		case 0x77bbe:
			barbatos_lupus_rex_mace_throw_spawn();
			break;
		case 0x77baa:
			barbatos_lupus_rex_tail_blade_one_time_spawn();
			break;
		case 0x77a88:
			barbatos_lupus_anti_ship_mace_spawn();
			break;
		case 0x77a7e:
			barbatos_lupus_twin_mace_throw_spawn();
			break;
		case 0x6903C:
			barbatos_mace_throw_spawn();
			break;
		case 0x69046:
			barbatos_ex_mace_throw_spawn();
			break;
		case 0x31132:
			raider_nuclear_missile_spawn();
			break;
		case 0xA00001:
			reborns_2ABC(); 
			break;
		case 0xA00002:
			reborns_Gaga_Assist();
			break;
		case 0xA00003:
			tallgeese_III_assist_spawn();
			break;
		case 0xA00004:
			lacus_infinite_justice_strike_freedom_following_assist_spawn();
			break;
		case 0xA00005:
			nu_gundam_hws_re_gz_shoot_assist_spawn();
			break;
		case 0xB00000:
			test_spawn();
			break;
		case 0x420A4:
			Zabanya_Funnel_TypeNormal_spawn();
			break;
		//case 0x420C2:
		//	test_spawn();
		//	break;
		//case 0x420DB:
		//	test_spawn();
		//	break;
		//case 0x420D6:
		//	test_spawn();
		//	break;
		//case 0x420EA:
		//	test_spawn();
		//	break;
		//case 0x420CC:
		//	test_spawn();
		//	break;
		default:
			break;
	}
}

void init_custom_projectile_ID()
{
	custom_projectile_ID[0] = 0x8c0;
	custom_projectile_ID[1] = 0x530c;
	custom_projectile_ID[2] = 0x3746;
	custom_projectile_ID[3] = 0x77b3c;
	custom_projectile_ID[4] = 0x77b46;
	custom_projectile_ID[5] = 0x77b50;
	custom_projectile_ID[6] = 0xa00001;
	custom_projectile_ID[7] = 0xa00002;
	custom_projectile_ID[8] = 0xa5460;
	custom_projectile_ID[9] = 0x3750;
	custom_projectile_ID[10] = 0x42072;
	custom_projectile_ID[11] = 0x4205e;
	custom_projectile_ID[12] = 0x42068;
	custom_projectile_ID[13] = 0x66a94;
	custom_projectile_ID[14] = 0x66a9e;
	custom_projectile_ID[15] = 0x66abc;
	custom_projectile_ID[16] = 0x66ad0;
	custom_projectile_ID[17] = 0x66ac6;
	custom_projectile_ID[18] = 0x77bc8;
	custom_projectile_ID[19] = 0x77bbe;
	custom_projectile_ID[20] = 0x77baa;
	custom_projectile_ID[21] = 0x77a88;
	custom_projectile_ID[22] = 0x77a7e;
	custom_projectile_ID[23] = 0x6903C;
	custom_projectile_ID[24] = 0x31132;
	custom_projectile_ID[25] = 0xA00003;
	custom_projectile_ID[26] = 0xA00004;
	custom_projectile_ID[27] = 0xA00005;
	custom_projectile_ID[28] = 0xA00006;
	custom_projectile_ID[29] = 0x5140;
	custom_projectile_ID[30] = 0x53214;
	custom_projectile_ID[31] = 0x50C3A;
	custom_projectile_ID[32] = 0x33964;
	custom_projectile_ID[33] = 0x69046;
	custom_projectile_ID[34] = 0x3764;
	custom_projectile_ID[35] = 0x3396E;
	custom_projectile_ID[36] = 0x50C30;
	custom_projectile_ID[37] = 0xB00000;
	custom_projectile_ID[38] = 0x420A4;
	//custom_projectile_ID[39] = 0x420C2;
	//custom_projectile_ID[40] = 0x420DB;
	//custom_projectile_ID[41] = 0x420D6;
	//custom_projectile_ID[42] = 0x420EA;
	//custom_projectile_ID[43] = 0x420CC;
}


void init_MBON_Added_Unit_ID()
{
	MBON_Added_Unit_ID[0] = 0x425;
	MBON_Added_Unit_ID[1] = 0x80F3;
	MBON_Added_Unit_ID[2] = 0x80FD;
	MBON_Added_Unit_ID[3] = 0x13921;
	MBON_Added_Unit_ID[4] = 0x1392B;
	MBON_Added_Unit_ID[5] = 0xC31;
	MBON_Added_Unit_ID[6] = 0xC3B;
	MBON_Added_Unit_ID[7] = 0x4E71;
	MBON_Added_Unit_ID[8] = 0x524F;
	MBON_Added_Unit_ID[9] = 0x5623;
	MBON_Added_Unit_ID[10] = 0x5619;
	MBON_Added_Unit_ID[11] = 0x562D;
	MBON_Added_Unit_ID[12] = 0x6997;
	MBON_Added_Unit_ID[13] = 0x69AB;
	MBON_Added_Unit_ID[14] = 0x6DCF;
	MBON_Added_Unit_ID[15] = 0x6DD9;
	MBON_Added_Unit_ID[16] = 0x84F9;
	MBON_Added_Unit_ID[17] = 0x1395D;
	MBON_Added_Unit_ID[18] = 0x13967;
	MBON_Added_Unit_ID[19] = 0x13971;
	MBON_Added_Unit_ID[20] = 0x1397B;
	MBON_Added_Unit_ID[21] = 0x140B;
	MBON_Added_Unit_ID[22] = 0x5277;
	MBON_Added_Unit_ID[23] = 0x528B;
	MBON_Added_Unit_ID[24] = 0x835;
	MBON_Added_Unit_ID[25] = 0x373D;
	MBON_Added_Unit_ID[26] = 0x468D;
	MBON_Added_Unit_ID[27] = 0x4697;
	MBON_Added_Unit_ID[28] = 0x4E85;
	MBON_Added_Unit_ID[29] = 0x5A0B;
	MBON_Added_Unit_ID[30] = 0x69A1;
	MBON_Added_Unit_ID[31] = 0x8107;
	MBON_Added_Unit_ID[32] = 0x8111;
	MBON_Added_Unit_ID[33] = 0x811B;
	MBON_Added_Unit_ID[34] = 0x8125;
	MBON_Added_Unit_ID[35] = 0x13985;
	MBON_Added_Unit_ID[36] = 0x1398F;
	MBON_Added_Unit_ID[37] = 0x13999;
	MBON_Added_Unit_ID[38] = 0x139A3;
	MBON_Added_Unit_ID[39] = 0x65A5;
	MBON_Added_Unit_ID[40] = 0x812F;
	MBON_Added_Unit_ID[41] = 0x139B7;
	MBON_Added_Unit_ID[42] = 0x139C1;
	MBON_Added_Unit_ID[43] = 0x139CB;
	MBON_Added_Unit_ID[44] = 0x139D5;
	MBON_Added_Unit_ID[45] = 0x139DF;
	MBON_Added_Unit_ID[46] = 0x139E9;
	MBON_Added_Unit_ID[47] = 0x139F3;
	MBON_Added_Unit_ID[48] = 0x139FD;
	MBON_Added_Unit_ID[49] = 0x2F09;
	MBON_Added_Unit_ID[50] = 0x529F;
	MBON_Added_Unit_ID[51] = 0x8139;
	MBON_Added_Unit_ID[52] = 0x8503;
	MBON_Added_Unit_ID[53] = 0xA41B;
	MBON_Added_Unit_ID[54] = 0xA425;
	MBON_Added_Unit_ID[55] = 0xA42F;
	MBON_Added_Unit_ID[56] = 0xA803;
	MBON_Added_Unit_ID[57] = 0x139AD;
	MBON_Added_Unit_ID[58] = 0x4291;
	MBON_Added_Unit_ID[59] = 0xA439;
	MBON_Added_Unit_ID[60] = 0xB3BB;
	MBON_Added_Unit_ID[61] = 0x871;
	MBON_Added_Unit_ID[62] = 0xA821;
	MBON_Added_Unit_ID[63] = 0xB3C5;
	MBON_Added_Unit_ID[64] = 0x4E8F;
	MBON_Added_Unit_ID[65] = 0xCB2B;
	MBON_Added_Unit_ID[66] = 0xBF73;
	MBON_Added_Unit_ID[67] = 0xB3CF;
	MBON_Added_Unit_ID[68] = 0xBF7D;
	MBON_Added_Unit_ID[69] = 0xBF87;
	MBON_Added_Unit_ID[70] = 0xC743;
	MBON_Added_Unit_ID[71] = 0xA443;
	MBON_Added_Unit_ID[72] = 0xBF91;
	MBON_Added_Unit_ID[73] = 0xC74D;
}