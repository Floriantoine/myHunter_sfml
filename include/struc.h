/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** struc.h
*/

#include"all.h"

#ifndef STRUC_H
    #define STRUC_H

    typedef struct
    {
        sfSprite* Sp1;
        sfTexture* Tex1;
        sfSprite* Sp2;
        sfTexture* Tex2;
    } deco_t;

    typedef struct
    {
        sfSprite* Sp;
        sfTexture* Tex;
        int sp_pos;
    } explo_t;

    typedef struct
    {
        sfSprite* Sp1;
        sfTexture* Tex1;
        sfSprite* Sp2;
        sfTexture* Tex2;
        int sp_pos1;
        int sp_pos2;
        int x1;
        int x2;
        int y1;
        int y2;
    } back_t;

    typedef struct
    {
        sfSprite* Sp;
        sfTexture* Tex;
        int sp_pos;
        int x;
        int y;
    } pipe_t;

    typedef struct
    {
        sfClock *clock;
        sfTime time_mun;
        sfSprite* Sp;
        sfTexture* Tex;
        sfSprite* SpB;
        sfTexture* TexB;
        int sp_pos;
        int x;
        int y;
    } mun_t;

    typedef struct
    {
        sfSprite* Sp;
        sfTexture* Tex;
        int sp_pos;
        int x;
        int y;
    } hit_t;

    typedef struct
    {
        sfSprite* Sp;
        sfTexture* Tex;
        int sp_pos;
        int x;
        int y;
    } cloud1_t;

    typedef struct
    {
        sfSprite* Sp;
        sfTexture* Tex;
        int sp_pos;
        int x;
        int y;
    } cloud2_t;

    typedef struct
    {
        sfSprite* Sp;
        sfTexture* Tex;
        int sp_pos;
        int x;
        int y;
    } cloud3_t;

    typedef struct
    {
        sfSprite* Sp;
        sfTexture* Tex;
        int sp_pos;
        int x;
        int y;
    } plaine_t;

    typedef struct
    {
        sfSprite* Sp;
        sfTexture* Tex;
    } menu_t;

    typedef struct
    {
        deco_t deco;
        explo_t explo;
        back_t back;
        mun_t  mun;
        hit_t  hit;
        plaine_t plaine;
        cloud1_t  cloud1;
        cloud2_t  cloud2;
        cloud3_t  cloud3;
        pipe_t pipe;
        menu_t menu;
    } lib_t;

    typedef struct
    {
        sfMusic* shoot;
        sfMusic* reload;
        sfMusic* death;
        sfMusic* level1;
        sfMusic* deathtwo;
        sfMusic* explode;
        sfMusic* mario;
        sfMusic* level;
        sfMusic* start;
    } sound_t;

    #endif