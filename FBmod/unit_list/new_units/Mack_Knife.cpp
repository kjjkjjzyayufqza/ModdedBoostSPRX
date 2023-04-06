

#include "Mack_Knife.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Mack_Knife_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Mack_Knife_VoiceFileList;
    Mack_Knife_VoiceFileList.UnitID = 0x0000A425;
    Mack_Knife_VoiceFileList.index = 0x0000014B;
    Mack_Knife_VoiceFileList.voice_file_list_hash = 0xB2802462;
    Mack_Knife_VoiceFileList.unk_enum_0x8 = 0x000005DC;
    return Mack_Knife_VoiceFileList;
}

unit_voice_hash_list_0x28 Mack_Knife_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Mack_Knife_ArcadeSelectHash;
    Mack_Knife_ArcadeSelectHash.hash_1 = 0xBE3175AF; // VO_42_P02_CHARA_SELECT_01
Mack_Knife_ArcadeSelectHash.hash_2 = 0x27382415; // VO_42_P02_CHARA_SELECT_02
Mack_Knife_ArcadeSelectHash.hash_3 = 0x503F1483; // VO_42_P02_CHARA_SELECT_03
Mack_Knife_ArcadeSelectHash.hash_4 = 0;
Mack_Knife_ArcadeSelectHash.hash_5 = 0;
Mack_Knife_ArcadeSelectHash.hash_6 = 0;
Mack_Knife_ArcadeSelectHash.hash_7 = 0;
Mack_Knife_ArcadeSelectHash.hash_8 = 0;
Mack_Knife_ArcadeSelectHash.hash_9 = 0;
Mack_Knife_ArcadeSelectHash.hash_10 = 0;

    return Mack_Knife_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Mack_Knife_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Mack_Knife_ArcadeContinueNoHash;
    Mack_Knife_ArcadeContinueNoHash.hash_1 = 0xBE032284; // VO_42_P02_GAME_OVER_01
Mack_Knife_ArcadeContinueNoHash.hash_2 = 0x270A733E; // VO_42_P02_GAME_OVER_02
Mack_Knife_ArcadeContinueNoHash.hash_3 = 0;
Mack_Knife_ArcadeContinueNoHash.hash_4 = 0;
Mack_Knife_ArcadeContinueNoHash.hash_5 = 0;

    return Mack_Knife_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Mack_Knife_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Mack_Knife_ArcadeContinueHash;
    Mack_Knife_ArcadeContinueHash.hash_1 = 0xCDE012D3; // VO_42_P02_CONTINUE_DEC_01
Mack_Knife_ArcadeContinueHash.hash_2 = 0x54E94369; // VO_42_P02_CONTINUE_DEC_02
Mack_Knife_ArcadeContinueHash.hash_3 = 0;
Mack_Knife_ArcadeContinueHash.hash_4 = 0;
Mack_Knife_ArcadeContinueHash.hash_5 = 0;

    return Mack_Knife_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Mack_Knife_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Mack_Knife_ArcadeContinueYesHash;
    Mack_Knife_ArcadeContinueYesHash.hash_1 = 0x359C7E08; // VO_42_P02_CONTINUE_01
Mack_Knife_ArcadeContinueYesHash.hash_2 = 0xAC952FB2; // VO_42_P02_CONTINUE_02
Mack_Knife_ArcadeContinueYesHash.hash_3 = 0xCDE012D3; // VO_42_P02_CONTINUE_DEC_01
Mack_Knife_ArcadeContinueYesHash.hash_4 = 0x54E94369; // VO_42_P02_CONTINUE_DEC_02
Mack_Knife_ArcadeContinueYesHash.hash_5 = 0;
Mack_Knife_ArcadeContinueYesHash.hash_6 = 0;
Mack_Knife_ArcadeContinueYesHash.hash_7 = 0;
Mack_Knife_ArcadeContinueYesHash.hash_8 = 0;
Mack_Knife_ArcadeContinueYesHash.hash_9 = 0;
Mack_Knife_ArcadeContinueYesHash.hash_10 = 0;

    return Mack_Knife_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Mack_Knife_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Mack_Knife_BandaiNamcoGamesHash;
    Mack_Knife_BandaiNamcoGamesHash.hash_1 = 0;
Mack_Knife_BandaiNamcoGamesHash.hash_2 = 0;

    return Mack_Knife_BandaiNamcoGamesHash;
}

unit_hash_info Mack_Knife_inject_unit_hash_info()
{
    unit_hash_info Mack_Knife;
    Mack_Knife.UnitID = 0x0000A425;
    Mack_Knife.unk0 = 0xDDC3CBD6;
    Mack_Knife.DataScript = 0x0F324EA1;
    Mack_Knife.ModelText = 0x7C5D40F1;
    Mack_Knife.OMO = 0xFB8EE1E8;
    Mack_Knife.EIDX = 0xB810D1F2;
    Mack_Knife.Sound = 0x835CCA8B;
    Mack_Knife.GlobalPilotVoice = 0x369CC1B2;
    Mack_Knife.WeaponImage = 0x7C9B58D4;
    Mack_Knife.IngameImage = 0x7C9B58D4;
    Mack_Knife.KPKP = 0x9B5ECB51;
    Mack_Knife.VoiceFileList = 0xB2802462;
    Mack_Knife.Stream = 0xCE4A3493;

    return Mack_Knife;
}

unit_unk_enum_info Mack_Knife_inject_unk_enum()
{
    unit_unk_enum_info Mack_Knife_unk_Enum;
    Mack_Knife_unk_Enum.UnitID = 0x0000A425;
    Mack_Knife_unk_Enum.unk_enum = 0x1;
    return Mack_Knife_unk_Enum;
}

unit_update_unit_id_list Mack_Knife_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Mack_Knife_Update_Unit_ID_List;
    Mack_Knife_Update_Unit_ID_List.UnitID = 0x0000A425;
    return Mack_Knife_Update_Unit_ID_List;
}

unit_update_unit_id_list Mack_Knife_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Mack_Knife_Unit_ID_List_2;
    Mack_Knife_Unit_ID_List_2.UnitID = 0x0000A425;
    return Mack_Knife_Unit_ID_List_2;
}

unit_string_info Mack_Knife_inject_string()
{
    add_long_pilot_name_string_ID("F42021", 60);
    add_short_pilot_name_string_ID("S42021", 60);
    add_long_unit_name_string_ID("P42021", 60);
    add_short_unit_name_string_ID("Q42021", 60);

    unit_string_info Mack_Knife_Gundam_String;
    Mack_Knife_Gundam_String.UnitID = 0x0000A425;
    Mack_Knife_Gundam_String.unk_enum = 0xFFFFFFFF;
    Mack_Knife_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[60].long_pilot_name_str;
    Mack_Knife_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[60].short_pilot_name_str;
    Mack_Knife_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[60].long_unit_name_str;
    Mack_Knife_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[60].short_unit_name_str;

    return Mack_Knife_Gundam_String;
}
                        