/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** slowmo.c
*/

#include "../include/all.hpp"

void slowmo(param_t *params, lib_t *strG, anim_t *strA)
{
    params->window.get()->setFramerateLimit(3);
}
