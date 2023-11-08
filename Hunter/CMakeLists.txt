cmake_minimum_required(VERSION 3.5)

project("R-type's client" LANGUAGES CXX)

set(SRC_DIR src/)


set(WARNING_FLAG
        -Wall
        -Wextra
        -Wpedantic
)

set(SRCS
  anim_back.cpp
  anim.cpp
  body.cpp
  boo.cpp
  coin.cpp
  destroy_sound.cpp
  double.cpp
  duck.cpp
  life.cpp
  main.cpp
  mun.cpp
  mushroom.cpp
  pipe_plaine_cloud.cpp
  randy.cpp
  score.cpp
  slowmo.cpp
  timer.cpp
  value.cpp
  verif.cpp
  pause/click.cpp
  pause/evt.cpp
  pause/pause.cpp
  menu/click_menu.cpp
  menu/key_menu.cpp
  menu/menu.cpp
  level1/endlevel.cpp
  level1/endtime.cpp
  level1/evt_level1.cpp
  level1/level1.cpp
  level1/open.cpp
  init/init_1stra.cpp
  init/init_1strg.cpp
  init/init_2strg.cpp
  init/init_duck.cpp
  init/init_life.cpp
  init/init_mush.cpp
  class/Cloud.cpp
  class/Sound.cpp
)

list(TRANSFORM SRCS PREPEND ${SRC_DIR})

add_executable(my_game ${SRCS})

target_include_directories(my_game PRIVATE
        ./src
        ./src/init
        ./src/level1
        ./src/menu
        ./src/pause
        ./include
)

target_link_libraries(my_game PRIVATE
  sfml-graphics
  sfml-audio
)
