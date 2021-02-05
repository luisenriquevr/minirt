/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sphere.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:06:15 by lvarela           #+#    #+#             */
/*   Updated: 2021/02/05 11:46:40 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void			ft_get_sphere(t_scene **scene, char **line)
{
	t_sphere	*sphere;
	int			i;
	
	sphere = (t_sphere *) malloc(sizeof(t_sphere) * 1);
	i = 2;
    sphere->position = ft_get_vector(&(*line)[i]);
	i += ft_next_value(&(*line)[i]);
    sphere->diameter = ft_atof(&(*line)[i]);
	i += ft_next_value(&(*line)[i]);
    sphere->colour = ft_get_rgb(&(*line)[i]);
	(*scene)->sphere = sphere;
	return ;
}