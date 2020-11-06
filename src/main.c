/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** main.c
*/

#include "../include/all.h"

void init_tex_sp(lib_t *strG, anim_t *strA)
{
    init_1strg(strG);
    init_2strg(strG);
    init_1stra(strA);
    init_duck(strA);
}

void init_params(param_t *params)
{
    sfVideoMode mode = {1920, 1080, 32};
    params->score = 0;
    params->loop = 0;
    params->loop2 = 0;
    params->level = 0;
    params->mouse.x = 600;
    params->mouse.y = 600;
    params->intro = 1;
    params->duel.on_off = 0;
    params->font = sfFont_createFromFile("resources/arial.ttf");
    params->window = sfRenderWindow_create
    (mode, "HUNTER", sfResize | sfClose, NULL);
    params->cam.view = sfView_create();
}

void init_sound(sound_t *sound)
{
    sound->mario = sfMusic_createFromFile("resources/mario.ogg");
    sound->shoot = sfMusic_createFromFile("resources/shoot.ogg");
    sound->reload = sfMusic_createFromFile("resources/sound/reload.ogg");
    sound->death = sfMusic_createFromFile("resources/sound/death.ogg");
    sound->level1 = sfMusic_createFromFile("resources/sound/level1.ogg");
    sound->explode = sfMusic_createFromFile("resources/explode.ogg");
    sound->level = sfMusic_createFromFile("resources/level_sound.ogg");
    sound->start = sfMusic_createFromFile("resources/sound/start.ogg");
    sfMusic_setVolume(sound->level1, 30);
}

int main(int argc, char const *argv[])
{
    param_t params;
    lib_t strG;
    sound_t sound;
    anim_t strA;

    init_tex_sp(&strG, &strA);
    init_sound(&sound);
    init_params(&params);
    life_init(&params);
    body(&params, &strG, &sound, &strA);
}