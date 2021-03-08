/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colour_to_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:25:32 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 10:27:00 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector		ft_colour_to_vector(t_vector colour)
{
	t_vector	colour;

	colour.x = colour.x / 255;
	colour.y = colour.y / 255;
	colour.z = colour.z / 255;
	return (colour);
}
