

#include "Rising_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Rising_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Rising_Gundam_VoiceFileList;
    Rising_Gundam_VoiceFileList.UnitID = 0x00004697;
    Rising_Gundam_VoiceFileList.index = 0x00000130;
    Rising_Gundam_VoiceFileList.voice_file_list_hash = 0xE32A5133;
    Rising_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005C1;
    return Rising_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 Rising_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Rising_Gundam_ArcadeSelectHash;
    Rising_Gundam_ArcadeSelectHash.hash_1 = 0xC02066E8; // VO_18_P07_CHARA_SELECT_01
Rising_Gundam_ArcadeSelectHash.hash_2 = 0x59293752; // VO_18_P07_CHARA_SELECT_02
Rising_Gundam_ArcadeSelectHash.hash_3 = 0x2E2E07C4; // VO_18_P07_CHARA_SELECT_03
Rising_Gundam_ArcadeSelectHash.hash_4 = 0xB04A9267; // VO_18_P07_CHARA_SELECT_04
Rising_Gundam_ArcadeSelectHash.hash_5 = 0xC74DA2F1; // VO_18_P07_CHARA_SELECT_05
Rising_Gundam_ArcadeSelectHash.hash_6 = 0;
Rising_Gundam_ArcadeSelectHash.hash_7 = 0;
Rising_Gundam_ArcadeSelectHash.hash_8 = 0;
Rising_Gundam_ArcadeSelectHash.hash_9 = 0;
Rising_Gundam_ArcadeSelectHash.hash_10 = 0;

    return Rising_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Rising_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Rising_Gundam_ArcadeContinueNoHash;
    Rising_Gundam_ArcadeContinueNoHash.hash_1 = 0x16AF04DC; // VO_18_P07_GAME_OVER_01
Rising_Gundam_ArcadeContinueNoHash.hash_2 = 0x8FA65566; // VO_18_P07_GAME_OVER_02
Rising_Gundam_ArcadeContinueNoHash.hash_3 = 0;
Rising_Gundam_ArcadeContinueNoHash.hash_4 = 0;
Rising_Gundam_ArcadeContinueNoHash.hash_5 = 0;

    return Rising_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Rising_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Rising_Gundam_ArcadeContinueHash;
    Rising_Gundam_ArcadeContinueHash.hash_1 = 0xB3F10194; // VO_18_P07_CONTINUE_DEC_01
Rising_Gundam_ArcadeContinueHash.hash_2 = 0x2AF8502E; // VO_18_P07_CONTINUE_DEC_02
Rising_Gundam_ArcadeContinueHash.hash_3 = 0;
Rising_Gundam_ArcadeContinueHash.hash_4 = 0;
Rising_Gundam_ArcadeContinueHash.hash_5 = 0;

    return Rising_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Rising_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Rising_Gundam_ArcadeContinueYesHash;
    Rising_Gundam_ArcadeContinueYesHash.hash_1 = 0xFE6573A5; // VO_18_P07_CONTINUE_01
Rising_Gundam_ArcadeContinueYesHash.hash_2 = 0x676C221F; // VO_18_P07_CONTINUE_02
Rising_Gundam_ArcadeContinueYesHash.hash_3 = 0xB3F10194; // VO_18_P07_CONTINUE_DEC_01
Rising_Gundam_ArcadeContinueYesHash.hash_4 = 0x2AF8502E; // VO_18_P07_CONTINUE_DEC_02
Rising_Gundam_ArcadeContinueYesHash.hash_5 = 0;
Rising_Gundam_ArcadeContinueYesHash.hash_6 = 0;
Rising_Gundam_ArcadeContinueYesHash.hash_7 = 0;
Rising_Gundam_ArcadeContinueYesHash.hash_8 = 0;
Rising_Gundam_ArcadeContinueYesHash.hash_9 = 0;
Rising_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return Rising_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Rising_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Rising_Gundam_BandaiNamcoGamesHash;
    Rising_Gundam_BandaiNamcoGamesHash.hash_1 = 0xCD19B5D2; // VO_18_P07_BNG_LOGO_01
Rising_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return Rising_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info Rising_Gundam_inject_unit_hash_info()
{
    unit_hash_info Rising_Gundam;
    Rising_Gundam.UnitID = 0x00004697;
    Rising_Gundam.unk0 = 0xDDC3CBD6;
    Rising_Gundam.DataScript = 0xD17E06D4;
    Rising_Gundam.ModelText = 0xA2110884;
    Rising_Gundam.OMO = 0xDB3F2813;
    Rising_Gundam.EIDX = 0x98A11809;
    Rising_Gundam.Sound = 0xA2E4869B;
    Rising_Gundam.GlobalPilotVoice = 0x49003CC3;
    Rising_Gundam.WeaponImage = 0x8B4DE839;
    Rising_Gundam.IngameImage = 0x9485F94F;
    Rising_Gundam.KPKP = 0x76082D0F;
    Rising_Gundam.VoiceFileList = 0xE32A5133;
    Rising_Gundam.Stream = 0x38BAFEDF;

    return Rising_Gundam;
}

unit_unk_enum_info Rising_Gundam_inject_unk_enum()
{
    unit_unk_enum_info Rising_Gundam_unk_Enum;
    Rising_Gundam_unk_Enum.UnitID = 0x00004697;
    Rising_Gundam_unk_Enum.unk_enum = 0x1;
    return Rising_Gundam_unk_Enum;
}

unit_update_unit_id_list Rising_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Rising_Gundam_Update_Unit_ID_List;
    Rising_Gundam_Update_Unit_ID_List.UnitID = 0x00004697;
    return Rising_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list Rising_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Rising_Gundam_Unit_ID_List_2;
    Rising_Gundam_Unit_ID_List_2.UnitID = 0x00004697;
    return Rising_Gundam_Unit_ID_List_2;
}

unit_string_info Rising_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F18071", 33);
    add_short_pilot_name_string_ID("S18071", 33);
    add_long_unit_name_string_ID("P18071", 33);
    add_short_unit_name_string_ID("Q18071", 33);

    unit_string_info Rising_Gundam_Gundam_String;
    Rising_Gundam_Gundam_String.UnitID = 0x00004697;
    Rising_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    Rising_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[33].long_pilot_name_str;
    Rising_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[33].short_pilot_name_str;
    Rising_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[33].long_unit_name_str;
    Rising_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[33].short_unit_name_str;

    return Rising_Gundam_Gundam_String;
}
                        