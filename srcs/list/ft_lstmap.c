/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:02:34 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:51:25 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list *map;

	map = NULL;
	while (lst)
	{
		ft_lstadd_back(&map, (*f)(lst));
		lst = lst->next;
	}
	return (map);
}
