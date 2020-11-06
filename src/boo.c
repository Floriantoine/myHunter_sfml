/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** animation og boo
*/

#include "../include/all.h"

void mouvboo(anim_t *strA, param_t *params)
{
    if (strA->boo.loop >= 10) {
        if (params->mouse.x  > strA->boo.x)
            strA->boo.L_R = 1;
        if (params->mouse.x < strA->boo.x)
            strA->boo.L_R = -1;
        if (params->mouse.y > strA->boo.y)
            strA->boo.U_D = 1;
        if (params->mouse.y < strA->boo.y)
            strA->boo.U_D = -1;
        strA->boo.loop = 0;
    }
    strA->boo.x = strA->boo.x + (strA->boo.mvt * strA->boo.L_R);
    strA->boo.y = strA->boo.y + strA->boo.mvt * strA->boo.U_D;
    strA->boo.loop++;
}

void boo(anim_t *strA, param_t *params)
{
    mouvboo(strA, params);
    sfVector2f pos = {strA->boo.x, strA->boo.y};
    sfIntRect rect = {strA->boo.sp_pos, 0, 100, 300};

    if (strA->boo.L_R > 0) {
        sfSprite_setTexture(strA->boo.Sp, strA->boo.Tex, sfTrue);
        sfSprite_setTextureRect(strA->boo.Sp, rect);
        sfSprite_setPosition(strA->boo.Sp, pos);
        sfRenderWindow_drawSprite(params->window, strA->boo.Sp, NULL);
    } else {
        sfSprite_setTexture(strA->boo.SpL, strA->boo.TexL, sfTrue);
        sfSprite_setTextureRect(strA->boo.SpL, rect);
        sfSprite_setPosition(strA->boo.SpL, pos);
        sfRenderWindow_drawSprite(params->window, strA->boo.SpL, NULL);
    }
}