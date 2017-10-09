/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 18:43:13 by amasson           #+#    #+#             */
/*   Updated: 2015/01/15 15:31:39 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*lstdiv(t_list *lst)
{
	t_list *aux;

	if (lst == NULL)
		return (NULL);
	else if (lst->next == NULL)
		return (NULL);
	else
	{
		aux = lst->next;
		lst->next = aux->next;
		aux->next = lstdiv(aux->next);
		return (aux);
	}
}

static t_list	*lstfus(t_list *a, t_list *b, int (*cmp)(t_list *, t_list *))
{
	if (a == NULL)
		return (b);
	else if (b == NULL)
		return (a);
	else if (cmp(a, b) < 0)
	{
		a->next = lstfus(a->next, b, cmp);
		return (a);
	}
	else
	{
		b->next = lstfus(a, b->next, cmp);
		return (b);
	}
}

void			ft_lstsort(t_list **lst, int (*cmp)(t_list *, t_list *))
{
	t_list *aux;

	if (*lst)
		if ((*lst)->next)
		{
			aux = lstdiv(*lst);
			ft_lstsort(lst, cmp);
			ft_lstsort(&aux, cmp);
			*lst = lstfus(*lst, aux, cmp);
		}
}
