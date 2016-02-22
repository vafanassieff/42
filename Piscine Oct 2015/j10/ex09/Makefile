# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 21:56:56 by vafanass          #+#    #+#              #
#    Updated: 2016/02/15 21:17:28 by vafanass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_advanced_do-op
FLAGS = -Wall -Wextra -Werror
OPTS = -o $(NAME)
SRC = ft_putchar.c ft_putstr.c ft_ops.c ft_putnbr.c ft_main.c ft_atoi.c ft_strcmp.c
OBJ =

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) $(SRC) $(OPTS)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
