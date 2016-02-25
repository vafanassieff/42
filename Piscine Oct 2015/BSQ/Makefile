#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: cdesvern <cdesvern@42.fr>                  +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/02/23 17:16:09 by cdesvern          #+#    #+#             *#
#*   Updated: 2016/02/24 14:06:57 by cdesvern         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = bsq
FLAGS = -Wall -Wextra -Werror
SRC = main.c ft_find_bsq.c ft_print_bsq.c ft_read_map.c ft_util.c 
OBJ =

all: $(NAME)

$(NAME):
	clang $(FLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
