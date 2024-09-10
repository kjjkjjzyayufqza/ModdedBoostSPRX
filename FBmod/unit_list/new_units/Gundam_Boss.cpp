

#include "Gundam_Boss.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Gundam_Boss_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Gundam_Boss_VoiceFileList;
    Gundam_Boss_VoiceFileList.UnitID = 0x000139C1;
    Gundam_Boss_VoiceFileList.index = 0x0000013F;
    Gundam_Boss_VoiceFileList.voice_file_list_hash = 0x475D5599;
    Gundam_Boss_VoiceFileList.unk_enum_0x8 = 0x000005D0;
    return Gundam_Boss_VoiceFileList;
}

unit_voice_hash_list_0x28 Gundam_Boss_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Gundam_Boss_ArcadeSelectHash;
    Gundam_Boss_ArcadeSelectHash.hash_1 = 0xCA143FC8; // VO_01_P01_CHARA_SELECT_01
Gundam_Boss_ArcadeSelectHash.hash_2 = 0x531D6E72; // VO_01_P01_CHARA_SELECT_02
Gundam_Boss_ArcadeSelectHash.hash_3 = 0x241A5EE4; // VO_01_P01_CHARA_SELECT_03
Gundam_Boss_ArcadeSelectHash.hash_4 = 0;
Gundam_Boss_ArcadeSelectHash.hash_5 = 0;
Gundam_Boss_ArcadeSelectHash.hash_6 = 0;
Gundam_Boss_ArcadeSelectHash.hash_7 = 0;
Gundam_Boss_ArcadeSelectHash.hash_8 = 0;
Gundam_Boss_ArcadeSelectHash.hash_9 = 0;
Gundam_Boss_ArcadeSelectHash.hash_10 = 0;

    return Gundam_Boss_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Gundam_Boss_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Gundam_Boss_ArcadeContinueNoHash;
    Gundam_Boss_ArcadeContinueNoHash.hash_1 = 0xC18CD7DF; // VO_01_P01_GAME_OVER_01
Gundam_Boss_ArcadeContinueNoHash.hash_2 = 0x58858665; // VO_01_P01_GAME_OVER_02
Gundam_Boss_ArcadeContinueNoHash.hash_3 = 0;
Gundam_Boss_ArcadeContinueNoHash.hash_4 = 0;
Gundam_Boss_ArcadeContinueNoHash.hash_5 = 0;

    return Gundam_Boss_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Gundam_Boss_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Gundam_Boss_ArcadeContinueHash;
    Gundam_Boss_ArcadeContinueHash.hash_1 = 0xB9C558B4; // VO_01_P01_CONTINUE_DEC_01
Gundam_Boss_ArcadeContinueHash.hash_2 = 0x20CC090E; // VO_01_P01_CONTINUE_DEC_02
Gundam_Boss_ArcadeContinueHash.hash_3 = 0;
Gundam_Boss_ArcadeContinueHash.hash_4 = 0;
Gundam_Boss_ArcadeContinueHash.hash_5 = 0;

    return Gundam_Boss_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Gundam_Boss_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Gundam_Boss_ArcadeContinueYesHash;
    Gundam_Boss_ArcadeContinueYesHash.hash_1 = 0xD0649E44; // VO_01_P01_CONTINUE_01
Gundam_Boss_ArcadeContinueYesHash.hash_2 = 0x496DCFFE; // VO_01_P01_CONTINUE_02
Gundam_Boss_ArcadeContinueYesHash.hash_3 = 0xB9C558B4; // VO_01_P01_CONTINUE_DEC_01
Gundam_Boss_ArcadeContinueYesHash.hash_4 = 0x20CC090E; // VO_01_P01_CONTINUE_DEC_02
Gundam_Boss_ArcadeContinueYesHash.hash_5 = 0;
Gundam_Boss_ArcadeContinueYesHash.hash_6 = 0;
Gundam_Boss_ArcadeContinueYesHash.hash_7 = 0;
Gundam_Boss_ArcadeContinueYesHash.hash_8 = 0;
Gundam_Boss_ArcadeContinueYesHash.hash_9 = 0;
Gundam_Boss_ArcadeContinueYesHash.hash_10 = 0;

    return Gundam_Boss_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Gundam_Boss_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Gundam_Boss_BandaiNamcoGamesHash;
    Gundam_Boss_BandaiNamcoGamesHash.hash_1 = 0xE3185833; // VO_01_P01_BNG_LOGO_01
Gundam_Boss_BandaiNamcoGamesHash.hash_2 = 0;

    return Gundam_Boss_BandaiNamcoGamesHash;
}

unit_hash_info Gundam_Boss_inject_unit_hash_info()
{
    unit_hash_info Gundam_Boss;
    Gundam_Boss.UnitID = 0x000139C1;
    Gundam_Boss.unk0 = 0xDDC3CBD6;
    Gundam_Boss.DataScript = 0xA6ED4CA8;
    Gundam_Boss.ModelText = 0xD58242F8;
    Gundam_Boss.OMO = 0x82FB864E;
    Gundam_Boss.EIDX = 0x25F6DACC;
    Gundam_Boss.Sound = 0x3E2F1670;
    Gundam_Boss.GlobalPilotVoice = 0xB1C0D801;
    Gundam_Boss.WeaponImage = 0x6ED321BD;
    Gundam_Boss.IngameImage = 0xCEB32503;
    Gundam_Boss.KPKP = 0xC45440B9;
    Gundam_Boss.VoiceFileList = 0x475D5599;
    Gundam_Boss.Stream = 0x9AF05502;

    return Gundam_Boss;
}

unit_unk_enum_info Gundam_Boss_inject_unk_enum()
{
    unit_unk_enum_info Gundam_Boss_unk_Enum;
    Gundam_Boss_unk_Enum.UnitID = 0x000139C1;
    Gundam_Boss_unk_Enum.unk_enum = 0x1;
    return Gundam_Boss_unk_Enum;
}

unit_update_unit_id_list Gundam_Boss_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Gundam_Boss_Update_Unit_ID_List;
    Gundam_Boss_Update_Unit_ID_List.UnitID = 0x000139C1;
    return Gundam_Boss_Update_Unit_ID_List;
}

unit_update_unit_id_list Gundam_Boss_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Gundam_Boss_Unit_ID_List_2;
    Gundam_Boss_Unit_ID_List_2.UnitID = 0x000139C1;
    return Gundam_Boss_Unit_ID_List_2;
}

unit_string_info Gundam_Boss_inject_string()
{
    add_long_pilot_name_string_ID("F80321", 48);
    add_short_pilot_name_string_ID("S80321", 48);
    add_long_unit_name_string_ID("P80321", 48);
    add_short_unit_name_string_ID("Q80321", 48);

    unit_string_info Gundam_Boss_Gundam_String;
    Gundam_Boss_Gundam_String.UnitID = 0x000139C1;
    Gundam_Boss_Gundam_String.unk_enum = 0xFFFFFFFF;
    Gundam_Boss_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[48].long_pilot_name_str;
    Gundam_Boss_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[48].short_pilot_name_str;
    Gundam_Boss_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[48].long_unit_name_str;
    Gundam_Boss_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[48].short_unit_name_str;

    return Gundam_Boss_Gundam_String;
}
                        