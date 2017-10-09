/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_at.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:18:15 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:48:43 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_at(t_list **alst, t_list *new, size_t i)
{
	t_list *iterator;

	if (i)
	{
		iterator = ft_lstindex(*alst, i - 1);
		if (iterator)
		{
			new->next = iterator->next;
			iterator->next = new;
		}
	}
	else
	{
		new->next = *alst;
		*alst = new;
	}
}
