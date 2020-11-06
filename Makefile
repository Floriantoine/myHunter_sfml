##
## EPITECH PROJECT, 2018
## delivery
## File description:
## Makefile
##

resources	=		src/init/init_1stra.c						\
			src/init/init_1strg.c 						\
			src/init/init_2strg.c						\
			src/init/init_duck.c						\
			src/init/init_mush.c 						\
			src/anim.c									\
			src/body.c									\
			src/destroy_sound.c 						\
			src/duck.c									\
			src/level1/endtime.c						\
			src/level1/endlevel.c 						\
			src/level1/level1.c							\
			src/main.c									\
			src/menu/menu.c								\
			src/menu/click_menu.c 						\
			src/menu/key_menu.c 						\
			src/anim_back.c 							\
			src/level1/open.c							\
			src/level1/evt_level1.c							\
			src/randy.c									\
			src/coin.c 									\
			src/mun.c 									\
			src/life.c 									\
			src/slowmo.c								\
			src/value.c									\
			src/pause/pause.c 							\
			src/pause/evt.c 							\
			src/pause/click.c 							\
			src/timer.c 								\
			src/double.c 								\
			src/init/init_life.c 						\
			src/score.c 								\
			src/boo.c 									\
			src/pipe_plaine_cloud.c 					\
			src/mushroom.c								\
			src/verif.c

OBJ     =   $(resources:.c=.o)

NAME    =   my_hunter
all:$(NAME)

$(NAME):$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-window -lcsfml-system -lcsfml-graphics -lcsfml-audio

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean	all

.PHONY:	all	clean fclean	re
