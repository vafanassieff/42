/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 17:58:42 by vafanass          #+#    #+#             */
/*   Updated: 2015/10/25 17:44:00 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int count;

	count = 1;
	i = 0;
	while (count < argc)
	{
		while (argv[count][i])
		{
			ft_putchar(argv[count][i]);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		count++;
	}
	return (0);
}
