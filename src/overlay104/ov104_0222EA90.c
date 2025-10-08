#include "overlay104/ov104_0222EA90.h"

#include <nitro.h>
#include <string.h>

#include "overlay104/ov104_0223C164.h"
#include "overlay104/ov104_0223D9E4.h"
#include "overlay104/struct_ov104_0223C4CC.h"

#include "bg_window.h"
#include "gx_layers.h"
#include "heap.h"

typedef void (*UnkFuncPtr_ov104_0223F394)(UnkStruct_ov104_0223C4CC *, void **);

typedef struct {
    int bgMode;
    UnkFuncPtr_ov104_0223F394 unk_04;
    UnkFuncPtr_ov104_0223F394 unk_08;
    u16 unk_0C;
    u16 unk_0E;
    u16 unk_10;
    u16 unk_12;
    u16 narcID;
    u16 unk_16;
    u16 unk_18;
    u16 unk_1A;
    u16 tilemap2;
    u16 tiles2;
    u16 palette2;
    u8 unk_22;
    u8 unk_23;
    u8 unk_24[2];
} UnkStruct_ov104_0223F394;

static void ov104_0222EBBC(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EBCC(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EBD8(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC0C(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC18(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC1C(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC20(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC58(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC5C(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC70(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC74(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC8C(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222EC90(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222ECA0(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222ECAC(UnkStruct_ov104_0223C4CC *param0, void **param1);
static void ov104_0222ECE4(UnkStruct_ov104_0223C4CC *param0, void **param1);

static const UnkStruct_ov104_0223F394 Unk_ov104_0223F394[] = {
    {
        .bgMode = GX_BGMODE_0,
        ov104_0222EBBC,
        ov104_0222EBCC,
        0x4,
        0xCC,
        0x444,
        0x3,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x1,
        0x0,
        129,
        .tilemap2 = 0x3,
        .tiles2 = 0x0,
        .palette2 = 0x81,
        0x0,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_0,
        NULL,
        NULL,
        0x0,
        0xCC,
        0x444,
        0x3,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x2,
        0x0,
        0x81,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x0,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_0,
        NULL,
        NULL,
        0x5,
        0xCE,
        0x444,
        0x3,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x1,
        0x0,
        0x81,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x0,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        ov104_0222EC5C,
        ov104_0222EC70,
        0x1,
        365,
        0x4AB,
        0x4,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x2,
        0x0,
        0x81,
        .tilemap2 = 0x3,
        .tiles2 = 0x0,
        .palette2 = 0x81,
        0x1,
        0x0,
    },
    {
        .bgMode = GX_BGMODE_5,
        ov104_0222EC74,
        ov104_0222EC8C,
        0x1,
        365,
        0x4AB,
        0x1,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x1,
        0x0,
        0x81,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        NULL,
        NULL,
        0x6,
        0x130,
        0x444,
        0x4,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x32,
        0x2D,
        0x8D,
        .tilemap2 = 0x33,
        .tiles2 = 0x2D,
        .palette2 = 0x8D,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        NULL,
        NULL,
        0x7,
        0x130,
        0x444,
        0x4,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x2F,
        0x2D,
        0x8D,
        .tilemap2 = 0x30,
        .tiles2 = 0x2D,
        .palette2 = 0x8D,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        NULL,
        NULL,
        0x8,
        0x131,
        0x444,
        0x1,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x31,
        0x2D,
        0x8D,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        NULL,
        NULL,
        0x9,
        0x132,
        0x444,
        0x1,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x2E,
        0x2D,
        0x8D,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        NULL,
        NULL,
        0x3,
        0x225,
        0x4A8,
        0x1,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x11,
        0x10,
        0x84,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        ov104_0222EBD8,
        ov104_0222EC0C,
        0x3,
        0x225,
        0x4A8,
        0x4,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        20,
        14,
        131,
        .tilemap2 = 22,
        .tiles2 = 19,
        .palette2 = 133,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        NULL,
        NULL,
        0x0,
        0xC8,
        0x4A9,
        0x4,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        26,
        25,
        135,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        ov104_0222ECAC,
        ov104_0222ECE4,
        0x0,
        0xC8,
        0x4A9,
        0x1,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        30,
        29,
        140,
        .tilemap2 = 33,
        .tiles2 = 29,
        .palette2 = 140,
        1,
        1,
    },
    {
        .bgMode = GX_BGMODE_5,
        NULL,
        NULL,
        0x0,
        0xC8,
        0x4A9,
        0x1,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x1C,
        0x1B,
        0x88,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        ov104_0222EC90,
        ov104_0222ECA0,
        0xA,
        0xF,
        0x444,
        0x1,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x80,
        0x7F,
        0xAC,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        ov104_0222EC18,
        ov104_0222EC1C,
        0x2,
        0x219,
        0x4A7,
        0x1,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        0x37,
        0x38,
        0x8F,
        .tilemap2 = 0xffff,
        .tiles2 = 0xffff,
        .palette2 = 0xffff,
        0x1,
        0x1,
    },
    {
        .bgMode = GX_BGMODE_5,
        ov104_0222EC20,
        ov104_0222EC58,
        0x2,
        0x219,
        0x4A7,
        0x4,
        .narcID = NARC_INDEX_RESOURCE__ENG__FRONTIER_GRAPHIC__FRONTIER_BG,
        52,
        54,
        142,
        .tilemap2 = 57,
        .tiles2 = 89,
        .palette2 = 169,
        1,
        1,
    },
};

int ov104_0222EA90(int param0, int param1)
{
    switch (param1) {
    case 0:
        return Unk_ov104_0223F394[param0].bgMode;
    case 1:
        return Unk_ov104_0223F394[param0].unk_0C;
    case 2:
        return Unk_ov104_0223F394[param0].unk_0E;
    case 3:
        return Unk_ov104_0223F394[param0].unk_10;
    case 4:
        return Unk_ov104_0223F394[param0].unk_12;
    case 5:
        return Unk_ov104_0223F394[param0].narcID;
    case 6:
        return Unk_ov104_0223F394[param0].unk_16;
    case 7:
        return Unk_ov104_0223F394[param0].unk_18;
    case 8:
        return Unk_ov104_0223F394[param0].unk_1A;
    case 9:
        return Unk_ov104_0223F394[param0].tilemap2;
    case 10:
        return Unk_ov104_0223F394[param0].tiles2;
    case 11:
        return Unk_ov104_0223F394[param0].palette2;
    case 12:
        return Unk_ov104_0223F394[param0].unk_22;
    case 13:
        return Unk_ov104_0223F394[param0].unk_23;
    }

    GF_ASSERT(0);
    return 0;
}

void ov104_0222EB8C(UnkStruct_ov104_0223C4CC *param0, void **param1, int param2)
{
    if (Unk_ov104_0223F394[param2].unk_04 != NULL) {
        Unk_ov104_0223F394[param2].unk_04(param0, param1);
    }
}

void ov104_0222EBA4(UnkStruct_ov104_0223C4CC *param0, void **param1, int param2)
{
    if (Unk_ov104_0223F394[param2].unk_08 != NULL) {
        Unk_ov104_0223F394[param2].unk_08(param0, param1);
    }
}

static void ov104_0222EBBC(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    *param1 = Heap_Alloc(HEAP_ID_94, 32);
}

static void ov104_0222EBCC(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    Heap_Free(*param1);
}

static void ov104_0222EBD8(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    *param1 = ov104_0223D9E4(param0->unk_00, param0->palette);

    Bg_SetPriority(BG_LAYER_MAIN_0, 1);
    Bg_SetPriority(BG_LAYER_MAIN_2, 2);
    Bg_SetPriority(BG_LAYER_MAIN_3, 3);
    GXLayers_EngineAToggleLayers(GX_PLANEMASK_BG2, 0);

    return;
}

static void ov104_0222EC0C(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    ov104_0223DA28(*param1);
    return;
}

static void ov104_0222EC18(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    return;
}

static void ov104_0222EC1C(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    return;
}

static void ov104_0222EC20(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    Bg_SetPriority(BG_LAYER_MAIN_0, 1);
    Bg_SetPriority(BG_LAYER_MAIN_2, 2);
    Bg_SetPriority(BG_LAYER_MAIN_3, 3);

    G2_SetBlendAlpha(GX_BLEND_PLANEMASK_BG0, GX_BLEND_PLANEMASK_BG2 | GX_BLEND_PLANEMASK_BG3 | GX_BLEND_PLANEMASK_OBJ | GX_BLEND_PLANEMASK_BD, 20, 20);
    GXLayers_EngineAToggleLayers(GX_PLANEMASK_BG2, 0);

    return;
}

static void ov104_0222EC58(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    return;
}

static void ov104_0222EC5C(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    Bg_SetPriority(BG_LAYER_MAIN_2, 3);
    Bg_SetPriority(BG_LAYER_MAIN_3, 2);
    return;
}

static void ov104_0222EC70(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    return;
}

static void ov104_0222EC74(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    G2_SetBlendAlpha(GX_BLEND_PLANEMASK_BG0, GX_BLEND_PLANEMASK_BG2 | GX_BLEND_PLANEMASK_BG3 | GX_BLEND_PLANEMASK_OBJ | GX_BLEND_PLANEMASK_BD, 20, 20);
    return;
}

static void ov104_0222EC8C(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    return;
}

static void ov104_0222EC90(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    *param1 = ov104_0223C164(param0->unk_00);
    return;
}

static void ov104_0222ECA0(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    ov104_0223C23C(*param1);
    return;
}

static void ov104_0222ECAC(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    Bg_SetPriority(BG_LAYER_MAIN_1, 0);
    Bg_SetPriority(BG_LAYER_MAIN_0, 2);
    Bg_SetPriority(BG_LAYER_MAIN_2, 2);
    Bg_SetPriority(BG_LAYER_MAIN_3, 3);

    G2_SetBlendAlpha(GX_BLEND_PLANEMASK_BG0, GX_BLEND_PLANEMASK_BG2 | GX_BLEND_PLANEMASK_BG3 | GX_BLEND_PLANEMASK_OBJ | GX_BLEND_PLANEMASK_BD, 20, 20);
    return;
}

static void ov104_0222ECE4(UnkStruct_ov104_0223C4CC *param0, void **param1)
{
    return;
}
