/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** pause.c
*/

#include "../../include/all.hpp"

void pause_main(param_t *params, lib_t *strG, sound_t *sound)
{
    params->pause.on_off = 1;

    sf::Vector2f scale = {3, 3};
    sf::Vector2f pos = {350, 90};

    params->window.get()->setMouseCursorVisible(true);
    params->pause.Tex.loadFromFile("resources/pause.png");
    while (params->pause.on_off == 1) {
        while (params->window.get()->pollEvent(params->pause.event)) {
            evt(params, sound);
        }
        params->pause.Sp.setTexture(params->pause.Tex, true);
        params->pause.Sp.setPosition(pos);
        params->pause.Sp.setScale(scale);
        params->window.get()->draw(params->pause.Sp);
        params->window.get()->display();
    }
    params->window.get()->setMouseCursorVisible(false);
}
