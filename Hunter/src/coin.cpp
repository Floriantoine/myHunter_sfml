#include "../include/all.hpp"

void sprite_coin(coin_t *coin, param_t *params)
{
    if (params->loop2 >= coin->loop) {
        coin->sp_pos = coin->sp_pos + 170;
        params->loop2 = 0;
    }
    if (coin->sp_pos > 600) {
        coin->sp_pos = 0;
        coin->loop++;
    }
    if (coin->loop > 5)
        params->loop2 = 0;
}

void coin(lib_t *strG, param_t *params, coin_t *coin)
{
    sprite_coin(coin, params);
    sf::Vector2f pos = {coin->x, coin->y};
    sf::IntRect rect = {coin->sp_pos, 0, 180, 200};
    coin->Sp.setTexture(coin->Tex, true);
    coin->Sp.setTextureRect(rect);
    coin->Sp.setPosition(pos);
    params->window.get()->draw(coin->Sp);
}
