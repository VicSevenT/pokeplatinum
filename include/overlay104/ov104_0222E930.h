#ifndef POKEPLATINUM_OV104_0222E930_H
#define POKEPLATINUM_OV104_0222E930_H

#include "overlay104/funcptr_ov104_0222E930.h"
#include "overlay104/funcptr_ov104_0222E974.h"
#include "overlay104/struct_ov104_0222E930_decl.h"

#define FrontierScriptContext_ReadByte(ctx) (*(ctx->scriptPtr++))

void FrontierScriptContext_Init(FrontierScriptContext *param0, const FrontierScrCmdFunc *param1, u32 param2);
BOOL FrontierScriptContext_Start(FrontierScriptContext *param0, const u8 *param1);
void FrontierScriptContext_Pause(FrontierScriptContext *param0, FrontierShouldResumeScriptFunc param1);
void FrontierScriptContext_Stop(FrontierScriptContext *param0);
BOOL FrontierScriptContext_Run(FrontierScriptContext *param0);
void FrontierScriptContext_Call(FrontierScriptContext *param0, const u8 *param1);
void FrontierScriptContext_Return(FrontierScriptContext *param0);
u16 FrontierScriptContext_ReadHalfWord(FrontierScriptContext *param0);
u32 FrontierScriptContext_ReadWord(FrontierScriptContext *param0);

#endif // POKEPLATINUM_OV104_0222E930_H
