#include "Bael.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info bael_inject_unit_voice_file_list_info()
{
	unit_voice_file_list_info BaelVoiceFileList;
	BaelVoiceFileList.UnitID = 0xBF87;
	BaelVoiceFileList.index = 0x10E;
	BaelVoiceFileList.voice_file_list_hash = 0x2F10456E;
	BaelVoiceFileList.unk_enum_0x8 = 0x5A0;
	return BaelVoiceFileList;
}

unit_voice_hash_list_0x28 bael_inject_arcade_select_hash()
{
	unit_voice_hash_list_0x28 BaelArcadeSelectHash;
	BaelArcadeSelectHash.hash_1 = 0x677b3579; // VO_49_P03_CHARA_SELECT_01
	BaelArcadeSelectHash.hash_2 = 0xfe7264c3; // VO_49_P03_CHARA_SELECT_02
	BaelArcadeSelectHash.hash_3 = 0x89755455; // VO_49_P03_CHARA_SELECT_03
	BaelArcadeSelectHash.hash_4 = 0x1711c1f6; // VO_49_P03_CHARA_SELECT_04
	BaelArcadeSelectHash.hash_5 = 0x6016f160; // VO_49_P03_CHARA_SELECT_05
	BaelArcadeSelectHash.hash_6 = 0xf91fa0da; // VO_49_P03_CHARA_SELECT_06
	BaelArcadeSelectHash.hash_7 = 0;
	BaelArcadeSelectHash.hash_8 = 0;
	BaelArcadeSelectHash.hash_9 = 0;
	BaelArcadeSelectHash.hash_10 = 0;
	return BaelArcadeSelectHash;
}

unit_voice_hash_list_0x14 bael_inject_arcade_continue_no_hash()
{
	unit_voice_hash_list_0x14 BaelArcadeContinueNoHash;
	BaelArcadeContinueNoHash.hash_1 = 0xdedbb09c; // VO_49_P03_GAME_OVER_01
	BaelArcadeContinueNoHash.hash_2 = 0x47d2e126; // VO_49_P03_GAME_OVER_02
	BaelArcadeContinueNoHash.hash_3 = 0;
	BaelArcadeContinueNoHash.hash_4 = 0;
	BaelArcadeContinueNoHash.hash_5 = 0;
	return BaelArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 bael_inject_arcade_continue_prompt_hash()
{
	unit_voice_hash_list_0x18 BaelArcadeContinueHash;
	BaelArcadeContinueHash.hash_1 = 0x14aa5205; // VO_49_P03_CONTINUE_DEC_01
	BaelArcadeContinueHash.hash_2 = 0x8da303bf; // VO_49_P03_CONTINUE_DEC_02
	BaelArcadeContinueHash.hash_3 = 0;
	BaelArcadeContinueHash.hash_4 = 0;
	BaelArcadeContinueHash.hash_5 = 0;
	BaelArcadeContinueHash.hash_6 = 0;
	return BaelArcadeContinueHash;
}

unit_voice_hash_list_0x28 bael_inject_arcade_continue_yes_hash()
{
	unit_voice_hash_list_0x28 BaelArcadeContinueYesHash;
	BaelArcadeContinueYesHash.hash_1 = 0x5d80b397; // VO_49_P03_CONTINUE_01
	BaelArcadeContinueYesHash.hash_2 = 0xc489e22d; // VO_49_P03_CONTINUE_02
	BaelArcadeContinueYesHash.hash_3 = 0;
	BaelArcadeContinueYesHash.hash_4 = 0;
	BaelArcadeContinueYesHash.hash_5 = 0;
	BaelArcadeContinueYesHash.hash_6 = 0;
	BaelArcadeContinueYesHash.hash_7 = 0;
	BaelArcadeContinueYesHash.hash_8 = 0;
	BaelArcadeContinueYesHash.hash_9 = 0;
	BaelArcadeContinueYesHash.hash_10 = 0;
	return BaelArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 bael_inject_bandai_namco_games_serifu_hash()
{
	unit_voice_hash_list_0x8 BaelBandaiNamcoGamesHash;
	BaelBandaiNamcoGamesHash.hash_1 = 0x677b3579; // VO_49_P03_CHARA_SELECT_01
	BaelBandaiNamcoGamesHash.hash_2 = 0xfe7264c3; // VO_49_P03_CHARA_SELECT_02
	return BaelBandaiNamcoGamesHash;
}

unit_hash_info bael_inject_unit_hash_info()
{
	unit_hash_info Bael;
	Bael.UnitID = 0xBF87;
	Bael.unk0 = 0xDDC3CBD6;
	Bael.DataScript = 0xD008EA2A;
	Bael.ModelText = 0xA367E47A;
	Bael.OMO = 0x813B81E4;
	Bael.EIDX = 0xC2A5B1FE;
	Bael.Sound = 0x284BB666;
	Bael.GlobalPilotVoice = 0x99B9A62E;
	Bael.WeaponImage = 0x26D01078;
	Bael.IngameImage = 0xDFA5898F;
	Bael.KPKP = 0x79095B4E;
	Bael.VoiceFileList = 0x2F10456E;
	Bael.Stream = 0x0E8D492C;
	return Bael;
}

unit_unk_enum_info bael_inject_unk_enum()
{
	unit_unk_enum_info Bael_Gundam_unk_Enum;
	Bael_Gundam_unk_Enum.UnitID = 0xBF87;
	Bael_Gundam_unk_Enum.unk_enum = 0x1;
	return Bael_Gundam_unk_Enum;
}

unit_update_unit_id_list bael_inject_gundam_update_unit_ID_list()
{
	unit_update_unit_id_list Bael_Gundam_Update_Unit_ID_List;
	Bael_Gundam_Update_Unit_ID_List.UnitID = 0xBF87;
	return Bael_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list bael_inject_update_unit_ID_list_2()
{
	unit_update_unit_id_list Bael_Update_Unit_ID_List_2;
	Bael_Update_Unit_ID_List_2.UnitID = 0xBF87;
	return Bael_Update_Unit_ID_List_2;
}

unit_string_info bael_inject_string()
{
	add_long_pilot_name_string_ID("F49031", 0);
	add_short_pilot_name_string_ID("S49031", 0);
	add_long_unit_name_string_ID("P49031", 0);
	add_short_unit_name_string_ID("Q49031", 0);

	unit_string_info Bael_Gundam_String;
	Bael_Gundam_String.UnitID = 0xBF87;
	Bael_Gundam_String.unk_enum = 0xFFFFFFFF;
	Bael_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[0].long_pilot_name_str;
	Bael_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[0].short_pilot_name_str;
	Bael_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[0].long_unit_name_str;
	Bael_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[0].short_unit_name_str;
	/*
	Bael_Gundam_String.long_unit_name_str = 0x00B562F0;
	Bael_Gundam_String.short_unit_name_str = 0x00B562F8;
	Bael_Gundam_String.long_pilot_name_str = 0x00B56300;
	Bael_Gundam_String.short_pilot_name_str = 0x00B56308;
	*/
	
	return Bael_Gundam_String;
}

