/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizeofnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 13:01:23 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:59:45 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sizeofnbr(int nbr)
{
	if (nbr <= -10)
		return (2 + ft_sizeofnbr(nbr / -10));
	else if (nbr < 0)
		return (2);
	else if (nbr >= 10)
		return (1 + ft_sizeofnbr(nbr / 10));
	else
		return (1);
}
