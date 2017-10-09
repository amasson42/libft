/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:35:45 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:53:56 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i) && i < n)
		i++;
	return (*((unsigned char *)s1 + i - (i == n)) -
	*((unsigned char *)s2 + i - (i == n)));
}
