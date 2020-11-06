/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** slowmo.c
*/

#include "../include/all.h"

void slowmo(param_t *params, lib_t *strG, anim_t *strA)
{
    sfRenderWindow_setFramerateLimit(params->window, 3);
}
