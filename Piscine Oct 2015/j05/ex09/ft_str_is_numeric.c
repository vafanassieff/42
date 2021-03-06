/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 13:08:42 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/24 13:12:06 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (str[0] != '\0')
	{
		if (!((str[0] >= '0' && str[0] <= '9')))
			return (0);
		str++;
	}
	return (1);
}
