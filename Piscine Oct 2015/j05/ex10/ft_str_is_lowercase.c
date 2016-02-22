/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 13:13:02 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/24 13:54:11 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!((str[0] >= 'a' && str[0] <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
