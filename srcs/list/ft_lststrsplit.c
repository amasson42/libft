/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 15:07:33 by amasson           #+#    #+#             */
/*   Updated: 2015/01/12 16:12:45 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	splitsize(char const *str, char spliter)
{
	size_t i;

	i = 0;
	while (str[i] && str[i] != spliter)
		i++;
	return (i);
}

t_list			*ft_lststrsplit(char const *str, char spliter)
{
	t_list	*splits;

	splits = *str == spliter ? NULL : ft_lstnew(str, splitsize(str, spliter));
	while (*str)
	{
		if (*str == spliter && str[1] != spliter)
		{
			str++;
			ft_lstadd_back(&splits, ft_lstnew(str, splitsize(str, spliter)));
		}
		str++;
	}
	return (splits);
}
