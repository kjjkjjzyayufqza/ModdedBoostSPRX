

#include "Jagd_Doga.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Jagd_Doga_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Jagd_Doga_VoiceFileList;
    Jagd_Doga_VoiceFileList.UnitID = 0x00004291;
    Jagd_Doga_VoiceFileList.index = 0x0000014F;
    Jagd_Doga_VoiceFileList.voice_file_list_hash = 0x02C76B6C;
    Jagd_Doga_VoiceFileList.unk_enum_0x8 = 0x000005E0;
    return Jagd_Doga_VoiceFileList;
}

unit_voice_hash_list_0x28 Jagd_Doga_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Jagd_Doga_ArcadeSelectHash;
    Jagd_Doga_ArcadeSelectHash.hash_1 = 0xDFAFB242; // VO_17_P04_CHARA_SELECT_01
Jagd_Doga_ArcadeSelectHash.hash_2 = 0x46A6E3F8; // VO_17_P04_CHARA_SELECT_02
Jagd_Doga_ArcadeSelectHash.hash_3 = 0x31A1D36E; // VO_17_P04_CHARA_SELECT_03
Jagd_Doga_ArcadeSelectHash.hash_4 = 0;
Jagd_Doga_ArcadeSelectHash.hash_5 = 0;
Jagd_Doga_ArcadeSelectHash.hash_6 = 0;
Jagd_Doga_ArcadeSelectHash.hash_7 = 0;
Jagd_Doga_ArcadeSelectHash.hash_8 = 0;
Jagd_Doga_ArcadeSelectHash.hash_9 = 0;
Jagd_Doga_ArcadeSelectHash.hash_10 = 0;

    return Jagd_Doga_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Jagd_Doga_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Jagd_Doga_ArcadeContinueNoHash;
    Jagd_Doga_ArcadeContinueNoHash.hash_1 = 0x9CB1856F; // VO_17_P04_GAME_OVER_01
Jagd_Doga_ArcadeContinueNoHash.hash_2 = 0x05B8D4D5; // VO_17_P04_GAME_OVER_02
Jagd_Doga_ArcadeContinueNoHash.hash_3 = 0;
Jagd_Doga_ArcadeContinueNoHash.hash_4 = 0;
Jagd_Doga_ArcadeContinueNoHash.hash_5 = 0;

    return Jagd_Doga_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Jagd_Doga_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Jagd_Doga_ArcadeContinueHash;
    Jagd_Doga_ArcadeContinueHash.hash_1 = 0xAC7ED53E; // VO_17_P04_CONTINUE_DEC_01
Jagd_Doga_ArcadeContinueHash.hash_2 = 0x35778484; // VO_17_P04_CONTINUE_DEC_02
Jagd_Doga_ArcadeContinueHash.hash_3 = 0;
Jagd_Doga_ArcadeContinueHash.hash_4 = 0;
Jagd_Doga_ArcadeContinueHash.hash_5 = 0;

    return Jagd_Doga_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Jagd_Doga_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Jagd_Doga_ArcadeContinueYesHash;
    Jagd_Doga_ArcadeContinueYesHash.hash_1 = 0x852D2CBE; // VO_17_P04_CONTINUE_01
Jagd_Doga_ArcadeContinueYesHash.hash_2 = 0x1C247D04; // VO_17_P04_CONTINUE_02
Jagd_Doga_ArcadeContinueYesHash.hash_3 = 0xAC7ED53E; // VO_17_P04_CONTINUE_DEC_01
Jagd_Doga_ArcadeContinueYesHash.hash_4 = 0x35778484; // VO_17_P04_CONTINUE_DEC_02
Jagd_Doga_ArcadeContinueYesHash.hash_5 = 0;
Jagd_Doga_ArcadeContinueYesHash.hash_6 = 0;
Jagd_Doga_ArcadeContinueYesHash.hash_7 = 0;
Jagd_Doga_ArcadeContinueYesHash.hash_8 = 0;
Jagd_Doga_ArcadeContinueYesHash.hash_9 = 0;
Jagd_Doga_ArcadeContinueYesHash.hash_10 = 0;

    return Jagd_Doga_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Jagd_Doga_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Jagd_Doga_BandaiNamcoGamesHash;
    Jagd_Doga_BandaiNamcoGamesHash.hash_1 = 0;
Jagd_Doga_BandaiNamcoGamesHash.hash_2 = 0;

    return Jagd_Doga_BandaiNamcoGamesHash;
}

unit_hash_info Jagd_Doga_inject_unit_hash_info()
{
    unit_hash_info Jagd_Doga;
    Jagd_Doga.UnitID = 0x00004291;
    Jagd_Doga.unk0 = 0xDDC3CBD6;
    Jagd_Doga.DataScript = 0x6C77C609;
    Jagd_Doga.ModelText = 0x1F18C859;
    Jagd_Doga.OMO = 0x23E08FBA;
    Jagd_Doga.EIDX = 0x607EBFA0;
    Jagd_Doga.Sound = 0xD251E38E;
    Jagd_Doga.GlobalPilotVoice = 0x3594812E;
    Jagd_Doga.WeaponImage = 0x3F7F29C9;
    Jagd_Doga.IngameImage = 0xDA87F3D5;
    Jagd_Doga.KPKP = 0x9BBEBD30;
    Jagd_Doga.VoiceFileList = 0x02C76B6C;
    Jagd_Doga.Stream = 0x70E8A411;

    return Jagd_Doga;
}

unit_unk_enum_info Jagd_Doga_inject_unk_enum()
{
    unit_unk_enum_info Jagd_Doga_unk_Enum;
    Jagd_Doga_unk_Enum.UnitID = 0x00004291;
    Jagd_Doga_unk_Enum.unk_enum = 0x1;
    return Jagd_Doga_unk_Enum;
}

unit_update_unit_id_list Jagd_Doga_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Jagd_Doga_Update_Unit_ID_List;
    Jagd_Doga_Update_Unit_ID_List.UnitID = 0x00004291;
    return Jagd_Doga_Update_Unit_ID_List;
}

unit_update_unit_id_list Jagd_Doga_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Jagd_Doga_Unit_ID_List_2;
    Jagd_Doga_Unit_ID_List_2.UnitID = 0x00004291;
    return Jagd_Doga_Unit_ID_List_2;
}

unit_string_info Jagd_Doga_inject_string()
{
    add_long_pilot_name_string_ID("F17041", 64);
    add_short_pilot_name_string_ID("S17041", 64);
    add_long_unit_name_string_ID("P17041", 64);
    add_short_unit_name_string_ID("Q17041", 64);

    unit_string_info Jagd_Doga_Gundam_String;
    Jagd_Doga_Gundam_String.UnitID = 0x00004291;
    Jagd_Doga_Gundam_String.unk_enum = 0xFFFFFFFF;
    Jagd_Doga_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[64].long_pilot_name_str;
    Jagd_Doga_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[64].short_pilot_name_str;
    Jagd_Doga_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[64].long_unit_name_str;
    Jagd_Doga_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[64].short_unit_name_str;

    return Jagd_Doga_Gundam_String;
}
                        