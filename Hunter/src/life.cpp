/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** life.c
*/

#include "../include/all.hpp"

void dead_life(param_t *params, int a, int x, sf::Vector2f scale)
{
    while (a < 10) {
        sf::Vector2f pos = {x, 50};
        params->life.SpB.setTexture(params->life.TexB, true);
        params->life.SpB.setScale(scale);
        params->life.SpB.setPosition(pos);
        params->window.get()->draw(params->life.SpB);
        x = x - 130;
        if (x == 1150)
            x = x - 600;
        a++;
    }
}

void life(param_t *params)
{
    int a = 0;
    int x = 1800;
    sf::Vector2f scale = {0.2, 0.2};

    while (a != params->life.life) {
        sf::Vector2f pos = {x, 50};
        params->life.Sp.setTexture(params->life.Tex, true);
        params->life.Sp.setScale(scale);
        params->life.Sp.setPosition(pos);
        params->window.get()->draw(params->life.Sp);
        x = x - 130;
        if (x == 1150)
            x = x - 600;
        a++;
    }
    dead_life(params, a, x, scale);
}
