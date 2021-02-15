/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_min.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:16:47 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/15 21:24:15 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector	ft_vector_min(t_vector v1, t_vector v2)
{
	t_vector new_vec;

	new_vec.x = v1.x - v2.x;
	new_vec.y = v1.y - v2.y;
	new_vec.z = v1.z - v2.z;
	return (new_vec);
}