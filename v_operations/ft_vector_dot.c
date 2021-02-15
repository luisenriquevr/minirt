/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_dot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:38:41 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/15 21:24:01 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

float			ft_vector_dot(t_vector v1, t_vector v2)
{
    float		x;

	x = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
	return (x);
}
