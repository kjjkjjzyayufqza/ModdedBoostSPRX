

#include "Vagan_Gear_Sid.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Vagan_Gear_Sid_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Vagan_Gear_Sid_VoiceFileList;
    Vagan_Gear_Sid_VoiceFileList.UnitID = 0x00013967;
    Vagan_Gear_Sid_VoiceFileList.index = 0x00000117;
    Vagan_Gear_Sid_VoiceFileList.voice_file_list_hash = 0xE9A855F3;
    Vagan_Gear_Sid_VoiceFileList.unk_enum_0x8 = 0x000005A8;
    return Vagan_Gear_Sid_VoiceFileList;
}

unit_voice_hash_list_0x28 Vagan_Gear_Sid_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Vagan_Gear_Sid_ArcadeSelectHash;
    Vagan_Gear_Sid_ArcadeSelectHash.hash_1 = 0x3D656112; // VO_80_P23_CHARA_SELECT_01
Vagan_Gear_Sid_ArcadeSelectHash.hash_2 = 0xA46C30A8; // VO_80_P23_CHARA_SELECT_02
Vagan_Gear_Sid_ArcadeSelectHash.hash_3 = 0xD36B003E; // VO_80_P23_CHARA_SELECT_03
Vagan_Gear_Sid_ArcadeSelectHash.hash_4 = 0x4D0F959D; // VO_80_P23_CHARA_SELECT_04
Vagan_Gear_Sid_ArcadeSelectHash.hash_5 = 0x3A08A50B; // VO_80_P23_CHARA_SELECT_05
Vagan_Gear_Sid_ArcadeSelectHash.hash_6 = 0;
Vagan_Gear_Sid_ArcadeSelectHash.hash_7 = 0;
Vagan_Gear_Sid_ArcadeSelectHash.hash_8 = 0;
Vagan_Gear_Sid_ArcadeSelectHash.hash_9 = 0;
Vagan_Gear_Sid_ArcadeSelectHash.hash_10 = 0;

    return Vagan_Gear_Sid_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Vagan_Gear_Sid_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Vagan_Gear_Sid_ArcadeContinueNoHash;
    Vagan_Gear_Sid_ArcadeContinueNoHash.hash_1 = 0x6E970987; // VO_80_P23_GAME_OVER_01
Vagan_Gear_Sid_ArcadeContinueNoHash.hash_2 = 0xF79E583D; // VO_80_P23_GAME_OVER_02
Vagan_Gear_Sid_ArcadeContinueNoHash.hash_3 = 0;
Vagan_Gear_Sid_ArcadeContinueNoHash.hash_4 = 0;
Vagan_Gear_Sid_ArcadeContinueNoHash.hash_5 = 0;

    return Vagan_Gear_Sid_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Vagan_Gear_Sid_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Vagan_Gear_Sid_ArcadeContinueHash;
    Vagan_Gear_Sid_ArcadeContinueHash.hash_1 = 0x4EB4066E; // VO_80_P23_CONTINUE_DEC_01
Vagan_Gear_Sid_ArcadeContinueHash.hash_2 = 0xD7BD57D4; // VO_80_P23_CONTINUE_DEC_02
Vagan_Gear_Sid_ArcadeContinueHash.hash_3 = 0;
Vagan_Gear_Sid_ArcadeContinueHash.hash_4 = 0;
Vagan_Gear_Sid_ArcadeContinueHash.hash_5 = 0;

    return Vagan_Gear_Sid_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Vagan_Gear_Sid_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Vagan_Gear_Sid_ArcadeContinueYesHash;
    Vagan_Gear_Sid_ArcadeContinueYesHash.hash_1 = 0xC1A18AED; // VO_80_P23_CONTINUE_01
Vagan_Gear_Sid_ArcadeContinueYesHash.hash_2 = 0x58A8DB57; // VO_80_P23_CONTINUE_02
Vagan_Gear_Sid_ArcadeContinueYesHash.hash_3 = 0x4EB4066E; // VO_80_P23_CONTINUE_DEC_01
Vagan_Gear_Sid_ArcadeContinueYesHash.hash_4 = 0xD7BD57D4; // VO_80_P23_CONTINUE_DEC_02
Vagan_Gear_Sid_ArcadeContinueYesHash.hash_5 = 0;
Vagan_Gear_Sid_ArcadeContinueYesHash.hash_6 = 0;
Vagan_Gear_Sid_ArcadeContinueYesHash.hash_7 = 0;
Vagan_Gear_Sid_ArcadeContinueYesHash.hash_8 = 0;
Vagan_Gear_Sid_ArcadeContinueYesHash.hash_9 = 0;
Vagan_Gear_Sid_ArcadeContinueYesHash.hash_10 = 0;

    return Vagan_Gear_Sid_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Vagan_Gear_Sid_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Vagan_Gear_Sid_BandaiNamcoGamesHash;
    Vagan_Gear_Sid_BandaiNamcoGamesHash.hash_1 = 0xF2DD4C9A; // VO_80_P23_BNG_LOGO_01
Vagan_Gear_Sid_BandaiNamcoGamesHash.hash_2 = 0;

    return Vagan_Gear_Sid_BandaiNamcoGamesHash;
}

unit_hash_info Vagan_Gear_Sid_inject_unit_hash_info()
{
    unit_hash_info Vagan_Gear_Sid;
    Vagan_Gear_Sid.UnitID = 0x00013967;
    Vagan_Gear_Sid.unk0 = 0xDDC3CBD6;
    Vagan_Gear_Sid.DataScript = 0x16E7EBE2;
    Vagan_Gear_Sid.ModelText = 0x6588E5B2;
    Vagan_Gear_Sid.OMO = 0x14422467;
    Vagan_Gear_Sid.EIDX = 0x57DC147D;
    Vagan_Gear_Sid.Sound = 0xCDD723B9;
    Vagan_Gear_Sid.GlobalPilotVoice = 0x1AB6534A;
    Vagan_Gear_Sid.WeaponImage = 0xC5086A42;
    Vagan_Gear_Sid.IngameImage = 0xC5086A42;
    Vagan_Gear_Sid.KPKP = 0x88F66DEA;
    Vagan_Gear_Sid.VoiceFileList = 0xE9A855F3;
    Vagan_Gear_Sid.Stream = 0x3D46472D;

    return Vagan_Gear_Sid;
}

unit_unk_enum_info Vagan_Gear_Sid_inject_unk_enum()
{
    unit_unk_enum_info Vagan_Gear_Sid_unk_Enum;
    Vagan_Gear_Sid_unk_Enum.UnitID = 0x00013967;
    Vagan_Gear_Sid_unk_Enum.unk_enum = 0x1;
    return Vagan_Gear_Sid_unk_Enum;
}

unit_update_unit_id_list Vagan_Gear_Sid_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Vagan_Gear_Sid_Update_Unit_ID_List;
    Vagan_Gear_Sid_Update_Unit_ID_List.UnitID = 0x00013967;
    return Vagan_Gear_Sid_Update_Unit_ID_List;
}

unit_update_unit_id_list Vagan_Gear_Sid_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Vagan_Gear_Sid_Unit_ID_List_2;
    Vagan_Gear_Sid_Unit_ID_List_2.UnitID = 0x00013967;
    return Vagan_Gear_Sid_Unit_ID_List_2;
}

unit_string_info Vagan_Gear_Sid_inject_string()
{
    add_long_pilot_name_string_ID("F80231", 8);
    add_short_pilot_name_string_ID("S80231", 8);
    add_long_unit_name_string_ID("P80231", 8);
    add_short_unit_name_string_ID("Q80231", 8);

    unit_string_info Vagan_Gear_Sid_Gundam_String;
    Vagan_Gear_Sid_Gundam_String.UnitID = 0x00013967;
    Vagan_Gear_Sid_Gundam_String.unk_enum = 0xFFFFFFFF;
    Vagan_Gear_Sid_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[8].long_pilot_name_str;
    Vagan_Gear_Sid_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[8].short_pilot_name_str;
    Vagan_Gear_Sid_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[8].long_unit_name_str;
    Vagan_Gear_Sid_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[8].short_unit_name_str;

    return Vagan_Gear_Sid_Gundam_String;
}
                        