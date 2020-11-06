/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** timer.c
*/

#include "../include/all.h"

void time_out(param_t *params)
{
    params->time = sfClock_getElapsedTime(params->clock);
    int print = sfTime_asSeconds(params->time);
    sfVector2f pos = {680, 10};
    sfColor color = {200, 0, 0, 180};
    sfColor BLACK = {0, 0, 0, 255};
    char timer[] = "TIMER: 00";
    timer[8] = (60 - print) / 10 + 48;
    timer[9] = (60 - print) % 10 + 48;
    sfText* text;
    text = sfText_create();
    sfText_setOutlineColor(text, BLACK);
    sfText_setOutlineThickness(text, 4);
    sfText_setPosition(text, pos);
    sfText_setString(text, timer);
    sfText_setColor(text, color);
    sfText_setFont(text, params->font);
    sfText_setCharacterSize(text, 90);
    sfRenderWindow_drawText(params->window, text, NULL);
}