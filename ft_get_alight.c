/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_alight.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:03:58 by lvarela           #+#    #+#             */
/*   Updated: 2020/12/01 18:38:02 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void				ft_get_alight(t_scene **scene, char **line)
{
	t_alight		*alight;
	int				i;
	
	alight = (t_alight *) malloc(sizeof(t_alight) * 1);
	i = 1;
	while (((*line)[i] < '0' || (*line)[i] > '9') && (*line)[i] != '-' && (*line[i]))
		i++;
	//printf("%s\n", &(*line)[i]);
	alight->ratio = ft_atof(&(*line)[i]);
	printf("%f\n", alight->ratio);

	while ((*line)[i] && (*line)[i] != ' ')
		i++;
	while ((*line)[i] && ((*line)[i] < '0' || (*line)[i] > '9'))
		i++;
	alight->color = ft_get_rgb(&(*line)[i]);
	(*scene)->alight = alight;
	return ;
}
