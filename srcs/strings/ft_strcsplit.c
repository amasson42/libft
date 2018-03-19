/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <amasson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 12:44:35 by amasson           #+#    #+#             */
/*   Updated: 2018/03/19 13:15:12 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char const *s, char c)
{
	int i;
	int count;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

static char	*strcdup(char const *str, char c)
{
	int i;

	char *cpy;
	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	cpy = malloc(sizeof(char) * (i + 1));
	if (cpy)
	{
		cpy[i] = '\0';
		while (i-- > 0)
			cpy[i] = str[i];
	}
	return (cpy);
}

static char	**tabdup(char **splits, char c)
{
	int i;

	i = 0;
	while (splits[i])
	{
		splits[i] = strcdup(splits[i], c);
		if (splits[i] == NULL)
		{
			while (i-- > 0)
				free(splits[i]);
			free(splits);
			return (NULL);
		}
		i++;
	}
	return (splits);
}

char		**ft_strcsplit(char const *s, char c)
{
	char	**splits;
	int		count;
	int		i;

	count = count_splits(s, c);
	if (!(splits = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	splits[0] = (char *)s;
	count = 1;
	while (s[i])
	{
		if (s[i] == c)
			splits[count++] = (char *)s + i + 1;
		i++;
	}
	splits[count] = NULL;
	return (tabdup(splits, c));
}
