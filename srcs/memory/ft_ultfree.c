/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <amasson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 15:36:25 by amasson           #+#    #+#             */
/*   Updated: 2017/06/28 14:26:38 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

void	*ft_ultfree(int n, ...)
{
	va_list	va;
	int		i;

	va_start(va, n);
	i = 0;
	while (i < n)
	{
		free(va_arg(va, void*));
		i++;
	}
	va_end(va);
	return (NULL);
}
