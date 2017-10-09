/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:59:21 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:53:41 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t p;

	p = 0;
	while (p < n)
	{
		if (*((unsigned char *)s + p) == (unsigned char)c)
			return ((unsigned char *)s + p);
		p++;
	}
	return (NULL);
}
