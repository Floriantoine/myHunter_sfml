/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** endtime.c
*/

#include "../../include/all.h"

void end_score(param_t *params)
{
    sfVector2f pos = {220, 400};
    sfColor color = {0, 0, 0, 180};
    sfColor outline = {255, 255, 255, 255};
    char timer[29] = "YOUR SCORE: 000 -> RESTART ?";
    timer[13] = (params->score / 10) + 48;
    timer[14] = (params->score % 10) + 48;
    sfText* text;
    text = sfText_create();
    sfText_setOutlineColor(text, outline);
    sfText_setOutlineThickness(text, 4);
    sfText_setPosition(text, pos);
    sfText_setString(text, timer);
    sfText_setColor(text, color);
    sfText_setFont(text, params->font);
    sfText_setCharacterSize(text, 90);
    sfRenderWindow_drawText(params->window, text, NULL);
    sfRenderWindow_display(params->window);
}

void evt_endtime(param_t *params, int *restart)
{
    if (params->event.type == sfEvtKeyPressed){
        if (params->event.key.code == sfKeyEscape) {
            params->level = 0;
            *restart = 1;
        } else if (params->event.key.code == sfKeyReturn) {
            params->pause.on_off = 0;
            sfClock_restart(params->clock);
            params->score = 0;
            params->level = 99;
            params->intro = 1;
            *restart = 1;
        }
    }
}

void endtime(param_t *params, sound_t *sound)
{
    int restart = 0;
    end_score(params);

    while (restart == 0) {
        while (sfRenderWindow_pollEvent(params->window, &params->event)) {
            evt_endtime(params, &restart);
        }
    }
    sfMusic_pause(sound->level1);
}