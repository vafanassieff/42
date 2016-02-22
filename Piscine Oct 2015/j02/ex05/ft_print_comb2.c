/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:20:30 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/22 17:11:51 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(char a1d, char b1d, char a2d, char b2d)
{
	if ((a2d > a1d) || (a2d == a1d && b2d > b1d))
	{
		ft_putchar(a1d);
		ft_putchar(b1d);
		ft_putchar(' ');
		ft_putchar(a2d);
		ft_putchar(b2d);
		if (a1d != '9' || b1d != '8' || a2d != '9' || b2d != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_condition(char a1c, char b1c, char a2c, char b2c)
{
	while (a1c <= '9')
	{
		while (b1c <= '9')
		{
			while (a2c <= '9')
			{
				while (b2c <= '9')
				{
					ft_display(a1c, b1c, a2c, b2c);
					b2c++;
				}
				a2c++;
				b2c = '0';
			}
			b1c++;
			a2c = '0';
		}
		a1c++;
		b1c = '0';
	}
}

void	ft_print_comb2(void)
{
	char a1;
	char b1;
	char a2;
	char b2;

	a1 = '0';
	b1 = '0';
	a2 = '0';
	b2 = '1';
	ft_condition(a1, b1, a2, b2);
}
