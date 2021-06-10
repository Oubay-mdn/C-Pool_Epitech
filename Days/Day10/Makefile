##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

CC  =   gcc

SRC =   do-op/do_op.c \

OBJ =   $(SRC:.c=.o)

NAME    =   do_op

CFLAGS  =   -W -Wall -I include/

LDFLAGS =   -L./lib -lmy

all: $(NAME)

$(NAME):    $(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)
	rm -f *~
	cd lib/my/ && make clean

fclean: clean
	rm -f $(NAME)
	cd lib/my/ && make fclean

re: fclean all

.PHONY: all clean fclean re
