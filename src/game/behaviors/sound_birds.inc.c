// sound_birds.inc.c

void bhv_birds_sound_loop(void) {
    if (gCamera->mode == CAMERA_MODE_BEHIND_MARIO) {
        return;
    }

    // lmao placeholder
    play_sound(SOUND_AIR_HOWLING_WIND, gGlobalSoundSource);
}

