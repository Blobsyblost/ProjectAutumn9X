#include "src/game/envfx_snow.h"

const GeoLayout ddd_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 0, 10500, ddd_dl_Circle_001_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ddd_dl_Cube_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ddd_dl_Cube_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -150, -1407, -3525, ddd_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -163, -100, 10248, ddd_dl_Plane_001_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -5653, -797, 687, ddd_dl_Water_Box_Mesh_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -5653, -3151, 687, ddd_dl_Water_Box_Mesh_001_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ddd_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x037F),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_FREE_ROAM, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ddd_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
