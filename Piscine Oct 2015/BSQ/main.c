/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdesvern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 11:50:53 by cdesvern          #+#    #+#             */
/*   Updated: 2016/02/25 12:57:02 by cdesvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_reinit_bsq(void)
{
	g_bsq.x = 0;
	g_bsq.y = 0;
	g_bsq.len = 0;
}

int		ft_open(char *fn)
{
	int		fd;

	fd = open(fn, O_RDONLY);
	if (fd < 0)
	{
		write(1, "map error\n", 10);
		return (fd);
	}
	else
		return (fd);
}

int		ft_copy_stdin(void)
{
	int		n;
	int		fd;
	char	buff[BUFF_SIZE];

	fd = open("./cpy_stdin", OPEN_MODES, MY_MODE);
	if (fd < 0)
		return (0);
	n = read(0, buff, BUFF_SIZE);
	write(fd, buff, n);
	while (n != 0)
	{
		n = read(0, buff, BUFF_SIZE);
		write(fd, buff, n);
	}
	if (close(fd) < 0)
		return (0);
	return (1);
}

int		do_magic(char *fn)
{
	int		i;
	int		fd;

	fd = ft_open(fn);
	if (fd < 0)
		return (0);
	i = 1;
	if (!ft_get_info_map(fd))
	{
		write(1, "map error\n", 10);
		return (0);
	}
	if (close(fd) < 0)
		return (0);
	fd = ft_open(fn);
	ft_find_bsq(fd);
	if (close(fd) < 0)
		return (0);
	fd = ft_open(fn);
	ft_show_rainbow(fd);
	if (close(fd) < 0)
		return (0);
	return (1);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	g_bsq.len = 0;
	if (ac == 1)
	{
		ft_copy_stdin();
		do_magic("./cpy_stdin");
	}
	while (i < ac)
	{
		do_magic(av[i]);
		ft_reinit_bsq();
		i++;
	}
	return (0);
}
