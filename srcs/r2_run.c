/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_run.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 02:13:35 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 03:22:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "r2.h"
#include "type/t_int.h"
#include "enum/e_ret.h"

int	r2_run(char const *dict, char const *s)
{
	t_lluint	nb;
	int			ret;
	int			fd;

	ret = r2_check_format(s);
	if (ret == SUCCESS)
		ret = r2_check_nb(s, &nb);
	return (ret);
}
