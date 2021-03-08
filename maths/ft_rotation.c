/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:15:33 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 09:26:04 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static t_vector		ft_calculate(t_vector *new_v2, t_vector *new_v3, 
					t_vector rot, t_vector dir)
{
	t_vector		new_v1;
	t_vector		normal;
	float			scalar;
	float			length;
	float			r;
	
	normal = ft_vector_cross(dir, rot);
	scalar = ft_vector_dot(dir, rot);
	length = pow(ft_vector_magnitude(normal), 2);
	r = ((1 - scalar) / length);
	new_v1 = ft_vector_set(-r * (pow(normal.y, 2) + pow(normal.z, 2)) + 1,
	 r * normal.x * normal.y - normal.z,
	 r * normal.x * normal.z + normal.y);
	(*new_v2) = ft_vector_set(r * normal.x * normal.y + normal.z,
	 -r * (pow(normal.x, 2) + pow(normal.z, 2)) + 1,
	 r * normal.y * normal.x - normal.x);
	(*new_v3) = ft_vector_set(r * normal.x * normal.z - normal.y,
	 r * normal.y *  normal.z - normal.x,
	 -r * (pow(normal.x, 2) + pow(normal.y, 2)) + 1);
	return (new_v1);
}

t_vector			ft_rotation(t_vector pos, t_vector dir, t_vector rot)
{
	t_vector		new_v1;
	t_vector		new_v2;
	t_vector		new_v3;
	t_vector		temp;

	if (dir.x == 0 && dir.y < 0 && dir.z == 0)
		pos = ft_vector_set(pos.x, pos.y, -pos.z);
	else if (!(dir.x == 0 && dir.y != 0 && dir.z == 0))
	{
		temp = pos;
		new_v1 = ft_calculate(&new_v2, &new_v3, rot, dir);
		pos = ft_vector_set(ft_vector_dot(new_v1, temp),
		 ft_vector_dot(new_v2, temp), ft_vector_dot(new_v3, temp));
	}
	return (pos);
}