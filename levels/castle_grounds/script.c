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
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(64, LEVEL_CASTLE, 1, 15, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_CASTLE, 1, 205, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_CASTLE_COURTYARD, 0x01, 11, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 1369, 38, -1329, 0, 0, 0, (2 << 24) | (2 << 16) | (2 << 8) | (2), bhvBirdsSoundLoop),
		OBJECT(MODEL_BLACK_BOBOMB, 2356, 950, 2284, 0, 0, 0, (1 << 24) | (1 << 16) | (1 << 8) | (1), bhvBobomb),
		OBJECT(MODEL_BREAKABLE_BOX, 1920, 165, 1384, 0, 0, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 2283, 165, 1213, 0, 67, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1073, -16, -1326, 0, 0, 0, (10 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1369, 38, -1329, 0, 0, 0, (10 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1836, 498, 4560, 0, 0, 0, (10 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 140, 547, 6973, 0, 0, 0, (10 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1328, 121, 5246, 0, 0, 0, (10 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 436, 217, 5706, 0, 0, 0, (10 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1653, 102, 5727, 0, 0, 0, (10 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, 1323, 6, 1331, 0, 0, 0, (10 << 16), bhvTree),
		OBJECT(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, -1051, 14, 1271, 0, 0, 0, (10 << 16), bhvTree),
		OBJECT(MODEL_NONE, -18, 102, 2829, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -1321, -41, -15, 0, -90, 0, (64 << 24) | (64 << 16) | (64 << 8) | (64), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -1485, 702, 4454, 0, -180, 0, (2 << 24) | (2 << 16) | (2 << 8) | (2), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 1637, 1356, 6119, 0, -125, 0, (3 << 24) | (3 << 16) | (3 << 8) | (3), bhvDoorWarp),
		MARIO_POS(0x01, 0, -985, 492, 6108),
		OBJECT(MODEL_STAR, 2283, 206, 1213, 0, 67, 0, (5 << 24) | (5 << 16) | (5 << 8) | (5), bhvStar),
		OBJECT(MODEL_NONE, -985, 492, 6108, 0, 0, 0, (10 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -2060, 526, 6817, 0, 0, 0, 0x00000000, bhvWaterfallSoundLoop),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -985, 492, 6108),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};