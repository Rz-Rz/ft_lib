SRC = $(wildcard *.c) #equivalent de *.c
OBJ = $(SRC:.c=.o) #comme source, mais on remplace les .c par des .o
CC = gcc -Wall -Wextra -Werror
NAME = libft.a


all: $(NAME)


$(NAME) : $(OBJ)
	ar -cvq $(NAME) $(OBJ)

%.o : %.c 
	$(CC) -o $@ -c $< 

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
