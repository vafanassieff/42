/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 11:59:06 by vafanass          #+#    #+#             */
/*   Updated: 2015/11/03 16:56:29 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		ft_compare(char *str, char *charset)
{
	char	*temp;
	int		count;

	temp = ft_strstr(str, charset);
	count = 0;
	while (temp[count] != '\0')
		count++;
	if (count != 0)
		return (0);
	else
		return (1);
}

int		ft_mot(char *str, int i, char *charset)
{
	int longueur_mot;

	longueur_mot = 0;
	while ((ft_compare(str, charset) == 1) && str[i])
	{
		longueur_mot++;
		i++;
	}
	return (longueur_mot);
}

int		ft_nb_mots(char *str, char *charset)
{
	int		i;
	int		occurence;
	int		nb_de_mot;

	i = 0;
	occurence = 0;
	nb_de_mot = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (((ft_compare(str, charset) == 1) && str[i]) || str[i] == '\0')
		{
			i++;
			occurence = 1;
		}
		if ((ft_compare(str, charset) == 1) || str[i] == '\0')
		{
			nb_de_mot += (occurence == 1) ? 1 : 0;
			occurence = 0;
			i++;
		}
	}
	return (nb_de_mot);
}

char	**ft_split(char *str, char *charset)
{
	int		l;
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if ((tab = malloc(sizeof(char) * (ft_nb_mots(str, charset) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((ft_compare(str, charset) == 1) && str[i++])
			if (str[i])
			{
				l = 0;
				if ((tab[j] = malloc(sizeof(char)
								* ft_mot(str, i, charset) + 1)) == NULL)
					return (NULL);
				while ((ft_compare(str, charset) == 1) && str[i])
					tab[j][l++] = str[i++];
				tab[j++][l] = '\0';
			}
	}
	tab[j] = NULL;
	return (tab);
}
