/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** randy.c
*/

#include "../include/all.hpp"

int randy(int min, int max, int interdiction)
{
    srand(time(NULL));
    int out = min - 1;
    while (out < min || out > max || out == interdiction) {
        out = (rand() % (max - min + 1)) + min;
    }
    return (out);
}
