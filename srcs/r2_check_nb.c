/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_check_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 02:28:03 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 03:55:09 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "r2.h"
#include "type/t_int.h"
#include "enum/e_ret.h"

int	r2_check_nb(char const *s, t_lluint *nb)
{
	char		*check;
	char		*dent;
	bool		equ;

	s = r2_str_trim(s);
	if (!s)
		return (MALLOC_ERR);
	*nb = r2_a_to_llu(s);
	check = r2_llu_to_a(*nb);
	if (!check)
		return (MALLOC_ERR);
	dent = (char *)s;
	if (*s == '+')
		++s;
	while (*s == '0' && r2_is_digit(*(s + 1)))
		++s;
	equ = r2_str_is_equ(s, check);
	free(check);
	free(dent);
	if (!equ)
		return (NB_LIMITS_ERR);
	return (SUCCESS);
}
