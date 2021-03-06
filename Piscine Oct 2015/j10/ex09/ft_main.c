/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 21:56:56 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/15 21:16:16 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_protos.h"
#include "ft_opp.h"

void	ft_usage(int a, int b)
{
	a = 0;
	b = 0;
	ft_putstr("error : only [");
	while (gl_opptab[a].opp[0])
	{
		ft_putstr(" ");
		ft_putstr(gl_opptab[a].opp);
		a++;
	}
	ft_putstr(" ] are accepted.\n");
}

int		ft_index_opp(char *str)
{
	int		o;

	o = 0;
	while (gl_opptab[o].opp[0])
	{
		if (ft_strcmp(gl_opptab[o].opp, str) == 0)
			return (o);
		o++;
	}
	return (o);
}

int		ft_i_am_no_black_hole(int b, int op)
{
	if (b == 0)
	{
		if (ft_strcmp(gl_opptab[op].opp, "/") == 0)
			ft_putstr("Stop : division by zero\n");
		if (ft_strcmp(gl_opptab[op].opp, "%") == 0)
			ft_putstr("Stop : modulo by zero\n");
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
	op = ft_index_opp(argv[2]);
	if (ft_i_am_no_black_hole(b, op))
		gl_opptab[op].f(a, b);
	return (0);
}
