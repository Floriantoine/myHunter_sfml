#include "../../include/all.hpp"

void life_init(param_t *params)
{
    params->life.Tex.loadFromFile("../Hunter/resources/life.png");
    params->life.TexB.loadFromFile("../Hunter/resources/lifeB.png");
    params->life.life = 10;
}
