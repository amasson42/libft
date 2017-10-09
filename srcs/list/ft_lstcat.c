/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 16:56:15 by amasson           #+#    #+#             */
/*   Updated: 2014/11/21 16:15:37 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstcat(t_list const *lst)
{
	void	*cat;
	size_t	cat_size;

	cat_size = ft_lstsize(lst);
	if (!(cat = malloc(cat_size + 1)))
		return (NULL);
	cat_size = 0;
	while (lst)
	{
		ft_memcpy(cat + cat_size, lst->content, lst->content_size);
		cat_size += lst->content_size;
		lst = lst->next;
	}
	*((char *)cat + cat_size) = 0;
	return (cat);
}
