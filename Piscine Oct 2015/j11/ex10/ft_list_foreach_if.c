/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 18:19:49 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/17 16:08:36 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list,
		void (*f)(void *), void *data_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return ;
	if ((*cmp)(begin_list->data, data_ref) == 0)
		f(begin_list->data);
	if (begin_list->next)
		ft_list_foreach_if(begin_list->next, f, data_ref, cmp);
}
