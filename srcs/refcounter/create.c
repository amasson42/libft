/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <amasson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 12:09:38 by amasson           #+#    #+#             */
/*   Updated: 2017/12/12 12:29:04 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_refcounter.h"

void			*rfc_init(t_rfc *dst, void *obj, void *(*free_func)(void*))
{
	dst->ref_count = 1;
	dst->obj_ptr = obj;
	dst->free_func = free_func;
	return (obj);
}

static void		*rfc_destroy(t_rfc *counter)
{
	return (counter->free_func(counter->obj_ptr));
}

void			*rfc_retain(t_rfc *counter)
{
	counter->ref_count++;
	if (counter->ref_count == 0)
		return (rfc_destroy(counter));
	else
		return (counter->obj_ptr);
}

void			*rfc_release(t_rfc *counter)
{
	counter->ref_count--;
	if (counter->ref_count == 0)
		return (rfc_destroy(counter));
	else
		return (counter->obj_ptr);
}
