/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdesvern <cdesvern@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 12:11:19 by cdesvern          #+#    #+#             */
/*   Updated: 2016/02/24 15:49:20 by cdesvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_parse_param_map(char *str, int i)
{
	int		j;

	j = i - 1;
	g_map.plein = str[j--];
	g_map.obstacle = str[j--];
	g_map.vide = str[j--];
	g_map.n_ligne = ft_atoi(str, j);
	if (!g_map.n_ligne)
		return (0);
	return (1);
}

int		ft_test_line(char *buff, int *ct, int *n, int fd)
{
	int		i;
	int		out;
	char	*tmp;

	i = 0;
	out = 0;
	tmp = &buff[*ct];
	while (tmp[i] != '\n' && (*n) != 0)
	{
		if (tmp[i] != g_map.vide && tmp[i] != g_map.obstacle)
			return (0);
		i++;
		out++;
		if (++(*ct) == (*n))
		{
			*n = read(fd, buff, BUFF_SIZE);
			i = 0;
			*ct = 0;
			tmp = &buff[0];
		}
	}
	(*ct)++;
	return (out);
}

int		ft_test_map(int fd)
{
	int		ct;
	int		n;
	int		nl;
	char	buff[BUFF_SIZE];

	nl = 1;
	ct = 0;
	n = read(fd, buff, BUFF_SIZE);
	g_map.len = ft_test_line(buff, &ct, &n, fd);
	if (!g_map.len)
		return (0);
	while (n != 0 && nl < g_map.n_ligne)
	{
		if (ft_test_line(buff, &ct, &n, fd) != g_map.len)
			return (0);
		nl++;
		if (ct == n)
		{
			n = read(fd, buff, BUFF_SIZE);
			ct = 0;
		}
	}
	if ((n != 0 || nl != g_map.n_ligne) && g_map.n_ligne != 1)
		return (0);
	return (1);
}

int		ft_get_info_map(int fd)
{
	char	first_line[BUFF_SIZE];
	int		i;
	int		n;
	char	buff;

	i = 0;
	n = 1;
	while (n)
	{
		n = read(fd, &buff, 1);
		first_line[i] = buff;
		if (buff == '\n')
			break ;
		i++;
	}
	if (i < 4)
		return (0);
	if (!ft_parse_param_map(first_line, i))
		return (0);
	if (!ft_test_map(fd))
		return (0);
	return (1);
}
