/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 14:28:25 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/29 18:52:23 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		count;

	count = 0;
	if (min >= max || max > 2147483647 || min < -2147483648)
		return (0);
	tab = (int*)malloc((sizeof(*tab)) * (max - min));
	while (min < max)
	{
		tab[count] = min;
		min++;
		count++;
	}
	return (tab);
}
