/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** click.c
*/

#include "../../include/all.h"

void click_start(param_t *params, sound_t *sound)
{
    if (params->mouse.x >= 750 && params->mouse.x < 1194) {
        if (params->mouse.y > 507 && params->mouse.y < 640) {
            params->pause.on_off = 0;
            sfMusic_play(sound->level1);
        }
    }
}

void click_home(param_t *params)
{
    if (params->mouse.x >= 1194 && params->mouse.x < 1310) {
        if (params->mouse.y > 507 && params->mouse.y < 640) {
            params->pause.on_off = 0;
            params->level = 0;
        }
    }
}

void click_restart(param_t *params)
{
    if (params->mouse.x >= 500 && params->mouse.x < 750) {
        if (params->mouse.y > 507 && params->mouse.y < 640) {
            params->pause.on_off = 0;
            sfClock_restart(params->clock);
            params->score = 0;
            params->level = 99;
            params->intro = 1;
        }
    }
}

void click_mute(param_t *params, sound_t *sound)
{
    if (params->mouse.x >= 800 && params->mouse.x < 1090) {
        if (params->mouse.y > 607 && params->mouse.y < 740) {
            sfMusic_setVolume(sound->death, 0);
            sfMusic_setVolume(sound->deathtwo, 0);
            sfMusic_setVolume(sound->explode, 0);
            sfMusic_setVolume(sound->level, 0);
            sfMusic_setVolume(sound->level1, 0);
            sfMusic_setVolume(sound->mario, 0);
            sfMusic_setVolume(sound->reload, 0);
            sfMusic_setVolume(sound->shoot, 0);
            sfMusic_setVolume(sound->start, 0);
            params->pause.on_off = 0;
        }
    }
}

void click_main(param_t *params, sound_t *sound)
{
    click_start(params, sound);
    click_home(params);
    click_restart(params);
    click_mute(params, sound);
}