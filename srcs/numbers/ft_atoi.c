/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <amasson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:21:07 by amasson           #+#    #+#             */
/*   Updated: 2017/06/28 22:00:15 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	str_enterin_int(const char *str)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (str[i] > "2147483647"[i])
			return (0);
		i++;
	}
	return (1);
}

static int	str_only_contains_digits(const char *str)
{
	while (*str)
		if (ft_isdigit(*str))
			str++;
		else
			return (0);
	return (1);
}

int			ft_aisi(const char *str)
{
	if (*str == '-' || *str == '+' || *str == '0')
		return (ft_aisi(str + 1));
	if (ft_strlen(str) > ft_strlen("2147483648"))
		return (0);
	else if (!str_only_contains_digits(str))
		return (0);
	else if (ft_strlen(str) < ft_strlen("2147483648"))
		return (1);
	else
		return (str_enterin_int(str));
}

int			ft_atoi(const char *str)
{
	int sign;
	int value;

	if (str == NULL)
		return (0);
	while (*str == '\n' || *str == '\v' || *str == '\r'
		|| *str == '\t' || *str == ' ' || *str == '\f')
		str++;
	if (*str == '-')
		sign = -1;
	else
		sign = 1;
	if (*str == '-' || *str == '+')
		str++;
	value = 0;
	while (ft_isdigit(*str))
		value = 10 * value + *str++ - '0';
	return (value * sign);
}
