/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/17 17:13:11 by amasson           #+#    #+#             */
/*   Updated: 2015/01/15 13:54:41 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float		ft_atof(char const *str)
{
	int ent_part;
	int dec_part;

	ent_part = ft_atoi(str);
	while (ft_isdigit(*str))
		str++;
	if (*str++ == '.')
		dec_part = ft_atoi(str);
	else
		dec_part = 0;
	return ((float)ent_part + (dec_part / (float)ft_sizeofnbr(dec_part)));
}
