# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/02 17:13:40 by vafanass          #+#    #+#              #
#    Updated: 2016/02/15 21:08:08 by vafanass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror -I $(PATH_HEADER)  -c
PATH_SRC = ./srcs/
PATH_HEADER = ./includes/
SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c\
	  $(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c
OBJ = ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
