/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** score.c
*/

#include "../include/all.hpp"

void more_one(anim_t *strA, param_t *params)
{
    sf::Vector2f pos = {strA->more_one.x, strA->more_one.y};
    sf::Color color = {255, 255, 255, 255};
    int rot = randy(-90, 90, 0);
    char timer[] = "+ 1";
    strA->more_one.loop++;
    if (strA->more_one.loop > 8)
        strA->more_one.x = -200;
    sf::Text text;
    text.setOutlineColor(sf::Color::Black);
    text.setOutlineThickness(15);
    text.setPosition(pos);
    text.setString(timer);
    text.setRotation(rot);
    text.setColor(color);
    text.setFont(params->font);
    text.setCharacterSize(90);
    params->window.get()->draw(text);
}

void score_1(param_t *params)
{
    char score_char[] = "SCORE: 000";
    score_char[9] = params->score + '0';
    params->scoreboard.text.setString(score_char);
}

void score_10(param_t *params)
{
    char score_char[] = "SCORE: 000";
    score_char[9] = params->score % 10 + '0';
    score_char[8] = params->score / 10 + '0';
    params->scoreboard.text.setString(score_char);
}

void score(param_t *params)
{
    sf::Vector2f pos = {790, 110};
    sf::Color color = {0, 0, 0, 200};
    params->scoreboard.text.setFont(params->font);
    params->scoreboard.text.setCharacterSize(50);
    params->scoreboard.text.setOutlineColor(sf::Color::White);
    params->scoreboard.text.setOutlineThickness(4);
    params->scoreboard.text.setColor(color);
    params->scoreboard.text.setPosition(pos);

    if (params->score < 10)
        score_1(params);
    else if (params->score < 100)
        score_10(params);

    params->window.get()->draw(params->scoreboard.text);
}
