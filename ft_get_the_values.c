/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_the_values.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 11:47:16 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/11 21:28:13 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void			ft_get_resolution(t_scene *scene, char **line)
{
	int			i;
	char		*x;
	int			size;
	
	i = 1;
	size = 0;
	while (line[i])
	{
		while (line[i] == ' ')
			i++;
		while (line[i] >= '0' && line[i] <= '9')
		{
			*x = line[i];
			*x++;
			i++;
			size++;
		}
	}
	i = ft_atoi(x);
	scene->resolution->x = malloc(sizeof(int) * size);
	scene->resolution->x = i;
	return ;
}

void			ft_get_the_values(t_scene *scene, char **line)
{
	if (*line == "R")
		ft_get_resolution(scene, line);
	return ;
}