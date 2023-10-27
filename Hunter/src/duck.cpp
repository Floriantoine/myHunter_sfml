/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** duck->c
*/

#include "../include/all.hpp"

void check_mvt(duck_t *duck)
{
    if (duck->x + duck->mvt >= 1910)
        duck->L_R = -1;
    if (duck->x + duck->mvt <= 10)
        duck->L_R = 1;
    if (duck->y + duck->mvt >= 800)
        duck->U_D = -1;
    if (duck->y + duck->mvt <= 10)
        duck->U_D = 1;
    if (duck->y > 1090)
        duck->y = 400;
}

void mouvduck(duck_t *duck)
{
    check_mvt(duck);
    if (duck->loop >= 40) {
        if (duck->type == 1) {
            duck->L_R = randy(-2, 2, 0);
            duck->U_D = randy(-2, 2, 4);
        } else {
            duck->L_R = randy(-1, 1, 0);
            duck->U_D = randy(-1, 1, 4);
        }
        duck->loop = 0;
    }
    duck->x = duck->x + (duck->mvt * duck->L_R);
    duck->y = duck->y + duck->mvt * duck->U_D;
    duck->loop++;
}

void sprite_duck(duck_t *duck, param_t *params)
{
    if (params->loop == 3) {
        duck->sp_pos = duck->sp_pos + 70;
    }
    if (duck->sp_pos > 300) {
        duck->sp_pos = 0;
    }
}

void duck_draw(duck_t *duck, param_t *params)
{
    sf::Vector2f pos = {duck->x, duck->y};
    sf::IntRect rect = {duck->sp_pos, 0, 70, 300};
    sf::Vector2f scale = {3, 3};
    sf::Sprite sprite;
    sf::Texture texture;

    if (duck->L_R > 0) {
        sprite = duck->Sp;
        texture = duck->Tex;
    } else {
        sprite = duck->SpL;
        texture = duck->TexL;
    }
    sprite.setTexture(texture, true);
    sprite.setTextureRect(rect);
    sprite.setPosition(pos);
    sprite.setScale(scale);
    params->window.get()->draw(sprite);
}

void duck(lib_t *strG, param_t *params, duck_t *duck)
{
    sprite_duck(duck, params);
    mouvduck(duck);
    duck_draw(duck, params);
}
