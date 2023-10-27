#include "../include/all.hpp"

void print_double(param_t *params)
{
    if (params->duel.on_off > 1) {
        sf::Vector2f pos = {800, 200};
        sf::Color color = {90, 255, 50, 180};
        sf::Color BLACK = {255, 255, 255, 255};
        char timer[] = "+1 LIFE";
        sf::Text text;
        text.setOutlineColor(BLACK);
        text.setOutlineThickness(4);
        text.setPosition(pos);
        text.setString(timer);
        text.setColor(color);
        text.setFont(params->font);
        text.setCharacterSize(60);
        params->window.get()->draw(text);

        if (params->duel.on_off > 0)
            params->duel.on_off--;
    }
}

void double_kill(param_t *params, duck_t *duck)
{
    params->duel.time = params->duel.clock.getElapsedTime();

    int time_kill = params->duel.time.asSeconds();
    if (time_kill < 1 && params->life.life < 10) {
        params->life.life++;
        params->duel.on_off = 14;
    }
    params->duel.time = params->duel.clock.restart();
}
