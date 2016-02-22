/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:31:23 by vafanass          #+#    #+#             */
/*   Updated: 2015/11/27 10:36:25 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char kek;

    kek = 'a';
    while (kek <= 'z')
    {
        ft_putchar(kek);
        kek++;
    }
}
