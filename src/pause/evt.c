/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** evt.c
*/

#include "../../include/all.h"

void key_press(param_t *params)
{
    if (params->pause.event.key.code == sfKeyEscape)
        params->pause.on_off = 0;
}

void mouve(param_t *params)
{
    params->mouse.x = params->pause.event.mouseMove.x;
    params->mouse.y = params->pause.event.mouseMove.y;
}

void evt(param_t *params, sound_t *sound)
{
    if (params->pause.event.type == sfEvtMouseMoved)
        mouve(params);
    if (params->pause.event.type == sfEvtKeyPressed)
        key_press(params);
    if (params->pause.event.type == sfEvtMouseButtonReleased)
        click_main(params, sound);
    if (params->pause.event.type == sfEvtClosed){
        params->level = -1;
        params->pause.on_off = 0;
    }
}