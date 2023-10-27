/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** animation og boo
*/

#include "../include/all.hpp"

void mouvboo(anim_t *strA, param_t *params)
{
    if (strA->boo.loop >= 10) {
        if (params->mouse.x > strA->boo.x)
            strA->boo.L_R = 1;
        if (params->mouse.x < strA->boo.x)
            strA->boo.L_R = -1;
        if (params->mouse.y > strA->boo.y)
            strA->boo.U_D = 1;
        if (params->mouse.y < strA->boo.y)
            strA->boo.U_D = -1;
        strA->boo.loop = 0;
    }
    strA->boo.x = strA->boo.x + (strA->boo.mvt * strA->boo.L_R);
    strA->boo.y = strA->boo.y + strA->boo.mvt * strA->boo.U_D;
    strA->boo.loop++;
}

void boo(anim_t *strA, param_t *params)
{
    mouvboo(strA, params);
    sf::Vector2f pos = {strA->boo.x, strA->boo.y};
    sf::IntRect rect = {strA->boo.sp_pos, 0, 100, 300};
    sf::Sprite sprite;
    sf::Texture texture;

    if (strA->boo.L_R > 0) {
        sprite = strA->boo.Sp;
        texture = strA->boo.Tex;
    } else {
        sprite = strA->boo.SpL;
        texture = strA->boo.TexL;
    }
    sprite.setTexture(texture, true);
    sprite.setTextureRect(rect);
    sprite.setPosition(pos);
    params->window.get()->draw(sprite);
}
