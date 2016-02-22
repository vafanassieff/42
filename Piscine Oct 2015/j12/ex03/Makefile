# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/19 18:57:43 by vafanass          #+#    #+#              #
#    Updated: 2016/02/19 21:16:20 by vafanass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_hexdump
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC = main.c \
	  column.c \
	  aff_str.c \
	  putnbr_base.c \
	  ll.c \
	  norme.c
OBJ = main.o \
	  column.o \
	  aff_str.o \
	  putnbr_base.o \
	  ll.o \
	  norme.o
HDR = -I include.h
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
