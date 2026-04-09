#ifndef POKEPLATINUM_OV6_02246444_H
#define POKEPLATINUM_OV6_02246444_H

#include "struct_defs/struct_0202440C.h"

#include "field/field_system_decl.h"

void TVEpisode_IncrementTimesPlayed(TVEpisode *param0);
int TVEpisode_GetGender(const TVEpisode *param0);
int TVEpisode_GetLanguage(const TVEpisode *param0);
const u16 *TVEpisode_GetTrainerName(const TVEpisode *param0);
void *TVEpisode_GetSegment(TVEpisode *param0);
int TVEpisode_GetSegmentID(const TVEpisode *param0);
TVEpisode *TVEpisode_New(FieldSystem *fieldSystem, int param1, int param2);
void TVEpisode_Free(TVEpisode *param0);

#endif // POKEPLATINUM_OV6_02246444_H
