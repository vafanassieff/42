/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdesvern <cdesvern@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/13 12:02:56 by cdesvern          #+#    #+#             */
/*   Updated: 2016/02/24 14:44:04 by cdesvern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define OPEN_MODES	O_CREAT | O_RDWR | O_TRUNC | O_APPEND
# define MY_MODE	S_IRUSR | S_IWUSR
# define BUFF_SIZE	56000

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef	struct		s_map
{
	char			vide;
	char			obstacle;
	char			plein;
	int				n_ligne;
	int				len;
}					t_map;

typedef	struct		s_bsq
{
	int				x;
	int				y;
	int				len;
}					t_bsq;

t_bsq				g_bsq;
t_map				g_map;
int					ft_get_info_map(int fd);
void				ft_find_bsq(int fd);
void				ft_show_rainbow(int fd);
int					ft_get_line_len(int fd);
void				ft_first_line(int fd);
int					ft_atoi(char *str, int j);

#endif
