/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 16:28:52 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 14:01:14 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfjoin(char const *s1, char *s2)
{
	char	*str;
	size_t	s1_size;

	s1_size = ft_strlen(s1);
	str = ft_strnew(s1_size + ft_strlen(s2));
	ft_strcpy(str, s1);
	ft_strcpy(str + s1_size, s2);
	free(s2);
	return (str);
}
