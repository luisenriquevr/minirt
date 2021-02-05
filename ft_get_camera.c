/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_camera.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:08:28 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/05 11:44:36 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "minirt.h"

void			ft_get_camera(t_scene **scene, char **line)
{
	t_camera	*camera;
	int			i;

	camera = (t_camera *) malloc(sizeof(t_camera) * 1);
	i = 1;
	camera->position = ft_get_vector(&(*line)[i]);
	i += ft_next_value(&(*line)[i]);
	camera->orientation = ft_get_vector(&(*line)[i]);
	i += ft_next_value(&(*line)[i]);
	camera->fov = ft_atoi(&(*line)[i]);
	(*scene)->camera = camera;
	return ;
}