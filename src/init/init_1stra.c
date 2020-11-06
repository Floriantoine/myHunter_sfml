/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** init_1strA.c
*/

#include "../../include/all.h"

void grass_int(anim_t *strA)
{
    strA->grass.Tex = sfTexture_createFromFile("resources/grass.png", NULL);
    strA->grass.Sp = sfSprite_create();
    strA->grass.sp_pos = 0;
    strA->grass.y = 640;
    strA->grass.loop = -1;
}

void blood_int(anim_t *strA)
{
    strA->blood.Tex = sfTexture_createFromFile("resources/blood.png", NULL);
    strA->blood.Sp = sfSprite_create();
    strA->blood.sp_pos = 100;
    strA->blood.could = 8;
}

void coin_int(anim_t *strA)
{
    strA->coin.Tex = sfTexture_createFromFile("resources/coin.png", NULL);
    strA->coin.Sp = sfSprite_create();
    strA->coin.sp_pos = 0;
    strA->coin.x = 670;
    strA->coin.y = 560;
    strA->coin.loop = 5;
}

void boo_int(anim_t *strA)
{
    strA->boo.Tex = sfTexture_createFromFile("resources/boo.png", NULL);
    strA->boo.Sp = sfSprite_create();
    strA->boo.TexL = sfTexture_createFromFile("resources/booL.png", NULL);
    strA->boo.SpL = sfSprite_create();
    strA->boo.sp_pos = 0;
    strA->boo.x = -10;
    strA->boo.y =  400;
    strA->boo.L_R =  1;
    strA->boo.U_D =  -1;
    strA->boo.loop = 0;
    strA->boo.mvt = 10;
}

void init_1stra(anim_t *strA)
{
    coin_int(strA);
    blood_int(strA);
    grass_int(strA);
    boo_int(strA);
    init_mushroom(strA);
}