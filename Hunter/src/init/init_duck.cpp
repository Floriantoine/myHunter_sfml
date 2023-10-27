#include "../../include/all.hpp"

void init_duck1(anim_t *strA)
{
    strA->duck1.Tex.loadFromFile("../Hunter/resources/turtle.png");
    strA->duck1.TexL.loadFromFile("../Hunter/resources/turtleL.png");
    strA->duck1.Sp.setTexture(strA->duck1.Tex, true);
    strA->duck1.sp_pos = 0;
    strA->duck1.x = 1910;
    strA->duck1.y = 400;
    strA->duck1.mvt = 8;
    strA->duck1.type = 0;
    strA->duck1.L_R = 1;
    strA->duck1.loop = 4;
}

void init_duck2(anim_t *strA)
{
    strA->duck2.Tex.loadFromFile("../Hunter/resources/turtle.png");
    strA->duck2.TexL.loadFromFile("../Hunter/resources/turtleL.png");
    strA->duck2.Sp.setTexture(strA->duck2.Tex, true);
    strA->duck2.sp_pos = 0;
    strA->duck2.x = 10;
    strA->duck2.type = 0;
    strA->duck2.y = 700;
    strA->duck2.mvt = 8;
    strA->duck2.L_R = 1;
    strA->duck2.loop = 26;
}

void init_duck3(anim_t *strA)
{
    strA->duck3.Tex.loadFromFile("../Hunter/resources/turtle.png");
    strA->duck3.TexL.loadFromFile("../Hunter/resources/turtleL.png");
    strA->duck3.Sp.setTexture(strA->duck3.Tex, true);
    strA->duck3.sp_pos = 0;
    strA->duck3.x = 10;
    strA->duck3.y = 590;
    strA->duck3.mvt = 8;
    strA->duck3.L_R = 1;
    strA->duck3.type = 1;
    strA->duck3.loop = 12;
}

void init_duck(anim_t *strA)
{
    init_duck1(strA);
    init_duck2(strA);
    init_duck3(strA);
}
