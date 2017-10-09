/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:14:31 by amasson           #+#    #+#             */
/*   Updated: 2015/01/15 16:38:38 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*find;
	size_t	size;

	if (*s2 == '\0')
		return ((char *)s1);
	size = ft_strlen(s2);
	find = (char *)s1;
	while (find && *find)
	{
		if (ft_strncmp(find, s2, size) == 0)
			return (find);
		else
			find = ft_strchr(find + 1, *s2);
	}
	return (NULL);
}
