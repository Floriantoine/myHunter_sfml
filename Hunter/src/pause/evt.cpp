/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** evt.c
*/

#include "../../include/all.hpp"

void key_press(param_t *params)
{
    if (params->pause.event.key.code == sf::Keyboard::Escape)
        params->pause.on_off = 0;
}

void mouve(param_t *params)
{
    params->mouse.x = params->pause.event.mouseMove.x;
    params->mouse.y = params->pause.event.mouseMove.y;
}

void evt(param_t *params, sound_t *sound)
{
    if (params->pause.event.type == sf::Event::MouseMoved)
        mouve(params);
    if (params->pause.event.type == sf::Event::KeyPressed)
        key_press(params);
    if (params->pause.event.type == sf::Event::MouseButtonReleased)
        click_main(params, sound);
    if (params->pause.event.type == sf::Event::Closed) {
        params->level = -1;
        params->pause.on_off = 0;
    }
}
