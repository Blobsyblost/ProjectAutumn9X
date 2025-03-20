#include "src/game/print.h"

void bhv_beta_holdable_object_init(void) {
    o->oGravity = 2.5f;
    o->oFriction = 0.9f;
    o->oBuoyancy = 1.3f;
}

/**
 * Drop the object.
 */
static void beta_holdable_object_drop(void) {
    // Re-enable rendering
    cur_obj_enable_rendering();

    cur_obj_get_dropped();

    o->oHeldState = HELD_FREE;

    o->oForwardVel = 0.0f;
    o->oVelY = 0.0f;
}

/**
 * Throw the object.
 */
static void beta_holdable_object_throw(void) {
    cur_obj_enable_rendering();

    o->oHeldState = HELD_FREE;



    // Set initial velocity
    o->oForwardVel = 40.0f;
    o->oVelY = 20.0f;


}

/**
 * Update function for bhvBetaHoldableObject.
 * Apply standard physics to the object if not held;
 * otherwise, handle holding logic.
 */
void bhv_beta_holdable_object_loop(void) {
    switch (o->oHeldState) {
        case HELD_FREE:
            // Apply standard physics
            object_step();

            break;

        case HELD_HELD:
            // Disable rendering to hide the object while it's held
            cur_obj_disable_rendering();
            break;

        case HELD_THROWN:
            beta_holdable_object_throw();

            break;

        case HELD_DROPPED:
            beta_holdable_object_drop();
            break;
    }
if (o->oForwardVel >= 1) {
    o->oFaceAngleYaw = o->oFaceAngleYaw + (o->oForwardVel * 200);
    o->oFaceAngleRoll = o->oFaceAngleRoll + (o->oForwardVel * 200);
    o->oFaceAnglePitch = o->oFaceAnglePitch + (o->oForwardVel * 200);


    }
}
