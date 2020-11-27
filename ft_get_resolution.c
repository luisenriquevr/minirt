/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_resolution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:02:16 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/27 10:59:22 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void				ft_get_resolution(t_scene **scene, char **line)
{
	t_resolution	*resolution;
	int				i;

	resolution = (t_resolution *)malloc(sizeof(t_resolution) * 1);
	i = 0;
	while ((*line)[i] == ' ')
		i++;
	write(1, "vami1", 5);
	resolution->x = ft_atoi(&(*line)[i]);
	while ((*line)[i] >= '0' && (*line)[i] <= '9')
		i++;
	while ((*line)[i] == ' ')
		i++;
	write(1, "vami2", 5);
	resolution->y = ft_atoi(&(*line)[i]);
	(*scene)->resolution = resolution;
	return ;
}
