/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:41:53 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/11 21:32:18 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

static void		scene_init(t_scene **scene)
{
	(*scene)->alight = NULL;
	(*scene)->camera = NULL;
	(*scene)->cylinder = NULL;
	(*scene)->light = NULL;
	(*scene)->plane = NULL;
	(*scene)->resolution = NULL;
	(*scene)->sphere = NULL;
	(*scene)->square = NULL;
	(*scene)->triangle = NULL;
}

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
	scene_init(scene);
	//ret = 1;
	//while (ret > 0)
	//{
		ret = get_next_line(fd, &line);
		ft_get_the_values(scene, &line);
		printf("%d\n", scene->resolution->x);
	//}
	return(ret);
}
