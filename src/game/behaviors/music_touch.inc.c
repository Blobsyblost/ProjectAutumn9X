// music_touch.inc.c
void bhv_play_music_track_when_touched_loop(void) {
    if (o->oAction == 0 && o->oDistanceToMario < 200.0f) {
        if (o->oBehParams >= 1) { 



        } else {

            if (o->oBehParams2ndByte == 0) { 
                play_puzzle_jingle(); }
            else {
    
            }
        }
        
        o->oAction++;
    } else {
        if (o->oDistanceToMario > 200.0f) {
            o->oAction = 0;

        }

    }
}
