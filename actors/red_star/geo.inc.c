#include "src/game/envfx_snow.h"

const GeoLayout red_star_000_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, red_star_000_displaylist_mesh_layer_4_mat_override_Star2_001_0),
		GEO_ROTATION_NODE(LAYER_TRANSPARENT, 0, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout red_star_000_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, red_star_000_displaylist_mesh_layer_4_mat_override_Star3_001_1),
		GEO_ROTATION_NODE(LAYER_TRANSPARENT, 0, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout red_star_000_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, red_star_000_displaylist_mesh_layer_4_mat_override_Star4_001_2),
		GEO_ROTATION_NODE(LAYER_TRANSPARENT, 0, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout red_star_000_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, red_star_000_displaylist_mesh_layer_4_mat_override_Star5_002_3),
		GEO_ROTATION_NODE(LAYER_TRANSPARENT, 0, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout red_star_000_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, red_star_000_displaylist_mesh_layer_4_mat_override_Star6_001_4),
		GEO_ROTATION_NODE(LAYER_TRANSPARENT, 0, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout red_star_000_switch_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, red_star_000_displaylist_mesh_layer_4_mat_override_Star7_001_5),
		GEO_ROTATION_NODE(LAYER_TRANSPARENT, 0, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout red_star_000_switch_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, red_star_000_displaylist_mesh_layer_4_mat_override_Star8_001_6),
		GEO_ROTATION_NODE(LAYER_TRANSPARENT, 0, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout red_star_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 128, 200),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(8, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, red_star_000_displaylist_mesh_layer_4),
					GEO_ROTATION_NODE(LAYER_TRANSPARENT, 0, 0, 0),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, red_star_000_switch_opt1),
				GEO_BRANCH(1, red_star_000_switch_opt2),
				GEO_BRANCH(1, red_star_000_switch_opt3),
				GEO_BRANCH(1, red_star_000_switch_opt4),
				GEO_BRANCH(1, red_star_000_switch_opt5),
				GEO_BRANCH(1, red_star_000_switch_opt6),
				GEO_BRANCH(1, red_star_000_switch_opt7),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
