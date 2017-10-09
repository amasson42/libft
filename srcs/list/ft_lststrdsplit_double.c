/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrdsplit_double.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 16:06:24 by amasson           #+#    #+#             */
/*   Updated: 2015/01/16 16:06:25 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isnumeric(char c)
{
	return (ft_isdigit(c) || c == '+' || c == '-' || c == '.');
}

t_list		*ft_lststrdsplit_double(char const *str)
{
	t_list	*splits;
	double	value;

	if (isnumeric(*str))
	{
		value = ft_atod(str);
		splits = ft_lstnew(&value, sizeof(value));
	}
	else
		splits = NULL;
	while (*str)
	{
		if (!isnumeric(*str) && isnumeric(str[1]))
		{
			str++;
			value = ft_atod(str);
			ft_lstadd_back(&splits, ft_lstnew(&value, sizeof(value)));
		}
		str++;
	}
	return (splits);
}
