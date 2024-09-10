

#include "Buster_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Buster_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Buster_Gundam_VoiceFileList;
    Buster_Gundam_VoiceFileList.UnitID = 0x00004E8F;
    Buster_Gundam_VoiceFileList.index = 0x00000155;
    Buster_Gundam_VoiceFileList.voice_file_list_hash = 0x628EEE72;
    Buster_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005E6;
    return Buster_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 Buster_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Buster_Gundam_ArcadeSelectHash;
    Buster_Gundam_ArcadeSelectHash.hash_1 = 0x94CCC337; // VO_20_P11_CHARA_SELECT_01
Buster_Gundam_ArcadeSelectHash.hash_2 = 0x0DC5928D; // VO_20_P11_CHARA_SELECT_02
Buster_Gundam_ArcadeSelectHash.hash_3 = 0x7AC2A21B; // VO_20_P11_CHARA_SELECT_03
Buster_Gundam_ArcadeSelectHash.hash_4 = 0;
Buster_Gundam_ArcadeSelectHash.hash_5 = 0;
Buster_Gundam_ArcadeSelectHash.hash_6 = 0;
Buster_Gundam_ArcadeSelectHash.hash_7 = 0;
Buster_Gundam_ArcadeSelectHash.hash_8 = 0;
Buster_Gundam_ArcadeSelectHash.hash_9 = 0;
Buster_Gundam_ArcadeSelectHash.hash_10 = 0;

    return Buster_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Buster_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Buster_Gundam_ArcadeContinueNoHash;
    Buster_Gundam_ArcadeContinueNoHash.hash_1 = 0xE391BC27; // VO_20_P11_GAME_OVER_01
Buster_Gundam_ArcadeContinueNoHash.hash_2 = 0x7A98ED9D; // VO_20_P11_GAME_OVER_02
Buster_Gundam_ArcadeContinueNoHash.hash_3 = 0;
Buster_Gundam_ArcadeContinueNoHash.hash_4 = 0;
Buster_Gundam_ArcadeContinueNoHash.hash_5 = 0;

    return Buster_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Buster_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Buster_Gundam_ArcadeContinueHash;
    Buster_Gundam_ArcadeContinueHash.hash_1 = 0xE71DA44B; // VO_20_P11_CONTINUE_DEC_01
Buster_Gundam_ArcadeContinueHash.hash_2 = 0x7E14F5F1; // VO_20_P11_CONTINUE_DEC_02
Buster_Gundam_ArcadeContinueHash.hash_3 = 0;
Buster_Gundam_ArcadeContinueHash.hash_4 = 0;
Buster_Gundam_ArcadeContinueHash.hash_5 = 0;

    return Buster_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Buster_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Buster_Gundam_ArcadeContinueYesHash;
    Buster_Gundam_ArcadeContinueYesHash.hash_1 = 0xCF19DFF2; // VO_20_P11_CONTINUE_01
Buster_Gundam_ArcadeContinueYesHash.hash_2 = 0x56108E48; // VO_20_P11_CONTINUE_02
Buster_Gundam_ArcadeContinueYesHash.hash_3 = 0xE71DA44B; // VO_20_P11_CONTINUE_DEC_01
Buster_Gundam_ArcadeContinueYesHash.hash_4 = 0x7E14F5F1; // VO_20_P11_CONTINUE_DEC_02
Buster_Gundam_ArcadeContinueYesHash.hash_5 = 0;
Buster_Gundam_ArcadeContinueYesHash.hash_6 = 0;
Buster_Gundam_ArcadeContinueYesHash.hash_7 = 0;
Buster_Gundam_ArcadeContinueYesHash.hash_8 = 0;
Buster_Gundam_ArcadeContinueYesHash.hash_9 = 0;
Buster_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return Buster_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Buster_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Buster_Gundam_BandaiNamcoGamesHash;
    Buster_Gundam_BandaiNamcoGamesHash.hash_1 = 0;
Buster_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return Buster_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info Buster_Gundam_inject_unit_hash_info()
{
    unit_hash_info Buster_Gundam;
    Buster_Gundam.UnitID = 0x00004E8F;
    Buster_Gundam.unk0 = 0xDDC3CBD6;
    Buster_Gundam.DataScript = 0x9A45A472;
    Buster_Gundam.ModelText = 0xE92AAA22;
    Buster_Gundam.OMO = 0xE4C1156C;
    Buster_Gundam.EIDX = 0xA75F2576;
    Buster_Gundam.Sound = 0xF818B2B5;
    Buster_Gundam.GlobalPilotVoice = 0x8D9C44BA;
    Buster_Gundam.WeaponImage = 0xB43B091C;
    Buster_Gundam.IngameImage = 0x724692AD;
    Buster_Gundam.KPKP = 0x7E2593A5;
    Buster_Gundam.VoiceFileList = 0x628EEE72;
    Buster_Gundam.Stream = 0xC5883F26;

    return Buster_Gundam;
}

unit_unk_enum_info Buster_Gundam_inject_unk_enum()
{
    unit_unk_enum_info Buster_Gundam_unk_Enum;
    Buster_Gundam_unk_Enum.UnitID = 0x00004E8F;
    Buster_Gundam_unk_Enum.unk_enum = 0x1;
    return Buster_Gundam_unk_Enum;
}

unit_update_unit_id_list Buster_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Buster_Gundam_Update_Unit_ID_List;
    Buster_Gundam_Update_Unit_ID_List.UnitID = 0x00004E8F;
    return Buster_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list Buster_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Buster_Gundam_Unit_ID_List_2;
    Buster_Gundam_Unit_ID_List_2.UnitID = 0x00004E8F;
    return Buster_Gundam_Unit_ID_List_2;
}

unit_string_info Buster_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F20111", 70);
    add_short_pilot_name_string_ID("S20111", 70);
    add_long_unit_name_string_ID("P20111", 70);
    add_short_unit_name_string_ID("Q20111", 70);

    unit_string_info Buster_Gundam_Gundam_String;
    Buster_Gundam_Gundam_String.UnitID = 0x00004E8F;
    Buster_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    Buster_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[70].long_pilot_name_str;
    Buster_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[70].short_pilot_name_str;
    Buster_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[70].long_unit_name_str;
    Buster_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[70].short_unit_name_str;

    return Buster_Gundam_Gundam_String;
}
                        