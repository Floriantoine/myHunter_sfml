#include "../../include/all.hpp"

void life_init(param_t *params)
{
    params->life.Tex.loadFromFile(
        params->executablePath + "../../Hunter/resources/life.png");
    params->life.TexB.loadFromFile(
        params->executablePath + "../../Hunter/resources/lifeB.png");
    params->life.life = 10;
}
