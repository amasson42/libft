/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:17:28 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 14:03:54 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (s[i] && i < n)
		if (s[i] == (char)c)
			return ((char *)(s + i));
		else
			i++;
	return (NULL);
}
