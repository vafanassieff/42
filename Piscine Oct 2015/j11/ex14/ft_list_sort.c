/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 18:35:03 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/19 18:35:09 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

static void	ft_swap(t_list **elem1, t_list **elem2)
{
	void	*tmp_data;

	tmp_data = (*elem1)->data;
	(*elem1)->data = (*elem2)->data;
	(*elem2)->data = tmp_data;
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp1;
	t_list	*tmp2;
	int		i;

	i = 1;
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	while (i)
	{
		i = 0;
		tmp1 = *begin_list;
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if ((*cmp)(tmp1->data, tmp2->data) > 0)
			{
				ft_swap(&tmp1, &tmp2);
				i = 1;
			}
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
	}
}
