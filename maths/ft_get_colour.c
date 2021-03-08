/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_colour.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:28:31 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/05 18:45:43 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_colour		ft_get_colour(t_scene *scene, t_ray ray)
{
	t_hit		hit;
	t_vector	hit_colour;
	t_vector	colour;
	t_phong		*phong;
	t_list		*light;

	light = scene->light;
	hit = ft_get_hit(scene, ray);
	if (hit.t == INFINITY)
		return (ft_colour_set(10, 10, 10));
	hit.phit = ft_vector_plus(ray.origin, ft_vector_mul(ray.direction, hit.t));
	hit_colour = ft_get_hit_colour(hit);
	phong = (t_phong *) malloc(sizeof(t_phong));
	*phong = ft_phong_calculate(scene);
	while (light)
	{
		scene->light = light->content;
		ft_get_colour_loop(scene, hit, &phong, ray);
		light = light->next;
	}
	colour = ft_vector_plus(ft_vector_mul_vec(ft_vector_plus(phong->alight,
	 phong->distance), ft_colour_to_vector(hit_colour)), phong->surface);
	free(phong);
	return (ft_vector_to_colour_struct(ft_vector_clamp(colour)));
}