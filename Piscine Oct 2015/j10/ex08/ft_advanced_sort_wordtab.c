/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 21:56:56 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/15 21:11:57 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		ct;
	int		n;

	i = 0;
	ct = 0;
	n = 0;
	while (tab[n] != 0)
	{
		n++;
	}
	while (ct < n)
	{
		while (i < n - ct - 1)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		i = 0;
		ct++;
	}
}
