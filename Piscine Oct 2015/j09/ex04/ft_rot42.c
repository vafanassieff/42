/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 21:34:35 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/22 21:36:35 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 'A') && (str[i] <= 'J'))
				str[i] = (str[i] + 16);
			else if ((str[i] >= 'K') && (str[i] <= 'Z'))
				str[i] = (str[i] - 10);
			else if ((str[i] >= 'a') && (str[i] <= 'j'))
				str[i] = (str[i] + 16);
			else if ((str[i] >= 'k') && (str[i] <= 'z'))
				str[i] = (str[i] - 10);
			i++;
		}
	}
	return (str);
}
