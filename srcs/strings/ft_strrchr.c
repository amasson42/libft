/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:09:09 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 14:05:07 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *found;

	if (c == '\0')
		return ((char*)s + ft_strlen(s));
	found = NULL;
	while (*s)
	{
		if (*s == (char)c)
			found = (char*)s;
		s++;
	}
	return (found);
}
