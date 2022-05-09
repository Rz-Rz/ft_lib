SRC = $(wildcard *.c) #equivalent de *.c
OBJ = $(SRC:.c=.o) #comme source, mais on remplace les .c par des .o
CC = gcc -Wall -Wextra -Werror


all: libft.a 

libft.a : $(OBJ)
	ar -cvq libft.a $(OBJ)
%.o : %.c 
	$(CC) -o $@ -c $< #fait reference a %.o et fait reference a la premiere dependance


clean:
	rm $(OBJ)


