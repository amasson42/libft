/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_read.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <gwarthur@laposte.net>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:39:30 by amasson           #+#    #+#             */
/*   Updated: 2015/01/20 13:17:01 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_LIBFT_READ_H
# define DEF_LIBFT_READ_H

# define GNL_BUFF_SIZE 32

int		twl_gnl(int const fd, char **line, char **remainder);
char	*ft_ftos(int fd, size_t buff_size);

#endif
