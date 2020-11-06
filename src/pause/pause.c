/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** pause.c
*/

#include "../../include/all.h"

void pause_main(param_t *params, lib_t *strG, sound_t *sound)
{
    params->pause.on_off = 1;

    sfVector2f scale = {3, 3};
    sfVector2f pos = {350, 90};

    sfRenderWindow_setMouseCursorVisible(params->window, sfTrue);
    params->pause.Tex = sfTexture_createFromFile("resources/pause.png", NULL);
    params->pause.Sp = sfSprite_create();
    while (params->pause.on_off == 1) {
        while (sfRenderWindow_pollEvent(params->window, &params->pause.event)) {
            evt(params, sound);
        }
        sfSprite_setTexture(params->pause.Sp, params->pause.Tex, sfTrue);
        sfSprite_setPosition(params->pause.Sp, pos);
        sfSprite_setScale(params->pause.Sp, scale);
        sfRenderWindow_drawSprite(params->window, params->pause.Sp, NULL);
        sfRenderWindow_display(params->window);
    }
    sfRenderWindow_setMouseCursorVisible(params->window, sfFalse);
}