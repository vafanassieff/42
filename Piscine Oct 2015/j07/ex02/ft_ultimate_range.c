/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 14:28:25 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/29 19:46:04 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		count;

	count = 0;
	if (min >= max)
		return (0);
	*range = malloc((sizeof(int)) * (max - min));
	while (min < max)
	{
		(*range)[count] = min;
		min++;
		count++;
	}
	return (count);
}
