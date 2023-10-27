/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** key_menu.c
*/

#include "../../include/all.hpp"

void key_menu(param_t *params)
{
    if (params->event.key.code == sf::Keyboard::Escape) {
        params->level = -1;
        params->intro = 0;
    } else if (params->event.key.code == sf::Keyboard::Return)
        params->level = 1;
}
