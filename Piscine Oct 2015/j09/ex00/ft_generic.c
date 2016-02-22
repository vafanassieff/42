/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_generic.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 17:22:22 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/22 17:39:23 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_generic(void)
{
	char *lol;

	lol = "Tu tu tu tu ; Tu tu tu tu";
	ft_putstr(lol);
	ft_putchar('\n');
}
