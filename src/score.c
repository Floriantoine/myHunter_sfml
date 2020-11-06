/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** score.c
*/

#include "../include/all.h"

void more_one( anim_t *strA, param_t *params)
{
    sfVector2f pos = {strA->more_one.x, strA->more_one.y};
    sfColor color = {255, 255, 255, 255};
    sfColor BLACK = {0, 0, 0, 255};
    int rot = randy(-90, 90, 0);
    char timer[] = "+ 1";
    strA->more_one.loop++;
    if (strA->more_one.loop > 8)
        strA->more_one.x = -200;
    sfText* text;
    text = sfText_create();
    sfText_setOutlineColor(text, BLACK);
    sfText_setOutlineThickness(text, 15);
    sfText_setPosition(text, pos);
    sfText_setString(text, timer);
    sfText_rotate(text, rot);
    sfText_setColor(text, color);
    sfText_setFont(text, params->font);
    sfText_setCharacterSize(text, 90);
    sfRenderWindow_drawText(params->window, text, NULL);
}

void score_1(param_t *params)
{
    char score_char[] = "SCORE: 000";
    score_char[9] = params->score + '0';
    sfText_setString(params->scoreboard.text, score_char);
}

void score_10(param_t *params)
{
    char score_char[] = "SCORE: 000";
    score_char[9] = params->score % 10 + '0';
    score_char[8] = params->score / 10 + '0';
    sfText_setString(params->scoreboard.text, score_char);
}

void score(param_t *params)
{
    sfVector2f pos = {790, 110};
    sfColor color = {0, 0, 0, 200};
    sfColor WHITE = {255, 255, 255, 255};
    params->scoreboard.text = sfText_create();
    sfText_setFont(params->scoreboard.text, params->font);
    sfText_setCharacterSize(params->scoreboard.text, 50);
    sfText_setOutlineColor(params->scoreboard.text, WHITE);
    sfText_setOutlineThickness(params->scoreboard.text, 4);
    sfText_setColor(params->scoreboard.text, color);
    sfText_setPosition(params->scoreboard.text, pos);

    if (params->score < 10)
        score_1(params);
    else if (params->score < 100)
        score_10(params);

    sfRenderWindow_drawText(params->window, params->scoreboard.text, NULL);
}