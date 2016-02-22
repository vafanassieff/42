/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 14:28:56 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/26 12:17:05 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		cur;

	cur = 0;
	while (src[cur] != '\0')
	{
		dest[cur] = src[cur];
		cur++;
	}
	dest[cur] = '\0';
	return (dest);
}
