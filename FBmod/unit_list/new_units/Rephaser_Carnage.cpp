

#include "Rephaser_Carnage.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Rephaser_Carnage_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Rephaser_Carnage_VoiceFileList;
    Rephaser_Carnage_VoiceFileList.UnitID = 0x00013985;
    Rephaser_Carnage_VoiceFileList.index = 0x00000138;
    Rephaser_Carnage_VoiceFileList.voice_file_list_hash = 0xCF8A5B5A;
    Rephaser_Carnage_VoiceFileList.unk_enum_0x8 = 0x000005C9;
    return Rephaser_Carnage_VoiceFileList;
}

unit_voice_hash_list_0x28 Rephaser_Carnage_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Rephaser_Carnage_ArcadeSelectHash;
    Rephaser_Carnage_ArcadeSelectHash.hash_1 = 0xC9CB8D9E; // VO_80_P26_CHARA_SELECT_01
Rephaser_Carnage_ArcadeSelectHash.hash_2 = 0x50C2DC24; // VO_80_P26_CHARA_SELECT_02
Rephaser_Carnage_ArcadeSelectHash.hash_3 = 0x27C5ECB2; // VO_80_P26_CHARA_SELECT_03
Rephaser_Carnage_ArcadeSelectHash.hash_4 = 0;
Rephaser_Carnage_ArcadeSelectHash.hash_5 = 0;
Rephaser_Carnage_ArcadeSelectHash.hash_6 = 0;
Rephaser_Carnage_ArcadeSelectHash.hash_7 = 0;
Rephaser_Carnage_ArcadeSelectHash.hash_8 = 0;
Rephaser_Carnage_ArcadeSelectHash.hash_9 = 0;
Rephaser_Carnage_ArcadeSelectHash.hash_10 = 0;

    return Rephaser_Carnage_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Rephaser_Carnage_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Rephaser_Carnage_ArcadeContinueNoHash;
    Rephaser_Carnage_ArcadeContinueNoHash.hash_1 = 0xEA3467EA; // VO_80_P26_GAME_OVER_01
Rephaser_Carnage_ArcadeContinueNoHash.hash_2 = 0x733D3650; // VO_80_P26_GAME_OVER_02
Rephaser_Carnage_ArcadeContinueNoHash.hash_3 = 0;
Rephaser_Carnage_ArcadeContinueNoHash.hash_4 = 0;
Rephaser_Carnage_ArcadeContinueNoHash.hash_5 = 0;

    return Rephaser_Carnage_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Rephaser_Carnage_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Rephaser_Carnage_ArcadeContinueHash;
    Rephaser_Carnage_ArcadeContinueHash.hash_1 = 0xBA1AEAE2; // VO_80_P26_CONTINUE_DEC_01
Rephaser_Carnage_ArcadeContinueHash.hash_2 = 0x2313BB58; // VO_80_P26_CONTINUE_DEC_02
Rephaser_Carnage_ArcadeContinueHash.hash_3 = 0;
Rephaser_Carnage_ArcadeContinueHash.hash_4 = 0;
Rephaser_Carnage_ArcadeContinueHash.hash_5 = 0;

    return Rephaser_Carnage_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Rephaser_Carnage_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Rephaser_Carnage_ArcadeContinueYesHash;
    Rephaser_Carnage_ArcadeContinueYesHash.hash_1 = 0xDC8E39FE; // VO_80_P26_CONTINUE_01
Rephaser_Carnage_ArcadeContinueYesHash.hash_2 = 0x45876844; // VO_80_P26_CONTINUE_02
Rephaser_Carnage_ArcadeContinueYesHash.hash_3 = 0xBA1AEAE2; // VO_80_P26_CONTINUE_DEC_01
Rephaser_Carnage_ArcadeContinueYesHash.hash_4 = 0x2313BB58; // VO_80_P26_CONTINUE_DEC_02
Rephaser_Carnage_ArcadeContinueYesHash.hash_5 = 0;
Rephaser_Carnage_ArcadeContinueYesHash.hash_6 = 0;
Rephaser_Carnage_ArcadeContinueYesHash.hash_7 = 0;
Rephaser_Carnage_ArcadeContinueYesHash.hash_8 = 0;
Rephaser_Carnage_ArcadeContinueYesHash.hash_9 = 0;
Rephaser_Carnage_ArcadeContinueYesHash.hash_10 = 0;

    return Rephaser_Carnage_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Rephaser_Carnage_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Rephaser_Carnage_BandaiNamcoGamesHash;
    Rephaser_Carnage_BandaiNamcoGamesHash.hash_1 = 0xEFF2FF89; // VO_80_P26_BNG_LOGO_01
Rephaser_Carnage_BandaiNamcoGamesHash.hash_2 = 0;

    return Rephaser_Carnage_BandaiNamcoGamesHash;
}

unit_hash_info Rephaser_Carnage_inject_unit_hash_info()
{
    unit_hash_info Rephaser_Carnage;
    Rephaser_Carnage.UnitID = 0x00013985;
    Rephaser_Carnage.unk0 = 0xDDC3CBD6;
    Rephaser_Carnage.DataScript = 0xC9461C8A;
    Rephaser_Carnage.ModelText = 0xBA2912DA;
    Rephaser_Carnage.OMO = 0x57F46CFA;
    Rephaser_Carnage.EIDX = 0x146A5CE0;
    Rephaser_Carnage.Sound = 0xB5911F86;
    Rephaser_Carnage.GlobalPilotVoice = 0x6FD68DBC;
    Rephaser_Carnage.WeaponImage = 0x0410C1EE;
    Rephaser_Carnage.IngameImage = 0x51C5D6B4;
    Rephaser_Carnage.KPKP = 0x5AE5211E;
    Rephaser_Carnage.VoiceFileList = 0xCF8A5B5A;
    Rephaser_Carnage.Stream = 0x373B2DEF;

    return Rephaser_Carnage;
}

unit_unk_enum_info Rephaser_Carnage_inject_unk_enum()
{
    unit_unk_enum_info Rephaser_Carnage_unk_Enum;
    Rephaser_Carnage_unk_Enum.UnitID = 0x00013985;
    Rephaser_Carnage_unk_Enum.unk_enum = 0x1;
    return Rephaser_Carnage_unk_Enum;
}

unit_update_unit_id_list Rephaser_Carnage_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Rephaser_Carnage_Update_Unit_ID_List;
    Rephaser_Carnage_Update_Unit_ID_List.UnitID = 0x00013985;
    return Rephaser_Carnage_Update_Unit_ID_List;
}

unit_update_unit_id_list Rephaser_Carnage_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Rephaser_Carnage_Unit_ID_List_2;
    Rephaser_Carnage_Unit_ID_List_2.UnitID = 0x00013985;
    return Rephaser_Carnage_Unit_ID_List_2;
}

unit_string_info Rephaser_Carnage_inject_string()
{
    add_long_pilot_name_string_ID("F80261", 41);
    add_short_pilot_name_string_ID("S80261", 41);
    add_long_unit_name_string_ID("P80261", 41);
    add_short_unit_name_string_ID("Q80261", 41);

    unit_string_info Rephaser_Carnage_Gundam_String;
    Rephaser_Carnage_Gundam_String.UnitID = 0x00013985;
    Rephaser_Carnage_Gundam_String.unk_enum = 0xFFFFFFFF;
    Rephaser_Carnage_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[41].long_pilot_name_str;
    Rephaser_Carnage_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[41].short_pilot_name_str;
    Rephaser_Carnage_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[41].long_unit_name_str;
    Rephaser_Carnage_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[41].short_unit_name_str;

    return Rephaser_Carnage_Gundam_String;
}
                        