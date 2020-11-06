/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** test.c
*/

#include "../include/all.h"

void hit(lib_t *strG, param_t *params)
{
    sfVector2f pos = {params->mouse.x - 40, params->mouse.y - 40};
    sfSprite_setTexture(strG->hit.Sp, strG->hit.Tex, sfTrue);
    sfSprite_setPosition(strG->hit.Sp, pos);
    sfRenderWindow_drawSprite(params->window, strG->hit.Sp, NULL);
}

void explo(lib_t *strG, param_t *params, anim_t *strA)
{
    sfVector2f pos = {200, -1000};
    sfVector2f scale = {25, 25};
    int cc = 0;

    while (cc < 600) {
        sfIntRect rect = {cc, 0, 85, 200};
        sfSprite_setTexture(strG->explo.Sp, strG->explo.Tex, sfTrue);
        sfSprite_setScale(strG->explo.Sp, scale);
        sfSprite_setTextureRect(strG->explo.Sp, rect);
        sfSprite_setPosition(strG->explo.Sp, pos);
        sfRenderWindow_drawSprite(params->window, strG->back.Sp2, NULL);
        sfRenderWindow_drawSprite(params->window, strG->deco.Sp1, NULL);
        sfRenderWindow_drawSprite(params->window, strG->explo.Sp, NULL);
        sfRenderWindow_display(params->window);
        cc = cc + 90;
    }
}

void grass(lib_t *strG, param_t *params, anim_t *strA)
{
    strA->grass.x = 1230;
    if (strA->grass.sp_pos > 250)
        strA->grass.x = strA->grass.x - 9;
    sfVector2f pos = {strA->grass.x, strA->grass.y};
    sfIntRect rect = {strA->grass.sp_pos, 0, 200, 300};
    sfSprite_setTexture(strA->grass.Sp, strA->grass.Tex, sfTrue);
    sfSprite_setTextureRect(strA->grass.Sp, rect);
    sfSprite_setPosition(strA->grass.Sp, pos);
    sfRenderWindow_drawSprite(params->window, strA->grass.Sp, NULL);
}

void blood(lib_t *strG, param_t *params, anim_t *strA)
{
    sfVector2f pos = {strA->blood.x - 90, strA->blood.y - 150};
    sfIntRect rect = {strA->blood.sp_pos, 0, 125, 200};
    sfSprite_setTexture(strA->blood.Sp, strA->blood.Tex, sfTrue);
    sfSprite_setTextureRect(strA->blood.Sp, rect);
    sfSprite_setPosition(strA->blood.Sp, pos);
    sfRenderWindow_drawSprite(params->window, strA->blood.Sp, NULL);
}

void background(lib_t *strG, param_t *params)
{
    sfSprite_setTexture(strG->deco.Sp1, strG->deco.Tex1, sfTrue);
    sfVector2f pos = {1, 1};
    sfSprite_setScale(strG-> deco.Sp1, pos);
    sfRenderWindow_drawSprite(params->window, strG->deco.Sp1, NULL);
}