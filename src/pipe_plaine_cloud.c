/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** pipi_plaine_cloud.c
*/

#include "../include/all.h"

void pipe(lib_t *strG, param_t *params)
{
    sfSprite_setTexture(strG->pipe.Sp, strG->pipe.Tex, sfTrue);
    sfVector2f pos = {1244, 770};
    sfSprite_setPosition(strG->pipe.Sp, pos);
    sfRenderWindow_drawSprite(params->window, strG->pipe.Sp, NULL);
}

void plaine(lib_t *strG, param_t *params)
{
    sfSprite_setTexture(strG->plaine.Sp, strG->plaine.Tex, sfTrue);
    sfVector2f pos = {strG->plaine.x, strG->plaine.y};
    sfSprite_setPosition(strG->plaine.Sp, pos);
    sfRenderWindow_drawSprite(params->window, strG->plaine.Sp, NULL);
}

void cloud(lib_t *strG, param_t *params)
{
    sfSprite_setTexture(strG->cloud1.Sp, strG->cloud1.Tex, sfTrue);
    sfVector2f pos = {575, 320};
    sfSprite_setPosition(strG->cloud1.Sp, pos);
    sfRenderWindow_drawSprite(params->window, strG->cloud1.Sp, NULL);
    sfSprite_setTexture(strG->cloud2.Sp, strG->cloud2.Tex, sfTrue);
    sfVector2f pos_one = {56, 22};
    sfSprite_setPosition(strG->cloud2.Sp, pos_one);
    sfRenderWindow_drawSprite(params->window, strG->cloud2.Sp, NULL);
    sfSprite_setTexture(strG->cloud3.Sp, strG->cloud3.Tex, sfTrue);
    sfVector2f pos_two = {1523, 63};
    sfSprite_setPosition(strG->cloud3.Sp, pos_two);
    sfRenderWindow_drawSprite(params->window, strG->cloud3.Sp, NULL);
}