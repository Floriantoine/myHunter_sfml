#include "../../include/all.hpp"

void explo_deco(lib_t *strG)
{
    strG->explo.Tex.loadFromFile("../Hunter/resources/explo.png");
    strG->deco.Tex1.loadFromFile("../Hunter/resources/deco.png");
}

void back_int(lib_t *strG)
{
    strG->back.Tex1.loadFromFile("../Hunter/resources/BackCloud.png");
    strG->back.Sp1.setTexture(strG->back.Tex1, true);
    strG->back.Tex2.loadFromFile("../Hunter/resources/back2.png");
    strG->back.sp_pos1 = 0;
    strG->back.x1 = 1;
    strG->back.y1 = 1;
}

void cloud_init(lib_t *strG)
{
    strG->cloud1.Tex.loadFromFile("../Hunter/resources/cloud_one.png");
    strG->cloud2.Tex.loadFromFile("../Hunter/resources/cloud_two.png");
    strG->cloud3.Tex.loadFromFile("../Hunter/resources/cloud3.png");
}

void plaine_init(lib_t *strG)
{
    strG->plaine.Tex.loadFromFile("../Hunter/resources/plaine.png");
    strG->plaine.x = 405;
    strG->plaine.y = 568;
}

void init_1strg(lib_t *strG)
{
    plaine_init(strG);
    explo_deco(strG);
    back_int(strG);
    cloud_init(strG);
}
