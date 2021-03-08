/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hit_plane.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 20:26:39 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/07 21:43:42 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_vector		ft_normal_process(t_ray ray, t_vector vector)
{
	t_vector	temp;
	float		dot;
	
	dot = ft_vector_dot(ray.direction, vector);
	if (dot < 0)
		return (vector);
	temp = ft_vector_invert(vector);
	return (temp);
}

static void		ft_plane_intersect(t_plane *plane, t_ray ray, t_hit *hit)
{
	t_vector	temp;
	float		a;
	float		b;
	float		t;

	temp = ft_vector_min(ray.origin, plane->position);
	a = ft_vector_dot(temp, plane->orientation);
	b = ft_vector_dot(ray.direction, plane->orientation);
	if (b == 0 || (a < 0 && b < 0) || (a > 0 && b > 0))
		return (ft_init_hit(hit));
	t = -a / b;
	if (t < 0)
		return (ft_init_hit(hit));
	(*hit).t = t;
	(*hit).plane = plane;
	(*hit).normal = ft_normal_process(ray, plane->orientation);
}

t_hit			ft_get_hit_plane(t_scene *scene, t_ray ray, t_hit hits)
{
	t_hit		hit;

	while (scene->plane)
	{
		ft_init_hit(&hit);
		ft_plane_intersect(scene->plane->content, ray, &hit);
		if (hit.t < hits.t && hit.t > 0)
			hits = hit;
		scene->plane = scene->plane->next;
	}
	return (hits);
}