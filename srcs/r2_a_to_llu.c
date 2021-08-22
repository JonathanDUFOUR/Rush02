/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_a_to_llu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 02:48:58 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 03:06:19 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "r2.h"
#include "type/t_int.h"

t_lluint	r2_a_to_llu(char const *s)
{
	t_lluint	nb;

	nb = 0;
	while (r2_is_space(*s))
		++s;
	if (*s == '+')
		++s;
	while (r2_is_digit(*s))
		nb = nb * 10 + *s++ - '0';
	return (nb);
}
