/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scene_creator.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:02:08 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/28 18:36:08 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

int				ft_scene_creator(t_scene *scene)
{
	char		*img_data;
	int			bits_per_pixel;
	int			size_line;
	int			endian;
	t_ray		ray;

	ray.direction = ft_vector_set(0, 0, 0);
	img_data = mlx_get_data_addr(scene->mlx->img_ptr, &bits_per_pixel, &size_line, endian);
	ft_scene_calc(scene, ray, &img_data);
	if (scene->save)
		ft_save_image(scene->resolution->x, scene->resolution->y, img_data);
	scene->save = 0;
	mlx_put_image_to_window(scene->mlx->mlx_ptr, scene->mlx->win_ptr, scene->mlx->img_ptr, 0, 0);
	return (1);
}