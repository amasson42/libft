/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <amasson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 20:56:25 by amasson           #+#    #+#             */
/*   Updated: 2017/06/28 22:01:11 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*twl_strchr_nl(const char *s)
{
	return (ft_strchr(s, '\n'));
}

static int	find_new_line(char **s_str, char **line, char *buf)
{
	ft_strcpy(*s_str, twl_strchr_nl(buf));
	ft_strncat(*line, buf, twl_strchr_nl(buf) - buf);
	ft_strcpy(*s_str, *s_str + 1);
	return (1);
}

static int	twl_read_buffer(int fd, char **s_str, char **line)
{
	int		ret;
	char	*temp;
	char	buf[GNL_BUFF_SIZE + 1];

	ret = 0;
	while ((ret = read(fd, buf, GNL_BUFF_SIZE)) > 0)
	{
		if (ret < 0)
			return (-1);
		if (ft_memchr(buf, '\0', ret))
			return (-1);
		buf[ret] = '\0';
		if (!(temp = ft_strnew(ft_strlen(*line) + ft_strlen(buf))))
			return (-1);
		ft_strcpy(temp, *line);
		free(*line);
		*line = temp;
		if (twl_strchr_nl(buf))
			return (find_new_line(s_str, line, buf));
		ft_strcat(*line, buf);
	}
	return (ret < 0 ? -1 : 0);
}

static int	do_get_next_line(int const fd, char **line, char **remainder)
{
	int ret;

	*line = ft_strnew(GNL_BUFF_SIZE + 1);
	*remainder = (!*remainder) ? ft_strnew(GNL_BUFF_SIZE + 1) : (*remainder);
	if (!*line || !*remainder)
		return (-1);
	if (twl_strchr_nl(*remainder))
	{
		ft_strncpy(*line, *remainder, twl_strchr_nl(*remainder) - *remainder);
		ft_strcpy(*remainder, twl_strchr_nl(*remainder));
		ft_strcpy(*remainder, *remainder + 1);
		return (1);
	}
	ft_strcat(*line, *remainder);
	ft_bzero(*remainder, GNL_BUFF_SIZE + 1);
	ret = twl_read_buffer(fd, &*remainder, line);
	if (ret == 1 || ret < 0)
		return (ret);
	if (ret == 0 && ft_strlen(*line) == 0 && ft_strlen(*remainder) == 0)
		**line = '\0';
	if (ft_strlen(*line) > 0 || ft_strlen(*remainder) > 0)
		return (1);
	ft_strdel(line);
	return (0);
}

int			twl_gnl(int const fd, char **line, char **remainder)
{
	int	ret;

	if (fd < 0 || !line)
		return (-1);
	ret = do_get_next_line(fd, line, remainder);
	if (ret <= 0)
	{
		free(*line);
		*line = NULL;
	}
	return (ret);
}
