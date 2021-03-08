/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minirt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:53 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/08 10:33:22 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

static void		ft_param_error(t_scene *scene)
{
	if (scene->resolution == NULL || scene->camera == NULL ||
		scene->light || scene->alight == NULL)
		{
			perror("Parametros incorrectos.\n");
		}
}

int				ft_minirt(char *txt, int save)
{
	t_scene		*scene;
	
	scene = ft_scene_reader(txt);
	scene->save = save;
	scene->mlx->mlx_ptr = mlx_init();
	ft_param_error(scene);
	scene->mlx->win_ptr = mlx_new_window(scene->mlx->mlx_ptr, scene->resolution->x, scene->resolution->y, "MiniRT");
	scene->mlx->img_ptr = mlx_new_image(scene->mlx->mlx_ptr, scene->resolution->x, scene->resolution->y);
	mlx_key_hook(scene->mlx->win_ptr, ft_key_values, &scene);
	mlx_loop_hook(scene->mlx->mlx_ptr, ft_scene_creator, scene);
	mlx_loop(scene->mlx->mlx_ptr);
	
	/*
	printf("%s\n", "Esto es resolution");
	printf("%d\n", (*scene).resolution->x);
	printf("%d\n", (*scene).resolution->y);
	
	printf("%s\n", "Esto es alight");
	printf("%f\n", (*scene).alight->ratio);
	printf("%d\n", (*scene).alight->colour.r);
	printf("%d\n", (*scene).alight->colour.g);
	printf("%d\n", (*scene).alight->colour.b);
	
	printf("%s\n", "Esto es camera");
	printf("%f\n", (*scene).camera->position.x);
	printf("%f\n", (*scene).camera->position.y);
	printf("%f\n", (*scene).camera->position.z);
	printf("%f\n", (*scene).camera->orientation.x);
	printf("%f\n", (*scene).camera->orientation.y);
	printf("%f\n", (*scene).camera->orientation.z);
	printf("%d\n", (*scene).camera->fov);
	
	printf("%s\n", "Esto es light");
	printf("%f\n", (*scene).light->position.x);
	printf("%f\n", (*scene).light->position.y);
	printf("%f\n", (*scene).light->position.z);
	printf("%f\n", (*scene).light->ratio);
	printf("%d\n", (*scene).light->colour.r);
	printf("%d\n", (*scene).light->colour.g);
	printf("%d\n", (*scene).light->colour.b);
	
	printf("%s\n", "Esto es plane");
	printf("%f\n", (*scene).plane->position.x);
	printf("%f\n", (*scene).plane->position.y);
	printf("%f\n", (*scene).plane->position.z);
	printf("%f\n", (*scene).plane->orientation.x);
	printf("%f\n", (*scene).plane->orientation.y);
	printf("%f\n", (*scene).plane->orientation.z);
	printf("%d\n", (*scene).plane->colour.r);
	printf("%d\n", (*scene).plane->colour.g);
	printf("%d\n", (*scene).plane->colour.b);
	
	printf("%s\n", "Esto es sphere");
	printf("%f\n", (*scene).sphere->position.x);
	printf("%f\n", (*scene).sphere->position.y);
	printf("%f\n", (*scene).sphere->position.z);
	printf("%f\n", (*scene).sphere->radius);
	printf("%d\n", (*scene).sphere->colour.r);
	printf("%d\n", (*scene).sphere->colour.g);
	printf("%d\n", (*scene).sphere->colour.b);

	printf("%s\n", "Esto es square");
	printf("%f\n", (*scene).square->position.x);
	printf("%f\n", (*scene).square->position.y);
	printf("%f\n", (*scene).square->position.z);
	printf("%f\n", (*scene).square->orientation.x);
	printf("%f\n", (*scene).square->orientation.y);
	printf("%f\n", (*scene).square->orientation.z);
	printf("%f\n", (*scene).square->height);
	printf("%d\n", (*scene).square->colour.r);
	printf("%d\n", (*scene).square->colour.g);
	printf("%d\n", (*scene).square->colour.b);

	printf("%s\n", "Esto es cylinder");
	printf("%f\n", (*scene).cylinder->position.x);
	printf("%f\n", (*scene).cylinder->position.y);
	printf("%f\n", (*scene).cylinder->position.z);
	printf("%f\n", (*scene).cylinder->orientation.x);
	printf("%f\n", (*scene).cylinder->orientation.y);
	printf("%f\n", (*scene).cylinder->orientation.z);
	printf("%f\n", (*scene).cylinder->diameter);
	printf("%f\n", (*scene).cylinder->height);
	printf("%d\n", (*scene).cylinder->colour.r);
	printf("%d\n", (*scene).cylinder->colour.g);
	printf("%d\n", (*scene).cylinder->colour.b);

	printf("%s\n", "Esto es triangle");
	printf("%f\n", (*scene).triangle->a.x);
	printf("%f\n", (*scene).triangle->a.y);
	printf("%f\n", (*scene).triangle->a.z);
	printf("%f\n", (*scene).triangle->b.x);
	printf("%f\n", (*scene).triangle->b.y);
	printf("%f\n", (*scene).triangle->b.z);
	printf("%f\n", (*scene).triangle->c.x);
	printf("%f\n", (*scene).triangle->c.y);
	printf("%f\n", (*scene).triangle->c.z);
	printf("%d\n", (*scene).triangle->colour.r);
	printf("%d\n", (*scene).triangle->colour.g);
	printf("%d\n", (*scene).triangle->colour.b);
	*/
	return (0);
}
