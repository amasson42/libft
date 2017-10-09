/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrdsplit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/12 16:41:58 by amasson           #+#    #+#             */
/*   Updated: 2015/01/16 16:00:58 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		isnumeric(char c)
{
	return (ft_isdigit(c) || c == '+' || c == '-' || c == '.');
}

static size_t	splitsize(char const *str)
{
	size_t i;

	i = 0;
	while (str[i] && isnumeric(str[i]))
		i++;
	return (i);
}

t_list			*ft_lststrdsplit(char const *str)
{
	t_list *splits;

	if (isnumeric(*str))
		splits = ft_lstnew(str, splitsize(str));
	else
		splits = NULL;
	while (*str)
	{
		if (!isnumeric(*str) && isnumeric(str[1]))
		{
			str++;
			ft_lstadd_back(&splits, ft_lstnew(str, splitsize(str)));
		}
		str++;
	}
	return (splits);
}
