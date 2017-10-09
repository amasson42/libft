/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:16:08 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:48:55 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *iterator;

	iterator = *alst;
	if (iterator)
	{
		while (iterator->next)
			iterator = iterator->next;
		iterator->next = new;
	}
	else
		*alst = new;
}
