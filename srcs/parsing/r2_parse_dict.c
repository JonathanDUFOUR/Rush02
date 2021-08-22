/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_parse_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 04:13:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 04:24:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "type/t_dict.h"
#include "enum/e_ret.h"

int	r2_parse_dict(char const *dict_path, t_dict **const dict)
{
	int		fd;

	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
		return (OPEN_ERR);
	
	close(fd);
	return (SUCCESS);
}
