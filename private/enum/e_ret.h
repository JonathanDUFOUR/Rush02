/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_ret.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:48:09 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/23 00:07:51 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef E_RET_H
# define E_RET_H

enum	e_ret
{
	SUCCESS,
	AC_ERR,
	OPEN_ERR,
	READ_ERR,
	DICT_ERR,
	FORMAT_ERR,
	MALLOC_ERR,
	NB_LIMITS_ERR
};

#endif
