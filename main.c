/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:53 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/04 15:55:01 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int				main(int argc, char *argv[])
{
	t_scene		*scene;
	int         fd;
	char        *line;
	int         ret;
	
	if (argc < 2 || argc > 3)
		return(printf("Argumentos incorrectos\n"));
	if ((fd = open(argv[1], O_RDONLY)) <= 0)
		return(printf("Archivo vacio o incorrecto\n"));
	scene = (t_scene *) malloc(sizeof(t_scene));
	ft_scene_init(&scene);
	ret = 1;
	while (ret > 0)
	{
		ret = get_next_line(fd, &line);
		ft_get_the_values(&scene, &line);
		free(line);
	}
	
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
	return(ret);
}
