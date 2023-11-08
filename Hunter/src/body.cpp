#include "../include/all.hpp"

int body(param_t *params, lib_t *strG, sound_t *sound, anim_t *strA)
{
    sf::RenderWindow *window = params->window.get();
    window->setFramerateLimit(30);
    while (window->isOpen() && params->level >= 0) {
        if (params->level == 0)
            menu(params, strG, strA, sound);
        // if (params->intro != 0)
        // open_level1(params, strG, strA, sound);
        if (params->level == 1) {
            level1(params, strG, strA, sound);
        }
        if (params->level == 99)
            params->level = 1;
        params->life.life = 10;
    }
    window->close();
    destroy_sound(sound);
    return (0);
}
