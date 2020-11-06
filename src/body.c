/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** sfRenderWindow_pollEvent.c
*/

#include "../include/all.h"

int body(param_t *params, lib_t *strG, sound_t *sound, anim_t *strA)
{
    sfRenderWindow_setFramerateLimit(params->window, 30);
    params->clock = sfClock_create();
    while (sfRenderWindow_isOpen(params->window) && params->level >= 0)
    {
        if (params->level == 0)
            menu(params, strG, strA, sound);
        //if (params->intro != 0)
        //    open_level1(params, strG, strA, sound);
        if (params->level == 1)
            level1(params, strG, strA, sound);
        if (params->level == 99)
            params->level = 1;
        params->life.life = 10;
    }
    sfRenderWindow_close(params->window);
    destroy_sound(sound);
    sfRenderWindow_destroy(params->window);
    return (0);
}
