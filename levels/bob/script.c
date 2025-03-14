#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 51, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 50, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_EXCLAMATION_BOX, 203, 1904, 1602, 0, 90, 0, (0x6 << 24) | (0x6 << 16) | (0x6 << 8) | (0x6), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 667, -184, -2864, 0, 90, 0, (0x6 << 24) | (0x6 << 16) | (0x6 << 8) | (0x6), bhvExclamationBox),
		OBJECT(MODEL_NONE, -44, -436, -1523, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -147, -368, -2620, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3953, 932, -91, 0, 80, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_STAR, 2063, 1597, 1209, 0, 80, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_BREAKABLE_BOX_SMALL, -360, 1254, 142, 0, 90, 0, 0x00000000, bhvBreakableBoxSmall),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 52, 1278, -90, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1600, 1649, 2847, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 3111, 1095, 639, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 2487, 192, -2929, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1089, -388, -1144, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -2070, -372, -2577, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -5101, 558, -386, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -5470, 480, -1884, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -4571, 1627, 1559, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -3086, 980, -444, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 213, 1645, 2796, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -2667, 2924, 2366, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1613, 1208, 690, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1220, 2622, 2845, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, 1018, 1412, 1746, 0, 80, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -1481, -359, -1895, 0, 80, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, -5919, 874, -610, 0, 80, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 1872, 202, -2285, 0, -77, 0, (10 << 24) | (10 << 16) | (10 << 8) | (10), bhvSpinAirborneWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, bob_area_2),
		OBJECT(MODEL_BLACK_BOBOMB, -625, 2276, 729, 0, 80, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -2376, 691, 3157, 0, 80, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -2404, 1025, -206, 0, 80, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -1928, 925, 1642, 0, 80, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_NONE, 1167, 667, 2761, 0, 80, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -696, 380, -226, 0, 90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1203, 298, -219, 0, 90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -134, 2373, 2346, 0, 180, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -162, 2490, 4011, 0, 180, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_EXCLAMATION_BOX, 285, 787, 176, 0, 55, 0, (0x6 << 24) | (0x6 << 16) | (0x6 << 8) | (0x6), bhvExclamationBox),
		OBJECT(MODEL_GOOMBA, -2183, 762, 2694, 0, 80, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1062, 867, 881, 0, 80, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 210, 2276, 1286, 0, 80, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2424, 1025, 381, 0, 80, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 263, 313, -196, 0, 80, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1612, 325, 311, 0, 80, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -641, 2276, 1814, 0, 90, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, 2215, 607, 1180, 0, 0, 0, (10 << 24) | (10 << 16) | (10 << 8) | (10), bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 2215, 607, 1180),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, -1290, 1468, 1221, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, -790, 1268, 1221, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, -290, 1068, 1221, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_CHECKERBOARD_PLATFORM, 210, 868, 1221, 0, 90, 0, 0x00000000, bhvCheckerboardPlatformSub),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 2270, 298, -78, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 2524, 298, 1444, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 780, 298, 209, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -1480, 541, -232, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 315, 2490, 3579, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 310, 2490, 4426, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -622, 2490, 4443, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -625, 2490, 3586, 0, 80, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_STAR, -146, 2697, 4030, 0, 55, 0, (3 << 24) | (3 << 16) | (3 << 8) | (3), bhvStar),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 2215, 607, 1180),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};