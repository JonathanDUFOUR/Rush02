/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_llu_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 03:00:16 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 03:31:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DEBUG */
#include <stdio.h>
/*********/

#include <stdlib.h>
#include <stddef.h>
#include "r2.h"
#include "type/t_int.h"

char	*r2_llu_to_a(t_lluint nb)
{
	char	*output;
	char	*ptr;
	size_t	len;

	output = NULL;
	len = r2_llu_len(nb);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ptr = output + len--;
	*ptr-- = 0;
	while (len--)
	{
		*ptr-- = nb % 10 + '0';
		nb /= 10;
	}
	*ptr = nb % 10 + '0';
	return (output);
}
