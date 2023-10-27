#include "../../include/all.hpp"

void mun_hit(lib_t *strG, std::string exePath)
{
    strG->mun.Tex.loadFromFile(exePath + "../../Hunter/resources/mun.png");
    strG->mun.TexB.loadFromFile(exePath + "../../Hunter/resources/munB.png");
    strG->hit.Tex.loadFromFile(exePath + "../../Hunter/resources/hit.png");
}

void pipe_init(lib_t *strG, std::string exePath)
{
    strG->pipe.Tex.loadFromFile(exePath + "../../Hunter/resources/pipe.png");
}

void home(lib_t *strG, std::string exePath)
{
    strG->menu.Tex.loadFromFile(
        exePath + "../../Hunter/resources/menuback.jpg");
}

void init_2strg(lib_t *strG, std::string exePath)
{
    mun_hit(strG, exePath);
    home(strG, exePath);
    pipe_init(strG, exePath);
}
