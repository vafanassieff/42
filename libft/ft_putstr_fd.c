/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 14:20:42 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/29 14:44:15 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
	int i;

	i = 0;
	while(s != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
