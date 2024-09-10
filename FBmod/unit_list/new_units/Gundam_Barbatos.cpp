

#include "Gundam_Barbatos.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Gundam_Barbatos_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Gundam_Barbatos_VoiceFileList;
    Gundam_Barbatos_VoiceFileList.UnitID = 0x0000A803;
    Gundam_Barbatos_VoiceFileList.index = 0x0000014D;
    Gundam_Barbatos_VoiceFileList.voice_file_list_hash = 0x21451AA4;
    Gundam_Barbatos_VoiceFileList.unk_enum_0x8 = 0x000005DE;
    return Gundam_Barbatos_VoiceFileList;
}

unit_voice_hash_list_0x28 Gundam_Barbatos_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Gundam_Barbatos_ArcadeSelectHash;
    Gundam_Barbatos_ArcadeSelectHash.hash_1 = 0x7271ADB5; // VO_43_P01_CHARA_SELECT_01
Gundam_Barbatos_ArcadeSelectHash.hash_2 = 0xEB78FC0F; // VO_43_P01_CHARA_SELECT_02
Gundam_Barbatos_ArcadeSelectHash.hash_3 = 0x9C7FCC99; // VO_43_P01_CHARA_SELECT_03
Gundam_Barbatos_ArcadeSelectHash.hash_4 = 0x021B593A; // VO_43_P01_CHARA_SELECT_04
Gundam_Barbatos_ArcadeSelectHash.hash_5 = 0;
Gundam_Barbatos_ArcadeSelectHash.hash_6 = 0;
Gundam_Barbatos_ArcadeSelectHash.hash_7 = 0;
Gundam_Barbatos_ArcadeSelectHash.hash_8 = 0;
Gundam_Barbatos_ArcadeSelectHash.hash_9 = 0;
Gundam_Barbatos_ArcadeSelectHash.hash_10 = 0;

    return Gundam_Barbatos_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Gundam_Barbatos_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Gundam_Barbatos_ArcadeContinueNoHash;
    Gundam_Barbatos_ArcadeContinueNoHash.hash_1 = 0x2D30B1BE; // VO_43_P01_GAME_OVER_01
Gundam_Barbatos_ArcadeContinueNoHash.hash_2 = 0xB439E004; // VO_43_P01_GAME_OVER_02
Gundam_Barbatos_ArcadeContinueNoHash.hash_3 = 0;
Gundam_Barbatos_ArcadeContinueNoHash.hash_4 = 0;
Gundam_Barbatos_ArcadeContinueNoHash.hash_5 = 0;

    return Gundam_Barbatos_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Gundam_Barbatos_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Gundam_Barbatos_ArcadeContinueHash;
    Gundam_Barbatos_ArcadeContinueHash.hash_1 = 0x01A0CAC9; // VO_43_P01_CONTINUE_DEC_01
Gundam_Barbatos_ArcadeContinueHash.hash_2 = 0x98A99B73; // VO_43_P01_CONTINUE_DEC_02
Gundam_Barbatos_ArcadeContinueHash.hash_3 = 0xEFAEABE5; // VO_43_P01_CONTINUE_DEC_03
Gundam_Barbatos_ArcadeContinueHash.hash_4 = 0;
Gundam_Barbatos_ArcadeContinueHash.hash_5 = 0;

    return Gundam_Barbatos_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Gundam_Barbatos_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Gundam_Barbatos_ArcadeContinueYesHash;
    Gundam_Barbatos_ArcadeContinueYesHash.hash_1 = 0x0FF0D985; // VO_43_P01_CONTINUE_01
Gundam_Barbatos_ArcadeContinueYesHash.hash_2 = 0x96F9883F; // VO_43_P01_CONTINUE_02
Gundam_Barbatos_ArcadeContinueYesHash.hash_3 = 0x01A0CAC9; // VO_43_P01_CONTINUE_DEC_01
Gundam_Barbatos_ArcadeContinueYesHash.hash_4 = 0x98A99B73; // VO_43_P01_CONTINUE_DEC_02
Gundam_Barbatos_ArcadeContinueYesHash.hash_5 = 0xEFAEABE5; // VO_43_P01_CONTINUE_DEC_03
Gundam_Barbatos_ArcadeContinueYesHash.hash_6 = 0;
Gundam_Barbatos_ArcadeContinueYesHash.hash_7 = 0;
Gundam_Barbatos_ArcadeContinueYesHash.hash_8 = 0;
Gundam_Barbatos_ArcadeContinueYesHash.hash_9 = 0;
Gundam_Barbatos_ArcadeContinueYesHash.hash_10 = 0;

    return Gundam_Barbatos_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Gundam_Barbatos_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Gundam_Barbatos_BandaiNamcoGamesHash;
    Gundam_Barbatos_BandaiNamcoGamesHash.hash_1 = 0;
Gundam_Barbatos_BandaiNamcoGamesHash.hash_2 = 0;

    return Gundam_Barbatos_BandaiNamcoGamesHash;
}

unit_hash_info Gundam_Barbatos_inject_unit_hash_info()
{
    unit_hash_info Gundam_Barbatos;
    Gundam_Barbatos.UnitID = 0x0000A803;
    Gundam_Barbatos.unk0 = 0xDDC3CBD6;
    Gundam_Barbatos.DataScript = 0xC86EF530;
    Gundam_Barbatos.ModelText = 0xBB01FB60;
    Gundam_Barbatos.OMO = 0x7C411E81;
    Gundam_Barbatos.EIDX = 0x3FDF2E9B;
    Gundam_Barbatos.Sound = 0x50E60449;
    Gundam_Barbatos.GlobalPilotVoice = 0xC1990D20;
    Gundam_Barbatos.WeaponImage = 0xF7887DAF;
    Gundam_Barbatos.IngameImage = 0xB97CCBB0;
    Gundam_Barbatos.KPKP = 0xEF644C31;
    Gundam_Barbatos.VoiceFileList = 0x21451AA4;
    Gundam_Barbatos.Stream = 0xA9D1FB07;

    return Gundam_Barbatos;
}

unit_unk_enum_info Gundam_Barbatos_inject_unk_enum()
{
    unit_unk_enum_info Gundam_Barbatos_unk_Enum;
    Gundam_Barbatos_unk_Enum.UnitID = 0x0000A803;
    Gundam_Barbatos_unk_Enum.unk_enum = 0x1;
    return Gundam_Barbatos_unk_Enum;
}

unit_update_unit_id_list Gundam_Barbatos_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Gundam_Barbatos_Update_Unit_ID_List;
    Gundam_Barbatos_Update_Unit_ID_List.UnitID = 0x0000A803;
    return Gundam_Barbatos_Update_Unit_ID_List;
}

unit_update_unit_id_list Gundam_Barbatos_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Gundam_Barbatos_Unit_ID_List_2;
    Gundam_Barbatos_Unit_ID_List_2.UnitID = 0x0000A803;
    return Gundam_Barbatos_Unit_ID_List_2;
}

unit_string_info Gundam_Barbatos_inject_string()
{
    add_long_pilot_name_string_ID("F43011", 62);
    add_short_pilot_name_string_ID("S43011", 62);
    add_long_unit_name_string_ID("P43011", 62);
    add_short_unit_name_string_ID("Q43011", 62);

    unit_string_info Gundam_Barbatos_Gundam_String;
    Gundam_Barbatos_Gundam_String.UnitID = 0x0000A803;
    Gundam_Barbatos_Gundam_String.unk_enum = 0xFFFFFFFF;
    Gundam_Barbatos_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[62].long_pilot_name_str;
    Gundam_Barbatos_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[62].short_pilot_name_str;
    Gundam_Barbatos_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[62].long_unit_name_str;
    Gundam_Barbatos_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[62].short_unit_name_str;

    return Gundam_Barbatos_Gundam_String;
}
                        