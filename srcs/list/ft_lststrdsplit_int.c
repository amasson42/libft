/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrdsplit_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 16:06:54 by amasson           #+#    #+#             */
/*   Updated: 2015/01/16 16:06:55 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isnumeric(char c)
{
	return (ft_isdigit(c) || c == '+' || c == '-' || c == '.');
}

t_list		*ft_lststrdsplit_int(char const *str)
{
	t_list	*splits;
	int		value;

	if (isnumeric(*str))
	{
		value = ft_atoi(str);
		splits = ft_lstnew(&value, sizeof(value));
	}
	else
		splits = NULL;
	while (*str)
	{
		if (!isnumeric(*str) && isnumeric(str[1]))
		{
			str++;
			value = ft_atoi(str);
			ft_lstadd_back(&splits, ft_lstnew(&value, sizeof(value)));
		}
		str++;
	}
	return (splits);
}
