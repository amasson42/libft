/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/16 16:05:08 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:53:04 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsum(t_list *lst, int (*value)(t_list *))
{
	int total;

	total = 0;
	while (lst)
	{
		total += (*value)(lst);
		lst = lst->next;
	}
	return (total);
}
