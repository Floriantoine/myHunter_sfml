/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** test.c
*/

#include "../include/all.hpp"

void hit(lib_t *strG, param_t *params)
{
    sf::Vector2f pos = {params->mouse.x - 40, params->mouse.y - 40};
    strG->hit.Sp.setTexture(strG->hit.Tex, true);
    strG->hit.Sp.setPosition(pos);
    params->window.get()->draw(strG->hit.Sp);
}

void explo(lib_t *strG, param_t *params, anim_t *strA)
{
    sf::Vector2f pos = {200, -1000};
    sf::Vector2f scale = {25, 25};
    int cc = 0;

    while (cc < 600) {
        sf::IntRect rect = {cc, 0, 85, 200};
        strG->explo.Sp.setTexture(strG->explo.Tex, true);
        strG->explo.Sp.setScale(scale);
        strG->explo.Sp.setTextureRect(rect);
        strG->explo.Sp.setPosition(pos);
        sf::RenderWindow *window = params->window.get();
        window->draw(strG->back.Sp2);
        window->draw(strG->deco.Sp1);
        window->draw(strG->explo.Sp);
        window->display();
        cc = cc + 90;
    }
}

void grass(lib_t *strG, param_t *params, anim_t *strA)
{
    strA->grass.x = 1230;
    if (strA->grass.sp_pos > 250)
        strA->grass.x = strA->grass.x - 9;
    sf::Vector2f pos = {strA->grass.x, strA->grass.y};
    sf::IntRect rect = {strA->grass.sp_pos, 0, 200, 300};
    strA->grass.Sp.setTexture(strA->grass.Tex, true);
    strA->grass.Sp.setTextureRect(rect);
    strA->grass.Sp.setPosition(pos);
    params->window.get()->draw(strA->grass.Sp);
}

void blood(lib_t *strG, param_t *params, anim_t *strA)
{
    sf::Vector2f pos = {strA->blood.x - 90, strA->blood.y - 150};
    sf::IntRect rect = {strA->blood.sp_pos, 0, 125, 200};
    strA->blood.Sp.setTexture(strA->blood.Tex, true);
    strA->blood.Sp.setTextureRect(rect);
    strA->blood.Sp.setPosition(pos);
    params->window.get()->draw(strA->blood.Sp);
}

void background(lib_t *strG, param_t *params)
{
    strG->deco.Sp1.setTexture(strG->deco.Tex1, true);
    sf::Vector2f pos = {1, 1};
    strG->deco.Sp1.setScale(pos);
    params->window.get()->draw(strG->deco.Sp1);
}
