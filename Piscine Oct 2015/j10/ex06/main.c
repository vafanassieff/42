/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 14:31:35 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/15 21:12:26 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int		(*g_f[5])(int, int) = {ft_add, ft_sub, ft_mul, ft_div, ft_mod};

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_index_op(char *str)
{
	int		o;
	char	ope[6];

	ft_strcpy(ope, "+-*/%");
	o = 0;
	while (ope[o])
	{
		if (ope[o] == str[0])
			return (o);
		o++;
	}
	return (-1);
}

int		ft_i_am_valid(int b, int op)
{
	if (op < 0)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	if (b == 0 && op > 2)
	{
		if (op == 4)
			ft_putstr("Stop : modulo by zero\n");
		if (op == 3)
			ft_putstr("Stop : division by zero\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int	a;
	int	b;
	int	op;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	op = ft_index_op(argv[2]);
	if (ft_i_am_valid(b, op))
	{
		ft_putnbr((long)(*g_f[op])(a, b));
		ft_putchar('\n');
	}
	return (0);
}
