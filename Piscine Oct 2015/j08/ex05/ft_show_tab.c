/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 15:32:35 by vafanass          #+#    #+#             */
/*   Updated: 2015/11/04 18:48:26 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_putno(int nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putno(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putno(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j] != 0)
		{
			k = 0;
			while (par[i].tab[j][k] != '\0')
			{
				ft_putchar(par[i].tab[j][k]);
				k++;
			}
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
