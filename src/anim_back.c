/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** anim_back.C
*/

#include "../include/all.h"

void backcloud(lib_t *strG, param_t *params, anim_t *strA)
{
    sfVector2f pos = {strG->back.x1, strG->back.y1};
    sfIntRect rect = {strG->back.sp_pos1, 0, 1920, 1080};
    sfSprite_setTextureRect(strG->back.Sp1, rect);
    sfSprite_setPosition(strG->back.Sp1, pos);
    sfRenderWindow_drawSprite(params->window, strG->back.Sp1, NULL);
}

void backhouse(lib_t *strG, param_t *params, anim_t *strA)
{
    sfVector2f pos = {1, 1};
    sfVector2f scale = {1, 1};
    sfSprite_setTexture(strG->back.Sp2, strG->back.Tex2, sfTrue);
    sfSprite_setScale(strG->back.Sp2, scale);
    sfSprite_setPosition(strG->back.Sp2, pos);
    sfRenderWindow_drawSprite(params->window, strG->back.Sp2, NULL);
}