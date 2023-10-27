#include "../include/all.hpp"

void dead_mun(param_t *params, int a, int y, lib_t *strG)
{
    sf::Vector2f scale = {0.2, 0.2};

    while (a < 3) {
        sf::Vector2f pos = {1800, y};
        strG->mun.SpB.setTexture(strG->mun.TexB, true);
        strG->mun.SpB.setScale(scale);
        strG->mun.SpB.setPosition(pos);
        params->window.get()->draw(strG->mun.SpB);
        y = y - 130;
        a++;
    }
}

void mun(lib_t *strG, param_t *params, int mun)
{
    int a = 0;
    int y = 900;
    sf::Vector2f scale = {0.2, 0.2};

    while (a != mun) {
        sf::Vector2f pos = {1800, y};
        strG->mun.Sp.setTexture(strG->mun.Tex, true);
        strG->mun.Sp.setScale(scale);
        strG->mun.Sp.setPosition(pos);
        params->window.get()->draw(strG->mun.Sp);
        y = y - 130;
        a++;
    }
    dead_mun(params, a, y, strG);
}
