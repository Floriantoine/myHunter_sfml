/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** init_life.c
*/

#include "../../include/all.h"

void life_init(param_t *params)
{
    params->life.Tex = sfTexture_createFromFile("resources/life.png", NULL);
    params->life.Sp = sfSprite_create();
    params->life.TexB = sfTexture_createFromFile("resources/lifeB.png", NULL);
    params->life.SpB = sfSprite_create();
    params->life.life = 10;
}