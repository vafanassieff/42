/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:51:24 by vafanass          #+#    #+#             */
/*   Updated: 2016/01/08 18:04:17 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_2_pow(int n)
{
	if (n == 0)
		return (1);
	else
		return (2 * ft_2_pow(n - 1));
}

int		ft_is_prime(int nb)
{
	int i;
	int lim;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	i = 1;
	while (ft_2_pow(2 * i) < nb && i <= 15)
		i++;
	lim = ft_2_pow(i - 1);
	i = 1;
	while (i++ <= nb / lim + 1)
		if (nb % i == 0)
			return (0);
	return (1);
}
