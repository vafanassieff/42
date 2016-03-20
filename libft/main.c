/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 23:00:48 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/29 15:06:36 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("Pas d'argument");
		return (0);
	}
	
	char *kek = "1337";
	int a = atoi(kek);
	int b = ft_atoi(kek);

	printf("C : %d // Me : %d\n",a ,b);
	return (0);
}
