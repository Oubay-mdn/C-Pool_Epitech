##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC     =       calc.c 			\
				eval_expr.c		\
				my_getnbr.c		\
				calc_2.c		\
				my_put_nbr.c	\
				my_putchar.c	\

OBJ     =       $(SRC:.c=.o)

NAME    =       xp

all: $(NAME)

$(NAME):        $(OBJ)
	gcc -g3 -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
