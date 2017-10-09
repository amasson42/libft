/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_print.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <gwarthur@laposte.net>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:39:30 by amasson           #+#    #+#             */
/*   Updated: 2015/01/20 13:17:01 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_LIBFT_PRINT_H
# define DEF_LIBFT_PRINT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnchar(char c, size_t n);
void	ft_putstr(char const *s);
void	ft_putnstr(char const *s, size_t n);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnchar_fd(char c, size_t n, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnstr_fd(char const *s, size_t n, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
