/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_div_vec.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 20:35:25 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/15 21:23:25 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector		ft_vector_div_vec(t_vector v1, t_vector v2)
{
	t_vector	new_vec;

	new_vec.x = v1.x / v2.x;
	new_vec.y = v1.y / v2.y;
	new_vec.z = v1.z / v2.z;
	return (new_vec);
}