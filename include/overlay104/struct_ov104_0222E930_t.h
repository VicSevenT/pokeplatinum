#ifndef POKEPLATINUM_STRUCT_OV104_0222E930_T_H
#define POKEPLATINUM_STRUCT_OV104_0222E930_T_H

#include "overlay104/funcptr_ov104_0222E930.h"
#include "overlay104/funcptr_ov104_0222E974.h"
#include "overlay104/struct_ov104_022320B4_decl.h"

#include "message.h"

struct UnkStruct_ov104_0222E930_t {
    UnkStruct_ov104_022320B4 *unk_00;
    u32 unk_04;
    u16 unk_08[8];
    u8 stackPointer;
    u8 state;
    const u8 *scriptPtr;
    const u8 *stack[20];
    const FrontierScrCmdFunc *cmdTable;
    u32 cmdTableSize;
    u16 data[4];
    MessageLoader *unk_80;
    u8 *scripts;
    FrontierShouldResumeScriptFunc shouldResume;
    u8 unk_8C;
};

#endif // POKEPLATINUM_STRUCT_OV104_0222E930_T_H
