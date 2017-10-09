/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/22 04:57:14 by amasson           #+#    #+#             */
/*   Updated: 2015/01/16 15:26:50 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_fdigit(int c)
{
	return (ft_isdigit(c) || c == '-' || c == '+' || c == '.');
}

static int	count_splits(char const *str)
{
	int i;
	int splits;

	i = 0;
	splits = 0;
	if (*str == '\0')
		return (0);
	if (is_fdigit(*str))
		splits++;
	while (str[++i])
		if (is_fdigit(str[i]) && !is_fdigit(str[i - 1]))
			splits++;
	return (splits);
}

static char	*strddup(char const *str)
{
	int		i;
	char	*cpy;

	i = 0;
	while (is_fdigit(str[i]) && str[i])
		i++;
	if ((cpy = ft_strnew(i)))
	{
		cpy[i] = '\0';
		while (i-- > 0)
			cpy[i] = str[i];
	}
	return (cpy);
}

static void	tabdup(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		tab[i] = strddup(tab[i]);
		if (tab[i] == NULL)
		{
			while (i-- > 0)
				free(tab[i]);
			return ;
		}
		i++;
	}
}

char		**ft_strdsplit(char const *s)
{
	int		i;
	char	**splits;
	int		count;

	count = count_splits(s);
	if (!(splits = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (i == 0)
			if (is_fdigit(s[i]))
				splits[count++] = (char *)s + i;
		if (i)
			if (!is_fdigit(s[i - 1]) && is_fdigit(s[i]))
				splits[count++] = (char *)s + i;
		i++;
	}
	splits[count] = NULL;
	tabdup(splits);
	return (splits);
}
