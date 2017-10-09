/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:13:09 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 14:00:26 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
		if (*s == (char)c)
			return ((char *)s);
		else
			s++;
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}
