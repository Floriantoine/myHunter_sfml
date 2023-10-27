#include "../../include/all.hpp"

void explo_deco(lib_t *strG, std::string executablePath)
{
    strG->explo.Tex.loadFromFile(
        executablePath + "../../Hunter/resources/explo.png");
    strG->deco.Tex1.loadFromFile(
        executablePath + "../../Hunter/resources/deco.png");
}

void back_int(lib_t *strG, std::string executablePath)
{
    strG->back.Tex1.loadFromFile(
        executablePath + "../../Hunter/resources/BackCloud.png");
    strG->back.Sp1.setTexture(strG->back.Tex1, true);
    strG->back.Tex2.loadFromFile(
        executablePath + "../../Hunter/resources/back2.png");
    strG->back.sp_pos1 = 0;
    strG->back.x1 = 1;
    strG->back.y1 = 1;
}

void cloud_init(lib_t *strG, std::string executablePath)
{
    strG->cloud1.Tex.loadFromFile(
        executablePath + "../../Hunter/resources/cloud_one.png");
    strG->cloud2.Tex.loadFromFile(
        executablePath + "../../Hunter/resources/cloud_two.png");
    strG->cloud3.Tex.loadFromFile(
        executablePath + "../../Hunter/resources/cloud3.png");
}

void plaine_init(lib_t *strG, std::string executablePath)
{
    strG->plaine.Tex.loadFromFile(
        executablePath + "../../Hunter/resources/plaine.png");
    strG->plaine.x = 405;
    strG->plaine.y = 568;
}

void init_1strg(lib_t *strG, std::string executablePath)
{
    plaine_init(strG, executablePath);
    explo_deco(strG, executablePath);
    back_int(strG, executablePath);
    cloud_init(strG, executablePath);
}
