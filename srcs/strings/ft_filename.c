/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 12:46:52 by amasson           #+#    #+#             */
/*   Updated: 2015/11/16 13:47:33 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_filename(char const *path)
{
	char *name;

	name = ft_strrchr(path, '/');
	if (name)
		return (ft_strdup(name + 1));
	else
		return (ft_strdup(path));
}
