

#include "Akatsuki.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Akatsuki_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Akatsuki_VoiceFileList;
    Akatsuki_VoiceFileList.UnitID = 0x0000529F;
    Akatsuki_VoiceFileList.index = 0x00000147;
    Akatsuki_VoiceFileList.voice_file_list_hash = 0x0779646E;
    Akatsuki_VoiceFileList.unk_enum_0x8 = 0x000005D8;
    return Akatsuki_VoiceFileList;
}

unit_voice_hash_list_0x28 Akatsuki_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Akatsuki_ArcadeSelectHash;
    Akatsuki_ArcadeSelectHash.hash_1 = 0x781E6766; // VO_21_P15_CHARA_SELECT_01
Akatsuki_ArcadeSelectHash.hash_2 = 0xE11736DC; // VO_21_P15_CHARA_SELECT_02
Akatsuki_ArcadeSelectHash.hash_3 = 0x9610064A; // VO_21_P15_CHARA_SELECT_03
Akatsuki_ArcadeSelectHash.hash_4 = 0;
Akatsuki_ArcadeSelectHash.hash_5 = 0;
Akatsuki_ArcadeSelectHash.hash_6 = 0;
Akatsuki_ArcadeSelectHash.hash_7 = 0;
Akatsuki_ArcadeSelectHash.hash_8 = 0;
Akatsuki_ArcadeSelectHash.hash_9 = 0;
Akatsuki_ArcadeSelectHash.hash_10 = 0;

    return Akatsuki_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Akatsuki_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Akatsuki_ArcadeContinueNoHash;
    Akatsuki_ArcadeContinueNoHash.hash_1 = 0x156F85DD; // VO_21_P15_GAME_OVER_01
Akatsuki_ArcadeContinueNoHash.hash_2 = 0x8C66D467; // VO_21_P15_GAME_OVER_02
Akatsuki_ArcadeContinueNoHash.hash_3 = 0;
Akatsuki_ArcadeContinueNoHash.hash_4 = 0;
Akatsuki_ArcadeContinueNoHash.hash_5 = 0;

    return Akatsuki_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Akatsuki_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Akatsuki_ArcadeContinueHash;
    Akatsuki_ArcadeContinueHash.hash_1 = 0x0BCF001A; // VO_21_P15_CONTINUE_DEC_01
Akatsuki_ArcadeContinueHash.hash_2 = 0x92C651A0; // VO_21_P15_CONTINUE_DEC_02
Akatsuki_ArcadeContinueHash.hash_3 = 0xE5C16136; // VO_21_P15_CONTINUE_DEC_03
Akatsuki_ArcadeContinueHash.hash_4 = 0;
Akatsuki_ArcadeContinueHash.hash_5 = 0;

    return Akatsuki_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Akatsuki_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Akatsuki_ArcadeContinueYesHash;
    Akatsuki_ArcadeContinueYesHash.hash_1 = 0x88067E27; // VO_21_P15_CONTINUE_01
Akatsuki_ArcadeContinueYesHash.hash_2 = 0x110F2F9D; // VO_21_P15_CONTINUE_02
Akatsuki_ArcadeContinueYesHash.hash_3 = 0x0BCF001A; // VO_21_P15_CONTINUE_DEC_01
Akatsuki_ArcadeContinueYesHash.hash_4 = 0x92C651A0; // VO_21_P15_CONTINUE_DEC_02
Akatsuki_ArcadeContinueYesHash.hash_5 = 0xE5C16136; // VO_21_P15_CONTINUE_DEC_03
Akatsuki_ArcadeContinueYesHash.hash_6 = 0;
Akatsuki_ArcadeContinueYesHash.hash_7 = 0;
Akatsuki_ArcadeContinueYesHash.hash_8 = 0;
Akatsuki_ArcadeContinueYesHash.hash_9 = 0;
Akatsuki_ArcadeContinueYesHash.hash_10 = 0;

    return Akatsuki_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Akatsuki_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Akatsuki_BandaiNamcoGamesHash;
    Akatsuki_BandaiNamcoGamesHash.hash_1 = 0;
Akatsuki_BandaiNamcoGamesHash.hash_2 = 0;

    return Akatsuki_BandaiNamcoGamesHash;
}

unit_hash_info Akatsuki_inject_unit_hash_info()
{
    unit_hash_info Akatsuki;
    Akatsuki.UnitID = 0x0000529F;
    Akatsuki.unk0 = 0xDDC3CBD6;
    Akatsuki.DataScript = 0x1A2141F0;
    Akatsuki.ModelText = 0x694E4FA0;
    Akatsuki.OMO = 0xE7F79385;
    Akatsuki.EIDX = 0xA469A39F;
    Akatsuki.Sound = 0xCB20FB48;
    Akatsuki.GlobalPilotVoice = 0x62C1FFC2;
    Akatsuki.WeaponImage = 0xB5B94089;
    Akatsuki.IngameImage = 0xB5B94089;
    Akatsuki.KPKP = 0xFCFCF5CC;
    Akatsuki.VoiceFileList = 0x0779646E;
    Akatsuki.Stream = 0x4D236D65;

    return Akatsuki;
}

unit_unk_enum_info Akatsuki_inject_unk_enum()
{
    unit_unk_enum_info Akatsuki_unk_Enum;
    Akatsuki_unk_Enum.UnitID = 0x0000529F;
    Akatsuki_unk_Enum.unk_enum = 0x1;
    return Akatsuki_unk_Enum;
}

unit_update_unit_id_list Akatsuki_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Akatsuki_Update_Unit_ID_List;
    Akatsuki_Update_Unit_ID_List.UnitID = 0x0000529F;
    return Akatsuki_Update_Unit_ID_List;
}

unit_update_unit_id_list Akatsuki_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Akatsuki_Unit_ID_List_2;
    Akatsuki_Unit_ID_List_2.UnitID = 0x0000529F;
    return Akatsuki_Unit_ID_List_2;
}

unit_string_info Akatsuki_inject_string()
{
    add_long_pilot_name_string_ID("F21151", 56);
    add_short_pilot_name_string_ID("S21151", 56);
    add_long_unit_name_string_ID("P21151", 56);
    add_short_unit_name_string_ID("Q21151", 56);

    unit_string_info Akatsuki_Gundam_String;
    Akatsuki_Gundam_String.UnitID = 0x0000529F;
    Akatsuki_Gundam_String.unk_enum = 0xFFFFFFFF;
    Akatsuki_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[56].long_pilot_name_str;
    Akatsuki_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[56].short_pilot_name_str;
    Akatsuki_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[56].long_unit_name_str;
    Akatsuki_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[56].short_unit_name_str;

    return Akatsuki_Gundam_String;
}
                        