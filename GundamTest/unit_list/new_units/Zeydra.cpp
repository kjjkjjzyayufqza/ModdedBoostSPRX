

#include "Zeydra.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Zeydra_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Zeydra_VoiceFileList;
    Zeydra_VoiceFileList.UnitID = 0x0000811B;
    Zeydra_VoiceFileList.index = 0x00000136;
    Zeydra_VoiceFileList.voice_file_list_hash = 0x4E077EC0;
    Zeydra_VoiceFileList.unk_enum_0x8 = 0x000005C7;
    return Zeydra_VoiceFileList;
}

unit_voice_hash_list_0x28 Zeydra_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Zeydra_ArcadeSelectHash;
    Zeydra_ArcadeSelectHash.hash_1 = 0x64A0B43A; // VO_33_P05_CHARA_SELECT_01
Zeydra_ArcadeSelectHash.hash_2 = 0xFDA9E580; // VO_33_P05_CHARA_SELECT_02
Zeydra_ArcadeSelectHash.hash_3 = 0x8AAED516; // VO_33_P05_CHARA_SELECT_03
Zeydra_ArcadeSelectHash.hash_4 = 0x14CA40B5; // VO_33_P05_CHARA_SELECT_04
Zeydra_ArcadeSelectHash.hash_5 = 0x63CD7023; // VO_33_P05_CHARA_SELECT_05
Zeydra_ArcadeSelectHash.hash_6 = 0;
Zeydra_ArcadeSelectHash.hash_7 = 0;
Zeydra_ArcadeSelectHash.hash_8 = 0;
Zeydra_ArcadeSelectHash.hash_9 = 0;
Zeydra_ArcadeSelectHash.hash_10 = 0;

    return Zeydra_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Zeydra_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Zeydra_ArcadeContinueNoHash;
    Zeydra_ArcadeContinueNoHash.hash_1 = 0x7EA2B5EE; // VO_33_P05_GAME_OVER_01
Zeydra_ArcadeContinueNoHash.hash_2 = 0xE7ABE454; // VO_33_P05_GAME_OVER_02
Zeydra_ArcadeContinueNoHash.hash_3 = 0;
Zeydra_ArcadeContinueNoHash.hash_4 = 0;
Zeydra_ArcadeContinueNoHash.hash_5 = 0;

    return Zeydra_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Zeydra_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Zeydra_ArcadeContinueHash;
    Zeydra_ArcadeContinueHash.hash_1 = 0x1771D346; // VO_33_P05_CONTINUE_DEC_01
Zeydra_ArcadeContinueHash.hash_2 = 0x8E7882FC; // VO_33_P05_CONTINUE_DEC_02
Zeydra_ArcadeContinueHash.hash_3 = 0xF97FB26A; // VO_33_P05_CONTINUE_DEC_03
Zeydra_ArcadeContinueHash.hash_4 = 0;
Zeydra_ArcadeContinueHash.hash_5 = 0;

    return Zeydra_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Zeydra_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Zeydra_ArcadeContinueYesHash;
    Zeydra_ArcadeContinueYesHash.hash_1 = 0x2E67B977; // VO_33_P05_CONTINUE_01
Zeydra_ArcadeContinueYesHash.hash_2 = 0xB76EE8CD; // VO_33_P05_CONTINUE_02
Zeydra_ArcadeContinueYesHash.hash_3 = 0x1771D346; // VO_33_P05_CONTINUE_DEC_01
Zeydra_ArcadeContinueYesHash.hash_4 = 0x8E7882FC; // VO_33_P05_CONTINUE_DEC_02
Zeydra_ArcadeContinueYesHash.hash_5 = 0xF97FB26A; // VO_33_P05_CONTINUE_DEC_03
Zeydra_ArcadeContinueYesHash.hash_6 = 0;
Zeydra_ArcadeContinueYesHash.hash_7 = 0;
Zeydra_ArcadeContinueYesHash.hash_8 = 0;
Zeydra_ArcadeContinueYesHash.hash_9 = 0;
Zeydra_ArcadeContinueYesHash.hash_10 = 0;

    return Zeydra_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Zeydra_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Zeydra_BandaiNamcoGamesHash;
    Zeydra_BandaiNamcoGamesHash.hash_1 = 0x1D1B7F00; // VO_33_P05_BNG_LOGO_01
Zeydra_BandaiNamcoGamesHash.hash_2 = 0;

    return Zeydra_BandaiNamcoGamesHash;
}

unit_hash_info Zeydra_inject_unit_hash_info()
{
    unit_hash_info Zeydra;
    Zeydra.UnitID = 0x0000811B;
    Zeydra.unk0 = 0xDDC3CBD6;
    Zeydra.DataScript = 0xB3434310;
    Zeydra.ModelText = 0xC02C4D40;
    Zeydra.OMO = 0x475413FF;
    Zeydra.EIDX = 0x04CA23E5;
    Zeydra.Sound = 0x64530724;
    Zeydra.GlobalPilotVoice = 0x3B9D9890;
    Zeydra.WeaponImage = 0x6B15F365;
    Zeydra.IngameImage = 0x6B15F365;
    Zeydra.KPKP = 0xB660A31F;
    Zeydra.VoiceFileList = 0x4E077EC0;
    Zeydra.Stream = 0xA2792819;

    return Zeydra;
}

unit_unk_enum_info Zeydra_inject_unk_enum()
{
    unit_unk_enum_info Zeydra_unk_Enum;
    Zeydra_unk_Enum.UnitID = 0x0000811B;
    Zeydra_unk_Enum.unk_enum = 0x1;
    return Zeydra_unk_Enum;
}

unit_update_unit_id_list Zeydra_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Zeydra_Update_Unit_ID_List;
    Zeydra_Update_Unit_ID_List.UnitID = 0x0000811B;
    return Zeydra_Update_Unit_ID_List;
}

unit_update_unit_id_list Zeydra_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Zeydra_Unit_ID_List_2;
    Zeydra_Unit_ID_List_2.UnitID = 0x0000811B;
    return Zeydra_Unit_ID_List_2;
}

unit_string_info Zeydra_inject_string()
{
    add_long_pilot_name_string_ID("F33051", 39);
    add_short_pilot_name_string_ID("S33051", 39);
    add_long_unit_name_string_ID("P33051", 39);
    add_short_unit_name_string_ID("Q33051", 39);

    unit_string_info Zeydra_Gundam_String;
    Zeydra_Gundam_String.UnitID = 0x0000811B;
    Zeydra_Gundam_String.unk_enum = 0xFFFFFFFF;
    Zeydra_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[39].long_pilot_name_str;
    Zeydra_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[39].short_pilot_name_str;
    Zeydra_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[39].long_unit_name_str;
    Zeydra_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[39].short_unit_name_str;

    return Zeydra_Gundam_String;
}
                        