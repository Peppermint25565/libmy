##
## EPITECH PROJECT, 2024
## make
## File description:
## make
##

SRC	=	 $(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(wildcard *.o)

fclean: clean
	rm -f $(NAME)


re: fclean all
