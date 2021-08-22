/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_err_msg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:43:03 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 02:44:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "r2_err_msg_lookup.h"

void	r2_err_msg(int err)
{
	int	i;

	write(2, "\e[31mError\n", 11);
	i = 0;
	while (err != g_err_msg[i].err && g_err_msg[i].msg)
		++i;
	write(2, g_err_msg[i].msg, g_err_msg[i].len);
	write(2, "\e[0m", 4);
}
