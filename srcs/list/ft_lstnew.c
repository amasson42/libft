/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:10:57 by amasson           #+#    #+#             */
/*   Updated: 2015/01/16 16:24:08 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->content = content && content_size ? malloc(content_size) : NULL;
	if (new->content)
		ft_memcpy(new->content, content, content_size);
	new->content_size = (content ? content_size : 0);
	new->next = NULL;
	return (new);
}
