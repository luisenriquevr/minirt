/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_camera.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:08:28 by lvarela           #+#    #+#             */
/*   Updated: 2020/12/07 18:24:18 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "minirt.h"

void			ft_get_camera(t_scene **scene, char **line)
{
	t_camera	*camera;
	int			i;

	camera = (t_camera *) malloc(sizeof(t_camera) * 1);
	i = 1;
	while ((*line)[i] == ' ' && (*line)[i])
		i++;
	camera->position = ft_get_vector(&(*line)[i]);
	while ((*line)[i] != ' ' && (*line)[i])
		i++;
	while ((*line)[i] == ' ' && (*line)[i])
		i++;
	camera->orientation = ft_get_vector(&(*line)[i]);
	while ((*line)[i] != ' ' && (*line)[i])
		i++;
	while ((*line)[i] == ' ' && (*line)[i])
		i++;
	camera->fov = ft_atoi(&(*line)[i]);
	(*scene)->camera = camera;
	return ;
}