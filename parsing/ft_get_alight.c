/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_alight.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:03:58 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 16:14:24 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static int			ft_error_alight(t_alight *alight)
{
	if ((alight->ratio < 0.0 || alight->ratio > 1.0)
	|| (alight->colour.r < 0 || alight->colour.r > 255)
	|| (alight->colour.g < 0 || alight->colour.g > 255)
	|| (alight->colour.b < 0 || alight->colour.b > 255))
	{
		perror("Los parametros de ambiental light son incorrectos\n");
		return (0);
	}
	return (1);
}


void				ft_get_alight(t_scene **scene, char *line)
{
	t_alight		*alight;
	int				i;
	
	alight = (t_alight *) malloc(sizeof(t_alight) * 1);
	i = 1;
	alight->ratio = ft_atof(&line[i]);
	i += ft_next_value(&line[i]);
	alight->colour = ft_get_rgb(&line[i]);
	if (ft_error_alight(alight))
		(*scene)->alight = alight;
	return ;
}
