/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** click_menu.c
*/

#include "../../include/all.hpp"

void click_strat(mouse_t *mouse, param_t *params)
{
    if (mouse->x >= 688 && mouse->x <= 1230 && mouse->y >= 565 &&
        mouse->y <= 708) {
        params->level = 1;
    }
}

void click_echap(mouse_t *mouse, param_t *params)
{
    if (mouse->x >= 688 && mouse->x <= 1230 && mouse->y >= 735 &&
        mouse->y <= 880) {
        params->level = -1;
        params->intro = 0;
    }
}

void click_menu(param_t *params)
{
    click_strat(&params->mouse, params);
    click_echap(&params->mouse, params);
}
