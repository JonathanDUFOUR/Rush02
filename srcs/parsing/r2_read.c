/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:20:12 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 16:52:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "r2.h"
#include "enum/e_ret.h"

int	r2_read(int const fd, char **const content)
{
	char	buff[BUFF_SIZE + 1];
	char	*dent;
	ssize_t	rd;

	rd = read(fd, buff, BUFF_SIZE);
	while (rd > 0)
	{
		buff[rd] = 0;
		dent = *content;
		*content = r2_str_join(*content, buff);
		free(dent);
		if (!*content)
			return (MALLOC_ERR);
		rd = read(fd, buff, BUFF_SIZE);
	}
	if (rd == -1)
		return (READ_ERR);
	return (SUCCESS);
}
