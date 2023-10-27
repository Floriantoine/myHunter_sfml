#include "all.hpp"
#include <SFML/Audio.hpp>
#include <memory>
#ifndef STRUC_PARAM_H
#    define STRUC_PARAM_H

typedef struct
{
    sf::Clock clock;
    sf::Time time;
    int on_off;
} duel_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    sf::Sprite SpB;
    sf::Texture TexB;
    int x;
    int y;
    int life;
} life_t;

typedef struct
{
    sf::View *view;
    sf::FloatRect rec;
    int on_off;
} view_t;

typedef struct
{
    int x;
    int y;
} mouse_t;

typedef struct
{
    sf::Sprite Sp;
    sf::Texture Tex;
    sf::Event event;
    int on_off;
} pause_t;

typedef struct
{
    sf::Text text;
} text_t;

typedef struct
{
    sf::Clock clock;
    sf::Time time;
    std::unique_ptr<sf::RenderWindow> window;
    sf::Event event;
    sf::SoundSource::Status could;
    sf::Font font;
    view_t cam;
    mouse_t mouse;
    pause_t pause;
    text_t scoreboard;
    text_t timeinfo;
    duel_t duel;
    int reload_shoot;
    int verif;
    life_t life;
    int loop;
    int loop2;
    int score;
    int level;
    int intro;
    std::string executablePath;
} param_t;
#endif
