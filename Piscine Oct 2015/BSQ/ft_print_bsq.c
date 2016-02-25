/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bsq.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdesvern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 14:45:00 by cdesvern          #+#    #+#             */
/*   Updated: 2016/02/25 12:57:17 by cdesvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_read_n_write(int fd, char *buff, int n)
{
	int		i;

	i = read(fd, buff, n);
	write(1, buff, i);
	return (i);
}

int		ft_init_sqline(char *sqline)
{
	int	i;

	i = 0;
	while (i < g_bsq.len)
		sqline[i++] = g_map.plein;
	return (1);
}

void	ft_show_rainbow(int fd)
{
	int		sq;
	int		n;
	char	buff[BUFF_SIZE];
	int		i;
	char	sqline[g_bsq.len];

	n = ft_init_sqline(sqline);
	ft_first_line(fd);
	sq = (g_bsq.y - 1) * (g_map.len + 1) + g_bsq.x - 1;
	while (sq > BUFF_SIZE)
	{
		ft_read_n_write(fd, buff, BUFF_SIZE);
		sq -= BUFF_SIZE;
	}
	i = 0;
	while (i < g_bsq.len && g_bsq.len)
	{
		ft_read_n_write(fd, buff, sq);
		read(fd, buff, g_bsq.len);
		sq = g_map.len - g_bsq.len + 1;
		write(1, sqline, g_bsq.len);
		i++;
	}
	while (n != 0)
		n = ft_read_n_write(fd, buff, BUFF_SIZE);
}
