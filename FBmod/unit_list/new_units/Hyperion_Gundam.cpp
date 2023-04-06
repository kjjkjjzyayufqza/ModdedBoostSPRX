

#include "Hyperion_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Hyperion_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Hyperion_Gundam_VoiceFileList;
    Hyperion_Gundam_VoiceFileList.UnitID = 0x00005623;
    Hyperion_Gundam_VoiceFileList.index = 0x0000011E;
    Hyperion_Gundam_VoiceFileList.voice_file_list_hash = 0xEF4ED3BF;
    Hyperion_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005AF;
    return Hyperion_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 Hyperion_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Hyperion_Gundam_ArcadeSelectHash;
    Hyperion_Gundam_ArcadeSelectHash.hash_1 = 0xEC525364; // VO_22_P05_CHARA_SELECT_01
Hyperion_Gundam_ArcadeSelectHash.hash_2 = 0x755B02DE; // VO_22_P05_CHARA_SELECT_02
Hyperion_Gundam_ArcadeSelectHash.hash_3 = 0x025C3248; // VO_22_P05_CHARA_SELECT_03
Hyperion_Gundam_ArcadeSelectHash.hash_4 = 0x9C38A7EB; // VO_22_P05_CHARA_SELECT_04
Hyperion_Gundam_ArcadeSelectHash.hash_5 = 0;
Hyperion_Gundam_ArcadeSelectHash.hash_6 = 0;
Hyperion_Gundam_ArcadeSelectHash.hash_7 = 0;
Hyperion_Gundam_ArcadeSelectHash.hash_8 = 0;
Hyperion_Gundam_ArcadeSelectHash.hash_9 = 0;
Hyperion_Gundam_ArcadeSelectHash.hash_10 = 0;

    return Hyperion_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Hyperion_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Hyperion_Gundam_ArcadeContinueNoHash;
    Hyperion_Gundam_ArcadeContinueNoHash.hash_1 = 0x46128357; // VO_22_P05_GAME_OVER_01
Hyperion_Gundam_ArcadeContinueNoHash.hash_2 = 0xDF1BD2ED; // VO_22_P05_GAME_OVER_02
Hyperion_Gundam_ArcadeContinueNoHash.hash_3 = 0xA81CE27B; // VO_22_P05_GAME_OVER_03
Hyperion_Gundam_ArcadeContinueNoHash.hash_4 = 0x367877D8; // VO_22_P05_GAME_OVER_04
Hyperion_Gundam_ArcadeContinueNoHash.hash_5 = 0x417F474E; // VO_22_P05_GAME_OVER_05

    return Hyperion_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Hyperion_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Hyperion_Gundam_ArcadeContinueHash;
    Hyperion_Gundam_ArcadeContinueHash.hash_1 = 0x9F833418; // VO_22_P05_CONTINUE_DEC_01
Hyperion_Gundam_ArcadeContinueHash.hash_2 = 0x068A65A2; // VO_22_P05_CONTINUE_DEC_02
Hyperion_Gundam_ArcadeContinueHash.hash_3 = 0x718D5534; // VO_22_P05_CONTINUE_DEC_03
Hyperion_Gundam_ArcadeContinueHash.hash_4 = 0xEFE9C097; // VO_22_P05_CONTINUE_DEC_04
Hyperion_Gundam_ArcadeContinueHash.hash_5 = 0;

    return Hyperion_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Hyperion_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Hyperion_Gundam_ArcadeContinueYesHash;
    Hyperion_Gundam_ArcadeContinueYesHash.hash_1 = 0x4693C4D5; // VO_22_P05_CONTINUE_01
Hyperion_Gundam_ArcadeContinueYesHash.hash_2 = 0xDF9A956F; // VO_22_P05_CONTINUE_02
Hyperion_Gundam_ArcadeContinueYesHash.hash_3 = 0xA89DA5F9; // VO_22_P05_CONTINUE_03
Hyperion_Gundam_ArcadeContinueYesHash.hash_4 = 0x9F833418; // VO_22_P05_CONTINUE_DEC_01
Hyperion_Gundam_ArcadeContinueYesHash.hash_5 = 0x068A65A2; // VO_22_P05_CONTINUE_DEC_02
Hyperion_Gundam_ArcadeContinueYesHash.hash_6 = 0x718D5534; // VO_22_P05_CONTINUE_DEC_03
Hyperion_Gundam_ArcadeContinueYesHash.hash_7 = 0xEFE9C097; // VO_22_P05_CONTINUE_DEC_04
Hyperion_Gundam_ArcadeContinueYesHash.hash_8 = 0;
Hyperion_Gundam_ArcadeContinueYesHash.hash_9 = 0;
Hyperion_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return Hyperion_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Hyperion_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Hyperion_Gundam_BandaiNamcoGamesHash;
    Hyperion_Gundam_BandaiNamcoGamesHash.hash_1 = 0x75EF02A2; // VO_22_P05_BNG_LOGO_01
Hyperion_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return Hyperion_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info Hyperion_Gundam_inject_unit_hash_info()
{
    unit_hash_info Hyperion_Gundam;
    Hyperion_Gundam.UnitID = 0x00005623;
    Hyperion_Gundam.unk0 = 0xDDC3CBD6;
    Hyperion_Gundam.DataScript = 0x9905A1D4;
    Hyperion_Gundam.ModelText = 0xEA6AAF84;
    Hyperion_Gundam.OMO = 0xDB7753B4;
    Hyperion_Gundam.EIDX = 0x98E963AE;
    Hyperion_Gundam.Sound = 0xC3F4630F;
    Hyperion_Gundam.GlobalPilotVoice = 0x36CFD6B1;
    Hyperion_Gundam.WeaponImage = 0x42DCA39E;
    Hyperion_Gundam.IngameImage = 0x42DCA39E;
    Hyperion_Gundam.KPKP = 0xB865DEFF;
    Hyperion_Gundam.VoiceFileList = 0xEF4ED3BF;
    Hyperion_Gundam.Stream = 0x9D5D3793;

    return Hyperion_Gundam;
}

unit_unk_enum_info Hyperion_Gundam_inject_unk_enum()
{
    unit_unk_enum_info Hyperion_Gundam_unk_Enum;
    Hyperion_Gundam_unk_Enum.UnitID = 0x00005623;
    Hyperion_Gundam_unk_Enum.unk_enum = 0x1;
    return Hyperion_Gundam_unk_Enum;
}

unit_update_unit_id_list Hyperion_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Hyperion_Gundam_Update_Unit_ID_List;
    Hyperion_Gundam_Update_Unit_ID_List.UnitID = 0x00005623;
    return Hyperion_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list Hyperion_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Hyperion_Gundam_Unit_ID_List_2;
    Hyperion_Gundam_Unit_ID_List_2.UnitID = 0x00005623;
    return Hyperion_Gundam_Unit_ID_List_2;
}

unit_string_info Hyperion_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F22051", 15);
    add_short_pilot_name_string_ID("S22051", 15);
    add_long_unit_name_string_ID("P22051", 15);
    add_short_unit_name_string_ID("Q22051", 15);

    unit_string_info Hyperion_Gundam_Gundam_String;
    Hyperion_Gundam_Gundam_String.UnitID = 0x00005623;
    Hyperion_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    Hyperion_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[15].long_pilot_name_str;
    Hyperion_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[15].short_pilot_name_str;
    Hyperion_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[15].long_unit_name_str;
    Hyperion_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[15].short_unit_name_str;

    return Hyperion_Gundam_Gundam_String;
}
                        