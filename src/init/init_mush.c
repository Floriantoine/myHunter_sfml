/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** init_mush.c
*/

#include "../../include/all.h"

void init_mushroom(anim_t *strA)
{
    strA->mushroom.Tex = sfTexture_createFromFile("resources/mushroom.png", NULL);
    strA->mushroom.Sp = sfSprite_create();
    sfSprite_setTexture(strA->mushroom.Sp, strA->mushroom.Tex, sfTrue);
    strA->mushroom.x = 400;
    strA->mushroom.y = -10;
    strA->mushroom.mvt = 20;
    strA->mushroom.L_R = 0;
    strA->mushroom.U_D = 1;
}