#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/02/28 22:51:19 by vafanass          #+#    #+#             *#
#*   Updated: 2016/02/29 15:08:47 by vafanass         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC_NAME = ft_isprint.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isalpha.c \
	ft_isalnum.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_memset.c \
	ft_bzero.c \
	ft_strlen.c \
	ft_strclr.c \
	ft_strnew.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putendl.c \
	ft_putnbr.c \
	ft_atoi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_putendl_fd.c \

OBJ_NAME = $(SRC_NAME:.c=.o)
AR = ar rc
RLIB = ranlib
HDR = -I libft.h
RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAG) $(SRC_NAME)
	@$(AR) $(NAME) $(OBJ_NAME)
	@$(RLIB) $(NAME)

clean:
	@$(RM) $(OBJ_NAME)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
