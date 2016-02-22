/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 11:46:28 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/23 12:17:15 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_parite(int nb)
{
	if (nb % 2 == 0)
		return (2);
	else
		return (1);
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int	compteur;
	unsigned int	temp;
	
	compteur = 0;
	temp = base;
	if (ft_parite(temp) == 2)
	{
		temp = temp / 2;
		compteur++;
	}
	if (ft_parite(temp) == 1)
	{
		temp = (3 * temp) + 1;
		compteur++;
	}
	if (temp == 1)
	{
		return (compteur);
	}
	else
	{
		ft_collatz_conjecture(temp);
	}
}
