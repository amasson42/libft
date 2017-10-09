/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 14:12:28 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:49:24 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstchr(t_list const *lst, t_list const *c)
{
	while (lst && ft_memcmp(lst->content, c->content,
							FT_MIN(lst->content_size, c->content_size)))
		lst = lst->next;
	return ((t_list *)lst);
}
