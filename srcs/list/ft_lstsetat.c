/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsetat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:19:15 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:52:02 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsetat(t_list **alst, t_list *new, size_t i)
{
	t_list *iterator;

	while (ft_lstcount(*alst) <= i)
		ft_lstadd_back(alst, ft_lstnew(NULL, 0));
	iterator = ft_lstindex(*alst, i);
	if (iterator->content_size)
		free(iterator->content);
	iterator->content = new->content;
	iterator->content_size = new->content_size;
}
