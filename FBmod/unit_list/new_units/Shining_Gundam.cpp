

#include "Shining_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Shining_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Shining_Gundam_VoiceFileList;
    Shining_Gundam_VoiceFileList.UnitID = 0x0000468D;
    Shining_Gundam_VoiceFileList.index = 0x0000012F;
    Shining_Gundam_VoiceFileList.voice_file_list_hash = 0xA4AAA229;
    Shining_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005C0;
    return Shining_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 Shining_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Shining_Gundam_ArcadeSelectHash;
    Shining_Gundam_ArcadeSelectHash.hash_1 = 0x4786ADAB; // VO_18_P06_CHARA_SELECT_01
Shining_Gundam_ArcadeSelectHash.hash_2 = 0xDE8FFC11; // VO_18_P06_CHARA_SELECT_02
Shining_Gundam_ArcadeSelectHash.hash_3 = 0xA988CC87; // VO_18_P06_CHARA_SELECT_03
Shining_Gundam_ArcadeSelectHash.hash_4 = 0x37EC5924; // VO_18_P06_CHARA_SELECT_04
Shining_Gundam_ArcadeSelectHash.hash_5 = 0;
Shining_Gundam_ArcadeSelectHash.hash_6 = 0;
Shining_Gundam_ArcadeSelectHash.hash_7 = 0;
Shining_Gundam_ArcadeSelectHash.hash_8 = 0;
Shining_Gundam_ArcadeSelectHash.hash_9 = 0;
Shining_Gundam_ArcadeSelectHash.hash_10 = 0;

    return Shining_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Shining_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Shining_Gundam_ArcadeContinueNoHash;
    Shining_Gundam_ArcadeContinueNoHash.hash_1 = 0x8BA0E5AA; // VO_18_P06_GAME_OVER_01
Shining_Gundam_ArcadeContinueNoHash.hash_2 = 0x12A9B410; // VO_18_P06_GAME_OVER_02
Shining_Gundam_ArcadeContinueNoHash.hash_3 = 0x65AE8486; // VO_18_P06_GAME_OVER_03
Shining_Gundam_ArcadeContinueNoHash.hash_4 = 0;
Shining_Gundam_ArcadeContinueNoHash.hash_5 = 0;

    return Shining_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Shining_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Shining_Gundam_ArcadeContinueHash;
    Shining_Gundam_ArcadeContinueHash.hash_1 = 0x3457CAD7; // VO_18_P06_CONTINUE_DEC_01
Shining_Gundam_ArcadeContinueHash.hash_2 = 0xAD5E9B6D; // VO_18_P06_CONTINUE_DEC_02
Shining_Gundam_ArcadeContinueHash.hash_3 = 0;
Shining_Gundam_ArcadeContinueHash.hash_4 = 0;
Shining_Gundam_ArcadeContinueHash.hash_5 = 0;

    return Shining_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Shining_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Shining_Gundam_ArcadeContinueYesHash;
    Shining_Gundam_ArcadeContinueYesHash.hash_1 = 0x23F3AA20; // VO_18_P06_CONTINUE_01
Shining_Gundam_ArcadeContinueYesHash.hash_2 = 0xBAFAFB9A; // VO_18_P06_CONTINUE_02
Shining_Gundam_ArcadeContinueYesHash.hash_3 = 0x3457CAD7; // VO_18_P06_CONTINUE_DEC_01
Shining_Gundam_ArcadeContinueYesHash.hash_4 = 0xAD5E9B6D; // VO_18_P06_CONTINUE_DEC_02
Shining_Gundam_ArcadeContinueYesHash.hash_5 = 0;
Shining_Gundam_ArcadeContinueYesHash.hash_6 = 0;
Shining_Gundam_ArcadeContinueYesHash.hash_7 = 0;
Shining_Gundam_ArcadeContinueYesHash.hash_8 = 0;
Shining_Gundam_ArcadeContinueYesHash.hash_9 = 0;
Shining_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return Shining_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Shining_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Shining_Gundam_BandaiNamcoGamesHash;
    Shining_Gundam_BandaiNamcoGamesHash.hash_1 = 0x108F6C57; // VO_18_P06_BNG_LOGO_01
Shining_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return Shining_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info Shining_Gundam_inject_unit_hash_info()
{
    unit_hash_info Shining_Gundam;
    Shining_Gundam.UnitID = 0x0000468D;
    Shining_Gundam.unk0 = 0xDDC3CBD6;
    Shining_Gundam.DataScript = 0x022E3016;
    Shining_Gundam.ModelText = 0x71413E46;
    Shining_Gundam.OMO = 0xAE86DBB9;
    Shining_Gundam.EIDX = 0xED18EBA3;
    Shining_Gundam.Sound = 0x116BB4A7;
    Shining_Gundam.GlobalPilotVoice = 0x937BF6D7;
    Shining_Gundam.WeaponImage = 0x0D8FD15E;
    Shining_Gundam.IngameImage = 0xD9E5D91C;
    Shining_Gundam.KPKP = 0x1CA87DD0;
    Shining_Gundam.VoiceFileList = 0xA4AAA229;
    Shining_Gundam.Stream = 0x23C83AB4;

    return Shining_Gundam;
}

unit_unk_enum_info Shining_Gundam_inject_unk_enum()
{
    unit_unk_enum_info Shining_Gundam_unk_Enum;
    Shining_Gundam_unk_Enum.UnitID = 0x0000468D;
    Shining_Gundam_unk_Enum.unk_enum = 0x1;
    return Shining_Gundam_unk_Enum;
}

unit_update_unit_id_list Shining_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Shining_Gundam_Update_Unit_ID_List;
    Shining_Gundam_Update_Unit_ID_List.UnitID = 0x0000468D;
    return Shining_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list Shining_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Shining_Gundam_Unit_ID_List_2;
    Shining_Gundam_Unit_ID_List_2.UnitID = 0x0000468D;
    return Shining_Gundam_Unit_ID_List_2;
}

unit_string_info Shining_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F18061", 32);
    add_short_pilot_name_string_ID("S18061", 32);
    add_long_unit_name_string_ID("P18061", 32);
    add_short_unit_name_string_ID("Q18061", 32);

    unit_string_info Shining_Gundam_Gundam_String;
    Shining_Gundam_Gundam_String.UnitID = 0x0000468D;
    Shining_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    Shining_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[32].long_pilot_name_str;
    Shining_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[32].short_pilot_name_str;
    Shining_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[32].long_unit_name_str;
    Shining_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[32].short_unit_name_str;

    return Shining_Gundam_Gundam_String;
}
                        