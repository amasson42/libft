/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:06:16 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 14:02:44 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*end;
	const char	*s;
	size_t		n;
	size_t		dlen;

	end = dst;
	s = src;
	n = size;
	while (*end && n--)
		end++;
	dlen = end - dst;
	n = size - dlen;
	if (!n)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*end++ = *s;
			n--;
		}
		s++;
	}
	*end = '\0';
	return (dlen + (unsigned int)(s - src));
}
