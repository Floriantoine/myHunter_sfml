/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** anim_back.C
*/

#include "../include/all.hpp"

void backcloud(lib_t *strG, param_t *params, anim_t *strA)
{
    sf::Vector2f pos = {strG->back.x1, strG->back.y1};
    sf::IntRect rect = {strG->back.sp_pos1, 0, 1920, 1080};
    strG->back.Sp1.setTextureRect(rect);
    strG->back.Sp1.setPosition(pos);
    params->window.get()->draw(strG->back.Sp1);
}

void backhouse(lib_t *strG, param_t *params, anim_t *strA)
{
    sf::Vector2f pos = {1, 1};
    sf::Vector2f scale = {1, 1};
    strG->back.Sp2.setTexture(strG->back.Tex2, true);
    strG->back.Sp2.setScale(scale);
    strG->back.Sp2.setPosition(pos);
    params->window.get()->draw(strG->back.Sp2);
}
