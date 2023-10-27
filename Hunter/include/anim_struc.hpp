#ifndef ANIM_STRUC_H
#define ANIM_STRUC_H

#include <SFML/Graphics.hpp>
typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    sf::Sprite SpL;
    sf::Texture TexL;
    int sp_pos;
    int x;
    int y;
    int U_D;
    int type;
    int L_R;
    int loop;
    int mvt;
} duck_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    int x;
    int y;
    int U_D;
    int L_R;
    int mvt;
} mushroom_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    int sp_pos;
    int loop;
    int x;
    int y;
} grass_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    int sp_pos;
    int x;
    int y;
    int loop;
} coin_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    sf::Sprite SpL;
    sf::Texture TexL;
    int sp_pos;
    int x;
    int y;
    int U_D;
    int L_R;
    int mvt;
    int loop;
} boo_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    int sp_pos;
    int could;
    int x;
    int y;
} blood_t;

typedef struct
{
    int x;
    int y;
    int loop;
} more_one_t;

typedef struct
{
    duck_t duck1;
    duck_t duck2;
    duck_t duck3;
    mushroom_t mushroom;
    grass_t grass;
    blood_t blood;
    coin_t coin;
    boo_t boo;
    more_one_t more_one;
} anim_t;

#endif
