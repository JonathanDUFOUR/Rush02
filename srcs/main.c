/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:28:44 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 02:12:27 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "r2.h"
#include "type/t_int.h"
#include "enum/e_ret.h"

int	main(int ac, char **av)
{
	int	ret;

	if (ac == 2)
		ret = r2_run("ressources/default.dct", av[1]);
	else if (ac == 3)
		ret = r2_run(av[1], av[2]);
	else
		ret = AC_ERR;
	if (ret != SUCCESS)
		r2_err_msg(ret);
	return (0);
}
