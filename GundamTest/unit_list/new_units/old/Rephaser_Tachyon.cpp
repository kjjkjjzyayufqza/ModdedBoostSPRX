

#include "Rephaser_Tachyon.h"
#include "../unit_list_structs.h"
#include "../unit_list_common.h"

unit_voice_file_list_info Rephaser_Tachyon_inject_unit_voice_file_list_info()
{
    unit_voice_file_list_info Rephaser_Tachyon_VoiceFileList;
    Rephaser_Tachyon_VoiceFileList.UnitID = 0x00013999;
    Rephaser_Tachyon_VoiceFileList.index = 0x0000011C;
    Rephaser_Tachyon_VoiceFileList.voice_file_list_hash = 0x30C517FC;
    Rephaser_Tachyon_VoiceFileList.unk_enum_0x8 = 0x000005AD;
    return Rephaser_Tachyon_VoiceFileList;
}

unit_voice_hash_list_0x28 Rephaser_Tachyon_inject_arcade_select_hash()
{
    unit_voice_hash_list_0x28 Rephaser_Tachyon_ArcadeSelectHash;
    Rephaser_Tachyon_ArcadeSelectHash.hash_1 = 0x88EF7508; // VO_80_P28_CHARA_SELECT_01
Rephaser_Tachyon_ArcadeSelectHash.hash_2 = 0x11E624B2; // VO_80_P28_CHARA_SELECT_02
Rephaser_Tachyon_ArcadeSelectHash.hash_3 = 0x66E11424; // VO_80_P28_CHARA_SELECT_03
Rephaser_Tachyon_ArcadeSelectHash.hash_4 = 0;
Rephaser_Tachyon_ArcadeSelectHash.hash_5 = 0;
Rephaser_Tachyon_ArcadeSelectHash.hash_6 = 0;
Rephaser_Tachyon_ArcadeSelectHash.hash_7 = 0;
Rephaser_Tachyon_ArcadeSelectHash.hash_8 = 0;
Rephaser_Tachyon_ArcadeSelectHash.hash_9 = 0;
Rephaser_Tachyon_ArcadeSelectHash.hash_10 = 0;

    return Rephaser_Tachyon_ArcadeSelectHash;
}

unit_voice_hash_list_0x14 Rephaser_Tachyon_inject_arcade_continue_no_hash()
{
    unit_voice_hash_list_0x14 Rephaser_Tachyon_ArcadeContinueNoHash;
    Rephaser_Tachyon_ArcadeContinueNoHash.hash_1 = 0x21AF326A; // VO_80_P28_GAME_OVER_01
Rephaser_Tachyon_ArcadeContinueNoHash.hash_2 = 0xB8A663D0; // VO_80_P28_GAME_OVER_02
Rephaser_Tachyon_ArcadeContinueNoHash.hash_3 = 0;
Rephaser_Tachyon_ArcadeContinueNoHash.hash_4 = 0;
Rephaser_Tachyon_ArcadeContinueNoHash.hash_5 = 0;

    return Rephaser_Tachyon_ArcadeContinueNoHash;
}

unit_voice_hash_list_0x18 Rephaser_Tachyon_inject_arcade_continue_prompt_hash()
{
    unit_voice_hash_list_0x18 Rephaser_Tachyon_ArcadeContinueHash;
    Rephaser_Tachyon_ArcadeContinueHash.hash_1 = 0xFB3E1274; // VO_80_P28_CONTINUE_DEC_01
Rephaser_Tachyon_ArcadeContinueHash.hash_2 = 0x623743CE; // VO_80_P28_CONTINUE_DEC_02
Rephaser_Tachyon_ArcadeContinueHash.hash_3 = 0;
Rephaser_Tachyon_ArcadeContinueHash.hash_4 = 0;
Rephaser_Tachyon_ArcadeContinueHash.hash_5 = 0;

    return Rephaser_Tachyon_ArcadeContinueHash;
}

unit_voice_hash_list_0x28 Rephaser_Tachyon_inject_arcade_continue_yes_hash()
{
    unit_voice_hash_list_0x28 Rephaser_Tachyon_ArcadeContinueYesHash;
    Rephaser_Tachyon_ArcadeContinueYesHash.hash_1 = 0x2668354E; // VO_80_P28_CONTINUE_01
Rephaser_Tachyon_ArcadeContinueYesHash.hash_2 = 0xBF6164F4; // VO_80_P28_CONTINUE_02
Rephaser_Tachyon_ArcadeContinueYesHash.hash_3 = 0xFB3E1274; // VO_80_P28_CONTINUE_DEC_01
Rephaser_Tachyon_ArcadeContinueYesHash.hash_4 = 0x623743CE; // VO_80_P28_CONTINUE_DEC_02
Rephaser_Tachyon_ArcadeContinueYesHash.hash_5 = 0;
Rephaser_Tachyon_ArcadeContinueYesHash.hash_6 = 0;
Rephaser_Tachyon_ArcadeContinueYesHash.hash_7 = 0;
Rephaser_Tachyon_ArcadeContinueYesHash.hash_8 = 0;
Rephaser_Tachyon_ArcadeContinueYesHash.hash_9 = 0;
Rephaser_Tachyon_ArcadeContinueYesHash.hash_10 = 0;

    return Rephaser_Tachyon_ArcadeContinueYesHash;
}

unit_voice_hash_list_0x8 Rephaser_Tachyon_inject_bandai_namco_games_serifu_hash()
{
    unit_voice_hash_list_0x8 Rephaser_Tachyon_BandaiNamcoGamesHash;
    Rephaser_Tachyon_BandaiNamcoGamesHash.hash_1 = 0x1514F339; // VO_80_P28_BNG_LOGO_01
Rephaser_Tachyon_BandaiNamcoGamesHash.hash_2 = 0;

    return Rephaser_Tachyon_BandaiNamcoGamesHash;
}

unit_hash_info Rephaser_Tachyon_inject_unit_hash_info()
{
    unit_hash_info Rephaser_Tachyon;
    Rephaser_Tachyon.UnitID = 0x00013999;
    Rephaser_Tachyon.unk0 = 0xDDC3CBD6;
    Rephaser_Tachyon.DataScript = 0x1D5638BC;
    Rephaser_Tachyon.ModelText = 0x6E3936EC;
    Rephaser_Tachyon.OMO = 0x989AE947;
    Rephaser_Tachyon.EIDX = 0xDB04D95D;
    Rephaser_Tachyon.Sound = 0x01E863B7;
    Rephaser_Tachyon.GlobalPilotVoice = 0x48B2EDA0;
    Rephaser_Tachyon.WeaponImage = 0xAF04158D;
    Rephaser_Tachyon.IngameImage = 0xAF04158D;
    Rephaser_Tachyon.KPKP = 0x095E8E2D;
    Rephaser_Tachyon.VoiceFileList = 0x30C517FC;
    Rephaser_Tachyon.Stream = 0x511A9B9E;

    return Rephaser_Tachyon;
}

unit_unk_enum_info Rephaser_Tachyon_inject_unk_enum()
{
    unit_unk_enum_info Rephaser_Tachyon_unk_Enum;
    Rephaser_Tachyon_unk_Enum.UnitID = 0x00013999;
    Rephaser_Tachyon_unk_Enum.unk_enum = 0x1;
    return Rephaser_Tachyon_unk_Enum;
}

unit_update_unit_id_list Rephaser_Tachyon_inject_gundam_update_unit_ID_list()
{
    unit_update_unit_id_list Rephaser_Tachyon_Update_Unit_ID_List;
    Rephaser_Tachyon_Update_Unit_ID_List.UnitID = 0x00013999;
    return Rephaser_Tachyon_Update_Unit_ID_List;
}

unit_update_unit_id_list Rephaser_Tachyon_inject_update_unit_ID_list_2()
{
    unit_update_unit_id_list Rephaser_Tachyon_Unit_ID_List_2;
    Rephaser_Tachyon_Unit_ID_List_2.UnitID = 0x00013999;
    return Rephaser_Tachyon_Unit_ID_List_2;
}

unit_string_info Rephaser_Tachyon_inject_string()
{
    add_long_pilot_name_string_ID("F80281", 13);
    add_short_pilot_name_string_ID("S80281", 13);
    add_long_unit_name_string_ID("P80281", 13);
    add_short_unit_name_string_ID("Q80281", 13);

    unit_string_info Rephaser_Tachyon_Gundam_String;
    Rephaser_Tachyon_Gundam_String.UnitID = 0x00013999;
    Rephaser_Tachyon_Gundam_String.unk_enum = 0xFFFFFFFF;
    Rephaser_Tachyon_Gundam_String.long_unit_name_str = (int)&Added_Gundam_string_Arr[13].long_pilot_name_str;
    Rephaser_Tachyon_Gundam_String.short_unit_name_str = (int)&Added_Gundam_string_Arr[13].short_pilot_name_str;
    Rephaser_Tachyon_Gundam_String.long_pilot_name_str = (int)&Added_Gundam_string_Arr[13].long_unit_name_str;
    Rephaser_Tachyon_Gundam_String.short_pilot_name_str = (int)&Added_Gundam_string_Arr[13].short_unit_name_str;

    return Rephaser_Tachyon_Gundam_String;
}
                        