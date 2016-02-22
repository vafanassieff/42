/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 21:11:03 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/19 21:11:14 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"
#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}

void	z_param(int ac)
{
	char	buf;

	if (ac < 2)
		while (read(0, &buf, 1) != 0)
			write(1, &buf, 1);
}

void	bad_fds(int fd, char **av, int i)
{
	if (fd < 0)
	{
		ft_putstr("hexdump: ");
		ft_putstr(av[i]);
		ft_putstr(": No such file or directory\n");
		if (!av[++i])
		{
			ft_putstr("hexdump: ");
			ft_putstr(av[--i]);
			ft_putstr(": Bad file descriptor\n");
		}
	}
}
