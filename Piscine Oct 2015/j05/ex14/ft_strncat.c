/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 14:58:04 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/24 15:14:16 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*temp_dest;

	temp_dest = dest;
	if (nb == 0)
		return (dest);
	while (*dest != '\0')
		dest++;
	while (nb && *src != '\0')
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (temp_dest);
}
