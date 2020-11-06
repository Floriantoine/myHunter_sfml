/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** init_2.c
*/

#include "../../include/all.h"

void mun_hit(lib_t *strG)
{
    strG->mun.Tex = sfTexture_createFromFile("resources/mun.png", NULL);
    strG->mun.Sp = sfSprite_create();
    strG->mun.TexB = sfTexture_createFromFile("resources/munB.png", NULL);
    strG->mun.SpB = sfSprite_create();
    strG->hit.Tex = sfTexture_createFromFile("resources/hit.png", NULL);
    strG->hit.Sp = sfSprite_create();
}

void pipe_init(lib_t *strG)
{
    strG->pipe.Tex = sfTexture_createFromFile("resources/pipe.png", NULL);
    strG->pipe.Sp = sfSprite_create();
}

void home(lib_t *strG)
{
    strG->menu.Tex = sfTexture_createFromFile("resources/menuback.jpg", NULL);
    strG->menu.Sp = sfSprite_create();
}

void init_2strg(lib_t *strG)
{
    mun_hit(strG);
    home(strG);
    pipe_init(strG);
}