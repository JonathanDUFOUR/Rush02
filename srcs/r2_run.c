/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_run.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 02:13:35 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/23 00:52:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "r2.h"
#include "type/t_int.h"
#include "type/t_dict.h"
#include "enum/e_ret.h"

int	r2_run(char const *dict_path, char const *s)
{
	t_lluint	nb;
	t_dict		*dict;
	int			ret;

	dict = NULL;
	ret = r2_check_format(s);
	if (ret == SUCCESS)
		ret = r2_check_nb(s, &nb);
	if (ret == SUCCESS)
		ret = r2_parse(dict_path, &dict);
	if (ret == SUCCESS)
		r2_dict_print(dict);
	r2_dict_clear(dict);
	return (ret);
}
