/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_resolution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:02:16 by lvarela           #+#    #+#             */
/*   Updated: 2021/03/04 16:11:21 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minirt.h"

static int	ft_error_resolution(t_resolution *resolution)
{
	if (resolution->x <= 0 || resolution->y <= 0)
	{
		perror("Los parametros de resolution son incorrectos\n");
		return (0);
	}
	return (1);
}


void				ft_get_resolution(t_scene **scene, char *line)
{
	t_resolution	*resolution;
	int				i;

	resolution = (t_resolution *)malloc(sizeof(t_resolution) * 1);
	i = 1;
	resolution->x = ft_atoi(&line[i]);
	i += ft_next_value(&line[i]);
	resolution->y = ft_atoi(&line[i]);
	if (ft_error_resolution(resolution))
		(*scene)->resolution = resolution;
	return ;
}

