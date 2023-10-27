#include "../../include/all.hpp"

void mun_hit(lib_t *strG)
{
    strG->mun.Tex.loadFromFile("../Hunter/resources/mun.png");
    strG->mun.TexB.loadFromFile("../Hunter/resources/munB.png");
    strG->hit.Tex.loadFromFile("../Hunter/resources/hit.png");
}

void pipe_init(lib_t *strG)
{
    strG->pipe.Tex.loadFromFile("../Hunter/resources/pipe.png");
}

void home(lib_t *strG)
{
    strG->menu.Tex.loadFromFile("../Hunter/resources/menuback.jpg");
}

void init_2strg(lib_t *strG)
{
    mun_hit(strG);
    home(strG);
    pipe_init(strG);
}
