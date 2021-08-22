/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_str_trim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 03:41:11 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 03:48:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "r2.h"

static size_t	r2_trim_len(char const *s)
{
	register char const	*ptr;

	while (r2_is_space(*s))
		++s;
	ptr = s;
	while (*ptr && !r2_is_space(*ptr))
		++ptr;
	return (ptr - s);
}

char	*r2_str_trim(char const *s)
{
	char	*output;
	char	*ptr;
	size_t	len;

	len = r2_trim_len(s);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ptr = output;
	while (r2_is_space(*s))
		++s;
	while (*s && !r2_is_space(*s))
		*ptr++ = *s++;
	*ptr = 0;
	return (output);
}
