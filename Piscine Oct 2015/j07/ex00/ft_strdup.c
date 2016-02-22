/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 13:36:57 by vafanass          #+#    #+#             */
/*   Updated: 2015/11/02 14:41:50 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	dup = src;
	if (src)
	{
		len = ft_strlen(src) + 1;
		dup = malloc(len);
		if (dup)
		{
			while (i < len)
			{
				dup[i] = src[i];
				i++;
			}
		}
		else
			return (0);
	}
	return (dup);
}
