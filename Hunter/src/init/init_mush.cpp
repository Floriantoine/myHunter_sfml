#include "../../include/all.hpp"

void init_mushroom(anim_t *strA)
{
    strA->mushroom.Tex.loadFromFile("../Hunter/resources/mushroom.png");
    strA->mushroom.Sp.setTexture(strA->mushroom.Tex, true);
    strA->mushroom.x = 400;
    strA->mushroom.y = -10;
    strA->mushroom.mvt = 20;
    strA->mushroom.L_R = 0;
    strA->mushroom.U_D = 1;
}
