/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 13:35:23 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/29 13:53:36 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*retour;

	if(!(retour = (char *)malloc(sizeof(char) * (size + 1))))
		return(NULL);
	ft_strclr(retour);
	return(retour);
}
