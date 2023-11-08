#include "../include/all.hpp"

void check_mvt(duck_t *duck, param_t *params)
{
    sf::RenderWindow *window = params->window.get();
    if (duck->x + duck->mvt >= window->getSize().x)
        duck->L_R = -1;
    if (duck->x + duck->mvt <= 10)
        duck->L_R = 1;
    if (duck->y + duck->mvt >= window->getSize().y)
        duck->U_D = -1;
    if (duck->y + duck->mvt <= 10)
        duck->U_D = 1;
}

void mouvduck(duck_t *duck, param_t *params)
{
    check_mvt(duck, params);
    if (duck->loop >= 40) {
        if (duck->type == 1) {
            duck->L_R = randy(-2, 2, 0);
            duck->U_D = randy(-2, 2, 4);
        } else {
            duck->L_R = randy(-1, 1, 0);
            duck->U_D = randy(-1, 1, 4);
        }
        duck->loop = 0;
    }
    duck->x = duck->x + (duck->mvt * duck->L_R);
    duck->y = duck->y + duck->mvt * duck->U_D;
    duck->loop++;
}

void sprite_duck(duck_t *duck, param_t *params)
{
    if (params->loop == 3) {
        duck->sp_pos += 1;
    }
    if (duck->sp_pos == 5) {
        duck->sp_pos = 0;
    }
}

void duck_draw(duck_t *duck, param_t *params)
{
    sf::Vector2f pos = {duck->x, duck->y};
    sf::IntRect rect = {duck->sp_pos * 70, 0, 50, 50};
    sf::Vector2f scale = {3, 3};
    sf::Texture texture;

    if (duck->L_R > 0) {
        duck->Sp.setTexture(duck->Tex, true);
    } else {
        duck->Sp.setTexture(duck->TexL, true);
    }
    duck->Sp.setTextureRect(rect);
    duck->Sp.setPosition(pos);
    duck->Sp.setScale(scale);
    params->window.get()->draw(duck->Sp);
}

void duck(lib_t *strG, param_t *params, duck_t *duck)
{
    sprite_duck(duck, params);
    mouvduck(duck, params);
    duck_draw(duck, params);
}
