/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 14:04:00 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/17 15:57:51 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	test;
	int	tmp;

	test = 0;
	while (--length > 0)
	{
		tmp = f(tab[length - 1], tab[length]);
		if (tmp)
		{
			if (!test && tmp)
				test = tmp > 0 ? 1 : -1;
			if ((tmp > 0 && test == -1) || (tmp < 0 && test == 1))
				return (0);
		}
	}
	return (1);
}
