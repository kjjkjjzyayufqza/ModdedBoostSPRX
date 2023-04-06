

#include "Phantom_Gundam.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Phantom_Gundam_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Phantom_Gundam_VoiceFileList;
    Phantom_Gundam_VoiceFileList.UnitID = 0x00005A0B;
    Phantom_Gundam_VoiceFileList.index = 0x00000132;
    Phantom_Gundam_VoiceFileList.voice_file_list_hash = 0x4EE8861A;
    Phantom_Gundam_VoiceFileList.unk_enum_0x8 = 0x000005C3;
    return Phantom_Gundam_VoiceFileList;
}

unit_voice_hash_list_0x28 Phantom_Gundam_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Phantom_Gundam_ArcadeSelectHash;
    Phantom_Gundam_ArcadeSelectHash.hash_1 = 0x7388D0FA; // VO_23_P05_CHARA_SELECT_01
Phantom_Gundam_ArcadeSelectHash.hash_2 = 0xEA818140; // VO_23_P05_CHARA_SELECT_02
Phantom_Gundam_ArcadeSelectHash.hash_3 = 0x9D86B1D6; // VO_23_P05_CHARA_SELECT_03
Phantom_Gundam_ArcadeSelectHash.hash_4 = 0x03E22475; // VO_23_P05_CHARA_SELECT_04
Phantom_Gundam_ArcadeSelectHash.hash_5 = 0x74E514E3; // VO_23_P05_CHARA_SELECT_05
Phantom_Gundam_ArcadeSelectHash.hash_6 = 0;
Phantom_Gundam_ArcadeSelectHash.hash_7 = 0;
Phantom_Gundam_ArcadeSelectHash.hash_8 = 0;
Phantom_Gundam_ArcadeSelectHash.hash_9 = 0;
Phantom_Gundam_ArcadeSelectHash.hash_10 = 0;

    return Phantom_Gundam_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Phantom_Gundam_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Phantom_Gundam_ArcadeContinueNoHash;
    Phantom_Gundam_ArcadeContinueNoHash.hash_1 = 0xA94035B6; // VO_23_P05_GAME_OVER_01
Phantom_Gundam_ArcadeContinueNoHash.hash_2 = 0x3049640C; // VO_23_P05_GAME_OVER_02
Phantom_Gundam_ArcadeContinueNoHash.hash_3 = 0;
Phantom_Gundam_ArcadeContinueNoHash.hash_4 = 0;
Phantom_Gundam_ArcadeContinueNoHash.hash_5 = 0;

    return Phantom_Gundam_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Phantom_Gundam_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Phantom_Gundam_ArcadeContinueHash;
    Phantom_Gundam_ArcadeContinueHash.hash_1 = 0x0059B786; // VO_23_P05_CONTINUE_DEC_01
Phantom_Gundam_ArcadeContinueHash.hash_2 = 0x9950E63C; // VO_23_P05_CONTINUE_DEC_02
Phantom_Gundam_ArcadeContinueHash.hash_3 = 0;
Phantom_Gundam_ArcadeContinueHash.hash_4 = 0;
Phantom_Gundam_ArcadeContinueHash.hash_5 = 0;

    return Phantom_Gundam_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Phantom_Gundam_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Phantom_Gundam_ArcadeContinueYesHash;
    Phantom_Gundam_ArcadeContinueYesHash.hash_1 = 0xC1350F96; // VO_23_P05_CONTINUE_01
Phantom_Gundam_ArcadeContinueYesHash.hash_2 = 0x583C5E2C; // VO_23_P05_CONTINUE_02
Phantom_Gundam_ArcadeContinueYesHash.hash_3 = 0x0059B786; // VO_23_P05_CONTINUE_DEC_01
Phantom_Gundam_ArcadeContinueYesHash.hash_4 = 0x9950E63C; // VO_23_P05_CONTINUE_DEC_02
Phantom_Gundam_ArcadeContinueYesHash.hash_5 = 0;
Phantom_Gundam_ArcadeContinueYesHash.hash_6 = 0;
Phantom_Gundam_ArcadeContinueYesHash.hash_7 = 0;
Phantom_Gundam_ArcadeContinueYesHash.hash_8 = 0;
Phantom_Gundam_ArcadeContinueYesHash.hash_9 = 0;
Phantom_Gundam_ArcadeContinueYesHash.hash_10 = 0;

    return Phantom_Gundam_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Phantom_Gundam_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Phantom_Gundam_BandaiNamcoGamesHash;
    Phantom_Gundam_BandaiNamcoGamesHash.hash_1 = 0;
Phantom_Gundam_BandaiNamcoGamesHash.hash_2 = 0;

    return Phantom_Gundam_BandaiNamcoGamesHash;
}

unit_hash_info Phantom_Gundam_inject_unit_hash_info()
{
    unit_hash_info Phantom_Gundam;
    Phantom_Gundam.UnitID = 0x00005A0B;
    Phantom_Gundam.unk0 = 0xDDC3CBD6;
    Phantom_Gundam.DataScript = 0x5949138A;
    Phantom_Gundam.ModelText = 0x2A261DDA;
    Phantom_Gundam.OMO = 0x576463F5;
    Phantom_Gundam.EIDX = 0x14FA53EF;
    Phantom_Gundam.Sound = 0x0FB92393;
    Phantom_Gundam.GlobalPilotVoice = 0xF553B704;
    Phantom_Gundam.WeaponImage = 0xB40250E1;
    Phantom_Gundam.IngameImage = 0xB40250E1;
    Phantom_Gundam.KPKP = 0x3EAAC733;
    Phantom_Gundam.VoiceFileList = 0x4EE8861A;
    Phantom_Gundam.Stream = 0x0DB2236E;

    return Phantom_Gundam;
}

unit_unk_enum_info Phantom_Gundam_inject_unk_enum()
{
    unit_unk_enum_info Phantom_Gundam_unk_Enum;
    Phantom_Gundam_unk_Enum.UnitID = 0x00005A0B;
    Phantom_Gundam_unk_Enum.unk_enum = 0x1;
    return Phantom_Gundam_unk_Enum;
}

unit_update_unit_id_list Phantom_Gundam_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Phantom_Gundam_Update_Unit_ID_List;
    Phantom_Gundam_Update_Unit_ID_List.UnitID = 0x00005A0B;
    return Phantom_Gundam_Update_Unit_ID_List;
}

unit_update_unit_id_list Phantom_Gundam_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Phantom_Gundam_Unit_ID_List_2;
    Phantom_Gundam_Unit_ID_List_2.UnitID = 0x00005A0B;
    return Phantom_Gundam_Unit_ID_List_2;
}

unit_string_info Phantom_Gundam_inject_string()
{
    add_long_pilot_name_string_ID("F23051", 35);
    add_short_pilot_name_string_ID("S23051", 35);
    add_long_unit_name_string_ID("P23051", 35);
    add_short_unit_name_string_ID("Q23051", 35);

    unit_string_info Phantom_Gundam_Gundam_String;
    Phantom_Gundam_Gundam_String.UnitID = 0x00005A0B;
    Phantom_Gundam_Gundam_String.unk_enum = 0xFFFFFFFF;
    Phantom_Gundam_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[35].long_pilot_name_str;
    Phantom_Gundam_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[35].short_pilot_name_str;
    Phantom_Gundam_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[35].long_unit_name_str;
    Phantom_Gundam_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[35].short_unit_name_str;

    return Phantom_Gundam_Gundam_String;
}
                        