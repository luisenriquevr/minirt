/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colour_to_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:06:07 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 10:23:56 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector	    ft_colour_to_vector_struct(t_colour vec)
{
	t_vector    new_colour;

	new_colour.x = vec.r;
	new_colour.y = vec.g;
	new_colour.z = vec.b;
	return (new_colour);
}