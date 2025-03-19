#include "src/audio/external.h"
#include "src/game/sound_init.h"
// music_touch.inc.c
void bhv_play_music_track_when_touched_loop(void) {

    if (o->oAction == 0 && o->oDistanceToMario < 200.0f) {

            if (o->oBehParams2ndByte == 0) { 
                play_puzzle_jingle(); }
            if (o->oBehParams2ndByte == 1){
                    set_background_music(0, 4, 0);
                }
            if (o->oBehParams2ndByte == 2){
                    seq_player_lower_volume(0, 100, 0);
                }
                if (o->oBehParams2ndByte == 3){
                    seq_player_unlower_volume(0, 200);
                }
                
        
        o->oAction++;
    } else {
        if (o->oDistanceToMario > 200.0f) {
            o->oAction = 0;

        }

    }
}
