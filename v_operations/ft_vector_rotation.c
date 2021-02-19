/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_rotation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:15:04 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/19 10:00:23 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minirt.h"

void			ft_rx(t_vector *vector, float x)
{
	t_vector	tmp;
	
	tmp.x = vector->x;
	tmp.y = vector->y * cos(x) - vector->z * sin(x);
	tmp.z = vector->y * sin(x) + vector->z * cos(x);

	*vector = tmp;
}

void			ft_ry(t_vector *vector, float y)
{
	t_vector	tmp;

	tmp.x = vector->x * cos(y) + vector->z * sin(y);
	tmp.y = vector->y;
	tmp.z = vector->x * -sin(y) + vector->z * cos(y);

	*vector = tmp;
}

void			ft_rz(t_vector *vector, float z)
{
	t_vector	tmp;
	
	tmp.x = vector->x * cos(z) - vector->y * sin(z);
	tmp.y = vector->x * sin(z) + vector->y * cos(z);
	tmp.z = vector->z;

	*vector = tmp;
}

void			ft_vector_rotation(t_vector *vector, t_vector *angle)
{
	ft_rx(vector, angle->x);
	ft_ry(vector, angle->y);
	ft_rz(vector, angle->z);
}

void			ft_vector_anti_rotation(t_vector *vector, t_vector *angle)
{
	ft_rz(vector, -angle->x);
	ft_ry(vector, -angle->y);
	ft_rz(vector, -angle->z);
}