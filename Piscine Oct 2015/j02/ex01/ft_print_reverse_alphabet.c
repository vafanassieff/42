/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:37:19 by vafanass          #+#    #+#             */
/*   Updated: 2015/11/27 10:41:27 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_print_reverse_alphabet(void)
{
    char kek;

    kek = 'z';
    while (kek >= 'a')
    {
        ft_putchar(kek);
        kek--;
    }
}

int     main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}
