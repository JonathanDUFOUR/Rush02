/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_dict_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 00:51:00 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/23 01:06:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "type/t_dict.h"

void	r2_dict_print(t_dict *dict)
{
	printf("\e[36mTHAT IS WHAT I'VE PARSED\e[0m\n\n");
	printf("| %12s%8s | %11s%9s |\n", "number", "", "word", "");
	printf("|----------------------|----------------------|\n");
	while (dict && dict->word)
	{
		printf("| %20llu | %20s |\n", dict->n, dict->word);
		++dict;
	}
}
