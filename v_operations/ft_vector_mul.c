/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_mul.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:23:11 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/15 21:24:40 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector		ft_vector_mul(t_vector v, float t)
{
	t_vector	new_vec;

	new_vec.x = v.x * t;
	new_vec.y = v.y * t;
	new_vec.z = v.z * t;
	return (new_vec);
}