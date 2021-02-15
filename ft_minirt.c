/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minirt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:53 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/12 18:12:14 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_scene			*ft_scene_reader(char *txt)
{
	t_scene		*scene;
	int         fd;
	char        *line;
	int         ret;
	
	scene = (t_scene *) malloc(sizeof(t_scene));
	ret = 1;
	if ((fd = open(txt, O_RDONLY)) <= 0)
	{
		printf("%s\n", "Archivo vacio o incorrecto\n");
		return (0);
	}
	ft_scene_init(&scene);
	while (ret > 0)
	{
		ret = get_next_line(fd, &line);
		ft_get_the_values(&scene, line);
		free(line);
	}
	if (ret == 0)
		printf("End\n");
	//free(line);
	return (scene);
}

int				ft_minirt(char *txt, int save)
{
	t_scene		*scene;
	
	scene = ft_scene_reader(txt);
	
	
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
	printf("%f\n", (*scene).sphere->diameter);
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
	printf("%f\n", (*scene).square->high);
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
	printf("%f\n", (*scene).cylinder->high);
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
	
	return (0);
}