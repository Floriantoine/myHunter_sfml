#include "../../include/all.hpp"

void print_level1(param_t *params, lib_t *strG, anim_t *strA)
{
    sf::RenderWindow *window = params->window.get();
    backcloud(strG, params, strA);
    background(strG, params);
    score(params);
    mun(strG, params, params->reload_shoot);
    life(params);
    grass(strG, params, strA);
    pipe(strG, params);
    coin(strG, params, &strA->coin);
    plaine(strG, params);
    time_out(params);
    duck(strG, params, &strA->duck1);
    duck(strG, params, &strA->duck2);
    duck(strG, params, &strA->duck3);
    blood(strG, params, strA);
    strG->cloud1.display(window);
    strG->cloud2.display(window);
    strG->cloud3.display(window);
    more_one(strA, params);
    print_double(params);
    hit(strG, params);
}

void reload_test(param_t *params, sound_t *sound, lib_t *strG, int time_mun)
{
    if (params->reload_shoot == 0 && time_mun > 1) {
        sound->reload.play();
        strG->mun.clock.restart();
        params->reload_shoot = 3;
    }
}

void sound_time(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound)
{
    int time_mun = 0;
    int out_time = 0;
    strG->mun.time_mun = strG->mun.clock.getElapsedTime();
    time_mun = strG->mun.time_mun.asSeconds();
    reload_test(params, sound, strG, time_mun);
    if (sound->level1.getStatus() != sf::SoundSource::Status::Playing &&
        params->level == 1)
        sound->level1.play();
    params->time = params->clock.getElapsedTime();
    out_time = params->time.asSeconds();
    if (out_time > 60 || params->life.life == 0) {
        print_level1(params, strG, strA);
        params->window.get()->display();
        endtime(params, sound);
    }
}

void level1(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound)
{
    params->reload_shoot = 3;

    params->window.get()->setFramerateLimit(30);
    while (params->level == 1) {
        while (params->window.get()->pollEvent(params->event)) {
            evt_level1(params, strG, strA, sound);
        }
        value(strA, params);
        sound_time(params, strG, strA, sound);
        print_level1(params, strG, strA);
        params->window.get()->display();
    }
}
