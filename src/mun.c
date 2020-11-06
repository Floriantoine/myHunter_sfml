/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** mun.c
*/

#include "../include/all.h"

void dead_mun(param_t *params, int a, int y, lib_t *strG)
{
    sfVector2f scale = {0.2, 0.2};

    while (a < 3) {
        sfVector2f pos = {1800, y};
        sfSprite_setTexture(strG->mun.SpB, strG->mun.TexB, sfTrue);
        sfSprite_setScale(strG->mun.SpB, scale);
        sfSprite_setPosition(strG->mun.SpB, pos);
        sfRenderWindow_drawSprite(params->window, strG->mun.SpB, NULL);
        y = y - 130;
        a++;
    }
}

void mun(lib_t *strG, param_t *params, int mun)
{
    int a = 0;
    int y = 900;
    sfVector2f scale = {0.2, 0.2};

    while (a != mun) {
        sfVector2f pos = {1800, y};
        sfSprite_setTexture(strG->mun.Sp, strG->mun.Tex, sfTrue);
        sfSprite_setScale(strG->mun.Sp, scale);
        sfSprite_setPosition(strG->mun.Sp, pos);
        sfRenderWindow_drawSprite(params->window, strG->mun.Sp, NULL);
        y = y - 130;
        a++;
    }
    dead_mun(params, a, y, strG);
}
