/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_dict.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 04:11:18 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/23 00:05:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_DICT_H
# define T_DICT_H

# include "type/t_int.h"

typedef struct s_dict	t_dict;

struct s_dict
{
	t_lluint	n;
	char		*word;
};

#endif
