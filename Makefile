# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdhrif <kdhrif@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/09 15:38:18 by kdhrif            #+#    #+#              #
#    Updated: 2023/01/07 10:07:02 by kdhrif           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft.a
TEST = libft.a
HEADERS = libft.h
CC = gcc -Wall -Wextra -Werror
BONUS                   =       ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstmap.c ft_lstnew.c ft_lstsize.c
SRCS                    =       ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
				ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c ft_strcmp.c \
				ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
				ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
				ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
				ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
				ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c \
BONUS_OBJ = $(BONUS:.c=.o)
	OBJ = $(SRCS:.c=.o)

all: $(LIBFT)

re: fclean all

$(LIBFT) : $(OBJ)
	ar rcs $@ $^

bonus: $(LIBFT) $(BONUS_OBJ)
	ar rcs $(LIBFT) $(BONUS_OBJ)

%.o:%.c $(HEADERS) Makefile
	$(CC) -c $< -o $@ 

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(LIBFT)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(BONUS_OBJ)

.PHONY: re all clean fclean bonus

