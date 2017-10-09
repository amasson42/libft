/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <gwarthur@laposte.net>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:39:30 by amasson           #+#    #+#             */
/*   Updated: 2015/01/20 13:17:01 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_LIBFT_LIST_H
# define DEF_LIBFT_LIST_H

# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstpdel(t_list **alst);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstadd_front(t_list **alst, t_list *new);
void				ft_lstaddat(t_list **alst, t_list *new, size_t i);
void				ft_lstsetat(t_list **alst, t_list *new, size_t i);
void				ft_lstiter(t_list *lst, void (*f)(t_list *));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *));
void				ft_lstrev(t_list **lst);
void				ft_lstsort(t_list **lst, int (*cmp)(t_list *, t_list *));
int					ft_lstsorted(t_list *lst, int (*cmp)(t_list *, t_list *));
size_t				ft_lstsize(t_list const *lst);
void				*ft_lstcat(t_list const *lst);
t_list				*ft_lstindex(t_list const *lst, size_t i);
t_list				*ft_lstchr(t_list const *lst, t_list const *c);
t_list				*ft_lstlast(t_list const *lst);
size_t				ft_lstcount(t_list const *lst);
t_list				*ft_lstsmlest(t_list *lst, int (*cmp)(t_list *, t_list *));
t_list				*ft_lstgrtest(t_list *lst, int (*cmp)(t_list *, t_list *));
int					ft_lstsum(t_list *lst, int (*value)(t_list *));
t_list				*ft_lststrsplit(char const *str, char spliter);
t_list				*ft_lststrmsplit(char const *str, char const *spliters);
t_list				*ft_lststrdsplit(char const *str);
t_list				*ft_lststrdsplit_int(char const *str);
t_list				*ft_lststrdsplit_double(char const *str);

#endif
