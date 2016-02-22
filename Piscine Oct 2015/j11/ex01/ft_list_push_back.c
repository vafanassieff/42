/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 18:19:49 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/17 16:03:43 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			ft_list_push_back(&((*begin_list)->next), data);
		else
			(*begin_list)->next = ft_create_elem(data);
	}
	else
		(*begin_list) = ft_create_elem(data);
}
