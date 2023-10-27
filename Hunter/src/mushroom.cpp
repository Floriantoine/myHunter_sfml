#include "../include/all.hpp"

void check_plat(mushroom_t *mushroom)
{
    if ((mushroom->x > 30 && mushroom->x < 530 ||
            mushroom->x > 1320 && mushroom->x < 1760) &&
        (mushroom->y > 590 && mushroom->y < 650)) {
        mushroom->L_R = randy(-1, 1, 0);
        mushroom->U_D = 0;
    } else if (mushroom->y > 600 && mushroom->y < 650) {
        mushroom->U_D = 1;
        mushroom->L_R = 0;
    }
}

void check_mvtmush(mushroom_t *mushroom)
{
    if (mushroom->x > 1950 || mushroom->x < -20) {
        mushroom->x = randy(40, 1900, 0);
        mushroom->y = -10;
        mushroom->U_D = 1;
        mushroom->L_R = 0;
    } else if (mushroom->y >= 890 && mushroom->L_R == 0) {
        mushroom->U_D = 0;
        mushroom->L_R = randy(-1, 1, 0);
    }
}

void mouvmush(mushroom_t *mushroom)
{
    check_plat(mushroom);
    check_mvtmush(mushroom);
    mushroom->x = mushroom->x + (mushroom->mvt * mushroom->L_R);
    mushroom->y = mushroom->y + mushroom->mvt * mushroom->U_D;
}

void mushroom(anim_t *strA, param_t *params)
{
    mouvmush(&strA->mushroom);
    sf::Vector2f pos = {strA->mushroom.x, strA->mushroom.y};
    sf::Vector2f scale = {0.3, 0.3};

    strA->mushroom.Sp.setTexture(strA->mushroom.Tex, true);
    strA->mushroom.Sp.setScale(scale);
    strA->mushroom.Sp.setPosition(pos);
    params->window.get()->draw(strA->mushroom.Sp);
}
