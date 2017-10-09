/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:28:28 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:52:50 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsorted(t_list *lst, int (*cmp)(t_list *, t_list *))
{
	if (lst)
	{
		while (lst->next)
			if (cmp(lst, lst->next) <= 0)
				lst = lst->next;
			else
				return (0);
	}
	return (1);
}
