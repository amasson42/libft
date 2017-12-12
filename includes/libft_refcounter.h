/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_refcounter.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <amasson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 12:03:47 by amasson           #+#    #+#             */
/*   Updated: 2017/12/12 12:26:04 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_LIBFT_REFCOUNTER_H
# define DEF_LIBFT_REFCOUNTER_H

typedef struct	s_rfc {
	int			ref_count;
	void		*obj_ptr;
	void		*(*free_func)(void*);
}				t_rfc;

/*
** rfc_create: create a reference counter with one retain
** it target the object obj and will use the function free_func to free it
** rfc_retain: increase the reference count by one
** rfc_release: decrease the reference count by one. If it goes to zero, then
**  the free_func is used on the obj;
*/

void			*rfc_init(t_rfc *dst, void *obj, void *(*free_func)(void*));
void			*rfc_retain(t_rfc *counter);
void			*rfc_release(t_rfc *counter);

#endif
