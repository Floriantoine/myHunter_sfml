/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** init_life.c
*/

#include "../../include/all.hpp"

void life_init(param_t *params)
{
    params->life.Tex.loadFromFile("resources/life.png");
    params->life.TexB.loadFromFile("resources/lifeB.png");
    params->life.life = 10;
}
