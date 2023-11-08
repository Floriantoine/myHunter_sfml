#include "../include/all.hpp"
#include <iostream>
#include <limits.h>
#include <string>
#include <unistd.h>

std::string getExecutablePath()
{
    char path[PATH_MAX];
    ssize_t count = readlink("/proc/self/exe", path, sizeof(path) - 1);
    if (count != -1) {
        path[count] = '\0';
        return std::string(path);
    }
    return "";
}

void init_tex_sp(lib_t *strG, anim_t *strA, std::string executablePath)
{
    strG->cloud1 = Cloud(
        {575, 320}, executablePath + "../../Hunter/resources/cloud_one.png");
    strG->cloud2 = Cloud(
        {56, 22}, executablePath + "../../Hunter/resources/cloud_two.png");
    strG->cloud3 =
        Cloud({1523, 63}, executablePath + "../../Hunter/resources/cloud3.png");
    init_1strg(strG, executablePath);
    init_2strg(strG, executablePath);
    init_1stra(strA, executablePath);
    init_duck(strA, executablePath);
}

void init_params(param_t *params)
{
    sf::VideoMode mode = {1920, 1080, 32};
    params->score = 0;
    params->loop = 0;
    params->loop2 = 0;
    params->level = 0;
    params->mouse.x = 600;
    params->mouse.y = 600;
    params->intro = 1;
    params->duel.on_off = 0;
    params->font.loadFromFile(
        params->executablePath + "../../Hunter/resources/arial.ttf");
    params->window =
        std::make_unique<sf::RenderWindow>(mode, "HUNTER", sf::Style::Default);
}

void init_sound(sound_t *sound, std::string executablePath)
{
    sound->mario.openFromFile(
        executablePath + "../../Hunter/resources/mario.ogg");
    sound->shoot =
        Sound(executablePath + "../../Hunter/resources/shoot.ogg", 120);
    sound->damage =
        Sound(executablePath + "../../Hunter/resources/damage.ogg", 10);
    sound->reload =
        Sound(executablePath + "../../Hunter/resources/sound/reload.ogg", 120);
    sound->death.openFromFile(
        executablePath + "../../Hunter/resources/sound/death.ogg");
    sound->level1.openFromFile(
        executablePath + "../../Hunter/resources/sound/level1.ogg");
    sound->level1.setLoop(true);
    sound->explode.openFromFile(
        executablePath + "../../Hunter/resources/explode.ogg");
    sound->level.openFromFile(
        executablePath + "../../Hunter/resources/level_sound.ogg");
    sound->start.openFromFile(
        executablePath + "../../Hunter/resources/sound/start.ogg");
    sound->level1.setVolume(10);
}

int main(int argc, char const *argv[])
{
    param_t params;
    lib_t strG;
    sound_t sound;
    anim_t strA;

    std::string executablePath = getExecutablePath();
    size_t pos = executablePath.find("my_game");
    if (pos != std::string::npos) {
        executablePath.replace(pos, 7, "");
    }
    params.executablePath = executablePath;

    init_tex_sp(&strG, &strA, executablePath);
    init_sound(&sound, executablePath);
    init_params(&params);
    life_init(&params);
    body(&params, &strG, &sound, &strA);
}
