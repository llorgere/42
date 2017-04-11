# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llorgere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/10 15:56:44 by llorgere          #+#    #+#              #
#    Updated: 2017/04/10 15:57:07 by llorgere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_swap.c srcs/ft_strcmp.c
HEADERS = includes
OBJ = ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : function.o
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

function.o :
	$(CC) $(CFLAGS) $(SRC) -I $(HEADERS)

clean :
	/bin/rm -rf $(OBJ)

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all
