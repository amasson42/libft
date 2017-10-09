/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstgrtest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:06:27 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:50:31 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstgrtest(t_list *lst, int (*cmp)(t_list *, t_list *))
{
	t_list *grt;

	grt = lst;
	while ((lst = lst->next))
		if ((*cmp)(grt, lst) < 0)
			grt = lst;
	return (grt);
}
