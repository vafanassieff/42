/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/19 18:49:32 by vafanass          #+#    #+#             */
/*   Updated: 2016/02/19 21:13:13 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

# define HEXA "0123456789abcdef"
# define S2 "-C"
# define BUF_SIZE 16

void	hexa_line(int n);
void	hexa_line_two(int n);
void	hexa_trad(char *buf);
void	hexa_trad_two(char *buf);
void	normal_line(char *buf);
void	ft_putnbr_base(int n, char *base);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	z_param(int ac);
void	bad_fds(int fd, char **av, int i);
int		ft_strlen(char *s);
int		size_files(int i, char **av);
int		ft_strcmp(char *str1, char *str2);
char	*ft_strdup(char *src);
char	*cp_for_ll(char c, int sf, int fd);
void	last_line(int i, char **av, int n, int fd);
void	last_line_two(int i, char **av, int n, int fd);
void	optimain_one(int n);
void	optimain_two(int n);

#endif
