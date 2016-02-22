/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:54:30 by vafanass          #+#    #+#             */
/*   Updated: 2015/11/27 11:19:25 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_print_numbers(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);

    if (a != '7' || b != '8' || c != '9')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
}

void    ft_print_comb(void)
{
    char    a;
    char    b;
    char    c;

    a = '0' - 1;
    while (a++ < '7')
    {
        b = a;
        while (b++ < '8')
        {
            c = b;
            while (c++ < '9')
                ft_print_numbers(a, b, c);
        }
    }
}

int     main(void)
{
    ft_print_comb();
    return (0);
}
