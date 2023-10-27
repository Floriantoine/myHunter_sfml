#include "../../include/all.hpp"

void end_score(param_t *params)
{
    sf::Vector2f pos = {220, 400};
    sf::Color color = {0, 0, 0, 180};
    sf::Color outline = {255, 255, 255, 255};
    char timer[29] = "YOUR SCORE: 000 -> RESTART ?";
    timer[13] = (params->score / 10) + 48;
    timer[14] = (params->score % 10) + 48;
    sf::Text text;
    text.setOutlineColor(outline);
    text.setOutlineThickness(4);
    text.setPosition(pos);
    text.setString(timer);
    text.setColor(color);
    text.setFont(params->font);
    text.setCharacterSize(90);
    params->window.get()->draw(text);
    params->window.get()->display();
}

void evt_endtime(param_t *params, int *restart)
{
    if (params->event.type == sf::Event::KeyPressed) {
        if (params->event.key.code == sf::Keyboard::Escape) {
            params->level = 0;
            *restart = 1;
        } else if (params->event.key.code == sf::Keyboard::Return) {
            params->pause.on_off = 0;
            params->clock.restart();
            params->score = 0;
            params->level = 99;
            params->intro = 1;
            *restart = 1;
        }
    }
}

void endtime(param_t *params, sound_t *sound)
{
    int restart = 0;
    end_score(params);

    while (restart == 0) {
        while (params->window.get()->pollEvent(params->event)) {
            evt_endtime(params, &restart);
        }
    }
    sound->level1.pause();
}
