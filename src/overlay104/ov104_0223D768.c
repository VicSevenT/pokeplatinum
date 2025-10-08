#include "overlay104/ov104_0223D768.h"

#include <nitro.h>
#include <string.h>

#include "narc.h"
#include "palette.h"
#include "sprite_resource.h"
#include "sprite_system.h"

static const SpriteTemplate Unk_ov104_022417D8[] = {
    {
        0,
        0,
        0,
        0,
        100,
        0,
        NNS_G2D_VRAM_TYPE_2DMAIN,
        { 33, 44, 35, 34, 4294967295, 4294967295 },
        1,
        0,
    },
    {
        0,
        0,
        0,
        0,
        100,
        0,
        NNS_G2D_VRAM_TYPE_2DMAIN,
        { 33, 44, 35, 34, 4294967295, 4294967295 },
        1,
        0,
    },
    {
        0,
        0,
        0,
        0,
        100,
        0,
        NNS_G2D_VRAM_TYPE_2DMAIN,
        { 24, 42, 26, 25, 4294967295, 4294967295 },
        1,
        0,
    },
    {
        0,
        0,
        0,
        0,
        100,
        0,
        NNS_G2D_VRAM_TYPE_2DMAIN,
        { 27, 43, 29, 28, 4294967295, 4294967295 },
        1,
        0,
    },
};

void ov104_0223D768(SpriteSystem *spriteSys, SpriteManager *spriteMan, NARC *narc, PaletteData *palette, u16 param4)
{
    const SpriteTemplate *spriteTemplate;

    GF_ASSERT(param4 < NELEMS(Unk_ov104_022417D8));
    spriteTemplate = &Unk_ov104_022417D8[param4];

    SpriteSystem_LoadCharResObjFromOpenNarc(spriteSys, spriteMan, narc, spriteTemplate->resources[SPRITE_RESOURCE_CHAR], TRUE, NNS_G2D_VRAM_TYPE_2DMAIN, spriteTemplate->resources[SPRITE_RESOURCE_CHAR]);
    SpriteSystem_LoadPaletteBufferFromOpenNarc(palette, PLTTBUF_MAIN_OBJ, spriteSys, spriteMan, narc, spriteTemplate->resources[SPRITE_RESOURCE_PLTT], FALSE, 1, NNS_G2D_VRAM_TYPE_2DMAIN, spriteTemplate->resources[SPRITE_RESOURCE_PLTT]);
    SpriteSystem_LoadCellResObjFromOpenNarc(spriteSys, spriteMan, narc, spriteTemplate->resources[SPRITE_RESOURCE_CELL], TRUE, spriteTemplate->resources[SPRITE_RESOURCE_CELL]);
    SpriteSystem_LoadAnimResObjFromOpenNarc(spriteSys, spriteMan, narc, spriteTemplate->resources[SPRITE_RESOURCE_ANIM], TRUE, spriteTemplate->resources[SPRITE_RESOURCE_ANIM]);
}

void ov104_0223D7EC(SpriteManager *spriteMan, u16 param1)
{
    const SpriteTemplate *spriteTemplate;

    GF_ASSERT(param1 < NELEMS(Unk_ov104_022417D8));
    spriteTemplate = &Unk_ov104_022417D8[param1];

    SpriteManager_UnloadCharObjById(spriteMan, spriteTemplate->resources[0]);
    SpriteManager_UnloadPlttObjById(spriteMan, spriteTemplate->resources[1]);
    SpriteManager_UnloadCellObjById(spriteMan, spriteTemplate->resources[2]);
    SpriteManager_UnloadAnimObjById(spriteMan, spriteTemplate->resources[3]);
}

ManagedSprite *ov104_0223D828(SpriteSystem *spriteSys, SpriteManager *spriteMan, u16 param2)
{
    ManagedSprite *v0;

    GF_ASSERT(param2 < NELEMS(Unk_ov104_022417D8));

    v0 = SpriteSystem_NewSprite(spriteSys, spriteMan, &Unk_ov104_022417D8[param2]);
    Sprite_TickFrame(v0->sprite);
    return v0;
}

void ov104_0223D858(ManagedSprite *param0)
{
    Sprite_DeleteAndFreeResources(param0);
}
