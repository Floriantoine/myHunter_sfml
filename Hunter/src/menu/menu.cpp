/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** menu.c
*/

#include "../../include/all.hpp"

void menuback(lib_t *strG, param_t *params)
{
    sf::Vector2f scale = {0.55, 0.45};
    strG->menu.Sp.setTexture(strG->menu.Tex, true);
    strG->menu.Sp.setScale(scale);
    params->window.get()->draw(strG->menu.Sp);
}

void evt_menu(param_t *params)
{
    while (params->window.get()->pollEvent(params->event)) {
        if (params->event.type == sf::Event::Closed) {
            params->level = -1;
            params->intro = 0;
        } else if (params->event.type == sf::Event::KeyPressed) {
            key_menu(params);
        } else {
            if (params->event.type == sf::Event::MouseMoved) {
                params->mouse.x = params->event.mouseMove.x;
                params->mouse.y = params->event.mouseMove.y;
            } else if (params->event.type == sf::Event::MouseButtonReleased) {
                click_menu(params);
            }
        }
    }
}

void menu(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound)
{
    sound->level1.pause();
    params->window.get()->setMouseCursorVisible(true);
    params->window.get()->setFramerateLimit(30);
    while (params->level == 0) {
        evt_menu(params);
        params->window.get()->clear(sf::Color::Black);
        menuback(strG, params);
        mushroom(strA, params);
        boo(strA, params);
        params->window.get()->display();
    }
    if (params->intro == 0)
        sound->level1.play();
    params->window.get()->setMouseCursorVisible(false);
}
