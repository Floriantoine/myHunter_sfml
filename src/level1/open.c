/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** open.c
*/

#include "../../include/all.h"

void texte(param_t *params, int y, int trans)
{
    sfText* text;
    text = sfText_create();
    sfVector2f pos = {720, y};
    sfColor color = {200, 0, 0, trans};
    char timer[] = "   READY ?";
    sfText_setPosition(text, pos);
    sfText_setString(text, timer);
    sfText_setColor(text, color);
    sfText_setFont(text, params->font);
    sfText_setCharacterSize(text, 60);
    sfRenderWindow_drawText(params->window, text, NULL);
}

void open_level1(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound)
{
    int  y = 700;
    int trans = 255;
    sfMusic_play(sound->level);
    params->intro = 0;

    printf("CC\n");
    while (sfMusic_getStatus(sound->level) != 0) {
        printf("CC1\n");
        y = y - 4.1;
        if (trans > 0 && y < 600)
            trans = trans - 1.25;
        value(strA, params);
        sfClock_restart(params->clock);
        print_level1(params, strG, strA);
        texte(params, y, trans);
        sfRenderWindow_display(params->window);
    }
    printf("CC2\n");
    sfMusic_play(sound->start);
}