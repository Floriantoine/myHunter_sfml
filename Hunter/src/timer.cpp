#include "../include/all.hpp"

void time_out(param_t *params)
{
    params->time = params->clock.getElapsedTime();
    int print = params->time.asSeconds();
    sf::Vector2f pos = {680, 10};
    sf::Color color = {200, 0, 0, 180};
    char timer[] = "TIMER: 00";
    timer[8] = (60 - print) / 10 + 48;
    timer[9] = (60 - print) % 10 + 48;
    sf::Text text;
    text.setOutlineColor(sf::Color::Black);
    text.setOutlineThickness(4);
    text.setPosition(pos);
    text.setString(timer);
    text.setColor(color);
    text.setFont(params->font);
    text.setCharacterSize(90);
    params->window.get()->draw(text);
}
