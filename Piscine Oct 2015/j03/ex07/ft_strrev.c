/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 16:11:05 by vafanass          #+#    #+#             */
/*   Updated: 2015/12/09 16:32:06 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		n;
	int		p;
	char	temp;

	n = 0;
	p = 0;
	while (str[n] != '\0')
		n++;
	n--;
	while (n > p)
	{
		temp = str[p];
		str[p] = str[n];
		str[n] = temp;
		p++;
		n--;
	}
	return (str);
}

