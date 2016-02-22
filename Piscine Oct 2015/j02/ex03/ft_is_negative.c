/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:47:36 by vafanass          #+#    #+#             */
/*   Updated: 2015/11/27 10:53:39 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);

void    ft_is_negative(int n)
{
    char p;
    char nlol;

    p = 'P';
    nlol = 'N';
    if ( n >= 0)
        ft_putchar(p);
    else
        ft_putchar(nlol);
}
