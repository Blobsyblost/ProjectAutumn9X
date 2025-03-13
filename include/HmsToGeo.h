/* 
    Gigaleak header file made by
            JoshTheBosh
*/

// Light value for the .sou file type
#define LIGHT_X 40
#define LIGHT_Y 40
#define LIGHT_Z 40

// Saves compiler time by disabling the missing-braces check in the compiler
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"

// Layer headers for .hms file type
#define RM_BACK LAYER_FORCE
#define RM_SURF LAYER_OPAQUE
#define RM_DECAL LAYER_OPAQUE_DECAL
#define RM_INTER LAYER_OPAQUE_INTER
#define RM_SPRITE LAYER_ALPHA
#define RM_XSURF LAYER_TRANSPARENT
#define RM_XDECAL LAYER_TRANSPARENT_DECAL
#define RM_XINTER LAYER_TRANSPARENT_INTER
#define RM_SOFT_SPRITE RM_SPRITE
#define SCREEN_NEAR 100
#define SCREEN_FAR 12800
#define	CAM_FIELD	1
#define	CAM_INSIDE	2
#define	CAM_WATER	3
#define	CAM_DUNGEON	4
#define	CAM_TWOPLAY	5
#define	CAM_VIEWING	6
#define	CAM_BRIDGE	7
#define	CAM_RIVER	8
#define	CAM_BACK	9
#define	CAM_CANNON	10
#define	CAM_KUPPA	11
#define	CAM_RAIL	12
#define	CAM_FIX		13
#define	CAM_PARALLEL	14
#define	CAM_SLIDER	15
#define	CAM_DUNGEON_O	16
#define	CAM_SPIRAL	17

// Hms(GeoLayout) headers for .hms file type
#define	_msU32(dat) ((unsigned long)(dat*65536.0f))
#define hmsBegin() GEO_OPEN_NODE(),
#define hmsEnd() GEO_CLOSE_NODE(),
#define hmsSelect(code, proc) GEO_SWITCH_CASE(code, proc),
#define hmsGfx(x,y) GEO_DISPLAY_LIST(x,y),
#define hmsReturn() GEO_RETURN(),
#define hmsJoint(mode,gfx,px,py,pz) GEO_ANIMATED_PART(mode,px,py,pz,gfx),
#define hmsShadow(size,level,flag) GEO_SHADOW(flag,level,size),
#define hmsScale(f) GEO_SCALE(0, _msU32(f)),
#define hmsCall(r) GEO_BRANCH(1, r),
#define hmsExit() GEO_END(),
#define hmsLOD(near,far) GEO_RENDER_RANGE(near,far),
#define hmsCProg(code, proc) GEO_ASM(code, proc),
#define hmsRotate(ax,ay,az) GEO_ROTATION_NODE(0, ax,ay,az),
#define hmsGroup() GEO_NODE_START(),
#define hmsSucker(x, y, z, w, dl) GEO_HELD_OBJECT(x, y, z, w, dl),
#define hmsHeader(x) GEO_CULLING_RADIUS(x),
#define hmsBboard(px,py,pz) GEO_BILLBOARD_WITH_PARAMS(0,px,py,pz),
#define hmsTrans(a,b,c) GEO_TRANSLATE_NODE(0x00,a,b,c),
#define hmsCoord(a,b,c,d,e,f) GEO_TRANSLATE_ROTATE(0,a,b,c,d,e,f),
#define Hierarchy const GeoLayout
#define hmsCamera(type, x1, y1, z1, x2, y2, z2, function) GEO_CAMERA(type, x1, y1, z1, x2, y2, z2, function),
#define hmsOrtho(scale) GEO_NODE_ORTHO(scale),
#define hmsClear(background, function) GEO_BACKGROUND(background, function),
#define hmsPerspective(fov, near, far, func) GEO_CAMERA_FRUSTUM_WITH_FUNC(fov, near, far, func),
#define hmsCamera(type, x1, y1, z1, x2, y2, z2, function) GEO_CAMERA(type, x1, y1, z1, x2, y2, z2, function),
#define hmsObject() GEO_RENDER_OBJ(),
#define hmsLayer(layer) GEO_ZBUFFER(layer),
#define hmsScene(x, y, width, height, numEntries) GEO_NODE_SCREEN_AREA(numEntries, x, y, width, height),
#define WeatherProc geo_envfx_main
#define ZoomControl geo_camera_fov
#define GameCamera geo_camera_main

// RGBA16 header for the .sou file type
#define	RGBA16(r,g,b,a)	(((r)<<11) | ((g)<<6) | ((b)<<1) | (a))

// Mario headers for the .hms file type
#define MarioProc1 geo_move_mario_part_from_parent
#define CtrlMarioRenderMode CtrlMarioSkin
#define CtrlMarioHand geo_switch_mario_hand
#define CtrlMarioTaking geo_switch_mario_hand_grab_pos
#define CtrlMarioEye geo_switch_mario_eyes
#define CtrlMarioWaist geo_mario_tilt_torso
#define CtrlMarioHead geo_mario_head_rotation
#define CtrlMarioCap geo_switch_mario_cap_on_off
#define CtrlMarioWing geo_mario_rotate_wing_cap_wings
#define CtrlHandScale geo_mario_hand_foot_scaler
#define CtrlMarioSkin geo_switch_mario_cap_effect
#define CtrlMarioLOD geo_switch_mario_stand_run
#define CtrlMarioGeoMode geo_mirror_mario_backface_culling
#define CtrlMarioAlpha geo_mirror_mario_set_alpha

// Geo node headers for the .hms file type
#define ControlShapeAnime geo_switch_anim_state
#define CtrlPingEye geo_switch_tuxie_mother_eyes
#define KopaProc1 geo_update_body_rot_from_parent
#define AlphaControl geo_update_layer_transparency

// Level script converter for the .s file type
#define seqInitStage() INIT_LEVEL(),
#define seqLoadPres LOAD_MIO0
#define seqBeginConstruction() ALLOC_LEVEL_POOL(),
#define seqHmsMario MARIO
#define S_Mario MODEL_MARIO
#define ShapePlayer1 0x00000001
#define e_mario bhvMario
#define seqBeginScene AREA
#define seqMapInfo TERRAIN
#define seqEndScene() END_AREA(),
#define seqEndConstruction() FREE_LEVEL_POOL(),
#define seqEnterMario MARIO_POS
#define seqCProgram(func, arg) CALL(arg, func),
#define seqRunning(func, arg) CALL_LOOP(arg, func),
#define seqDestroyStage() CLEAR_LEVEL(),
#define seqFreeze(frames) SLEEP_BEFORE_EXIT(frames),
#define SetBasicEnemy script_func_global_1
#define SetEnemy1_a script_func_global_2
#define SetEnemy2_f script_func_global_7
#define seqPort(x, y, z, w) WARP_NODE(x, y, z, w, dl),
#define seqExit EXIT(),
#define SEGMENT_STAGE1 0x07
#define SEGMENT_ENEMY1 0x05
#define SEGMENT_ENEMYDATA1 0x0C
#define SEGMENT_ENEMY2 0x06
#define SEGMENT_ENEMYDATA2 0x0D
#define SEGMENT_ENEMY3 0x08
#define SEGMENT_ENEMYDATA3 0x0F
#define _GfxStage1SegmentRomStart _castle_segment_7SegmentRomStart
#define _GfxEnemy1_aSegmentRomStart _group1_mio0SegmentRomStart
#define _HmsEnemy1_aSegmentRomStart _group1_geoSegmentRomStart
#define _GfxEnemy2_fSegmentRomStart _group6_mio0SegmentRomStart
#define _HmsEnemy2_fSegmentRomStart _group6_geoSegmentRomStart
#define _GfxBasic_enemySegmentRomStart _common0_mio0SegmentRomStart
#define _HmsBasic_enemySegmentRomStart _common0_geoSegmentRomStart
#define _GfxStage1SegmentRomEnd _castle_segment_7SegmentRomEnd
#define _GfxEnemy1_aSegmentRomEnd _group1_mio0SegmentRomEnd
#define _HmsEnemy1_aSegmentRomEnd _group1_geoSegmentRomEnd
#define _GfxEnemy2_fSegmentRomEnd _group6_mio0SegmentRomEnd
#define _HmsEnemy2_fSegmentRomEnd _group6_geoSegmentRomEnd
#define _GfxBasic_enemySegmentRomEnd _common0_mio0SegmentRomEnd
#define _HmsBasic_enemySegmentRomEnd _common0_geoSegmentRomEnd

// required converter for the .sou file type to function you need to have the gex.h this is a file i cannot provide this since it is part of the gigaleak so for this to be legal i cannot provide it you must have it
// once aquired you can put it here 

// Names of GeoLayouts for Actors(incomplete)
#define RCP_HmsDosun thwomp_geo
#define RCP_HmsEnemywallman whomp_geo
#define RCP_HmsEnemycarryboy chuckya_geo
#define RCP_HmsEnemyTeresa boo_geo
#define RCP_HmsEnemyubboo unagi_geo
#define RCP_MarioHierarchy mario_geo
#define RCP_HmsItemStar star_geo
#define RCP_HmsEnemyping_base penguin_geo
#define RCP_HmsEnemyShark sushi_geo
#define RCP_HmsMainTree bubbly_tree_geo
#define RCP_HmsTree02 spiky_tree_geo
#define RCP_HmsTree03 snow_tree_geo
#define RCP_HmsTree04 spiky_tree1_geo
#define RCP_HmsTree05 palm_tree_geo
#define RCP_HmsEnemymonky_F_run ukiki_geo
#define RCP_rabbitHierarchy mips_geo
#define RCP_HmsDotstar transparent_star_geo
#define RCP_HmsEnemyfurafura spindrift_geo
#define RCP_HmsEnemywalker scuttlebug_geo

// Animation Data
#define AnimeRecord const struct Animation
#define AnimePtr struct Animation *const

#define MAP_ANIM_NORMAL 0x00

// Names for Animations
#define newrabbit_wait_prm mips_seg6_animvalue_06013A10
#define newrabbit_wait_tbl mips_seg6_animindex_06014ABC
#define newrabbit_run_prm mips_seg6_animvalue_060136B4
#define newrabbit_run_tbl mips_seg6_animindex_06013920
#define newrabbit_down_prm mips_seg6_animvalue_06013260
#define newrabbit_down_tbl mips_seg6_animindex_060135C4
#define newrabbbit_waitcome_prm mips_seg6_animvalue_06014BAC
#define newrabbbit_waitcome_tbl mips_seg6_animindex_06015544
#define newrabbbit_hold_prm mips_seg6_animvalue_06011FE0
#define newrabbbit_hold_tbl mips_seg6_animindex_06013170

// Collision Data for the .flk file type(incomplete)
//#define	BGCHECKCODE_PLANEEND          	SURFACE_NO_CAM_COLLISION
//#define	BGCHECKCODE_ALLEND            	66
//#define	BGCHECKCODE_POINT             	64
//#define	BGCHECKCODE_NORMAL            	 0
//#define dosun_info thwomp_seg5_collision_0500B7D0
//#define dosun_info2 thwomp_seg5_collision_0500B92C

// Mario Animation names
