#include "../include/all.hpp"

void pipe(lib_t *strG, param_t *params)
{
    sf::Vector2f pos = {1244, 770};
    strG->pipe.Sp.setTexture(strG->pipe.Tex, true);
    strG->pipe.Sp.setPosition(pos);
    params->window.get()->draw(strG->pipe.Sp);
}

void plaine(lib_t *strG, param_t *params)
{
    sf::Vector2f pos = {strG->plaine.x, strG->plaine.y};
    strG->plaine.Sp.setTexture(strG->plaine.Tex, true);
    strG->plaine.Sp.setPosition(pos);
    params->window.get()->draw(strG->plaine.Sp);
}

void cloud(lib_t *strG, param_t *params)
{
    sf::Vector2f pos = {575, 320};
    strG->cloud1.Sp.setTexture(strG->cloud1.Tex, true);
    strG->cloud1.Sp.setPosition(pos);
    params->window.get()->draw(strG->cloud1.Sp);
    sf::Vector2f pos_one = {56, 22};
    strG->cloud2.Sp.setTexture(strG->cloud2.Tex, true);
    strG->cloud2.Sp.setPosition(pos);
    params->window.get()->draw(strG->cloud2.Sp);
    sf::Vector2f pos_two = {1523, 63};
    strG->cloud3.Sp.setTexture(strG->cloud3.Tex, true);
    strG->cloud3.Sp.setPosition(pos);
    params->window.get()->draw(strG->cloud3.Sp);
}
