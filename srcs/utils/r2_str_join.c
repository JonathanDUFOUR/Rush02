/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_str_join.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:37:47 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 16:33:52 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "r2.h"

char	*r2_str_join(char const *s1, char const *s2)
{
	char	*output;
	char	*ptr;
	size_t	len;

	if (!s1 && !s2)
		return (NULL);
	len = 0;
	if (s1)
		len += r2_str_len(s1);
	if (s2)
		len += r2_str_len(s2);
	output = malloc((len + 1) * sizeof(char));
	if (!output)
		return (NULL);
	ptr = output;
	while (s1 && *s1)
		*ptr++ = *s1++;
	while (s2 && *s2)
		*ptr++ = *s2++;
	*ptr = 0;
	return (output);
}
