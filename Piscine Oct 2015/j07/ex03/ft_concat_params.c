/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/28 18:28:40 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/29 11:56:58 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(int argc, char **argv)
{
	int		count;
	int		size;
	int		i;

	i = 1;
	count = 0;
	size = 0;
	while (i < argc)
	{
		while (argv[i][count])
			count++;
		size = size + count;
		count = 0;
		i++;
	}
	return (size);
}

void	ft_write_param(int argc, char **argv, char *string, int size_param)
{
	int		count;
	int		i;
	int		o;

	count = 0;
	i = 1;
	o = 0;
	while (count < size_param)
	{
		while (i < argc)
		{
			while (argv[i][o])
			{
				string[count] = argv[i][o];
				count++;
				o++;
			}
			string[count] = '\n';
			count++;
			o = 0;
			i++;
		}
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*string;
	int		size_param;

	size_param = ft_size(argc, argv);
	string = malloc((sizeof(*string) * (size_param + argc - 1)));
	ft_write_param(argc, argv, string, size_param);
	string[size_param + argc - 2] = '\0';
	return (string);
}
