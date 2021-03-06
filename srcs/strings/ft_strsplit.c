/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <amasson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:00:39 by amasson           #+#    #+#             */
/*   Updated: 2018/03/19 13:07:16 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char const *str, char spliter)
{
	int i;
	int splits;

	i = 0;
	splits = 0;
	if (str[0] == '\0')
		return (0);
	if (str[0] != spliter)
		splits++;
	while (str[++i])
		if (str[i] != spliter && str[i - 1] == spliter)
			splits++;
	return (splits);
}

static char	*strsdup(char const *str, char spliter)
{
	int		i;
	char	*cpy;

	i = 0;
	while (str[i] != spliter && str[i] != '\0')
		i++;
	if ((cpy = ft_strnew(i)))
	{
		cpy[i] = '\0';
		while (i-- > 0)
			cpy[i] = str[i];
	}
	return (cpy);
}

static char	**tabdup(char **tab, char c)
{
	int i;

	i = 0;
	while (tab[i])
	{
		tab[i] = strsdup(tab[i], c);
		if (tab[i] == NULL)
		{
			while (i-- > 0)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**splits;
	int		count;

	count = count_splits(s, c);
	if (!(splits = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0)
			if (s[i] != c)
				splits[count++] = (char *)s + i;
		if (i != 0)
			if (s[i - 1] == c && s[i] != c)
				splits[count++] = (char *)s + i;
		i++;
	}
	splits[count] = NULL;
	return (tabdup(splits, c));
}
