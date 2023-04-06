#include "../stdafx.h"
#include "unit_list_structs.h"
#include "unit_list_common.h"
#include "unit_list_inject_hook.h"

#include "new_units/Gundam_G_Mecha.h"
#include "new_units/Gundam_AGE_1.h"
#include "new_units/Gundam_AGE_2.h"
#include "new_units/GP03_Gundam_Dendrobium.h"
#include "new_units/Strike_Freedom_Gundam_Meteor.h"
#include "new_units/ZZ_Gundam.h"
#include "new_units/Qubeley_Mk_II_Puru.h"
#include "new_units/Perfect_Strike_Gundam.h"
#include "new_units/Legend_Gundam.h"
#include "new_units/Hyperion_Gundam.h"
#include "new_units/Dreadnought_Gundam.h"
#include "new_units/Astray_Red_Frame_Custom.h"
#include "new_units/Brave_Commander_Test_Type.h"
#include "new_units/Gundam_Zabanya.h"
#include "new_units/Gundam_Heavyarms_Custom_TV.h"
#include "new_units/Gundam_Deathscythe_Hell_TV.h"
#include "new_units/Extreme_Gundam_type_Leos_II_Vs_.h"
#include "new_units/Infinite_Justice_Gundam_Meteor.h"
#include "new_units/Vagan_Gear_Sid.h"
#include "new_units/Strike_Freedom_Gundam_Boss.h"
#include "new_units/Infinite_Justice_Gundam_Boss.h"
#include "new_units/Gedlav.h"
#include "new_units/GOUF_Ignited.h"
#include "new_units/Destiny_Gundam_Heine.h"
#include "new_units/Marasai_and_Gabthley.h"
#include "new_units/Tieren_Taozi.h"
#include "new_units/Shining_Gundam.h"
#include "new_units/Rising_Gundam.h"
#include "new_units/Raider_Gundam.h"
#include "new_units/Phantom_Gundam.h"
#include "new_units/QANT_Full_Saber.h"
#include "new_units/Gundam_AGE_3.h"
#include "new_units/Gundam_AGE_FX.h"
#include "new_units/Zeydra.h"
#include "new_units/Farsia.h"
#include "new_units/Rephaser_Carnage.h"
#include "new_units/Rephaser_Ignith.h"
#include "new_units/Rephaser_Tachyon.h"
#include "new_units/Rephaser_Mystic.h"
#include "new_units/Nightingale.h"
#include "new_units/Gundam_Legilis.h"
#include "new_units/Extreme_Gundam_Dystopia_Phase.h"
#include "new_units/Gundam_Boss.h"
#include "new_units/Zeta_Gundam_Boss.h"
#include "new_units/V2_Gundam_Boss.h"
#include "new_units/Gundam_Double_X_Boss.h"
#include "new_units/Turn_A_Gundam_Boss.h"
#include "new_units/Destiny_Gundam_Boss.h"
#include "new_units/Extreme_Gundam_type_Leos_II_Vs__Boss.h"
#include "new_units/Kampfer.h"
#include "new_units/Akatsuki.h"
#include "new_units/Gundam_AGE_2_Dark_Hound.h"
#include "new_units/Extreme_Gundam_Excellia.h"
#include "new_units/G_Self.h"
#include "new_units/Mack_Knife.h"
#include "new_units/G_Self_Perfect_Pack.h"
#include "new_units/Gundam_Barbatos.h"
#include "new_units/Extreme_Gundam_Mk_II_AXE.h"
#include "new_units/Jagd_Doga.h"
#include "new_units/G_Arcane_Full_Dress.h"
#include "new_units/Full_Armor_Gundam_.h"
#include "new_units/Baund_Doc.h"
#include "new_units/Gundam_Kimaris_Trooper.h"
#include "new_units/Psycho_Zaku.h"
#include "new_units/Buster_Gundam.h"
#include "new_units/Hot_Scramble_Gundam.h"
#include "new_units/Gundam_Barbatos_Lupus.h"
#include "new_units/Atlas_Gundam.h"
#include "new_units/Gundam_Gusion_Rebake_Full_City.h"
#include "new_units/Bael_Gundam_.h"
#include "new_units/Build_Strike_Gundam_Full_Package.h"
#include "new_units/Montero.h"
#include "new_units/Gundam_Barbatos_Lupus_Rex.h"
#include "new_units/Zaku_Amazing.h"

#include "custom_units/Wing_Gundam_Snow_White_Prelude.h"
#include "custom_units/Wing_Gundam_Zero_Rebellion.h"

int debugIdentifier = 0xDEADBEEF;

int inject_unit_voice_file_list_info()
{
	#pragma region Initialization
	pointer_list pointer;
	pointer.pointer = (int)&Gundam_Voice_File_List_Info_Arr; // -0x48
	voice_hash_pointers[0] = pointer;

	pointer.pointer = (int)&Arcade_select_voice_hash_Arr; // -0x44
	voice_hash_pointers[1] = pointer;

	pointer.pointer = (int)&Arcade_continue_no_voice_hash_Arr; // -0x40
	voice_hash_pointers[2] = pointer;

	pointer.pointer = (int)&Arcade_continue_voice_hash_Arr; // -0x3c
	voice_hash_pointers[3] = pointer;

	pointer.pointer = (int)&Arcade_continue_yes_voice_hash_Arr; // -0x38
	voice_hash_pointers[4] = pointer;

	pointer.pointer = (int)&Bandai_Namco_Games_voice_hash_Arr; // -0x34
	voice_hash_pointers[5] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr; // -0x30
	voice_hash_pointers[6] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0x28; // -0x2c
	voice_hash_pointers[7] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0x50; // -0x28
	voice_hash_pointers[8] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0x78; // -0x24
	voice_hash_pointers[9] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0xa0; // -0x20
	voice_hash_pointers[10] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0xc8; // -0x1c
	voice_hash_pointers[11] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0xf0; // -0x18
	voice_hash_pointers[12] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0x118; // -0x14
	voice_hash_pointers[13] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0x140; // -0x10
	voice_hash_pointers[14] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0x168; // -0xc
	voice_hash_pointers[15] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0x190; // -0x8
	voice_hash_pointers[16] = pointer;

	pointer.pointer = (int)&unk_voice_hash_Arr + 0x1b8; // -0x4
	voice_hash_pointers[17] = pointer;


	int startPos = 0xB303E8; // First set is nil, with the last as 0x7FF
	for (int i = 0; i < 214; i++)
	{
		unit_voice_file_list_info Gundam_Voice_File_List_Info = *(unit_voice_file_list_info*)startPos;
		Gundam_Voice_File_List_Info_Arr[i] = Gundam_Voice_File_List_Info;
		startPos += 0x10;
	}
	#pragma endregion

	/*
	unit_voice_file_list_info BarbatosLupusRexVoiceFileList;
	BarbatosLupusRexVoiceFileList.UnitID = 0xBF91;
	BarbatosLupusRexVoiceFileList.index = 0x110;
	BarbatosLupusRexVoiceFileList.voice_file_list_hash = 0xca252675;
	BarbatosLupusRexVoiceFileList.unk_enum_0x8 = 0x5A2;

	unit_voice_file_list_info BoundDocVoiceFileList;
	BoundDocVoiceFileList.UnitID = 0x0871;
	BoundDocVoiceFileList.index = 0x111;
	BoundDocVoiceFileList.voice_file_list_hash = 0x653603e9;
	BoundDocVoiceFileList.unk_enum_0x8 = 0x5A3;

	unit_voice_file_list_info AGEFXVoiceFileList;
	AGEFXVoiceFileList.UnitID = 0x8111;
	AGEFXVoiceFileList.index = 0x112;
	AGEFXVoiceFileList.voice_file_list_hash = 0xca252675;
	AGEFXVoiceFileList.unk_enum_0x8 = 0x5A4;

	unit_voice_file_list_info ExtremeGundamTypeLeosIIVsVoiceFileList;
	ExtremeGundamTypeLeosIIVsVoiceFileList.UnitID = 0x84F9;
	ExtremeGundamTypeLeosIIVsVoiceFileList.index = 0x113;
	ExtremeGundamTypeLeosIIVsVoiceFileList.voice_file_list_hash = 0x0b2c006d;
	ExtremeGundamTypeLeosIIVsVoiceFileList.unk_enum_0x8 = 0x5A5;

	Gundam_Voice_File_List_Info_Arr[214] = bael_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[215] = infinite_justice_METEOR_inject_unit_voice_file_list_info();

	Gundam_Voice_File_List_Info_Arr[216] = BarbatosLupusRexVoiceFileList;
	Gundam_Voice_File_List_Info_Arr[217] = BoundDocVoiceFileList;
	Gundam_Voice_File_List_Info_Arr[218] = AGEFXVoiceFileList;
	Gundam_Voice_File_List_Info_Arr[219] = ExtremeGundamTypeLeosIIVsVoiceFileList;

	Gundam_Voice_File_List_Info_Arr[220] = extreme_gundam_Mk_II_AXE_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[221] = GP03_Gundam_Dendrobium_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[222] = Strike_Freedom_Gundam_Meteor_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[223] = Vagan_Gear_Sid_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[224] = Strike_Freedom_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[225] = Infinite_Justice_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[226] = Rephaser_Carnage_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[227] = Rephaser_Ignith_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[228] = Rephaser_Tachyon_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[229] = Rephaser_Mystic_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[230] = Extreme_Gundam_Dystopia_Phase_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[231] = Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[232] = Zeta_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[233] = V2_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[234] = Gundam_Double_X_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[235] = Turn_A_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[236] = Destiny_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[237] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[238] = Brave_Commander_Test_Type_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[239] = Montero_inject_unit_voice_file_list_info();
	*/

	#pragma region Original_Gundam_Voice_File_List_Info_Arr
	Gundam_Voice_File_List_Info_Arr[214] = Gundam_G_Mecha_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[215] = Gundam_AGE_1_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[216] = Gundam_AGE_2_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[217] = GP03_Gundam_Dendrobium_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[218] = Strike_Freedom_Gundam_Meteor_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[219] = ZZ_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[220] = Qubeley_Mk_II_Puru_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[221] = Perfect_Strike_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[222] = Legend_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[223] = Hyperion_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[224] = Dreadnought_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[225] = Astray_Red_Frame_Custom_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[226] = Brave_Commander_Test_Type_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[227] = Gundam_Zabanya_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[228] = Gundam_Heavyarms_Custom_TV_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[229] = Gundam_Deathscythe_Hell_TV_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[230] = Extreme_Gundam_type_Leos_II_Vs__inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[231] = Infinite_Justice_Gundam_Meteor_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[232] = Vagan_Gear_Sid_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[233] = Strike_Freedom_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[234] = Infinite_Justice_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[235] = Gedlav_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[236] = GOUF_Ignited_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[237] = Destiny_Gundam_Heine_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[238] = Marasai_and_Gabthley_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[239] = Tieren_Taozi_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[240] = Shining_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[241] = Rising_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[242] = Raider_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[243] = Phantom_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[244] = QANT_Full_Saber_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[245] = Gundam_AGE_3_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[246] = Gundam_AGE_FX_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[247] = Zeydra_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[248] = Farsia_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[249] = Rephaser_Carnage_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[250] = Rephaser_Ignith_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[251] = Rephaser_Tachyon_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[252] = Rephaser_Mystic_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[253] = Nightingale_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[254] = Gundam_Legilis_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[255] = Extreme_Gundam_Dystopia_Phase_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[256] = Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[257] = Zeta_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[258] = V2_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[259] = Gundam_Double_X_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[260] = Turn_A_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[261] = Destiny_Gundam_Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[262] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[263] = Kampfer_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[264] = Akatsuki_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[265] = Gundam_AGE_2_Dark_Hound_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[266] = Extreme_Gundam_Excellia_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[267] = G_Self_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[268] = Mack_Knife_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[269] = G_Self_Perfect_Pack_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[270] = Gundam_Barbatos_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[271] = Extreme_Gundam_Mk_II_AXE_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[272] = Jagd_Doga_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[273] = G_Arcane_Full_Dress_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[274] = Full_Armor_Gundam__inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[275] = Baund_Doc_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[276] = Gundam_Kimaris_Trooper_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[277] = Psycho_Zaku_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[278] = Buster_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[279] = Hot_Scramble_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[280] = Gundam_Barbatos_Lupus_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[281] = Atlas_Gundam_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[282] = Gundam_Gusion_Rebake_Full_City_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[283] = Bael_Gundam__inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[284] = Build_Strike_Gundam_Full_Package_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[285] = Montero_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[286] = Gundam_Barbatos_Lupus_Rex_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[287] = Zaku_Amazing_inject_unit_voice_file_list_info();
	#pragma endregion

	// ADD HERE
	Gundam_Voice_File_List_Info_Arr[288] = Wing_Gundam_Snow_White_Prelude_inject_unit_voice_file_list_info();
	Gundam_Voice_File_List_Info_Arr[289] = Wing_Gundam_Zero_Rebellion_inject_unit_voice_file_list_info();

	#pragma region Loop
	// Refer to new list by changing the current pointer
	write_protected_memory(0xD5A2DC, (int)&Gundam_Voice_File_List_Info_Arr);

	// Change the number of loop for reading the voice unit ID and index list.
	write_protected_memory(0xBB210, voice_ID_list_loop);

	// Change the number of loop for reading the voice PAC hash list.
	write_protected_memory(0xBAF98, voice_PAC_hash_list_loop);

	// Change the number of loop for reading the voice file list.
	write_protected_memory(0xB673C, voice_file_list_loop);

	//---------- Arcade Select sound hash section ------------
	startPos = 0xB31148; // First set is nil, with the last as 0x7FF
	for (int i = 0; i < 270; i++)
	{
		unit_voice_hash_list_0x28 Arcade_select_voice_hash = *(unit_voice_hash_list_0x28*)startPos;
		Arcade_select_voice_hash_Arr[i] = Arcade_select_voice_hash;
		startPos += 0x28;
	}
	#pragma endregion

	/*
	Arcade_select_voice_hash_Arr[270] = bael_inject_arcade_select_hash();

	Arcade_select_voice_hash_Arr[271] = infinite_justice_METEOR_inject_arcade_select_hash();


	unit_voice_hash_list_0x28 BarbatosLupusRexArcadeSelectHash;
	BarbatosLupusRexArcadeSelectHash.hash_1 = 0x47e94932; // VO_49_P04_CHARA_SELECT_01
	BarbatosLupusRexArcadeSelectHash.hash_2 = 0xdee01888; // VO_49_P04_CHARA_SELECT_02
	BarbatosLupusRexArcadeSelectHash.hash_3 = 0xa9e7281e; // VO_49_P04_CHARA_SELECT_03
	BarbatosLupusRexArcadeSelectHash.hash_4 = 0x3783bdbd; // VO_49_P04_CHARA_SELECT_04
	BarbatosLupusRexArcadeSelectHash.hash_5 = 0;
	BarbatosLupusRexArcadeSelectHash.hash_6 = 0;
	BarbatosLupusRexArcadeSelectHash.hash_7 = 0;
	BarbatosLupusRexArcadeSelectHash.hash_8 = 0;
	BarbatosLupusRexArcadeSelectHash.hash_9 = 0;
	BarbatosLupusRexArcadeSelectHash.hash_10 = 0;

	Arcade_select_voice_hash_Arr[272] = BarbatosLupusRexArcadeSelectHash;


	unit_voice_hash_list_0x28 BoundDocArcadeSelectHash;
	BoundDocArcadeSelectHash.hash_1 = 0x7eca7781; // VO_02_P16_CHARA_SELECT_01
	BoundDocArcadeSelectHash.hash_2 = 0xe7c3263b; // VO_02_P16_CHARA_SELECT_02
	BoundDocArcadeSelectHash.hash_3 = 0x90c416ad; // VO_02_P16_CHARA_SELECT_03
	BoundDocArcadeSelectHash.hash_4 = 0x0ea0830e; // VO_02_P16_CHARA_SELECT_04
	BoundDocArcadeSelectHash.hash_5 = 0;
	BoundDocArcadeSelectHash.hash_6 = 0;
	BoundDocArcadeSelectHash.hash_7 = 0;
	BoundDocArcadeSelectHash.hash_8 = 0;
	BoundDocArcadeSelectHash.hash_9 = 0;
	BoundDocArcadeSelectHash.hash_10 = 0;

	Arcade_select_voice_hash_Arr[273] = BoundDocArcadeSelectHash;


	unit_voice_hash_list_0x28 AGEFXArcadeSelectHash;
	AGEFXArcadeSelectHash.hash_1 = 0xe3067f79; // VO_33_P04_CHARA_SELECT_01
	AGEFXArcadeSelectHash.hash_2 = 0x7a0f2ec3; // VO_33_P04_CHARA_SELECT_02
	AGEFXArcadeSelectHash.hash_3 = 0x0d081e55; // VO_33_P04_CHARA_SELECT_03
	AGEFXArcadeSelectHash.hash_4 = 0x936c8bf6; // VO_33_P04_CHARA_SELECT_04
	AGEFXArcadeSelectHash.hash_5 = 0xe46bbb60; // VO_33_P04_CHARA_SELECT_05
	AGEFXArcadeSelectHash.hash_6 = 0x7d62eada; // VO_33_P04_CHARA_SELECT_06
	AGEFXArcadeSelectHash.hash_7 = 0;
	AGEFXArcadeSelectHash.hash_8 = 0;
	AGEFXArcadeSelectHash.hash_9 = 0;
	AGEFXArcadeSelectHash.hash_10 = 0;

	Arcade_select_voice_hash_Arr[274] = AGEFXArcadeSelectHash;


	unit_voice_hash_list_0x28 ExtremeGundamTypeLeosIIVsArcadeSelectHash;
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_1 = 0x8ae1f921; // VO_34_P04_CHARA_SELECT_01
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_2 = 0x13e8a89b; // VO_33_P04_CHARA_SELECT_02
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_3 = 0x64ef980d; // VO_33_P04_CHARA_SELECT_03
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_4 = 0;
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_5 = 0;
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_6 = 0;
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_7 = 0;
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_8 = 0;
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_9 = 0;
	ExtremeGundamTypeLeosIIVsArcadeSelectHash.hash_10 = 0;

	Arcade_select_voice_hash_Arr[275] = ExtremeGundamTypeLeosIIVsArcadeSelectHash;

	Arcade_select_voice_hash_Arr[276] = extreme_gundam_Mk_II_AXE_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[277] = GP03_Gundam_Dendrobium_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[278] = Strike_Freedom_Gundam_Meteor_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[279] = Vagan_Gear_Sid_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[280] = Strike_Freedom_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[281] = Infinite_Justice_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[282] = Rephaser_Carnage_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[283] = Rephaser_Ignith_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[284] = Rephaser_Tachyon_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[285] = Rephaser_Mystic_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[286] = Extreme_Gundam_Dystopia_Phase_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[287] = Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[288] = Zeta_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[289] = V2_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[290] = Gundam_Double_X_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[291] = Turn_A_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[292] = Destiny_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[293] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[294] = Brave_Commander_Test_Type_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[295] = Montero_inject_arcade_select_hash();
	*/

	#pragma region Original_Arcade_select_voice_hash_Arr
	Arcade_select_voice_hash_Arr[270] = Gundam_G_Mecha_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[271] = Gundam_AGE_1_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[272] = Gundam_AGE_2_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[273] = GP03_Gundam_Dendrobium_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[274] = Strike_Freedom_Gundam_Meteor_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[275] = ZZ_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[276] = Qubeley_Mk_II_Puru_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[277] = Perfect_Strike_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[278] = Legend_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[279] = Hyperion_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[280] = Dreadnought_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[281] = Astray_Red_Frame_Custom_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[282] = Brave_Commander_Test_Type_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[283] = Gundam_Zabanya_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[284] = Gundam_Heavyarms_Custom_TV_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[285] = Gundam_Deathscythe_Hell_TV_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[286] = Extreme_Gundam_type_Leos_II_Vs__inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[287] = Infinite_Justice_Gundam_Meteor_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[288] = Vagan_Gear_Sid_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[289] = Strike_Freedom_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[290] = Infinite_Justice_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[291] = Gedlav_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[292] = GOUF_Ignited_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[293] = Destiny_Gundam_Heine_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[294] = Marasai_and_Gabthley_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[295] = Tieren_Taozi_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[296] = Shining_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[297] = Rising_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[298] = Raider_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[299] = Phantom_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[300] = QANT_Full_Saber_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[301] = Gundam_AGE_3_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[302] = Gundam_AGE_FX_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[303] = Zeydra_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[304] = Farsia_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[305] = Rephaser_Carnage_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[306] = Rephaser_Ignith_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[307] = Rephaser_Tachyon_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[308] = Rephaser_Mystic_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[309] = Nightingale_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[310] = Gundam_Legilis_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[311] = Extreme_Gundam_Dystopia_Phase_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[312] = Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[313] = Zeta_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[314] = V2_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[315] = Gundam_Double_X_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[316] = Turn_A_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[317] = Destiny_Gundam_Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[318] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[319] = Kampfer_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[320] = Akatsuki_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[321] = Gundam_AGE_2_Dark_Hound_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[322] = Extreme_Gundam_Excellia_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[323] = G_Self_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[324] = Mack_Knife_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[325] = G_Self_Perfect_Pack_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[326] = Gundam_Barbatos_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[327] = Extreme_Gundam_Mk_II_AXE_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[328] = Jagd_Doga_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[329] = G_Arcane_Full_Dress_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[330] = Full_Armor_Gundam__inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[331] = Baund_Doc_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[332] = Gundam_Kimaris_Trooper_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[333] = Psycho_Zaku_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[334] = Buster_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[335] = Hot_Scramble_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[336] = Gundam_Barbatos_Lupus_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[337] = Atlas_Gundam_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[338] = Gundam_Gusion_Rebake_Full_City_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[339] = Bael_Gundam__inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[340] = Build_Strike_Gundam_Full_Package_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[341] = Montero_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[342] = Gundam_Barbatos_Lupus_Rex_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[343] = Zaku_Amazing_inject_arcade_select_hash();
	#pragma endregion

	// ADD HERE
	Arcade_select_voice_hash_Arr[344] = Wing_Gundam_Snow_White_Prelude_inject_arcade_select_hash();
	Arcade_select_voice_hash_Arr[345] = Wing_Gundam_Zero_Rebellion_inject_arcade_select_hash();

	#pragma region Loop
	//---------- Arcade continue no sound hash section ------------
	startPos = 0xB33BA0; // First set is nil, with the last as 0x7FF
	for (int i = 0; i < 270; i++)
	{
		unit_voice_hash_list_0x14 Arcade_continue_no_voice_hash = *(unit_voice_hash_list_0x14*)startPos;
		Arcade_continue_no_voice_hash_Arr[i] = Arcade_continue_no_voice_hash;
		startPos += 0x14;
	}
	#pragma endregion

	/*
	Arcade_continue_no_voice_hash_Arr[270] = bael_inject_arcade_continue_no_hash();

	Arcade_continue_no_voice_hash_Arr[271] = infinite_justice_METEOR_inject_arcade_continue_no_hash();


	unit_voice_hash_list_0x14 BarbatosLupusRexArcadeContinueNoHash;
	BarbatosLupusRexArcadeContinueNoHash.hash_1 = 0xbb161a5c; // VO_49_P04_GAME_OVER_01
	BarbatosLupusRexArcadeContinueNoHash.hash_2 = 0x221f4be6; // VO_49_P04_GAME_OVER_02
	BarbatosLupusRexArcadeContinueNoHash.hash_3 = 0;
	BarbatosLupusRexArcadeContinueNoHash.hash_4 = 0;
	BarbatosLupusRexArcadeContinueNoHash.hash_5 = 0;

	Arcade_continue_no_voice_hash_Arr[272] = BarbatosLupusRexArcadeContinueNoHash;


	unit_voice_hash_list_0x14 BoundDocArcadeContinueNoHash;
	BoundDocArcadeContinueNoHash.hash_1 = 0xf73c7b95; // VO_02_P16_GAME_OVER_01
	BoundDocArcadeContinueNoHash.hash_2 = 0x6e352a2f; // VO_02_P16_GAME_OVER_02
	BoundDocArcadeContinueNoHash.hash_3 = 0;
	BoundDocArcadeContinueNoHash.hash_4 = 0;
	BoundDocArcadeContinueNoHash.hash_5 = 0;

	Arcade_continue_no_voice_hash_Arr[273] = BoundDocArcadeContinueNoHash;


	unit_voice_hash_list_0x14 AGEFXArcadeContinueNoHash;
	AGEFXArcadeContinueNoHash.hash_1 = 0xe3ad5498; // VO_33_P04_GAME_OVER_01
	AGEFXArcadeContinueNoHash.hash_2 = 0x7aa40522; // VO_33_P04_GAME_OVER_02
	AGEFXArcadeContinueNoHash.hash_3 = 0x0da335b4; // VO_33_P04_GAME_OVER_03
	AGEFXArcadeContinueNoHash.hash_4 = 0;
	AGEFXArcadeContinueNoHash.hash_5 = 0;

	Arcade_continue_no_voice_hash_Arr[274] = AGEFXArcadeContinueNoHash;


	unit_voice_hash_list_0x14 ExtremeGundamTypeLeosIIVsArcadeContinueNoHash;
	ExtremeGundamTypeLeosIIVsArcadeContinueNoHash.hash_1 = 0x02835efc; // VO_34_P04_GAME_OVER_01
	ExtremeGundamTypeLeosIIVsArcadeContinueNoHash.hash_2 = 0x9b8a0f46; // VO_34_P04_GAME_OVER_02
	ExtremeGundamTypeLeosIIVsArcadeContinueNoHash.hash_3 = 0xec8d3fd0; // VO_34_P04_GAME_OVER_03
	ExtremeGundamTypeLeosIIVsArcadeContinueNoHash.hash_4 = 0;
	ExtremeGundamTypeLeosIIVsArcadeContinueNoHash.hash_5 = 0;

	Arcade_continue_no_voice_hash_Arr[275] = ExtremeGundamTypeLeosIIVsArcadeContinueNoHash;

	Arcade_continue_no_voice_hash_Arr[276] = extreme_gundam_Mk_II_AXE_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[277] = GP03_Gundam_Dendrobium_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[278] = Strike_Freedom_Gundam_Meteor_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[279] = Vagan_Gear_Sid_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[280] = Strike_Freedom_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[281] = Infinite_Justice_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[282] = Rephaser_Carnage_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[283] = Rephaser_Ignith_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[284] = Rephaser_Tachyon_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[285] = Rephaser_Mystic_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[286] = Extreme_Gundam_Dystopia_Phase_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[287] = Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[288] = Zeta_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[289] = V2_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[290] = Gundam_Double_X_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[291] = Turn_A_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[292] = Destiny_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[293] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[294] = Brave_Commander_Test_Type_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[295] = Montero_inject_arcade_continue_no_hash();
	*/

	#pragma region Original_Arcade_continue_no_voice_hash_Arr
	Arcade_continue_no_voice_hash_Arr[270] = Gundam_G_Mecha_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[271] = Gundam_AGE_1_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[272] = Gundam_AGE_2_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[273] = GP03_Gundam_Dendrobium_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[274] = Strike_Freedom_Gundam_Meteor_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[275] = ZZ_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[276] = Qubeley_Mk_II_Puru_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[277] = Perfect_Strike_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[278] = Legend_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[279] = Hyperion_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[280] = Dreadnought_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[281] = Astray_Red_Frame_Custom_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[282] = Brave_Commander_Test_Type_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[283] = Gundam_Zabanya_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[284] = Gundam_Heavyarms_Custom_TV_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[285] = Gundam_Deathscythe_Hell_TV_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[286] = Extreme_Gundam_type_Leos_II_Vs__inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[287] = Infinite_Justice_Gundam_Meteor_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[288] = Vagan_Gear_Sid_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[289] = Strike_Freedom_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[290] = Infinite_Justice_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[291] = Gedlav_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[292] = GOUF_Ignited_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[293] = Destiny_Gundam_Heine_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[294] = Marasai_and_Gabthley_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[295] = Tieren_Taozi_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[296] = Shining_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[297] = Rising_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[298] = Raider_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[299] = Phantom_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[300] = QANT_Full_Saber_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[301] = Gundam_AGE_3_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[302] = Gundam_AGE_FX_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[303] = Zeydra_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[304] = Farsia_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[305] = Rephaser_Carnage_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[306] = Rephaser_Ignith_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[307] = Rephaser_Tachyon_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[308] = Rephaser_Mystic_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[309] = Nightingale_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[310] = Gundam_Legilis_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[311] = Extreme_Gundam_Dystopia_Phase_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[312] = Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[313] = Zeta_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[314] = V2_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[315] = Gundam_Double_X_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[316] = Turn_A_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[317] = Destiny_Gundam_Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[318] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[319] = Kampfer_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[320] = Akatsuki_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[321] = Gundam_AGE_2_Dark_Hound_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[322] = Extreme_Gundam_Excellia_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[323] = G_Self_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[324] = Mack_Knife_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[325] = G_Self_Perfect_Pack_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[326] = Gundam_Barbatos_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[327] = Extreme_Gundam_Mk_II_AXE_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[328] = Jagd_Doga_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[329] = G_Arcane_Full_Dress_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[330] = Full_Armor_Gundam__inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[331] = Baund_Doc_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[332] = Gundam_Kimaris_Trooper_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[333] = Psycho_Zaku_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[334] = Buster_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[335] = Hot_Scramble_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[336] = Gundam_Barbatos_Lupus_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[337] = Atlas_Gundam_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[338] = Gundam_Gusion_Rebake_Full_City_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[339] = Bael_Gundam__inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[340] = Build_Strike_Gundam_Full_Package_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[341] = Montero_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[342] = Gundam_Barbatos_Lupus_Rex_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[343] = Zaku_Amazing_inject_arcade_continue_no_hash();
	#pragma endregion

	// ADD HERE
	Arcade_continue_no_voice_hash_Arr[344] = Wing_Gundam_Snow_White_Prelude_inject_arcade_continue_no_hash();
	Arcade_continue_no_voice_hash_Arr[345] = Wing_Gundam_Zero_Rebellion_inject_arcade_continue_no_hash();

	#pragma region Loop
	//---------- Arcade continue sound hash section ------------
	startPos = 0xB350CC; // First set is nil, with the last as 0x7FF
	for (int i = 0; i < 270; i++)
	{
		unit_voice_hash_list_0x18 Arcade_continue_voice_hash = *(unit_voice_hash_list_0x18*)startPos;
		Arcade_continue_voice_hash_Arr[i] = Arcade_continue_voice_hash;
		startPos += 0x18;
	}
	#pragma endregion

	/*
	Arcade_continue_voice_hash_Arr[270] = bael_inject_arcade_continue_prompt_hash();

	Arcade_continue_voice_hash_Arr[271] = infinite_justice_METEOR_inject_arcade_continue_prompt_hash();


	unit_voice_hash_list_0x18 BarbatosLupusRexArcadeContinueHash;
	BarbatosLupusRexArcadeContinueHash.hash_1 = 0x34382e4e; // VO_49_P04_CONTINUE_DEC_01
	BarbatosLupusRexArcadeContinueHash.hash_2 = 0xad317ff4; // VO_49_P04_CONTINUE_DEC_02
	BarbatosLupusRexArcadeContinueHash.hash_3 = 0;
	BarbatosLupusRexArcadeContinueHash.hash_4 = 0;
	BarbatosLupusRexArcadeContinueHash.hash_5 = 0;
	BarbatosLupusRexArcadeContinueHash.hash_6 = 0;

	Arcade_continue_voice_hash_Arr[272] = BarbatosLupusRexArcadeContinueHash;


	unit_voice_hash_list_0x18 BoundDocArcadeContinueHash;
	BoundDocArcadeContinueHash.hash_1 = 0x0d1b10fd; // VO_02_P16_CONTINUE_DEC_01
	BoundDocArcadeContinueHash.hash_2 = 0x94124147; // VO_02_P16_CONTINUE_DEC_02
	BoundDocArcadeContinueHash.hash_3 = 0;
	BoundDocArcadeContinueHash.hash_4 = 0;
	BoundDocArcadeContinueHash.hash_5 = 0;
	BoundDocArcadeContinueHash.hash_6 = 0;

	Arcade_continue_voice_hash_Arr[273] = BoundDocArcadeContinueHash;


	unit_voice_hash_list_0x18 AGEFXArcadeContinueHash;
	AGEFXArcadeContinueHash.hash_1 = 0x90d71805; // VO_33_P04_CONTINUE_DEC_01
	AGEFXArcadeContinueHash.hash_2 = 0x09de49bf; // VO_33_P04_CONTINUE_DEC_02
	AGEFXArcadeContinueHash.hash_3 = 0x7ed97929; // VO_33_P04_CONTINUE_DEC_03
	AGEFXArcadeContinueHash.hash_4 = 0xe0bdec8a; // VO_33_P04_CONTINUE_DEC_04
	AGEFXArcadeContinueHash.hash_5 = 0;
	AGEFXArcadeContinueHash.hash_6 = 0;

	Arcade_continue_voice_hash_Arr[274] = AGEFXArcadeContinueHash;


	unit_voice_hash_list_0x18 ExtremeGundamTypeLeosIIVsArcadeContinueHash;
	ExtremeGundamTypeLeosIIVsArcadeContinueHash.hash_1 = 0xf9309e5d; // VO_34_P04_CONTINUE_DEC_01
	ExtremeGundamTypeLeosIIVsArcadeContinueHash.hash_2 = 0x6039cfe7; // VO_34_P04_CONTINUE_DEC_02
	ExtremeGundamTypeLeosIIVsArcadeContinueHash.hash_3 = 0x173eff71; // VO_34_P04_CONTINUE_DEC_03
	ExtremeGundamTypeLeosIIVsArcadeContinueHash.hash_4 = 0;
	ExtremeGundamTypeLeosIIVsArcadeContinueHash.hash_5 = 0;
	ExtremeGundamTypeLeosIIVsArcadeContinueHash.hash_6 = 0;

	Arcade_continue_voice_hash_Arr[275] = ExtremeGundamTypeLeosIIVsArcadeContinueHash;

	Arcade_continue_voice_hash_Arr[276] = extreme_gundam_Mk_II_AXE_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[277] = GP03_Gundam_Dendrobium_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[278] = Strike_Freedom_Gundam_Meteor_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[279] = Vagan_Gear_Sid_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[280] = Strike_Freedom_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[281] = Infinite_Justice_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[282] = Rephaser_Carnage_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[283] = Rephaser_Ignith_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[284] = Rephaser_Tachyon_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[285] = Rephaser_Mystic_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[286] = Extreme_Gundam_Dystopia_Phase_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[287] = Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[288] = Zeta_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[289] = V2_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[290] = Gundam_Double_X_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[291] = Turn_A_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[292] = Destiny_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[293] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[294] = Brave_Commander_Test_Type_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[295] = Montero_inject_arcade_continue_prompt_hash();
	*/

	#pragma region Original_Arcade_continue_voice_hash_Arr
	Arcade_continue_voice_hash_Arr[270] = Gundam_G_Mecha_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[271] = Gundam_AGE_1_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[272] = Gundam_AGE_2_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[273] = GP03_Gundam_Dendrobium_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[274] = Strike_Freedom_Gundam_Meteor_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[275] = ZZ_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[276] = Qubeley_Mk_II_Puru_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[277] = Perfect_Strike_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[278] = Legend_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[279] = Hyperion_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[280] = Dreadnought_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[281] = Astray_Red_Frame_Custom_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[282] = Brave_Commander_Test_Type_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[283] = Gundam_Zabanya_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[284] = Gundam_Heavyarms_Custom_TV_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[285] = Gundam_Deathscythe_Hell_TV_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[286] = Extreme_Gundam_type_Leos_II_Vs__inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[287] = Infinite_Justice_Gundam_Meteor_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[288] = Vagan_Gear_Sid_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[289] = Strike_Freedom_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[290] = Infinite_Justice_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[291] = Gedlav_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[292] = GOUF_Ignited_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[293] = Destiny_Gundam_Heine_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[294] = Marasai_and_Gabthley_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[295] = Tieren_Taozi_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[296] = Shining_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[297] = Rising_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[298] = Raider_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[299] = Phantom_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[300] = QANT_Full_Saber_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[301] = Gundam_AGE_3_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[302] = Gundam_AGE_FX_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[303] = Zeydra_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[304] = Farsia_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[305] = Rephaser_Carnage_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[306] = Rephaser_Ignith_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[307] = Rephaser_Tachyon_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[308] = Rephaser_Mystic_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[309] = Nightingale_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[310] = Gundam_Legilis_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[311] = Extreme_Gundam_Dystopia_Phase_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[312] = Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[313] = Zeta_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[314] = V2_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[315] = Gundam_Double_X_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[316] = Turn_A_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[317] = Destiny_Gundam_Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[318] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[319] = Kampfer_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[320] = Akatsuki_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[321] = Gundam_AGE_2_Dark_Hound_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[322] = Extreme_Gundam_Excellia_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[323] = G_Self_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[324] = Mack_Knife_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[325] = G_Self_Perfect_Pack_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[326] = Gundam_Barbatos_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[327] = Extreme_Gundam_Mk_II_AXE_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[328] = Jagd_Doga_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[329] = G_Arcane_Full_Dress_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[330] = Full_Armor_Gundam__inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[331] = Baund_Doc_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[332] = Gundam_Kimaris_Trooper_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[333] = Psycho_Zaku_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[334] = Buster_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[335] = Hot_Scramble_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[336] = Gundam_Barbatos_Lupus_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[337] = Atlas_Gundam_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[338] = Gundam_Gusion_Rebake_Full_City_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[339] = Bael_Gundam__inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[340] = Build_Strike_Gundam_Full_Package_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[341] = Montero_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[342] = Gundam_Barbatos_Lupus_Rex_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[343] = Zaku_Amazing_inject_arcade_continue_prompt_hash();
	#pragma endregion

	// ADD HERE
	Arcade_continue_voice_hash_Arr[344] = Wing_Gundam_Snow_White_Prelude_inject_arcade_continue_prompt_hash();
	Arcade_continue_voice_hash_Arr[345] = Wing_Gundam_Zero_Rebellion_inject_arcade_continue_prompt_hash();

	#pragma region Loop
	//---------- Arcade continue yes sound hash section ------------
	startPos = 0xB36A34; // First set is nil, with the last as 0x7FF
	for (int i = 0; i < 270; i++)
	{
		unit_voice_hash_list_0x28 Arcade_continue_yes_voice_hash = *(unit_voice_hash_list_0x28*)startPos;
		Arcade_continue_yes_voice_hash_Arr[i] = Arcade_continue_yes_voice_hash;
		startPos += 0x28;
	}
	#pragma endregion

	/*
	Arcade_select_voice_hash_Arr[270] = bael_inject_arcade_continue_yes_hash();

	Arcade_continue_yes_voice_hash_Arr[271] = infinite_justice_METEOR_inject_arcade_continue_yes_hash();

	unit_voice_hash_list_0x28 BarbatosLupusRexArcadeContinueYesHash;
	BarbatosLupusRexArcadeContinueYesHash.hash_1 = 0x20f3b5cf; // VO_49_P04_CONTINUE_01
	BarbatosLupusRexArcadeContinueYesHash.hash_2 = 0xb9fae475; // VO_49_P04_CONTINUE_02
	BarbatosLupusRexArcadeContinueYesHash.hash_3 = 0;
	BarbatosLupusRexArcadeContinueYesHash.hash_4 = 0;
	BarbatosLupusRexArcadeContinueYesHash.hash_5 = 0;
	BarbatosLupusRexArcadeContinueYesHash.hash_6 = 0;
	BarbatosLupusRexArcadeContinueYesHash.hash_7 = 0;
	BarbatosLupusRexArcadeContinueYesHash.hash_8 = 0;
	BarbatosLupusRexArcadeContinueYesHash.hash_9 = 0;
	BarbatosLupusRexArcadeContinueYesHash.hash_10 = 0;

	Arcade_continue_yes_voice_hash_Arr[272] = BarbatosLupusRexArcadeContinueYesHash;

	unit_voice_hash_list_0x28 BoundDocArcadeContinueYesHash;
	BoundDocArcadeContinueYesHash.hash_1 = 0x638222ee; // VO_02_P16_CONTINUE_01
	BoundDocArcadeContinueYesHash.hash_2 = 0xfa8b7354; // VO_02_P16_CONTINUE_02
	BoundDocArcadeContinueYesHash.hash_3 = 0;
	BoundDocArcadeContinueYesHash.hash_4 = 0;
	BoundDocArcadeContinueYesHash.hash_5 = 0;
	BoundDocArcadeContinueYesHash.hash_6 = 0;
	BoundDocArcadeContinueYesHash.hash_7 = 0;
	BoundDocArcadeContinueYesHash.hash_8 = 0;
	BoundDocArcadeContinueYesHash.hash_9 = 0;
	BoundDocArcadeContinueYesHash.hash_10 = 0;

	Arcade_continue_yes_voice_hash_Arr[273] = BoundDocArcadeContinueYesHash;

	unit_voice_hash_list_0x28 AGEFXArcadeContinueYesHash;
	AGEFXArcadeContinueYesHash.hash_1 = 0xf3f160f2; // VO_33_P04_CONTINUE_01
	AGEFXArcadeContinueYesHash.hash_2 = 0x6af83148; // VO_33_P04_CONTINUE_02
	AGEFXArcadeContinueYesHash.hash_3 = 0;
	AGEFXArcadeContinueYesHash.hash_4 = 0;
	AGEFXArcadeContinueYesHash.hash_5 = 0;
	AGEFXArcadeContinueYesHash.hash_6 = 0;
	AGEFXArcadeContinueYesHash.hash_7 = 0;
	AGEFXArcadeContinueYesHash.hash_8 = 0;
	AGEFXArcadeContinueYesHash.hash_9 = 0;
	AGEFXArcadeContinueYesHash.hash_10 = 0;

	Arcade_continue_yes_voice_hash_Arr[274] = AGEFXArcadeContinueYesHash;


	unit_voice_hash_list_0x28 ExtremeGundamTypeLeosIIVsArcadeContinueYesHash;
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_1 = 0xd3631cb9; // VO_34_P04_CONTINUE_01
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_2 = 0x4a6a4d03; // VO_34_P04_CONTINUE_02
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_3 = 0x3d6d7d95; // VO_34_P04_CONTINUE_03
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_4 = 0;
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_5 = 0;
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_6 = 0;
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_7 = 0;
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_8 = 0;
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_9 = 0;
	ExtremeGundamTypeLeosIIVsArcadeContinueYesHash.hash_10 = 0;

	Arcade_continue_yes_voice_hash_Arr[275] = ExtremeGundamTypeLeosIIVsArcadeContinueYesHash;

	Arcade_continue_yes_voice_hash_Arr[276] = extreme_gundam_Mk_II_AXE_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[277] = GP03_Gundam_Dendrobium_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[278] = Strike_Freedom_Gundam_Meteor_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[279] = Vagan_Gear_Sid_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[280] = Strike_Freedom_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[281] = Infinite_Justice_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[282] = Rephaser_Carnage_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[283] = Rephaser_Ignith_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[284] = Rephaser_Tachyon_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[285] = Rephaser_Mystic_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[286] = Extreme_Gundam_Dystopia_Phase_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[287] = Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[288] = Zeta_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[289] = V2_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[290] = Gundam_Double_X_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[291] = Turn_A_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[292] = Destiny_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[293] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[294] = Brave_Commander_Test_Type_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[295] = Montero_inject_arcade_continue_yes_hash();
	*/

	#pragma region Original_Arcade_continue_yes_voice_hash_Arr
	Arcade_continue_yes_voice_hash_Arr[270] = Gundam_G_Mecha_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[271] = Gundam_AGE_1_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[272] = Gundam_AGE_2_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[273] = GP03_Gundam_Dendrobium_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[274] = Strike_Freedom_Gundam_Meteor_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[275] = ZZ_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[276] = Qubeley_Mk_II_Puru_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[277] = Perfect_Strike_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[278] = Legend_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[279] = Hyperion_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[280] = Dreadnought_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[281] = Astray_Red_Frame_Custom_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[282] = Brave_Commander_Test_Type_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[283] = Gundam_Zabanya_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[284] = Gundam_Heavyarms_Custom_TV_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[285] = Gundam_Deathscythe_Hell_TV_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[286] = Extreme_Gundam_type_Leos_II_Vs__inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[287] = Infinite_Justice_Gundam_Meteor_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[288] = Vagan_Gear_Sid_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[289] = Strike_Freedom_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[290] = Infinite_Justice_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[291] = Gedlav_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[292] = GOUF_Ignited_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[293] = Destiny_Gundam_Heine_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[294] = Marasai_and_Gabthley_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[295] = Tieren_Taozi_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[296] = Shining_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[297] = Rising_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[298] = Raider_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[299] = Phantom_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[300] = QANT_Full_Saber_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[301] = Gundam_AGE_3_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[302] = Gundam_AGE_FX_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[303] = Zeydra_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[304] = Farsia_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[305] = Rephaser_Carnage_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[306] = Rephaser_Ignith_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[307] = Rephaser_Tachyon_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[308] = Rephaser_Mystic_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[309] = Nightingale_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[310] = Gundam_Legilis_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[311] = Extreme_Gundam_Dystopia_Phase_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[312] = Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[313] = Zeta_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[314] = V2_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[315] = Gundam_Double_X_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[316] = Turn_A_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[317] = Destiny_Gundam_Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[318] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[319] = Kampfer_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[320] = Akatsuki_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[321] = Gundam_AGE_2_Dark_Hound_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[322] = Extreme_Gundam_Excellia_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[323] = G_Self_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[324] = Mack_Knife_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[325] = G_Self_Perfect_Pack_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[326] = Gundam_Barbatos_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[327] = Extreme_Gundam_Mk_II_AXE_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[328] = Jagd_Doga_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[329] = G_Arcane_Full_Dress_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[330] = Full_Armor_Gundam__inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[331] = Baund_Doc_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[332] = Gundam_Kimaris_Trooper_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[333] = Psycho_Zaku_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[334] = Buster_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[335] = Hot_Scramble_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[336] = Gundam_Barbatos_Lupus_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[337] = Atlas_Gundam_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[338] = Gundam_Gusion_Rebake_Full_City_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[339] = Bael_Gundam__inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[340] = Build_Strike_Gundam_Full_Package_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[341] = Montero_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[342] = Gundam_Barbatos_Lupus_Rex_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[343] = Zaku_Amazing_inject_arcade_continue_yes_hash();
	#pragma endregion

	// ADD HERE
	Arcade_continue_yes_voice_hash_Arr[344] = Wing_Gundam_Snow_White_Prelude_inject_arcade_continue_yes_hash();
	Arcade_continue_yes_voice_hash_Arr[345] = Wing_Gundam_Zero_Rebellion_inject_arcade_continue_yes_hash();

	#pragma region Loop
	//---------- Bandai Namco Games sound hash section ------------
	startPos = 0xB3948C; // First set is nil, with the last as 0x7FF
	for (int i = 0; i < 270; i++)
	{
		unit_voice_hash_list_0x8 Bandai_Namco_Games_voice_hash = *(unit_voice_hash_list_0x8*)startPos;
		Bandai_Namco_Games_voice_hash_Arr[i] = Bandai_Namco_Games_voice_hash;
		startPos += 0x8;
	}
	#pragma endregion

	/*
	Bandai_Namco_Games_voice_hash_Arr[270] = bael_inject_bandai_namco_games_serifu_hash();

	Bandai_Namco_Games_voice_hash_Arr[271] = infinite_justice_METEOR_inject_bandai_namco_games_serifu_hash();

	unit_voice_hash_list_0x8 BarbatosLupusRexBandaiNamcoGamesHash;
	BarbatosLupusRexBandaiNamcoGamesHash.hash_1 = 0x47e94932; // VO_49_P04_CHARA_SELECT_01
	BarbatosLupusRexBandaiNamcoGamesHash.hash_2 = 0xdee01888; // VO_49_P04_CHARA_SELECT_02

	Bandai_Namco_Games_voice_hash_Arr[272] = BarbatosLupusRexBandaiNamcoGamesHash;

	unit_voice_hash_list_0x8 BoundDocBandaiNamcoGamesHash;
	BoundDocBandaiNamcoGamesHash.hash_1 = 0x7eca7781; // VO_02_P16_CHARA_SELECT_01
	BoundDocBandaiNamcoGamesHash.hash_2 = 0xe7c3263b; // VO_02_P16_CHARA_SELECT_02

	Bandai_Namco_Games_voice_hash_Arr[273] = BoundDocBandaiNamcoGamesHash;

	unit_voice_hash_list_0x8 AGEFXBandaiNamcoGamesHash;
	AGEFXBandaiNamcoGamesHash.hash_1 = 0xe3067f79; // VO_33_P04_CHARA_SELECT_01
	AGEFXBandaiNamcoGamesHash.hash_2 = 0x7a0f2ec3; // VO_33_P04_CHARA_SELECT_02

	Bandai_Namco_Games_voice_hash_Arr[274] = AGEFXBandaiNamcoGamesHash;

	unit_voice_hash_list_0x8 ExtremeGundamTypeLeosIIVsBandaiNamcoGamesHash;
	ExtremeGundamTypeLeosIIVsBandaiNamcoGamesHash.hash_1 = 0x8ae1f921; // VO_34_P04_CHARA_SELECT_01
	ExtremeGundamTypeLeosIIVsBandaiNamcoGamesHash.hash_2 = 0x13e8a89b; // VO_34_P04_CHARA_SELECT_02
	// there's 3
	Bandai_Namco_Games_voice_hash_Arr[275] = ExtremeGundamTypeLeosIIVsBandaiNamcoGamesHash;

	Bandai_Namco_Games_voice_hash_Arr[276] = extreme_gundam_Mk_II_AXE_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[277] = GP03_Gundam_Dendrobium_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[278] = Strike_Freedom_Gundam_Meteor_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[279] = Vagan_Gear_Sid_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[280] = Strike_Freedom_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[281] = Infinite_Justice_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[282] = Rephaser_Carnage_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[283] = Rephaser_Ignith_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[284] = Rephaser_Tachyon_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[285] = Rephaser_Mystic_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[286] = Extreme_Gundam_Dystopia_Phase_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[287] = Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[288] = Zeta_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[289] = V2_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[290] = Gundam_Double_X_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[291] = Turn_A_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[292] = Destiny_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[293] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[294] = Brave_Commander_Test_Type_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[295] = Montero_inject_bandai_namco_games_serifu_hash();
	*/

	#pragma region Original_Bandai_Namco_Games_voice_hash_Arr
	Bandai_Namco_Games_voice_hash_Arr[270] = Gundam_G_Mecha_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[271] = Gundam_AGE_1_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[272] = Gundam_AGE_2_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[273] = GP03_Gundam_Dendrobium_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[274] = Strike_Freedom_Gundam_Meteor_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[275] = ZZ_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[276] = Qubeley_Mk_II_Puru_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[277] = Perfect_Strike_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[278] = Legend_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[279] = Hyperion_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[280] = Dreadnought_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[281] = Astray_Red_Frame_Custom_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[282] = Brave_Commander_Test_Type_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[283] = Gundam_Zabanya_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[284] = Gundam_Heavyarms_Custom_TV_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[285] = Gundam_Deathscythe_Hell_TV_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[286] = Extreme_Gundam_type_Leos_II_Vs__inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[287] = Infinite_Justice_Gundam_Meteor_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[288] = Vagan_Gear_Sid_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[289] = Strike_Freedom_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[290] = Infinite_Justice_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[291] = Gedlav_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[292] = GOUF_Ignited_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[293] = Destiny_Gundam_Heine_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[294] = Marasai_and_Gabthley_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[295] = Tieren_Taozi_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[296] = Shining_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[297] = Rising_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[298] = Raider_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[299] = Phantom_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[300] = QANT_Full_Saber_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[301] = Gundam_AGE_3_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[302] = Gundam_AGE_FX_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[303] = Zeydra_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[304] = Farsia_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[305] = Rephaser_Carnage_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[306] = Rephaser_Ignith_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[307] = Rephaser_Tachyon_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[308] = Rephaser_Mystic_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[309] = Nightingale_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[310] = Gundam_Legilis_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[311] = Extreme_Gundam_Dystopia_Phase_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[312] = Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[313] = Zeta_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[314] = V2_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[315] = Gundam_Double_X_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[316] = Turn_A_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[317] = Destiny_Gundam_Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[318] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[319] = Kampfer_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[320] = Akatsuki_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[321] = Gundam_AGE_2_Dark_Hound_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[322] = Extreme_Gundam_Excellia_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[323] = G_Self_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[324] = Mack_Knife_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[325] = G_Self_Perfect_Pack_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[326] = Gundam_Barbatos_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[327] = Extreme_Gundam_Mk_II_AXE_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[328] = Jagd_Doga_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[329] = G_Arcane_Full_Dress_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[330] = Full_Armor_Gundam__inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[331] = Baund_Doc_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[332] = Gundam_Kimaris_Trooper_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[333] = Psycho_Zaku_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[334] = Buster_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[335] = Hot_Scramble_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[336] = Gundam_Barbatos_Lupus_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[337] = Atlas_Gundam_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[338] = Gundam_Gusion_Rebake_Full_City_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[339] = Bael_Gundam__inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[340] = Build_Strike_Gundam_Full_Package_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[341] = Montero_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[342] = Gundam_Barbatos_Lupus_Rex_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[343] = Zaku_Amazing_inject_bandai_namco_games_serifu_hash();
	#pragma endregion

	// ADD HERE
	Bandai_Namco_Games_voice_hash_Arr[344] = Wing_Gundam_Snow_White_Prelude_inject_bandai_namco_games_serifu_hash();
	Bandai_Namco_Games_voice_hash_Arr[345] = Wing_Gundam_Zero_Rebellion_inject_bandai_namco_games_serifu_hash();

	#pragma region Loop
	//---------- unknown sound hash section ------------
	startPos = 0xB39D04; // First set is nil, with the last as 0x7FF
	for (int i = 0; i < 12; i++)
	{
		unit_voice_hash_list_0x28 unk_voice_hash = *(unit_voice_hash_list_0x28*)startPos;
		unk_voice_hash_Arr[i] = unk_voice_hash;
		startPos += 0x28;
	}
	#pragma endregion

	#pragma region Offset_Rewrite
	// Rewrite the logic to determine section offsets.
	/* The unit_voice_file_list and special audio hashes section (where it stores arcade select serifu hashes, continue serifu etc.) share the same starting pointer.
	*  So we had to seperate the lists, making it multiple lists.
	*  Since global variables are assigned to static position, what we do here is assign each of the seperate list's pointer to a place before the first list (a.k.a above the voice_file_list)
	*  In the original code, the instruction gets the sections after the initial voice_file_list section by adding an offset. The only raw pointer referenced is for the initial section.
	*  e.g. 0xbb5a8 - 3b c3 37 b8: addi r30, 0x37b8 (r3)
	*  0x37b8 is the offset, while r3 is the original voice_file_list pointer.
	*  The problem with this is that 0x37b8 is limited to two byte, and since the value is intepreted as signed int, the largest we can go is 0x7FFF before overflowing to negative.
	*  Hence in the original code, to reach the deeper part of the section, the system relies on using negative offset to reach the target.
	*  It is done first by using a register to store the original pointer +0x10000 and then subtract it by the amount needed.
	*  e.g. 0xbb5fc - 39 47 90 a4: r10, -0x6f5c(r7)
	*  Above this instruction, there is a 0xbb5f4 - 3c e3 00 01: addis r7, 1 (r3)
	*  addis = +1 << 16 // or +0x10000
	*  Hence if we were to forcefully change the offset value, it is not going to work since for negative offsets it involves an additional instruction.
	*  To solve this problem for both positive and negative offset, I have decided to change all the addi to normally get the pointers from the pointer list.
	*  The gist of the change will be something like this: 83 c3 FF EC: lwz r30, -0x14 (r3)
	*  Since the pointer list is stored above the initial pointer (which is stored in r3), we just need to load the word (pointer) from the relative negative offset.
	*/

	// Original 38 E3 0D 60: addi r7, 0xd60 (r3)
	// Changed  80 E3 FF BC: lwz r7, -0x44 (r3)
	int arcade_select_new_offset = 0x80E3FFBC;
	write_protected_memory(0xbb3bc, arcade_select_new_offset);

	// Original 3B C3 37 B8: addi r30, 0x37b8 (r3)
	// Changed  83 C3 FF C0: lwz r30, -0x40 (r3)
	int Arcade_continue_no_new_offset = 0x83C3FFC0;
	write_protected_memory(0xbb5a8, Arcade_continue_no_new_offset);

	// Original 39 43 4C E4: addi r10, 0x4ce4 (r3)
	// Changed  81 43 FF C4: lwz r10, -0x3C (r3)
	int Arcade_continue_new_offset = 0x8143FFC4;
	write_protected_memory(0xbb5c4, Arcade_continue_new_offset);

	// Original 39 63 66 4C: addi r11, 0x644c (r3)
	// Changed  81 63 FF C8: lwz r11, -0x38 (r3)
	int Arcade_continue_yes_new_offset = 0x8163FFC8;
	write_protected_memory(0xbb5e0, Arcade_continue_yes_new_offset);

	// Original 39 47 90 A4: addi r10, -0x65fc (r7)
	// Changed  81 43 FF CC: lwz r10, -0x34 (r3)
	int Bandai_Namco_Games_new_offset = 0x8143FFCC;
	write_protected_memory(0xbb5fc, Bandai_Namco_Games_new_offset);

	// Original 3B C6 99 1C: addi r30, -0x66e4 (r6)
	// Changed  83 C3 FF D0: lwz r30, -0x30 (r3)
	int unk_voice_hash_new_offset = 0x83C3FFD0;
	write_protected_memory(0xbb788, unk_voice_hash_new_offset);

	// Original 3B DF 99 44: addi r30, -0x66bc (r31)
	// Changed  83 C3 FF D4: lwz r30, -0x2C (r3)
	int unk_voice_hash_2_new_offset = 0x83C3FFD4;
	write_protected_memory(0xbb678, unk_voice_hash_2_new_offset);

	// Original 3B C7 99 6C: addi r30, -0x6694 (r7)
	// Changed  83 C3 FF D8: lwz r30, -0x28 (r3)
	int unk_voice_hash_3_new_offset = 0x83C3FFD8;
	write_protected_memory(0xbb7b4, unk_voice_hash_3_new_offset);

	// Original 3B C4 99 94: addi r30, -0x666c (r4)
	// Changed  83 C3 FF DC: lwz r30, -0x24 (r3)
	int unk_voice_hash_4_new_offset = 0x83C3FFDC;
	write_protected_memory(0xbb698, unk_voice_hash_4_new_offset);

	// Original 3B C6 99 BC: addi r30, -0x6644 (r6)
	// Changed  83 C3 FF E0: lwz r30, -0x20 (r3)
	int unk_voice_hash_5_new_offset = 0x83C3FFE0;
	write_protected_memory(0xbb7c0, unk_voice_hash_5_new_offset);

	// Original 3B DE 99 E4: addi r30, -0x661C (r30)
	// Changed  83 C3 FF E4: lwz r30, -0x1C (r3)
	int unk_voice_hash_6_new_offset = 0x83C3FFE4;
	write_protected_memory(0xbb6b8, unk_voice_hash_6_new_offset);

	// Original 3B CC 9A 0C: addi r30, -0x65F4 (r12)
	// Changed  83 C3 FF E8: lwz r30, -0x18 (r3)
	int unk_voice_hash_7_new_offset = 0x83C3FFE8;
	write_protected_memory(0xbb7cc, unk_voice_hash_7_new_offset);

	// Original 3B CB 9A 34: addi r30, -0x65CC (r11)
	// Changed  83 C3 FF EC: lwz r30, -0x14 (r3)
	int unk_voice_hash_8_new_offset = 0x83C3FFEC;
	write_protected_memory(0xbb77c, unk_voice_hash_8_new_offset);

	// Original 3B C4 9A 5C: addi r30, -0x65A4 (r4)
	// Changed  83 C3 FF F0: lwz r30, -0x10 (r3)
	int unk_voice_hash_9_new_offset = 0x83C3FFF0;
	write_protected_memory(0xbb7d8, unk_voice_hash_9_new_offset);

	// Original 3B DE 9A 84: addi r30, -0x657C (r30)
	// Changed  83 C3 FF F4: lwz r30, -0xC (r3)
	int unk_voice_hash_10_new_offset = 0x83C3FFF4;
	write_protected_memory(0xbb7a8, unk_voice_hash_10_new_offset);

	// Original 3B C9 9A AC: addi r30, -0x6554 (r9)
	// Changed  83 C3 FF F8: lwz r30, -0x8 (r3)
	int unk_voice_hash_11_new_offset = 0x83C3FFF8;
	write_protected_memory(0xbb7e4, unk_voice_hash_11_new_offset);

	// Original 3B C8 9A D4: addi r30, -0x652C (r8)
	// Changed  83 C3 FF FC: lwz r30, -0x4 (r3)
	int unk_voice_hash_12_new_offset = 0x83C3FFFC;
	write_protected_memory(0xbb644, unk_voice_hash_12_new_offset);
	#pragma endregion
}

int inject_unit_hash_info()
{
	#pragma region CPU Units Fix
	int startPos = 0x00B39EE4;
	for (int i = 0; i < 213; i++)
	{
		unit_hash_info Gundam_Hash_Info = *(unit_hash_info*)startPos;
		if (Gundam_Hash_Info.Sound == 0xFFFFFFFF){
			Gundam_Hash_Info.Sound = 0x9BECC40A;
		}
		if (Gundam_Hash_Info.WeaponImage == 0xFFFFFFFF){
			Gundam_Hash_Info.WeaponImage = 0x6ED321BD;
		}
		if (Gundam_Hash_Info.IngameImage == 0xFFFFFFFF){
			Gundam_Hash_Info.IngameImage = 0x06B27337;
		}
		if (Gundam_Hash_Info.KPKP == 0xFFFFFFFF){
			Gundam_Hash_Info.KPKP = 0xC45440B9;
		}
		if (Gundam_Hash_Info.VoiceFileList == 0xFFFFFFFF){
			Gundam_Hash_Info.VoiceFileList = 0xB326143E;
		}
		Gundam_Hash_Info_Arr[i] = Gundam_Hash_Info;
		startPos += 0x34;
	}
	#pragma endregion

	/*
	Gundam_Hash_Info_Arr[213] = bael_inject_unit_hash_info();

	Gundam_Hash_Info_Arr[214] = infinite_justice_METEOR_inject_unit_hash_info();

	unit_hash_info Barbatos_Lupus_Rex;
	Barbatos_Lupus_Rex.UnitID = 0xBF91;
	Barbatos_Lupus_Rex.unk0 = 0xDDC3CBD6;
	Barbatos_Lupus_Rex.DataScript = 0x9925659E;
	Barbatos_Lupus_Rex.ModelText = 0xEA4A6BCE;
	Barbatos_Lupus_Rex.OMO = 0x4D7EDBFE;
	Barbatos_Lupus_Rex.EIDX = 0x0EE0EBE4;
	Barbatos_Lupus_Rex.Sound = 0x283cd12a; // Barbatos_Lupus_Rex_Sound_Effects
	Barbatos_Lupus_Rex.GlobalPilotVoice = 0xb10475d3; // Barbatos_Lupus_Rex_Global_Pilot_Voices
	Barbatos_Lupus_Rex.WeaponImage = 0x6218E99E;
	Barbatos_Lupus_Rex.IngameImage = 0xe1d0f8eb; // Barbatos_Lupus_Rex_Sortie_and_Awakening_Sprites_Costume_1
	Barbatos_Lupus_Rex.KPKP = 0x6a4f014a;
	Barbatos_Lupus_Rex.VoiceFileList = 0xca252675; // Barbatos_Lupus_Rex_Voice_File_List
	Barbatos_Lupus_Rex.Stream = 0x069df91f; // Barbatos_Lupus_Rex_Local_Pilot_Voices

	// Barbatos_Lupus_Rex_Arcade_Selection_Sprite_Costume_1 - 02bbec95
	// Barbatos_Lupus_Rex_Loading_Ally_Sprite_Costume_1 - f66316b9
	// Barbatos_Lupus_Rex_Loading_Enemy_Sprite_Costume_1 - 67f0a461
	// Barbatos_Lupus_Rex_Free_Battle_Selection_Sprite_Costume_1 - 7bde26bb
	// Barbatos_Lupus_Rex_Loading_Enemy_Target_Unit_Sprite_Costume_1 - a40047cb
	// Barbatos_Lupus_Rex_Loading_Enemy_Target_Pilot_Sprite_Costume_1 - 20a0500b

	// Barbatos_Lupus_Rex_Result_Small_Sprite - 6f28d26f
	// Barbatos_Lupus_Rex_Target_Small_Sprite - 690fc9ab

	Gundam_Hash_Info_Arr[215] = Barbatos_Lupus_Rex;


	unit_hash_info Bound_Doc;
	Bound_Doc.UnitID = 0x0871;
	Bound_Doc.unk0 = 0xDDC3CBD6;
	Bound_Doc.DataScript = 0x6C5F330B;
	Bound_Doc.ModelText = 0x1F303D5B;
	Bound_Doc.OMO = 0xCDEEC663;
	Bound_Doc.EIDX = 0x8E70F679;
	Bound_Doc.Sound = 0xf5a76fc4; // Bound_Doc_Sound_Effects
	Bound_Doc.GlobalPilotVoice = 0xddad7992; // Bound_Doc_Global_Pilot_Voices
	Bound_Doc.WeaponImage = 0x178A2BC9;
	Bound_Doc.IngameImage = 0x0c39ce11; // Bound_Doc_Sortie_and_Awakening_Sprites_Costume_1
	Bound_Doc.KPKP = 0xF0D2C30C;
	Bound_Doc.VoiceFileList = 0x653603e9; // Bound_Doc_Global_Pilot_Voice_File_List
	Bound_Doc.Stream = 0xa904554b; // Bound_Doc_Local_Pilot_Voices

	// Bound_Doc_Arcade_Selection_Sprite_Costume_1 - fb26c99f
	// Bound_Doc_Loading_Ally_Sprite_Costume_1 - 983b5305
	// Bound_Doc_Loading_Enemy_Sprite_Costume_1 - a5490383
	// Bound_Doc_Free_Battle_Selection_Sprite_Costume_1 - 96371041
	// Bound_Doc_Loading_Enemy_Target_Unit_Sprite_Costume_1 - 3c3afe4a
	// Bound_Doc_Loading_Enemy_Target_Pilot_Sprite_Costume_1 - ba87d904

	// Bound_Doc_Result_Small_Sprite - 0381de2e
	// Bound_Doc_Target_Small_Sprite - 05a6c5ea

	Gundam_Hash_Info_Arr[216] = Bound_Doc;


	unit_hash_info AGE_FX;
	AGE_FX.UnitID = 0x8111;
	AGE_FX.unk0 = 0xDDC3CBD6;
	AGE_FX.DataScript = 0x7E046609;
	AGE_FX.ModelText = 0x0D6B6859;
	AGE_FX.OMO = 0x23F2FC1A;
	AGE_FX.EIDX = 0x606CCC00;
	AGE_FX.Sound = 0xfe70f89b; // AGE_FX_Sound_Effects
	AGE_FX.GlobalPilotVoice = 0xf4855671; // AGE_FX_Global_Pilot_Voices
	AGE_FX.WeaponImage = 0xFB367990;
	AGE_FX.IngameImage = 0xf73c1e4b; // AGE_FX_Sortie_and_Awakening_Sprites_Costume_1
	AGE_FX.KPKP = 0x01483E4D;
	AGE_FX.VoiceFileList = 0x9a2aed38; // AGE_FX_Global_Pilot_Voice_File_List
	AGE_FX.Stream = 0x58e22e32; // AGE_FX_Local_Pilot_Voices

	// AGE_FX_Arcade_Selection_Sprite_Costume_1 - ff0b0e1b
	// AGE_FX_Loading_Ally_Sprite_Costume_1 - 6910ada9
	// AGE_FX_Loading_Enemy_Sprite_Costume_1 - 7ad8c7be
	// AGE_FX_Free_Battle_Selection_Sprite_Costume_1 - 6d32c01b
	// AGE_FX_Loading_Enemy_Target_Unit_Sprite_Costume_1 - 421bfb6d
	// AGE_FX_Loading_Enemy_Target_Pilot_Sprite_Costume_1 - 1ff34d6a

	// AGE_FX_Result_Small_Sprite - 2aa9f1cd
	// AGE_FX_Target_Small_Sprite - 2c8eea09

	Gundam_Hash_Info_Arr[217] = AGE_FX;


	unit_hash_info Extreme_Gundam_Type_Leos_II_Vs;
	Extreme_Gundam_Type_Leos_II_Vs.UnitID = 0x84F9;
	Extreme_Gundam_Type_Leos_II_Vs.unk0 = 0xDDC3CBD6;
	Extreme_Gundam_Type_Leos_II_Vs.DataScript = 0x46BC683C;
	Extreme_Gundam_Type_Leos_II_Vs.ModelText = 0x35D3666C;
	Extreme_Gundam_Type_Leos_II_Vs.OMO = 0x75798037;
	Extreme_Gundam_Type_Leos_II_Vs.EIDX = 0x36E7B02D;
	Extreme_Gundam_Type_Leos_II_Vs.Sound = 0x8f1cab75; // Extreme_Gundam_Type_Leos_II_Vs_Sound_Effects
	Extreme_Gundam_Type_Leos_II_Vs.GlobalPilotVoice = 0x83bbd344; // Extreme_Gundam_Type_Leos_II_Vs_Global_Pilot_Voices
	Extreme_Gundam_Type_Leos_II_Vs.WeaponImage = 0x9BFA8832;
	Extreme_Gundam_Type_Leos_II_Vs.IngameImage = 0xeca841f4; // Extreme_Gundam_Type_Leos_II_Vs_Sortie_and_Awakening_Sprites_Costume_1
	Extreme_Gundam_Type_Leos_II_Vs.KPKP = 0x118A6489;
	Extreme_Gundam_Type_Leos_II_Vs.VoiceFileList = 0x0b2c006d; // Extreme_Gundam_Type_Leos_II_Vs_Global_Pilot_Voice_File_List
	Extreme_Gundam_Type_Leos_II_Vs.Stream = 0x61578d33; // Extreme_Gundam_Type_Leos_II_Vs_Local_Pilot_Voices

	// Extreme_Gundam_Type_Leos_II_Vs_Arcade_Selection_Sprite_Costume_1 - 473a10ac
	// Extreme_Gundam_Type_Leos_II_Vs_Loading_Ally_Sprite_Costume_1 - 72800e3f
	// Extreme_Gundam_Type_Leos_II_Vs_Loading_Enemy_Sprite_Costume_1 - 63af616c
	// Extreme_Gundam_Type_Leos_II_Vs_Free_Battle_Selection_Sprite_Costume_1 - 76a69fa4
	// Extreme_Gundam_Type_Leos_II_Vs_Loading_Enemy_Target_Unit_Sprite_Costume_1 - ffa24ade
	// Extreme_Gundam_Type_Leos_II_Vs_Loading_Enemy_Target_Pilot_Sprite_Costume_1 - 4d2616ed

	// Extreme_Gundam_Type_Leos_II_Vs_Result_Small_Sprite - 5d9774f8
	// Extreme_Gundam_Type_Leos_II_Vs_Target_Small_Sprite - 5bb06f3c

	Gundam_Hash_Info_Arr[218] = Extreme_Gundam_Type_Leos_II_Vs;

	Gundam_Hash_Info_Arr[219] = extreme_gundam_Mk_II_AXE_inject_unit_hash_info();

	Gundam_Hash_Info_Arr[220] = GP03_Gundam_Dendrobium_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[221] = Strike_Freedom_Gundam_Meteor_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[222] = Vagan_Gear_Sid_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[223] = Strike_Freedom_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[224] = Infinite_Justice_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[225] = Rephaser_Carnage_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[226] = Rephaser_Ignith_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[227] = Rephaser_Tachyon_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[228] = Rephaser_Mystic_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[229] = Extreme_Gundam_Dystopia_Phase_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[230] = Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[231] = Zeta_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[232] = V2_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[233] = Gundam_Double_X_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[234] = Turn_A_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[235] = Destiny_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[236] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[237] = Brave_Commander_Test_Type_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[238] = Montero_inject_unit_hash_info();
	*/

	#pragma region Original_Gundam_Hash_Info_Arr
	Gundam_Hash_Info_Arr[213] = Gundam_G_Mecha_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[214] = Gundam_AGE_1_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[215] = Gundam_AGE_2_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[216] = GP03_Gundam_Dendrobium_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[217] = Strike_Freedom_Gundam_Meteor_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[218] = ZZ_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[219] = Qubeley_Mk_II_Puru_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[220] = Perfect_Strike_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[221] = Legend_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[222] = Hyperion_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[223] = Dreadnought_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[224] = Astray_Red_Frame_Custom_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[225] = Brave_Commander_Test_Type_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[226] = Gundam_Zabanya_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[227] = Gundam_Heavyarms_Custom_TV_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[228] = Gundam_Deathscythe_Hell_TV_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[229] = Extreme_Gundam_type_Leos_II_Vs__inject_unit_hash_info();
	Gundam_Hash_Info_Arr[230] = Infinite_Justice_Gundam_Meteor_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[231] = Vagan_Gear_Sid_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[232] = Strike_Freedom_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[233] = Infinite_Justice_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[234] = Gedlav_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[235] = GOUF_Ignited_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[236] = Destiny_Gundam_Heine_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[237] = Marasai_and_Gabthley_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[238] = Tieren_Taozi_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[239] = Shining_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[240] = Rising_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[241] = Raider_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[242] = Phantom_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[243] = QANT_Full_Saber_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[244] = Gundam_AGE_3_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[245] = Gundam_AGE_FX_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[246] = Zeydra_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[247] = Farsia_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[248] = Rephaser_Carnage_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[249] = Rephaser_Ignith_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[250] = Rephaser_Tachyon_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[251] = Rephaser_Mystic_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[252] = Nightingale_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[253] = Gundam_Legilis_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[254] = Extreme_Gundam_Dystopia_Phase_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[255] = Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[256] = Zeta_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[257] = V2_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[258] = Gundam_Double_X_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[259] = Turn_A_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[260] = Destiny_Gundam_Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[261] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[262] = Kampfer_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[263] = Akatsuki_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[264] = Gundam_AGE_2_Dark_Hound_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[265] = Extreme_Gundam_Excellia_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[266] = G_Self_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[267] = Mack_Knife_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[268] = G_Self_Perfect_Pack_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[269] = Gundam_Barbatos_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[270] = Extreme_Gundam_Mk_II_AXE_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[271] = Jagd_Doga_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[272] = G_Arcane_Full_Dress_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[273] = Full_Armor_Gundam__inject_unit_hash_info();
	Gundam_Hash_Info_Arr[274] = Baund_Doc_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[275] = Gundam_Kimaris_Trooper_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[276] = Psycho_Zaku_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[277] = Buster_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[278] = Hot_Scramble_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[279] = Gundam_Barbatos_Lupus_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[280] = Atlas_Gundam_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[281] = Gundam_Gusion_Rebake_Full_City_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[282] = Bael_Gundam__inject_unit_hash_info();
	Gundam_Hash_Info_Arr[283] = Build_Strike_Gundam_Full_Package_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[284] = Montero_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[285] = Gundam_Barbatos_Lupus_Rex_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[286] = Zaku_Amazing_inject_unit_hash_info();
	#pragma endregion 

	// ADD HERE
	Gundam_Hash_Info_Arr[287] = Wing_Gundam_Snow_White_Prelude_inject_unit_hash_info();
	Gundam_Hash_Info_Arr[288] = Wing_Gundam_Zero_Rebellion_inject_unit_hash_info();

	#pragma region Offset_Rewrite
	write_protected_memory(0x00D5A9E0, (int)&Gundam_Hash_Info_Arr);

	//*(int*)0x00D5A9E0 = (int)&Gundam_Hash_Info_Arr;

	write_protected_memory(0xD54A0, hash_info_loop);
	write_protected_memory(0xD5618, hash_info_loop);
	write_protected_memory(0xD5C48, hash_info_loop_2);
	write_protected_memory(0xD58B8, hash_info_loop_2);
	write_protected_memory(0xD59E8, hash_info_loop_2);
	write_protected_memory(0xD5B18, hash_info_loop_2);
	#pragma endregion
}

int inject_unit_unk_enum()
{
	#pragma region Initializations
	int startPos = 0x00B3CCE0;
	for (int i = 0; i < 213; i++)
	{
		unit_unk_enum_info Gundam_unk_enum_info = *(unit_unk_enum_info*)startPos;
		Gundam_unk_enum_info_Arr[i] = Gundam_unk_enum_info;
		startPos += 0x8;
	}

	unit_unk_enum_info unk_ID;
	unk_ID.UnitID = 0x15BB3;
	unk_ID.unk_enum = 0x20;
	#pragma endregion

	/*
	unit_unk_enum_info Barbatos_Lupus_Rex_unk_Enum;
	Barbatos_Lupus_Rex_unk_Enum.UnitID = 0xBF91;
	Barbatos_Lupus_Rex_unk_Enum.unk_enum = 0x1;

	unit_unk_enum_info Bound_Doc_unk_Enum;
	Bound_Doc_unk_Enum.UnitID = 0x0871;
	Bound_Doc_unk_Enum.unk_enum = 0x1;

	unit_unk_enum_info AGE_FX_unk_Enum;
	AGE_FX_unk_Enum.UnitID = 0x8111;
	AGE_FX_unk_Enum.unk_enum = 0x1;

	unit_unk_enum_info Extreme_Gundam_Type_Leos_II_Vs_unk_Enum;
	Extreme_Gundam_Type_Leos_II_Vs_unk_Enum.UnitID = 0x8111;
	Extreme_Gundam_Type_Leos_II_Vs_unk_Enum.unk_enum = 0x1;

	unit_unk_enum_info unk_ID;
	unk_ID.UnitID = 0x15BB3;
	unk_ID.unk_enum = 0x20;

	Gundam_unk_enum_info_Arr[213] = bael_inject_unk_enum();
	Gundam_unk_enum_info_Arr[214] = infinite_justice_METEOR_inject_unk_enum();

	Gundam_unk_enum_info_Arr[215] = Barbatos_Lupus_Rex_unk_Enum;
	Gundam_unk_enum_info_Arr[216] = Bound_Doc_unk_Enum;
	Gundam_unk_enum_info_Arr[217] = AGE_FX_unk_Enum;
	Gundam_unk_enum_info_Arr[218] = Extreme_Gundam_Type_Leos_II_Vs_unk_Enum;

	Gundam_unk_enum_info_Arr[219] = extreme_gundam_Mk_II_AXE_inject_unk_enum();
	Gundam_unk_enum_info_Arr[220] = GP03_Gundam_Dendrobium_inject_unk_enum();
	Gundam_unk_enum_info_Arr[221] = Strike_Freedom_Gundam_Meteor_inject_unk_enum();
	Gundam_unk_enum_info_Arr[222] = Vagan_Gear_Sid_inject_unk_enum();
	Gundam_unk_enum_info_Arr[223] = Strike_Freedom_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[224] = Infinite_Justice_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[225] = Rephaser_Carnage_inject_unk_enum();
	Gundam_unk_enum_info_Arr[226] = Rephaser_Ignith_inject_unk_enum();
	Gundam_unk_enum_info_Arr[227] = Rephaser_Tachyon_inject_unk_enum();
	Gundam_unk_enum_info_Arr[228] = Rephaser_Mystic_inject_unk_enum();
	Gundam_unk_enum_info_Arr[229] = Extreme_Gundam_Dystopia_Phase_inject_unk_enum();
	Gundam_unk_enum_info_Arr[230] = Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[231] = Zeta_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[232] = V2_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[233] = Gundam_Double_X_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[234] = Turn_A_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[235] = Destiny_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[236] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[237] = Brave_Commander_Test_Type_inject_unk_enum();
	Gundam_unk_enum_info_Arr[238] = Montero_inject_unk_enum();
	*/

	#pragma region Original_Gundam_unk_enum_info_Arr
	Gundam_unk_enum_info_Arr[213] = Gundam_G_Mecha_inject_unk_enum();
	Gundam_unk_enum_info_Arr[214] = Gundam_AGE_1_inject_unk_enum();
	Gundam_unk_enum_info_Arr[215] = Gundam_AGE_2_inject_unk_enum();
	Gundam_unk_enum_info_Arr[216] = GP03_Gundam_Dendrobium_inject_unk_enum();
	Gundam_unk_enum_info_Arr[217] = Strike_Freedom_Gundam_Meteor_inject_unk_enum();
	Gundam_unk_enum_info_Arr[218] = ZZ_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[219] = Qubeley_Mk_II_Puru_inject_unk_enum();
	Gundam_unk_enum_info_Arr[220] = Perfect_Strike_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[221] = Legend_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[222] = Hyperion_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[223] = Dreadnought_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[224] = Astray_Red_Frame_Custom_inject_unk_enum();
	Gundam_unk_enum_info_Arr[225] = Brave_Commander_Test_Type_inject_unk_enum();
	Gundam_unk_enum_info_Arr[226] = Gundam_Zabanya_inject_unk_enum();
	Gundam_unk_enum_info_Arr[227] = Gundam_Heavyarms_Custom_TV_inject_unk_enum();
	Gundam_unk_enum_info_Arr[228] = Gundam_Deathscythe_Hell_TV_inject_unk_enum();
	Gundam_unk_enum_info_Arr[229] = Extreme_Gundam_type_Leos_II_Vs__inject_unk_enum();
	Gundam_unk_enum_info_Arr[230] = Infinite_Justice_Gundam_Meteor_inject_unk_enum();
	Gundam_unk_enum_info_Arr[231] = Vagan_Gear_Sid_inject_unk_enum();
	Gundam_unk_enum_info_Arr[232] = Strike_Freedom_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[233] = Infinite_Justice_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[234] = Gedlav_inject_unk_enum();
	Gundam_unk_enum_info_Arr[235] = GOUF_Ignited_inject_unk_enum();
	Gundam_unk_enum_info_Arr[236] = Destiny_Gundam_Heine_inject_unk_enum();
	Gundam_unk_enum_info_Arr[237] = Marasai_and_Gabthley_inject_unk_enum();
	Gundam_unk_enum_info_Arr[238] = Tieren_Taozi_inject_unk_enum();
	Gundam_unk_enum_info_Arr[239] = Shining_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[240] = Rising_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[241] = Raider_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[242] = Phantom_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[243] = QANT_Full_Saber_inject_unk_enum();
	Gundam_unk_enum_info_Arr[244] = Gundam_AGE_3_inject_unk_enum();
	Gundam_unk_enum_info_Arr[245] = Gundam_AGE_FX_inject_unk_enum();
	Gundam_unk_enum_info_Arr[246] = Zeydra_inject_unk_enum();
	Gundam_unk_enum_info_Arr[247] = Farsia_inject_unk_enum();
	Gundam_unk_enum_info_Arr[248] = Rephaser_Carnage_inject_unk_enum();
	Gundam_unk_enum_info_Arr[249] = Rephaser_Ignith_inject_unk_enum();
	Gundam_unk_enum_info_Arr[250] = Rephaser_Tachyon_inject_unk_enum();
	Gundam_unk_enum_info_Arr[251] = Rephaser_Mystic_inject_unk_enum();
	Gundam_unk_enum_info_Arr[252] = Nightingale_inject_unk_enum();
	Gundam_unk_enum_info_Arr[253] = Gundam_Legilis_inject_unk_enum();
	Gundam_unk_enum_info_Arr[254] = Extreme_Gundam_Dystopia_Phase_inject_unk_enum();
	Gundam_unk_enum_info_Arr[255] = Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[256] = Zeta_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[257] = V2_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[258] = Gundam_Double_X_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[259] = Turn_A_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[260] = Destiny_Gundam_Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[261] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_unk_enum();
	Gundam_unk_enum_info_Arr[262] = Kampfer_inject_unk_enum();
	Gundam_unk_enum_info_Arr[263] = Akatsuki_inject_unk_enum();
	Gundam_unk_enum_info_Arr[264] = Gundam_AGE_2_Dark_Hound_inject_unk_enum();
	Gundam_unk_enum_info_Arr[265] = Extreme_Gundam_Excellia_inject_unk_enum();
	Gundam_unk_enum_info_Arr[266] = G_Self_inject_unk_enum();
	Gundam_unk_enum_info_Arr[267] = Mack_Knife_inject_unk_enum();
	Gundam_unk_enum_info_Arr[268] = G_Self_Perfect_Pack_inject_unk_enum();
	Gundam_unk_enum_info_Arr[269] = Gundam_Barbatos_inject_unk_enum();
	Gundam_unk_enum_info_Arr[270] = Extreme_Gundam_Mk_II_AXE_inject_unk_enum();
	Gundam_unk_enum_info_Arr[271] = Jagd_Doga_inject_unk_enum();
	Gundam_unk_enum_info_Arr[272] = G_Arcane_Full_Dress_inject_unk_enum();
	Gundam_unk_enum_info_Arr[273] = Full_Armor_Gundam__inject_unk_enum();
	Gundam_unk_enum_info_Arr[274] = Baund_Doc_inject_unk_enum();
	Gundam_unk_enum_info_Arr[275] = Gundam_Kimaris_Trooper_inject_unk_enum();
	Gundam_unk_enum_info_Arr[276] = Psycho_Zaku_inject_unk_enum();
	Gundam_unk_enum_info_Arr[277] = Buster_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[278] = Hot_Scramble_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[279] = Gundam_Barbatos_Lupus_inject_unk_enum();
	Gundam_unk_enum_info_Arr[280] = Atlas_Gundam_inject_unk_enum();
	Gundam_unk_enum_info_Arr[281] = Gundam_Gusion_Rebake_Full_City_inject_unk_enum();
	Gundam_unk_enum_info_Arr[282] = Bael_Gundam__inject_unk_enum();
	Gundam_unk_enum_info_Arr[283] = Build_Strike_Gundam_Full_Package_inject_unk_enum();
	Gundam_unk_enum_info_Arr[284] = Montero_inject_unk_enum();
	Gundam_unk_enum_info_Arr[285] = Gundam_Barbatos_Lupus_Rex_inject_unk_enum();
	Gundam_unk_enum_info_Arr[286] = Zaku_Amazing_inject_unk_enum();
	#pragma endregion

	// ADD HERE
	Gundam_unk_enum_info_Arr[287] = Wing_Gundam_Snow_White_Prelude_inject_unk_enum();
	Gundam_unk_enum_info_Arr[288] = Wing_Gundam_Zero_Rebellion_inject_unk_enum();

	// +1 INDEX ON THIS
	Gundam_unk_enum_info_Arr[289] = unk_ID;

	#pragma region Offset_Rewrite
	write_protected_memory(0x00D5AC9C, (int)&Gundam_unk_enum_info_Arr);

	write_protected_memory(0xE0174, unit_unk_info_loop);
	#pragma endregion
}

int inject_unit_update_unit_id_list()
{
	#pragma region Initializations
	int startPos = 0x00B3D498;
	for (int i = 0; i < 35; i++)
	{
		unit_update_unit_id_list Gundam_unit_update_unit_id = *(unit_update_unit_id_list*)startPos;
		Gundam_update_unit_id_list_Arr[i] = Gundam_unit_update_unit_id;
		startPos += 0x4;
	}
	#pragma endregion

	/*
	Gundam_update_unit_id_list_Arr[36] = bael_inject_gundam_update_unit_ID_list();

	Gundam_update_unit_id_list_Arr[37] = infinite_justice_METEOR_inject_gundam_update_unit_ID_list();


	unit_update_unit_id_list Barbatos_Lupus_Rex_Update_Unit_ID_List;
	Barbatos_Lupus_Rex_Update_Unit_ID_List.UnitID = 0xBF91;
	Gundam_update_unit_id_list_Arr[38] = Barbatos_Lupus_Rex_Update_Unit_ID_List;


	unit_update_unit_id_list Bound_Doc_Update_Unit_ID_List;
	Bound_Doc_Update_Unit_ID_List.UnitID = 0x0871;
	Gundam_update_unit_id_list_Arr[39] = Bound_Doc_Update_Unit_ID_List;


	unit_update_unit_id_list AGE_FX_Update_Unit_ID_List;
	AGE_FX_Update_Unit_ID_List.UnitID = 0x8111;
	Gundam_update_unit_id_list_Arr[40] = AGE_FX_Update_Unit_ID_List;


	unit_update_unit_id_list Extreme_Gundam_Type_Leos_II_Vs_Update_Unit_ID_List;
	Extreme_Gundam_Type_Leos_II_Vs_Update_Unit_ID_List.UnitID = 0x84F9;
	Gundam_update_unit_id_list_Arr[41] = Extreme_Gundam_Type_Leos_II_Vs_Update_Unit_ID_List;

	Gundam_update_unit_id_list_Arr[42] = extreme_gundam_Mk_II_AXE_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[43] = GP03_Gundam_Dendrobium_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[44] = Strike_Freedom_Gundam_Meteor_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[45] = Vagan_Gear_Sid_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[46] = Strike_Freedom_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[47] = Infinite_Justice_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[48] = Rephaser_Carnage_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[49] = Rephaser_Ignith_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[50] = Rephaser_Tachyon_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[51] = Rephaser_Mystic_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[52] = Extreme_Gundam_Dystopia_Phase_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[53] = Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[54] = Zeta_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[55] = V2_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[56] = Gundam_Double_X_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[57] = Turn_A_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[58] = Destiny_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[59] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[60] = Brave_Commander_Test_Type_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[61] = Montero_inject_gundam_update_unit_ID_list();
	*/

	#pragma region Original_Gundam_update_unit_id_list_Arr
	Gundam_update_unit_id_list_Arr[36] = Gundam_G_Mecha_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[37] = Gundam_AGE_1_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[38] = Gundam_AGE_2_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[39] = GP03_Gundam_Dendrobium_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[40] = Strike_Freedom_Gundam_Meteor_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[41] = ZZ_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[42] = Qubeley_Mk_II_Puru_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[43] = Perfect_Strike_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[44] = Legend_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[45] = Hyperion_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[46] = Dreadnought_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[47] = Astray_Red_Frame_Custom_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[48] = Brave_Commander_Test_Type_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[49] = Gundam_Zabanya_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[50] = Gundam_Heavyarms_Custom_TV_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[51] = Gundam_Deathscythe_Hell_TV_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[52] = Extreme_Gundam_type_Leos_II_Vs__inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[53] = Infinite_Justice_Gundam_Meteor_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[54] = Vagan_Gear_Sid_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[55] = Strike_Freedom_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[56] = Infinite_Justice_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[57] = Gedlav_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[58] = GOUF_Ignited_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[59] = Destiny_Gundam_Heine_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[60] = Marasai_and_Gabthley_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[61] = Tieren_Taozi_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[62] = Shining_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[63] = Rising_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[64] = Raider_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[65] = Phantom_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[66] = QANT_Full_Saber_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[67] = Gundam_AGE_3_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[68] = Gundam_AGE_FX_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[69] = Zeydra_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[70] = Farsia_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[71] = Rephaser_Carnage_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[72] = Rephaser_Ignith_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[73] = Rephaser_Tachyon_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[74] = Rephaser_Mystic_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[75] = Nightingale_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[76] = Gundam_Legilis_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[77] = Extreme_Gundam_Dystopia_Phase_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[78] = Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[79] = Zeta_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[80] = V2_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[81] = Gundam_Double_X_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[82] = Turn_A_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[83] = Destiny_Gundam_Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[84] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[85] = Kampfer_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[86] = Akatsuki_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[87] = Gundam_AGE_2_Dark_Hound_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[88] = Extreme_Gundam_Excellia_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[89] = G_Self_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[90] = Mack_Knife_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[91] = G_Self_Perfect_Pack_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[92] = Gundam_Barbatos_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[93] = Extreme_Gundam_Mk_II_AXE_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[94] = Jagd_Doga_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[95] = G_Arcane_Full_Dress_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[96] = Full_Armor_Gundam__inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[97] = Baund_Doc_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[98] = Gundam_Kimaris_Trooper_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[99] = Psycho_Zaku_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[100] = Buster_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[101] = Hot_Scramble_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[102] = Gundam_Barbatos_Lupus_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[103] = Atlas_Gundam_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[104] = Gundam_Gusion_Rebake_Full_City_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[105] = Bael_Gundam__inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[106] = Build_Strike_Gundam_Full_Package_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[107] = Montero_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[108] = Gundam_Barbatos_Lupus_Rex_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[109] = Zaku_Amazing_inject_gundam_update_unit_ID_list();
	#pragma endregion

	// ADD HERE
	Gundam_update_unit_id_list_Arr[110] = Wing_Gundam_Snow_White_Prelude_inject_gundam_update_unit_ID_list();
	Gundam_update_unit_id_list_Arr[111] = Wing_Gundam_Zero_Rebellion_inject_gundam_update_unit_ID_list();

	#pragma region Offset_Rewrite
	// For EX-S
	write_protected_memory(0x00D5B304, (int)&Gundam_update_unit_id_list_Arr);
	write_protected_memory(0x00D5BAC8, (int)&Gundam_update_unit_id_list_Arr);

	//*(int*)0x00D5B304 = (int)&Gundam_update_unit_id_list_Arr;
	//*(int*)0x00D5BAC8 = (int)&Gundam_update_unit_id_list_Arr;

	// For others
	write_protected_memory(0xD6465C, (int)&Gundam_update_unit_id_list_Arr + 0x4);

	//*(int*)0xD5BAC4 = (int)&Gundam_update_unit_id_list_Arr + 0x4;

	write_protected_memory(0x118D58, unit_id_list_1_loop_1);
	write_protected_memory(0x118B4C, unit_id_list_1_loop_1);
	write_protected_memory(0x118B18, unit_id_list_1_loop_2);
	write_protected_memory(0x1187B4, unit_id_list_1_loop_2);

	write_protected_memory(0xF2988, unit_id_list_1_loop_3);

	// This enum is used to know how many unit to parse
	write_protected_memory(0xB3D528, unit_id_list_1_count);

	//*(int*)0x118D5B = unit_id_list_1_loop_1;
	//*(int*)0x118B4F = unit_id_list_1_loop_1;
	//*(int*)0x118B1B = unit_id_list_1_loop_1;
	//*(int*)0x1187B7 = unit_id_list_1_loop_1;

	//*(int*)0xF298B = unit_id_list_1_loop_2;
	#pragma endregion
}

int inject_unit_update_unit_id_list_2()
{
	#pragma region Initializations
	int startPos = 0x00B412DC;
	for (int i = 0; i < 28; i++)
	{
		unit_update_unit_id_list Gundam_unit_update_unit_id = *(unit_update_unit_id_list*)startPos;
		Gundam_update_unit_id_list_2_Arr[i] = Gundam_unit_update_unit_id;
		startPos += 0x4;
	}
	#pragma endregion

	/*
	Gundam_update_unit_id_list_2_Arr[29] = bael_inject_update_unit_ID_list_2();

	Gundam_update_unit_id_list_2_Arr[30] = infinite_justice_METEOR_inject_update_unit_ID_list_2();


	unit_update_unit_id_list Barbatos_Lupus_Rex_Update_Unit_ID_List_2;
	Barbatos_Lupus_Rex_Update_Unit_ID_List_2.UnitID = 0xBF91;
	Gundam_update_unit_id_list_2_Arr[31] = Barbatos_Lupus_Rex_Update_Unit_ID_List_2;


	unit_update_unit_id_list Bound_Doc_Update_Unit_ID_List_2;
	Bound_Doc_Update_Unit_ID_List_2.UnitID = 0x0871;
	Gundam_update_unit_id_list_2_Arr[32] = Bound_Doc_Update_Unit_ID_List_2;


	unit_update_unit_id_list AGE_FX_Update_Unit_ID_List_2;
	AGE_FX_Update_Unit_ID_List_2.UnitID = 0x8111;
	Gundam_update_unit_id_list_2_Arr[33] = AGE_FX_Update_Unit_ID_List_2;


	unit_update_unit_id_list Extreme_Gundam_Type_Leos_II_Vs_Update_Unit_ID_List_2;
	Extreme_Gundam_Type_Leos_II_Vs_Update_Unit_ID_List_2.UnitID = 0x84F9;
	Gundam_update_unit_id_list_2_Arr[34] = Extreme_Gundam_Type_Leos_II_Vs_Update_Unit_ID_List_2;

	Gundam_update_unit_id_list_2_Arr[35] = extreme_gundam_Mk_II_AXE_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[36] = GP03_Gundam_Dendrobium_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[37] = Strike_Freedom_Gundam_Meteor_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[38] = Vagan_Gear_Sid_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[39] = Strike_Freedom_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[40] = Infinite_Justice_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[41] = Rephaser_Carnage_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[42] = Rephaser_Ignith_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[43] = Rephaser_Tachyon_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[44] = Rephaser_Mystic_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[45] = Extreme_Gundam_Dystopia_Phase_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[46] = Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[47] = Zeta_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[48] = V2_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[49] = Gundam_Double_X_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[50] = Turn_A_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[51] = Destiny_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[52] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[53] = Brave_Commander_Test_Type_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[54] = Montero_inject_update_unit_ID_list_2();
	*/

	#pragma region Original_Gundam_update_unit_id_list_2_Arr
	Gundam_update_unit_id_list_2_Arr[29] = Gundam_G_Mecha_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[30] = Gundam_AGE_1_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[31] = Gundam_AGE_2_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[32] = GP03_Gundam_Dendrobium_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[33] = Strike_Freedom_Gundam_Meteor_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[34] = ZZ_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[35] = Qubeley_Mk_II_Puru_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[36] = Perfect_Strike_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[37] = Legend_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[38] = Hyperion_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[39] = Dreadnought_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[40] = Astray_Red_Frame_Custom_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[41] = Brave_Commander_Test_Type_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[42] = Gundam_Zabanya_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[43] = Gundam_Heavyarms_Custom_TV_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[44] = Gundam_Deathscythe_Hell_TV_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[45] = Extreme_Gundam_type_Leos_II_Vs__inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[46] = Infinite_Justice_Gundam_Meteor_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[47] = Vagan_Gear_Sid_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[48] = Strike_Freedom_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[49] = Infinite_Justice_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[50] = Gedlav_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[51] = GOUF_Ignited_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[52] = Destiny_Gundam_Heine_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[53] = Marasai_and_Gabthley_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[54] = Tieren_Taozi_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[55] = Shining_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[56] = Rising_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[57] = Raider_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[58] = Phantom_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[59] = QANT_Full_Saber_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[60] = Gundam_AGE_3_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[61] = Gundam_AGE_FX_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[62] = Zeydra_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[63] = Farsia_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[64] = Rephaser_Carnage_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[65] = Rephaser_Ignith_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[66] = Rephaser_Tachyon_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[67] = Rephaser_Mystic_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[68] = Nightingale_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[69] = Gundam_Legilis_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[70] = Extreme_Gundam_Dystopia_Phase_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[71] = Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[72] = Zeta_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[73] = V2_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[74] = Gundam_Double_X_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[75] = Turn_A_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[76] = Destiny_Gundam_Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[77] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[78] = Kampfer_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[79] = Akatsuki_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[80] = Gundam_AGE_2_Dark_Hound_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[81] = Extreme_Gundam_Excellia_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[82] = G_Self_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[83] = Mack_Knife_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[84] = G_Self_Perfect_Pack_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[85] = Gundam_Barbatos_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[86] = Extreme_Gundam_Mk_II_AXE_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[87] = Jagd_Doga_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[88] = G_Arcane_Full_Dress_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[89] = Full_Armor_Gundam__inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[90] = Baund_Doc_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[91] = Gundam_Kimaris_Trooper_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[92] = Psycho_Zaku_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[93] = Buster_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[94] = Hot_Scramble_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[95] = Gundam_Barbatos_Lupus_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[96] = Atlas_Gundam_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[97] = Gundam_Gusion_Rebake_Full_City_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[98] = Bael_Gundam__inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[99] = Build_Strike_Gundam_Full_Package_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[100] = Montero_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[101] = Gundam_Barbatos_Lupus_Rex_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[102] = Zaku_Amazing_inject_update_unit_ID_list_2();
	#pragma endregion

	// ADD HERE
	Gundam_update_unit_id_list_2_Arr[103] = Wing_Gundam_Snow_White_Prelude_inject_update_unit_ID_list_2();
	Gundam_update_unit_id_list_2_Arr[104] = Wing_Gundam_Zero_Rebellion_inject_update_unit_ID_list_2();

	#pragma region Offset_Rewrite
	write_protected_memory(0xD6465C, (int)&Gundam_update_unit_id_list_2_Arr);
	//*(int*)0xD6465C = (int)&Gundam_update_unit_id_list_2_Arr;
	#pragma endregion
}

int inject_unit_string_info()
{
	#pragma region Initialization
	int startPos = 0x00C6026C;
	for (int i = 0; i < 275; i++)
	{
		unit_string_info Gundam_Hash_Info = *(unit_string_info*)startPos;
		Gundam_string_info_Arr[i] = Gundam_Hash_Info;
		startPos += 0x18;
	}

	add_long_pilot_name_string_ID("F49041", 2);
	add_short_pilot_name_string_ID("S49041", 2);
	add_long_unit_name_string_ID("P49041", 2);
	add_short_unit_name_string_ID("Q49041", 2);

	add_long_pilot_name_string_ID("F2161", 3);
	add_short_pilot_name_string_ID("S2161", 3);
	add_long_unit_name_string_ID("P2161", 3);
	add_short_unit_name_string_ID("Q2161", 3);

	add_long_pilot_name_string_ID("F33041", 4);
	add_short_pilot_name_string_ID("S33041", 4);
	add_long_unit_name_string_ID("P33041", 4);
	add_short_unit_name_string_ID("Q33041", 4);

	add_long_pilot_name_string_ID("F34041", 5);
	add_short_pilot_name_string_ID("S34041", 5);
	add_long_unit_name_string_ID("P34041", 5);
	add_short_unit_name_string_ID("Q34041", 5);
	#pragma endregion

	// We just need to set a pointer to the string, no matter where the pointer is located (in EBOOT or not)

	/*
	Gundam_string_info_Arr[275] = bael_inject_string();

	Gundam_string_info_Arr[276] = infinite_justice_METEOR_inject_string();

	unit_string_info Barbatos_Lupus_Rex_String;
	Barbatos_Lupus_Rex_String.UnitID = 0xBF91;
	Barbatos_Lupus_Rex_String.unk_enum = 0xFFFFFFFF;
	Barbatos_Lupus_Rex_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[2].long_pilot_name_str;
	Barbatos_Lupus_Rex_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[2].short_pilot_name_str;
	Barbatos_Lupus_Rex_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[2].long_unit_name_str;
	Barbatos_Lupus_Rex_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[2].short_unit_name_str;

	Gundam_string_info_Arr[277] = Barbatos_Lupus_Rex_String;

	unit_string_info Bound_Doc_String;
	Bound_Doc_String.UnitID = 0x0871;
	Bound_Doc_String.unk_enum = 0xFFFFFFFF;
	Bound_Doc_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[3].long_pilot_name_str;
	Bound_Doc_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[3].short_pilot_name_str;
	Bound_Doc_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[3].long_unit_name_str;
	Bound_Doc_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[3].short_unit_name_str;

	Gundam_string_info_Arr[278] = Bound_Doc_String;

	unit_string_info AGE_FX_String;
	AGE_FX_String.UnitID = 0x8111;
	AGE_FX_String.unk_enum = 0xFFFFFFFF;
	AGE_FX_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[4].long_pilot_name_str;
	AGE_FX_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[4].short_pilot_name_str;
	AGE_FX_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[4].long_unit_name_str;
	AGE_FX_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[4].short_unit_name_str;

	Gundam_string_info_Arr[279] = AGE_FX_String;

	unit_string_info Extreme_Gundam_Type_Leos_II_Vs_String;
	Extreme_Gundam_Type_Leos_II_Vs_String.UnitID = 0x84F9;
	Extreme_Gundam_Type_Leos_II_Vs_String.unk_enum = 0xFFFFFFFF;
	Extreme_Gundam_Type_Leos_II_Vs_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[5].long_pilot_name_str;
	Extreme_Gundam_Type_Leos_II_Vs_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[5].short_pilot_name_str;
	Extreme_Gundam_Type_Leos_II_Vs_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[5].long_unit_name_str;
	Extreme_Gundam_Type_Leos_II_Vs_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[5].short_unit_name_str;

	Gundam_string_info_Arr[280] = Extreme_Gundam_Type_Leos_II_Vs_String;

	Gundam_string_info_Arr[281] = extreme_gundam_Mk_II_AXE_inject_string();

	Gundam_string_info_Arr[282] = GP03_Gundam_Dendrobium_inject_string();
	Gundam_string_info_Arr[283] = Strike_Freedom_Gundam_Meteor_inject_string();
	Gundam_string_info_Arr[284] = Vagan_Gear_Sid_inject_string();
	Gundam_string_info_Arr[285] = Strike_Freedom_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[286] = Infinite_Justice_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[287] = Rephaser_Carnage_inject_string();
	Gundam_string_info_Arr[288] = Rephaser_Ignith_inject_string();
	Gundam_string_info_Arr[289] = Rephaser_Tachyon_inject_string();
	Gundam_string_info_Arr[290] = Rephaser_Mystic_inject_string();
	Gundam_string_info_Arr[291] = Extreme_Gundam_Dystopia_Phase_inject_string();
	Gundam_string_info_Arr[292] = Gundam_Boss_inject_string();
	Gundam_string_info_Arr[293] = Zeta_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[294] = V2_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[295] = Gundam_Double_X_Boss_inject_string();
	Gundam_string_info_Arr[296] = Turn_A_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[297] = Destiny_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[298] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_string();
	Gundam_string_info_Arr[299] = Brave_Commander_Test_Type_inject_string();
	Gundam_string_info_Arr[300] = Montero_inject_string();
	*/

	#pragma region Original_Gundam_string_info_Arr
	Gundam_string_info_Arr[275] = Gundam_G_Mecha_inject_string();
	Gundam_string_info_Arr[276] = Gundam_AGE_1_inject_string();
	Gundam_string_info_Arr[277] = Gundam_AGE_2_inject_string();
	Gundam_string_info_Arr[278] = GP03_Gundam_Dendrobium_inject_string();
	Gundam_string_info_Arr[279] = Strike_Freedom_Gundam_Meteor_inject_string();
	Gundam_string_info_Arr[280] = ZZ_Gundam_inject_string();
	Gundam_string_info_Arr[281] = Qubeley_Mk_II_Puru_inject_string();
	Gundam_string_info_Arr[282] = Perfect_Strike_Gundam_inject_string();
	Gundam_string_info_Arr[283] = Legend_Gundam_inject_string();
	Gundam_string_info_Arr[284] = Hyperion_Gundam_inject_string();
	Gundam_string_info_Arr[285] = Dreadnought_Gundam_inject_string();
	Gundam_string_info_Arr[286] = Astray_Red_Frame_Custom_inject_string();
	Gundam_string_info_Arr[287] = Brave_Commander_Test_Type_inject_string();
	Gundam_string_info_Arr[288] = Gundam_Zabanya_inject_string();
	Gundam_string_info_Arr[289] = Gundam_Heavyarms_Custom_TV_inject_string();
	Gundam_string_info_Arr[290] = Gundam_Deathscythe_Hell_TV_inject_string();
	Gundam_string_info_Arr[291] = Extreme_Gundam_type_Leos_II_Vs__inject_string();
	Gundam_string_info_Arr[292] = Infinite_Justice_Gundam_Meteor_inject_string();
	Gundam_string_info_Arr[293] = Vagan_Gear_Sid_inject_string();
	Gundam_string_info_Arr[294] = Strike_Freedom_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[295] = Infinite_Justice_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[296] = Gedlav_inject_string();
	Gundam_string_info_Arr[297] = GOUF_Ignited_inject_string();
	Gundam_string_info_Arr[298] = Destiny_Gundam_Heine_inject_string();
	Gundam_string_info_Arr[299] = Marasai_and_Gabthley_inject_string();
	Gundam_string_info_Arr[300] = Tieren_Taozi_inject_string();
	Gundam_string_info_Arr[301] = Shining_Gundam_inject_string();
	Gundam_string_info_Arr[302] = Rising_Gundam_inject_string();
	Gundam_string_info_Arr[303] = Raider_Gundam_inject_string();
	Gundam_string_info_Arr[304] = Phantom_Gundam_inject_string();
	Gundam_string_info_Arr[305] = QANT_Full_Saber_inject_string();
	Gundam_string_info_Arr[306] = Gundam_AGE_3_inject_string();
	Gundam_string_info_Arr[307] = Gundam_AGE_FX_inject_string();
	Gundam_string_info_Arr[308] = Zeydra_inject_string();
	Gundam_string_info_Arr[309] = Farsia_inject_string();
	Gundam_string_info_Arr[310] = Rephaser_Carnage_inject_string();
	Gundam_string_info_Arr[311] = Rephaser_Ignith_inject_string();
	Gundam_string_info_Arr[312] = Rephaser_Tachyon_inject_string();
	Gundam_string_info_Arr[313] = Rephaser_Mystic_inject_string();
	Gundam_string_info_Arr[314] = Nightingale_inject_string();
	Gundam_string_info_Arr[315] = Gundam_Legilis_inject_string();
	Gundam_string_info_Arr[316] = Extreme_Gundam_Dystopia_Phase_inject_string();
	Gundam_string_info_Arr[317] = Gundam_Boss_inject_string();
	Gundam_string_info_Arr[318] = Zeta_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[319] = V2_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[320] = Gundam_Double_X_Boss_inject_string();
	Gundam_string_info_Arr[321] = Turn_A_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[322] = Destiny_Gundam_Boss_inject_string();
	Gundam_string_info_Arr[323] = Extreme_Gundam_type_Leos_II_Vs__Boss_inject_string();
	Gundam_string_info_Arr[324] = Kampfer_inject_string();
	Gundam_string_info_Arr[325] = Akatsuki_inject_string();
	Gundam_string_info_Arr[326] = Gundam_AGE_2_Dark_Hound_inject_string();
	Gundam_string_info_Arr[327] = Extreme_Gundam_Excellia_inject_string();
	Gundam_string_info_Arr[328] = G_Self_inject_string();
	Gundam_string_info_Arr[329] = Mack_Knife_inject_string();
	Gundam_string_info_Arr[330] = G_Self_Perfect_Pack_inject_string();
	Gundam_string_info_Arr[331] = Gundam_Barbatos_inject_string();
	Gundam_string_info_Arr[332] = Extreme_Gundam_Mk_II_AXE_inject_string();
	Gundam_string_info_Arr[333] = Jagd_Doga_inject_string();
	Gundam_string_info_Arr[334] = G_Arcane_Full_Dress_inject_string();
	Gundam_string_info_Arr[335] = Full_Armor_Gundam__inject_string();
	Gundam_string_info_Arr[336] = Baund_Doc_inject_string();
	Gundam_string_info_Arr[337] = Gundam_Kimaris_Trooper_inject_string();
	Gundam_string_info_Arr[338] = Psycho_Zaku_inject_string();
	Gundam_string_info_Arr[339] = Buster_Gundam_inject_string();
	Gundam_string_info_Arr[340] = Hot_Scramble_Gundam_inject_string();
	Gundam_string_info_Arr[341] = Gundam_Barbatos_Lupus_inject_string();
	Gundam_string_info_Arr[342] = Atlas_Gundam_inject_string();
	Gundam_string_info_Arr[343] = Gundam_Gusion_Rebake_Full_City_inject_string();
	Gundam_string_info_Arr[344] = Bael_Gundam__inject_string();
	Gundam_string_info_Arr[345] = Build_Strike_Gundam_Full_Package_inject_string();
	Gundam_string_info_Arr[346] = Montero_inject_string();
	Gundam_string_info_Arr[347] = Gundam_Barbatos_Lupus_Rex_inject_string();
	Gundam_string_info_Arr[348] = Zaku_Amazing_inject_string();
	#pragma endregion

	// ADD HERE
	Gundam_string_info_Arr[349] = Wing_Gundam_Snow_White_Prelude_inject_string();
	Gundam_string_info_Arr[350] = Wing_Gundam_Zero_Rebellion_inject_string();

	#pragma region Offset_Rewrite
	write_protected_memory(0x00D5ACA4, (int)&Gundam_string_info_Arr);
	//*(int*)0x00D5ACA4 = (int)&Gundam_string_info_Arr;
	write_protected_memory(0xE0CA8, unit_string_info_loop);
	//*(int*)0xE0CAB = unit_string_info_loop;
	#pragma endregion
}

int inject_map_hash_info()
{
	int startPos = 0x00B39EE4 + 0x2B44;
	for (int i = 0; i < 213; i++)
	{
		map_hash_info map_hash_info_list = *(map_hash_info*)startPos;
		map_hash_info_arr[i] = map_hash_info_list;
		startPos += 0x8;
	}

	map_hash_info minsry_info_list;
	minsry_info_list.map_hash = 0xCE695700;
	minsry_info_list.unk_enum = 0;

	map_hash_info armory_one_info_list;
	armory_one_info_list.map_hash = 0x76D53065;
	armory_one_info_list.unk_enum = 0;

	map_hash_info island_ease_info_list;
	island_ease_info_list.map_hash = 0x64609F8B;
	island_ease_info_list.unk_enum = 0;

	map_hash_info absolute_line_of_defense_info_list;
	absolute_line_of_defense_info_list.map_hash = 0xDCDCF8EE;
	absolute_line_of_defense_info_list.unk_enum = 0;

	map_hash_info EXTREME_TRANSCEND_info_list;
	EXTREME_TRANSCEND_info_list.map_hash = 0x84BFE8B8;
	EXTREME_TRANSCEND_info_list.unk_enum = 0;

	map_hash_info EXTREME_FATALITY_info_list;
	EXTREME_FATALITY_info_list.map_hash = 0x3C038FDD;
	EXTREME_FATALITY_info_list.unk_enum = 0;

	map_hash_info EXTREME_EXTERMINATION_info_list;
	EXTREME_EXTERMINATION_info_list.map_hash = 0x5922D4CC;
	EXTREME_EXTERMINATION_info_list.unk_enum = 0;

	map_hash_info capital_territory_info_list;
	capital_territory_info_list.map_hash = 0xF32B1C47;
	capital_territory_info_list.unk_enum = 0;

	map_hash_info la_gramis_info_list;
	la_gramis_info_list.map_hash = 0x4B977B22;
	la_gramis_info_list.unk_enum = 0;

	map_hash_info_arr[213] = minsry_info_list;
	map_hash_info_arr[214] = armory_one_info_list;
	map_hash_info_arr[215] = island_ease_info_list;
	map_hash_info_arr[216] = absolute_line_of_defense_info_list;
	map_hash_info_arr[217] = EXTREME_TRANSCEND_info_list;
	map_hash_info_arr[218] = EXTREME_FATALITY_info_list;
	map_hash_info_arr[219] = EXTREME_EXTERMINATION_info_list;
	map_hash_info_arr[220] = capital_territory_info_list;
	map_hash_info_arr[221] = la_gramis_info_list;

	//write_protected_memory(0x00D5A9E0, (int)&Gundam_Hash_Info_Arr);

	/* The hash info list and map info list hashes section share the same starting pointer.
	*  So we had to seperate the lists, making it two lists.
	*  Since global variables are assigned to static position, and each Arr has 500 length.
	*  Theoretically, it will have 0x6590 length because 500 * 0x34 = 0x6590
	*  We can't have more than 630 in hash or else the add will exceed 0x7FFF (negative).
	*  e.g. 630 * 0x34 = 0x7FF8 < 0x7FFF.
	*/
	int map_list_new_offset = (0x39690000) + (0x6590); // 3969 is the original opcode to write, add.

	// Map_list_offset addition
	write_protected_memory(0xD574C, map_list_new_offset);
}