#include "src/game/envfx_snow.h"

const GeoLayout ssk_yellow_coin_000_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin1_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ssk_yellow_coin_000_switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin2_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ssk_yellow_coin_000_switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin2_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ssk_yellow_coin_000_switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin3_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ssk_yellow_coin_000_switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin3_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ssk_yellow_coin_000_switch_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin4_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ssk_yellow_coin_000_switch_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ssk_yellow_coin_000_displaylist_mesh_layer_4_mat_override_YCoin4_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ssk_yellow_coin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 50),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(8, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, ssk_yellow_coin_000_displaylist_mesh_layer_4),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt1),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt2),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt3),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt4),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt5),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt6),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt7),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

const GeoLayout ssk_yellow_coin_no_shadow_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_OPEN_NODE(),
			GEO_SWITCH_CASE(8, geo_switch_anim_state),
			GEO_OPEN_NODE(),
				GEO_NODE_START(),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_ALPHA, ssk_yellow_coin_000_displaylist_mesh_layer_4),
				GEO_CLOSE_NODE(),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt1),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt2),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt3),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt4),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt5),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt6),
				GEO_BRANCH(1, ssk_yellow_coin_000_switch_opt7),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};

