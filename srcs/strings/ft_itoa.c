/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:01:04 by amasson           #+#    #+#             */
/*   Updated: 2014/11/07 17:09:35 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pow_10(int n)
{
	int p;

	p = 1;
	while (n-- > 0)
		p *= 10;
	return (p);
}

char		*ft_itoa(int n)
{
	int		pow;
	int		i;
	int		negatif;
	char	*alpha;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	negatif = n < 0;
	n = negatif ? -n : n;
	pow = 1;
	while (n / pow_10(pow - 1) >= 10)
		pow++;
	if (!(alpha = ft_strnew(pow + negatif)))
		return (NULL);
	i = 0 - 1;
	while (++i < pow)
		alpha[i + negatif] = (n / pow_10(pow - i - 1)) % 10 + '0';
	if (negatif)
		alpha[0] = '-';
	return (alpha);
}
