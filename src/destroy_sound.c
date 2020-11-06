/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** destroy_sound.c
*/

#include "../include/all.h"

void destroy_sound(sound_t *sound)
{
    sfMusic_destroy(sound->death);
    sfMusic_destroy(sound->explode);
    sfMusic_destroy(sound->level1);
    sfMusic_destroy(sound->start);
    sfMusic_destroy(sound->level);
    sfMusic_destroy(sound->mario);
    sfMusic_destroy(sound->reload);
    sfMusic_destroy(sound->shoot);
}
