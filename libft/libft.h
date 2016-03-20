/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafanass <vafanass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/28 22:50:16 by vafanass          #+#    #+#             */
/*   Updated: 2016/03/07 15:31:53 by vafanass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(char *str);
int	ft_atoi(const char *str);
int	ft_isprint(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_bzero(void *b, size_t len);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
char    *ft_strnew(size_t size);
void	ft_strclr(char *s);
void    ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void    ft_putnbr(int n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putendl_fd(char const *s, int fd);
void ft_putnbr_fd(int n, int fd);
#endif
