/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 18:19:49 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/17 16:10:10 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *node;

	node = ft_create_elem(data);
	if ((*begin_list))
		node->next = *begin_list;
	*begin_list = node;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*node;
	int			index;

	node = NULL;
	index = -1;
	if (ac)
		while (++index < ac)
			ft_list_push_front(&node, av[index]);
	return (node);
}
