/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** endlevel.c
*/

#include "../../include/all.hpp"

void endlevel(param_t *params, lib_t *strG, anim_t *strA)
{
    sf::RenderWindow_setFramerateLimit(params->window, 8);
    sf::Color color = {0, 0, 0};
    explo(strG, params, strA);
    while (strG->back.sp_pos1 < 8000) {
        if (strG->back.sp_pos1 > 5000)
            strG->back.x1 = strG->back.x1 + 600;
        strG->back.sp_pos1 = strG->back.sp_pos1 + 1920;
        backhouse(strG, params, strA);
        print_level1(params, strG, strA);
        sf::RenderWindow_display(params->window);
    }
    sf::RenderWindow_setFramerateLimit(params->window, 30);
}
