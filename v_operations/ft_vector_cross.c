/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_cross.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 21:07:17 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/15 21:23:00 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector		ft_vector_croos(t_vector v1, t_vector v2)
{
	t_vector	new_vec;
	
	new_vec.x = v1.y * v2.z - v1.z * v2.y;
	new_vec.y = v1.z * v2.x - v1.x * v2.z;
	new_vec.z = v1.x * v2.y - v1.y * v2.x;
	return (new_vec);
}