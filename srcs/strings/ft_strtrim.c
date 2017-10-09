/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:48:46 by amasson           #+#    #+#             */
/*   Updated: 2015/01/15 16:39:08 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			charisspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static unsigned int	beg_spc(char const *str)
{
	int n;

	n = 0;
	while (charisspace(str[n]) && str[n] != '\0')
		n++;
	return (n);
}

static unsigned int	end_spc(char const *str)
{
	size_t	n;
	size_t	size;

	size = ft_strlen(str) - 1;
	n = 0;
	while (charisspace(str[size - n]) && n <= size)
		n++;
	return (n);
}

char				*ft_strtrim(char const *s)
{
	if (beg_spc(s) == ft_strlen(s))
		return (ft_strdup(""));
	return (ft_strsub(s, beg_spc(s), (ft_strlen(s) - beg_spc(s) - end_spc(s))));
}
