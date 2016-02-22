/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 21:56:56 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/15 21:16:36 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_protos.h"

void	ft_add(int a, int b)
{
	long	tmp;

	tmp = a + b;
	ft_putnbr(tmp);
	ft_putchar('\n');
}

void	ft_sub(int a, int b)
{
	long	tmp;

	tmp = a - b;
	ft_putnbr(tmp);
	ft_putchar('\n');
}

void	ft_mul(int a, int b)
{
	long	tmp;

	tmp = a * b;
	ft_putnbr(tmp);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	long	tmp;

	tmp = a / b;
	ft_putnbr(tmp);
	ft_putchar('\n');
}

void	ft_mod(int a, int b)
{
	long	tmp;

	tmp = a % b;
	ft_putnbr(tmp);
	ft_putchar('\n');
}
