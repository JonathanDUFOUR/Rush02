/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:54:08 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 04:21:22 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef R2_H
# define R2_H

# include <stddef.h>
# include <stdbool.h>
# include "type/t_int.h"
# include "type/t_dict.h"

int			r2_check_format(char const *s);
int			r2_check_nb(char const *s, t_lluint *nb);
int			r2_parse_dict(char const *dict_path, t_dict **const dict);
int			r2_run(char const *dict, char const *s);


void		r2_err_msg(int err);

bool		r2_is_digit(char const c);
bool		r2_is_space(char const c);
bool		r2_str_is_equ(char const *s1, char const *s2);

char		*r2_llu_to_a(t_lluint nb);
char		*r2_str_trim(char const *s);

size_t		r2_llu_len(t_lluint nb);

t_lluint	r2_a_to_llu(char const *s);

#endif
