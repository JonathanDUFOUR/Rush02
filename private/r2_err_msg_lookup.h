/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_err_msg_lookup.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:44:43 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/23 00:09:21 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef R2_ERR_MSG_LOOKUP_H
# define R2_ERR_MSG_LOOKUP_H

# include <stddef.h>
# include "enum/e_ret.h"

typedef struct s_err_msg	t_err_msg;

struct s_err_msg
{
	int const		err;
	char const		*msg;
	size_t const	len;
};

static t_err_msg const		g_err_msg[] = {
	{AC_ERR, "Wrong argument count\n", 21},
	{OPEN_ERR, "open() failed\n", 14},
	{READ_ERR, "read() failed\n", 14},
	{DICT_ERR, "Wrong dict format\n", 18},
	{FORMAT_ERR, "Wrong format\n", 13},
	{MALLOC_ERR, "malloc() failed\n", 16},
	{NB_LIMITS_ERR, "Input is over supported limits\n", 31},
	{0, NULL, 0}
};

#endif
