/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasson <gwarthur@laposte.net>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:39:30 by amasson           #+#    #+#             */
/*   Updated: 2015/01/20 13:17:01 by amasson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_LIBFT_H
# define DEF_LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define FT_MIN(a, b) ((a) > (b) ? (b) : (a))
# define FT_MAX(a, b) ((a) > (b) ? (a) : (b))

# include "libft_memory.h"
# include "libft_strings.h"
# include "libft_numbers.h"
# include "libft_print.h"
# include "libft_list.h"
# include "libft_read.h"
# include "libft_refcounter.h"

#endif
