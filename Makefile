##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	*.c

OBJ = $(SRC:.c=.o)

NAME	=	my_runner

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

$(OBJ):
	gcc -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
