/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_bsq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdesvern <cdesvern@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 16:18:58 by cdesvern          #+#    #+#             */
/*   Updated: 2016/02/24 14:42:02 by cdesvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_create_init_tab(int **line, char **buff)
{
	int		i;

	if (!(*buff = malloc(sizeof(char) * (g_map.len + 1))))
		return (0);
	if (!(*line = malloc(sizeof(int) * g_map.len)))
		return (0);
	i = 0;
	while (i < g_map.len)
		(*line)[i++] = 0;
	return (1);
}

void	ft_first_line(int fd)
{
	char		i;

	i = 'a';
	while (i != '\n')
		read(fd, &i, 1);
}

void	ft_larger_bsq(int *line, int floor)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (i < g_map.len)
	{
		if ((floor == g_bsq.len) ||
				((n + g_map.len - i) < (g_bsq.len + 1)) ||
				(g_bsq.len == g_map.len))
			break ;
		if (line[i] > g_bsq.len)
			n++;
		else
			n = 0;
		i++;
		if (n == (g_bsq.len + 1))
		{
			g_bsq.x = i - n + 1;
			g_bsq.y = floor - n + 1;
			g_bsq.len++;
			i = i - n + 1;
			n = 0;
		}
	}
}

void	ft_calc_line(char *buff, int *line, int fd)
{
	int		i;

	i = 0;
	read(fd, buff, (g_map.len + 1));
	while (i < g_map.len)
	{
		if (buff[i] == g_map.vide)
			line[i]++;
		else
			line[i] = 0;
		i++;
	}
}

void	ft_find_bsq(int fd)
{
	int		*line;
	int		n;
	char	*buff;

	ft_first_line(fd);
	if (!ft_create_init_tab(&line, &buff))
		return ;
	n = 1;
	while ((n <= g_map.n_ligne) && (g_map.len != g_bsq.len))
	{
		ft_calc_line(buff, line, fd);
		ft_larger_bsq(line, n);
		n++;
	}
	free(line);
}
