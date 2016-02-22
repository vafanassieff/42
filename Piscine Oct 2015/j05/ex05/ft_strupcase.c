/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 15:45:04 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/23 16:03:55 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
		if ((str[index] >= 'a') && (str[index] <= 'z'))
		{
			str[index] = str[index] - 32;
			index++;
		}
		else
			index++;
	return (str);
}
