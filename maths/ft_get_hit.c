/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_hit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:40:30 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/05 19:07:45 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

t_hit	        ft_get_hit(t_scene *scene, t_ray ray)
{
	t_hit       hits;

	init_hit(&hits);
	hits = ft_get_hit_sphere(scene, ray, hits);
	hits = ft_get_hit_plane(scene, ray, hits);
	hits = ft_get_hit_square(scene, ray, hits);
	hits = ft_get_hit_triangle(scene, ray, hits);
	hits = ft_get_hit_cylinder(scene, ray, hits);
	return (hits);
}