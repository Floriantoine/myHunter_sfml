#include "struc.hpp"
#include "struc_param.hpp"
#ifndef MY_H
#    define MY_H
void evt_level1(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound);
void more_one(anim_t *strA, param_t *params);
void double_kill(param_t *params, duck_t *duck);
void life(param_t *params);
void life_init(param_t *params);
void print_double(param_t *params);
void key_menu(param_t *params);
void click_menu(param_t *params);
void endtime(param_t *params, sound_t *sound);
void init_mushroom(anim_t *strA, std::string exePath);
void mushroom(anim_t *strA, param_t *params);
void boo(anim_t *strA, param_t *params);
void time_out(param_t *params);
void click_main(param_t *params, sound_t *sound);
void evt(param_t *params, sound_t *sound);
void pause_main(param_t *params, lib_t *strG, sound_t *sound);
void init_1strg(lib_t *strG, std::string exePath);
void init_1stra(anim_t *strA, std::string exePath);
void init_2strg(lib_t *strG, std::string exePath);
void init_duck(anim_t *strA, std::string exePath);
void destroy_sound(sound_t *sound);
void menu(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound);
void plaine(lib_t *strG, param_t *params);
void coin(lib_t *strG, param_t *params, coin_t *coin);
void duck(lib_t *strG, param_t *params, duck_t *duck);
void background(lib_t *strG, param_t *params);
void mun(lib_t *strG, param_t *params, int mun);
void hit(lib_t *strG, param_t *params);
int randy(int main, int max, int interdiction);
void explo(lib_t *strG, param_t *params, anim_t *strA);
void blood(lib_t *strG, param_t *params, anim_t *strA);
void score(param_t *params);
void grass(lib_t *strG, param_t *params, anim_t *strA);
int body(param_t *params, lib_t *strG, sound_t *sound, anim_t *strA);
void value(anim_t *strA, param_t *params);
void pipe(lib_t *strG, param_t *params);
void open_level1(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound);
void backcloud(lib_t *strG, param_t *params, anim_t *strA);
// void endlevel(param_t *params, lib_t *strG, anim_t *strA);
void print_level1(param_t *params, lib_t *strG, anim_t *strA);
void level1(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound);
// void level2(param_t *params, lib_t *strG, anim_t *strA, sound_t *sound);
void backhouse(lib_t *strG, param_t *params, anim_t *strA);
int verif_coord(
    duck_t *duck, anim_t *strA, lib_t *strG, param_t *params, sound_t *sound);
void slowmo(param_t *params, lib_t *strG, anim_t *strA);
#endif
