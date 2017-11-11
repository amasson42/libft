/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:40:04 by amasson           #+#    #+#             */
/*   Updated: 2014/11/21 16:06:54 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alloc_and_read(int fd, size_t buff_size, int *ret)
{
	char *buff;

	if (!(buff = malloc(sizeof(char) * buff_size)))
		return (NULL);
	*ret = read(fd, buff, buff_size);
	if (*ret > 0)
		return (buff);
	else
	{
		free(buff);
		return (NULL);
	}
}

char		*ft_ftos(int fd, size_t buff_size)
{
	t_list	*lst;
	t_list	*iter;
	char	*str;
	int		ret;

	if (!(lst = malloc(sizeof(t_list))))
		return (NULL);
	iter = lst;
	while ((iter->content = alloc_and_read(fd, buff_size, &ret)) != NULL)
	{
		iter->content_size = (size_t)ret;
		if (!(iter->next = malloc(sizeof(t_list))))
		{
			ft_lstpdel(&lst);
			return (NULL);
		}
		iter->next->content_size = 0;
		iter->next->next = NULL;
		iter = iter->next;
	}
	if (ret < 0)
		return (NULL);
	str = ft_lstcat(lst);
	ft_lstpdel(&lst);
	return (str);
}
