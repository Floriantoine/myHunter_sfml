SRC	=		src/init/init_1stra.cpp						\
			src/init/init_1strg.cpp 						\
			src/init/init_2strg.cpp						\
			src/init/init_duck.cpp						\
			src/init/init_mush.cpp 						\
			src/anim.cpp									\
			src/body.cpp									\
			src/destroy_sound.cpp 						\
			src/duck.cpp									\
			src/level1/endtime.cpp						\
			src/level1/level1.cpp							\
			src/main.cpp									\
			src/menu/menu.cpp								\
			src/menu/click_menu.cpp 						\
			src/menu/key_menu.cpp 						\
			src/anim_back.cpp 							\
			src/level1/open.cpp							\
			src/level1/evt_level1.cpp							\
			src/randy.cpp									\
			src/coin.cpp 									\
			src/mun.cpp 									\
			src/life.cpp 									\
			src/slowmo.cpp								\
			src/value.cpp									\
			src/pause/pause.cpp 							\
			src/pause/evt.cpp 							\
			src/pause/click.cpp 							\
			src/timer.cpp 								\
			src/double.cpp 								\
			src/init/init_life.cpp 						\
			src/score.cpp 								\
			src/boo.cpp 									\
			src/pipe_plaine_cloud.cpp 					\
			src/mushroom.cpp								\
			src/verif.cpp

OBJ_SRC		=	$(SRC:.cpp=.o)

NAME		=	 Hunter

CC			=	g++

override CXXFLAGS	+=	-Wall -Wextra -I ./include -lsfml-window -lsfml-system -lsfml-graphics -lsfml-audio


$(NAME): $(OBJ_SRC)
	@echo -e "\e[36;1m\nMAKE $(NAME)\n\e[0m"
	@$(CC) $(CXXFLAGS) $^ -o $@

all:$(NAME)

clean:
	@echo -e "\e[31;1mCLEANING OBJ: $(NAME)\e[0m"
	@rm -rf $(OBJ_SRC)

fclean: clean
	@echo -e "\033[31;1mCLEANING: $(NAME)\033[0m"
	@rm -f $(NAME)

re:	fclean	all

.PHONY:	all	clean	fclean	re
