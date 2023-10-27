#include "../../include/all.hpp"

void endlevel(param_t *params, lib_t *strG, anim_t *strA)
{
    params->window.get()->setFramerateLimit(8);
    sf::Color color = {0, 0, 0};
    explo(strG, params, strA);
    while (strG->back.sp_pos1 < 8000) {
        if (strG->back.sp_pos1 > 5000)
            strG->back.x1 = strG->back.x1 + 600;
        strG->back.sp_pos1 = strG->back.sp_pos1 + 1920;
        backhouse(strG, params, strA);
        print_level1(params, strG, strA);
        params->window.get()->display();
    }
    params->window.get()->setFramerateLimit(30);
}
