/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_distance.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 17:13:03 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/16 17:16:01 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

float			ft_vector_distance(t_vector v1, t_vector v2)
{
	float		dist;
	
	dist = sqrt(pow(v1.x - v2.x, 2) + pow(v1.y - v2.y, 2) * pow(v1.z - v2.z, 2));
	return (dist);
}