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
#include "levels/ddd/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ddd_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB, ddd_geo_0004A0), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE, ddd_geo_000450), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ddd_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, -180, -163, 140, 11500),
		OBJECT(MODEL_NONE, -163, 140, 11500, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_WF_GIANT_POLE, -150, -1407, -3525, 0, 0, 0, (161 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_BLACK_BOBOMB, -93, -3075, -5952, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BOWSER_BOMB, 138, -5309, 860, 0, 0, 0, 0x00000000, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -150, -5309, 2987, 0, 0, 0, 0x00000000, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -150, -5021, 2187, 0, 0, 0, 0x00000000, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -150, -3938, -591, 0, 0, 0, 0x00000000, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -642, -5309, 1687, 0, 0, 0, 0x00000000, bhvBowserBomb),
		OBJECT(MODEL_BLACK_BOBOMB, -755, -121, -1813, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 745, -121, -2213, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 1307, -3075, -3552, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BREAKABLE_BOX, -1840, -121, -3213, 0, 90, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BLACK_BOBOMB, -163, -121, 1287, 0, 0, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_EXCLAMATION_BOX, -150, 123, -4558, 0, 0, 0, (6 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 619, 123, -813, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_BREAKABLE_BOX, 989, -3075, -8082, 0, 90, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 1189, -3075, -8082, 0, 90, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -1385, -121, -2154, 0, 90, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, -1385, -121, -3930, 0, 90, 0, 0x00000000, bhvBreakableBox),
		OBJECT(MODEL_NONE, -102, -3075, -2692, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, 1625, -1807, -6983, 0, 0, 0, (2 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, 925, -1407, -4429, 0, 0, 0, (2 << 16), bhvOneCoin),
		OBJECT(MODEL_NONE, -150, -121, -1013, 0, 0, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 925, -3075, -4429, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1875, -121, 2344, 0, -45, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1605, -121, 2344, 0, 45, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -863, -2475, -7820, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -150, -5409, 4273, 0, 0, 0, (19 << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -172, -100, 10248, 0, 0, 0, (2 << 16), bhvOneCoin),
		OBJECT(MODEL_YELLOW_COIN, -163, 0, 10548, 0, 0, 0, (2 << 16), bhvOneCoin),
		OBJECT(MODEL_NONE, 1449, -7069, 5496, 0, 0, 0, (17 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -2151, -7069, 7896, 0, 0, 0, (17 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2402, -3075, -5305, 0, 0, 0, (17 << 16), bhvCoinFormation),
		OBJECT(MODEL_BUB, -415, -2862, 6058, 0, 0, 0, (0 << 16), bhvBub),
		OBJECT(MODEL_BUB, 796, -4062, 7384, 0, 0, 0, (0 << 16), bhvBub),
		OBJECT(MODEL_NONE, -198, -3075, -3592, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_GOOMBA, -1102, -3075, -4892, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1270, -121, -3313, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -602, 0, 10804, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 545, -121, -1213, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1025, -1607, -5829, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1180, -121, -4271, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -2661, -2875, -5305, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -863, -2475, -7820, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_STAR, 2402, -2275, -5305, 0, 90, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, -150, -1207, -3282, 0, 90, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, 989, -3045, -8082, 0, 90, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, -944, 123, -813, 0, 90, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_STAR, -1840, -101, -3213, 0, 90, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_SUSHI, -308, -4462, 6743, 0, 0, 0, (0 << 16), bhvSushiShark),
		OBJECT(MODEL_STAR, -163, 438, 2400, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -2661, -2575, -5305, 0, 90, 0, 0x00000000, bhvHiddenStar),
		TERRAIN(ddd_area_1_collision),
		MACRO_OBJECTS(ddd_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_EVENT_HIGH_SCORE),
		TERRAIN_TYPE(TERRAIN_WATER),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -163, 140, 11500),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};