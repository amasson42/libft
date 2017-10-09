/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:00:01 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:52:11 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list const *lst)
{
	size_t	size;
	t_list	*iterator;

	size = 0;
	iterator = (t_list*)lst;
	while (iterator)
	{
		size += iterator->content_size;
		iterator = iterator->next;
	}
	return (size);
}
