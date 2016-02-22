/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 17:22:08 by vafanass          #+#    #+#             */
/*   Updated: 2016/01/08 17:57:44 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(int argc, char **argv)
{
	int kek;
	int lol;
	int allo;

	kek = atoi(argv[1]);
//	allo = atoi(argv[2]);
	lol = ft_fibonacci(kek);
	printf("%d",lol);
	return (0);
}
