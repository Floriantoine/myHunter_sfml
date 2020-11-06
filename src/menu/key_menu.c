/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** key_menu.c
*/

#include "../../include/all.h"

void key_menu(param_t *params)
{
    if (params->event.key.code == sfKeyEscape) {
        params->level = -1;
        params->intro = 0;
    } else if (params->event.key.code == sfKeyReturn)
        params->level = 1;
}