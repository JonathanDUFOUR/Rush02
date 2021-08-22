/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_llu_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 03:05:49 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 03:08:51 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "type/t_int.h"

size_t	r2_llu_len(t_lluint nb)
{
	size_t	len;

	len = 1;
	while (nb > 9)
	{
		nb /= 10;
		++len;
	}
	return (len);
}
