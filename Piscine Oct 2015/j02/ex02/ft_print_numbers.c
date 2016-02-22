/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:42:16 by vafanass          #+#    #+#             */
/*   Updated: 2015/11/27 10:47:03 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_print_numbers(void)
{
    char    kek;

    kek = '0';
    while (kek <= '9')
    {
        ft_putchar(kek);
        kek++;
    }
}
