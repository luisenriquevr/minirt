/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cylinder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:24:20 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/05 11:29:36 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void            ft_get_cylinder(t_scene **scene, char **line)
{
    t_cylinder     *cylinder;
	int         i;

	cylinder = (t_cylinder *) malloc(sizeof(t_cylinder) * 1);
	i = 2;
	cylinder->position = ft_get_vector(&(*line)[i]);
	while ((*line)[i] && (*line)[i] == ' ')
		i++;
	while ((*line)[i] != ' ' && (*line)[i])
		i++;
	cylinder->orientation = ft_get_vector(&(*line)[i]);
	while ((*line)[i] && (*line)[i] == ' ')
		i++;
	while ((*line)[i] != ' ' && (*line)[i])
		i++;
	cylinder->diameter = ft_atof(&(*line)[i]);
    while ((*line)[i] && (*line)[i] == ' ')
		i++;
	while ((*line)[i] != ' ' && (*line)[i])
		i++;
	cylinder->high = ft_atof(&(*line)[i]);
	while ((*line)[i] && (*line)[i] == ' ')
		i++;
	while ((*line)[i] != ' ' && (*line)[i])
		i++;
	cylinder->colour = ft_get_rgb(&(*line)[i]);
	(*scene)->cylinder = cylinder;
	return ;
}