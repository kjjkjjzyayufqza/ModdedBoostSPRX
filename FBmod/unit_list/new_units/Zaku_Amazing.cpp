

#include "Zaku_Amazing.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Zaku_Amazing_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Zaku_Amazing_VoiceFileList;
    Zaku_Amazing_VoiceFileList.UnitID = 0x0000C74D;
    Zaku_Amazing_VoiceFileList.index = 0x0000015E;
    Zaku_Amazing_VoiceFileList.voice_file_list_hash = 0x152FAE16;
    Zaku_Amazing_VoiceFileList.unk_enum_0x8 = 0x000005EF;
    return Zaku_Amazing_VoiceFileList;
}

unit_voice_hash_list_0x28 Zaku_Amazing_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Zaku_Amazing_ArcadeSelectHash;
    Zaku_Amazing_ArcadeSelectHash.hash_1 = 0xD207938C; // VO_51_P02_CHARA_SELECT_01
Zaku_Amazing_ArcadeSelectHash.hash_2 = 0x4B0EC236; // VO_51_P02_CHARA_SELECT_02
Zaku_Amazing_ArcadeSelectHash.hash_3 = 0x3C09F2A0; // VO_51_P02_CHARA_SELECT_03
Zaku_Amazing_ArcadeSelectHash.hash_4 = 0;
Zaku_Amazing_ArcadeSelectHash.hash_5 = 0;
Zaku_Amazing_ArcadeSelectHash.hash_6 = 0;
Zaku_Amazing_ArcadeSelectHash.hash_7 = 0;
Zaku_Amazing_ArcadeSelectHash.hash_8 = 0;
Zaku_Amazing_ArcadeSelectHash.hash_9 = 0;
Zaku_Amazing_ArcadeSelectHash.hash_10 = 0;

    return Zaku_Amazing_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Zaku_Amazing_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Zaku_Amazing_ArcadeContinueNoHash;
    Zaku_Amazing_ArcadeContinueNoHash.hash_1 = 0x83677FBE; // VO_51_P02_GAME_OVER_01
Zaku_Amazing_ArcadeContinueNoHash.hash_2 = 0x1A6E2E04; // VO_51_P02_GAME_OVER_02
Zaku_Amazing_ArcadeContinueNoHash.hash_3 = 0;
Zaku_Amazing_ArcadeContinueNoHash.hash_4 = 0;
Zaku_Amazing_ArcadeContinueNoHash.hash_5 = 0;

    return Zaku_Amazing_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Zaku_Amazing_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Zaku_Amazing_ArcadeContinueHash;
    Zaku_Amazing_ArcadeContinueHash.hash_1 = 0xA1D6F4F0; // VO_51_P02_CONTINUE_DEC_01
Zaku_Amazing_ArcadeContinueHash.hash_2 = 0x38DFA54A; // VO_51_P02_CONTINUE_DEC_02
Zaku_Amazing_ArcadeContinueHash.hash_3 = 0;
Zaku_Amazing_ArcadeContinueHash.hash_4 = 0;
Zaku_Amazing_ArcadeContinueHash.hash_5 = 0;

    return Zaku_Amazing_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Zaku_Amazing_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Zaku_Amazing_ArcadeContinueYesHash;
    Zaku_Amazing_ArcadeContinueYesHash.hash_1 = 0x8954936D; // VO_51_P02_CONTINUE_01
Zaku_Amazing_ArcadeContinueYesHash.hash_2 = 0x105DC2D7; // VO_51_P02_CONTINUE_02
Zaku_Amazing_ArcadeContinueYesHash.hash_3 = 0xA1D6F4F0; // VO_51_P02_CONTINUE_DEC_01
Zaku_Amazing_ArcadeContinueYesHash.hash_4 = 0x38DFA54A; // VO_51_P02_CONTINUE_DEC_02
Zaku_Amazing_ArcadeContinueYesHash.hash_5 = 0;
Zaku_Amazing_ArcadeContinueYesHash.hash_6 = 0;
Zaku_Amazing_ArcadeContinueYesHash.hash_7 = 0;
Zaku_Amazing_ArcadeContinueYesHash.hash_8 = 0;
Zaku_Amazing_ArcadeContinueYesHash.hash_9 = 0;
Zaku_Amazing_ArcadeContinueYesHash.hash_10 = 0;

    return Zaku_Amazing_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Zaku_Amazing_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Zaku_Amazing_BandaiNamcoGamesHash;
    Zaku_Amazing_BandaiNamcoGamesHash.hash_1 = 0;
Zaku_Amazing_BandaiNamcoGamesHash.hash_2 = 0;

    return Zaku_Amazing_BandaiNamcoGamesHash;
}

unit_hash_info Zaku_Amazing_inject_unit_hash_info()
{
    unit_hash_info Zaku_Amazing;
    Zaku_Amazing.UnitID = 0x0000C74D;
    Zaku_Amazing.unk0 = 0xDDC3CBD6;
    Zaku_Amazing.DataScript = 0x267AA0CB;
    Zaku_Amazing.ModelText = 0x5515AE9B;
    Zaku_Amazing.OMO = 0x56C02140;
    Zaku_Amazing.EIDX = 0x155E115A;
    Zaku_Amazing.Sound = 0x03F6FA87;
    Zaku_Amazing.GlobalPilotVoice = 0x239C5BAE;
    Zaku_Amazing.WeaponImage = 0xEDBCAAAD;
    Zaku_Amazing.IngameImage = 0x3BF03C17;
    Zaku_Amazing.KPKP = 0x7B8232AC;
    Zaku_Amazing.VoiceFileList = 0x152FAE16;
    Zaku_Amazing.Stream = 0x14FD61CE;

    return Zaku_Amazing;
}

unit_unk_enum_info Zaku_Amazing_inject_unk_enum()
{
    unit_unk_enum_info Zaku_Amazing_unk_Enum;
    Zaku_Amazing_unk_Enum.UnitID = 0x0000C74D;
    Zaku_Amazing_unk_Enum.unk_enum = 0x1;
    return Zaku_Amazing_unk_Enum;
}

unit_update_unit_id_list Zaku_Amazing_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Zaku_Amazing_Update_Unit_ID_List;
    Zaku_Amazing_Update_Unit_ID_List.UnitID = 0x0000C74D;
    return Zaku_Amazing_Update_Unit_ID_List;
}

unit_update_unit_id_list Zaku_Amazing_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Zaku_Amazing_Unit_ID_List_2;
    Zaku_Amazing_Unit_ID_List_2.UnitID = 0x0000C74D;
    return Zaku_Amazing_Unit_ID_List_2;
}

unit_string_info Zaku_Amazing_inject_string()
{
    add_long_pilot_name_string_ID("F51021", 79);
    add_short_pilot_name_string_ID("S51021", 79);
    add_long_unit_name_string_ID("P51021", 79);
    add_short_unit_name_string_ID("Q51021", 79);

    unit_string_info Zaku_Amazing_Gundam_String;
    Zaku_Amazing_Gundam_String.UnitID = 0x0000C74D;
    Zaku_Amazing_Gundam_String.unk_enum = 0xFFFFFFFF;
    Zaku_Amazing_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[79].long_pilot_name_str;
    Zaku_Amazing_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[79].short_pilot_name_str;
    Zaku_Amazing_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[79].long_unit_name_str;
    Zaku_Amazing_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[79].short_unit_name_str;

    return Zaku_Amazing_Gundam_String;
}
                        