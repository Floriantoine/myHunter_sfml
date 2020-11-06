/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** struc_param.h
*/

#include"all.h"

#ifndef STRUC_PARAM_H
#define STRUC_PARAM_H

typedef struct
{
    sfClock *clock;
    sfTime time;
    int on_off;
}duel_t ;

typedef struct
{
    sfSprite* Sp;
    sfTexture* Tex;
    sfSprite* SpB;
    sfTexture* TexB;
    int x;
    int y;
    int life;
} life_t;

typedef struct
{
    sfView* view;
    sfFloatRect rec;
    int on_off;
} view_t;

typedef struct
{
    int x;
    int y;
} mouse_t;

typedef struct
{
    sfSprite* Sp;
    sfTexture* Tex;
    sfEvent event;
    int on_off;
} pause_t;

typedef struct
{
    sfText* text;
} text_t;

typedef struct
{
    sfClock *clock;
    sfTime time;
    sfRenderWindow* window;
    sfEvent event;
    sfSoundStatus could;
    sfFont* font;
    view_t cam;
    mouse_t mouse;
    pause_t pause;
    text_t scoreboard;
    text_t timeinfo;
    duel_t duel;
    int reload_shoot;
    int verif;
    life_t life;
    int loop;
    int loop2;
    int score;
    int level;
    int intro;
} param_t;
#endif