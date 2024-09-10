#include "Gundam_AGE_1.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Gundam_AGE_1_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Gundam_AGE_1_VoiceFileList;
    Gundam_AGE_1_VoiceFileList.UnitID = 0x000080F3;
    Gundam_AGE_1_VoiceFileList.index = 0x00000116;
    Gundam_AGE_1_VoiceFileList.voice_file_list_hash = 0xEA033FB6;
    Gundam_AGE_1_VoiceFileList.unk_enum_0x8 = 0x000005A7;
    return Gundam_AGE_1_VoiceFileList;
}

unit_voice_hash_list_0x28 Gundam_AGE_1_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Gundam_AGE_1_ArcadeSelectHash;
    Gundam_AGE_1_ArcadeSelectHash.hash_1 = 0x17A893F5; // VO_33_P01_CHARA_SELECT_01
    Gundam_AGE_1_ArcadeSelectHash.hash_2 = 0x8EA1C24F; // VO_33_P01_CHARA_SELECT_02
    Gundam_AGE_1_ArcadeSelectHash.hash_3 = 0xF9A6F2D9; // VO_33_P01_CHARA_SELECT_03
    Gundam_AGE_1_ArcadeSelectHash.hash_4 = 0x67C2677A; // VO_33_P01_CHARA_SELECT_04
    Gundam_AGE_1_ArcadeSelectHash.hash_5 = 0x10C557EC; // VO_33_P01_CHARA_SELECT_05
    Gundam_AGE_1_ArcadeSelectHash.hash_6 = 0x89CC0656; // VO_33_P01_CHARA_SELECT_06
    Gundam_AGE_1_ArcadeSelectHash.hash_7 = 0;
    Gundam_AGE_1_ArcadeSelectHash.hash_8 = 0;
    Gundam_AGE_1_ArcadeSelectHash.hash_9 = 0;
    Gundam_AGE_1_ArcadeSelectHash.hash_10 = 0;

    return Gundam_AGE_1_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Gundam_AGE_1_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Gundam_AGE_1_ArcadeContinueNoHash;
    Gundam_AGE_1_ArcadeContinueNoHash.hash_1 = 0x670E3AF5; // VO_33_P01_GAME_OVER_01
    Gundam_AGE_1_ArcadeContinueNoHash.hash_2 = 0xFE076B4F; // VO_33_P01_GAME_OVER_02
    Gundam_AGE_1_ArcadeContinueNoHash.hash_3 = 0;
    Gundam_AGE_1_ArcadeContinueNoHash.hash_4 = 0;
    Gundam_AGE_1_ArcadeContinueNoHash.hash_5 = 0;

    return Gundam_AGE_1_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Gundam_AGE_1_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Gundam_AGE_1_ArcadeContinueHash;
    Gundam_AGE_1_ArcadeContinueHash.hash_1 = 0x6479F489; // VO_33_P01_CONTINUE_DEC_01
    Gundam_AGE_1_ArcadeContinueHash.hash_2 = 0xFD70A533; // VO_33_P01_CONTINUE_DEC_02
    Gundam_AGE_1_ArcadeContinueHash.hash_3 = 0x8A7795A5; // VO_33_P01_CONTINUE_DEC_03
    Gundam_AGE_1_ArcadeContinueHash.hash_4 = 0x14130006; // VO_33_P01_CONTINUE_DEC_04
    Gundam_AGE_1_ArcadeContinueHash.hash_5 = 0;

    return Gundam_AGE_1_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Gundam_AGE_1_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Gundam_AGE_1_ArcadeContinueYesHash;
    Gundam_AGE_1_ArcadeContinueYesHash.hash_1 = 0xEEDED3E1; // VO_33_P01_CONTINUE_01
    Gundam_AGE_1_ArcadeContinueYesHash.hash_2 = 0x77D7825B; // VO_33_P01_CONTINUE_02
    Gundam_AGE_1_ArcadeContinueYesHash.hash_3 = 0x00D0B2CD; // VO_33_P01_CONTINUE_03
    Gundam_AGE_1_ArcadeContinueYesHash.hash_4 = 0x6479F489; // VO_33_P01_CONTINUE_DEC_01
    Gundam_AGE_1_ArcadeContinueYesHash.hash_5 = 0xFD70A533; // VO_33_P01_CONTINUE_DEC_02
    Gundam_AGE_1_ArcadeContinueYesHash.hash_6 = 0x8A7795A5; // VO_33_P01_CONTINUE_DEC_03
    Gundam_AGE_1_ArcadeContinueYesHash.hash_7 = 0x14130006; // VO_33_P01_CONTINUE_DEC_04
    Gundam_AGE_1_ArcadeContinueYesHash.hash_8 = 0;
    Gundam_AGE_1_ArcadeContinueYesHash.hash_9 = 0;
    Gundam_AGE_1_ArcadeContinueYesHash.hash_10 = 0;

    return Gundam_AGE_1_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Gundam_AGE_1_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Gundam_AGE_1_BandaiNamcoGamesHash;
    Gundam_AGE_1_BandaiNamcoGamesHash.hash_1 = 0xDDA21596; // VO_33_P01_BNG_LOGO_01
    Gundam_AGE_1_BandaiNamcoGamesHash.hash_2 = 0;

    return Gundam_AGE_1_BandaiNamcoGamesHash;
}

unit_hash_info Gundam_AGE_1_inject_unit_hash_info()
{
    unit_hash_info Gundam_AGE_1;
    Gundam_AGE_1.UnitID = 0x000080F3;
    Gundam_AGE_1.unk0 = 0xDDC3CBD6;
    Gundam_AGE_1.DataScript = 0x78DC59E6;
    Gundam_AGE_1.ModelText = 0x0BB357B6;
    Gundam_AGE_1.OMO = 0x1341DBCC;
    Gundam_AGE_1.EIDX = 0x50DFEBD6;
    Gundam_AGE_1.Sound = 0x6A8D2364;
    Gundam_AGE_1.GlobalPilotVoice = 0xCC91F898;
    Gundam_AGE_1.WeaponImage = 0x95BC89D5;
    Gundam_AGE_1.IngameImage = 0x95BC89D5;
    Gundam_AGE_1.KPKP = 0x06C34EAB;
    Gundam_AGE_1.VoiceFileList = 0xEA033FB6;
    Gundam_AGE_1.Stream = 0xCC4E7D8D;

    return Gundam_AGE_1;
}

unit_unk_enum_info Gundam_AGE_1_inject_unk_enum()
{
    unit_unk_enum_info Gundam_AGE_1_unk_Enum;
    Gundam_AGE_1_unk_Enum.UnitID = 0x000080F3;
    Gundam_AGE_1_unk_Enum.unk_enum = 0x1;
    return Gundam_AGE_1_unk_Enum;
}

unit_update_unit_id_list Gundam_AGE_1_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Gundam_AGE_1_Update_Unit_ID_List;
    Gundam_AGE_1_Update_Unit_ID_List.UnitID = 0x000080F3;
    return Gundam_AGE_1_Update_Unit_ID_List;
}

unit_update_unit_id_list Gundam_AGE_1_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Gundam_AGE_1_Unit_ID_List_2;
    Gundam_AGE_1_Unit_ID_List_2.UnitID = 0x000080F3;
    return Gundam_AGE_1_Unit_ID_List_2;
}

unit_string_info Gundam_AGE_1_inject_string()
{
    add_long_pilot_name_string_ID("F33011", 7);
    add_short_pilot_name_string_ID("S33011", 7);
    add_long_unit_name_string_ID("P33011", 7);
    add_short_unit_name_string_ID("Q33011", 7);

    unit_string_info Gundam_AGE_1_Gundam_String;
    Gundam_AGE_1_Gundam_String.UnitID = 0x000080F3;
    Gundam_AGE_1_Gundam_String.unk_enum = 0xFFFFFFFF;
    Gundam_AGE_1_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[7].long_pilot_name_str;
    Gundam_AGE_1_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[7].short_pilot_name_str;
    Gundam_AGE_1_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[7].long_unit_name_str;
    Gundam_AGE_1_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[7].short_unit_name_str;

    return Gundam_AGE_1_Gundam_String;
}
