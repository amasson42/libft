/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:18:14 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 14:06:17 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnrchr(const char *s, int c, size_t n)
{
	n = ft_strnlen(s, n) + 1;
	while (n-- > 0)
		if (s[n] == (char)c)
			return ((char *)(s + n));
	return (NULL);
}
