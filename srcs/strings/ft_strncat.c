/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:05:32 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 14:03:46 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	size_s1;
	int		i;

	size_s1 = ft_strlen(s1);
	i = 0;
	while (n > 0 && s2[i])
	{
		s1[size_s1 + i] = s2[i];
		i++;
		n--;
	}
	s1[size_s1 + i] = '\0';
	return (s1);
}
