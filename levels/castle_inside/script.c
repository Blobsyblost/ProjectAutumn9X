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
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(15, LEVEL_CASTLE_GROUNDS, 1, 64, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_BOB, 0x01, 10, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0x00, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0x01, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 200, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 201, WARP_NO_CHECKPOINT),
		WARP_NODE(205, LEVEL_CASTLE_GROUNDS, 0x01, 2, WARP_NO_CHECKPOINT),
		WARP_NODE(69, LEVEL_BOB, 2, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(9, LEVEL_DDD, 1, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -1711, 330, -4670, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1711, 146, 0, 0, 90, 0, (201 << 16), bhvAirborneStarCollectWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 1627, -115, -20, 0, -90, 0, (15 << 24) | (15 << 16) | (15 << 8) | (15), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -8541, 475, 1996, 0, 90, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -5302, 13, 1996, 0, 90, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -2099, -275, 3400, 0, -180, 0, (205 << 24) | (205 << 16) | (205 << 8) | (205), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -8541, 475, 1843, 0, -90, 0, 0x00000000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -5302, 13, 1843, 0, -90, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_STAR, -4381, 23, -4589, 0, 0, 0, (0 << 24) | (0 << 16) | (0 << 8) | (0), bhvStar),
		OBJECT(MODEL_NONE, -1711, -598, -1786, 0, 0, 0, (10 << 24) | (69 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -3074, -95, 0, 0, -90, 0, (50 << 24) | (50 << 16), bhvPaintingStarCollectWarp),
		OBJECT(MODEL_NONE, -1709, 914, -5914, 0, -180, 0, (54 << 24) | (54 << 16), bhvPaintingStarCollectWarp),
		OBJECT(MODEL_NONE, -1711, -241, -1786, 0, 0, 0, (10 << 24) | (71 << 16), bhvLaunchDeathWarp),
		OBJECT(MODEL_NONE, -3074, -95, 0, 0, -90, 0, (51 << 24) | (51 << 16), bhvPaintingDeathWarp),
		OBJECT(MODEL_NONE, -1709, 914, -5914, 0, -180, 0, (53 << 24) | (53 << 16), bhvPaintingDeathWarp),
		OBJECT(MODEL_NONE, -1711, -241, -1786, 0, 0, 0, (10 << 24) | (70 << 16), bhvLaunchStarCollectWarp),
		OBJECT(MODEL_NONE, -1711, 301, 0, 0, 90, 0, (200 << 16), bhvAirborneStarCollectWarp),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_INSIDE_CASTLE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};