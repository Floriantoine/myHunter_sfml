/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** life.c
*/

#include "../include/all.h"

void dead_life(param_t *params, int a, int x, sfVector2f scale)
{
    while (a < 10) {
        sfVector2f pos = {x, 50};
        sfSprite_setTexture(params->life.SpB, params->life.TexB, sfTrue);
        sfSprite_setScale(params->life.SpB, scale);
        sfSprite_setPosition(params->life.SpB, pos);
        sfRenderWindow_drawSprite(params->window, params->life.SpB, NULL);
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
    sfVector2f scale = {0.2, 0.2};

    while (a != params->life.life) {
        sfVector2f pos = {x, 50};
        sfSprite_setTexture(params->life.Sp, params->life.Tex, sfTrue);
        sfSprite_setScale(params->life.Sp, scale);
        sfSprite_setPosition(params->life.Sp, pos);
        sfRenderWindow_drawSprite(params->window, params->life.Sp, NULL);
        x = x - 130;
        if (x == 1150)
            x = x - 600;
        a++;
    }
    dead_life(params, a, x, scale);
}