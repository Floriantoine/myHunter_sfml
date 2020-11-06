/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** level1.c
*/

#include "../../include/all.h"

void print_level1(param_t *params, lib_t *strG, anim_t *strA)
{
    backcloud(strG, params, strA);
    background(strG, params);
    score(params);
    mun(strG, params, params->reload_shoot);
    life(params);
    grass(strG, params, strA);
    pipe(strG, params);
    coin(strG, params, &strA->coin);
    plaine(strG, params);
    time_out(params);
    duck(strG, params, &strA->duck1);
    duck(strG, params, &strA->duck2);
    duck(strG, params, &strA->duck3);
    blood(strG, params, strA);
    cloud(strG, params);
    more_one(strA, params);
    print_double(params);
    hit(strG, params);
}

void reload_test(param_t *params, sound_t *sound, lib_t *strG, int time_mun)
{
    sfSoundStatus could;
    could = sfMusic_getStatus(sound->reload);

    if (params->reload_shoot == 0 && could == 0 && time_mun > 1.5) {
        sfMusic_play(sound->reload);
        sfClock_restart(strG->mun.clock);
    }
    if (params->reload_shoot == 0 && time_mun > 0.5 && time_mun < 1.5) {
        params->reload_shoot = 3;
    }
}

void sound_time(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound)
{
    int time_mun = 0;
    int out_time = 0;
    strG->mun.time_mun = sfClock_getElapsedTime(strG->mun.clock);
    time_mun = sfTime_asSeconds(strG->mun.time_mun);
    reload_test(params, sound, strG, time_mun);
    if (sfMusic_getStatus(sound->level1) != 2 && params->level == 1)
        sfMusic_play(sound->level1);
    params->time = sfClock_getElapsedTime(params->clock);
    out_time = sfTime_asSeconds(params->time);
    if (out_time > 60 || params->life.life == 0) {
        print_level1(params, strG, strA);
        sfRenderWindow_display(params->window);
        endtime(params, sound);
    }
}

void level1(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound)
{
    params->reload_shoot = 3;

    sfRenderWindow_setFramerateLimit(params->window, 30);
    params->clock = sfClock_create();
    strG->mun.clock = sfClock_create();
    params->duel.clock = sfClock_create();
    while (params->level == 1) {
        while (sfRenderWindow_pollEvent(params->window, &params->event)) {
            evt_level1(params, strG, strA, sound);
        }
        value(strA, params);
        sound_time(params, strG, strA, sound);
        print_level1(params, strG, strA);
        sfRenderWindow_display(params->window);
    }
}