/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scene_reader.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:04:04 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/18 19:42:18 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

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
	return (scene);
}
