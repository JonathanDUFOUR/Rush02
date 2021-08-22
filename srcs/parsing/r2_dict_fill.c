/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2_dict_fill.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 23:52:25 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/23 00:46:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "r2.h"
#include "type/t_dict.h"
#include "enum/e_ret.h"

static char const	*r2_skip_until_sep(char const *content)
{
	while (r2_is_digit(*content))
		++content;
	while (r2_is_space(*content))
		++content;
	return (content);
}

static char const	*r2_skip_until_word(char const *content)
{
	while (r2_is_space(*content) && *content != '\n')
		++content;
	return (content);
}

static char const	*r2_skip_until_next_line(char const *content)
{
	while (*content && *content != '\n')
		++content;
	if (*content)
		++content;
	return (content);
}

static int	r2_get_word(char const *content, t_dict *dict)
{
	register char const	*ptr0 = content;
	register char		*ptr1;

	while (*ptr0 && *ptr0 != '\n')
		++ptr0;
	dict->word = malloc((ptr0 - content + 1) * sizeof(char));
	if (!dict->word)
		return (MALLOC_ERR);
	ptr1 = dict->word;
	while (content < ptr0)
		*ptr1++ = *content++;
	*ptr1 = 0;
	return (SUCCESS);
}

int	r2_dict_fill(char const *content, t_dict *dict)
{
	int	ret;

	while (*content)
	{
		dict->n = r2_a_to_llu(content);
		content = r2_skip_until_sep(content);
		if (*content++ != ':')
			return (DICT_ERR);
		content = r2_skip_until_word(content);
		ret = r2_get_word(content, dict);
		if (ret != SUCCESS)
			return (ret);
		content = r2_skip_until_next_line(content);
		++dict;
	}
	dict->n = 0;
	dict->word = NULL;
	return (SUCCESS);
}
