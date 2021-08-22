/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 02:32:38 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 03:20:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "r2.h"
#include "enum/e_ret.h"

int	r2_check_format(char const *s)
{
	while (r2_is_space(*s))
		++s;
	if (*s == '+')
		++s;
	while (r2_is_digit(*s))
		++s;
	while (r2_is_space(*s))
		++s;
	if (!*s)
		return (SUCCESS);
	return (FORMAT_ERR);
}
