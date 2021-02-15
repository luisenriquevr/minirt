/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_plus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:09:18 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/15 21:24:56 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector		ft_vector_plus(t_vector v1, t_vector v2)
{
	t_vector	new_vec;
	
	new_vec.x = v1.x + v2.x;
	new_vec.y = v1.y + v2.y;
	new_vec.z = v1.z + v2.z;
	return (new_vec);
}