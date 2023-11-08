#pragma once

#include "Cloud.hpp"
#include "Sound.hpp"
#include "all.hpp"
#include <SFML/Audio.hpp>

#ifndef STRUC_H
#    define STRUC_H

typedef struct
{
    sf::Sprite Sp1;
    sf::Texture Tex1;
    sf::Sprite Sp2;
    sf::Texture Tex2;
} deco_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    int sp_pos;
} explo_t;

typedef struct
{
    sf::Sprite Sp1;
    sf::Texture Tex1;
    sf::Sprite Sp2;
    sf::Texture Tex2;
    int sp_pos1;
    int sp_pos2;
    int x1;
    int x2;
    int y1;
    int y2;
} back_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    int sp_pos;
    int x;
    int y;
} pipe_t;

typedef struct
{
    sf::Clock clock;
    sf::Time time_mun;
    sf::Sprite Sp;
    sf::Texture Tex;
    sf::Sprite SpB;
    sf::Texture TexB;
    int sp_pos;
    int x;
    int y;
} mun_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    int sp_pos;
    int x;
    int y;
} hit_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    int sp_pos;
    int x;
    int y;
} plaine_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
} menu_t;

typedef struct
{
    deco_t deco;
    explo_t explo;
    back_t back;
    mun_t mun;
    hit_t hit;
    plaine_t plaine;
    Cloud cloud1;
    Cloud cloud2;
    Cloud cloud3;
    pipe_t pipe;
    menu_t menu;
} lib_t;

typedef struct
{
    Sound shoot;
    Sound reload;
    Sound damage;
    sf::Music death;
    sf::Music level1;
    sf::Music deathtwo;
    sf::Music explode;
    sf::Music mario;
    sf::Music level;
    sf::Music start;
} sound_t;

#endif
