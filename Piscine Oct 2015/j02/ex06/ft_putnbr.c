/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 19:12:12 by vafanass          #+#    #+#             */
/*   Updated: 2015/12/09 15:28:45 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_putstr(void)
{
	char    *str;
	int     i;

	i = 0;
	str = "-2147483648";
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void    ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr();
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb != -2147483648)
		ft_putchar(nb + '0');
}
