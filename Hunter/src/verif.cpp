/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** verif.c
*/

#include "../include/all.hpp"

void reset(duck_t *duck)
{
    int random = 0;

    random = randy(-1, 1, 0);
    if (random == -1)
        duck->x = -100;
    else
        duck->x = 1940;
    duck->y = randy(50, 700, 0);
}

int verif_coord(duck_t *duck, anim_t *strA, param_t *params, sound_t *sound)
{
    if (duck->x < params->mouse.x && params->mouse.x < duck->x + 100 &&
        duck->y < params->mouse.y && params->mouse.y < duck->y + 150) {
        strA->blood.could = 0;
        strA->blood.x = params->mouse.x;
        strA->blood.y = params->mouse.y;
        sound->death.play();
        params->score = params->score + 1;
        strA->more_one.x = duck->x;
        strA->more_one.y = duck->y;
        strA->more_one.loop = 0;
        reset(duck);
        double_kill(params, duck);
        return (1);
    }
    return (0);
}
