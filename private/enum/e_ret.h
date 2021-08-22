/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_ret.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 01:48:09 by jodufour          #+#    #+#             */
/*   Updated: 2021/08/22 03:18:15 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef E_RET_H
# define E_RET_H

enum	e_ret
{
	SUCCESS,
	AC_ERR,
	OPEN_ERR,
	FORMAT_ERR,
	MALLOC_ERR,
	NB_LIMITS_ERR
};

#endif
