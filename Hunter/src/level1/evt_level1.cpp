#include "../../include/all.hpp"

void verif_grass(param_t *params, anim_t *strA)
{
    if (params->mouse.x > 1290 && params->mouse.x < 1416 &&
        params->mouse.y > 623 && params->mouse.y < 705) {
        strA->grass.loop = strA->grass.loop * -1;
        params->life.life = params->life.life + 2;
    }
}

void verif_coin(param_t *params, anim_t *strA)
{
    if (params->mouse.x > 690 && params->mouse.x < 780 &&
        params->mouse.y > 613 && params->mouse.y < 700) {
        strA->coin.loop = 1;
        params->life.life = params->life.life + 1;
    }
}

void mouse_button(param_t *params, anim_t *strA, lib_t *strG, sound_t *sound)
{
    params->reload_shoot--;
    print_level1(params, strG, strA);
    params->verif = 0;
    params->verif += verif_coord(&strA->duck1, strA, strG, params, sound);
    params->verif += verif_coord(&strA->duck2, strA, strG, params, sound);
    params->verif += verif_coord(&strA->duck3, strA, strG, params, sound);
    if (params->verif == 0) {
        sound->damage.play();
        params->life.life--;
    }
    verif_grass(params, strA);
    verif_coin(params, strA);
}

void evt_key(param_t *params, anim_t *strA, lib_t *strG, sound_t *sound)
{
    if (params->event.key.code == sf::Keyboard::Escape) {
        sound->level1.pause();
        pause_main(params, strG, sound);
    }
    if (params->event.key.code == sf::Keyboard::R) {
        params->reload_shoot = 0;
    }
    if (params->event.key.code == sf::Keyboard::X) {
        slowmo(params, strG, strA);
    }
}

void evt_level1(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound)
{
    params->verif = 0;

    if (params->event.type == sf::Event::Closed)
        params->level = -1;
    if (params->event.type == sf::Event::MouseMoved) {
        params->mouse.x = params->event.mouseMove.x;
        params->mouse.y = params->event.mouseMove.y;
    }
    if (params->event.type == sf::Event::MouseButtonReleased &&
        params->reload_shoot > 0) {
        sound->shoot.play();
        mouse_button(params, strA, strG, sound);
    }
    if (params->event.type == sf::Event::KeyPressed) {
        evt_key(params, strA, strG, sound);
    }
}
