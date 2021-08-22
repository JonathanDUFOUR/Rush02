/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r2.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:54:08 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/23 00:52:18 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef R2_H
# define R2_H

/* DEBUG */
# include <stdio.h>
/*********/

# include <stddef.h>
# include <stdbool.h>
# include "type/t_int.h"
# include "type/t_dict.h"

# define BUFF_SIZE	4096

int			r2_check_format(char const *s);
int			r2_check_nb(char const *s, t_lluint *nb);
int			r2_dict_build(char const *content, t_dict **const dict);
int			r2_dict_fill(char const *content, t_dict *dict);
int			r2_parse(char const *dict_path, t_dict **const dict);
int			r2_read(int const fd, char **const content);
int			r2_run(char const *dict_path, char const *s);

void		r2_dict_clear(t_dict *dict);
void		r2_err_msg(int err);

bool		r2_is_digit(char const c);
bool		r2_is_space(char const c);
bool		r2_str_is_equ(char const *s1, char const *s2);

char		*r2_llu_to_a(t_lluint nb);
char		*r2_str_join(char const *s1, char const *s2);
char		*r2_str_trim(char const *s);

size_t		r2_llu_len(t_lluint nb);
size_t		r2_str_len(char const *s);

t_lluint	r2_a_to_llu(char const *s);

/*****************************************************************************/
/*                                   DEBUG                                   */
/*****************************************************************************/
void		r2_dict_print(t_dict *dict);

#endif
