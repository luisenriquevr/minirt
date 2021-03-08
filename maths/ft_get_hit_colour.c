/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hit_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:47:08 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 11:12:56 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector	        ft_get_hit_colour(t_hit hit)
{
	t_vector		hit_colour;

	if (hit.cylinder)
		hit_colour = ft_colour_to_vector_struct(hit.cylinder->colour);
	else if (hit.square)
		hit_colour = ft_colour_to_vector_struct(hit.square->colour);
	else if (hit.triangle)
		hit_colour = ft_colour_to_vector_struct(hit.triangle->colour);
	else if (hit.plane)
		hit_colour = ft_colour_to_vector_struct(hit.plane->colour);
	else if (hit.sphere)
		hit_colour = ft_colour_to_vector_struct(hit.sphere->colour);
	else
		hit_colour = ft_v_false(); // Esto no se bien que eeeeeee pero como luego viene el clamp si es infinito bien pero si es menos infinito no se
	return (hit_colour);
}
