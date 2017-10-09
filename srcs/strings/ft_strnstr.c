/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:37:39 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 14:06:29 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t len;

	if (*s2 == '\0')
		return ((char*)s1);
	len = ft_strlen(s2);
	while (*s1 != '\0' && n >= len)
	{
		n--;
		if (ft_memcmp(s1, s2, len) == 0)
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
