/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** init_2.c
*/

#include "../../include/all.hpp"

void mun_hit(lib_t *strG)
{
    strG->mun.Tex.loadFromFile("resources/mun.png");
    strG->mun.TexB.loadFromFile("resources/munB.png");
    strG->hit.Tex.loadFromFile("resources/hit.png");
}

void pipe_init(lib_t *strG)
{
    strG->pipe.Tex.loadFromFile("resources/pipe.png");
}

void home(lib_t *strG)
{
    strG->menu.Tex.loadFromFile("resources/menuback.jpg");
}

void init_2strg(lib_t *strG)
{
    mun_hit(strG);
    home(strG);
    pipe_init(strG);
}
