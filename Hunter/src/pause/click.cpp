/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** click.c
*/

#include "../../include/all.hpp"

void click_start(param_t *params, sound_t *sound)
{
    if (params->mouse.x >= 750 && params->mouse.x < 1194) {
        if (params->mouse.y > 507 && params->mouse.y < 640) {
            params->pause.on_off = 0;
            sound->level1.play();
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
            params->clock.restart();
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
            sound->death.setVolume(0);
            sound->deathtwo.setVolume(0);
            sound->explode.setVolume(0);
            sound->level.setVolume(0);
            sound->level1.setVolume(0);
            sound->mario.setVolume(0);
            sound->reload.setVolume(0);
            sound->shoot.setVolume(0);
            sound->start.setVolume(0);
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
