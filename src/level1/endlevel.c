/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** endlevel.c
*/

#include "../../include/all.h"

void endlevel(param_t *params, lib_t *strG, anim_t *strA)
{
    sfRenderWindow_setFramerateLimit(params->window, 8);
    sfColor color = {0, 0, 0};
    explo(strG, params, strA);
    while (strG->back.sp_pos1 < 8000) {
        if (strG->back.sp_pos1 > 5000)
            strG->back.x1 = strG->back.x1 + 600;
        strG->back.sp_pos1 = strG->back.sp_pos1 + 1920;
        backhouse(strG, params, strA);
        print_level1(params, strG, strA);
        sfRenderWindow_display(params->window);
    }
    sfRenderWindow_setFramerateLimit(params->window, 30);
}