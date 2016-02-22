/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 19:07:32 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/19 19:08:14 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		btree_search_item(root->left, data_ref, cmpf);
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		btree_search_item(root->right, data_ref, cmpf);
	}
	return (NULL);
}
