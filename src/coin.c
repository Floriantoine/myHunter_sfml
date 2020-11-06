/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** coin.c
*/

#include "../include/all.h"

void sprite_coin(coin_t *coin, param_t *params)
{
    if (params->loop2 >= coin->loop){
        coin->sp_pos = coin->sp_pos + 170;
        params->loop2 = 0;
    }
    if (coin->sp_pos > 600) {
        coin->sp_pos = 0;
        coin->loop++;
    }
    if (coin->loop > 5)
        params->loop2 = 0;
}

void coin(lib_t *strG, param_t *params, coin_t *coin)
{
    sprite_coin(coin, params);
    sfVector2f pos = {coin->x, coin->y};
    sfIntRect rect = {coin->sp_pos, 0, 180, 200};
    sfSprite_setTexture(coin->Sp, coin->Tex, sfTrue);
    sfSprite_setTextureRect(coin->Sp, rect);
    sfSprite_setPosition(coin->Sp, pos);
    sfRenderWindow_drawSprite(params->window, coin->Sp, NULL);
}