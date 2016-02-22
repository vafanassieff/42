/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 15:36:44 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/28 13:32:49 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] || s2[i])
	{
		while (n-- != 1)
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}
