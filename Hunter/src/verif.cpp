#include "../include/all.hpp"

void reset(duck_t *duck, param_t *params)
{
    int random = 0;

    random = randy(-1, 1, 0);
    if (random == -1)
        duck->x = -100;
    else
        duck->x = params->window.get()->getSize().x;
    duck->y = randy(50, 700, 0);
}

int verif_coord(
    duck_t *duck, anim_t *strA, lib_t *strG, param_t *params, sound_t *sound)
{
    sf::FloatRect hitBounds = strG->hit.Sp.getGlobalBounds();
    sf::FloatRect duckBounds = duck->Sp.getGlobalBounds();

    if (hitBounds.intersects(duckBounds)) {
        strA->blood.could = 0;
        strA->blood.x = params->mouse.x;
        strA->blood.y = params->mouse.y;
        sound->death.stop();
        sound->death.play();
        params->score = params->score + 1;
        strA->more_one.x = duck->x;
        strA->more_one.y = duck->y;
        strA->more_one.loop = 0;
        reset(duck, params);
        double_kill(params, duck);
        return (1);
    }
    return (0);
}
