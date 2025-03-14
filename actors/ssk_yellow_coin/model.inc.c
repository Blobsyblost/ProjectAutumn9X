Gfx ssk_yellow_coin_coin1_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 ssk_yellow_coin_coin1_rgba16[] = {
	#include "actors/ssk_yellow_coin/coin1.rgba16.inc.c"
};

Gfx ssk_yellow_coin_coin2_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 ssk_yellow_coin_coin2_rgba16[] = {
	#include "actors/ssk_yellow_coin/coin2.rgba16.inc.c"
};

Gfx ssk_yellow_coin_coin3_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 ssk_yellow_coin_coin3_rgba16[] = {
	#include "actors/ssk_yellow_coin/coin3.rgba16.inc.c"
};

Gfx ssk_yellow_coin_coin4_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 ssk_yellow_coin_coin4_rgba16[] = {
	#include "actors/ssk_yellow_coin/coin4.rgba16.inc.c"
};

Vtx ssk_yellow_coin_000_displaylist_mesh_layer_4_vtx_0[4] = {
	{{ {-32, 0, 0}, 0, {-28, 1014}, {0, 0, 127, 255} }},
	{{ {32, 0, 0}, 0, {1004, 1014}, {0, 0, 127, 255} }},
	{{ {32, 64, 0}, 0, {1004, -19}, {0, 0, 127, 255} }},
	{{ {-32, 64, 0}, 0, {-28, -19}, {0, 0, 127, 255} }},
};

Gfx ssk_yellow_coin_000_displaylist_mesh_layer_4_tri_0[] = {
	gsSPVertex(ssk_yellow_coin_000_displaylist_mesh_layer_4_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_ssk_yellow_coin_YCoin1[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPLightColor(LIGHT_1, 0xFFFFFFFF),
	gsSPLightColor(LIGHT_2, 0x7F7F7FFF),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, ssk_yellow_coin_coin1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_ssk_yellow_coin_YCoin1[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_ssk_yellow_coin_YCoin2[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPLightColor(LIGHT_1, 0xFFFFFFFF),
	gsSPLightColor(LIGHT_2, 0x7F7F7FFF),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, ssk_yellow_coin_coin2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_ssk_yellow_coin_YCoin2[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_ssk_yellow_coin_YCoin3[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPLightColor(LIGHT_1, 0xFFFFFFFF),
	gsSPLightColor(LIGHT_2, 0x7F7F7FFF),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, ssk_yellow_coin_coin3_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_ssk_yellow_coin_YCoin3[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx mat_ssk_yellow_coin_YCoin4[] = {
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPLightColor(LIGHT_1, 0xFFFFFFFF),
	gsSPLightColor(LIGHT_2, 0x7F7F7FFF),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, ssk_yellow_coin_coin4_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_ssk_yellow_coin_YCoin4[] = {
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx ssk_yellow_coin_000_displaylist_mesh_layer_4[] = {
	gsSPDisplayList(mat_ssk_yellow_coin_YCoin1),
	gsSPDisplayList(ssk_yellow_coin_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_ssk_yellow_coin_YCoin1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin1_0[] = {
	gsSPDisplayList(mat_ssk_yellow_coin_YCoin1),
	gsSPDisplayList(ssk_yellow_coin_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_ssk_yellow_coin_YCoin1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin2_1[] = {
	gsSPDisplayList(mat_ssk_yellow_coin_YCoin2),
	gsSPDisplayList(ssk_yellow_coin_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_ssk_yellow_coin_YCoin2),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin3_2[] = {
	gsSPDisplayList(mat_ssk_yellow_coin_YCoin3),
	gsSPDisplayList(ssk_yellow_coin_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_ssk_yellow_coin_YCoin3),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin4_3[] = {
	gsSPDisplayList(mat_ssk_yellow_coin_YCoin4),
	gsSPDisplayList(ssk_yellow_coin_000_displaylist_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_ssk_yellow_coin_YCoin4),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

