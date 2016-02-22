# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/19 18:54:25 by vafanass          #+#    #+#              #
#    Updated: 2016/02/19 18:54:27 by vafanass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC = ft_tail.c
OBJ = ft_tail.o
HDR = -I j12.h
RM = rm -f

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAG) $(SRC) $(HDR)
			@$(CC) $(OBJ) -o $(NAME)

clean:
		@$(RM) $(OBJ)

fclean: clean
		@$(RM) $(NAME)

re: fclean all
