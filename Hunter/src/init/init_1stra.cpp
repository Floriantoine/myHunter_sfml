#include "../../include/all.hpp"

void grass_int(anim_t *strA, std::string exePath)
{
    strA->grass.Tex.loadFromFile(exePath + "../../Hunter/resources/grass.png");
    strA->grass.sp_pos = 0;
    strA->grass.y = 640;
    strA->grass.loop = -1;
}

void blood_int(anim_t *strA, std::string exePath)
{
    strA->blood.Tex.loadFromFile(exePath + "../../Hunter/resources/blood.png");
    strA->blood.sp_pos = 100;
    strA->blood.could = 8;
}

void coin_int(anim_t *strA, std::string exePath)
{
    strA->coin.Tex.loadFromFile(exePath + "../../Hunter/resources/coin.png");
    strA->coin.sp_pos = 0;
    strA->coin.x = 670;
    strA->coin.y = 560;
    strA->coin.loop = 5;
}

void boo_int(anim_t *strA, std::string exePath)
{
    strA->boo.Tex.loadFromFile(exePath + "../../Hunter/resources/boo.png");
    strA->boo.TexL.loadFromFile(exePath + "../../Hunter/resources/booL.png");
    strA->boo.sp_pos = 0;
    strA->boo.x = -10;
    strA->boo.y = 400;
    strA->boo.L_R = 1;
    strA->boo.U_D = -1;
    strA->boo.loop = 0;
    strA->boo.mvt = 10;
}

void init_1stra(anim_t *strA, std::string exePath)
{
    coin_int(strA, exePath);
    blood_int(strA, exePath);
    grass_int(strA, exePath);
    boo_int(strA, exePath);
    init_mushroom(strA, exePath);
}
