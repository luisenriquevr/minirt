/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_clamp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:42:15 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 10:44:00 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector		ft_vector_clamp(t_vector vec)
{
	t_vector	clamped;

	clamped.x = (vec.x > 1.0) ? 1.0 : vec.x;
	clamped.y = (vec.y > 1.0) ? 1.0 : vec.y;
	clamped.z = (vec.z > 1.0) ? 1.0 : vec.z;
	clamped.x = clamped.x * 255;
	clamped.y = clamped.y * 255;
	clamped.z = clamped.z * 255;
	return (clamped);
}
