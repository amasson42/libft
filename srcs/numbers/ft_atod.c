/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 13:52:12 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:46:59 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atod(char const *str)
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
	return ((double)ent_part + (dec_part / (double)ft_sizeofnbr(dec_part)));
}
