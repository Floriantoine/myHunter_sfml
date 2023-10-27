/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** value.c
*/

#include "../include/all.hpp"

void value(anim_t *strA, param_t *params)
{
    if (params->loop == 3){
        params->loop = 0;
        strA->grass.sp_pos = strA->grass.sp_pos + 200;
        if (strA->grass.sp_pos > 400) {
            strA->grass.sp_pos = 0;
        }
    }
    params->loop = params->loop + 1;
    params->loop2 = params->loop2 + 1;

    if (strA->grass.y > 540 && strA->grass.loop == -1) {
        strA->grass.y = strA->grass.y - 1;
    }else if (strA->grass.y < 740 && strA->grass.loop == 1) {
        strA->grass.y = strA->grass.y + 1;
        if (strA->grass.y >= 740)
            strA->grass.loop = -1;
    }

    strA->blood.could = strA->blood.could + 1;
    if (strA->blood.could < 6)
        if (strA->blood.sp_pos > 600)
            strA->blood.sp_pos = 0;
    strA->blood.sp_pos = strA->blood.sp_pos + 100;
}
