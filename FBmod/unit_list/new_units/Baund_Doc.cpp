

#include "Baund_Doc.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Baund_Doc_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Baund_Doc_VoiceFileList;
    Baund_Doc_VoiceFileList.UnitID = 0x00000871;
    Baund_Doc_VoiceFileList.index = 0x00000152;
    Baund_Doc_VoiceFileList.voice_file_list_hash = 0x005F0BB8;
    Baund_Doc_VoiceFileList.unk_enum_0x8 = 0x000005E3;
    return Baund_Doc_VoiceFileList;
}

unit_voice_hash_list_0x28 Baund_Doc_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Baund_Doc_ArcadeSelectHash;
    Baund_Doc_ArcadeSelectHash.hash_1 = 0x7ECA7781; // VO_02_P16_CHARA_SELECT_01
Baund_Doc_ArcadeSelectHash.hash_2 = 0xE7C3263B; // VO_02_P16_CHARA_SELECT_02
Baund_Doc_ArcadeSelectHash.hash_3 = 0x90C416AD; // VO_02_P16_CHARA_SELECT_03
Baund_Doc_ArcadeSelectHash.hash_4 = 0x0EA0830E; // VO_02_P16_CHARA_SELECT_04
Baund_Doc_ArcadeSelectHash.hash_5 = 0;
Baund_Doc_ArcadeSelectHash.hash_6 = 0;
Baund_Doc_ArcadeSelectHash.hash_7 = 0;
Baund_Doc_ArcadeSelectHash.hash_8 = 0;
Baund_Doc_ArcadeSelectHash.hash_9 = 0;
Baund_Doc_ArcadeSelectHash.hash_10 = 0;

    return Baund_Doc_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Baund_Doc_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Baund_Doc_ArcadeContinueNoHash;
    Baund_Doc_ArcadeContinueNoHash.hash_1 = 0xF73C7B95; // VO_02_P16_GAME_OVER_01
Baund_Doc_ArcadeContinueNoHash.hash_2 = 0x6E352A2F; // VO_02_P16_GAME_OVER_02
Baund_Doc_ArcadeContinueNoHash.hash_3 = 0;
Baund_Doc_ArcadeContinueNoHash.hash_4 = 0;
Baund_Doc_ArcadeContinueNoHash.hash_5 = 0;

    return Baund_Doc_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Baund_Doc_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Baund_Doc_ArcadeContinueHash;
    Baund_Doc_ArcadeContinueHash.hash_1 = 0x0D1B10FD; // VO_02_P16_CONTINUE_DEC_01
Baund_Doc_ArcadeContinueHash.hash_2 = 0x94124147; // VO_02_P16_CONTINUE_DEC_02
Baund_Doc_ArcadeContinueHash.hash_3 = 0;
Baund_Doc_ArcadeContinueHash.hash_4 = 0;
Baund_Doc_ArcadeContinueHash.hash_5 = 0;

    return Baund_Doc_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Baund_Doc_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Baund_Doc_ArcadeContinueYesHash;
    Baund_Doc_ArcadeContinueYesHash.hash_1 = 0x638222EE; // VO_02_P16_CONTINUE_01
Baund_Doc_ArcadeContinueYesHash.hash_2 = 0xFA8B7354; // VO_02_P16_CONTINUE_02
Baund_Doc_ArcadeContinueYesHash.hash_3 = 0x0D1B10FD; // VO_02_P16_CONTINUE_DEC_01
Baund_Doc_ArcadeContinueYesHash.hash_4 = 0x94124147; // VO_02_P16_CONTINUE_DEC_02
Baund_Doc_ArcadeContinueYesHash.hash_5 = 0;
Baund_Doc_ArcadeContinueYesHash.hash_6 = 0;
Baund_Doc_ArcadeContinueYesHash.hash_7 = 0;
Baund_Doc_ArcadeContinueYesHash.hash_8 = 0;
Baund_Doc_ArcadeContinueYesHash.hash_9 = 0;
Baund_Doc_ArcadeContinueYesHash.hash_10 = 0;

    return Baund_Doc_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Baund_Doc_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Baund_Doc_BandaiNamcoGamesHash;
    Baund_Doc_BandaiNamcoGamesHash.hash_1 = 0;
Baund_Doc_BandaiNamcoGamesHash.hash_2 = 0;

    return Baund_Doc_BandaiNamcoGamesHash;
}

unit_hash_info Baund_Doc_inject_unit_hash_info()
{
    unit_hash_info Baund_Doc;
    Baund_Doc.UnitID = 0x00000871;
    Baund_Doc.unk0 = 0xDDC3CBD6;
    Baund_Doc.DataScript = 0x6C5F330B;
    Baund_Doc.ModelText = 0x1F303D5B;
    Baund_Doc.OMO = 0xCDEEC663;
    Baund_Doc.EIDX = 0x8E70F679;
    Baund_Doc.Sound = 0x51876F6F;
    Baund_Doc.GlobalPilotVoice = 0x7CD65706;
    Baund_Doc.WeaponImage = 0x178A2BC9;
    Baund_Doc.IngameImage = 0x178A2BC9;
    Baund_Doc.KPKP = 0xF0D2C30C;
    Baund_Doc.VoiceFileList = 0x005F0BB8;
    Baund_Doc.Stream = 0x5B79C1F7;

    return Baund_Doc;
}

unit_unk_enum_info Baund_Doc_inject_unk_enum()
{
    unit_unk_enum_info Baund_Doc_unk_Enum;
    Baund_Doc_unk_Enum.UnitID = 0x00000871;
    Baund_Doc_unk_Enum.unk_enum = 0x1;
    return Baund_Doc_unk_Enum;
}

unit_update_unit_id_list Baund_Doc_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Baund_Doc_Update_Unit_ID_List;
    Baund_Doc_Update_Unit_ID_List.UnitID = 0x00000871;
    return Baund_Doc_Update_Unit_ID_List;
}

unit_update_unit_id_list Baund_Doc_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Baund_Doc_Unit_ID_List_2;
    Baund_Doc_Unit_ID_List_2.UnitID = 0x00000871;
    return Baund_Doc_Unit_ID_List_2;
}

unit_string_info Baund_Doc_inject_string()
{
    add_long_pilot_name_string_ID("F2161", 67);
    add_short_pilot_name_string_ID("S2161", 67);
    add_long_unit_name_string_ID("P2161", 67);
    add_short_unit_name_string_ID("Q2161", 67);

    unit_string_info Baund_Doc_Gundam_String;
    Baund_Doc_Gundam_String.UnitID = 0x00000871;
    Baund_Doc_Gundam_String.unk_enum = 0xFFFFFFFF;
    Baund_Doc_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[67].long_pilot_name_str;
    Baund_Doc_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[67].short_pilot_name_str;
    Baund_Doc_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[67].long_unit_name_str;
    Baund_Doc_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[67].short_unit_name_str;

    return Baund_Doc_Gundam_String;
}
                        