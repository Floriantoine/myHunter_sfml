/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** init_1.c
*/

#include "../../include/all.h"

void explo_deco(lib_t *strG)
{
    strG->explo.Tex = sfTexture_createFromFile("resources/explo.png", NULL);
    strG->explo.Sp = sfSprite_create();
    strG->deco.Tex1 = sfTexture_createFromFile("resources/deco.png", NULL);
    strG->deco.Sp1 = sfSprite_create();
}

void back_int(lib_t *strG)
{
    strG->back.Tex1 = sfTexture_createFromFile("resources/BackCloud.png", NULL);
    strG->back.Sp1 = sfSprite_create();
    sfSprite_setTexture(strG->back.Sp1, strG->back.Tex1, sfTrue);
    strG->back.Tex2 = sfTexture_createFromFile("resources/back2.png", NULL);
    strG->back.Sp2 = sfSprite_create();
    strG->back.sp_pos1 = 0;
    strG->back.x1 = 1;
    strG->back.y1 = 1;
}

void cloud_init(lib_t *strG)
{
    strG->cloud1.Tex = sfTexture_createFromFile("resources/cloud_one.png", NULL);
    strG->cloud1.Sp = sfSprite_create();
    strG->cloud2.Tex = sfTexture_createFromFile("resources/cloud_two.png", NULL);
    strG->cloud2.Sp = sfSprite_create();
    strG->cloud3.Tex = sfTexture_createFromFile("resources/cloud3.png", NULL);
    strG->cloud3.Sp = sfSprite_create();
}

void plaine_init(lib_t *strG)
{
    strG->plaine.Tex = sfTexture_createFromFile("resources/plaine.png", NULL);
    strG->plaine.Sp = sfSprite_create();
    strG->plaine.x = 405;
    strG->plaine.y = 568;
}

void init_1strg(lib_t *strG)
{
    plaine_init(strG);
    explo_deco(strG);
    back_int(strG);
    cloud_init(strG);
}