/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_dict_build.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:50:27 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/23 00:44:48 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DEBUG */
#include <stdio.h>
/*********/

#include <stdlib.h>
#include <stddef.h>
#include "r2.h"
#include "type/t_dict.h"
#include "enum/e_ret.h"

static size_t	r2_lines_count(char const *content)
{
	size_t	lines;

	lines = 0;
	while (content && *content)
	{
		if (*content == '\n')
			++lines;
		++content;
	}
	return (lines);
}

int	r2_dict_build(char const *content, t_dict **const dict)
{
	size_t	lines;
	int		ret;

	lines = r2_lines_count(content);
	*dict = malloc((lines + 1) * sizeof(t_dict));
	if (!*dict)
		return (MALLOC_ERR);
	ret = r2_dict_fill(content, *dict);
	return (ret);
}
