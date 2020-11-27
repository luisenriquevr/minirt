/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_alight.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcayne <jalcayne@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:03:58 by lvarela           #+#    #+#             */
/*   Updated: 2020/11/27 11:52:07 by jalcayne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_color		ft_get_rgb(char *line)
{
	t_color	new_color;
	int		i;

	i = 0;
	new_color.r = ft_atoi(&line[i]);
	while (line[i] && line[i] != ',')
		i++;
	while (line[i] && (line[i] < '0' || line[i] > '9'))
		i++;
	new_color.g = ft_atoi(&line[i]);
	while (line[i] && line[i] != ',')
		i++;
	while (line[i] && (line[i] < '0' || line[i] > '9'))
		i++;
	new_color.b = ft_atoi(&line[i]);
	return (new_color);
}

void				ft_get_alight(t_scene **scene, char **line)
{
	t_alight		*alight;
	int				i;
	
	alight = (t_alight *) malloc(sizeof(t_alight) * 1);
	i = 1;
	while ((*line)[i] == ' ')
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
