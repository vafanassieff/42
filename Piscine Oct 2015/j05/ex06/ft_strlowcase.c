/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 16:35:07 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/23 16:35:17 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
		if ((str[index] >= 'A') && (str[index] <= 'Z'))
		{
			str[index] = str[index] + 32;
			index++;
		}
		else
			index++;
	return (str);
}
