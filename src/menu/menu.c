/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** menu.c
*/

#include "../../include/all.h"

void menuback(lib_t *strG, param_t *params)
{
    sfVector2f scale = {0.55, 0.45};
    sfSprite_setTexture(strG->menu.Sp, strG->menu.Tex, sfTrue);
    sfSprite_setScale(strG->menu.Sp, scale);
    sfRenderWindow_drawSprite(params->window, strG->menu.Sp, NULL);
}

void evt_menu(param_t *params)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(params->window, &params->event)) {
        if (params->event.type == sfEvtClosed) {
            params->level = -1;
            params->intro = 0;
        } else if (params->event.type == sfEvtKeyPressed) {
            key_menu(params);
        } else {
            if (params->event.type ==  sfEvtMouseMoved) {
                params->mouse.x = params->event.mouseMove.x;
                params->mouse.y = params->event.mouseMove.y;
            } else if (params->event.type == sfEvtMouseButtonReleased) {
                click_menu(params);
            }
        }
    }
}

void menu(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound)
{
    sfColor Black = {0, 0, 0};
    sfMusic_pause(sound->level1);
    sfRenderWindow_setMouseCursorVisible(params->window, sfTrue);
    sfRenderWindow_setFramerateLimit(params->window, 30);
    while (params->level == 0) {
        evt_menu(params);
        sfRenderWindow_clear(params->window, Black);
        menuback(strG, params);
        mushroom(strA, params);
        boo(strA, params);
        sfRenderWindow_display(params->window);
    }
    if (params->intro == 0)
        sfMusic_play(sound->level1);
    sfRenderWindow_setMouseCursorVisible(params->window, sfFalse);
}