/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scene_calc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:32:16 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/28 19:17:20 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static void		ft_scene_calc(t_scene *scene, t_ray ray, char **img_data)
{
	int			x;
	int			y;
	t_colour	colour;

	x = 0;
	y = 0;
	while (y < scene->resolution->y)
	{
		while (x < scene->resolution->x)
		{
			ft_compute_ray(&ray, x, y, scene);
			colour = ft_get_colour(scene, ray);
			*(*img_data)++ = colour.r;
			*(*img_data)++ = colour.g;
			*(*img_data)++ = colour.b;
			*(*img_data)++ = 0;
			x++;
		}
		y++;
		x = 0;
	}
}