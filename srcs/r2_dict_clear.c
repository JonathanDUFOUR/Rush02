/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_dict_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 00:39:35 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/23 00:42:38 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "type/t_dict.h"

void	r2_dict_clear(t_dict *dict)
{
	t_dict	*dent;

	dent = dict;
	while (dict && dict->word)
	{
		dict->n = 0;
		free(dict->word);
		dict->word = NULL;
		++dict;
	}
	free(dent);
}
