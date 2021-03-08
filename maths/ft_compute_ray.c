/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compute_ray.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:24:51 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 09:33:56 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

int				ft_compute_ray(t_ray *ray, int x, int y, t_scene *scene)
{
	float		w;
	float		h;
	float		fov;
	t_vector	pixel_pos;
	t_camera	*camera;

	camera = scene->camera;
	fov = camera->fov * -1; // esto hay que mirar por que
	w = scene->resolution->x;
	h = scene->resolution->y;
	pixel_pos.x = (2 * (((float)x + 0.5) / w) - 1) * tan((fov /2) * (M_PI / 180));
	pixel_pos.y = (1 - 2 * (((float)y + 0.5) / h)) * tan((fov / 2) * (M_PI / 180));
	pixel_pos.z = 1;
	if (!(camera->orientation.x == 0 && camera->orientation.y > 0
	 && camera->orientation.z  == 0))
		pixel_pos = ft_rotation(pixel_pos, camera->orientation, ft_vector_set(0, 1, 0));
	(*ray).direction = ft_vector_normalize(pixel_pos);
	(*ray).origin = camera->position;
	return (1);
}