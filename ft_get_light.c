/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_light.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:06:32 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/04 15:47:16 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void			ft_get_light(t_scene **scene, char **line)
{
	t_light 	*light;
	int			i;
	
	light = (t_light *) malloc(sizeof (t_light) * 1);
	i = 1;
	light->position = ft_get_vector(&(*line)[i]);
	while ((*line)[i] && (*line)[i] == ' ')
		i++;
	while ((*line)[i] != ' ' && (*line)[i])
		i++;
	light->ratio = ft_atof(&(*line)[i]);
	while ((*line)[i] && (*line)[i] == ' ')
		i++;
	while ((*line)[i] != ' ' && (*line)[i])
		i++;
	light->colour = ft_get_rgb(&(*line)[i]);
	(*scene)->light = light;
	return ;
}