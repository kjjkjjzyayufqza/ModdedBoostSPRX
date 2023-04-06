

#include "Farsia.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Farsia_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Farsia_VoiceFileList;
    Farsia_VoiceFileList.UnitID = 0x00008125;
    Farsia_VoiceFileList.index = 0x00000137;
    Farsia_VoiceFileList.voice_file_list_hash = 0xC97C32AF;
    Farsia_VoiceFileList.unk_enum_0x8 = 0x000005C8;
    return Farsia_VoiceFileList;
}

unit_voice_hash_list_0x28 Farsia_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Farsia_ArcadeSelectHash;
    Farsia_ArcadeSelectHash.hash_1 = 0x373AEFBE; // VO_33_P06_CHARA_SELECT_01
Farsia_ArcadeSelectHash.hash_2 = 0xAE33BE04; // VO_33_P06_CHARA_SELECT_02
Farsia_ArcadeSelectHash.hash_3 = 0xD9348E92; // VO_33_P06_CHARA_SELECT_03
Farsia_ArcadeSelectHash.hash_4 = 0x47501B31; // VO_33_P06_CHARA_SELECT_04
Farsia_ArcadeSelectHash.hash_5 = 0x30572BA7; // VO_33_P06_CHARA_SELECT_05
Farsia_ArcadeSelectHash.hash_6 = 0xA95E7A1D; // VO_33_P06_CHARA_SELECT_06
Farsia_ArcadeSelectHash.hash_7 = 0;
Farsia_ArcadeSelectHash.hash_8 = 0;
Farsia_ArcadeSelectHash.hash_9 = 0;
Farsia_ArcadeSelectHash.hash_10 = 0;

    return Farsia_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Farsia_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Farsia_ArcadeContinueNoHash;
    Farsia_ArcadeContinueNoHash.hash_1 = 0x02C39035; // VO_33_P06_GAME_OVER_01
Farsia_ArcadeContinueNoHash.hash_2 = 0x9BCAC18F; // VO_33_P06_GAME_OVER_02
Farsia_ArcadeContinueNoHash.hash_3 = 0xECCDF119; // VO_33_P06_GAME_OVER_03
Farsia_ArcadeContinueNoHash.hash_4 = 0x72A964BA; // VO_33_P06_GAME_OVER_04
Farsia_ArcadeContinueNoHash.hash_5 = 0x05AE542C; // VO_33_P06_GAME_OVER_05

    return Farsia_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Farsia_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Farsia_ArcadeContinueHash;
    Farsia_ArcadeContinueHash.hash_1 = 0x44EB88C2; // VO_33_P06_CONTINUE_DEC_01
Farsia_ArcadeContinueHash.hash_2 = 0xDDE2D978; // VO_33_P06_CONTINUE_DEC_02
Farsia_ArcadeContinueHash.hash_3 = 0xAAE5E9EE; // VO_33_P06_CONTINUE_DEC_03
Farsia_ArcadeContinueHash.hash_4 = 0x34817C4D; // VO_33_P06_CONTINUE_DEC_04
Farsia_ArcadeContinueHash.hash_5 = 0x43864CDB; // VO_33_P06_CONTINUE_DEC_05

    return Farsia_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Farsia_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Farsia_ArcadeContinueYesHash;
    Farsia_ArcadeContinueYesHash.hash_1 = 0x93ADD5B9; // VO_33_P06_CONTINUE_01
Farsia_ArcadeContinueYesHash.hash_2 = 0x0AA48403; // VO_33_P06_CONTINUE_02
Farsia_ArcadeContinueYesHash.hash_3 = 0x44EB88C2; // VO_33_P06_CONTINUE_DEC_01
Farsia_ArcadeContinueYesHash.hash_4 = 0xDDE2D978; // VO_33_P06_CONTINUE_DEC_02
Farsia_ArcadeContinueYesHash.hash_5 = 0xAAE5E9EE; // VO_33_P06_CONTINUE_DEC_03
Farsia_ArcadeContinueYesHash.hash_6 = 0x7DA3B495; // VO_33_P06_CONTINUE_03
Farsia_ArcadeContinueYesHash.hash_7 = 0xE3C72136; // VO_33_P06_CONTINUE_04
Farsia_ArcadeContinueYesHash.hash_8 = 0x34817C4D; // VO_33_P06_CONTINUE_DEC_04
Farsia_ArcadeContinueYesHash.hash_9 = 0x43864CDB; // VO_33_P06_CONTINUE_DEC_05
Farsia_ArcadeContinueYesHash.hash_10 = 0xDA8F1D61; // VO_33_P06_CONTINUE_DEC_06

    return Farsia_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Farsia_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Farsia_BandaiNamcoGamesHash;
    Farsia_BandaiNamcoGamesHash.hash_1 = 0;
Farsia_BandaiNamcoGamesHash.hash_2 = 0;

    return Farsia_BandaiNamcoGamesHash;
}

unit_hash_info Farsia_inject_unit_hash_info()
{
    unit_hash_info Farsia;
    Farsia.UnitID = 0x00008125;
    Farsia.unk0 = 0xDDC3CBD6;
    Farsia.DataScript = 0x7485ECC2;
    Farsia.ModelText = 0x07EAE292;
    Farsia.OMO = 0x2F4E66A8;
    Farsia.EIDX = 0x6CD056B2;
    Farsia.Sound = 0xC8231F73;
    Farsia.GlobalPilotVoice = 0xC1DB7804;
    Farsia.WeaponImage = 0x7A12951E;
    Farsia.IngameImage = 0x7A12951E;
    Farsia.KPKP = 0x57E2387C;
    Farsia.VoiceFileList = 0xC97C32AF;
    Farsia.Stream = 0xEBA4DF07;

    return Farsia;
}

unit_unk_enum_info Farsia_inject_unk_enum()
{
    unit_unk_enum_info Farsia_unk_Enum;
    Farsia_unk_Enum.UnitID = 0x00008125;
    Farsia_unk_Enum.unk_enum = 0x1;
    return Farsia_unk_Enum;
}

unit_update_unit_id_list Farsia_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Farsia_Update_Unit_ID_List;
    Farsia_Update_Unit_ID_List.UnitID = 0x00008125;
    return Farsia_Update_Unit_ID_List;
}

unit_update_unit_id_list Farsia_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Farsia_Unit_ID_List_2;
    Farsia_Unit_ID_List_2.UnitID = 0x00008125;
    return Farsia_Unit_ID_List_2;
}

unit_string_info Farsia_inject_string()
{
    add_long_pilot_name_string_ID("F33061", 40);
    add_short_pilot_name_string_ID("S33061", 40);
    add_long_unit_name_string_ID("P33061", 40);
    add_short_unit_name_string_ID("Q33061", 40);

    unit_string_info Farsia_Gundam_String;
    Farsia_Gundam_String.UnitID = 0x00008125;
    Farsia_Gundam_String.unk_enum = 0xFFFFFFFF;
    Farsia_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[40].long_pilot_name_str;
    Farsia_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[40].short_pilot_name_str;
    Farsia_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[40].long_unit_name_str;
    Farsia_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[40].short_unit_name_str;

    return Farsia_Gundam_String;
}
                        