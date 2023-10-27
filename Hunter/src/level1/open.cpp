/*
** EPITECH PROJECT, 2018
** delivery
** File description:
** open.c
*/

#include "../../include/all.hpp"

void texte(param_t *params, int y, int trans)
{
    sf::Text text;
    sf::Vector2f pos = {720, y};
    sf::Color color = {200, 0, 0, trans};
    char timer[] = "   READY ?";
    text.setPosition(pos);
    text.setString(timer);
    text.setColor(color);
    text.setFont(params->font);
    text.setCharacterSize(60);
    params->window.get()->draw(text);
}

void open_level1(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound)
{
    int y = 700;
    int trans = 255;
    sound->level.play();
    params->intro = 0;

    printf("CC\n");
    while (sound->level.getStatus() != 0) {
        printf("CC1\n");
        y = y - 4.1;
        if (trans > 0 && y < 600)
            trans = trans - 1.25;
        value(strA, params);
        params->clock.restart();
        print_level1(params, strG, strA);
        texte(params, y, trans);
        params->window.get()->display();
    }
    printf("CC2\n");
    sound->start.play();
}
