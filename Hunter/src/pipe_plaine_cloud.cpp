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
