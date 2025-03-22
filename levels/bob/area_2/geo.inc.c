#include "src/game/envfx_snow.h"

const GeoLayout bob_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 20880, 0, 0, bob_dl_Brid_2_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 20880, 0, 0, bob_dl_Bridg_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 20880, 0, 0, bob_dl_Fenc_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 2444, 347, 393, bob_dl_Flowa_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 1486, 339, -174, bob_dl_Flowa_001_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 391, 415, 321, bob_dl_Flowa_002_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, -1700, 618, -366, bob_dl_Flowa_003_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, -1601, 778, 1036, bob_dl_Flowa_004_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 666, 772, 1073, bob_dl_Flowa_005_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, -1947, 1039, -352, bob_dl_Flowa_006_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, -2496, 1037, 874, bob_dl_Flowa_007_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 2203, 335, -369, bob_dl_Flowa_008_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 2614, 318, 1648, bob_dl_Flowa_009_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 1815, 375, 1565, bob_dl_Flowa_010_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 420, 2535, 3907, bob_dl_Flowa_011_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, -275, 2535, 4520, bob_dl_Flowa_012_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, -716, 2535, 3813, bob_dl_Flowa_013_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 52, 2503, 4249, bob_dl_Flowa_014_mesh_layer_4),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, -533, 2503, 3671, bob_dl_Flowa_015_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, 20880, 0, 0, bob_dl_Plane_005_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 20880, 0, 0, bob_dl_Xhomp_s_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, bob_dl_Xhomp_s_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 20880, 0, 0, bob_dl_Xhomp_s_001_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 20880, 0, 0, bob_dl_Xhomp_s_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 20880, 0, 0, bob_dl_Xhomp_s_003_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 81, -171, -488, bob_dl_Xhomp_s_004_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bob_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_BELOW_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, -20880, 0, 0, -20880, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bob_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
