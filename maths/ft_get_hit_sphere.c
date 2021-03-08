/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hit_sphere.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:20:54 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/07 21:13:25 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static void		ft_intersect_sphere(t_sphere *sphere, t_ray ray, t_hit *hit)
{
	t_vector	temp;
	float		a;
	float		b;
	float		discr_c;
	
	temp = ft_vector_min(ray.origin, sphere->position);
	a = ft_vector_dot(ray.direction, ray.direction);
	b = 2 * ft_vector_dot(temp, ray.direction);
	discr_c = pow(b, 2) - 4 * a *
	 (ft_vector_dot(temp, temp) - pow(sphere->radius, 2));
	if (discr_c < 0)
		return ;
	(*hit).t = (-b - sqtr(discr_c)) / (2 * a);
	if ((*hit).t < 0)
		(*hit).t = (-b + sqtr(discr_c)) / (2 * a);
	temp = ft_vector_mul(ray.direction, (*hit).t);
	(*hit).normal = ft_vector_plus(ray.origin, temp);
	temp = ft_vector_min((*hit).normal , sphere->position);
	(*hit).sphere = sphere;
	(*hit).normal = ft_vector_normalize(temp);
}

t_hit			ft_get_hit_sphere(t_scene *scene, t_ray ray, t_hit hits)
{
	t_hit		hit;
	
	while (scene->sphere)
	{
		ft_init_hit(&hit);
		ft_sphere_intersect(scene->sphere->content, ray, &hit);
		if (hit.t < hits.t && hit.t > 0)
			hits = hit;
		scene->sphere = scene->sphere->next;
	}
	return (hits);
}