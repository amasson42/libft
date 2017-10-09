/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrmsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:21:10 by amasson           #+#    #+#             */
/*   Updated: 2015/01/12 16:39:05 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	splitsize(char const *str, char const *spliters)
{
	size_t i;

	i = 0;
	while (str[i] && ft_strchr(spliters, str[i]) == NULL)
		i++;
	return (i);
}

t_list			*ft_lststrmsplit(char const *str, char const *spliters)
{
	t_list	*splits;

	if (ft_strchr(spliters, *str))
		splits = NULL;
	else
		splits = ft_lstnew(str, splitsize(str, spliters));
	while (*str)
	{
		if (ft_strchr(spliters, *str) && ft_strchr(spliters, str[1]) == NULL)
		{
			str++;
			ft_lstadd_back(&splits, ft_lstnew(str, splitsize(str, spliters)));
		}
		str++;
	}
	return (splits);
}
