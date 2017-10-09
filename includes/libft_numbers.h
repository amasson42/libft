/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_numbers.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <gwarthur@laposte.net>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:39:30 by amasson           #+#    #+#             */
/*   Updated: 2015/01/20 13:17:01 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_LIBFT_NUMBERS_H
# define DEF_LIBFT_NUMBERS_H

int		ft_sizeofnbr(int nbr);
int		ft_aisi(const char *str);
int		ft_atoi(const char *str);
float	ft_atof(const char *str);
double	ft_atod(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
