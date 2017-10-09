/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:38:31 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 14:02:06 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_size;

	s1_size = ft_strlen(s1);
	str = ft_strnew(s1_size + ft_strlen(s2));
	ft_strcpy(str, s1);
	ft_strcpy(str + s1_size, s2);
	return (str);
}
