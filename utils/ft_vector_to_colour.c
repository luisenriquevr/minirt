/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_to_colour.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:00:57 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 10:24:59 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_colour			ft_vector_to_colour_struct(t_vector vec)
{
	t_colour		new_colour;

	new_colour.r = vec.x;
	new_colour.g = vec.y;
	new_colour.b = vec.z;
	return (new_colour);
}
