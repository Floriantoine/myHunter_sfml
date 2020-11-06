/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** double.c
*/

#include "../include/all.h"

void print_double(param_t *params)
{
    if (params->duel.on_off > 1) {
        sfVector2f pos = {800, 200};
        sfColor color = {90, 255, 50, 180};
        sfColor BLACK = {255, 255, 255, 255};
        char timer[] = "+1 LIFE";
        sfText* text;
        text = sfText_create();
        sfText_setOutlineColor(text, BLACK);
        sfText_setOutlineThickness(text, 4);
        sfText_setPosition(text, pos);
        sfText_setString(text, timer);
        sfText_setColor(text, color);
        sfText_setFont(text, params->font);
        sfText_setCharacterSize(text, 60);
        sfRenderWindow_drawText(params->window, text, NULL);

        if (params->duel.on_off > 0)
            params->duel.on_off--;
    }
}

void double_kill(param_t *params, duck_t *duck)
{
    params->duel.time = sfClock_getElapsedTime(params->duel.clock);

    int time_kill = sfTime_asSeconds(params->duel.time);
    if (time_kill < 1 && params->life.life < 10) {
        params->life.life++;
        params->duel.on_off = 14;
    }
    params->duel.time = sfClock_restart(params->duel.clock);
}