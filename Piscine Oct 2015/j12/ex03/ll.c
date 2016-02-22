/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ll.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 21:13:37 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/19 21:13:52 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char*)malloc(sizeof(char) * ft_strlen(src));
	while (src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*cp_for_ll(char c, int sf, int fd)
{
	char	*stock;
	int		i;

	i = 0;
	stock = (char*)malloc(sizeof(char) * sf % 16 + 1);
	while (read(fd, &c, 1))
	{
		stock[i] = c;
		i++;
	}
	stock[i] = '\0';
	return (stock);
}

void	last_line(int i, char **av, int n, int fd)
{
	int		sf;
	int		th;
	char	ll;
	char	*stock;

	sf = size_files(i, av);
	fd = open(av[i], O_RDONLY);
	th = 0;
	while (th < (sf - (sf % 16)))
		th += read(fd, &ll, 1);
	stock = ft_strdup(cp_for_ll(ll, sf, fd));
	hexa_line(n);
	hexa_trad(stock);
	normal_line(stock);
	if (!av[++i] && sf % 16 != 0)
	{
		hexa_line(n + (sf % 16));
		ft_putchar('\n');
	}
	close(fd);
}

void	last_line_two(int i, char **av, int n, int fd)
{
	int		sf;
	int		th;
	char	ll;
	char	*stock;

	sf = size_files(i, av);
	fd = open(av[i], O_RDONLY);
	th = 0;
	while (th < (sf - (sf % 16)))
		th += read(fd, &ll, 1);
	stock = ft_strdup(cp_for_ll(ll, sf, fd));
	hexa_line_two(n);
	hexa_trad_two(stock);
	if (!av[++i])
	{
		hexa_line_two(n + (sf % 16));
		ft_putchar('\n');
	}
	close(fd);
}
