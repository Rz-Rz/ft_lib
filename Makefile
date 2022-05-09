# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 15:38:18 by kdhrif            #+#    #+#              #
#    Updated: 2022/05/09 15:38:54 by kdhrif           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(wildcard *.c) #equivalent de *.c
OBJ = $(SRC:.c=.o) #comme source, mais on remplace les .c par des .o
CC = gcc -Wall -Wextra -Werror


all: $(NAME)


$(NAME) : $(OBJ)
	ar -cvq $(NAME) $(OBJ)

%.o : %.c 
	$(CC) -o $@ -c $< 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
