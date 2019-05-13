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

static double	pow_of_ten(int i)
{
	double p;

	p = 1;
	while (i-- > 0)
		p *= 10;
	return (p);
}

double			ft_atod(char const *str)
{
	int ent_part;
	int dec_part;

	ent_part = ft_atoi(str);
	while (ft_isdigit(*str) || *str == '+' || *str == '-')
		str++;
	if (*str++ == '.')
		dec_part = ft_atoi(str);
	else
		dec_part = 0;
	if (ent_part >= 0)
		return (ent_part + (dec_part / pow_of_ten(ft_sizeofnbr(dec_part))));
	else
		return (ent_part - (dec_part / pow_of_ten(ft_sizeofnbr(dec_part))));
}
