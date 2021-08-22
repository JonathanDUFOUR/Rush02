/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 04:13:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 17:18:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "r2.h"
#include "type/t_dict.h"
#include "enum/e_ret.h"

int	r2_parse(char const *dict_path, t_dict **const dict)
{
	char	*content;
	int		ret;
	int		fd;

	content = NULL;
	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
		return (OPEN_ERR);
	ret = r2_read(fd, &content);
	close(fd);
	if (ret == SUCCESS)
		ret = r2_dict_build(content, dict);
	free(content);
	return (ret);
}
