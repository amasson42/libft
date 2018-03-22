/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <amasson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:59:04 by amasson           #+#    #+#             */
/*   Updated: 2018/03/22 11:07:05 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putbase_rec(size_t n, char *base, size_t blen, int fd)
{
	if (n >= blen)
	{
		putbase_rec(n / blen, base, blen, fd);
		putbase_rec(n % blen, base, blen, fd);
	}
	else
		ft_putchar_fd(base[n], fd);
}

void		ft_putbase_fd(size_t n, char *base, char *prefix, int fd)
{
	size_t blen;

	if (prefix)
		ft_putstr_fd(prefix, fd);
	if ((blen = ft_strlen(base)) > 0)
		putbase_rec(n, base, blen, fd);
}
