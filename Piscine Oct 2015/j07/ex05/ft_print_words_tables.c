/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_table.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 14:02:58 by vafanass          #+#    #+#             */
/*   Updated: 2015/11/03 19:18:43 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar();

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[j] != 0)
	{
		while (tab[j][i])
		{
			ft_putchar(tab[j][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}
