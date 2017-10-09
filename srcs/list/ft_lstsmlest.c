/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsmlest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:05:34 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:52:35 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstsmlest(t_list *lst, int (*cmp)(t_list *, t_list *))
{
	t_list *sml;

	sml = lst;
	while ((lst = lst->next))
		if ((*cmp)(sml, lst) > 0)
			sml = lst;
	return (sml);
}
